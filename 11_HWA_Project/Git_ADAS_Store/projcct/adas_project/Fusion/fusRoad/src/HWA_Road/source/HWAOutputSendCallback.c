/******************************************************************************/
/**
 * @file: HWAOutputSendCallback.c
 * @brief 道路融合后处理及输出模块
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c) All Rights Reserved
 * @date: 2020-8-3 17:08:40
 */
 /******************************************************************************/

/*
********************************************************************************
* Include files section
********************************************************************************
*/
#include "HWAOutputSendCallback.h"

/*
********************************************************************************
* Function Prototype Declaration Section
********************************************************************************
*/
static
ABool out_LineResultSend(
	RFM_LINE_BUS* pst_result_line,
	SingleLineData* kernel_line
);

static
ABool out_LaneResultSend(
	RFM_LANE_BUS* RFM_LANE,
	HWALaneModel* LANE
);

static
ABool out_BranchResultSend(
	RFM_BRANCH_BUS* RFM_BRANCH,
	HWA_RoadMsg_st* roadmsg
);

static
ABool out_RecLaneResultSend(
	RFM_REC_LANES_BUS* RFM_REC_LANES,
	HWA_RoadMsg_st* roadmsg
);

static
ABool out_IntersecResultSend(
	RFM_INTERSEC_ALERT_BUS* RFM_INTERSEC,
	HWA_IntersecMsg_st* intersecmsg
);
/******************************************************************************/
/**
* @brief HWAOutputPostprocess
* @details 道路模型后处理模块：将核心结构中的信息及传感器数据赋予上一帧的核心结构，\n
* 并计算运行周期数。
* @param [in] kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] ifvpack: 道路模型输： 摄像头输出数据，地图输出数据
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
ABool HWAOutputPostprocess(HWAKernel* kernel, HWAIFVPack* ifvpack, HWATSRPack* tsrpack)
{
	HWAIFVPack* ifv = ifvpack;
	HWAIFVPack* pre_ifv = &kernel->preIfv;
	HWATSRPack* tsr = tsrpack;
	HWATSRPack* pre_tsr = &kernel->preTsr;
	HWA_RoadMsg_st*  roadmsg = &kernel->roadmsg[CURRENT];
	HWA_RoadMsg_st*  pre_roadmsg = &kernel->roadmsg[PREVIOUS];
	HWA_LaneMsg_st*  linemsg = &kernel->linemsg[CURRENT];
	HWA_LaneMsg_st*  pre_linemsg = &kernel->linemsg[PREVIOUS];
	HWALaneModelAll*  drvmsg = &kernel->drvmsg[CURRENT];
	HWALaneModelAll*  predrvmsg = &kernel->drvmsg[PREVIOUS];
	HWATimePack* curtime = &kernel->timepack;
	HWATimePack* pretime = &kernel->pretime;
	LineData*  line = &kernel->lines[CURRENT];
	LineData*  preline = &kernel->lines[PREVIOUS];
	NOALineData*  noa_lines = &kernel->noa_lines[CURRENT];
	NOALineData*  pre_noa_lines = &kernel->noa_lines[PREVIOUS];
	HWA_LaneInfo_st*  laneinfo = &kernel->laneinfo[CURRENT];
	HWA_LaneInfo_st*  pre_laneinfo = &kernel->laneinfo[PREVIOUS];
	HWA_IntersecMsg_st*  intersecmsg = &kernel->intersecmsg[CURRENT];
	HWA_IntersecMsg_st*  pre_intersecmsg = &kernel->intersecmsg[PREVIOUS];
	/************HWA_lane_part*********/




#if HWA_LOG

	printf("*******************ROAD-RESULT************************\n");
	printf("               exist %d L1_C0 %.4f color %d type %d end %.2f qlty %.2f\n   \
            exist %d R1_C0 %.4f  color %d type %d end %.2f qlty %.2f\n   \
            exist %d L2_C0 %.4f  color %d type %d end %.2f qlty %.2f\n   \
            exist %d R2_C0 %.4f  color %d type %d end %.2f qlty %.2f\n   \
            exist %d L3_C0 %.4f  color %d type %d end %.2f qlty %.2f\n   \
            exist %d R3_C0 %.4f  color %d type %d end %.2f qlty %.2f\n   \
            exist %d CLB_C0 %.4f color %d type %d end %.2f qlty %.2f\n   \
            exist %d CRB_C0 %.4f color %d type %d end %.2f qlty %.2f\n   \
            exist %d FLB_C0 %.4f color %d type %d end %.2f qlty %.2f\n   \
            exist %d FRB_C0 %.4f color %d type %d end %.2f qlty %.2f\n   \
            exist %d PRE_C0 %.4f color %d type %d end %.2f qlty %.2f\n   \
            exist %d CL_C0 %.4f color %d type %d end %.2f qlty %.2f\n   ",
		line->lineL1.bIsLineExist, line->lineL1.dC0V, line->lineL1.enColour, line->lineL1.enLineType, line->lineL1.dDisEnd, line->lineL1.dQuality,
		line->lineR1.bIsLineExist, line->lineR1.dC0V, line->lineR1.enColour, line->lineR1.enLineType, line->lineR1.dDisEnd, line->lineR1.dQuality,
		line->lineL2.bIsLineExist, line->lineL2.dC0V, line->lineL2.enColour, line->lineL2.enLineType, line->lineL2.dDisEnd, line->lineL2.dQuality,
		line->lineR2.bIsLineExist, line->lineR2.dC0V, line->lineR2.enColour, line->lineR2.enLineType, line->lineR2.dDisEnd, line->lineR2.dQuality,
		line->lineL3.bIsLineExist, line->lineL3.dC0V, line->lineL3.enColour, line->lineL3.enLineType, line->lineL3.dDisEnd, line->lineL3.dQuality,
		line->lineR3.bIsLineExist, line->lineR3.dC0V, line->lineR3.enColour, line->lineR3.enLineType, line->lineR3.dDisEnd, line->lineR3.dQuality,
		line->lineLB.bIsLineExist, line->lineLB.dC0V, line->lineLB.enColour, line->lineLB.enLineType, line->lineLB.dDisEnd, line->lineLB.dQuality,
		line->lineRB.bIsLineExist, line->lineRB.dC0V, line->lineRB.enColour, line->lineRB.enLineType, line->lineRB.dDisEnd, line->lineRB.dQuality,
		line->lineF_LB.bIsLineExist, line->lineF_LB.dC0V, line->lineF_LB.enColour, line->lineF_LB.enLineType, line->lineF_LB.dDisEnd, line->lineF_LB.dQuality,
		line->lineF_RB.bIsLineExist, line->lineF_RB.dC0V, line->lineF_RB.enColour, line->lineF_RB.enLineType, line->lineF_RB.dDisEnd, line->lineF_RB.dQuality,
		line->linePRED.bIsLineExist, line->linePRED.dC0V, line->linePRED.enColour, line->linePRED.enLineType, line->linePRED.dDisEnd, line->linePRED.dQuality,
		line->lineCL.bIsLineExist, line->lineCL.dC0V, line->lineCL.enColour, line->lineCL.enLineType, line->lineCL.dDisEnd, line->lineCL.dQuality
	);
	printf("            LaneID %d, LaneNum %d, isLeftBdry %d, isRightBdry %d, curFree %d, frssDis %.2f\n\
            curSpl %d, splUnit %d, newSplType %d, newSplValue %d,   \n  \
            tsrName %d, tsrLat %.2f, tsrLong %u,                    \n  \
            curLaneWidth %.2f, leftLaneWidth %.2f, rightLaneWidth %.2f\n \
            LaneChange  %d \n ",
		roadmsg->nLaneID, roadmsg->nLaneNum, roadmsg->VehInLeftmostLane, roadmsg->VehInRightmostLane, roadmsg->bCurrentLaneFree, roadmsg->fCurrentLaneFreeDis,
		roadmsg->SPL_ValueCurRoad, roadmsg->SPL_Unit, roadmsg->SPL_End, roadmsg->SPL_noSupp_Value,
		roadmsg->TSR_Sign_Name, roadmsg->TSR_Sign_Lateral_Distance, roadmsg->TSR_Sign_Long_Distance,
		roadmsg->dCurrentLaneWidth, roadmsg->dLeftLaneWidth, roadmsg->dRightLaneWidth, roadmsg->SPL_LaneChanged);

#endif /* HWA_LOG*/

#if CL_LOG
	printf("               PREDC0 %.4f C1 %.4f C2 %.4f C3 %.4f start %.2f end %.2f \n   \
            CTLC0 %.4f C1 %.4f C2 %.4f C3 %.4f start %.2f   end %.2f cnt %d \n    ",
		line->linePRED.dC0V, line->linePRED.dC1V, line->linePRED.dC2V, line->linePRED.dC3V, line->linePRED.dDisStart, line->linePRED.dDisEnd,
		line->lineCL.dC0V, line->lineCL.dC1V, line->lineCL.dC2V, line->lineCL.dC3V, line->lineCL.dDisStart, line->lineCL.dDisEnd, ifv->line[HWA_CL].nTrackAge
	);
#endif /* CL_LOG */

	kernel->roadmsg[CURRENT].frame_count = kernel->cycles;

	/*----------postprocess--------*/
	memcpy(pre_ifv, ifv, sizeof(HWAIFVPack));
	memcpy(pre_tsr, tsr, sizeof(HWAIFVPack));
	memcpy(pre_linemsg, linemsg, sizeof(HWA_LaneMsg_st));
	memcpy(pre_roadmsg, roadmsg, sizeof(HWA_RoadMsg_st));
	memcpy(predrvmsg, drvmsg, sizeof(HWALaneModelAll));
	memcpy(preline, line, sizeof(LineData));
	memcpy(pretime, curtime, sizeof(HWATimePack));
	memcpy(pre_noa_lines, noa_lines, sizeof(NOALineData));
	memcpy(pre_laneinfo, laneinfo, sizeof(HWA_LaneInfo_st));
	memcpy(pre_intersecmsg, intersecmsg, sizeof(HWA_IntersecMsg_st));

	kernel->cycles++;

	return ATRUE;
}
/******************************************************************************/
/**
* @brief out_LineResultSend
* @details 道路模型结果输出模块：将核心结构中的融合车道线信息赋予道路模型结果。
* @param [in] LINE: 道路模型核心： 道路模型内部的车道线结构体。
* @param [out] RFM_LINE: 道路模型输出： 车道线输出结果结构体
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
static
ABool out_LineResultSend(RFM_LINE_BUS* RFM_LINE, SingleLineData* LINE) {
	RFM_LINE->bIsLineExist = LINE->bIsLineExist;
	RFM_LINE->eColour = LINE->enColour;
	RFM_LINE->dC0V = LINE->dC0V;
	RFM_LINE->dC1V = LINE->dC1V;
	RFM_LINE->dC2V = LINE->dC2V;
	RFM_LINE->dC3V = LINE->dC3V;
	RFM_LINE->dDisStart = LINE->dDisStart;
	RFM_LINE->dDisFront = LINE->dDisEnd;
	RFM_LINE->dLaneWidth = LINE->dLineWidth;
	RFM_LINE->dQuality = LINE->dQuality;
	RFM_LINE->eLineType = LINE->enLineType;
	RFM_LINE->nTrackAge = LINE->nTrackAge;
	RFM_LINE->eFuType = LINE->eFuType;

	return ATRUE;
}
/******************************************************************************/
/**
* @brief out_LaneResultSend
* @details 道路模型结果输出模块：将核心结构中的车道信息赋予道路模型结果。
* @param [in] LANE: 道路模型核心： 道路模型内部的车道结构体。
* @param [out] RFM_LANE: 道路模型输出： 车道输出结果结构体
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
static
ABool out_LaneResultSend(RFM_LANE_BUS* RFM_LANE, HWALaneModel* LANE) {
	RFM_LANE->b_is_avalible = LANE->b_is_avalible;
	RFM_LANE->en_lane_type = LANE->en_lane_type;
	RFM_LANE->i_speed_max = LANE->i_speed_max;
	RFM_LANE->f_spd_change_dis = LANE->f_spd_change_dis;
	RFM_LANE->i_change_spd_max = LANE->i_change_spd_max;
	RFM_LANE->f_width = LANE->f_width;
	RFM_LANE->b_vanish_valid = LANE->b_vanish_valid;
	RFM_LANE->f_vanish_pt_dis = LANE->f_vanish_pt_dis;

	return ATRUE;
}

/******************************************************************************/
/**
* @brief out_BranchResultSend
* @details 道路模型结果输出模块：将核心结构中的分支信息赋予道路模型结果。
* @param [in] roadmsg: 道路模型核心： 道路模型内部的道路信息结构体。
* @param [out] RFM_BRANCH: 道路模型输出： 分支信息输出结果结构体
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
static
ABool out_BranchResultSend(RFM_BRANCH_BUS* RFM_BRANCH, HWA_RoadMsg_st* roadmsg) {
	RFM_BRANCH->b_available = roadmsg->b_branch_available;
	RFM_BRANCH->en_RoadClass = roadmsg->f_branch_turning_angle;
	RFM_BRANCH->f_turning_angle = roadmsg->en_branch_RoadClass;

	return ATRUE;
}
/******************************************************************************/
/**
* @brief out_RecLaneResultSend
* @details 道路模型结果输出模块：将核心结构中的推荐车道信息赋予道路模型结果。
* @param [in] roadmsg: 道路模型核心： 道路模型内部的道路信息结构体。
* @param [out] RFM_REC_LANES: 道路模型输出：推荐车道信息信息输出结果结构体
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
static
ABool out_RecLaneResultSend(RFM_REC_LANES_BUS* RFM_REC_LANES, HWA_RoadMsg_st* roadmsg) {
	RFM_REC_LANES->i_rec_lanes_num = roadmsg->i_rec_lanes_num;

	for (AInt8U idx = 0; idx < (RFM_REC_LANES->i_rec_lanes_num) && (idx < 8); idx++)
	{
		RFM_REC_LANES->i_rec_lanes[idx] = roadmsg->i_rec_lanes[idx];
	}

	return ATRUE;
}

/******************************************************************************/
/**
* @brief out_IntersecResultSend
* @details 道路模型结果输出模块：将核心结构中的路口信息赋予道路模型结果。
* @param [in] intersecmsg: 路口模型： 道路模型内部的路口信息结构体。
* @param [out] RFM_REC_LANES: 道路模型输出：路口信息信息输出结果结构体
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
static
ABool out_IntersecResultSend(RFM_INTERSEC_ALERT_BUS* RFM_INTERSEC, HWA_IntersecMsg_st* intersecmsg) {
	RFM_INTERSEC->b_is_available = intersecmsg->b_is_available;
	RFM_INTERSEC->f_distance = intersecmsg->f_distance;
	RFM_INTERSEC->en_direction = intersecmsg->en_direction;
	RFM_INTERSEC->en_type = intersecmsg->en_type;

	return ATRUE;
}
/******************************************************************************/
/**
* @brief HWARoadResultSend
* @details 道路模型结果输出模块：将核心结构中的融合信息赋予道路模型结果。
* @param [in] kernel: 道路模型核心： 道路模型内部的结构体。
* @param [out] result: 道路模型输出： 道路模型结果输出
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
ABool HWARoadResultSend(HWAKernel* kernel, RFM_Result* result) {
	HWA_RoadMsg_st* roadmsg = &kernel->roadmsg[CURRENT];
	HWA_LaneInfo_st* laneinfo = &kernel->laneinfo[CURRENT];
	HWA_IntersecMsg_st* intersecmsg = &kernel->intersecmsg[CURRENT];
	SingleLineData* LINE_L1 = &kernel->lines[CURRENT].lineL1;
	SingleLineData* LINE_R1 = &kernel->lines[CURRENT].lineR1;
	SingleLineData* LINE_L2 = &kernel->lines[CURRENT].lineL2;
	SingleLineData* LINE_R2 = &kernel->lines[CURRENT].lineR2;
	SingleLineData* LINE_L3 = &kernel->lines[CURRENT].lineL3;
	SingleLineData* LINE_R3 = &kernel->lines[CURRENT].lineR3;
	SingleLineData* LINE_LB = &kernel->lines[CURRENT].lineLB;
	SingleLineData* LINE_RB = &kernel->lines[CURRENT].lineRB;
	SingleLineData* LINE_CL = &kernel->lines[CURRENT].lineCL;
	SingleLineData* LINE_PRED = &kernel->lines[CURRENT].linePRED;
	SingleLineData* LINEF_LB = &kernel->lines[CURRENT].lineF_LB;
	SingleLineData* LINEF_RB = &kernel->lines[CURRENT].lineF_RB;
	SingleLineData* LINE_ENTRY_CL = &kernel->noa_lines[CURRENT].LINE_ENTRY_CL;
	SingleLineData* LINE_EXIT_CL = &kernel->noa_lines[CURRENT].LINE_EXIT_CL;

	result->RFM_UpdateCnt = roadmsg->frame_count % P_RFM_FRAME_UPDATE;
	/*L1*/
	out_LineResultSend(&result->RFM_LINE_L1, LINE_L1);
	out_LineResultSend(&result->RFM_LINE_R1, LINE_R1);
	out_LineResultSend(&result->RFM_LINE_L2, LINE_L2);
	out_LineResultSend(&result->RFM_LINE_R2, LINE_R2);
	out_LineResultSend(&result->RFM_LINE_L3, LINE_L3);
	out_LineResultSend(&result->RFM_LINE_R3, LINE_R3);
	out_LineResultSend(&result->RFM_LINE_LB, LINE_LB);
	out_LineResultSend(&result->RFM_LINE_RB, LINE_RB);
	out_LineResultSend(&result->RFM_LINE_CL, LINE_CL);
	out_LineResultSend(&result->RFM_LINE_PRED, LINE_PRED);
	out_LineResultSend(&result->RFM_LINEF_LB, LINEF_LB);
	out_LineResultSend(&result->RFM_LINEF_RB, LINEF_RB);
	out_LineResultSend(&result->RFM_LINE_ENTRY_CL, LINE_ENTRY_CL);
	out_LineResultSend(&result->RFM_LINE_EXIT_CL, LINE_EXIT_CL);


	/*RFM_ROAD*/
	result->RFM_ROAD.nLaneID = roadmsg->nLaneID;
	result->RFM_ROAD.nLaneNum = roadmsg->nLaneNum;
	result->RFM_ROAD.dCurrentLaneWidth = roadmsg->dCurrentLaneWidth;
	result->RFM_ROAD.dLeftLaneWidth = roadmsg->dLeftLaneWidth;
	result->RFM_ROAD.dRightLaneWidth = roadmsg->dRightLaneWidth;

	result->RFM_ROAD.bCurrentLaneFree = roadmsg->bCurrentLaneFree;
	result->RFM_ROAD.fCurrentLaneFreeDis = roadmsg->fCurrentLaneFreeDis;
	result->RFM_ROAD.bLeftLaneFree = roadmsg->bLeftLaneFree;
	result->RFM_ROAD.fLeftLaneFreeDis = roadmsg->fLeftLaneFreeDis;
	result->RFM_ROAD.bRightLaneFree = roadmsg->bRightLaneFree;
	result->RFM_ROAD.fRighLaneFreeDis = roadmsg->fRightLaneFreeDis;
	/*tbd 20201203  need ehrv2*/
	result->RFM_ROAD.b_toll;
	result->RFM_ROAD.f_toll_distance;
	result->RFM_ROAD.b_tunnel;
	result->RFM_ROAD.f_tunnel_distance;
	result->RFM_ROAD.b_bridge;
	result->RFM_ROAD.f_bridge_distance;
	result->RFM_ROAD.b_traffic_jam;
	result->RFM_ROAD.f_distance_to_jam;
	result->RFM_ROAD.b_traffic_accident;
	result->RFM_ROAD.f_distance_to_accident;
	result->RFM_ROAD.en_weather;

	/*RFM_TSR_st*/  /*28 signals*/
	result->RFM_TSR.FUSSts = roadmsg->FUSSts;
	result->RFM_TSR.RFframe_count = roadmsg->frame_count;
	result->RFM_TSR.CtryType = roadmsg->CtryType;
	result->RFM_TSR.RoadType = roadmsg->RoadType;
	result->RFM_TSR.SPL_TypeCurRoad = roadmsg->SPL_TypeCurRoad;
	result->RFM_TSR.SPL_ValueCurRoad = roadmsg->SPL_ValueCurRoad;
	result->RFM_TSR.VehToTrafEyeDist = roadmsg->VehToTrafEyeDist;
	result->RFM_TSR.SPL_Unit = roadmsg->SPL_Unit;
	result->RFM_TSR.SPL_End = roadmsg->SPL_End;
	result->RFM_TSR.SPL_noSupp_Value = roadmsg->SPL_noSupp_Value;
	result->RFM_TSR.SPL_whSupp_Value = roadmsg->SPL_whSupp_Value;
	result->RFM_TSR.SPL_Sup1_SignName = roadmsg->SPL_Sup1_SignName;
	result->RFM_TSR.SPL_Sup1_Confidence = roadmsg->SPL_Sup1_Confidence;
	result->RFM_TSR.SPL_Sup2_SignName = roadmsg->SPL_Sup2_SignName;
	result->RFM_TSR.SPL_Sup2_Confidence = roadmsg->SPL_Sup2_Confidence;
	result->RFM_TSR.SPL_noSupp_LongDistance = roadmsg->SPL_noSupp_LongDistance;
	result->RFM_TSR.SPL_whSupp_LongDistance = roadmsg->SPL_whSupp_LongDistance;
	result->RFM_TSR.SPL_LeftLaneValue = roadmsg->SPL_LeftLaneValue;
	result->RFM_TSR.SPL_RightLaneValue = roadmsg->SPL_RightLaneValue;
	result->RFM_TSR.TSR_ID = roadmsg->TSR_ID;
	result->RFM_TSR.TS_SignName = roadmsg->TSR_Sign_Name;
	result->RFM_TSR.TS_Confidence = roadmsg->TS_Confidence;
	result->RFM_TSR.TS_LongDistance = roadmsg->TS_LongDistance;
	result->RFM_TSR.VehInLeftmostLane = roadmsg->VehInLeftmostLane;
	result->RFM_TSR.VehInRightmostLane = roadmsg->VehInRightmostLane;
	result->RFM_TSR.SPL_LaneChanged = roadmsg->SPL_LaneChanged;
	result->RFM_TSR.TSR_Sign_Long_Distance = roadmsg->TSR_Sign_Long_Distance;
	result->RFM_TSR.TSR_Sign_Lateral_Distance = roadmsg->TSR_Sign_Lateral_Distance;

	/*RFM_LANES*/
	out_LaneResultSend(&result->RFM_LEFT_LANE, &laneinfo->left_lane);
	out_LaneResultSend(&result->RFM_CURRENT_LANE, &laneinfo->current_lane);
	out_LaneResultSend(&result->RFM_RIGHT_LANE, &laneinfo->right_lane);
	out_LaneResultSend(&result->RFM_BRANCH_LANE, &laneinfo->branch_lane);
	/*RFM_BRANCH*/
	out_BranchResultSend(&result->RFM_BRANCH, roadmsg);
	/*RFM_REC_LANES*/
	out_RecLaneResultSend(&result->RFM_REC_LANES, roadmsg);
	/*RFM_RFM_INTERSEC_ALERT*/
	out_IntersecResultSend(&result->RFM_INTERSEC_ALERT, intersecmsg);


	return ATRUE;
}
