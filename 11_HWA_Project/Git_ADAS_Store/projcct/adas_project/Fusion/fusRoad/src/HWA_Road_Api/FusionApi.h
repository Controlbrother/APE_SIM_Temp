#ifndef _RFM_HDR_FUSIONAPI_Road
#define _RFM_HDR_FUSIONAPI_Road

#include "HWAapi.h"
#include "HWA_R.h"
void  Fusion_Road_Init();
void Fusion_Road_Main(
	/********************EHR*****************/

	EHRV2_ROAD_ATTR_INFO_BUS* EHRV2_ROAD_ATTR_INFO,
	EHRV2_CTRL_INFO_BUS* EHRV2_CTRL_INFO,
	uint8_T* MapDataValid,
	/********************MRR*****************/
	MRR_HDR_BUS *MRR_HDR,
	MRR_OBJ_BUS *MRR_OBJ,
	/********************EQ*****************/
	EQ4_FSPX_BUS* EQ4_FSPX,
	EQ4_LA_BUS *EQ4_LA,
	EQ4_LAP_BUS *EQ4_LAP,
	EQ4_LH_BUS *EQ4_LH,
	EQ4_LRE_BUS *EQ4_LRE,
	EQ4_TFL_SPOTS_BUS *EQ4_TFL_SPOTS,
	EQ4_TFL_STRUCT_BUS *EQ4_TFL_STRUCT,
	EQ4_TSR_BUS* EQ4_TSR,
	EQ4_FS_BUS* EQ4_FS,
	/********************EGO*****************/
	real32_T *axvRefMs2,
	real32_T *vxvRefMs,
	real32_T *axvRoadSlopeMs2,
	real32_T *axRefMs2,
	real32_T *axRefDt,
	real32_T *psiDtOpt,
	real32_T *ayvRefMs2,
	real32_T *alpSideSlipAngle,
	real32_T *kapTraj,
	real32_T *SteerAngleOffset_deg,
	/**************TIME*****************/
	uint32_T* SysCurrTimeMs,
	const StbM_TimeStampExtendedType* IM_timeStamp,
	const StbM_UserDataType* IM_userData,
	const Std_ReturnType IM_ReturnVal,
	/********************Outport*****************/
	RFM_ROAD_BUS* RFM_ROAD,
	RFM_TSR_BUS* RFM_TSR,
	uint32_T* RFM_UpdateCnt,
	RFM_LANE_BUS* RFM_BRANCH_LANE,
	RFM_LANE_BUS* RFM_LEFT_LANE,
	RFM_LANE_BUS* RFM_CURRENT_LANE,
	RFM_LANE_BUS* RFM_RIGHT_LANE,
	RFM_INTERSEC_ALERT_BUS* RFM_INTERSEC_ALERT,
	RFM_BRANCH_BUS* RFM_BRANCH,
	RFM_REC_LANES_BUS* RFM_REC_LANES,	
	RFM_LINE_BUS* RFM_LINE_L1,
	RFM_LINE_BUS* RFM_LINE_R1,
	RFM_LINE_BUS* RFM_LINE_L2,
	RFM_LINE_BUS* RFM_LINE_R2,
	RFM_LINE_BUS* RFM_LINE_L3,
	RFM_LINE_BUS* RFM_LINE_R3,
	RFM_LINE_BUS* RFM_LINE_CL,
	RFM_LINE_BUS* RFM_LINE_LB,
	RFM_LINE_BUS* RFM_LINE_RB,
	RFM_LINE_BUS* RFM_LINE_PRED,
	RFM_LINE_BUS* RFM_LINEF_LB,
	RFM_LINE_BUS* RFM_LINEF_RB,
	RFM_LINE_BUS* RFM_LINE_ENTRY_CL,
	RFM_LINE_BUS* RFM_LINE_EXIT_CL);

#endif
