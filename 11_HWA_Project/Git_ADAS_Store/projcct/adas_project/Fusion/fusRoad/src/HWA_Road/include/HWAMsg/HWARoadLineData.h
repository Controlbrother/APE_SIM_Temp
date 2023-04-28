/******************************************************************************/
/**
 * @file: HWARoadLineData.h
 * @brief: 道路车道和车道线线信息头文件。
 * @version: 3.0
 * @author: 
 * @copyright: Copyright (c)All Rights Reserved
 * @LastEditTime: 2020-08-03 
 */
 /******************************************************************************/
#ifndef _HWA_ROAD_LINE_DATA_H_
#define _HWA_ROAD_LINE_DATA_H_

/*
********************************************************************************
* Include Files Section
********************************************************************************
*/

#include "aaMacro.h"


/*
********************************************************************************
* Define Section
********************************************************************************
*/



/*
********************************************************************************
* Typedef Section
********************************************************************************
*/

typedef enum _tag_SensorSource {
	NONE = 0,
	HDM_GUIDE,
	HDM,
	IFV,
	LIDAR,
	IFV_AF_LIDAR
} SensorSource;

typedef enum _tag_LineType_en {
	EN_LINE_UNDECIDED,
	EN_LINE_SOLID,
	EN_LINE_DASHED,
	EN_LINE_DOUBLE_SOLID_DASHED,    /*in solid out dashed*/
	EN_LINE_DOUBLE_DASHED_SOLID,    /*out solid in dashed*/
	EN_LINE_DOUBLE_SOLID_SOLID,
	EN_LINE_DOUBLE_DASHED_DASHED,
	EN_LINE_BOTTS,
	EN_LINE_DECELERATION,
	EN_LINE_HOV_LANE,
	EN_LINE_ROAD_EDGE,
	EN_LINE_ELEVATED_STRUCTURE,
	EN_LINE_CURB,
	EN_LINE_CONES_POLES,
	EN_LINE_PARKED_CARS
} LineType_en;

typedef enum _tag_LineColor_en {
	EN_COLOUR_NONE = 0,
	EN_COLOUR_YELLOW = 1,
	EN_COLOUR_WHITE,
	EN_COLOUR_BLUE,
	EN_COLOUR_ORANGE
} LineColor_en;

typedef enum _tag_LineFuType_en {
	FU_LINE_UNKNOWN = 0,
	FU_LINE_CAMERA = 1,
	FU_LINE_HDMAP,
	FU_LINE_FUSION,
	FU_LINE_RESERVED
} LineFuType_en;


typedef struct _tag_SingleLineData {
	AInt32 nLineID;    
	AInt8U nTrackAge;  
	AInt8U bIsLineExist;
	AFloat dQuality;
	AFloat dC0V; 
	AFloat dC1V;  
	AFloat dC2V;
	AFloat dC3V;
	AFloat dOffset;
	AFloat dRad;
	AFloat dCurve; 
	AFloat dCurveRate; 
	AFloat dLineWidth; 
	LineType_en enLineType;
	LineColor_en enColour;
	AFloat dDisStart;
	AFloat dDisEnd;
	LineFuType_en eFuType;
} SingleLineData;

typedef struct _tag_LineData {
	SingleLineData lineL1;
	SingleLineData lineR1;
	SingleLineData lineL2;
	SingleLineData lineR2;
	SingleLineData lineL3;
	SingleLineData lineR3;
	SingleLineData lineLB;
	SingleLineData lineRB; 
	SingleLineData linePRED;
	SingleLineData lineF_LB;
	SingleLineData lineF_RB;
	SingleLineData lineCL;
} LineData;

typedef struct _tag_NOALineData {
	SingleLineData LINE_ENTRY_CL;
	SingleLineData LINE_EXIT_CL;
} NOALineData;

typedef struct _tag_Radar_LineData {

	SingleLineData lineLB;
	SingleLineData lineRB;
} Radar_LineData;

typedef enum _tag_LineExist {
	LINE_EXIST_DEFAULT = 0,
	LINE_NOT_EXIST,
	LINE_EXIST
} LineExist;

typedef enum _tag_LaneChangeDirect {
	INVALID_CL=0,
	LeftCL,
	RightCL
} LaneChangeDirect;

typedef struct _tag_LaneChangeStatus {
	ABool DecisionExist;
	ABool Crossed;
	LaneChangeDirect direction;
} LaneChangeStatus;

typedef struct _tag_HWALaneModel {
	AInt8U b_is_avalible;
	AInt8U en_lane_type;
	AInt8U i_speed_max;
	AFloat f_spd_change_dis;
	AInt8U i_change_spd_max;
	AFloat f_width;
	AInt8U b_vanish_valid;
	AFloat f_vanish_pt_dis;
} HWALaneModel;

typedef struct _tag_HWALaneWidthModel {
	AFloat dLaneLWidthCur;
	AFloat dLaneWidthNext;
	AFloat dLaneRWidthCur;
} HWALaneWidthModel;

typedef struct _tag_HWALaneModelAll {
	HWALaneWidthModel ifv_model;
	ABool bIsCamAvailable;
	LaneChangeStatus lanechange;   
}HWALaneModelAll;

#endif /* _HWA_ROAD_LINE_DATA_H_ */