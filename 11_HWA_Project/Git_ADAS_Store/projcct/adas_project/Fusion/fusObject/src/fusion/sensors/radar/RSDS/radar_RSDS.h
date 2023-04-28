#ifndef __RADAR_RSDS_H
#define __RADAR_RSDS_H

#include "radar_type.h"

#define MAX_RSDS_RADAR_OBJECT_CNT (6)

typedef enum
{
	RSDS_TYPE_UNKNOWN = 0,
	RSDS_TYPE_TRUCK = 1,
	RSDS_TYPE_CAR = 2,
	RSDS_TYPE_PEDESTRIAN = 3,
	RSDS_TYPE_BICYCLE = 4,
}RSDS_ObjType;

typedef enum
{
	RSDS_MOVE_INIT = 0,
	RSDS_MOVE_UNKNOWN = 1,
	RSDS_MOVE_MOVING = 2,
	RSDS_MOVE_STATIONARY = 4,
	RSDS_MOVE_STOPPED = 3
}RSDS_ObjMoveStatus;

typedef enum
{
	RSDS_ORIENT_INIT = 0,
	RSDS_ORIENT_ONCOMING = 1,			//equals SOUTH in camera orientation
	RSDS_ORIENT_INCOMING = 2,			//equals NORTH in camera orientation
	RSDS_ORIENT_CROSSING = 3
}RSDS_ObjOrientation;

#endif