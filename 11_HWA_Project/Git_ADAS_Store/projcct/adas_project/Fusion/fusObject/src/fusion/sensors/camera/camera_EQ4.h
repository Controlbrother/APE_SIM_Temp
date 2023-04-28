#ifndef __CAMERA_EQ4_H
#define __CAMERA_EQ4_H

#include "camera_type.h"

#ifndef EQ4_TIME_COEFFICIENT
#define EQ4_TIME_COEFFICIENT (0.001f)
#endif

#define INVALID (0)
#define VALID (1)
#define DEFAULT_INVALID_DATA (-9999.)
#define EQ4_CAMERA_TYPE_CNT (9)

typedef enum
{
	C_TYPE_UNKNOWN = 0,
	C_TYPE_CAR = 1,
	C_TYPE_TRUCK = 2,
	C_TYPE_MOTORCYCLE = 3,
	C_TYPE_BICYCLE = 4,
	C_TYPE_PEDESTRIAN = 5,
	C_TYPE_GENERAL = 6,				//general object(not implemented)
	C_TYPE_ANIMAL = 7,				//animal(not implemented)
	C_TYPE_UNCERTAIN_VCL = 8		//uncertain_vehicle
}CameraObjType;

typedef enum
{
	C_MOVE_INVALID = 0,
	C_MOVE_UNKNOWN = 1,
	C_MOVE_MOVING = 2,
	C_MOVE_STATIONARY = 3,
	C_MOVE_STOPPED = 4,
	C_MOVE_MOVING_SLOWLY = 5
}CameraObjMoveStatus;

typedef enum
{
	C_ORIENT_INVALID = 0,
	C_ORIENT_NORTH_EAST = 1,
	C_ORIENT_EAST = 3,
	C_ORIENT_SOUTH_EAST = 5,
	C_ORIENT_SOUTH = 6,
	C_ORIENT_SOUTH_WEST = 7,
	C_ORIENT_WEST = 9,
	C_ORIENT_NORTH_WEST = 11,
	C_ORIENT_NORTH = 12,
	C_ORIENT_UNKNOWN = 13
}CameraObjOrientation;

typedef enum
{
	C_CATE_UNFILLED = 0,
	C_CATE_UNDEFINED = 1,
	C_CATE_PASSING = 2,
	C_CATE_PASSING_IN = 3,
	C_CATE_PASSING_OUT = 4,
	C_CATE_CLOSE_CUT_IN = 5,
	C_CATE_MOVING_IN = 6,
	C_CATE_MOVING_OUT = 7,
	C_CATE_CROSSING = 8,
	C_CATE_LTAP = 9,
	C_CATE_RTAP = 10,
	C_CATE_MOVING = 11,
	C_CATE_PRECEEDING = 12,
	C_CATE_ONCOMING = 13
}CameraObjMoveCategory;

typedef enum
{
	C_VISIBLE_NONE = 0,
	C_VISIBLE_FRONT = 1,
	C_VISIBLE_REAR = 2
}CameraObjVisibilitySide;

int AdjustCameraObjectSize(CameraObject* object);

#endif