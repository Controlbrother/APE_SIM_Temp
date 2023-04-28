#ifndef __CAMERA_TYPE_H_
#define __CAMERA_TYPE_H_

#include "common.h"

#define MAX_CAMERA_OBJECT_CNT (20)
#define CAMERA_QUEUE_CAPCITY (2)
#define CAMERA_TYPE_CNT EQ4_CAMERA_TYPE_CNT
typedef enum
{
    NOT_VISIBLE = 0,
    FRONT = 1,
    REAR = 2

}EVisibleSide;

typedef struct {
  float stamp;
  unsigned char id;
  unsigned short age;
  unsigned char type;
  float type_prob;
  unsigned char lane;
  unsigned char move_status;
  unsigned char orientation;
  bool is_cipv;
  Point2F rel_pos;
  Vector2F rel_vel;
  Vector2F rel_accel;
  Point2F rel_pos_std;
  Vector2F rel_vel_std;
  Vector2F rel_accel_std;
  Size3D size3d;
  Size3D size3d_std;
  float heading;
  float heading_std;
  float exist_prob;
  bool object_has_cut_lane;
  bool object_has_cut_path;
  bool object_brake_light;
  bool object_turn_indicator_left;
  bool object_turn_indicator_right;
  bool object_bottom_out_of_image; 
  EVisibleSide object_visibility_side;
  bool object_in_drivable_area;
  bool object_is_very_closed;
} CameraObject;

typedef struct {
  float stamp;
  UCharArray64 id_array;
  CameraObject elems[MAX_CAMERA_OBJECT_CNT];
} CameraObjectFrame;

typedef struct {
    unsigned char head;
    unsigned char tail;
    bool is_full;
    unsigned char capacity;
    CameraObjectFrame elems[CAMERA_QUEUE_CAPCITY];
}CameraObjectFrameQueue;

typedef struct {
  bool is_exist;
  unsigned char type;
  float quality;
  float start_range;
  float end_range;
  float c0;
  float c1;
  float c2;
  float c3;
} LineInfo;

typedef struct {
  LineInfo left_left_line;
  LineInfo left_line;
  LineInfo right_line;
  LineInfo right_right_line;
} LineInfos;

#endif