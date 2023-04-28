#include "assignment.h"
#include "cal_cost.h"
#include "fusion_track_logger.h"
#include "munkres_optimizer.h"
#include "fusion_track_filter.h"

extern unsigned long DTC_counter;

unsigned char visited_flags_[UCHAR_MAX];

void assign_by_camera_id(FusionTrackFrame *fusion_track_frame, const CameraObjectFrame *camera_object_frame,
                         AssigmentArray *assigned_idxs, UCharArray64 *unassigned_track_idxs, UCharArray64 *unassigned_object_idxs) 
{
  unsigned char idx;
  const UCharArray64 *track_ids = &(fusion_track_frame->id_array); // each fusion track contains an matching id array
  const UCharArray64 *object_ids = &(camera_object_frame->id_array);
  if (array_ptr_empty(track_ids) || array_ptr_empty(object_ids)) // if fusion track id list or camera object id list is empty
  { 
    for (unsigned char i= 0; i < track_ids->size; i++) // fill in unassigned_track_idx by all the track id
    { 
      unsigned char track_idx = track_ids->elems[i] - 1;
      emplace_back_array_ptr(unassigned_track_idxs, track_idx);
    }
    for (idx = 0; idx < object_ids->size; idx++) 
    {
      emplace_back_array_ptr(unassigned_object_idxs, idx); // fill in unassigned_object_idx by all the object id
    }
    return;
  }
  memset(visited_flags_, 0, sizeof(visited_flags_));
  for (unsigned char i = 0; i < track_ids->size; i++) 
  { 
    unsigned char track_idx = track_ids->elems[i] - 1;
    FusionTrack *track = &(fusion_track_frame->elems[track_idx]);
    UCharArray6 *second = &(assigned_idxs->elems[assigned_idxs->size].second);
    if (track->camera_object) 
    {
        unsigned char find_elem_array_ptr(object_ids, track->camera_id, object_idx); //object_idx == location of track->camera_object->id in object_ids
      if (object_idx != INVALID_IDX) 
      {
        if (true == check_camera_id_assignment(track, &(camera_object_frame->elems[object_idx]))) // if match quality is good
        {
          emplace_back_array_ptr(second, object_idx);
          visited_flags_[object_idx] |= OBJECT_VISITED;
        }
      }
    }
    if (array_ptr_empty(second)) 
    {
      emplace_back_array_ptr(unassigned_track_idxs, track_idx);
    } 
    else 
    {
      assigned_idxs->elems[assigned_idxs->size].first = track_idx;
      assigned_idxs->size++;
    }
  }
  for (idx = 0; idx < object_ids->size; idx++) 
  {
    if (visited_flags_[idx] & OBJECT_VISITED) 
    {
      continue;
    }
    emplace_back_array_ptr(unassigned_object_idxs, idx);
  }
#if LOG_MATCH
  printf("tracks: \033[1;33m%d\033[0m\tassigned: \033[1;33m%d\033[0m\tunassigned track: \033[1;33m%d\033[0m\tunassigned object: \033[1;33m%d\033[0m\n",
         fusion_track_frame->id_array.size, assigned_idxs->size, unassigned_track_idxs->size, unassigned_object_idxs->size);
#endif
}

static void delete_camera_object_from_track(FusionTrack *track)
{
    track->camera_id = INVALID_ID;
    track->camera_age = 0;
    deinit_kf_filter(&(track->camera_kf_data));
    track->camera_object = NULL;
    track->match_status &= ~MATCH_CAMERA;
}

static void delete_radar_object_from_track(FusionTrack *track, ERadarType radar_type)
{
    track->radar_ids[radar_type] = INVALID_ID;
    track->radar_ages[radar_type] = INVALID_ID;
    deinit_kf_filter(&(track->radar_kf_data[radar_type]));
    track->radar_object[radar_type] = NULL;
    track->match_status &= ~(1 << (radar_type + 1));         //radar_type counting from 0,1,2,3,4
}

static void delete_object_from_track(FusionTrack* track, ESensorType sensor_type)
{
    if (sensor_type == SENSOR_CAMERA) delete_camera_object_from_track(track);
    else delete_radar_object_from_track(track, sensor_type2radar_type(sensor_type));
}

static bool check_longest_age(FusionTrack* track, ESensorType sensor_type)
{
    if (sensor_type == SENSOR_CAMERA)
    {
        for (int i = 0; i < RADAR_CNT; i++)
        {
            if (track->camera_age < track->radar_ages[i]) return false;
        }
        return true;
    }
    else
    {
        if (track->radar_ages[sensor_type - 1] < track->camera_age) return false;
    }
    for (int i = 0; i < RADAR_CNT; i++)
    {
        if (track->camera_age + EPSILON < track->radar_ages[i]) return false;
    }
    return true;
}

/* seperate one sensor id from track based on sensor age. This will produce a stable track id assigned with the longest age of sensors. 
   on camera measurement update cycle, if camera age is bigger than radar, delete radar info directly
   if radar age is bigger than camera, delete camera as new measurement, this is normal operation
   on radar measurement update cycle, if camera age is bigger than radar, delete radar as new measurement, this is normal operation;
   if radar age is bigger than camera, delete camera info but create no new measurement at all

   \return true if this sensor_type is good and kept; false if this sensor_type is deleted
*/
static bool delete_id_from_track(FusionTrack *track, ESensorType sensor_type)
{
    if (true == check_longest_age(track, sensor_type))       //this type of sensor id has the longest age ,delete all the other id from track
    {
            for(int i=(int)SENSOR_CAMERA;i<(int)SENSOR_CNT;i++)
            {
                if(sensor_type != i) delete_object_from_track(track, sensor_type);
            } 
            return true;
    }
    else
    {
        delete_object_from_track(track, sensor_type);  //delete this sensor from track
        return false;
    }
    //update track status later including coasting source, exsit prob, obstacle prob,
       
}

/*
    Function: check tracks with camera id and radar id match index
    if match is not good enough, delete not well matched camera or radar id from track's sensor id list
    list 
    FusionTrack *track: fusion track 
    return value: true: multiple radar id match quality is good 
                  false: multiple radar id match quality is bad, delete not well matched id 
*/
bool check_radar_id_assignment(FusionTrack *track, ERadarType radar_type, const RadarObject *object) 
{
    if (track->camera_object != NULL)
    {
        //observe the radar measurement x is in the camera's size or not
        //observe the radar measurement y is in the camera's size or not
        
        float camera_x_near = track->camera_object->rel_pos.x - 0.3f * track->camera_object->size3d.length;
        float camera_x_far = track->camera_object->rel_pos.x + 0.7f * track->camera_object->size3d.length;
        float camera_y_left = track->camera_object->rel_pos.y + track->camera_object->size3d.width / 2;
        float camera_y_right = track->camera_object->rel_pos.y - track->camera_object->size3d.width / 2;
        if (object->rel_pos.x > camera_x_near && object->rel_pos.x < camera_x_far && object->rel_pos.y > camera_y_right && object->rel_pos.y < camera_y_left)
        {
#if LOG_MATCH == 1
            printf("still in box region: x_min: %4.2f\tx_max: %4.2f\ty_min: %4.2f\ty_max: %4.2f\n\n", camera_x_near, camera_x_far, camera_y_right, camera_y_left);
#endif
                return true;
        }
#if LOG_MATCH == 1
        printf("out of box region: x_min: %4.2f\tx_max: %4.2f\ty_min: %4.2f\ty_max: %4.2f\n\n", camera_x_near, camera_x_far, camera_y_right, camera_y_left);
#endif
    }
    float cost = cost_of_track_to_radar((const FusionTrack*)track, radar_type, object);
    if (cost > RADAR_SEPERATE_COST) // if match is not good enough
    {
        unsigned int age_reduction = (unsigned int) (10 * cost/RADAR_SEPERATE_COST);
        if (track->radar_ages[radar_type] > age_reduction)            //based on history match relationship, lose radar id gradually
            track->radar_ages[radar_type] -= age_reduction;
        else  //reach lose camera id time
        {
            log_current_function();
            log_single_radar_object(object);
            log_single_track_status(track);
            log_radar_break_from_track(cost, object, track);
            return delete_id_from_track(track, radar_type2sensor_type(radar_type));
        }
    }
    return true;                             //match is fair or good
}

bool check_camera_id_assignment(FusionTrack *track, const CameraObject* object) //check the match quality of tracks with ID assignment directly
{
    if (track->camera_object != NULL)
    {
        //observe the radar measurement x is in the camera's size or not
        //observe the radar measurement y is in the camera's size or not

        float camera_x_near = track->camera_object->rel_pos.x - 0.3f * track->camera_object->size3d.length;
        float camera_x_far = track->camera_object->rel_pos.x + 0.7f * track->camera_object->size3d.length;
        float camera_y_left = track->camera_object->rel_pos.y + track->camera_object->size3d.width / 2;
        float camera_y_right = track->camera_object->rel_pos.y - track->camera_object->size3d.width / 2;
        if (object->rel_pos.x > camera_x_near && object->rel_pos.x < camera_x_far && object->rel_pos.y > camera_y_right && object->rel_pos.y < camera_y_left)
        {
#if LOG_MATCH == 1
            printf("still in box region: x_min: %4.2f\tx_max: %4.2f\ty_min: %4.2f\ty_max: %4.2f\n\n", camera_x_near, camera_x_far, camera_y_right, camera_y_left);
#endif
            return true;
        }
#if LOG_MATCH == 1
        printf("out of box region: x_min: %4.2f\tx_max: %4.2f\ty_min: %4.2f\ty_max: %4.2f\n\n", camera_x_near, camera_x_far, camera_y_right, camera_y_left);
#endif
    }
    float cost = cost_of_track_to_camera((const FusionTrack*)track, object);
    
    if (cost > CAMERA_SEPERATE_COST) // if match is not good enough
    {
        unsigned long age_reduction = (unsigned long)(10 * cost/CAMERA_SEPERATE_COST);
        if(track->camera_age > age_reduction)            //based on history match relationship, lose camera id gradually
            track->camera_age -= age_reduction;
        else  //reach lose camera id time
        {
            log_camera_break_from_track(cost, object, track);
            log_single_camera_object(object);
            log_single_track_status(track);
            return delete_id_from_track(track, SENSOR_CAMERA);
        }
    }
    return true; // match is fair or good
}

void assign_by_radar_id(FusionTrackFrame *fusion_track_frame, const RadarObjectFrame *radar_object_frame,
                        AssigmentArray *assigned_idxs, UCharArray64 *unassigned_track_idxs, UCharArray64 *unassigned_object_idxs) 
{
    unsigned char idx;
    const UCharArray64 *track_ids = &(fusion_track_frame->id_array);
    const UCharArray64 *object_ids =&(radar_object_frame->id_array); // a series of object_id from one type of radar sensor
    if (array_ptr_empty(track_ids) || array_ptr_empty(object_ids)) // if any of these is empty, copy one into another directly
    {                           
        for (unsigned char i = 0; i < track_ids->size; i++) // fill in unassigned_track_idx by all the track id
        { 
            unsigned char track_idx = track_ids->elems[i] - 1;
            emplace_back_array_ptr(unassigned_track_idxs, track_idx);
        }
        for (idx = 0; idx < object_ids->size; idx++) 
        {
            emplace_back_array_ptr(unassigned_object_idxs, idx);
        }
        return;
    }
    ERadarType radar_type = radar_object_frame->radar_type;
    memset(visited_flags_, 0, sizeof(visited_flags_));
    for (unsigned char i = 0; i < track_ids->size; i++) // fill in unassigned_track_idx by all the track id
    { 
        unsigned char track_idx = track_ids->elems[i] - 1;
        FusionTrack *track = &(fusion_track_frame->elems[track_idx]); // get single track
        UCharArray6 *second = &(assigned_idxs->elems[assigned_idxs->size].second); // get ptr of assignment id sensors
        //unsigned char temp_size =track->radar_ids[radar_type].size; // this track with one type of sensors, contains several ids
   
        unsigned char object_id = track->radar_ids[radar_type];   //take the id belongs to this type of sensor
        unsigned char find_elem_array_ptr(object_ids, object_id, object_idx); // object_idx=find object_id in object_ids
        if (object_idx != INVALID_IDX && radar_object_frame->elems[object_idx].age != 1) // if this is not a brand new radar object
        { 
            if(true == check_radar_id_assignment(track, radar_type, &(radar_object_frame->elems[object_idx])))          //if match quality is good
            {
                emplace_back_array_ptr(second, object_idx);
                visited_flags_[object_idx] |= OBJECT_VISITED;
            }
        } 

        if (array_ptr_empty(second))                                      //if no assignment has been given
        {                      
            emplace_back_array_ptr(unassigned_track_idxs, track_idx);     //this is an unassignment
        } 
        else 
        {
            assigned_idxs->elems[assigned_idxs->size].first = track_idx;  //else fill in track idx with assignment array
            assigned_idxs->size++;
        }
    }
    for (idx = 0; idx < object_ids->size; idx++) 
    {
        if (visited_flags_[idx] & OBJECT_VISITED) 
        {
            continue;
        }
        emplace_back_array_ptr(unassigned_object_idxs, idx);
    }
    #if LOG_MATCH
    printf("tracks: \033[1;33m%d\033[0m\tassigned: \033[1;33m%d\033[0m\tunassigned track: \033[1;33m%d\033[0m\tunassigned object: \033[1;33m%d\033[0m\n",
            fusion_track_frame->id_array.size, assigned_idxs->size, unassigned_track_idxs->size, unassigned_object_idxs->size);
    #endif
}

/*
    Function: get assignment and unassignment with local assignment committed by MK optimizer
    Parameters
    FusionTrackFrame *fusion_track_frame: fusion track frame containing all the tracks 
    CameraObjectFrame *camera_object_frame: camera objects 
    AssigmentArray *global_assignment_idxs: global assignments containing the id of track and object id array
    UCharPairArray64 *local_assignment_idxs: local assignments containing the row and col match pair 
    UCharArray64 *unassigned_track_idxs: output of unassigned tracks
    UCharArray64 *unassigned_object_idxs: output of unassigned objects
*/

void get_camera_unassignment(const FusionTrackFrame *fusion_track_frame,
                             const CameraObjectFrame *camera_object_frame,
                             AssigmentArray *global_assignment_idxs,
                             UCharPairArray64 *local_assignment_idxs,
                             UCharArray64 *unassigned_track_idxs,
                             UCharArray64 *unassigned_object_idxs) {
  memset(visited_flags_, 0, sizeof(visited_flags_));
  unsigned char idx = 0;
  for (idx = 0; idx < local_assignment_idxs->size; idx++) {
    unsigned char local_track_idx = local_assignment_idxs->elems[idx].first;
    unsigned char local_object_idx = local_assignment_idxs->elems[idx].second;
    unsigned char global_track_idx = unassigned_track_idxs->elems[local_track_idx];
    unsigned char global_object_idx = unassigned_object_idxs->elems[local_object_idx];
    //do_munkre() function may generate false match, so calculate the cost again 
    //and make a double check of cost since cost_matrix changes during calculation 
    float cost = cost_of_track_to_camera(
        &(fusion_track_frame->elems[global_track_idx]),
        &(camera_object_frame->elems[global_object_idx]));
    if(cost < CAMERA_ASSIGN_COST) {
      Assignment *assignment =
          &(global_assignment_idxs->elems[global_assignment_idxs->size]);
      assignment->first = global_track_idx;
      emplace_back_array(assignment->second, global_object_idx);
      global_assignment_idxs->size++;
      visited_flags_[global_track_idx] |= TRACK_VISITED;
      visited_flags_[global_object_idx] |= OBJECT_VISITED;
    }
  }
  for (idx = 0; idx < unassigned_track_idxs->size; idx++) {
    unsigned char global_track_idx = unassigned_track_idxs->elems[idx];
    if (visited_flags_[global_track_idx] & TRACK_VISITED) {
      order_remove_index_array_ptr(unassigned_track_idxs, idx);
    }
  }
  for (idx = 0; idx < unassigned_object_idxs->size; idx++) {
    unsigned char global_object_idx = unassigned_object_idxs->elems[idx];
    if (visited_flags_[global_object_idx] & OBJECT_VISITED) {
      order_remove_index_array_ptr(unassigned_object_idxs, idx);
    }
  }
}



/*
    Function: get assignment and unassignment with local assignment committed by MK optimizer 
    Parameters 
    FusionTrackFrame *fusion_track_frame: fusion track frame containing all the tracks 
    CameraObjectFrame *camera_object_frame: camera objects 
    AssigmentArray *global_assignment_idxs: global assignments containing the id of track and object id array 
    UCharPairArray64 *local_assignment_idxs: local assignments containing the row and col match pair 
    UCharArray64 *unassigned_track_idxs: output of unassigned tracks
    UCharArray64 *unassigned_object_idxs: output of unassigned objects
*/
void get_radar_unassignment(const FusionTrackFrame *fusion_track_frame,
                            const RadarObjectFrame *radar_object_frame,
                            AssigmentArray *global_assignment_idxs,
                            UCharPairArray64 *local_assignment_idxs,
                            UCharArray64 *unassigned_track_idxs,
                            UCharArray64 *unassigned_object_idxs) {
  memset(visited_flags_, 0, sizeof(visited_flags_));
  unsigned char idx = 0;
  for (idx = 0; idx < local_assignment_idxs->size; idx++) {
    unsigned char local_track_idx = local_assignment_idxs->elems[idx].first;
    unsigned char local_object_idx = local_assignment_idxs->elems[idx].second;
    unsigned char global_track_idx = unassigned_track_idxs->elems[local_track_idx];
    unsigned char global_object_idx = unassigned_object_idxs->elems[local_object_idx];
    //do_munkre() function may generate false match, so calculate the cost again 
    //and make a double check of cost since cost_matrix changes during calculation 
    float cost = cost_of_track_to_radar(
        &(fusion_track_frame->elems[global_track_idx]),
        radar_object_frame->radar_type,
        &(radar_object_frame->elems[global_object_idx]));
    if (cost < RADAR_ASSIGN_COST) {
      Assignment *assignment =
          &(global_assignment_idxs->elems[global_assignment_idxs->size]);
      assignment->first = global_track_idx;
      emplace_back_array(assignment->second, global_object_idx);
      global_assignment_idxs->size++;
      visited_flags_[global_track_idx] |= TRACK_VISITED;
      visited_flags_[global_object_idx] |= OBJECT_VISITED;
    }
  }
  for (idx = 0; idx < unassigned_track_idxs->size; idx++) {
    unsigned char global_track_idx = unassigned_track_idxs->elems[idx];
    if (visited_flags_[global_track_idx] & TRACK_VISITED) {
      order_remove_index_array_ptr(unassigned_track_idxs, idx);
    }
  }
  for (idx = 0; idx < unassigned_object_idxs->size; idx++) {
    unsigned char global_object_idx = unassigned_object_idxs->elems[idx];
    if (visited_flags_[global_object_idx] & OBJECT_VISITED) {
      order_remove_index_array_ptr(unassigned_object_idxs, idx);
    }
  }
}

/*
    Function: get assignment and unassignment with local assignment committed by MK optimizer
    Parameters
    FusionTrackFrame *fusion_track_frame: fusion track frame containing all the tracks
    AssigmentArray *global_assignment_idxs: global assignments containing the id of track and object id array
    UCharPairArray64 *local_assignment_idxs: local assignments containing the row and col match pair
    UCharArray64 *unassigned_pure_camera_idxs: ptr to unassigned pure camera ID tracks
    UCharArray64 *unassigned_pure_radar_idxs: ptr to unassigned pure radar ID tracks
*/
void get_track_unassignment(const FusionTrackFrame* fusion_track_frame, 
                            TrackAssigmentArray *global_assignment_idxs,
                            UCharPairArray64 *local_assignment_idxs,
                            UCharArray64 *unassigned_pure_camera_idxs,
                            UCharArray64 *unassigned_pure_radar_idxs)
{
    memset(visited_flags_, 0, sizeof(visited_flags_));
    unsigned char idx = 0;
    for (idx = 0; idx < local_assignment_idxs->size; idx++) {
        unsigned char local_track_idx = local_assignment_idxs->elems[idx].first ;
        unsigned char local_track2_idx = local_assignment_idxs->elems[idx].second ;
        unsigned char global_track_idx = unassigned_pure_camera_idxs->elems[local_track_idx];
        unsigned char global_track2_idx = unassigned_pure_radar_idxs->elems[local_track2_idx];
        float cost = cost_of_track_to_track(&(fusion_track_frame->elems[global_track_idx]), &(fusion_track_frame->elems[global_track2_idx]));
        if (cost < TRACK_ASSIGN_COST) {
            PureTrackAssignment* assignment = &(global_assignment_idxs->elems[global_assignment_idxs->size]);
            assignment->first = global_track_idx;
            assignment->second = global_track2_idx;
            global_assignment_idxs->size++;
            visited_flags_[global_track_idx] |= TRACK_VISITED;          //assigned
            visited_flags_[global_track2_idx] |= TRACK_VISITED;
        }
    }
    for (idx = 0; idx < unassigned_pure_camera_idxs->size; idx++) {
        unsigned char global_track_idx = unassigned_pure_camera_idxs->elems[idx];
        if (visited_flags_[global_track_idx] & TRACK_VISITED) {
            order_remove_index_array_ptr(unassigned_pure_camera_idxs, idx);
        }
    }
    for (idx = 0; idx < unassigned_pure_radar_idxs->size; idx++) {
        unsigned char global_object_idx = unassigned_pure_radar_idxs->elems[idx];
        if (visited_flags_[global_object_idx] & TRACK_VISITED) {
            order_remove_index_array_ptr(unassigned_pure_radar_idxs, idx);
        }
    }
}
