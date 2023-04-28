#ifndef __VEHICLE_DYNAMIC_H
#define __VEHICLE_DYNAMIC_H

#include "track.h"
#include "vehicle_info_container.h"




extern float car_x, car_y, car_vx, car_vy, temp_cdis, temp_cangle, temp_x, temp_y;

#define Azimuth(a, b) (atan2(a, b) * 180.0 / 3.1415926)

#define vehcile_compensate_time(comp_time, comp_car)                           \
  temp_cdis = comp_car->speed * comp_time +                                     \
              0.5 * comp_car->accel.x * comp_time * comp_time;                  \
  temp_cangle = comp_car->yaw_rate * comp_time;                                 \
  car_x = temp_cdis * cos(0.5 * temp_cangle);                                  \
  car_y = temp_cdis * sin(0.5 * temp_cangle);                                  \
  car_vx = cos(temp_cangle) * comp_car->accel.x * comp_time;                    \
  car_vy = sin(temp_cangle) * comp_car->accel.x * comp_time

#define objcet_compensate_time(comp_time, comp_x, comp_y, comp_vx, comp_vy,    \
                               comp_ax, comp_ay)                               \
  temp_x = comp_x + comp_vx * comp_time +                                      \
           0.5 * comp_ax * comp_time * comp_time - car_x;                      \
  temp_y = comp_y + comp_vy * comp_time +                                      \
           0.5 * comp_ay * comp_time * comp_time - car_y;                      \
  comp_x = temp_x * cos(temp_cangle) + temp_y * sin(temp_cangle);              \
  comp_y = temp_y * cos(temp_cangle) - temp_x * sin(temp_cangle);              \
  temp_x = comp_vx + comp_ax * comp_time - car_vx;                             \
  temp_y = comp_vy + comp_ay * comp_time - car_vy;                             \
  comp_vx = temp_x * cos(temp_cangle) + temp_y * sin(temp_cangle);             \
  comp_vy = temp_y * cos(temp_cangle) - temp_x * sin(temp_cangle);             \
  temp_x = comp_ax;                                                            \
  temp_y = comp_ay;                                                            \
  comp_ax = temp_x * cos(temp_cangle) + temp_y * sin(temp_cangle);             \
  comp_ay = temp_y * cos(temp_cangle) - temp_x * sin(temp_cangle)

#endif

void update_orientation_info(VehicleInfo* vehicle_info, FusionTrack* track);
void update_track_information(FusionTrack* track);