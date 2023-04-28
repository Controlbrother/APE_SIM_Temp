#ifndef __RADAR_TYPE_H_
#define __RADAR_TYPE_H_

#include "common.h"

#define RADAR_QUEUE_CAPCITY (2)
#define RADAR_TYPE_CNT MRR_TYPE_CNT
typedef enum {
	RADAR_FRONT = 0,
	RADAR_FL = 1,
	RADAR_FR = 2,
	RADAR_RL = 3,
	RADAR_RR = 4,
	RADAR_CNT = 5
} ERadarType;

typedef struct {
  float stamp;
  unsigned char id;
  unsigned char age;
  unsigned char type;
  unsigned char move_status;
  unsigned char orientation;
  float exist_prob;
  float obs_prob;
  Point2F rel_pos;
  Vector2F rel_vel;
  Vector2F rel_accel;
  Point2F rel_pos_std;
  Vector2F rel_vel_std;
  Vector2F rel_accel_std;
  Vector2F size2d;
} RadarObject;

typedef struct {
  float stamp;
  ERadarType radar_type;
  UCharArray64 id_array;
  RadarObject *elems;
} RadarObjectFrame;

typedef struct {
	unsigned char head;
	unsigned char tail;
	bool is_full;
	unsigned char capacity;
	RadarObjectFrame elems[RADAR_QUEUE_CAPCITY];
}RadarObjectFrameQueue;

#endif