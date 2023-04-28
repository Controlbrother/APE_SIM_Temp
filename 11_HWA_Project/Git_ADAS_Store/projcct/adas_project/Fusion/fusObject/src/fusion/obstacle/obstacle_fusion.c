#include "obstacle_fusion.h"
#include "fusion_matcher.h"
#include "fusion_track.h"
#include "vehicle_info_container.h"
#include "fusion_track_logger.h"
#include "fusion_track_filter.h"
#include "ego_motion.h"
#include "camera.h"
#include "radar.h"
#include "DTC.h"
#include "embedded_perf.h"

ObjectFrameArray object_frame_array_;
AssigmentArray assigned_idxs_;                      //global assignment array contains camera/radar assignment with track
TrackAssigmentArray track_assigned_idxs_;
UCharArray64 unassigned_track_idxs_;
UCharArray64 pure_camera_track_idxs_;               //idxs array contains pure camera id tracks
UCharArray64 pure_radar_track_idxs_;                //idxs array contains pure radar id tracks
UCharArray64 unassigned_object_idxs_;


EMBEDDED_PERFORMANCE_TEST_DEFINE(match_camera);
EMBEDDED_PERFORMANCE_TEST_DEFINE(match_radar);
EMBEDDED_PERFORMANCE_TEST_DEFINE(update_camera_track);
EMBEDDED_PERFORMANCE_TEST_DEFINE(update_radar_track);
EMBEDDED_PERFORMANCE_TEST_DEFINE(update_camera_untrack);
EMBEDDED_PERFORMANCE_TEST_DEFINE(update_radar_untrack);
EMBEDDED_PERFORMANCE_TEST_DEFINE(update_camera_create);
EMBEDDED_PERFORMANCE_TEST_DEFINE(update_radar_create);
EMBEDDED_PERFORMANCE_TEST_DEFINE(predict_kf);
EMBEDDED_PERFORMANCE_TEST_DEFINE(fuse_tracks);

int init_obstacle_fusion(void) {
  init_vehicle_info_container();
  init_object_container();
  init_fusion_tracks();
  return 0;
}

int start_obstacle_fusion(void) { return 0; }

int stop_obstacle_fusion(void) { return 0; }

void reset_obstacle_fusion(void) {
  clear_vehicle_info_container();
  init_object_container();
  remove_all_fusion_tracks();
}

static void kf_predict_all_tracks(float delta_t, ObjectFrame *object_frame)
{
    EMBEDDED_PERFORMANCE_TEST_START(predict_kf);
   
    #if LOG_MATCH
    log_current_function();
    printf("delta_t : %4.4f\n", delta_t);
    log_track_title();
    #endif
    //predict all the tracks first, then commit match_frame, then correct them later if any tracks match with sensor data
    VehicleInfo* vehicle_info = NULL;
    get_vehicle_info(&vehicle_info);
    update_kf_state_transition(delta_t);         //update kf state transition only once, reduce calculation load
    update_kf_process_noise((1e3 * delta_t));    //update kf state transition only once, reduce calculation load
    for (unsigned char i = 0; i < fusion_track_frame_.id_array.size; i++)
    {  
        unsigned char idx = fusion_track_frame_.id_array.elems[i] - 1;
        FusionTrack* track = &(fusion_track_frame_.elems[idx]);
        if (track->match_status == MATCH_NONE)       //this is a coasting track
        { 
            if (track->camera_kf_data.inited == true)
            {
                process_kf_predict(track, delta_t, object_frame->stamp, SENSOR_CAMERA);
            }
            for (int j = SENSOR_RADAR_FRONT; j < SENSOR_CNT; j++)
            {
                if (track->radar_kf_data[j].inited == true)
                {
                    process_kf_predict(track, delta_t, object_frame->stamp, (ESensorType)j);
                }
            }
        }    
        if(0 != (track->match_status & MATCH_CAMERA)) //this is a track with match of camera
        { 
            process_kf_predict(track, delta_t, object_frame->stamp, SENSOR_CAMERA);  //update tracks stamp to new stamp
        }
        if (track->match_status > MATCH_CAMERA)        //this is a track with match of radars
        {
            for (unsigned char j = 0; j < RADAR_CNT; j++)
            {
                if (track->radar_kf_data[j].inited==true)
                {   
                    unsigned char sensor_type = j + 1;
                    process_kf_predict(track, delta_t, object_frame->stamp, sensor_type);    
                }
            }           
        }
        update_track_after_prediction(track);   //update track only once to reduce calculation
        #if LOG_MATCH
        log_single_track_status(track);         
        #endif
        //compensate for camera_kf_data, radar_kf_data and track data 
        compensate_ego_motion(track, delta_t, vehicle_info->yaw_rate);
    }
    
    EMBEDDED_PERFORMANCE_TEST_END(predict_kf);
}

static int fuse_frame(ObjectFrame *object_frame) {
    //check DTC first
    bool stamp_correct = true;
    float delta_t = object_frame->stamp - fusion_track_frame_.stamp;
    //frame stamp error occurred, input data frame is lagging current track stamp
    //do not predict but just correct the kf filter
    if (camera_frame_queue.is_full == true && fabs(delta_t) > 1.0f)
    {
        DTC_counter = 100;
        log_time_stamp_error(delta_t);
        return -1;            //if stamp is far beyond correct, directly return;
    }
    else
    {
        fusion_track_frame_.stamp = object_frame->stamp;
    }
    if (camera_frame_queue.is_full == true && (delta_t < 0 || delta_t > 0.1f))
    {
        DTC_counter = 300;
        log_time_stamp_error(delta_t);
        stamp_correct = false;
    }
    else
    {
        fusion_track_frame_.stamp = object_frame->stamp;
    }
    DTC_counter = 400;
    switch (object_frame->sensor_type) 
    {
        case SENSOR_CAMERA: {
        
        CameraObjectFrame *camera_object_frame = (CameraObjectFrame *)object_frame->frame;
        
        if (stamp_correct && delta_t < 0.1f) kf_predict_all_tracks(delta_t, object_frame);                           //commit kf prediction first, then ID assignment and match

        EMBEDDED_PERFORMANCE_TEST_START(match_camera);
        match_camera_frame(&fusion_track_frame_, camera_object_frame, &assigned_idxs_, &unassigned_track_idxs_, &unassigned_object_idxs_); //try to match camera frame first by id assignment
        EMBEDDED_PERFORMANCE_TEST_END(match_camera);
        prepare_fusion_track_for_camera();  //delete all the track_camera_frame info
        log_track_title();
        for (unsigned char i = 0; i < assigned_idxs_.size; i++) //update matched tracks
        {                       
            unsigned char track_idx = assigned_idxs_.elems[i].first;
            unsigned char object_idx = assigned_idxs_.elems[i].second.elems[0];
            EMBEDDED_PERFORMANCE_TEST_START(update_camera_track);
            update_fusion_track_from_camera(&(camera_object_frame->elems[object_idx]), &(fusion_track_frame_.elems[track_idx]));
            EMBEDDED_PERFORMANCE_TEST_END(update_camera_track);
        }
   
        //DO NOT update tracks with bigger time stamp with that of earlier measurement
        if (stamp_correct)
        {
            for (unsigned char i = 0; i < unassigned_track_idxs_.size; i++) //update unmatched tracks
            {               
                unsigned char track_idx = unassigned_track_idxs_.elems[i];
                EMBEDDED_PERFORMANCE_TEST_START(update_camera_untrack);
                update_untracked_fusion_track(SENSOR_CAMERA, &(fusion_track_frame_.elems[track_idx]));
                EMBEDDED_PERFORMANCE_TEST_END(update_camera_untrack);
            }
        }

        for (unsigned char i = 0; i < unassigned_object_idxs_.size; i++) //create new tracks for those object who cannot fuse with existing tracks 
        {              
            unsigned char object_idx = unassigned_object_idxs_.elems[i];
            EMBEDDED_PERFORMANCE_TEST_START(update_camera_create);
            create_fusion_track_from_camera(&(camera_object_frame->elems[object_idx]));
            EMBEDDED_PERFORMANCE_TEST_END(update_camera_create);
        }
        break;
    }
    case SENSOR_RADAR_FRONT:
    case SENSOR_RADAR_FL:
    case SENSOR_RADAR_FR:
    case SENSOR_RADAR_RL:
    case SENSOR_RADAR_RR: 
    {
        
        ERadarType radar_type = sensor_type2radar_type(object_frame->sensor_type);
        RadarObjectFrame *radar_object_frame = (RadarObjectFrame *)object_frame->frame;
        if (stamp_correct && delta_t < 0.1f) kf_predict_all_tracks(delta_t, object_frame);                           //commit kf prediction first, then ID assignment and match
		if (object_frame->sensor_type == SENSOR_RADAR_FRONT) EMBEDDED_PERFORMANCE_TEST_START(match_radar);
		match_radar_frame(&fusion_track_frame_, radar_object_frame, &assigned_idxs_, &unassigned_track_idxs_, &unassigned_object_idxs_); //try to match radar frame first by id assignment
		if (object_frame->sensor_type == SENSOR_RADAR_FRONT) EMBEDDED_PERFORMANCE_TEST_END(match_radar);
        prepare_fusion_tracks_for_radar(radar_type);    //delete all the track_radar_frame info
        log_track_title();
        for (unsigned char i = 0; i < assigned_idxs_.size; i++) 
        {
          unsigned char track_idx = assigned_idxs_.elems[i].first;
          UCharArray6 *object_idxs = &(assigned_idxs_.elems[i].second);
          prepare_update_track_from_radar(radar_type, &(fusion_track_frame_.elems[track_idx]));
          for (unsigned char j = 0; j < object_idxs->size; j++) 
          {
              if (object_frame->sensor_type == SENSOR_RADAR_FRONT) EMBEDDED_PERFORMANCE_TEST_START(update_radar_track);
              update_fusion_track_from_radar(radar_type, &(radar_object_frame->elems[object_idxs->elems[j]]), &(fusion_track_frame_.elems[track_idx]));
              if (object_frame->sensor_type == SENSOR_RADAR_FRONT) EMBEDDED_PERFORMANCE_TEST_END(update_radar_track);
          }
        }
    
        //DO NOT update tracks with bigger time stamp with that of earlier measurement
        if (stamp_correct)
        {
            for (unsigned char i = 0; i < unassigned_track_idxs_.size; i++) 
            {
                unsigned char track_idx = unassigned_track_idxs_.elems[i];
                if (object_frame->sensor_type == SENSOR_RADAR_FRONT)EMBEDDED_PERFORMANCE_TEST_START(update_radar_untrack);
                update_untracked_fusion_track(object_frame->sensor_type, &(fusion_track_frame_.elems[track_idx]));
                if (object_frame->sensor_type == SENSOR_RADAR_FRONT)EMBEDDED_PERFORMANCE_TEST_END(update_radar_untrack);
            }
        }

        for (unsigned char i = 0; i < unassigned_object_idxs_.size; i++) 
        {
          unsigned char object_idx = unassigned_object_idxs_.elems[i];
          if (object_frame->sensor_type == SENSOR_RADAR_FRONT)EMBEDDED_PERFORMANCE_TEST_START(update_radar_create);
          create_fusion_track_from_radar(radar_type, &(radar_object_frame->elems[object_idx]));
          if (object_frame->sensor_type == SENSOR_RADAR_FRONT)EMBEDDED_PERFORMANCE_TEST_END(update_radar_create);
        }
        break;
    }
  default:
      DTC_counter = 1000;
    break;
  }
  remove_lost_fusion_tracks();
  //try to match pure camera tracks and pure radar tracks
  //potential problem: match pure corner radar and pure MRR radar
  if (object_frame->sensor_type == SENSOR_RADAR_FRONT) EMBEDDED_PERFORMANCE_TEST_START(fuse_tracks);
  fuse_tracks(&fusion_track_frame_, &track_assigned_idxs_, &pure_camera_track_idxs_, &pure_radar_track_idxs_);
  if (object_frame->sensor_type == SENSOR_RADAR_FRONT) EMBEDDED_PERFORMANCE_TEST_END(fuse_tracks);
  return 0;
}

void do_obstacle_fusion(void) {
    get_object_frames(&object_frame_array_);  //store object frame in "object_frame_array_"
#if LOG_MATCH
    printf("\n\n\033[0;32mFUSION START\033[0m\n");
#endif
    for (unsigned char i = 0; i < object_frame_array_.size; i++) 
    {
        fuse_frame(&(object_frame_array_.elems[i]));
    }
#if LOG_MATCH
    log_frame_complete(&fusion_track_frame_);
    printf("\033[0;32mFUSION COMPLETE\033[0m\n");
#endif
    clear_container_frame_counter();
}