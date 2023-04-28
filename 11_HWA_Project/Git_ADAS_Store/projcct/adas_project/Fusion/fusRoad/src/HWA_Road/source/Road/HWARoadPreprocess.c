/******************************************************************************/
/**
 * @file: HWARoadPreprocess.c
 * @brief 预处理模块
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  .All Rights Reserved
 * @date: 2020-10-26 13:05:24
 */
 /******************************************************************************/

/*
********************************************************************************
* Include files section
********************************************************************************
*/


#include "HWARoadPreprocess.h"

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
AVoid iafRoadIfvInterpolate(
	HWAIFVPack* ifv, 
	PtsVLine* pst_ifv_plv,
	LineData* pst_pre_lines
);

static
AVoid iafRoadIfvCooR2EgoVCoor(
	HWAIFVPack* ifv
);

static
AVoid iafRoadIfvLaneWidthSet(
	HWAIFVPack* ifv,
	HWALaneModelAll* pst_msg, 
	LineData* pst_pre_lines
);

static
ABool iafRoadIfvLaneSts(
	HWAIFVPack* ifv
);

static
AVoid iafRoadCamLineInterpolate(
	const CamLine* pst_cam_line,
	PtsV* pst_pts_v
);

static
AInt proc_LineStatusVerify(
	HWAIFVPack* ifv,
	HWAEgoPack* pst_egopack,
	HWAIFVPack* pre_ifv
);

static
AInt iafRoadIfvProc(
	HWAIFVPack* ifv,
	HWAEgoPack* pst_egopack,
	PtsVLine* pst_ifv_plv,
	HWALaneModelAll* pst_msg,
	LineData* pst_pre_lines,
	HWAIFVPack* pre_ifv
);

static
AInt iafRoadMrrProc(
	HWAKernel* pst_kernel, 
	HWAEgoPack* pst_egopack, 
	HWA_SensorInput_st* pst_mrr_pack
);

static
AInt proc_TsrStatusVerify(
	HWATSRPack* tsr, 
	HWATSRPack* pre_tsr
);

static
AInt iafRoadTsrProc(
	HWAKernel* pst_kernel,
	HWAEgoPack* pst_egopack,
	HWATSRPack* tsr_pack
);

/******************************************************************************/
/**
* @brief proc_LineStatusVerify
* @details 摄像头车道线预处理
* @param [in]: ifv
* @param [in]: pst_ifv_plv
* @param [in]: pst_pre_line_data
* @param [out]: pst_msg
* @return 运行结果
* - 非0 运行失败
* - 0 运行成功
*/
/******************************************************************************/
static
AInt proc_LineStatusVerify(HWAIFVPack* ifv, HWAEgoPack* pst_egopack, HWAIFVPack* pre_ifv)
{

	AInt i_ret = A_E_NOERROR;
	if (pst_egopack->Vel > P_RFM_EGO_MOVING_V)
	{
		for (AInt8U i = 0; i < HWA_IDX_MAX; i++)
		{
			if ((fabs(ifv->line[i].dC0 - pre_ifv->line[i].dC0) < 0.001)
				&& (ifv->line[i].hdCamQuality>FLT_EPSILON))
			{
				ifv->line[i].Fail_Cnt = pre_ifv->line[i].Fail_Cnt;
				ifv->line[i].Fail_Cnt++;
			}
			else
			{
				ifv->line[i].Fail_Cnt = 0;
			}
			if (ifv->line[i].Fail_Cnt > P_RFM_LINE_FAIL_CNT_PREDICT)
			{
				ifv->line[i].Fail_Cnt = P_RFM_LINE_FAIL_CNT_PREDICT + 1;
				ifv->line[i].hdCamQuality = 0;
			}
		}
	}
	
#if  0
	/* judge by time */
	for (AInt8U i = 0; i < HWA_IDX_MAX; i++)
	{
		ifv->line[i].Fail_Cnt = pre_ifv->line[i].Fail_Cnt;
		AInt8U tm = ifv->line[i].hdLaneLineStamp - pre_ifv->line[i].hdLaneLineStamp;
		if (ifv->line[i].hdLaneLineStamp== pre_ifv->line[i].hdLaneLineStamp)
		{
			ifv->line[i].Fail_Cnt++;
		}
		else
		{
			ifv->line[i].Fail_Cnt = 0;
		}
		if (ifv->line[i].Fail_Cnt > P_RFM_LINE_FAIL_CNT_PREDICT)
		{
			ifv->line[i].hdCamQuality = 0;
			pre_ifv->line[i].hdCamQuality = 0;
		}
	}
#endif 

	return i_ret;
}

/******************************************************************************/
/**
* @brief proc_TsrStatusVerify
* @details 摄像头车道线预处理
* @param [in]: ifv
* @param [in]: pst_ifv_plv
* @param [in]: pst_pre_line_data
* @param [out]: pst_msg
* @return 运行结果
* - 非0 运行失败
* - 0 运行成功
*/
/******************************************************************************/
static
AInt proc_TsrStatusVerify(HWATSRPack* tsr, HWATSRPack* pre_tsr)
{

	AInt i_ret = A_E_NOERROR;
	for (AInt8U i = 0; i < tsr->header.TSR_Valid_Num; i++)
	{
		AInt8U i_repeat_flag = 0;

		for (AInt8U j = 0; j < pre_tsr->header.TSR_Valid_Num; j++)
		{

			if (tsr->element[i].TSR_ID == pre_tsr->element[j].TSR_ID)
			{
				i_repeat_flag = 1;
				tsr->element[i].Reserved_2 = pre_tsr->element[j].Reserved_2;
			}
			else
			{
			}
		}
		/*if repeat*/
		if (i_repeat_flag)
		{
			tsr->element[i].Reserved_2++;
		}
		else
		{
			tsr->element[i].Reserved_2 = 0;
		}
		if (tsr->element[i].Reserved_2 > P_RFM_TSR_FAIL_CNT)
		{
			tsr->element[i].Reserved_2 = P_RFM_TSR_FAIL_CNT + 2;
			tsr->element[i].TSR_Relevancy = 5;/*FAR_IRRELEVANT_SIGN*/
		}

#if TSR_LOG
		printf("TSR %d: ID: %d,Name: %d,Conf: %.2f,Rele: %d,Lat: %.2f,Long: %.2f,Height: %.2f,Sup1Name:%d,Sup2Name:%d\n", i,
			tsr->element[i].TSR_ID, tsr->element[i].TSR_Sign_Name, tsr->element[i].TSR_Confidence,
			tsr->element[i].TSR_Relevancy, tsr->element[i].TSR_Sign_Lateral_Distance,
			tsr->element[i].TSR_Sign_Long_Distance, tsr->element[i].TSR_Sign_Height, tsr->element[i].TSR_Sup1_SignName,
			tsr->element[i].TSR_Sup2_SignName);
#endif // HWA_LOG

	}
	

#if  0
	/* judge by time */
	for (AInt8U i = 0; i < HWA_IDX_MAX; i++)
	{
		ifv->line[i].Fail_Cnt = pre_ifv->line[i].Fail_Cnt;
		AInt8U tm = ifv->line[i].hdLaneLineStamp - pre_ifv->line[i].hdLaneLineStamp;
		if (ifv->line[i].hdLaneLineStamp == pre_ifv->line[i].hdLaneLineStamp)
		{
			ifv->line[i].Fail_Cnt++;
		}
		else
		{
			ifv->line[i].Fail_Cnt = 0;
		}
		if (ifv->line[i].Fail_Cnt > P_RFM_LINE_FAIL_CNT_PREDICT)
		{
			ifv->line[i].hdCamQuality = 0;
			pre_ifv->line[i].hdCamQuality = 0;
		}
	}
#endif 

	return i_ret;
}
/******************************************************************************/
/**
* @brief iafRoadIfvProc
* @details 摄像头车道线预处理
* @param [in]: ifv
* @param [in]: pst_ifv_plv
* @param [in]: pst_pre_line_data
* @param [out]: pst_msg
* @return 运行结果
* - 非0 运行失败
* - 0 运行成功
*/
/******************************************************************************/
static
AInt iafRoadIfvProc(HWAIFVPack* ifv, HWAEgoPack* pst_egopack, PtsVLine* pst_ifv_plv, HWALaneModelAll* pst_msg, LineData* pst_pre_lines, HWAIFVPack* pre_ifv)
{
	AInt i_ret = A_E_NOERROR;
	A_ASSERT(ifv);
	A_ASSERT(pst_ifv_plv);
	A_ASSERT(pst_msg);
	A_ASSERT(pst_pre_lines);
	/*to ego coordinate*/
	iafRoadIfvCooR2EgoVCoor(ifv);
	
	/*it's a bug,need to modfy:cannot judge lane change because ifv has changed */
	i_ret = proc_LineStatusVerify(ifv, pst_egopack, pre_ifv);

	/* coordinate transform && interpolate */
	iafRoadIfvInterpolate(ifv, pst_ifv_plv, pst_pre_lines);

	/* camera Confidence statistics */
	pst_msg->bIsCamAvailable = iafRoadIfvLaneSts(ifv);

	return i_ret;
}

/******************************************************************************/
/**
* @brief iafRoadIfvProc
* @details 摄像头车道线预处理
* @param [in]: ifv
* @param [in]: pst_ifv_plv
* @param [in]: pst_pre_line_data
* @param [out]: pst_msg
* @return 运行结果
* - 非0 运行失败
* - 0 运行成功
*/
/******************************************************************************/
static
AInt iafRoadMrrProc(HWAKernel* pst_kernel, HWAEgoPack* pst_egopack, HWA_SensorInput_st* pst_mrr_pack)
{
	AInt i_ret = A_E_NOERROR;
	AFloat f_unify_time = 0.025;/*s*/
	AFloat f_delta_time = (pst_kernel->timepack.hwacurTime - pst_mrr_pack->timestamp)*0.001;/*s*/
	
	if (f_delta_time > 0.2)
	{
		f_delta_time = f_unify_time;
	}
	for (AInt i = 0; i < pst_mrr_pack->HWA_ValidNumber; i++)
	{
		pst_mrr_pack->objects[i].Obj_Dist_X = pst_mrr_pack->objects[i].Obj_Dist_X + pst_mrr_pack->objects[i].Rel_Velocity_X*f_delta_time;
		pst_mrr_pack->objects[i].Obj_Dist_Y = pst_mrr_pack->objects[i].Obj_Dist_Y + pst_mrr_pack->objects[i].Rel_Velocity_Y*f_delta_time;
#if MRR_BDRY_LOG
	//	printf("x= %.3f, y= %.3f, n= %d\n",pst_mrr_pack->objects[i].Obj_Dist_X, pst_mrr_pack->objects[i].Obj_Dist_Y, pst_mrr_pack->HWA_ValidNumber);
#endif	
	}

	return i_ret;
}
/******************************************************************************/
/**
* @brief iafRoadTsrProc
* @details 摄像头TSR预处理
* @param [in]: ifv
* @param [in]: pst_ifv_plv
* @param [in]: pst_pre_line_data
* @param [out]: pst_msg
* @return 运行结果
* - 非0 运行失败
* - 0 运行成功
*/
/******************************************************************************/
static
AInt iafRoadTsrProc(HWAKernel* pst_kernel, HWAEgoPack* pst_egopack, HWATSRPack* tsr_pack)
{
	AInt i_ret = A_E_NOERROR;
	HWATSRPack* pre_tsr = &pst_kernel->preTsr;
#if TSR_LOG
	printf("prepross \n");
#endif
	proc_TsrStatusVerify(tsr_pack, pre_tsr);

	return i_ret;
}
/******************************************************************************/
/**
* @brief iafRoadIfvCooR2EgoVCoor
* @details 摄像头车道线转至车辆系
* @param [in] ifv:
* @param [in] pst_ifv_plv:
* @param [in] pst_pre_line_data:
* @param [out] pst_msg:
* @return 无
*/
/******************************************************************************/
static
AVoid iafRoadIfvCooR2EgoVCoor(HWAIFVPack* ifv)
{
	AInt8U i = 0;

	for (i = 0; i < HWA_IDX_MAX; ++i)
	{
		ifv->line[i].dC0 *= -1;
		ifv->line[i].dC1 *= -1;
		ifv->line[i].dC2 *= -1;
		ifv->line[i].dC3 *= -1;
	}

	return;
}
/******************************************************************************/
/**
* @brief iafRoadIfvInterpolate
* @details 摄像头车道线离散
* @param [in] ifv:
* @param [in] pst_ifv_plv:
* @param [in] pst_pre_line_data:
* @param [out] pst_msg:
* @return 无
*/
/******************************************************************************/
static
AVoid iafRoadIfvInterpolate(HWAIFVPack* ifv, PtsVLine* pst_ifv_plv, LineData* pst_pre_lines)
{

	A_ASSERT(ifv);
	A_ASSERT(pst_ifv_plv);
	AInt8U idx = 0;
	/*interpolate camLIne*/
	for (idx = 0; idx < HWA_IDX_MAX; idx++)
	{
		if (LINE_OK(idx))
		{
			iafRoadCamLineInterpolate(&ifv->line[idx], (&pst_ifv_plv->lanePtsL + idx));
		}
	}

	return;
}

/******************************************************************************/
/**
* @brief iafRoadIfvLaneWidthSet
* @details 摄像头车道线计算车道宽度
* @param [in]: ifv
* @param [out]: pst_msg
* @return 无
*/
/******************************************************************************/
static
AVoid iafRoadIfvLaneWidthSet(HWAIFVPack* ifv, HWALaneModelAll* pst_msg, LineData* pst_pre_lines)
{
	A_ASSERT(ifv);
	A_ASSERT(pst_msg);
	if (LANE_OK(HWA_L1, HWA_R1))
	{
		pst_msg->ifv_model.dLaneWidthNext = LANE_WIDTH_CALCU(HWA_L1, HWA_R1);
	}
	else
	{
	}

	if (LANE_OK(HWA_L1, HWA_L2))
	{
		pst_msg->ifv_model.dLaneLWidthCur = LANE_WIDTH_CALCU(HWA_L1, HWA_L2);
	}
	else
	{
	}

	if (LANE_OK(HWA_R1, HWA_R2))
	{
		pst_msg->ifv_model.dLaneRWidthCur = LANE_WIDTH_CALCU(HWA_R1, HWA_R2);
	}
	else
	{
	}
}

/******************************************************************************/
/**
* @brief iafRoadIfvLaneSts
* @details 摄像头车道线状态判断
* @param [in]: ifv
* @param [out] :
* @return 无
*/
/******************************************************************************/
static
ABool iafRoadIfvLaneSts(HWAIFVPack* ifv)
{

	ABool b_ret = AFALSE;
	AInt i = 0;
	A_ASSERT(ifv);
	for (i = 0; i < sizeof(ifv->line) / sizeof(CamLine); ++i)
	{
		b_ret |= (ABool)(LINE_OK(i));
	}
	return b_ret;
}

/******************************************************************************/
/**
* @brief iafRoadCamLineInterpolate
* @details 摄像头车道线插值
* @param [in]: pst_cam_line
* @param [out]: pst_pts_v
* @return 无
*/
/******************************************************************************/
static
AVoid iafRoadCamLineInterpolate(const CamLine* pst_cam_line, PtsV* pst_pts_v)
{
	AInt32 i = 0;
	AFloat f_c0 = pst_cam_line->dC0;
	AFloat f_c1 = pst_cam_line->dC1;
	AFloat f_c2 = pst_cam_line->dC2;
	AFloat f_c3 = pst_cam_line->dC3;
	A_ASSERT(pst_cam_line);
	A_ASSERT(pst_pts_v);
	for (i = 0; i < P_RFM_INSERT_PTS_TOTAL; ++i)
	{
		AFloat f_x = i * 10.F;
		pst_pts_v->ptV[i].dx = f_x;
		pst_pts_v->ptV[i].dy = f_c0 + f_c1 * f_x + f_c2 * f_x * f_x + f_c3 * f_x * f_x * f_x;

		if (i == 0) {
			pst_pts_v->ptV[i].dYaw = 0;
		}
		else
		{
			ADouble d_step_y = pst_pts_v->ptV[i].dy - pst_pts_v->ptV[i - 1].dy;
			ADouble d_step_x = pst_pts_v->ptV[i].dx - pst_pts_v->ptV[i - 1].dx;

			if (d_step_x < DBL_EPSILON && d_step_x >= 0)
			{
				d_step_x = DBL_EPSILON;
			}
			else if (d_step_x > -DBL_EPSILON && d_step_x <= 0)
			{
				d_step_x = -DBL_EPSILON;
			}
			else
			{

			}

			pst_pts_v->ptV[i].dYaw = (AFloat)atan2(d_step_y, d_step_x);
		}
	}
	pst_pts_v->nNum = P_RFM_INSERT_PTS_TOTAL;
	return;
}



/******************************************************************************/
/**
* @brief HWARoadPreprocess
* @details 运行道路模型节点。
* @param [in] pst_kernel: 道路模型结构体核心
* @param [in] ifvpack: 摄像头输出数据
* @param [out] pst_kernel: 将预处理的结果赋予核心结构体
* @return 运行结果
* - 非0 运行失败
* - 0 运行成功
*/
/******************************************************************************/
AInt HWARoadPreprocess(HWAKernel* pst_kernel, HWAIFVPack* pst_ifv_pack, HWAEgoPack*  pst_ego_pack, HWA_SensorInput_st* pst_mrr_pack, HWATSRPack* tsr_pack)
{

	AInt i_ret = A_E_NOERROR;
	PtsVLine* pst_ifv_plv = &pst_kernel->camplv;
	HWALaneModelAll* pst_msg = &pst_kernel->drvmsg[CURRENT];
	LineData* pst_prelines = &pst_kernel->lines[PREVIOUS];
	HWAIFVPack* pre_cam = &pst_kernel->preIfv;
	A_ASSERT(pst_kernel);
	A_ASSERT(pst_ifv_pack);
	/* Ifv preprocess */
	i_ret = iafRoadIfvProc(pst_ifv_pack, pst_ego_pack, pst_ifv_plv, pst_msg, pst_prelines, pre_cam);
	i_ret = iafRoadMrrProc(pst_kernel, pst_ego_pack, pst_mrr_pack);
	i_ret = iafRoadTsrProc(pst_kernel, pst_ego_pack, tsr_pack);

	/* Step1: more or no processing of EHR (added according to the actual situation) */
	/* Step 2: process the camera lane line, extract the real lane line (add according to the actual situation) */
	/* Step 3: coordinate conversion of lane line for the camera -- it must be handled here, rather than at the front end */
	/* Step 4: extract the lane line where the camera belongs to the boundary -- it seems that there is no need for a separate module, which can be extracted directly after coordinate conversion */

	return i_ret;
}

