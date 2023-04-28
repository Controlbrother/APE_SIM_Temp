#ifndef __TRACK_TYPE_H_
#define __TRACK_TYPE_H_

#include "sensors.h"
#include "matrix_operation.h"
typedef enum {
	CALCULATE_STAND = 4,
	CALCULATE_STAND_U = 8,
	CALCULATE_MOVING_L = 7,
	CALCULATE_MOVING_SLOWLY = 5,
	CALCULATE_MOVING = 2
} ECalculateMoveStatus;

#define MAX_POINT_NUM  (4)			//the same type of measurement

typedef enum {
	OBJECT_TYPE_UNCERTAIN_VCL = 0,
	OBJECT_TYPE_UNKNOWN = 1,
	OBJECT_TYPE_CAR = 2,
	OBJECT_TYPE_TRUCK = 3,
	OBJECT_TYPE_MOTORBIKE = 4,
	OBJECT_TYPE_BICYCLE = 5,
	OBJECT_TYPE_PEDESTRIAN = 6,
	OBJECT_TYPE_GENERAL = 7,
	OBJECT_TYPE_ANIMAL = 8
} EObjectType;

typedef enum {
	OBJECT_LANE_UNKNOWN,
	OBJECT_LANE_EGO_LANE,
	OBJECT_LANE_NEXT_LANE,
	OBJECT_LANE_OTHER_LANE
} EObjectLane;

typedef enum {
	MOVE_STATUS_INIT = 0,
	MOVE_STATUS_UNKNOWN = 1,
	MOVE_STATUS_DRIVE = 2,
	MOVE_STATUS_STAND = 3,
	MOVE_STATUS_STOPPED = 4,
	MOVE_STATUS_SLOWLY = 5,
	MOVE_STATUS_INVALID = 6
} EMoveStatus;

typedef enum {
	MOVE_DIRECTION_UNKNOWN = 0,
	MOVE_DIRECTION_PASSING = 1,
	MOVE_DIRECTION_PASSING_IN = 2,
	MOVE_DIRECTION_PASSING_OUT = 3,
	MOVE_DIRECTION_CLOSE_CUT_IN = 4,
	MOVE_DIRECTION_MOVING_IN = 5,
	MOVE_DIRECTION_MOVING_OUT = 6,
	MOVE_DIRECTION_CROSSING = 7,
	MOVE_DIRECTION_LTAP = 8,
	MOVE_DIRECTION_RTAP = 9,
	MOVE_DIRECTION_MOVING = 10,
	MOVE_DIRECTION_PRECEEDING = 11,
	MOVE_DIRECTION_ONCOMING = 12,
	MOVE_DIRECTION_STOPPED = 13
} EMoveDirection;	//radar

//typedef enum {
//	OREINTATION_UNKNOWN = 0,
//	OREINTATION_DRIFTING_RIGHT = 1,
//	OREINTATION_CROSSING_RIGHT = 3,
//	OREINTATION_OC_DRIFTING_RIGHT = 5,
//	OREINTATION_ONCOMING = 6,
//	OREINTATION_OC_DRIFTING_LEFT = 7,
//	OREINTATION_CROSSING_LEFT = 9,
//	OREINTATION_DRIFTING_LEFT = 11,
//	OREINTATION_PRECEEDING = 12
//} EOrientation;

typedef enum {
	OREINTATION_INVALID = 0,
	OREINTATION_UNKNOWN = 1, 
	OREINTATION_NORTH_EAST = 2,
	OREINTATION_EAST = 3,
	OREINTATION_SOUTH_EAST = 4,
	OREINTATION_SOUTH = 5,
	OREINTATION_SOUTH_WEST = 6,
	OREINTATION_WEST = 7,
	OREINTATION_NORTH_WEST = 8,
	OREINTATION_NORTH = 9,
	OREINTATION_CROSS = 10
}EOrientation;

typedef enum {
	MATCH_NONE = 0,
	MATCH_CAMERA = 1,
	MATCH_RADAR_FRONT = 2,
	MATCH_RADAR_FL = 4,
	MATCH_RADAR_FR = 8,
	MATCH_RADAR_RL = 16,
	MATCH_RADAR_RR = 32,
	MATCH_LIDAR = 64,
	MATCH_CONNER_RADAR = MATCH_RADAR_FL | MATCH_RADAR_FR | MATCH_RADAR_RL | MATCH_RADAR_RR,
	MATCH_RADAR = MATCH_RADAR_FRONT | MATCH_RADAR_FL | MATCH_RADAR_FR | MATCH_RADAR_RL | MATCH_RADAR_RR
} EMatchStatus;

typedef enum 
{
	MATCH_QUALITY_LOW,
	MATCH_QUALITY_MID,
	MATCH_QUALITY_HIGH,
} EMatchQuanlity;

typedef enum
{
	CONFIDENCE_10 = 1,
	CONFIDENCE_20 = 2,
	CONFIDENCE_30 = 3,
	CONFIDENCE_40 = 4,
	CONFIDENCE_50 = 5,
	CONFIDENCE_60 = 6,
	CONFIDENCE_70 = 7,
	CONFIDENCE_80 = 8,
	CONFIDENCE_90 = 9,
	CONFIDENCE_95 = 10,
	CONFIDENCE_99 = 11
}EConfidence;


typedef struct {
	bool inited;
	Vector x_prior;		//save this after prediction, load this before correction
	Vector x_poster;
	Matrix p_prior;		//save this after prediction, load this before correction
	Matrix p_poster;
}FusionTrackKfData;


typedef struct {
  unsigned char id;
  char status;
  unsigned int age;								
  unsigned int camera_age;
  unsigned int coasting_age;						//how many periods of all sensor type that this track coast
  ESensorType coasting_source;						
  unsigned int duration;							//how many periods this track exists
  unsigned char observation;						//how many observation has been observed by sensors		
  unsigned int radar_ages[RADAR_CNT];
  EObjectType type;
  EConfidence type_confidence;
  unsigned char lane;
  EMoveStatus move_status;
  EConfidence move_status_confidence;
  unsigned char orientation;
  unsigned char orientation_new;
  unsigned char orientation_new_age;
  bool is_cipv;
  unsigned char match_status;                       //match status of each sensor
  unsigned char match_quality;
  bool is_dead;
  //unsigned char radar_type;
  unsigned char camera_id;
  unsigned char radar_ids[RADAR_CNT];
  float stamp;
  Point2F rel_pos;
  Vector2F rel_vel;
  Vector2F abs_vel;
  Vector2F rel_accel;
  Point2F rel_pos_std;
  Vector2F rel_vel_std;
  Vector2F rel_accel_std;
  Size3D size3d;
  Size3D size3d_std;
  float heading;
  float heading_std;
  float yaw_angle;
  float exist_prob;
  float obstacle_prob;
  CameraObject *camera_object;
  RadarObject *radar_object[RADAR_CNT];
  FusionTrackKfData radar_kf_data[5];
  FusionTrackKfData camera_kf_data;
} FusionTrack;

typedef struct {
	unsigned char camera_stamp_error;
	unsigned char radar_stamp_error[5];
	unsigned char camera_data_error;
	unsigned char radar_data_error[5];
	unsigned char camera_data_std_error;
	unsigned char radar_data_std_error[5];
	unsigned char vehicle_stamp_error;
	unsigned char vehicle_data_error;
	char data_error;
    float stamp;
	UCharArray64 id_array;
	FusionTrack elems[MAX_OBSTACLE_CNT];
}FusionTrackFrame;

#endif