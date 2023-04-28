#ifndef __LIDAR_TYPE_H_
#define __LIDAR_TYPE_H_

#include "common.h"

#define MAX_LIDAR_OBJECT_CNT (16)

typedef struct {
  unsigned char id;
  unsigned char age;
  Point2F rel_pos;
  Vector2F rel_vel;
  Vector2F rel_accel;
  Vector3F size3d;
  float heading;
  float heading_std;
} LidarObject;

typedef struct {
  float stamp;
  UCharArray32 id_array;
  LidarObject elems[MAX_LIDAR_OBJECT_CNT];
} LidarObjectFrame;

#endif