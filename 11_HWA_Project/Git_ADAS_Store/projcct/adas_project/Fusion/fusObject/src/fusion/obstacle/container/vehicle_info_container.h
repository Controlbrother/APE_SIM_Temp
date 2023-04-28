#ifndef __VEHICLE_INFO_CONTAINER_H_
#define __VEHICLE_INFO_CONTAINER_H_

#include "Object_Api.h"
#include "geometry.h"
#include "circular_buffer.h"
#include "ego_pack.h"

#define VEHICLE_INFO_QUEUE_LEN 10

typedef struct {
  float stamp;
  float speed;
  float accel_x;
  Vector2F accel;
  float jerk_x;
  float yaw_rate;			//unit: rad/s
  float side_slip_angle;
  float steering_angle;
  float kap_trajectory;
  float slope_accel_x;
} VehicleInfo;

DECLARE_CIRCULAT_BUFFER(VehicleInfoQueue, VehicleInfo, VEHICLE_INFO_QUEUE_LEN)

extern VehicleInfoQueue vehicle_info_queue_;
void add_system_time_frame(float sys_time);
void init_vehicle_info_container(void);
void add_can_vehicle_info(const EgoPack* vehicle_info_pack);
void get_vehicle_info(VehicleInfo **vehicle_info);
int get_latest_vehicle_info(VehicleInfo **vehicle_info);
void clear_vehicle_info_container(void);

#endif