/******************************************************************************/
/**
 * @file:HWAapi.h
 * @brief: 传感器接收函数头文件
 * @version: 0.9
 * @author:
 * @copyright: Copyright (c)  All Rights Reserved
 * @date: 2020-9-7 17:04:58
 */
 /******************************************************************************/
#pragma once
#ifndef _HWA_API_H_
#define _HWA_API_H_
#include"aaMacro.h"
#define AOTUSAR_RFM (1)
#define AOTUBOX_RFM (0)

#if AOTUSAR_RFM
#include "RFM_Rte_Type.h"
#endif
#if AOTUBOX_RFM
#include "IfFusionRFM_MDL_types.h"
//#include "../../../HWA_Road_Api/autobox/IfFusionRFM_MDL_types.h"
#endif
#include "HWARoadPack.h"


typedef enum _tag_SensorType
{
	HWA_CAMERA = 0,
	HWA_FRONT_RADAR,
	HWA_LEFT_RADAR,
	HWA_RIGHT_RADAR,
	HWA_LEFT_BRADAR,
	HWA_RIGHT_BRADAR,
	HWA_TYPE_MAX
} HWA_SensorType;


#ifndef DEFINED_TYPEDEF_FOR_RFM_DEBUG_
#define DEFINED_TYPEDEF_FOR_RFM_DEBUG_

typedef struct _tag_RFM_DEBUG_PROC {
	AInt8U Receive_MRR_OK;
	AInt8U Receive_EGO_OK;
	AInt8U Receive_TIME_OK;
	AInt8U Receive_EHRV2_OK;
	AInt8U Receive_EQ_LANE_OK;
	AInt8U Receive_EQ_TSR_OK;
	AInt8U Receive_EQ_FSPX_OK;
	AInt8U Receive_EQ_INTP_OK;
	AInt8U Preproc_EQ_OK;
	AInt8U Preproc_MRR_OK;
	AInt8U Unify_Space_OK;
	AInt8U Unify_Fitting_OK;
	AInt8U Bdry_Static_Judge_OK;
	AInt8U Bdry_Dis_Sort_OK;
	AInt8U Bdry_Devide_Dir_OK;
	AInt8U Bdry_Buffer_OK;
	AInt8U Bdry_Fitting_OK;
	AInt8U Bdry_Interpolate_OK;
	AInt8U Bdry_Predict_OK;
	AInt8U Fus_Center_Line_OK;
	AInt8U Fus_Pred_Line_OK;
	AInt8U Fus_Lines_Predict_OK;
	AInt8U SPL_NAV_OK;
	AInt8U Scene_LaneID_OK;
	AInt8U Scene_LC_Judge_OK;
	AInt8U Layout_Width_OK;
	AInt8U Layout_FSPX_OK;
	AInt8U TSR_TSR_Valid_OK;
	AInt8U TSR_Spl_Value_OK;
	AInt8U TSR_Spl_End_OK;
	AInt8U TSR_Spl_sup_OK;
	AInt8U TSR_Lane_Spl_OK;
	AInt8U TSR_Cycle_Keep_OK;
	AInt8U Postproc_OK;
	AInt8U Result_Send_OK;
} RFM_DEBUG_PROC;

typedef struct _tag_RFM_DEBUG_ERROR {
	AInt8U error_systime;
	AInt8U error_inf;
	AInt8U error_nan;
	AInt8U error_assert;
	AInt8U error_camera;
	AInt8U error_mrr;
	AInt8U error_ehrv2;
	AInt8U error_ehrv3;
	AInt8U error_gps;
	AInt8U error_vie;
	AInt8U error_stuck;
	AInt8U error_frame_loss;
	AInt8U error_frame_stuck;
} RFM_DEBUG_ERROR;

typedef struct _tag_RFM_DEBUG_BUS {
	RFM_DEBUG_PROC proc_debug_info;
	RFM_DEBUG_ERROR error_debug_info;
} RFM_DEBUG_BUS;

#endif

/*RFM RESULT*/
#ifndef DEFINED_TYPEDEF_FOR_RFM_RESULT_NOA_
#define DEFINED_TYPEDEF_FOR_RFM_RESULT_NOA_

typedef struct _tag_RFM_Result {
	RFM_ROAD_BUS RFM_ROAD;
	RFM_TSR_BUS RFM_TSR;
	RFM_LANE_BUS RFM_BRANCH_LANE;
	RFM_LANE_BUS RFM_LEFT_LANE;
	RFM_LANE_BUS RFM_CURRENT_LANE;
	RFM_LANE_BUS RFM_RIGHT_LANE;
	RFM_INTERSEC_ALERT_BUS RFM_INTERSEC_ALERT;
	RFM_BRANCH_BUS RFM_BRANCH;
	RFM_REC_LANES_BUS RFM_REC_LANES;
	AInt32U RFM_UpdateCnt;
	RFM_LINE_BUS RFM_LINE_L1;
	RFM_LINE_BUS RFM_LINE_R1;
	RFM_LINE_BUS RFM_LINE_L2;
	RFM_LINE_BUS RFM_LINE_R2;
	RFM_LINE_BUS RFM_LINE_L3;
	RFM_LINE_BUS RFM_LINE_R3;
	RFM_LINE_BUS RFM_LINE_CL;
	RFM_LINE_BUS RFM_LINE_LB;
	RFM_LINE_BUS RFM_LINE_RB;
	RFM_LINE_BUS RFM_LINE_PRED;
	RFM_LINE_BUS RFM_LINEF_LB;
	RFM_LINE_BUS RFM_LINEF_RB;
	RFM_LINE_BUS RFM_LINE_ENTRY_CL;
	RFM_LINE_BUS RFM_LINE_EXIT_CL;
} RFM_Result;

#endif

#ifdef __cplusplus
extern "C" {
#endif

	/***********************common***************************/
	AVoid ReceiveEgo_HWA(HWAEgoPack *egopack,
		AFloat *axvRefMs2,
		AFloat *vxvRefMs,
		AFloat *axvRoadSlopeMs2,
		AFloat *axRefMs2,
		AFloat *axRefDt,
		AFloat *psiDtOpt,
		AFloat *ayvRefMs2,
		AFloat *alpSideSlipAngle,
		AFloat *kapTraj,
		AFloat *SteerAngleOffset_deg);

	AVoid ReceiveTime_HWA(HWATimePack * timepack, 
		AInt32U * SysCurrTimeMs,
		StbM_TimeStampExtendedType* IM_timeStamp,
		StbM_UserDataType* IM_userData,
		Std_ReturnType* IM_ReturnVal);
	/***********************road api***************************/
	AVoid ReceiveMrr_HWA(HWA_SensorInput_st *objectpack,
		const MRR_HDR_BUS *MRR_HDR,
		const MRR_OBJ_BUS *MRR_OBJ);

	AVoid ReceiveEHR_HWA(HWAEHRPack *ehrpack,
		const EHRV2_CTRL_INFO_BUS* EHRV2_CTRL_INFO,
		const EHRV2_ROAD_ATTR_INFO_BUS* EHRV2_ROAD_ATTR_INFO,
		AInt8U* MapDataValid);

	AVoid ReceiveEQLane_HWA(HWAIFVPack *campack,
		const EQ4_LH_BUS *EQ4_LH,
		const EQ4_LA_BUS *EQ4_LA,
		const EQ4_LRE_BUS *EQ4_LRE,
		const EQ4_LAP_BUS *EQ4_LAP);

	AVoid ReceiveTSR_HWA(HWATSRPack* tsrpack,
		const EQ4_TSR_BUS* EQ4_TSR);

	AVoid ReceiveFSPX_HWA(HWA_FSPXPack* fspxpack,
		const EQ4_FSPX_BUS* EQ4_FSPX);

	AVoid ReceiveINTP_HWA(HWA_INTP_Pack* pst_intp_pack,
		const EQ4_LAP_BUS* pack);

#ifdef __cplusplus
}
#endif



#endif


