#ifndef _ROAD_API_
#define _ROAD_API_

// #include "../HWA_Road/include/HWAApi/HWAapi.h"
// #include "../HWA_Road/include/HWA_R.h"
#include "HWAapi.h"
#include "HWA_R.h"
#if 1
void RFM_OneStep(
	const EHRV2_ROAD_ATTR_INFO_BUS  *rfm_EHRV2_ROAD_ATTR_INFO,
	const EHRV2_CTRL_INFO_BUS  *rfm_EHRV2_CTRL_INFO,
	unsigned char  rfm_MapDataValid,
	const MRR_HDR_BUS  *rfm_MRR_HDR,
	const MRR_OBJ_BUS  rfm_MRR_OBJS[32],
	const EQ4_FSPX_BUS  *rfm_EQ4_FSPX,
	const EQ4_LA_BUS  *rfm_EQ4_LA,
	const EQ4_LAP_BUS  *rfm_EQ4_LAP,
	const EQ4_LH_BUS  *rfm_EQ4_LH,
	const EQ4_LRE_BUS  *rfm_EQ4_LRE,
	const EQ4_TFL_SPOTS_BUS  *rfm_EQ4_TFL_SPOTS,
	const EQ4_TFL_STRUCT_BUS  *rfm_EQ4_TFL_STRUCT,
	const EQ4_TSR_BUS  *rfm_EQ4_TSR,
	const EQ4_FS_BUS  *rfm_EQ4_FS,
	float  rfm_axvRefMs2,
	float  rfm_vxvRefMs,
	float  rfm_axvRoadSlopeMs2,
	float  rfm_axRefMs2,
	float  rfm_axRefDt,
	float  rfm_psiDtOpt,
	float  rfm_ayvRefMs2,
	float  rfm_alpSideSlipAngle,
	float  rfm_kapTraj,
	float  rfm_SteerAngleOffset_deg,
	unsigned int  rfm_SysCurrTimeMs,
	/********************Outport*****************/
	RFM_ROAD_BUS* rfm_RFM_ROAD,
	RFM_TSR_BUS* rfm_RFM_TSR,
	uint32_T* rfm_RFM_UpdateCnt,
	RFM_LINE_BUS* rfm_RFM_LINE_L1,
	RFM_LINE_BUS* rfm_RFM_LINE_R1,
	RFM_LINE_BUS* rfm_RFM_LINE_L2,
	RFM_LINE_BUS* rfm_RFM_LINE_R2,
	RFM_LINE_BUS* rfm_RFM_LINE_L3,
	RFM_LINE_BUS* rfm_RFM_LINE_R3,
	RFM_LINE_BUS* rfm_RFM_LINE_CL,
	RFM_LINE_BUS* rfm_RFM_LINE_LB,
	RFM_LINE_BUS* rfm_RFM_LINE_RB,
	RFM_LINE_BUS* rfm_RFM_LINE_PRED,
	RFM_LINE_BUS* rfm_RFM_LINEF_LB,
	RFM_LINE_BUS* rfm_RFM_LINEF_RB);
#else

#include "PubIfFusionRFM_MDL_ert_rtw/PubIfFusionRFM_MDL_SubRFM.h"
void RFM_OneStep(PubIfFusionRFM_MDL_B_SubRFM *localB);

#endif
#endif