#ifndef __GEOMETRY_H__
#define __GEOMETRY_H__

#include "common.h"
#include <math.h>
#ifndef M_PI
#define M_PI 3.1415926f
#endif
#define l2_distance(_param1, _param2, _dist)                                   \
  _dist = sqrt(pow((_param1).x - (_param2).x, 2) +                             \
               pow((_param1).y - (_param2).y, 2));

#define l2_range(_param, _range)                                               \
  _range = (float)sqrt(pow((_param).x, 2) + pow((_param).y, 2));

// static bool is_point_in_fov(const Point2F *pos, float fov) {
//   float theta = atan2(pos->y, pos->x);
//   return fabs(theta) < fov;
// }

static inline float from_degrees(float degrees) {
  return (float)(degrees * M_PI / 180.0f);
}

static inline float to_degrees(float radians) {
  return (float)(radians * 180.0f / M_PI);
}

static inline float normalize_angle_positive(float angle) {
  return (float)fmod(fmod(angle, 2.0 * M_PI) + 2.0 * M_PI, 2.0 * M_PI);
}

static inline float normalize_angle(float angle) {
  float radians = normalize_angle_positive(angle);
  if (radians > M_PI) {
    radians -= (float)(2.0 * M_PI);
  }
  return radians;
}

/*
 * return the angle of between _vector <x, y> and postive x-aixs,
 * clockwise, in radians, value range (-pi, pi].
 * pos (0, -1) at right side of vehicle would be -pi/2,
 * pos (0, 1) at left side would be pi/2.
 * pos (-1, 0) behind of vehicle would be pi(no -pi).
 */
#define clockwise_angle_with_x_aix_impl(_vector, _angle, _op)                  \
  _angle = atan2((_vector)_op y, (_vector)_op x);

#define clockwise_angle_with_x_aix(_vector, _angle)                            \
  clockwise_angle_with_x_aix_impl(_vector, _angle, .)

#define clockwise_angle_with_x_aix_ptr(_vector, _angle)                        \
  clockwise_angle_with_x_aix_impl(_vector, _angle, ->)

#define roate_counterclockwise_impl(_vector, _theta_radians, _out, _op)        \
  {                                                                            \
    float cos_theta = (float)cos(_theta_radians);                              \
    float sin_theta = (float)sin(_theta_radians);                              \
    (_out) _op x = cos_theta * (_vector)_op x + sin_theta * (_vector)_op y;    \
    (_out) _op y = cos_theta * (_vector)_op y - sin_theta * (_vector)_op x;    \
  }

#define roate_counterclockwise(_vector, _theta_radians, _out)                  \
  roate_counterclockwise_impl(_vector, _theta_radians, _out, .)

#define roate_counterclockwise_ptr(_vector, _theta_radians, _out)              \
  roate_counterclockwise_impl(_vector, _theta_radians, _out, ->)

#define roate_clockwise(_vector, _theta_radians, _out)                         \
  roate_counterclockwise_impl(_vector, -_theta_radians, _out, .)

#define roate_clockwise_ptr(_vector, _theta_radians, _out)                     \
  roate_counterclockwise_impl(_vector, -_theta_radians, _out, ->)

#endif