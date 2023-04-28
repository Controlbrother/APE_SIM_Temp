/******************************************************************************/
/**
 * @file: HWARoadIfvPack.h
 * @brief: 摄像头内部信号接口头文件。
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c) All Rights Reserved
 * @LastEditTime: 2020-08-03
 */
 /******************************************************************************/
#ifndef _HWA_ROAD_IFV_PACK_H_
#define _HWA_ROAD_IFV_PACK_H_
/*
********************************************************************************
* Include files
********************************************************************************
*/
#include "aaMacro.h"
/*
********************************************************************************
* Include Files Section
********************************************************************************
*/


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
typedef enum _tag_HWACamLineType {
	CAM_LINE_UNDECIDED,
	CAM_LINE_SOLID,
	CAM_LINE_DASHED,
	CAM_LINE_DOUBLE_SOLID_DASHED,
	CAM_LINE_DOUBLE_DASHED_SOLID,
	CAM_LINE_DOUBLE_SOLID_SOLID,
	CAM_LINE_DOUBLE_DASHED_DASHED,
	CAM_LINE_BOTTS,
	CAM_LINE_DECELERATION,
	CAM_LINE_HOV_LANE,
	CAM_LINE_ROAD_EDGE,
	CAM_LINE_ELEVATED_STRUCTURE,
	CAM_LINE_CURB,
	CAM_LINE_CONES_POLES,
	CAM_PARKED_CARS
} HWACamLineType;
/*
0x0: TYPE_SOLID_LINE
0x1: TYPE_DASHED_LINE
0x2: TYPE_DOUBLE_DASHED_DASHED
0x3: TYPE_DOUBLE_DASHED_SOLID
0x4: TYPE_DOUBLE_SOLID_DASHED
0x5: TYPE_DOUBLE_SOLID_SOLID
0x6: TYPE_MULTIPLE
0x7: TYPE_MULTIPLE_WARNING
0x8: TYPE_CAR_POOL
0x9: TYPE_ASPHALT_JOINT
0xa: TYPE_BOTTS_DOTS
0xb: TYPE_ROAD_EDGE
0xc: TYPE_GUARDRAIL
0xd: TYPE_CURBSTONE
0xe: TYPE_WALL
0xf: TYPE_TRAFFIC_CONE
0x10: TYPE_DELINEATOR_POST
0x11: TYPE_PARKING_CAR
0x12: TYPE_UNKNOWN_RAISED
0x13: TYPE_UNKNOWN
*/

typedef enum _tag_HWALaneIndex {
	HWA_L1 = 0,
	HWA_R1,
	HWA_L2,
	HWA_R2,
	HWA_L3,
	HWA_R3,
	HWA_LB,
	HWA_RB,
	HWA_CL,
	HWA_IDX_MAX
} HWALaneIndex;


typedef struct  _tag_CamLine
{
	HWACamLineType  nLaneType;
	AInt8U         nLaneLineID;
	AInt8U         nFrameIndex;
	AInt8U    Lane_Color;
	AInt8U    bStampValid;
	AInt32U    hdLaneLineStamp;
	AInt32U         nTrackAge;
	AFloat    hdCamQuality;   
	AFloat    dRangeStart;
	AFloat    dRangeEnd;
	AFloat    hdWidthMark;
	AFloat   dC0;
	AFloat   dC1;
	AFloat   dC2;
	AFloat   dC3;
	ADouble   stdC0;
	ADouble   stdC1;
	ADouble   stdC2;
	ADouble   stdC3;
	AInt8U    Lane_Cut;
	AInt8U    Lane_Cut_Type;
	AInt8U    Fail_Cnt;
}CamLine;
typedef struct _tag_HWAIFVPack {
	AInt8U          nNum;
	AInt32U      timestamp_ms;
	CamLine      line[HWA_IDX_MAX];	               /* L1/R1/L2/R2/L3/R3/LB/RB /PRED       */
} HWAIFVPack;

typedef struct  _tag_IntPoints
{
	AInt8U LAP_INTP_ID;   /*The ID of the point. Range is 1-255, while 0 indicates that the field in unfilled.*/
	AInt8U LAP_INTP_Distance_Age;   /*The consequent distance since the interest point was first detected*/
	AFloat LAP_INTP_Confidence;  /*The Confidence of the point.*/
	AInt8U LAP_INTP_Is_Valid;   /*Info should not be used if not valid. 0=NOT_VALID,1=VALID*/
	AInt8U LAP_INTP_Type;       /*0=SPLIT,1=MERGE Semantic information describing the point.*/
	AInt8U LAP_INTP_Is_Start;   /*0=END_OF_TRANSITION ,1=START_OF_TRANSITION*/
	AFloat LAP_INTP_Lat_Distance;
	AFloat LAP_INTP_Long_Distance;
}IntPoints;

typedef struct _tag_HWAINTP_Pack {
	AInt8U          nNum;           /*The number of detected interest points.*/
	AInt32U      timestamp_ms;
	AInt8U LAP_Is_Construction_Area;  /*Indicates whether this is a construction area scene.*/
	AInt8U LAP_INTP_Available;      /*Is info available*/
	AInt8U LAP_Exit_Merge_Available;   /*Is info available*/
	AInt8U LAP_Is_Highway_Merge_Left;   /*Indication for highway merge left to the host.*/
	AInt8U LAP_Is_Highway_Merge_Right;    /*Indication for highway merge right to the host.*/
	AInt8U LAP_Is_Highway_Exit_Left;     /*Indication for highway exit left to the host.*/
	AInt8U LAP_Is_Highway_Exit_Right;   /*Indication for highway exit right to the host.*/
	IntPoints    intp[P_RFM_INTPMAXNUM];
} HWA_INTP_Pack;
#endif /* _HWA_ROAD_IFV_PACK_H_ */
/*  */