/******************************************************************************/
/**
 * @file: 
 * @brief 标定参数头文件
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  All Rights Reserved
 * @date: 2020-8-30 17:34:10
 */
 /******************************************************************************/
#ifndef _HWA_H_
#define _HWA_H_
/*********************************************************************************
* Include files section
*********************************************************************************/
#include "HWAError.h"
#include "aaMacro.h"

/*********************************************************************************
* typedef section
*********************************************************************************/
/*Ego info*/
#define P_Global_EQ2RearAxis_m (1.863769F)  /*for calibration*/
#define P_Global_IFV2RearAxis_m (2.1)  /*for calibration*/
#define P_Global_EQ2LeftWheel_m (0.997475)  /*for calibration*/
#define P_Global_EQ2RightWheel_m (0.816397)  /*for calibration*/
/*VALID JUDGE*/
#define P_RFM_EQ_LINE_CONF   (0.5F)
#define P_RFM_EQ_BDRY_CONF   (0.5F)
#define P_RFM_EQ_TSR_CONF   (0.5F)
#define P_RFM_EQ_FSPX_CONF   (0.5F)
#define P_RFM_BDRY_LINE_THRE_C0 (20.F)
#define P_RFM_BDRY_LINE_THRE_C1 (2.F)
#define P_RFM_BDRY_LINE_THRE_C2 (0.125F)
#define P_RFM_BDRY_LINE_THRE_C3 (0.004F)
#define P_RFM_HWA_L1_VALID_THRE_C0 (0.5F)
/*SCENE*/
#define P_RFM_CROSS_LINE_THRESHOLD 1.03
#define P_RFM_LANE_WIDTH (3.75)/* m */
/*FRAME_CNT*/
#define P_RFM_FRAME_UPDATE (8U)/* frame */

/*NUMBER*/
#define P_RFM_HWALINE_NUM   (9)/*LINE*/
#define P_RFM_MRR_OBJ_NUM   (32)/*MRR*/
#define P_RFM_TSRMAXNUM (10)/*TSR*/
#define P_RFM_FSPXMAXNUM (72)/*FSPX*/
#define P_RFM_INTPMAXNUM (8)/*INTP*/
/*TSR*/
#define P_RFM_TSR_MATCH_DIS  (600) /* m */
#define P_RFM_LANE_SPL_HEIGHT (3.5F) /*m*/
#define P_RFM_TSR_KEEP_CNT (7)/*cycles*/

/*BOUNDARY*/
#define P_RFM_MAP_FRONT_DIS               (200)            
#define P_RFM_MAP_BEHIND_DIS              (-20) 
#define P_RFM_INSERT_PTS_TOTAL            (4) /* maximum number of points of interpolation*/
#define P_RFM_INSERT_PTS_TOTAL_BDRY        (64) /* Maximum number of points for quadratic interpolation */
#define P_RFM_INSERT_GAP (0.1)
#define P_RFM_BDRY_ANGLE (5) /*DEGREE*/
#define P_RFM_STATIC_VELOCTIY (3.F)   /* /M/S */
#define P_RFM_FITTING_MIN_NUM (4)   /* /M/S */
#define P_RFM_BIAS_DISTANCEY (3.4F)  /*M*/
#define P_RFM_BIAS_DISTANCEX (40.F)  /*M*/
#define P_RFM_RECORD_DIS_FRONT (20.F)  /*M RECORD MRR PTS FRONT DISTANCE*/
#define P_RFM_RECORD_DIS_BEHIND (-20.F)  /*M RECORD MRR PTS BEHIND DISTANCE*/
#define P_RFM_SELECT_DIS_FRONT (10.F)  /*M SELECT MRR PTS BEHIND DISTANCE*/
#define P_RFM_SELECT_DIS_BEHIND (-20.F)  /*M SELECT MRR PTS BEHIND DISTANCE*/

#define P_RFM_REQ_INLIER_NUM (4)  /* ransac max num of best_set pts num */

/*FITTING*/
#define P_RFM_FIT_RANK (3)
#define P_RFM_BDRY_RANK (2)
/*201026 for cam valid judge */
#define P_RFM_EGO_MOVING_V (0.5F)
#define P_RFM_LINE_FAIL_CNT_PREDICT (15)
#define P_RFM_LINE_FAIL_CNT (30)
/*for tsr fail judge*/
#define P_RFM_TSR_FAIL_CNT (5)
/*for center line*/
#define P_RFM_WIDTH_FOR_CLINE (5.0F)
/*NO USE*/
#define EgoRearAxleDis (1.817)  /* m */ /*for camera calibration*/
#define P_Global_EgoLength (4.751)       /* m */
#define P_Global_EgoWidth (2.12)        /* m */
#define P_Global_EgoHigh (1.72)         /* m */
#define LaneWidth (3.75)        /* m */
#define LaneNum (6)             /* m */
#define P_RFM_INSERT_PTS           (4)  

#define P_RFM_PI (3.1415926)

/*********************************************************************************
* Declaration of API functions section
*********************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif



#ifdef __cplusplus
}
#endif

#endif
