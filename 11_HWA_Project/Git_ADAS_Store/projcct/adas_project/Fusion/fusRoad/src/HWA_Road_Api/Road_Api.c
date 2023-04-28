#include "Road_Api.h"


HWAIFVPack		campack;
HWA_SensorInput_st	mrrpack;/* MRR*/
HWAEgoPack		vehicleinfpack;
HWATimePack		timepack;
HWAEHRPack		ehrpack;
HWATSRPack		tsrpack;
HWA_FSPXPack    fspxpack;
HWA_INTP_Pack   intp_pack;
HWAKernel		Stic_HWAhandle_Road;
HWA_ObjectInput_st MRR_sensor[32];

HWA_ROAD_HDLE HWAhandle_Road = NULL;
RFMResult  RFMresult;
#ifndef DEFINED_TYPEDEF_FOR_ROAD_INIT
#define DEFINED_TYPEDEF_FOR_ROAD_INIT
unsigned char Fusion_Road_isinit = 0;
#endif

/*output*/

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
	RFM_LINE_BUS* rfm_RFM_LINEF_RB)
  {
	if (Fusion_Road_isinit == 0) {
		mrrpack.objects = MRR_sensor;
		HWACreate(&HWAhandle_Road, &Stic_HWAhandle_Road);
		memset(&RFMresult, 0x00, sizeof(RFMResult));

		Fusion_Road_isinit = 1;
	}

	/****************MRR********************/
	ReceiveMrr_HWA(&mrrpack,
		rfm_MRR_HDR,
		rfm_MRR_OBJS);
	/********************EGO*****************/
	ReceiveEgo_HWA(&vehicleinfpack,
		&rfm_axvRefMs2,
		&rfm_vxvRefMs,
		&rfm_axvRoadSlopeMs2,
		&rfm_axRefMs2,
		&rfm_axRefDt,
		&rfm_psiDtOpt,
		&rfm_ayvRefMs2,
		&rfm_alpSideSlipAngle,
		&rfm_kapTraj,
		&rfm_SteerAngleOffset_deg);
	/*************TIME**********************/
	ReceiveTime_HWA(&timepack,
		&rfm_SysCurrTimeMs);
	/********************HUT*****************/
	/*ReceiveHUT_HWA(&hutpack,
		rfm_RFM_VCAN_HUT);*/
	 /********************EHR*****************/
	ReceiveEHR_HWA(&ehrpack,
		rfm_EHRV2_CTRL_INFO,
		rfm_EHRV2_ROAD_ATTR_INFO,
		&rfm_MapDataValid);
	/****************EQ*********************/
	ReceiveEQLane_HWA(&campack,
		rfm_EQ4_LH,
		rfm_EQ4_LA,
		rfm_EQ4_LRE,
		rfm_EQ4_LAP);
	ReceiveTSR_HWA(&tsrpack,
		rfm_EQ4_TSR);
	ReceiveFSPX_HWA(&fspxpack,
		rfm_EQ4_FSPX);
	ReceiveINTP_HWA(&intp_pack,
		rfm_EQ4_LAP);

	HWARoadKernel(HWAhandle_Road, &campack, &mrrpack, &vehicleinfpack, &timepack, &ehrpack, &tsrpack, &fspxpack, &intp_pack, &RFMresult);
	memcpy(rfm_RFM_ROAD,  &RFMresult.RFM_ROAD, sizeof(RFM_ROAD_BUS));
	memcpy(rfm_RFM_TSR,  &RFMresult.RFM_TSR, sizeof(RFM_TSR_BUS));
	memcpy(rfm_RFM_UpdateCnt,  &RFMresult.RFM_UpdateCnt, sizeof(uint32_T));
	memcpy(rfm_RFM_LINE_L1,  &RFMresult.RFM_LINE_L1, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINE_R1,  &RFMresult.RFM_LINE_R1, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINE_L2,  &RFMresult.RFM_LINE_L2, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINE_R2,  &RFMresult.RFM_LINE_R2, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINE_L3,  &RFMresult.RFM_LINE_L3, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINE_R3,  &RFMresult.RFM_LINE_R3, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINE_CL,  &RFMresult.RFM_LINE_CL, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINE_LB,  &RFMresult.RFM_LINE_LB, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINE_RB,  &RFMresult.RFM_LINE_RB, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINE_PRED,  &RFMresult.RFM_LINE_PRED, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINEF_LB,  &RFMresult.RFM_LINEF_LB, sizeof(RFM_LINE_BUS));
	memcpy(rfm_RFM_LINEF_RB,  &RFMresult.RFM_LINEF_RB, sizeof(RFM_LINE_BUS));
	printf("####     %d          ####\n", *rfm_RFM_UpdateCnt);
	/*printf("####     %d          ####\n", RFM_TSR->RFframe_count);*/
  }


#else

void RFM_OneStep(autosar_swc_infofusion_B_SubRFM *localB) {
	if (Fusion_Road_isinit == 0) {
		mrrpack.objects = MRR_sensor;
		HWACreate(&HWAhandle_Road, &Stic_HWAhandle_Road);
		memset(&RFMresult, 0x00, sizeof(RFMResult));

		Fusion_Road_isinit = 1;
	}

	/****************MRR********************/
	ReceiveMrr_HWA(&mrrpack,
		&localB->IM_MRR_HDR,
		localB->IM_MRR_OBJS);
	/********************EGO*****************/
	ReceiveEgo_HWA(&vehicleinfpack,
		&localB->IM_axvRefMs2,
		&localB->IM_vxvRefMs,
		&localB->IM_axvRoadSlopeMs2,
		&localB->IM_axRefMs2,
		&localB->IM_axRefDt,
		&localB->IM_psiDtOpt,
		&localB->IM_ayvRefMs2,
		&localB->IM_alpSideSlipAngle,
		&localB->IM_kapTraj,
		&localB->IM_SteerAngleOffset_deg);
	/*************TIME**********************/
	ReceiveTime_HWA(&timepack,
		&localB->IM_SysCurrTimeMs);

	/********************EHR*****************/
	ReceiveEHR_HWA(&ehrpack,
		&localB->IM_EHRV2_CTRL_INFO,
		&localB->IM_EHRV2_ROAD_ATTR_INFO,
		&localB->IM_MapDataValid);
	/****************EQ*********************/
	ReceiveEQLane_HWA(&campack,
		&localB->IM_EQ4_LH,
		&localB->IM_EQ4_LA,
		&localB->IM_EQ4_LRE,
		&localB->IM_EQ4_LAP);
	ReceiveTSR_HWA(&tsrpack,
		&localB->IM_EQ4_TSR);
	ReceiveFSPX_HWA(&fspxpack,
		&localB->IM_EQ4_FSPX);

    ReceiveINTP_HWA(&intp_pack,
		&localB->IM_EQ4_LAP);

	HWARoadKernel(HWAhandle_Road, &campack, &mrrpack, &vehicleinfpack, &timepack, &ehrpack, &tsrpack, &fspxpack, &intp_pack, &RFMresult);
	memcpy(&localB->OC_RFM_ROAD, &RFMresult.RFM_ROAD, sizeof(RFM_ROAD_BUS));
	memcpy(&localB->OC_RFM_TSR, &RFMresult.RFM_TSR, sizeof(RFM_TSR_BUS));
	memcpy(&localB->OC_RFM_UpdateCnt, &RFMresult.RFM_UpdateCnt, sizeof(uint32_T));
	memcpy(&localB->OC_RFM_LINE_L1, &RFMresult.RFM_LINE_L1, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINE_R1, &RFMresult.RFM_LINE_R1, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINE_L2, &RFMresult.RFM_LINE_L2, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINE_R2, &RFMresult.RFM_LINE_R2, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINE_L3, &RFMresult.RFM_LINE_L3, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINE_R3, &RFMresult.RFM_LINE_R3, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINE_CL, &RFMresult.RFM_LINE_CL, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINE_LB, &RFMresult.RFM_LINE_LB, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINE_RB, &RFMresult.RFM_LINE_RB, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINE_PRED, &RFMresult.RFM_LINE_PRED, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINEF_LB, &RFMresult.RFM_LINEF_LB, sizeof(RFM_LINE_BUS));
	memcpy(&localB->OC_RFM_LINEF_RB, &RFMresult.RFM_LINEF_RB, sizeof(RFM_LINE_BUS));
	//printf("####     %d          ####\n", *rfm_RFM_UpdateCnt);
	//printf("####     %d          ####\n", RFM_TSR->RFframe_count);
}

#endif // 0