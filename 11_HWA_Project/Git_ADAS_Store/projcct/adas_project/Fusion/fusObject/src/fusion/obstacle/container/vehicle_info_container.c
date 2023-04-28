#include "vehicle_info_container.h"
#include "DTC.h"


VehicleInfoQueue vehicle_info_queue_;

void add_system_time_frame(float sys_time)
{
    fusion_track_frame_.stamp = sys_time;
}

void init_vehicle_info_container(void) 
{
  init_circular_buffer(vehicle_info_queue_);
}

void add_can_vehicle_info(const EgoPack *vehicle_info_pack) 
{
  VehicleInfo *vehicle_info = &vehicle_info_queue_.elems[vehicle_info_queue_.head];
  vehicle_info->stamp = 0;
  vehicle_info->speed = vehicle_info_pack->vxvRefMs;
  vehicle_info->accel_x = vehicle_info_pack->axRefMs2;
  vehicle_info->accel.x = vehicle_info_pack->axvRefMs2;
  vehicle_info->accel.y = vehicle_info_pack->ayvRefMs2;
  vehicle_info->jerk_x = vehicle_info_pack->axRefDt;
  vehicle_info->yaw_rate = vehicle_info_pack->psiDtOpt;
  vehicle_info->side_slip_angle = vehicle_info_pack->alpSideSlipAngle;
  vehicle_info->steering_angle = vehicle_info_pack->SteerAngleOffset_deg;
  vehicle_info->kap_trajectory = vehicle_info_pack->kapTraj;
  vehicle_info->slope_accel_x = vehicle_info_pack->axvRoadSlopeMs2;
  unsigned char get_end_index_circular_buffer(vehicle_info_queue_, end_idx);
  if (end_idx != INVALID_IDX) {
      VehicleInfo* pre_vehicle_frame = &(vehicle_info_queue_.elems[end_idx]);
      DTC_check_vehicle(pre_vehicle_frame, vehicle_info);
  }
  emplace_back_circular_buffer_move_pointer(vehicle_info_queue_);
}

void get_vehicle_info(VehicleInfo **vehicle_info) {
  unsigned char get_end_index_circular_buffer(vehicle_info_queue_, end_idx);
  if (end_idx != INVALID_IDX) {
    *vehicle_info = &(vehicle_info_queue_.elems[end_idx]);
    return;
  }
  DTC_counter = 18;
  assert(0);
  *vehicle_info = &(vehicle_info_queue_.elems[0]);
}

int get_latest_vehicle_info(VehicleInfo **vehicle_info) {
  unsigned char get_end_index_circular_buffer(vehicle_info_queue_, end_idx);
  if (end_idx != INVALID_IDX) {
      *vehicle_info = &(vehicle_info_queue_.elems[end_idx]);
      return 0;
  }
  else
      return -1;
}

void clear_vehicle_info_container(void) { init_vehicle_info_container(); }
