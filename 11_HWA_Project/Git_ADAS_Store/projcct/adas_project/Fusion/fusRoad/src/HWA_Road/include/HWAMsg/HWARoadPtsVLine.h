/******************************************************************************/
/**
 * @file: HWARoadPtsVLine.h
 * @brief: 车道线点集线信息头文件。
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)All Rights Reserved
 * @LastEditTime: 2020-08-03
 */
 /******************************************************************************/
#ifndef _HWA_ROAD_PTSV_LINE_H_
#define _HWA_ROAD_PTSV_LINE_H_
/*
********************************************************************************
* Include Files Section
********************************************************************************
*/

/*#include "../HWAApi/HWA_Cali.h"*/
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
typedef struct _tag_PointD {    /* for world coordinate points */
	AFloat dx;
	AFloat dy;
} PointD;

typedef struct _tag_Point3d {
	AFloat dx;
	AFloat dy;
	AFloat dz;                    /*obligate*/
	AInt32U nID;
} Point3d;

typedef struct _tag_PtYaw {       /*for vechcle coordinate points */
	AFloat dx;
	AFloat dy;
	AFloat dYaw;                 /*radius*/
} PtYaw;

typedef struct _tag_PtRe {        /*for interpolate points*/
	AFloat dxV;
	AFloat dyV;
	AFloat dxD;
	AFloat dyD;
	AFloat dYawV;                /*radius*/
	AInt32U nID;
} PtRe;


typedef struct _tag_PtsV {
	PtYaw ptV[P_RFM_INSERT_PTS_TOTAL];
	AInt32U nNum;
} PtsV;

typedef struct _tag_Bdry_PtsV {
	PtYaw ptV[P_RFM_INSERT_PTS_TOTAL_BDRY];
	AInt32U nNum;
} Bdry_PtsV;
/* base on the ego-vehicle coordinate system */
typedef struct _tag_PtsVLine {
	PtsV lanePtsL;
	PtsV lanePtsR;
	PtsV lanePtsL2;
	PtsV lanePtsR2;
	PtsV lanePtsL3;
	PtsV lanePtsR3;
	PtsV BoundaryPtsL;
	PtsV BoundaryPtsR;
	PtsV lanePtsPRED;
	PtsV lanePtsCL;
} PtsVLine;


typedef struct _tag_Radar_PtsVLine {
	PtsV BoundaryPtsL;
	PtsV BoundaryPtsR;
} Radar_PtsVLine;

/*y=ax+b*/
typedef struct _tag_LineModel {
	AFloat dC0;/*b*/
	AFloat dC1;/*a*/
	AFloat dC2;
	AFloat dC3;
	AInt flag;
	AInt fit_num;
}LineModel;

#endif /* _HWA_ROAD_DRIVING_BENCHMARK_H_ */