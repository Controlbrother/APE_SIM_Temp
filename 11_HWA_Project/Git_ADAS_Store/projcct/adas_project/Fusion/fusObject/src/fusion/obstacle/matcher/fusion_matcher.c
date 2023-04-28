#include "fusion_matcher.h"
#include "fusion_config.h"
#include "fusion_track.h"
#include "geometry.h"
#include "mal_dist.h"
#include "munkres_optimizer.h"
#include "object_container.h"
#include "cal_cost.h"
#include "assignment.h"
#include "fusion_track_logger.h"
#include "fusion_track_filter.h"

//local assignment is the row and col number of cost matrix
//transform this local assignment to global one of id by get_camera_unassignment or get_radar_unassignment
UCharPairArray64 local_assigned_idxs_;          

// make an assumption that idx for camera is consistant, so only focus on the
// unassigned track and objects
void match_camera_frame(FusionTrackFrame *track_frame, const CameraObjectFrame *object_frame, AssigmentArray *assigned_idxs,
                        UCharArray64 *unassigned_track_idxs, UCharArray64 *unassigned_object_idxs) 
{
  clear_array_ptr(assigned_idxs);
  clear_array_ptr(unassigned_track_idxs);
  clear_array_ptr(unassigned_object_idxs);
  log_current_function();
  log_camera_frame_info(object_frame);
  // log_camera_object_frame_simple(object_frame);
  // log_fusion_track_frame_simple(track_frame);
  assign_by_camera_id(track_frame, object_frame, assigned_idxs, unassigned_track_idxs, unassigned_object_idxs);
  // log_matcher_assignment(assigned_idxs, unassigned_track_idxs,
  // unassigned_object_idxs);
  if (array_ptr_empty(unassigned_track_idxs) || array_ptr_empty(unassigned_object_idxs)) // if there's no unassigned track or object, good; else huge calculation
  {
#if LOG_MATCH
    printf("unassigned track and object is clean\n");
#endif
    return;
  }
  // init cost matrix size with unassigned track size and unassigned object size
  init_mk_cost_matrix(unassigned_track_idxs->size, unassigned_object_idxs->size); 
  log_unassigned_track((const UCharArray64 *)unassigned_track_idxs, track_frame);
  log_unassigned_camera_object((const UCharArray64*)unassigned_object_idxs, object_frame);
  calc_cost_matrix_by_camera(unassigned_track_idxs, track_frame, unassigned_object_idxs, object_frame);
#if LOG_MATCH
  log_matrix(cost_matrix_, "cost_matrix_", "%6.2f ");
#if BLOCK_COST
  char input_cmd;
  scanf_s("%c", &input_cmd, 1);
#endif
#endif
  clear_array(local_assigned_idxs_);
  mk_minimize(&local_assigned_idxs_, CAMERA_ASSIGN_COST); // get index of cost matrix
  // log_mk_assignment(&local_assigned_idxs_);
  // transfer to track id and object id
  get_camera_unassignment(track_frame, object_frame, assigned_idxs, &local_assigned_idxs_, unassigned_track_idxs, unassigned_object_idxs);
  // log_matcher_assignment(assigned_idxs, unassigned_track_idxs, unassigned_object_idxs);
}

// when receiving a radar frame, call this to do matching
void match_radar_frame(FusionTrackFrame *track_frame, const RadarObjectFrame *object_frame, AssigmentArray *assigned_idxs,
                       UCharArray64 *unassigned_track_idxs, UCharArray64 *unassigned_object_idxs) 
{
  clear_array_ptr(assigned_idxs);
  clear_array_ptr(unassigned_track_idxs);
  clear_array_ptr(unassigned_object_idxs);
  log_current_function();
  log_radar_frame_info(object_frame);
  //log_radar_object_frame(object_frame);
  //log_radar_object_frame_simple(object_frame);
  //log_fusion_track_frame_simple(track_frame);
  assign_by_radar_id(track_frame, object_frame, assigned_idxs, unassigned_track_idxs, unassigned_object_idxs);
  // log_matcher_assignment(assigned_idxs, unassigned_track_idxs, unassigned_object_idxs);
  if (array_ptr_empty(unassigned_track_idxs) || array_ptr_empty(unassigned_object_idxs))// if there's no assigned tracks or radar objects, job is done
  {
#if LOG_MATCH
    printf("unassigned track and object is clean\n");
#endif
    return;
  }
  init_mk_cost_matrix(unassigned_track_idxs->size, unassigned_object_idxs->size);
  log_unassigned_track(unassigned_track_idxs, track_frame);
  log_unassigned_radar_object(unassigned_object_idxs, object_frame);
  calc_cost_matrix_by_radar(unassigned_track_idxs, track_frame, unassigned_object_idxs, object_frame);

#if LOG_MATCH
  log_matrix(cost_matrix_, "cost_matrix_", "%10.4f ");
  printf("\n");
#if BLOCK_COST
  char input_cmd;
  scanf_s("%c", &input_cmd, 1);
#endif
#endif
  clear_array(local_assigned_idxs_);
  mk_minimize(&local_assigned_idxs_, RADAR_ASSIGN_COST);
  //log_mk_assignment(&local_assigned_idxs_);
  get_radar_unassignment(track_frame, object_frame, assigned_idxs, &local_assigned_idxs_, unassigned_track_idxs, unassigned_object_idxs);
  log_matcher_assignment(assigned_idxs, unassigned_track_idxs, unassigned_object_idxs);
}

static int merge_radar_objects(FusionTrack* dest_track, FusionTrack* abandoned_track)
{
    int rtn_cnt = 0;
    for (int i = 0; i < RADAR_CNT; i++)
    {
        if (dest_track->radar_ids[i] == INVALID_ID && abandoned_track->radar_ids[i] != INVALID_ID)
        {
            dest_track->radar_ids[i] = abandoned_track->radar_ids[i];
            dest_track->radar_ages[i] = abandoned_track->radar_ages[i];
            dest_track->radar_object[i] = abandoned_track->radar_object[i];
            if (abandoned_track->radar_kf_data[i].inited == true)
            {
                init_kf_filter(&(dest_track->radar_kf_data[i]));
                dest_track->radar_kf_data[i] = abandoned_track->radar_kf_data[i];
            }
            rtn_cnt++;

        }
    }
    return rtn_cnt;
}

/*
function: merge abandoned track to destination track, update status of the destination track with abandoned track     
return: abandoned_track ptr
Warning: for now, only pure camera and pure MMR radar track fusion is considered
*/

static void merge_tracks(FusionTrack* dest_track, FusionTrack* abandoned_track)
{
    if (abandoned_track->camera_object || (abandoned_track->match_status & MATCH_CAMERA) == MATCH_CAMERA)            //camera track is abandoned
    {
        dest_track->camera_age = abandoned_track->camera_age;
        dest_track->camera_object = abandoned_track->camera_object;
        dest_track->camera_id = abandoned_track->camera_id;
        init_kf_filter(&(dest_track->camera_kf_data));
        dest_track->camera_kf_data = abandoned_track->camera_kf_data;
        dest_track->match_status |= abandoned_track->match_status;
        merge_radar_objects(dest_track, abandoned_track);
    }
    //only consider MRR case
    else if (abandoned_track->radar_object[RADAR_FRONT] || (abandoned_track->match_status > MATCH_CAMERA && (abandoned_track->match_status & MATCH_CAMERA) == 0))//pure radar track is abandoned
    {
        dest_track->match_status |= abandoned_track->match_status;
        merge_radar_objects(dest_track, abandoned_track);
    }
    GetTrackAllProperties(dest_track);
}



/*
function: update tracks property for those pure radar tracks who can fuse with pure camera tracks
          let pure radar tracks absorb camera sensor ID of pure camera tracks
          delete pure camera tracks afterward
return: void
*/
void update_fused_tracks(FusionTrackFrame* trackFrame, TrackAssigmentArray* assigned_idxs)
{
    FusionTrack* dest_track = NULL;
    FusionTrack* abandoned_track = NULL;
    for (unsigned char i = 0; i < assigned_idxs->size; ++i)
    {
        unsigned char pure_camera_track_idx = assigned_idxs->elems[i].first;
        unsigned char pure_radar_track_idx = assigned_idxs->elems[i].second;
        if (trackFrame->elems[pure_camera_track_idx].match_status & trackFrame->elems[pure_radar_track_idx].match_status)    //means they have same type of sensors match
            continue;          //do not merge these tracks
                                                                                                                            //only consider MMR radar age, if the pure radar track contains more than one type of radar
        if (trackFrame->elems[pure_camera_track_idx].camera_age < trackFrame->elems[pure_radar_track_idx].radar_ages[0])
        {
            abandoned_track = &(trackFrame->elems[pure_camera_track_idx]);
            dest_track = &(trackFrame->elems[pure_radar_track_idx]);
        }
        else
        {
            abandoned_track = &(trackFrame->elems[pure_radar_track_idx]);
            dest_track = &(trackFrame->elems[pure_camera_track_idx]);
        }
        //TODO:track's properties transfer to fused tracks

        merge_tracks(dest_track, abandoned_track);
        update_track_after_correction(dest_track);
        emplace_back_circular_buffer(fusion_track_id_buffer_, abandoned_track->id);         //release track id back to buffer
        unsigned char array_idx;
        find_elem_array(trackFrame->id_array, abandoned_track->id, array_idx);
        remove_index_array(trackFrame->id_array, array_idx);                                //remove abandoned track //potential problem
        empty_elem_array_ptr(trackFrame, (abandoned_track->id - 1));                        //empty that track buffer
        log_track_fusion_result(pure_camera_track_idx, pure_radar_track_idx);     
    }
}

/*
STEP 1: find all the tracks that contains pure camera ID, pure MRR ID or pure cornner ID
STEP 2: calculate cost matrix and do MK match
STEP 3: update the track holding radar ID with matched track's camera ID information
STEP 4: delete the track fused with other tracks
return: how many tracks has been fused
*/
//fuse tracks with pure camera id or pure radar id. run this function every cycle after sensor fusion match process
unsigned char fuse_tracks(FusionTrackFrame* trackFrame, TrackAssigmentArray* assigned_idxs, UCharArray64* pure_camera_track_idxs, UCharArray64* pure_radar_track_idxs)
{
    memset(pure_camera_track_idxs, 0, sizeof(UCharArray64));
    memset(pure_radar_track_idxs, 0, sizeof(UCharArray64));
    //STEP 1
    for (unsigned char i = 0; i < trackFrame->id_array.size; ++i)
    {
        unsigned char idx = trackFrame->id_array.elems[i] - 1;
        //do not match the very brand new track since it's covariance is copied from camera data and often is big which makes the cost dramatically small 
        if (((trackFrame->elems[idx].match_status & MATCH_CAMERA) == MATCH_CAMERA) && trackFrame->elems[idx].age != 1)			//camera ID match, and this is not a brand new camera track
        {
            pure_camera_track_idxs->elems[pure_camera_track_idxs->size] = idx;            //idx = id - 1 all refered to idx
            pure_camera_track_idxs->size++;
        }
        else if (trackFrame->elems[idx].match_status > MATCH_CAMERA && (((trackFrame->elems[idx].match_status) & MATCH_CAMERA) == 0))		//pure radar ID match
        {
            pure_radar_track_idxs->elems[pure_radar_track_idxs->size] = idx;
            pure_radar_track_idxs->size++;
        }
    }
    if (array_ptr_empty(pure_camera_track_idxs) || array_ptr_empty(pure_radar_track_idxs)) // if there's no pure camera ID track or pure radar ID track
    {
        #if LOG_MATCH
        printf("tracks fusion is clean\n");
        #endif
        return 0;
    }
    //STEP 2			
    init_mk_cost_matrix(pure_camera_track_idxs->size, pure_radar_track_idxs->size);
    log_current_function();
    log_track_title();
    log_track_status_with_id(pure_camera_track_idxs, trackFrame);
    log_track_status_with_id(pure_radar_track_idxs, trackFrame);
    calc_cost_matrix_by_track(pure_camera_track_idxs, pure_radar_track_idxs, trackFrame); //result stores in global variable cost_matrix
#if LOG_MATCH
    log_matrix(cost_matrix_, "cost_matrix_", "%10.4f ");
    printf("\n");
#if BLOCK_COST
    char input_cmd;
    scanf_s("%c", &input_cmd, 1);
#endif
#endif
    clear_array_ptr(assigned_idxs);
    clear_array(local_assigned_idxs_);
    mk_minimize(&local_assigned_idxs_, TRACK_ASSIGN_COST);
    get_track_unassignment(trackFrame, assigned_idxs,&local_assigned_idxs_, pure_camera_track_idxs, pure_radar_track_idxs);
    log_matcher_tracks_assignment(assigned_idxs, pure_camera_track_idxs, pure_radar_track_idxs);
    //STEP 3
    update_fused_tracks(trackFrame, assigned_idxs);
    return assigned_idxs->size;
}


