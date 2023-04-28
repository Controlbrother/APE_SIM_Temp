#include "FusionApi.h"

HWAIFVPack		campack;
HWA_SensorInput_st	mrrpack;/*MRR*/
HWAEgoPack		vehicleinfpack;
HWATimePack		timepack;
HWAEHRPack		ehrpack;
HWATSRPack		tsrpack;
HWA_FSPXPack    fspxpack;
HWA_INTP_Pack   intp_pack;
HWAKernel		Stic_HWAhandle;
HWA_ObjectInput_st MRR_sensor[32];

/*output*/


HWA_ROAD_HDLE HWAhandle = NULL;
RFM_Result  RFMresult;

#ifndef DEFINED_TYPEDEF_FOR_ROAD_INIT
#define DEFINED_TYPEDEF_FOR_ROAD_INIT

#endif
/*unsigned char Fusion_Road_isinit=0;*/
void  Fusion_Road_Init(){
	mrrpack.objects = MRR_sensor;
	HWACreate(&HWAhandle, &Stic_HWAhandle);	
}
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
	RFM_LINE_BUS* RFM_LINE_EXIT_CL)
{

	RFM_Result  RFMresult;
	memset(&RFMresult, 0x00, sizeof(RFM_Result));





/****************MRR********************/
ReceiveMrr_HWA(&mrrpack,
	MRR_HDR,
	MRR_OBJ);
/********************EGO*****************/
ReceiveEgo_HWA(&vehicleinfpack,
	axvRefMs2,
	vxvRefMs,
	axvRoadSlopeMs2,
	axRefMs2,
	axRefDt,
	psiDtOpt,
	ayvRefMs2,
	alpSideSlipAngle,
	kapTraj,
	SteerAngleOffset_deg);
/*************TIME**********************/
ReceiveTime_HWA(&timepack,
	SysCurrTimeMs,
	IM_timeStamp,
	IM_userData,
	IM_ReturnVal);

 /********************EHR*****************/
ReceiveEHR_HWA(&ehrpack,
	 EHRV2_CTRL_INFO,
	 EHRV2_ROAD_ATTR_INFO,
	 MapDataValid);
/****************EQ*********************/
ReceiveEQLane_HWA(&campack,
	EQ4_LH,
	EQ4_LA,
	EQ4_LRE,
	EQ4_LAP);
ReceiveTSR_HWA(&tsrpack,
	 EQ4_TSR);
ReceiveFSPX_HWA(&fspxpack,
	EQ4_FSPX);	
ReceiveINTP_HWA(&intp_pack,
		EQ4_LAP);

    HWARoadKernel(HWAhandle, 
		&campack, 
		&mrrpack, 
		&vehicleinfpack, 
		&timepack, 
		&ehrpack,
		&tsrpack, 
		&fspxpack,
        &intp_pack,
		&RFMresult);
	memcpy(RFM_ROAD, &RFMresult.RFM_ROAD, sizeof(RFM_ROAD_BUS));
	memcpy(RFM_TSR, &RFMresult.RFM_TSR, sizeof(RFM_TSR_BUS));
	/*lanes info*/
	memcpy(RFM_BRANCH_LANE, &RFMresult.RFM_BRANCH_LANE, sizeof(RFM_LANE_BUS));
	memcpy(RFM_LEFT_LANE, &RFMresult.RFM_LEFT_LANE, sizeof(RFM_LANE_BUS));
	memcpy(RFM_CURRENT_LANE, &RFMresult.RFM_CURRENT_LANE, sizeof(RFM_LANE_BUS));
	memcpy(RFM_RIGHT_LANE, &RFMresult.RFM_RIGHT_LANE, sizeof(RFM_LANE_BUS));
	/*navi info*/
	memcpy(RFM_INTERSEC_ALERT, &RFMresult.RFM_INTERSEC_ALERT, sizeof(RFM_INTERSEC_ALERT_BUS));
	memcpy(RFM_BRANCH, &RFMresult.RFM_BRANCH, sizeof(RFM_BRANCH_BUS));
	memcpy(RFM_REC_LANES, &RFMresult.RFM_REC_LANES, sizeof(RFM_REC_LANES_BUS));

	memcpy(RFM_UpdateCnt, &RFMresult.RFM_UpdateCnt, sizeof(uint32_T));
	memcpy(RFM_LINE_L1, &RFMresult.RFM_LINE_L1, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_R1, &RFMresult.RFM_LINE_R1, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_L2, &RFMresult.RFM_LINE_L2, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_R2, &RFMresult.RFM_LINE_R2, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_L3, &RFMresult.RFM_LINE_L3, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_R3, &RFMresult.RFM_LINE_R3, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_CL, &RFMresult.RFM_LINE_CL, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_LB, &RFMresult.RFM_LINE_LB, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_RB, &RFMresult.RFM_LINE_RB, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_PRED, &RFMresult.RFM_LINE_PRED, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINEF_LB, &RFMresult.RFM_LINEF_LB, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINEF_RB, &RFMresult.RFM_LINEF_RB, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_ENTRY_CL, &RFMresult.RFM_LINE_ENTRY_CL, sizeof(RFM_LINE_BUS));
	memcpy(RFM_LINE_EXIT_CL, &RFMresult.RFM_LINE_EXIT_CL, sizeof(RFM_LINE_BUS));

	printf("####     %d          ####\n", *RFM_UpdateCnt);


}
	   