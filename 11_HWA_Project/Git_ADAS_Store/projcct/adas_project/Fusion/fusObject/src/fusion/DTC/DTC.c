#include "DTC.h"

unsigned long DTC_counter = 0;

#define check_data_std(_now_date,_last_data,error)                                     \
{                                                                                      \
    error |= _now_date->rel_vel_std.x < EPSILON;                                       \
    error |= _now_date->rel_vel_std.y  < EPSILON;                                      \
    error |= _now_date->rel_pos_std.x  < EPSILON;                                      \
    error |= _now_date->rel_pos_std.y  < EPSILON;                                      \
    error |= _now_date->rel_accel_std.x < EPSILON;                                     \
    error |= _now_date->rel_accel_std.y  < EPSILON;                                    \
    error |= fabsf(_now_date->rel_vel_std.x - _last_data->rel_vel_std.x) > 1.0f;       \
    error |= fabsf(_now_date->rel_vel_std.y - _last_data->rel_vel_std.y) > 0.5f;       \
    error |= fabsf(_now_date->rel_pos_std.x - _last_data->rel_pos_std.x) > 0.4f;       \
    error |= fabsf(_now_date->rel_pos_std.y - _last_data->rel_pos_std.y) > 0.4f;       \
    error |= fabsf(_now_date->rel_accel_std.x - _last_data->rel_accel_std.x) > 0.5f;   \
    error |= fabsf(_now_date->rel_accel_std.y - _last_data->rel_accel_std.y) > 0.5f;   \
}                                                                                      

/*!
check camera data with the last frame camera data
- this function is check whether the camera data of the current frame changes with respect to the previous frame
- 0 normal 8 stamp error
- Motion attribute error
- 0 normal 8 stamp error
- Motion attribute std error
- 0 narmal 1  error 

\param a pointer to a camera object frame
\param b pointer to a camera object 

\return void
*/
void DTC_check_camera_sensor(const CameraObjectFrame *pre_object_frame,
                             CameraObject *object) {
  unsigned char find_elem_array(pre_object_frame->id_array, object->id, pre_object_idx);
  if (pre_object_idx != INVALID_IDX) {
    const CameraObject *pre_object = &(pre_object_frame->elems[pre_object_idx]);
    if (fusion_track_frame_.camera_stamp_error == STAMP_NORMAL) {
      if ((object->stamp - pre_object->stamp > 0) &&
          (object->stamp - pre_object->stamp < 1)) {
        fusion_track_frame_.camera_stamp_error = STAMP_NORMAL;
      } else {
        fusion_track_frame_.camera_stamp_error |= STAMP_ERROR;
      }
    }
    if (fusion_track_frame_.camera_data_error == SENSOR_DATA_NORMAL) {
      if (fabsf(object->rel_vel.x - pre_object->rel_vel.x) > 10.0f ||
          fabsf(object->rel_vel.y - pre_object->rel_vel.y) > 4.0f ||
          fabsf(object->rel_pos.x - pre_object->rel_pos.x) > 10.0f ||
          fabsf(object->rel_pos.y - pre_object->rel_pos.y) > 10.0f ||
          fabs(object->rel_accel.x - pre_object->rel_accel.x) > 5.0f ||
          fabs(object->rel_accel.y - pre_object->rel_accel.y) > 5.0f) {
        fusion_track_frame_.camera_data_error |= SENSOR_DATA_ERROR;
      } else {
        fusion_track_frame_.camera_data_error = SENSOR_DATA_NORMAL;
      }
    }
    if (fusion_track_frame_.camera_data_std_error == 0) {
        bool iserror = 0;
        check_data_std(object, pre_object, iserror);
        if (iserror) {
            fusion_track_frame_.camera_data_std_error =1;
        }
        else {
            fusion_track_frame_.camera_data_std_error =0;
        }
    }
  }
}
/*!
check radar data with the last frame radar data
- this function is check whether the radar data of the current frame changes with respect to the previous frame
- 0 normal 8 stamp error
- Motion attribute error
- 0 normal 8 stamp error
- Motion attribute std error
- 0 narmal 1  error 

\param a pointer to a camera object frame
\param b pointer to a camera object 

\return void
*/
void DTC_check_radar_sensor(ERadarType radar_type,const RadarObjectFrame *pre_object_frame,
                            RadarObject *object) {

  unsigned char find_elem_array(pre_object_frame->id_array, object->id, pre_object_idx);
  if (pre_object_idx != INVALID_IDX ) {
    const RadarObject *pre_object = &(pre_object_frame->elems[pre_object_idx]);
    if (fusion_track_frame_.radar_stamp_error[radar_type] == STAMP_NORMAL) {
      if ((object->stamp - pre_object->stamp > 0) &&
          (object->stamp - pre_object->stamp < 1)) {
        fusion_track_frame_.radar_stamp_error[radar_type] = STAMP_NORMAL;
      } else {
        fusion_track_frame_.radar_stamp_error[radar_type] |= STAMP_ERROR;
      }
    }
    if (fusion_track_frame_.radar_data_error[radar_type] == SENSOR_DATA_NORMAL) {
      if (fabsf(object->rel_vel.x - pre_object->rel_vel.x) > 10.0f ||
          fabsf(object->rel_vel.y - pre_object->rel_vel.y) > 4.0f ||
          fabsf(object->rel_pos.x - pre_object->rel_pos.x) > 10.0f ||
          fabsf(object->rel_pos.y - pre_object->rel_pos.y) > 10.0f ||
          fabsf(object->rel_accel.x - pre_object->rel_accel.x) > 5.0f ||
          fabsf(object->rel_accel.y - pre_object->rel_accel.y) > 5.0f) {
        fusion_track_frame_.radar_data_error[radar_type] |= SENSOR_DATA_ERROR;
      } else {
        fusion_track_frame_.radar_data_error[radar_type] = SENSOR_DATA_NORMAL;
      }
    }
    if (fusion_track_frame_.radar_data_error[radar_type] == 0) {
        bool iserror = 0;
        check_data_std(object, pre_object, iserror);
        if (iserror) {
            fusion_track_frame_.radar_data_error[radar_type] = 1;
        }
        else {
            fusion_track_frame_.radar_data_error[radar_type] = 0;
        }
    }
  }
}

void DTC_check_vehicle(const VehicleInfo *pre_vehicle_frame,
                       VehicleInfo *vehicle_info) {
  if ((vehicle_info->stamp - pre_vehicle_frame->stamp > 0) &&
      (vehicle_info->stamp - pre_vehicle_frame->stamp < 1)) {
    fusion_track_frame_.vehicle_data_error = VEHICLE_STAMP_NORMAL;
  } else {
    fusion_track_frame_.vehicle_data_error = VEHICLE_STAMP_ERROR;
  }
  return;
}

void DTC_check_fusion_object(FusionTrack *track) {
  if (fabs(track->rel_pos.x) > 200.0f) {
    track->rel_pos.x = 201.0f;
  }
  if (fabs(track->rel_pos.y) > 50.0f) {
    track->rel_pos.x = 51.0f;
  }
  if (fabs(track->rel_vel.x) > 100.0f) {
    track->rel_pos.x = 101.0f;
  }
  if (fabs(track->rel_vel.y) > 50.0f) {
    track->rel_vel.y = 51.0f;
  }
  if (fabs(track->rel_accel.x) > 10.8f) {
    track->rel_accel.x = 11.0f;
  }
  if (fabs(track->rel_accel.y) > 10.8f) {
    track->rel_accel.y = 11.0f;
  }
  if (fabs(track->orientation) > 50) {
    track->orientation = 25;
  }
}