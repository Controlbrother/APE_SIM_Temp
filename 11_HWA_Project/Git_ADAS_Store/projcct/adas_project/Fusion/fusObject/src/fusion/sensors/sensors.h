#ifndef __SENSORS_H
#define __SENSORS_H

#include "camera_eq4.h"
#include "radar_MRR.h"
#include "radar_CR.h"
#include "radar_RSDS.h"
#include "lidar_type.h"

typedef enum {
	SENSOR_CAMERA = 0,
	SENSOR_RADAR_FRONT = 1,
	SENSOR_RADAR_FL = 2,
	SENSOR_RADAR_FR = 3,
	SENSOR_RADAR_RL = 4,
	SENSOR_RADAR_RR = 5,
	SENSOR_CNT = 6,
	SENSOR_NONE =255
} ESensorType;

#endif