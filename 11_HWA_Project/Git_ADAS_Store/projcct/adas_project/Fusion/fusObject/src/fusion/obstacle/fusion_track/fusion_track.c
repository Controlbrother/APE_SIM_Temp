#include "fusion_track.h"
#include "circular_buffer.h"
#include "fusion_track_filter.h"
#include "object_container.h"
#include "vehicle_info_container.h"
#include "fusion_track_logger.h"
#include "vehicle_dynamic.h"
#include "DTC.h"

#define MAX_OFM_OBJ_CNT 80
#define UINT16_MAX 0xffff
#define PREDICT_TIME (0.1f)
#define PREDICT_TIME_SQUARE (0.01f)
#define PREDICT_DISTANCE(_x, _v, _a, _t, _t2) (_x + _v*_t + 0.5f*_a*_t2) 
#define PREDICT_VELOCITY(_v, _a, _t) (_v + _a*_t)

FusionTrackFrame fusion_track_frame_;
TrackIdBuffer fusion_track_id_buffer_;
CameraObjectFrame track_camera_frame_;
RadarObjectFrame track_radar_frame_[RADAR_CNT];
RadarObject track_radar_front_frame_elems_[MAX_FRONT_RADAR_OBJECT_CNT];
RadarObject track_radar_corner_frame_elmes_[RADAR_CNT - 1][MAX_CR_RADAR_OBJECT_CNT];


void init_fusion_tracks(void) 
{
  memset(&fusion_track_frame_, 0, sizeof(fusion_track_frame_));
  init_circular_buffer(fusion_track_id_buffer_);
  for (unsigned char i = 0; i < fusion_track_id_buffer_.capacity; i++) 
  {
    emplace_back_circular_buffer(fusion_track_id_buffer_, i + 1);           //filling fusion_track_id_buffer_ with 1,2,3,...64
  }
  memset(&track_camera_frame_, 0, sizeof(track_camera_frame_));
  memset(&track_radar_frame_, 0, sizeof(track_radar_frame_));
  memset(&track_radar_front_frame_elems_, 0, sizeof(track_radar_front_frame_elems_));
  memset(&track_radar_corner_frame_elmes_, 0, sizeof(track_radar_corner_frame_elmes_));
  track_radar_frame_[RADAR_FRONT].radar_type = RADAR_FRONT;
  track_radar_frame_[RADAR_FRONT].elems = track_radar_front_frame_elems_;
  for (unsigned char sensor_idx = RADAR_FL; sensor_idx < RADAR_CNT; sensor_idx++) {
    track_radar_frame_[sensor_idx].radar_type = sensor_idx;
    track_radar_frame_[sensor_idx].elems = track_radar_corner_frame_elmes_[sensor_idx - 1];
  }
}
//clone camera object from a pointer in track to a instance in track_camera_frame_ and update the pointer in track and point it to that of track_camera_frame 
static void clone_track_camera_object(const CameraObject *object, FusionTrack *track) {
  UCharArray64 *object_ids = &(track_camera_frame_.id_array);
  track_camera_frame_.elems[object_ids->size] = *object;//instance copy
  track->camera_object = &(track_camera_frame_.elems[object_ids->size]);//track only contains a camera object pointer points to a intstance defined in track_camera_frame_
  emplace_back_array_ptr(object_ids, object->id);
}

static void clone_track_radar_object(ERadarType radar_type, const RadarObject* object, FusionTrack* track)//potential problem only conser of one buffer of all the types of radar
{
    UCharArray64* object_ids = &(track_radar_frame_[radar_type].id_array);
    track_radar_frame_[radar_type].elems[object_ids->size] = *object;
    track->radar_object[radar_type] = &(track_radar_frame_[radar_type].elems[object_ids->size]);
    emplace_back_array_ptr(object_ids, object->id);
}

#define get_new_track_id(_id)                                                  \
  _id = 0;                                                                     \
  pop_front_circle_buffer(fusion_track_id_buffer_, _id);

#define mask_match_status(_radar_type, _track)                                 \
  switch (_radar_type) {                                                       \
      case RADAR_FRONT: {                                                          \
        (_track)->match_status |= MATCH_RADAR_FRONT;                               \
        break;                                                                     \
      }                                                                            \
      case RADAR_FL: {                                                             \
        (_track)->match_status |= MATCH_RADAR_FL;                                  \
        break;                                                                     \
      }                                                                            \
      case RADAR_FR: {                                                             \
        (_track)->match_status |= MATCH_RADAR_FR;                                  \
        break;                                                                     \
      }                                                                            \
      case RADAR_RL: {                                                             \
        (_track)->match_status |= MATCH_RADAR_RL;                                  \
        break;                                                                     \
      }                                                                            \
      case RADAR_RR: {                                                             \
        (_track)->match_status |= MATCH_RADAR_RR;                                  \
        break;                                                                     \
      }                                                                            \
      default: {                                                                   \
DTC_counter = 19;\
        assert(0);                                                                 \
        break;                                                                     \
      }                                                                            \
  }

int create_fusion_track_from_camera(CameraObject *object) 
{
  Point2F tempPosStd = { 10, 10 };              //temperally used for camera covariance since no good result received from sensor
  Vector2F tempVelStd = { 10, 10 };
  Vector2F tempAccelStd = { 10, 10 };
  bool is_circular_buffer_empty(fusion_track_id_buffer_, is_empty);                
  if (is_empty == true)
  {
      return -1;
  }
  unsigned char get_new_track_id(id);
  DTC_counter = 20;
  assert(id != INVALID_ID);
  FusionTrack *track = &(fusion_track_frame_.elems[id - 1]);
 
  memset(track, 0, sizeof(FusionTrack));
  track->id = id;
  track->age = 1;
  track->duration = 1;
  track->observation = MAX_OBSERVATION;  //if this track is created by camera observation, directly create an confirmed track.
  track->camera_age = 1;
  track->coasting_age = 0;
  //track->coasting_source = SENSOR_CAMERA;   
  track->status = 'U';                  //if this track is creating by camera observation, directly give it a status of Update
  track->type = object->type;
  track->lane = object->lane;
  track->is_cipv = object->is_cipv;
  track->match_status = MATCH_CAMERA;
  track->is_dead = false;
  track->rel_pos = object->rel_pos;
  track->rel_vel = object->rel_vel;
  track->rel_accel = object->rel_accel;
  track->rel_pos_std = tempPosStd; // object->rel_pos_std; since eq4 output is not correct
  track->rel_vel_std = tempVelStd; // object->rel_vel_std;
  track->rel_accel_std = tempAccelStd; // object->rel_accel_std;
  track->size3d = object->size3d;
  track->size3d_std = object->size3d_std;
  track->heading = object->heading;
  track->heading_std = object->heading_std;
  track->exist_prob = 1.;
  track->obstacle_prob = 1.;
  track->stamp = object->stamp;
  track->camera_id = object->id;
  emplace_back_array(fusion_track_frame_.id_array, id);
 
  init_fusion_track_filter(track, SENSOR_CAMERA, object);
  //init_circular_buffer(track->his_points);
  clone_track_camera_object(object, track); //clone camera_object ptr from object to track
  update_track_information(track);
  GetTrackAllProperties(track);
#if HEADING_ANGLE_ENABLE
  VehicleInfo *vehicle_info = NULL;
  get_vehicle_info(0, &vehicle_info);
  calc_track_heading(track, vehicle_info);
#endif
  #if LOG_MATCH
  printf("\033[1;33mcreate new track id: %d\twith CAMERA object %d\033[0m\n", id, object->id);
  #endif
  return 0;
}

int create_fusion_track_from_radar(ERadarType radar_type, RadarObject *object) 
{
    bool is_circular_buffer_empty(fusion_track_id_buffer_, is_empty);
    if (is_empty == true)
    {
        return -1;
    }
    unsigned char get_new_track_id(id);
    DTC_counter = 21;
    assert(id != INVALID_ID);
    FusionTrack *track = &(fusion_track_frame_.elems[id - 1]);
    memset(track, 0, sizeof(FusionTrack));
    track->id = id;
    track->status = 'N';
    track->age = 1;
    track->duration = 1;
    track->observation = 1; // if this track is created by radar observation,observe it for a longer duration
    track->match_status = 1 << ( radar_type + 1 );         //radar_type counting from 0,1,2,3,4 
    track->coasting_age = 0;
    track->coasting_source = radar_type + 1;      //radar type counting from 0,1,2,3,4
    track->radar_ages[radar_type] = 1;
    track->lane = OBJECT_LANE_UNKNOWN;
    track->stamp = object->stamp;
    mask_match_status(radar_type, track);
    track->is_dead = false;
    track->rel_pos = object->rel_pos;
    track->rel_vel = object->rel_vel;
    track->rel_accel = object->rel_accel;
    track->rel_pos_std = object->rel_pos_std;
    track->rel_vel_std = object->rel_vel_std;
    track->rel_accel_std = object->rel_accel_std;
    track->size3d.length = object->size2d.x;            //potential problem
    track->size3d.width = object->size2d.y;
    track->exist_prob = object->exist_prob;
    track->obstacle_prob = object->obs_prob;
    //emplace_back_array(track->radar_ids[radar_type], object->id);
    track->radar_ids[radar_type] = object->id;
    clone_track_radar_object(radar_type, object, track);
    ESensorType sensor_type = radar_type2sensor_type(radar_type);
    init_fusion_track_filter(track, sensor_type, object);
	update_track_information(track);
    GetTrackAllProperties(track);
    //init_circular_buffer(track->his_points);
    emplace_back_array(fusion_track_frame_.id_array, id);
    #if HEADING_ANGLE_ENABLE
    VehicleInfo *vehicle_info = NULL;
    get_vehicle_info(0, &vehicle_info);
    calc_track_heading(track, vehicle_info);
    #endif
    #if LOG_MATCH
    printf("\033[1;33mcreate new track id: %d\twith RADAR object id: %d\033[0m\n", id, object->id);
    #endif
    return 0;
}

void create_fusion_track_from_lidar(LidarObject *object) {}

 void prepare_fusion_track_for_camera(void) {
  memset(&track_camera_frame_, 0, sizeof(track_camera_frame_));
}

void update_fusion_track_from_camera(CameraObject *object, FusionTrack *track) {
    track->status = 'U';
    if (track->duration < UINT16_MAX) track->duration++;
    if (track->age < UINT16_MAX) track->age++;
    if (track->camera_age < UINT16_MAX) track->camera_age++;
    track->coasting_age = 0;
    //track->coasting_source = SENSOR_CAMERA;
    track->type = object->type;
    track->lane = object->lane;
    track->match_status |= MATCH_CAMERA;
    track->is_cipv = object->is_cipv;
    track->size3d = object->size3d;
    track->size3d_std = object->size3d_std;
    track->heading = object->heading;
    track->heading_std = object->heading_std;
    track->exist_prob = 1;
    track->obstacle_prob = 1;
    track->camera_id = object->id;
    update_track_information(track);
    clone_track_camera_object(object, track);
    GetTrackAllProperties(track);

    if(track->camera_kf_data.inited ==false)
        init_fusion_track_filter(track, SENSOR_CAMERA, object);
    //if delta_t >1e-3, time is large enough, predict, or if delta_t < 0, need to use measurement to update kf
    else
    {
        log_single_camera_object(object); 
        update_kf_with_measurement(track, SENSOR_CAMERA, object); 
        log_single_track_status(track);
       
    }
    
#if HEADING_ANGLE_ENABLE
    VehicleInfo *vehicle_info = NULL;
    get_vehicle_info(0, &vehicle_info);
    calc_track_heading(track, vehicle_info);
#endif
}

 void prepare_fusion_tracks_for_radar(ERadarType radar_type) 
 {
  clear_array(track_radar_frame_[radar_type].id_array);
  if (radar_type == RADAR_FRONT) {
    memset(track_radar_frame_[radar_type].elems, 0, sizeof(track_radar_front_frame_elems_));
  } 
  else 
  {
    memset(track_radar_frame_[radar_type].elems, 0, sizeof(track_radar_corner_frame_elmes_[radar_type]));
  }
}

void update_fusion_track_from_radar(ERadarType radar_type, RadarObject *object, FusionTrack *track) 
{
  ESensorType sensor_type = radar_type2sensor_type(radar_type);
  if (track->duration==MAX_OB_DURATION && track->status == 'N')                     //reach the decision time only for tentative track
  {
    if (track->observation <MAX_OBSERVATION)                                        // if observation is not good enough
    {
      track->is_dead = true;
      return;
    } 
    else 
      track->status = 'U';  
  }
  else   //for tracks holding status of 'U' and 'C'
  {
    track->status = 'U';
  }
  if(track->duration < UINT16_MAX)
    track->duration++;
  if (track->observation < UCHAR_MAX) 
    track->observation++;
  
  if (track->age < UINT16_MAX) {
    track->age++;
  }
  if (track->radar_ages[radar_type] < UINT16_MAX) {
    track->radar_ages[radar_type]++;
  }
  track->coasting_age = 0;
  mask_match_status(radar_type, track);
  //track->coasting_source = sensor_type;                             //potential problem
  if (!(track->match_status & MATCH_CAMERA)) {                      //potential problem if there's no match of camera
    // TODO: decide obstacle type by age while no camera
    track->type = object->type;
    // TODO: decide obstacle size by speed while no camera
    track->size3d.length = object->size2d.x;
    track->size3d.width = object->size2d.y;
    if ((radar_type == RADAR_FRONT) || (!(track->match_status & MATCH_RADAR_FRONT))) {
        track->exist_prob = object->exist_prob;
        track->obstacle_prob = object->obs_prob;
    }
  }
 /* if (radar_type == RADAR_FRONT) {
    track->move_status = object->move_status;
  }*/
  
  track->radar_ids[radar_type] = object->id;
  update_track_information(track);
  clone_track_radar_object(radar_type, object, track);
  GetTrackAllProperties(track);

  if(track->radar_kf_data[radar_type].inited == false)
      init_fusion_track_filter(track, sensor_type, object);          //potential problem
  else 
  {  
    log_single_radar_object(object);
    update_kf_with_measurement(track, radar_type2sensor_type(radar_type), object);
    log_single_track_status(track);
  }
 
 
#if HEADING_ANGLE_ENABLE
  VehicleInfo *vehicle_info = NULL;
  get_vehicle_info(0, &vehicle_info);
  calc_track_heading(track, vehicle_info);
#endif
  // TODO: add pos process measurement
  // TODO: calculate heading, heading_std
  // TODO: calculate track lane
  // TODO: calculate move_direction
  // TODO: calculate orientation
  // TODO: calculate is_cipv
  // TODO: calculate exist prob and obstacle prob
  // TODO: calculate match quality
  return;
}


void update_fusion_track_from_lidar(LidarObject *object, FusionTrack *track) {
  return;
}
//do not delay one period of changing match_status, or this logic will produce an permenent match_status of the original one 
//when radar id change from one type to another
//#define update_untracked_track_info(_track, _radar_type, _match_enum)          \
//  if (_track->match_status & _match_enum) {                                    \
//    track->age--;                                                              \
//  }                                                                            \
//  if((_track)->radar_ids[_radar_type] == INVALID_ID)                           \
//  (_track)->match_status &= ~_match_enum;                                      \
//  if ((_track)->radar_type == _radar_type) {                                   \
//    (_track)->radar_type = SENSOR_CNT;                                         \
//    (_track)->radar_object[_radar_type] = NULL;                                \
//  }                                                                            \
//  clear_array((_track)->radar_ids[_radar_type]);
void update_untracked_track_info_of_camera(FusionTrack* pTrack)
{
    pTrack->camera_id = INVALID_ID;
    pTrack->match_status &= ~MATCH_CAMERA;
    pTrack->camera_object = NULL;
    if (pTrack->camera_object || pTrack->radar_object[RADAR_FRONT] || pTrack->radar_object[RADAR_FL] || pTrack->radar_object[RADAR_FR] ||
        pTrack->radar_object[RADAR_RL] || pTrack->radar_object[RADAR_RR])
        deinit_kf_filter(&(pTrack->camera_kf_data));
}

void update_untracked_track_info_of_radar(FusionTrack* pTrack, ERadarType radar_type)
{
    pTrack->radar_ids[radar_type] = INVALID_ID;
    pTrack->match_status &= ~(1 << (radar_type + 1));
    pTrack->radar_object[radar_type] = NULL;
    if (pTrack->radar_kf_data[radar_type].inited == true)
    {
        if (pTrack->camera_object || pTrack->radar_object[RADAR_FRONT] || pTrack->radar_object[RADAR_FL] || pTrack->radar_object[RADAR_FR] ||
            pTrack->radar_object[RADAR_RL] || pTrack->radar_object[RADAR_RR])
        {
            deinit_kf_filter(&(pTrack->radar_kf_data[radar_type]));
        }
    }
}

//if one track CANNOT match with any of it's holding sensor id, then this track's status is coasting, else it's still holding status of "Update"
void update_untracked_fusion_track(ESensorType sensor_type, FusionTrack *track) 
{
  if(track->match_status == MATCH_NONE)    
    track->status = 'C';
  track->coasting_age ++;
  if (track->coasting_age >= MAX_COAST_AGE) 
  {
    track->is_dead = true;
    return;
  }

  update_kf_without_measurement(track, sensor_type);

  switch (sensor_type) 
  {
      case SENSOR_CAMERA:                                      //if camera does't refresh this track,clear this track info about camera
          update_untracked_track_info_of_camera(track);
          break;
      case SENSOR_RADAR_FRONT:
      case SENSOR_RADAR_FL: 
      case SENSOR_RADAR_FR: 
      case SENSOR_RADAR_RL: 
      case SENSOR_RADAR_RR:                                 //if radar does't refresh this track,clear this track info about radar
          update_untracked_track_info_of_radar(track, sensor_type2radar_type(sensor_type));
          break;
      default: 
      {
          DTC_counter = 22;
          assert(0);
          break;
      }
  }
  update_track_information(track);
  GetTrackAllProperties(track);
}

void remove_lost_fusion_tracks() 
{
  unsigned char dead_check_num = 0;
  log_current_function();
  for (unsigned char idx = 0; idx < fusion_track_frame_.id_array.size; idx++) 
  {
    unsigned char track_id = fusion_track_frame_.id_array.elems[idx];
    if (fusion_track_frame_.elems[track_id - 1].is_dead) 
    {
      dead_check_num++;
      log_single_track_status(&(fusion_track_frame_.elems[track_id - 1]));
      emplace_back_circular_buffer(fusion_track_id_buffer_, track_id);
      order_remove_index_array(fusion_track_frame_.id_array, idx);            //this doesn't work, required sequenced id
      //fusion_track_frame_.id_array.size--;
      empty_elem_array(fusion_track_frame_, track_id - 1);
    }
  }
#if LOG_MATCH
  printf("\n%d dead tracks above deleted\n\n", dead_check_num);
#endif
}

void remove_all_fusion_tracks() { init_fusion_tracks(); }


void get_fusion_track_frame(FusionTrackFrame **track_frame) 
{
  *track_frame = &fusion_track_frame_;
}

const CameraObject *get_track_camera_object(unsigned char id) {
  unsigned char find_elem_array(track_camera_frame_.id_array, id, object_idx);
  if (object_idx != INVALID_IDX) {
    return &(track_camera_frame_.elems[object_idx]);
  }
  return NULL;
}

const RadarObject *get_track_radar_object(ERadarType radar_type, unsigned char id) {
  unsigned char find_elem_array(track_radar_frame_[radar_type].id_array, id, object_idx);

  if (object_idx != INVALID_IDX) {
    return &(track_radar_frame_[radar_type].elems[object_idx]);
  }
  return NULL;
}
