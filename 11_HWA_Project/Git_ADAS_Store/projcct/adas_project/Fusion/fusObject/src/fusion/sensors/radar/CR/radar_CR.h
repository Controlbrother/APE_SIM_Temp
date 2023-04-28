#ifndef __RADAR_CR_H
#define __RADAR_CR_H

#include "radar_type.h"

#define MAX_CR_RADAR_OBJECT_CNT (6)

typedef enum
{
	CR_TYPE_UNKNOWN = 0,
	CR_TYPE_TRUCK = 1,
	CR_TYPE_CAR = 2,
	CR_TYPE_PEDESTRIAN = 3,
	CR_TYPE_BICYCLE = 4,
}CR_ObjType;

typedef enum
{
	CR_MOVE_INIT = 0,
	CR_MOVE_UNKNOWN = 1,
	CR_MOVE_MOVING = 2,
	CR_MOVE_STATIONARY = 4,
	CR_MOVE_STOPPED = 3
}CR_ObjMoveStatus;

typedef enum
{
	CR_ORIENT_INIT = 0,
	CR_ORIENT_ONCOMING = 1,			//equals SOUTH in camera orientation
	CR_ORIENT_INCOMING = 2,			//equals NORTH in camera orientation
	CR_ORIENT_CROSSING = 3
}CR_ObjOrientation;

#endif