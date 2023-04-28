/******************************************************************************/
/**
 * @file: HWARoadLayout.c
 * @brief 道路布局模块
 * @version: 3.0
 * @author: 
 * @copyright: Copyright (c)  All Rights Reserved
 * @date: 2020-8-4 08:41:24
 */
 /******************************************************************************/

/*
********************************************************************************
* Include files section
********************************************************************************
*/
#include "HWARoadLayout.h"

/*
********************************************************************************
* Define Section
********************************************************************************
*/



/*
********************************************************************************
* Function Prototype Declaration Section
********************************************************************************
*/

static
ABool LayOutLaneWidth(
	HWAKernel* kernel,
	HWAIFVPack* ifvpack
);

static
ABool LayOutFspx(
	HWAKernel* kernel, 
	HWA_FSPXPack* fspx
);

static
ABool LayOutLaneWidth_Sup(
	HWAKernel* kernel, 
	HWAIFVPack* ifvpack
);


/******************************************************************************/
/**
* @brief LayOutLaneWidth
* @details 计算车道宽度：利用摄像头车道线计算车道宽度
* @param [in] kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] ifvpack: 道路模型输入： 摄像头输出数据
* @param [out] kernel: 道路模型输出： 将计算得到的宽度赋予到结果。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
static
ABool LayOutLaneWidth(HWAKernel* kernel, HWAIFVPack* ifv)
{
	/* -4--2--0--1--3--5- */
	if (LANE_OK(HWA_L1, HWA_R1))
	{
		kernel->roadmsg[CURRENT].dCurrentLaneWidth = LANE_WIDTH_CALCU(HWA_L1, HWA_R1);
	}
	else
	{
		kernel->roadmsg[CURRENT].dCurrentLaneWidth = 0;
	}

	/*left lane*/
	if (LANE_OK(HWA_L2, HWA_L3))
	{
		kernel->roadmsg[CURRENT].dLeftLaneWidth = LANE_WIDTH_CALCU(HWA_L2, HWA_L3);
	}
	else if (LANE_OK(HWA_L2, HWA_L1))
	{
		kernel->roadmsg[CURRENT].dLeftLaneWidth = LANE_WIDTH_CALCU(HWA_L2, HWA_L1);
	}
	else
	{
		kernel->roadmsg[CURRENT].dLeftLaneWidth = 0;
	}

	/*right lane*/
	if (LANE_OK(HWA_R2, HWA_R3))
	{
		kernel->roadmsg[CURRENT].dRightLaneWidth = LANE_WIDTH_CALCU(HWA_R3, HWA_R2);
	}
	else if (LANE_OK(HWA_R1, HWA_R2))
	{
		kernel->roadmsg[CURRENT].dRightLaneWidth = LANE_WIDTH_CALCU(HWA_R1, HWA_R2);
	}
	else
	{
		kernel->roadmsg[CURRENT].dRightLaneWidth = 0;
	}
	return ATRUE;
}

/******************************************************************************/
/**
* @brief LayOutLaneWidth_Sup
* @details 车道宽度补充计算：根据车道ID，利用摄像头车道线和边界线计算车道宽度。
* @param [in] kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] ifvpack: 道路模型输入： 摄像头输出数据
* @param [out] kernel: 道路模型输出： 将计算得到的宽度赋予到结果。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
static
ABool LayOutLaneWidth_Sup(HWAKernel* kernel, HWAIFVPack* ifv)
{
	HWA_RoadMsg_st* roadmsg = &kernel->roadmsg[CURRENT];
	AInt8U lane_num = roadmsg->nLaneNum;
	/*left lane*/
	if (roadmsg->dLeftLaneWidth < FLT_EPSILON)
	{
		if (LANE_OK(HWA_L3, HWA_LB) && roadmsg->nLaneID == 2)
		{
			roadmsg->dLeftLaneWidth = LANE_WIDTH_CALCU(HWA_LB, HWA_L3);
		}
		else if (LANE_OK(HWA_L1, HWA_LB) && roadmsg->nLaneID == 2)
		{
			roadmsg->dLeftLaneWidth = LANE_WIDTH_CALCU(HWA_LB, HWA_L1);
		}
		else
		{
		}
	}
	/*right lane*/
	if (roadmsg->dRightLaneWidth < FLT_EPSILON)
	{
		if (LANE_OK(HWA_RB, HWA_R3) && (roadmsg->nLaneID == lane_num - 1) && (lane_num != 7))
		{
			roadmsg->dRightLaneWidth = LANE_WIDTH_CALCU(HWA_R3, HWA_RB);
		}
		else if (LANE_OK(HWA_R1, HWA_RB) && (roadmsg->nLaneID == lane_num - 1) && (lane_num != 7))
		{
			roadmsg->dRightLaneWidth = LANE_WIDTH_CALCU(HWA_R1, HWA_RB);
		}
		else
		{
		}
	}
	/* SPECIAL DEMAND */
	if (roadmsg->dCurrentLaneWidth > P_RFM_LANE_WIDTH * 2)
	{
		roadmsg->dCurrentLaneWidth = P_RFM_LANE_WIDTH;
	}
	if (roadmsg->dLeftLaneWidth> P_RFM_LANE_WIDTH *2)
	{
		roadmsg->dLeftLaneWidth = P_RFM_LANE_WIDTH;
	}
	if (roadmsg->dRightLaneWidth > P_RFM_LANE_WIDTH * 2)
	{
		roadmsg->dRightLaneWidth = P_RFM_LANE_WIDTH;
	}
	return ATRUE;
}
/******************************************************************************/
/**
* @brief LayOutFspx
* @details 计算车道宽度：利用摄像头freespace信息判断本车道和左右车道进可行驶的距离
* @param [in] kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] fspx: 道路模型输入： 摄像头输出freespace数据
* @param [out] kernel: 道路模型输出： 将计算得到的结果赋予到结果。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
static
ABool LayOutFspx(HWAKernel* kernel,  HWA_FSPXPack* fspx) {
	HWA_RoadMsg_st* pst_road_msg = &kernel->roadmsg[CURRENT];
	LineData* pst_line_msg = &kernel->lines[CURRENT];
	AInt i_cur_flag = 0;
	AInt i_left_flag = 0;
	AInt i_right_flag = 0;

	AFloat f_cur_min_dis = 200;
	AFloat f_left_min_dis = 200;
	AFloat f_right_min_dis = 200;

	AFloat f_x = 0;
	AFloat f_y = 0;
	AFloat af_l1[4] = { pst_line_msg->lineL1.dC0V, pst_line_msg->lineL1.dC1V, pst_line_msg->lineL1.dC2V, pst_line_msg->lineL1.dC3V };
	AFloat af_r1[4]  = {pst_line_msg->lineR1.dC0V, pst_line_msg->lineR1.dC1V, pst_line_msg->lineR1.dC2V, pst_line_msg->lineR1.dC3V };
	AFloat af_l2[4]  = {pst_line_msg->lineL2.dC0V, pst_line_msg->lineL2.dC1V, pst_line_msg->lineL2.dC2V, pst_line_msg->lineL2.dC3V };
	AFloat af_r2[4]  = {pst_line_msg->lineR2.dC0V, pst_line_msg->lineR2.dC1V, pst_line_msg->lineR2.dC2V, pst_line_msg->lineR2.dC3V };

	AFloat f_l1_y = 0;
	AFloat f_r1_y = 0;
	AFloat f_l2_y = 0;
	AFloat f_r2_y = 0;
	AInt i = 0;
	pst_road_msg->bLeftLaneFree = 0;                                     /*left Invalid*/
	pst_road_msg->bCurrentLaneFree = 0;                                  /*current Invalid*/
	pst_road_msg->bRightLaneFree = 0;                                    /*right Invalid*/
	pst_road_msg->fLeftLaneFreeDis = pst_line_msg->lineL1.dDisEnd;
	pst_road_msg->fCurrentLaneFreeDis = pst_line_msg->lineL1.dDisEnd;
	pst_road_msg->fRightLaneFreeDis = pst_line_msg->lineR1.dDisEnd;

	if ((pst_line_msg->lineL2.bIsLineExist != LINE_EXIST)
		&& (pst_line_msg->lineL1.bIsLineExist == LINE_EXIST)
		&& (pst_line_msg->lineR1.bIsLineExist == LINE_EXIST))
	{
		af_l2[0] = pst_line_msg->lineL1.dC0V + pst_road_msg->dCurrentLaneWidth;
		af_l2[1] = pst_line_msg->lineL1.dC1V;
		af_l2[2] = pst_line_msg->lineL1.dC2V;
		af_l2[3] = pst_line_msg->lineL1.dC3V;
	}
	else
	{

	}

	if ((pst_line_msg->lineR2.bIsLineExist != LINE_EXIST)
		&& (pst_line_msg->lineL1.bIsLineExist == LINE_EXIST)
		&& (pst_line_msg->lineR1.bIsLineExist == LINE_EXIST))
	{
		af_r2[0] = pst_line_msg->lineR1.dC0V - pst_road_msg->dCurrentLaneWidth;
		af_r2[1] = pst_line_msg->lineR1.dC1V;
		af_r2[2] = pst_line_msg->lineR1.dC2V;
		af_r2[3] = pst_line_msg->lineR1.dC3V;
	}
	else
	{

	}

	/*When L1 R1 valid or L2 L1 valid or R1 R2 valid*/
	if ((pst_line_msg->lineR1.bIsLineExist == LINE_EXIST) && (pst_line_msg->lineL1.bIsLineExist == LINE_EXIST))
	{
		pst_road_msg->bLeftLaneFree = 1;                                     /*left valid*/
		pst_road_msg->bCurrentLaneFree = 1;                                  /*current valid*/
		pst_road_msg->bRightLaneFree = 1;                                    /*right valid*/
	}
	else
	{

	}

	if ((pst_line_msg->lineL2.bIsLineExist == LINE_EXIST) && (pst_line_msg->lineL1.bIsLineExist == LINE_EXIST))
	{
		pst_road_msg->bLeftLaneFree = 1;
	}
	else
	{

	}

	if ((pst_line_msg->lineR1.bIsLineExist == LINE_EXIST) && (pst_line_msg->lineR2.bIsLineExist == LINE_EXIST))
	{
		pst_road_msg->bRightLaneFree = 1;
	}
	else
	{

	}

	/* linemsg->L1dDisFront; */ 
	if ((pst_line_msg->lineL1.bIsLineExist == LINE_EXIST) && (pst_line_msg->lineR1.bIsLineExist == LINE_EXIST))
	{
		for ( i = 0; i < fspx->header.Num_Of_Obstacles; i++)
		{
			HWA_FSPXElement st_f_element = fspx->element[i];
			AFloat f_range = st_f_element.FSPX_Range_B0;
			AFloat f_azi_angle = st_f_element.FSPX_Azimuth_Angle_B0;

			if ((st_f_element.FSPX_Existence_Prob_B0 > 0.9) || (st_f_element.FSPX_Obsticle_ID_B0 != 0))
			{
				f_x = f_range * cos(f_azi_angle) + 1.96;
				f_y = f_range * sin(f_azi_angle);
				f_l1_y = af_l1[0] + af_l1[1] * f_x + af_l1[2] * f_x * f_x + af_l1[3] * f_x * f_x * f_x;
				f_r1_y = af_r1[0] + af_r1[1] * f_x + af_r1[2] * f_x * f_x + af_r1[3] * f_x * f_x * f_x;
				f_l2_y = af_l2[0] + af_l2[1] * f_x + af_l2[2] * f_x * f_x + af_l2[3] * f_x * f_x * f_x;
				f_r2_y = af_r2[0] + af_r2[1] * f_x + af_r2[2] * f_x * f_x + af_r2[3] * f_x * f_x * f_x;

				if ((f_y > f_l1_y) && (f_y < f_l2_y) && (f_x < f_left_min_dis))
				{
					i_left_flag = 1;
					f_left_min_dis = f_x;
				}
				else if ((f_y > f_r1_y) && ( f_y < f_l1_y ) && (f_x < f_cur_min_dis))
				{
					i_cur_flag = 1;
					f_cur_min_dis = f_x;
				}
				else if ((f_y > f_r2_y) && (f_y < f_r1_y) && (f_x < f_right_min_dis))
				{
					i_right_flag = 1;
					f_right_min_dis = f_x;
				}
				else
				{

				}
			}
		}
	}
	else
	{

	}

	/*current*/
	if (pst_road_msg->bCurrentLaneFree == 1)
	{
		if (i_cur_flag == 1)
		{
			pst_road_msg->fCurrentLaneFreeDis = f_cur_min_dis;
		}
		else
		{
			pst_road_msg->fCurrentLaneFreeDis = pst_line_msg->lineL1.dDisEnd;
		}
	}

	/*left*/
	if (pst_road_msg->bLeftLaneFree == 1)
	{
		if (i_left_flag == 1)
		{
			pst_road_msg->fLeftLaneFreeDis = f_left_min_dis;
		}
		else
		{
			pst_road_msg->fLeftLaneFreeDis = pst_line_msg->lineL1.dDisEnd;
		}
	}

	/*right*/
	if (pst_road_msg->bRightLaneFree == 1)
	{
		if (i_right_flag == 1)
		{
			pst_road_msg->fRightLaneFreeDis = f_right_min_dis;
		}
		else
		{
			pst_road_msg->fRightLaneFreeDis = pst_line_msg->lineR1.dDisEnd;
		}
	}

	return ATRUE;

}
/******************************************************************************/
/**
* @brief HWARoadLayout
* @details 道路模型布局模块：计算出当前车道宽度，并将不同车道的可行驶距离\n
* 进行计算。
* @param [in] kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] ifv: 道路模型输： 摄像头输出数据
* @param [in] ehrpack: 道路模型输：地图输出数据
* @param [in] fspxpack: 道路模型输： 摄像头输出可行驶区域数据
* @param [out] kernel: 道路模型输出： 将计算到的数据赋予到结果。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
ABool HWARoadLayout(HWAKernel* kernel, HWAIFVPack *ifv, HWAEHRPack * ehrpack, HWA_FSPXPack* fspxpack)
{
	
	HWAEHRPack* pst_hwa_ehr_pack = ehrpack;
	HWAIFVPack* pst_ifv_pack = ifv;
	HWA_FSPXPack* pst_fspx = fspxpack;

	/* Step1: output the road layout in EHR (total number of lanes, curvature,) */
	kernel->roadmsg[CURRENT].dCurveDistance = pst_hwa_ehr_pack->RoadCurvatureFarDistance;                    /*Distance between current position and curve*/
	kernel->roadmsg[CURRENT].dRoadCurvature = pst_hwa_ehr_pack->RoadCurvatureFar;                   /*Current position curvature information*/
	kernel->roadmsg[CURRENT].dRoadCurvatureFar = pst_hwa_ehr_pack->RoadCurvatureFar; 

	kernel->roadmsg[CURRENT].nLaneNum = pst_hwa_ehr_pack->NumOfLaneDrvDir;                       /*Total number of lanes*/
	kernel->roadmsg[CURRENT].e_road_type = (HighWayType)pst_hwa_ehr_pack->DrivingOnHighWay;         /*Forced type conversion, whether it is in the main road -------- road type, there is a problem here*/

	/* step2:lane width formula */
	/* (L1C0-R1C02)/(sqrt(L1C1*R1C1)+1) */
	/* To be verified */
	LayOutLaneWidth(kernel, pst_ifv_pack);
	LayOutLaneWidth_Sup(kernel, pst_ifv_pack);
	LayOutFspx(kernel, pst_fspx);
	return ATRUE;
}

