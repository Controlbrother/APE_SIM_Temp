/******************************************************************************/
/**
 * @file: HWARoadSceneRecognition.c
 * @brief 道路场景判断模块
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  .All Rights Reserved
 * @date: 2020-10-26 15:46:56
 */
 /******************************************************************************/

/*
********************************************************************************
* Include files section
********************************************************************************
*/

#include "HWARoadSceneRecognition.h"

/*
********************************************************************************
* Define Section
********************************************************************************
*/
#define TYPE_BDRY(idx)  ((ai_line_type[idx]==CAM_LINE_DOUBLE_SOLID_SOLID || ai_line_type[idx]==CAM_LINE_DOUBLE_SOLID_DASHED \
                        ||ai_line_type[idx]==CAM_LINE_ROAD_EDGE 	|| ai_line_type[idx]==CAM_LINE_ELEVATED_STRUCTURE \
                        ||ai_line_type[idx]==CAM_LINE_DOUBLE_DASHED_DASHED ||ai_line_type[idx]==CAM_LINE_DOUBLE_DASHED_SOLID  \
                        || ai_line_type[idx]==CAM_LINE_CURB ) && af_line_quality[idx] > DBL_EPSILON )
#define TYPE_DASHED(idx)  (ai_line_type[idx]==CAM_LINE_DASHED && af_line_quality[idx] > DBL_EPSILON )
#define LANEID_STABLE_COUNT (35)             /* if  laneID lasts 35 frames,think is's stable. */
#define BDRY_DIS(f_c0,f_c1,f_c2,f_c3,f_start)                        \
(f_c0+f_c1*f_start+f_c2*f_start*f_start+f_c3*f_start*f_start*f_start)

/*
********************************************************************************
* Function Prototype Declaration Section
********************************************************************************
*/
static
AInt scene_EgoCarSelfLocate(
	HWAIFVPack* Cameraline, 
	HWAEHRPack* Ehrmsg
);

static
AInt scene_LaneIdCheck(
	HWAIFVPack* Cameraline, 
	HWAEHRPack* Ehrmsg, 
	Radar_LineData* radarline,
	AInt32 LaneID
);

static
ABool scene_IsDrivOnRiLane(
	HWAIFVPack* ifv,
	HWAEHRPack* Ehrmsg,
	Radar_LineData* radarline, 
	AInt8U LaneID
);

static
ABool scene_IsDrivOnLeftLane(
	HWAIFVPack* ifv,
	HWAEHRPack* Ehrmsg,
	Radar_LineData* radarline,
	AInt8U LaneID
);

/* Analysis of lane changing base on vision detection */
static
AVoid scene_iafLCJudgeBaseOnIfv(
	HWAIFVPack* ifv, 
	HWAIFVPack* preifv,
	HWALaneModelAll* msg, 
	HWA_RoadMsg_st *Roadmsg, 
	ABool isfirst
);

static
AVoid scene_GetLaneIdResult(
	HWA_RoadMsg_st *pst_road_msg, 
	HWA_RoadMsg_st *pst_pre_road_msg,
	AInt8U i_lane_id,
	AInt8U i_pre_lane_id
);

static
AFloat scene_EmergencyLaneJudge(
	AInt8U b_is_ehr_valid, 
	AInt8U b_is_express_way, 
	CamLine *line,
	CamLine *line_next,
	CamLine *bdry
);

/******************************************************************************/
/**
* @brief scene_GetLaneIdResult
* @details 道路模型场景模块： 根据历史信息以及当前车道ID，\n
* 最终判断本车所在车道ID
* @param [out] pst_road_msg: 道路模型输出： 道路信息数据
* @param [in] pst_pre_road_msg: 道路模型输入： 上一时刻道路信息数据
* @param [in] i_lane_id: 道路模型输入： 当前计算得到的车道ID
* @param [in] i_pre_lane_id: 道路模型输入： 上一时刻输出的车道ID
* @return 无
*/
/******************************************************************************/
static
AVoid scene_GetLaneIdResult(HWA_RoadMsg_st *pst_road_msg, HWA_RoadMsg_st *pst_pre_road_msg, AInt8U i_lane_id, AInt8U i_pre_lane_id)
{
	if (pst_pre_road_msg->nLaneNum == pst_road_msg->nLaneNum)
	{
		pst_road_msg->nLaneID = i_pre_lane_id;
		pst_road_msg->nTempLaneID = i_lane_id;

		if (i_pre_lane_id != i_lane_id && pst_pre_road_msg->nTempLaneID == i_lane_id)
		{
			pst_road_msg->nLaneIDAge++;
		}
		else
		{
			pst_road_msg->nLaneIDAge = 0;
		}

		if (pst_road_msg->nLaneIDAge > LANEID_STABLE_COUNT)
		{
			pst_road_msg->nLaneID = i_lane_id;
			pst_road_msg->nLaneIDAge = 0;
		}
		else
		{

		}
	}
	else
	{
		pst_road_msg->nLaneID = i_lane_id;
	}

	/*Valid judge*/
	if ((pst_road_msg->nLaneID > pst_road_msg->nLaneNum) && (pst_road_msg->nLaneID != 7) && (pst_road_msg->nLaneNum != 0))
	{
		pst_road_msg->nLaneID = pst_road_msg->nLaneNum;
	}
	else if ((pst_road_msg->nLaneID == 7))    /*add judge about lane num*/
	{
		pst_road_msg->nLaneID = 0;
	}
	else
	{
		/*end*/
	}

	return;
}

/******************************************************************************/
/**
* @brief HWARoadSceneRecognition
* @details 道路模型场景模块： 根据车道线类型和本车到边界的距离判断本车所在车道ID
* @param [in] kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] ifvpack: 道路模型输入： 摄像头输出数据
* @param [in] ehrpack: 道路模型输入： 地图输出数据
* @param [out] kernel: 道路模型输出： 计算得到的当前车道ID。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
ABool HWARoadSceneRecognition(HWAKernel* kernel, HWAIFVPack* ifvpack, HWAEHRPack* ehrpack)
{
	
	HWA_RoadMsg_st *pst_road_msg = &kernel->roadmsg[CURRENT];
	HWA_RoadMsg_st *pst_pre_road_msg = &kernel->roadmsg[PREVIOUS];
	HWALaneModelAll* pst_drv_msg = &kernel->drvmsg[CURRENT];
	HWAIFVPack* pst_ifv = ifvpack;
	HWAIFVPack* pst_pre_ifv = &kernel->preIfv;
	Radar_LineData* pst_radar_line = &kernel->radarlines;
	HWAEHRPack* pst_ehr_msg = ehrpack;
	ABool b_is_first = (0 == kernel->cycles) ? ATRUE : AFALSE;
	AInt8U i_pre_lane_id = pst_pre_road_msg->nLaneID;
	AInt8U i_lane_id = 0;
	A_ASSERT(kernel);
	pst_road_msg->nLaneNum = pst_ehr_msg->NumOfLaneDrvDir;
	i_lane_id = scene_EgoCarSelfLocate(pst_ifv, pst_ehr_msg);
	i_lane_id = scene_LaneIdCheck(pst_ifv, pst_ehr_msg, pst_radar_line, i_lane_id);

	scene_GetLaneIdResult(pst_road_msg, pst_pre_road_msg, i_lane_id, i_pre_lane_id);
	/*if (pst_pre_road_msg->nLaneNum == pst_road_msg->nLaneNum)
	{
		pst_road_msg->nLaneID = i_pre_lane_id;
		pst_road_msg->nTempLaneID = i_lane_id;

		if (i_pre_lane_id != i_lane_id && pst_pre_road_msg->nTempLaneID == i_lane_id)
		{
			pst_road_msg->nLaneIDAge++;
		}
		else
		{
			pst_road_msg->nLaneIDAge = 0;
		}

		if (pst_road_msg->nLaneIDAge> LANEID_STABLE_COUNT)
		{
			pst_road_msg->nLaneID = i_lane_id;
			pst_road_msg->nLaneIDAge = 0;
		}
		else
		{
			
		}
	}
	else
	{
		pst_road_msg->nLaneID = i_lane_id;
	}*/

	/*Valid judge*/
	//if (pst_road_msg->nLaneID > pst_road_msg->nLaneNum && pst_road_msg->nLaneID != 7)
	//{
	//	pst_road_msg->nLaneID = pst_road_msg->nLaneNum;
	//}
	//else if ((pst_road_msg->nLaneID == 7))    /*add judge about lane num*/
	//{
	//	pst_road_msg->nLaneID = 0;
	//}
	//else
	//{
	//	/*end*/
	//}

	/*right*/
/*	pst_road_msg->DrvgOnRiLane = scene_IsDrivOnRiLane(pst_ifv, pst_ehr_msg, pst_radar_line, pst_road_msg->nLaneID);*/
	pst_road_msg->VehInRightmostLane = scene_IsDrivOnRiLane(pst_ifv, pst_ehr_msg, pst_radar_line, pst_road_msg->nLaneID);
	pst_road_msg->VehInLeftmostLane= scene_IsDrivOnLeftLane(pst_ifv, pst_ehr_msg, pst_radar_line, pst_road_msg->nLaneID);

	/*left*/
	/* Roadmsg->nLaneID = scene_LaneIdCheck(ifv, Ehrmsg, radarline, LaneID);*/
	scene_iafLCJudgeBaseOnIfv(pst_ifv, pst_pre_ifv, pst_drv_msg, pst_road_msg, b_is_first);
	if (pst_drv_msg->lanechange.Crossed)
	{
		pst_road_msg->SPL_LaneChanged = pst_drv_msg->lanechange.direction;
	}
	else
	{
		pst_road_msg->SPL_LaneChanged = 0;
	}
	return ATRUE;
}

/*CAM_LINE_UNDECIDED,
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
	CAM_PARKED_CARS*/

/******************************************************************************/
/**
* @brief scene_EgoCarSelfLocate
* @details 道路模型场景模块： 根据车道线类型判断本车所在车道ID
* @param [in] Cameraline: 道路模型输入： 摄像头输出数据
* @param [in] Ehrmsg: 道路模型输入： 地图输出数据
* @return 返回计算得到的当前车道ID
*/
/******************************************************************************/
static
AInt scene_EgoCarSelfLocate(HWAIFVPack* Cameraline, HWAEHRPack* Ehrmsg)
{
	/*TBD---need to be restructed*/
	AInt8U i;

	AInt8U i_lane_num = Ehrmsg->NumOfLaneDrvDir;
	AInt8U ai_line_type[HWA_IDX_MAX] = {0};
	AFloat af_line_quality[HWA_IDX_MAX] = {0};
	AInt i_ret = 0;  /* invalid num */
	A_ASSERT(Cameraline);
	for ( i = 0; (i_lane_num != 7) && i < HWA_IDX_MAX; i++)
	{
		ai_line_type[i] = Cameraline->line[i].nLaneType;
		af_line_quality[i] = Cameraline->line[i].hdCamQuality;    /*0-1/bad-good.*/
	}

	if (TYPE_BDRY(HWA_L1))
	{
		i_ret = 1;
	}
	else if (TYPE_BDRY(HWA_R1))
	{
		i_ret = i_lane_num ;
	}
	else if (TYPE_BDRY(HWA_L2))
	{
		i_ret = 2;
	}
	else if (TYPE_BDRY(HWA_R2))
	{
		i_ret = i_lane_num - 1;
	}
	else
	{
		i_ret = 0;
	}

	if ((i_ret > i_lane_num)&&(i_lane_num!=0))
	{
		i_ret = i_lane_num;
	}
	else
	{

	}

	return i_ret;
}

/******************************************************************************/
/**
* @brief scene_IsDrivOnRiLane
* @details 道路模型场景模块： 根据本车到摄像头边界线或毫米波边界线的距离，\n
* 判断本车是否在最右侧车道
* @param [in] Cameraline: 道路模型输入： 摄像头输出数据
* @param [in] Ehrmsg: 道路模型输入： 地图输出数据
* @param [in] radarline: 道路模型输入： 毫米波生成边界数据
* @param [in] LaneID: 道路模型输入： 计算得到的当前车道ID
* @return 
* 1 本车在最右侧车道
* 0 本车不在最右侧车道
*/
/******************************************************************************/
static
ABool scene_IsDrivOnRiLane(HWAIFVPack* ifv, HWAEHRPack* Ehrmsg, Radar_LineData* radarline, AInt8U LaneID)
{
	ABool b_ret = AFALSE;
	ABool b_is_express_way = (Ehrmsg->DrivingOnHighWay == 1) ? ATRUE : AFALSE;
	ABool b_is_ehr_valid = (Ehrmsg->MapDataValid == 1) ? ATRUE : AFALSE;
	AInt32 i_lane_num = Ehrmsg->NumOfLaneDrvDir;
	AInt32 i_right_lane_id = 0;
	ABool b_emergency_lane = AFALSE;
	AFloat f_c0;
	AFloat f_c1;
	AFloat f_c2;
	AFloat f_c3;
	AFloat f_start;

	if ((LaneID == i_lane_num) && (i_lane_num != 7)&&(i_lane_num))
	{
		b_ret = ATRUE;
	}
	if (ifv->line[HWA_RB].hdCamQuality > DBL_EPSILON)
	{
		i_right_lane_id = (AInt32)(fabs(ifv->line[HWA_RB].dC0 / P_RFM_LANE_WIDTH) + 1);
	}
	else if ((radarline->lineRB.bIsLineExist == LINE_EXIST) && b_is_ehr_valid && b_is_express_way)
	{
		f_c0 = radarline->lineRB.dC0V;
		f_c1 = radarline->lineRB.dC1V;
		f_c2 = radarline->lineRB.dC2V;
		f_c3 = radarline->lineRB.dC3V;
		f_start = radarline->lineRB.dDisStart;
		i_right_lane_id = (AInt32)(fabs(BDRY_DIS(f_c0, f_c1, f_c2, f_c3, f_start) / P_RFM_LANE_WIDTH) + 1);
	}
	else
	{
		i_right_lane_id = 0;
	}

	if (LINE_OK(HWA_RB)&& LINE_OK(HWA_R1))
	{
		if ((ifv->line[HWA_R1].nLaneType==CAM_LINE_SOLID)
			&&(ifv->line[HWA_R1].dC0 - ifv->line[HWA_RB].dC0 < P_RFM_LANE_WIDTH *1.5))
		{
			b_emergency_lane = ATRUE;
		}
	}
	/*temp strategy*/
	if (LINE_OK(HWA_R2) && LINE_OK(HWA_R1))
	{
		if ((ifv->line[HWA_R1].nLaneType == CAM_LINE_SOLID)
			&& (ifv->line[HWA_R2].nLaneType == CAM_LINE_UNDECIDED)
			&& (ifv->line[HWA_R1].dC0 - ifv->line[HWA_R2].dC0 < P_RFM_LANE_WIDTH*1.5))
		{
			b_emergency_lane = ATRUE;
		}
	}
	if ((i_right_lane_id == 1) || b_ret || b_emergency_lane)
	{
		b_ret = ATRUE;
	}
	return b_ret;
}
/******************************************************************************/
/**
* @brief scene_IsDrivOnLeftLane
* @details 道路模型场景模块： 根据本车到摄像头边界线或毫米波边界线的距离，\n
* 判断本车是否在最左侧车道
* @param [in] Cameraline: 道路模型输入： 摄像头输出数据
* @param [in] Ehrmsg: 道路模型输入： 地图输出数据
* @param [in] radarline: 道路模型输入： 毫米波生成边界数据
* @param [in] LaneID: 道路模型输入： 计算得到的当前车道ID
* @return
* 1 本车在最左侧车道
* 0 本车不在最左侧车道
*/
/******************************************************************************/
static
ABool scene_IsDrivOnLeftLane(HWAIFVPack* ifv, HWAEHRPack* Ehrmsg, Radar_LineData* radarline, AInt8U LaneID)
{
	ABool b_ret = AFALSE;
	ABool b_is_express_way = (Ehrmsg->DrivingOnHighWay == 1) ? ATRUE : AFALSE;
	ABool b_is_ehr_valid = (Ehrmsg->MapDataValid == 1) ? ATRUE : AFALSE;
	AInt32 i_lane_num = Ehrmsg->NumOfLaneDrvDir;
	AInt32 i_left_lane_id = 0;
	AFloat f_c0;
	AFloat f_c1;
	AFloat f_c2;
	AFloat f_c3;
	AFloat f_start;
	ABool b_emergency_lane = AFALSE;
	if (LaneID == 1 && i_lane_num != 7)
	{
		b_ret = ATRUE;
	}
	else
	{

	}

	if (LINE_OK(HWA_LB))
	{
		i_left_lane_id = (AInt32)(fabs(ifv->line[HWA_LB].dC0 / P_RFM_LANE_WIDTH) + 1);
	}
	else if ((radarline->lineLB.bIsLineExist == LINE_EXIST) && b_is_ehr_valid && b_is_express_way)
	{
		f_c0 = radarline->lineLB.dC0V;
		f_c1 = radarline->lineLB.dC1V;
		f_c2 = radarline->lineLB.dC2V;
		f_c3 = radarline->lineLB.dC3V;
		f_start = radarline->lineLB.dDisStart;
		i_left_lane_id = (AInt32)(fabs(BDRY_DIS(f_c0, f_c1, f_c2, f_c3, f_start) / P_RFM_LANE_WIDTH) + 1);
	}	
	else
	{
		i_left_lane_id = 0;
	}
	/*temp strategy*//*emergency_lane judge*/
	if (LINE_OK(HWA_LB) && LINE_OK(HWA_L1))
	{
		if ((ifv->line[HWA_L1].nLaneType == CAM_LINE_SOLID)
			&& (ifv->line[HWA_LB].dC0 - ifv->line[HWA_L1].dC0 < P_RFM_LANE_WIDTH*0.5))
		{
			b_emergency_lane = ATRUE;
		}
	}
	if ((i_left_lane_id == 1) || b_ret || b_emergency_lane)
	{
		b_ret = ATRUE;
	}
	else
	{

	}

	return b_ret;
}

/******************************************************************************/
/**
* @brief scene_EmergencyLaneJudge
* @details 道路模型场景模块： 判断本车左右车道是否为应急车道，\n
* 用于判断本车所在车道ID
* @param [in] Cameraline: 道路模型输入： 摄像头输出数据
* @param [in] Ehrmsg: 道路模型输入： 地图输出数据
* @return 返回计算得到的当前车道ID
*/
/******************************************************************************/
static
AFloat scene_EmergencyLaneJudge(AInt8U b_is_ehr_valid, AInt8U b_is_express_way, CamLine *line, CamLine *line_next, CamLine *bdry) {
	AFloat b_emergency_width = 0.F;/* m */
	/*it is needed when ehr is available*/
	/*if (b_is_ehr_valid &&b_is_express_way)
	{*/
		if ((bdry->hdCamQuality > FLT_EPSILON)
			&& (line_next->hdCamQuality > FLT_EPSILON)
			&& (line->hdCamQuality > FLT_EPSILON))
		{
			if ((line_next->nLaneType == CAM_LINE_SOLID)
				&& fabs(bdry->dC0 - line_next->dC0) < P_RFM_LANE_WIDTH)
			{
				b_emergency_width = fabs(bdry->dC0 - line_next->dC0);
			}
		}
		else if ((bdry->hdCamQuality > FLT_EPSILON)
			&& (line->hdCamQuality > FLT_EPSILON))
		{
			if ((line->nLaneType == CAM_LINE_SOLID)
				&& fabs(bdry->dC0 - line->dC0) < P_RFM_LANE_WIDTH)
			{
				b_emergency_width = fabs(bdry->dC0 - line->dC0);
			}
		}
		else
		{

		}
	/*}*/
	return b_emergency_width;
}
/******************************************************************************/
/**
* @brief scene_LaneIdCheck
* @details 道路模型场景模块： 根据本车到摄像头边界线或毫米波边界线的距离，\n
* 判断本车所在车道ID
* @param [in] Cameraline: 道路模型输入： 摄像头输出数据
* @param [in] Ehrmsg: 道路模型输入： 地图输出数据
* @return 返回计算得到的当前车道ID
*/
/******************************************************************************/
static
AInt scene_LaneIdCheck(HWAIFVPack* ifv, HWAEHRPack* Ehrmsg, Radar_LineData* radarline, AInt32 LaneID) 
{
	AInt8U i_is_express_way = (Ehrmsg->DrivingOnHighWay == 1) ? ATRUE : AFALSE;
	AInt8U i_is_ehr_valid = (Ehrmsg->MapDataValid == 1) ? ATRUE : AFALSE;
	AInt32 i_lane_num = Ehrmsg->NumOfLaneDrvDir;
	AInt32 i_lane_id_checked = -1;
	AInt32 i_ret = 0;
	AFloat f_c0;
	AFloat f_c1;
	AFloat f_c2;
	AFloat f_c3;
	AFloat f_start;
	AFloat f_left_emergency = 0;
	AFloat f_right_emergency = 0;
	A_ASSERT(ifv);
	A_ASSERT(Ehrmsg);
	A_ASSERT(radarline);

	if (LINE_OK(HWA_LB))
	{
		f_left_emergency = scene_EmergencyLaneJudge(i_is_ehr_valid, i_is_express_way, &ifv->line[HWA_L1], &ifv->line[HWA_L2], &ifv->line[HWA_LB]);

		if (f_left_emergency > FLT_EPSILON)
		{
			i_lane_id_checked = (AInt32)(fabs((ifv->line[HWA_LB].dC0 - f_left_emergency) / P_RFM_LANE_WIDTH) + 1);
		}
		else
		{
			i_lane_id_checked = (AInt32)(fabs(ifv->line[HWA_LB].dC0 / P_RFM_LANE_WIDTH) + 1);
		}
	}
	else if (LINE_OK(HWA_RB))
	{
		f_right_emergency = scene_EmergencyLaneJudge(i_is_ehr_valid, i_is_express_way, &ifv->line[HWA_R1], &ifv->line[HWA_R2], &ifv->line[HWA_RB]);

		if (f_right_emergency > FLT_EPSILON)
		{
			i_lane_id_checked = i_lane_num - (AInt32)(fabs((ifv->line[HWA_RB].dC0 + f_right_emergency) / P_RFM_LANE_WIDTH) + 1) + 1;
		}
		else
		{
			i_lane_id_checked = i_lane_num - (AInt32)(fabs(ifv->line[HWA_RB].dC0 / P_RFM_LANE_WIDTH) + 1) + 1;
		}
	}
	else if ((radarline->lineLB.bIsLineExist == LINE_EXIST) && i_is_ehr_valid && i_is_express_way)
	{
		f_c0 = radarline->lineLB.dC0V;
		f_c1 = radarline->lineLB.dC1V;
		f_c2 = radarline->lineLB.dC2V;
		f_c3 = radarline->lineLB.dC3V;
		f_start = radarline->lineLB.dDisStart;
		i_lane_id_checked = (AInt32)(fabs(BDRY_DIS(f_c0, f_c1, f_c2, f_c3, f_start) / P_RFM_LANE_WIDTH) + 1);
	}
	else if ((radarline->lineRB.bIsLineExist == LINE_EXIST) && i_is_ehr_valid && i_is_express_way)
	{
		f_c0 = radarline->lineRB.dC0V;
		f_c1 = radarline->lineRB.dC1V;
		f_c2 = radarline->lineRB.dC2V;
		f_c3 = radarline->lineRB.dC3V;
		f_start = radarline->lineRB.dDisStart;
		i_lane_id_checked = i_lane_num - (AInt32)(fabs(BDRY_DIS(f_c0, f_c1, f_c2, f_c3, f_start) / P_RFM_LANE_WIDTH) + 1) + 1;
	}
	else
	{
		i_lane_id_checked = 0;
	}

	if ((i_lane_id_checked == 0) && (LaneID != 0))
	{
		i_ret = LaneID;
	}
	else
	{
		i_ret = i_lane_id_checked;
	}

	return i_ret;
}

/******************************************************************************/
/**
* @brief scene_iafLCJudgeBaseOnIfv
* @details 道路模型场景模块： 根据本车到摄像头车道线线的距离是否发生跳变，\n
* 判断本车是否发生换道
* @param [in] ifv: 道路模型输入： 摄像头输出数据
* @param [in] preifv: 道路模型输入： 上一时刻摄像头输出数据
* @param [in] isfirst: 道路模型输入： 是否为第一帧
* @param [out] msg: 道路模型输入： 将换道信息赋予车道模型
* @param [out] Roadmsg: 道路模型输入： 将变化后的车道ID赋予道路结果
* @return 
*/
/******************************************************************************/
static
AVoid scene_iafLCJudgeBaseOnIfv(HWAIFVPack* ifv, HWAIFVPack* preifv,
	HWALaneModelAll* msg, HWA_RoadMsg_st *Roadmsg, ABool isfirst) 
{
	A_ASSERT(msg);
	A_ASSERT(ifv);

	msg->lanechange.Crossed = AFALSE;

	if ((ifv->line[HWA_L1].hdCamQuality > DBL_EPSILON)       /*for left lane change process */
		&&(preifv->line[HWA_L1].hdCamQuality > DBL_EPSILON))
	{
		AFloat f_c0_l1 = ifv->line[HWA_L1].dC0;
		AFloat f_c0_l1_pre = preifv->line[HWA_L1].dC0;

		if (((f_c0_l1 - f_c0_l1_pre) > P_RFM_CROSS_LINE_THRESHOLD) && !isfirst)
		{
			msg->lanechange.Crossed = ATRUE;
			msg->lanechange.direction = LeftCL;
			Roadmsg->nLaneID -= 1;
		}
		else
		{

		}

		/*for right lane change process*/
		if (((f_c0_l1_pre - f_c0_l1) > P_RFM_CROSS_LINE_THRESHOLD) && !isfirst) 
		{
			msg->lanechange.Crossed = ATRUE;
			msg->lanechange.direction = RightCL;
			Roadmsg->nLaneID += 1;
		}
		else
		{

		}
	}	                                                    
	else if ((ifv->line[HWA_R1].hdCamQuality > DBL_EPSILON)       /*for left lane change process */
		&& (preifv->line[HWA_R1].hdCamQuality > DBL_EPSILON))
	{
		ADouble d_c0_r1 = ifv->line[HWA_R1].dC0;
		ADouble d_c0_r1_pre = preifv->line[HWA_R1].dC0;

		if (((d_c0_r1 - d_c0_r1_pre) > P_RFM_CROSS_LINE_THRESHOLD) && !isfirst) {
			msg->lanechange.Crossed = ATRUE;
			msg->lanechange.direction = LeftCL;
			Roadmsg->nLaneID -= 1;
		}
		else
		{

		}

		/*for right lane change process*/
		if (((d_c0_r1_pre - d_c0_r1) > P_RFM_CROSS_LINE_THRESHOLD) && !isfirst) {
			msg->lanechange.Crossed = ATRUE;
			msg->lanechange.direction = RightCL;
			Roadmsg->nLaneID += 1;
		}
		else
		{

		}
	}
	else
	{

	}
	
}
