#ifndef __DTC_H_
#define __DTC_H_

#include "track.h"
#include "object_container.h"
#include "obstacle_fusion.h"
#include "vehicle_info_container.h"
// object fusion module diagnostic trouble code of time stamp
extern FusionTrackFrame fusion_track_frame_;
extern unsigned long DTC_counter;

typedef enum {
  STAMP_NORMAL = 0,
  STAMP_ERROR = 8,

} OFM_DTC_STAMP;

typedef enum {
  SENSOR_DATA_NORMAL = 0,
  SENSOR_DATA_ERROR = 8,
  /*SENSOR_VX_ERROR = 1,
  SENSOR_VY_ERROR = 2,
  SENSOR_DX_ERROR = 4,
  SENSOR_DY_ERROR = 8,*/
} OFM_DTC_SENSOR;

typedef enum {
  VEHICLE_DATA_NORMAL = 0,
  VEHICLE_DATA_ERROR = 8,
  VEHICLE_STAMP_NORMAL = 2,
  VEHICLE_STAMP_ERROR = 4,

} OFM_DTC_VEHICLE;

void DTC_check_camera_sensor(const CameraObjectFrame *pre_object_frame, CameraObject *object);
void DTC_check_radar_sensor(ERadarType radar_type, const RadarObjectFrame* pre_object_frame,RadarObject* object);
void DTC_check_vehicle(const VehicleInfo *pre_vehicle_frame, VehicleInfo *vehicle_info);
void DTC_check_fusion_object(FusionTrack *track);

#endif // !__DTC_H


