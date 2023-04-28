#ifndef __RADAR_MRR_H
#define __RADAR_MRR_H

#include "radar_type.h"

#define MAX_FRONT_RADAR_OBJECT_CNT (32)
#define MRR_TYPE_CNT (5)

typedef enum
{
	MRR_TYPE_UNKNOWN = 0,
	MRR_TYPE_TRUCK = 1,
	MRR_TYPE_CAR = 2,
	MRR_TYPE_PEDESTRIAN = 3,
	MRR_TYPE_BICYCLE = 4,
}MRR_ObjType;

typedef enum
{
	MRR_MOVE_INIT = 0,
	MRR_MOVE_UNKNOWN = 1,
	MRR_MOVE_MOVING = 2,
	MRR_MOVE_STATIONARY = 4,
	MRR_MOVE_STOPPED = 3
}MRR_ObjMoveStatus;

typedef enum
{
	MRR_ORIENT_INIT = 0,
	MRR_ORIENT_ONCOMING = 1,			//equals SOUTH in camera orientation
	MRR_ORIENT_INCOMING = 2,			//equals NORTH in camera orientation
	MRR_ORIENT_CROSSING = 3
}MRR_ObjOrientation;


void Pre_cluster(RadarObjectFrame* pRadar_frame);

#endif