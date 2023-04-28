/******************************************************************************/
/**
 * @file: HWABoundary.c
 * @brief 边界模块
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  All Rights Reserved
 * @date:
 */
 /******************************************************************************/

 /*
********************************************************************************
* Include files section
********************************************************************************
*/

#include <stdio.h>
#include "HWABoundary.h"

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
AVoid HWABoundaryBaseOnRadar(
	HWAKernel *pst_kernel,
	HWA_SensorInput_st* pst_radar_object,
	HWAEgoPack* pst_vehicle_pack,
	const HWAIFVPack* pst_cameraline
);

static
AVoid HWABoundaryBaseOnCamera(
	HWAKernel* pst_kernel,
	HWAIFVPack* pst_camera_line
);

static
AVoid HWABoundaryPredicted(
	HWAKernel* pst_kernel
);

static
AVoid iafRoadBoundLineInterpolate(
	const SingleLineData* pst_bound_line,
	PtsV* pst_pts_v
);

static
AVoid bdry_RadarDisSort(
	HWA_SensorInput_st* pst_static_radar,
	AInt32* Num
);

static
AVoid bdry_StaticRadarSelect(
	HWAEgoPack* pst_ego,
	HWA_SensorInput_st* pst_radar,
	HWA_SensorInput_st* pst_static_radar,
	AInt32* Num
);

static
AVoid bdry_DevideDirection(
	HWA_SensorInput_st* pst_static_radar,
	Bdry_PtsV* pst_pts_l_b,
	Bdry_PtsV* pst_pts_r_b,
	const HWAIFVPack* pst_cam
);

static
AVoid bdry_CalcuYaw(
	Bdry_PtsV* pst_pts_bdry
);

static
AFloat bdry_GetBdryLineStart(
	Bdry_PtsV* pts
);

static
AFloat bdry_GetBdryLineEnd(
	Bdry_PtsV* pts
);

static
AVoid bdry_BdryPtsSift(
	Bdry_PtsV* pst_pts,
	Bdry_PtsV* pst_pts_bdry,
	ADouble d_ave
);

static
AVoid uni_BdryValidity(
	SingleLineData* line_lb,
	SingleLineData* line_rb
);

static
CamLine	bdry_GetDividingLine(
	const HWAIFVPack* ifv
);

static
AVoid bdry_PtsBuffer(
	Bdry_PtsV*  tmp_buff_pts,
	Bdry_PtsV*  pts
);
static
AVoid bdry_SpaceUnify(
	Bdry_PtsV* pst_pts,
	AFloat f_alpha,
	AFloat f_dx,
	AFloat f_dy
);

static
AVoid bdry_BufferPts_Predict(
	Bdry_PtsV*  tmp_buff_pts,
	HWAEgoPack * ego,
	AFloat delta_t
);

static
AVoid bdry_BufferPts_Select(
	Bdry_PtsV*  tmp_buff_pts,
	Bdry_PtsV*  pts
);

static
AVoid bdry_BufferFarPts_Delete(
	Bdry_PtsV*  tmp_buff_pts
);

/******************************************************************************/
/**
* @brief HWABoundary
* @details 道路模型边界模块： 根据不同的边界源生成边界，\n
* 设置边界属性。
* @param [in] pst_kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] pst_object_pack: 道路模型输入： 毫米波输出
* @param [in] pst_ifv_pack: 道路模型输入： 摄像头输出数据
* @param [in] pst_vehicle_pack: 道路模型输入： 车身信息输出数据
* @param [out] pst_kernel: 道路模型输出： 将生成的边界赋予到道路模型内部的结构体。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
ABool HWABoundary(HWAKernel* pst_kernel, HWA_SensorInput_st* pst_object_pack, HWAIFVPack*  pst_ifv_pack, HWAEgoPack* pst_vehicle_pack)
{
	HWA_SensorInput_st* pst_radar_object = pst_object_pack;        /* SENSOR_MRR */
	HWAEgoPack* pst_ego_pack = pst_vehicle_pack;

	HWABoundaryBaseOnRadar(pst_kernel, pst_radar_object, pst_ego_pack, pst_ifv_pack);

	HWABoundaryPredicted(pst_kernel);

	return ATRUE;
}


/******************************************************************************/
/**
* @brief iafRoadBoundLineInterpolate
* @details 道路模型边界模块： 边界线的离散
* 设置边界属性。
* @param [in] pst_bound_line: 道路模型输入： 边界线的三次曲线参数。
* @param [out] pst_pts_v: 道路模型输出： 边界线离散生成的点集。
* @return
*/
/******************************************************************************/
static
AVoid iafRoadBoundLineInterpolate(const SingleLineData* pst_bound_line, PtsV* pst_pts_v)
{


	AInt32 i = 0;
	ADouble d_x;
	ADouble d_step_y, d_step_x;
	AFloat f_c0 = pst_bound_line->dC0V;
	AFloat f_c1 = pst_bound_line->dC1V;
	AFloat f_c2 = pst_bound_line->dC2V;
	AFloat f_c3 = pst_bound_line->dC3V;
	A_ASSERT(pst_bound_line);
	A_ASSERT(pst_pts_v);
	/* forward */
	for (i = 0; i < P_RFM_INSERT_PTS_TOTAL; ++i)
	{
		d_x = i * 10;
		pst_pts_v->ptV[i].dx = d_x;
		pst_pts_v->ptV[i].dy = f_c0 + f_c1 * d_x + f_c2 * d_x * d_x + f_c3 * d_x * d_x * d_x;

		if (i == 0)
		{
			pst_pts_v->ptV[i].dYaw = 0;
		}
		else
		{
			d_step_y = pst_pts_v->ptV[i].dy - pst_pts_v->ptV[i - 1].dy;
			d_step_x = pst_pts_v->ptV[i].dx - pst_pts_v->ptV[i - 1].dx;

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
* @brief bdry_RadarDisSort
* @details 道路模型边界模块： 边界目标点的从小到大排序
* @param [in] staticradar: 道路模型输入：毫米波的静态目标。
* @param [in] Num: 道路模型输入：毫米波的静态目标个数 。
* @param [out] staticradar: 道路模型输出：排序后的静态目标。
* @return
*/
/******************************************************************************/
static
AVoid bdry_RadarDisSort(HWA_SensorInput_st* staticradar, AInt32* Num)
{
	AInt32 i_num = *Num;
	HWA_ObjectInput_st st_temp_obj;
	AInt32 idx1 = 1;
	AInt32 idx2 = 0;
	for (idx1 = 1; idx1 <= i_num - 1; idx1++)
	{
		for (idx2 = 0; idx2 < i_num - idx1; idx2++)
		{
			if ((staticradar->objects[idx2].Obj_Dist_X > staticradar->objects[idx2 + 1].Obj_Dist_X) && fabs(staticradar->objects[idx2 + 1].Obj_Dist_X) > FLT_EPSILON)
			{
				st_temp_obj = staticradar->objects[idx2];
				staticradar->objects[idx2] = staticradar->objects[idx2 + 1];
				staticradar->objects[idx2 + 1] = st_temp_obj;
			}
			else
			{
			}
		}
	}
	return;
}
/******************************************************************************/
/**
* @brief bdry_StaticRadarSelect
* @details 计算边界目标点在车辆系下的左右方向
* @param [in] ego: 道路模型输入： 本车信息。
* @param [in] radar: 道路模型输入： 毫米波雷达目标。
* @param [out] staticradar: 道路模型输出： 静态的毫米波雷达目标。
* @param [out] Num: 道路模型输出： 静态目标点个数。
* @return
*/
/******************************************************************************/
static
AVoid bdry_StaticRadarSelect(HWAEgoPack* ego, HWA_SensorInput_st* radar, HWA_SensorInput_st* staticradar, AInt32* Num)
{
	AInt32 i_num = *Num;
	AInt32 i = 0;
	AFloat f_delt_vx;
	AFloat f_delt_vy;
	AFloat f_dx;
	AFloat f_dy;
	for (i = 0; i < radar->HWA_ValidNumber; i++)
	{
		f_delt_vx = radar->objects[i].Rel_Velocity_X + ego->Vel;
		f_delt_vy = radar->objects[i].Rel_Velocity_Y;
		f_dx = radar->objects[i].Obj_Dist_X;
		f_dy = radar->objects[i].Obj_Dist_Y;

		if ((f_dx > -100) && (f_dx < 200) && (f_dy > -20) && (f_dy < 20) && (fabs(f_dx) > FLT_EPSILON))
		{
			/* 	if(staticradar->objects[i].ObjMoveStatus == MovType_STATIONARY) */
			if ((fabs(f_delt_vx) < P_RFM_STATIC_VELOCTIY) && (fabs(f_delt_vy) < P_RFM_STATIC_VELOCTIY))
			{
				staticradar->objects[i_num] = radar->objects[i];
				staticradar->HWA_ValidNumber++;
				i_num++;
			}
			else
			{
			}
		}
		else
		{
		}
	}
	*Num = i_num;
	return;
}
/******************************************************************************/
/**
* @brief bdry_BdryPtsSift
* @details 根据左右边界点的平均距离对边界点进行筛选
* @param [in] Pts: 道路模型输入： 毫米波静态目标点。
* @param [in] d_ave: 道路模型输入： 边界点的平均值。
* @param [out] pst_pts_bdry: 道路模型输出：筛选后的静态目标点。
* @return
*/
/******************************************************************************/
static
AVoid bdry_BdryPtsSift(Bdry_PtsV* pst_pts, Bdry_PtsV* pst_pts_bdry, ADouble d_ave)
{
	AInt32 i_index_b = 0;
	AInt32U i = 0;
	A_ASSERT(pst_pts);
	A_ASSERT(pst_pts_bdry);
	A_ASSERT(d_ave);
	for (i = 0; i < pst_pts->nNum; i++)
	{
		if (i_index_b == 0)
		{
			if (fabs(pst_pts->ptV[i].dy - d_ave) < P_RFM_BIAS_DISTANCEY)
			{
				pst_pts_bdry->ptV[i_index_b].dx = pst_pts->ptV[i].dx;
				pst_pts_bdry->ptV[i_index_b].dy = pst_pts->ptV[i].dy;
				i_index_b++;
				pst_pts_bdry->nNum++;
			}
			else
			{

			}
		}
		else if ((fabs(pst_pts->ptV[i].dy - pst_pts_bdry->ptV[i_index_b - 1].dy) < P_RFM_BIAS_DISTANCEY)
			&& (fabs(pst_pts->ptV[i].dx - pst_pts_bdry->ptV[i_index_b - 1].dx) < P_RFM_BIAS_DISTANCEX))
		{
			pst_pts_bdry->ptV[i_index_b].dx = pst_pts->ptV[i].dx;
			pst_pts_bdry->ptV[i_index_b].dy = pst_pts->ptV[i].dy;
			i_index_b++;
			pst_pts_bdry->nNum++;
		}
		else
		{

		}
	}

	return;
}
/******************************************************************************/
/**
* @brief bdry_GetDividingLine
* @details 计算分界线
* @param [in] ifv: 道路模型输入： 摄像头车道线。
* @return line
*/
/******************************************************************************/
static
CamLine	bdry_GetDividingLine(const HWAIFVPack* ifv)
{
	CamLine line;
	memset(&line, 0x00, sizeof(CamLine));
	if (LANE_OK(HWA_L1, HWA_R1))
	{
		line.dC0 = (ifv->line[HWA_L1].dC0 + ifv->line[HWA_R1].dC0)* 0.5;
		line.dC1 = (ifv->line[HWA_L1].dC1 + ifv->line[HWA_R1].dC1)* 0.5;
		line.dC2 = (ifv->line[HWA_L1].dC2 + ifv->line[HWA_R1].dC2)* 0.5;
		line.dC3 = (ifv->line[HWA_L1].dC3 + ifv->line[HWA_R1].dC3)* 0.5;
		line.dRangeEnd = ifv->line[HWA_L1].dRangeEnd;
	}
	else if (LINE_OK(HWA_L1))
	{
		line.dC0 = 0;
		line.dC1 = ifv->line[HWA_L1].dC1;
		line.dC2 = ifv->line[HWA_L1].dC2;
		line.dC3 = ifv->line[HWA_L1].dC3;
		line.dRangeEnd = ifv->line[HWA_L1].dRangeEnd;
	}
	else if (LINE_OK(HWA_R1))
	{
		line.dC0 = 0;
		line.dC1 = ifv->line[HWA_R1].dC1;
		line.dC2 = ifv->line[HWA_R1].dC2;
		line.dC3 = ifv->line[HWA_R1].dC3;
		line.dRangeEnd = ifv->line[HWA_R1].dRangeEnd;
	}
	else if (LINE_OK(HWA_LB))
	{
		line.dC0 = 0;
		line.dC1 = ifv->line[HWA_LB].dC1;
		line.dC2 = ifv->line[HWA_LB].dC2;
		line.dC3 = ifv->line[HWA_LB].dC3;
		line.dRangeEnd = ifv->line[HWA_LB].dRangeEnd;
	}
	else if (LINE_OK(HWA_RB))
	{
		line.dC0 = 0;
		line.dC1 = ifv->line[HWA_RB].dC1;
		line.dC2 = ifv->line[HWA_RB].dC2;
		line.dC3 = ifv->line[HWA_RB].dC3;
		line.dRangeEnd = ifv->line[HWA_RB].dRangeEnd;
	}
	else
	{
	}
	return line;
}
/******************************************************************************/
/**
* @brief bdry_DevideDirection
* @details 计算边界目标点在车辆系下的左右方向
* @param [in] pst_static_radar: 道路模型输入： 边界目标点。
* @param [out] pst_pts_l_b: 道路模型输出： 左边界目标点。
* @param [out] pst_pts_r_b: 道路模型输出： 右边界目标点。
* @return
*/
/******************************************************************************/
static
AVoid bdry_DevideDirection(HWA_SensorInput_st* pst_static_radar, Bdry_PtsV* pst_pts_l_b, Bdry_PtsV* pst_pts_r_b, const HWAIFVPack* pst_cam)
{
	Bdry_PtsV st_pts_l;
	Bdry_PtsV st_pst_r;
	AInt32 i_index_l = 0;
	AInt32 i_index_r = 0;
	ADouble d_sum_l = 0;
	ADouble d_sum_r = 0;
	ADouble d_ave_l = 0;
	ADouble d_ave_r = 0;
	AInt32 j = 0;
	AFloat dis_x = 0;
	AFloat dis_y = 0;
	CamLine st_dividing_line;
	A_ASSERT(pst_static_radar);
	A_ASSERT(pst_pts_l_b);
	A_ASSERT(pst_pts_r_b);
	/*memset(&dividing_line, 0x00, sizeof(CamLine));*/
	memset(&st_pts_l, 0x00, sizeof(Bdry_PtsV));
	memset(&st_pst_r, 0x00, sizeof(Bdry_PtsV));

	st_dividing_line = bdry_GetDividingLine(pst_cam);
	if (st_dividing_line.dRangeEnd > 20)
	{
		for (j = 0; j < pst_static_radar->HWA_ValidNumber; j++)
		{
			dis_x = pst_static_radar->objects[j].Obj_Dist_X;
			dis_y = LINE_LAT_CALCULATE(st_dividing_line.dC0, st_dividing_line.dC1, st_dividing_line.dC2, st_dividing_line.dC3, dis_x);
			if (pst_static_radar->objects[j].Obj_Dist_Y > dis_y)
			{
				st_pts_l.ptV[i_index_l].dx = pst_static_radar->objects[j].Obj_Dist_X;
				st_pts_l.ptV[i_index_l].dy = pst_static_radar->objects[j].Obj_Dist_Y;
				d_sum_l = d_sum_l + st_pts_l.ptV[i_index_l].dy;
				i_index_l++;
				st_pts_l.nNum++;
			}
			else
			{
				st_pst_r.ptV[i_index_r].dx = pst_static_radar->objects[j].Obj_Dist_X;
				st_pst_r.ptV[i_index_r].dy = pst_static_radar->objects[j].Obj_Dist_Y;
				d_sum_r = d_sum_r + st_pst_r.ptV[i_index_r].dy;
				i_index_r++;
				st_pst_r.nNum++;
			}
		}

	}
	else
	{/*only valid in main road*/
		for (j = 0; j < pst_static_radar->HWA_ValidNumber; j++)
		{
			if (pst_static_radar->objects[j].Obj_Dist_Y > 0)
			{
				st_pts_l.ptV[i_index_l].dx = pst_static_radar->objects[j].Obj_Dist_X;
				st_pts_l.ptV[i_index_l].dy = pst_static_radar->objects[j].Obj_Dist_Y;
				d_sum_l = d_sum_l + st_pts_l.ptV[i_index_l].dy;
				i_index_l++;
				st_pts_l.nNum++;
			}
			else
			{
				st_pst_r.ptV[i_index_r].dx = pst_static_radar->objects[j].Obj_Dist_X;
				st_pst_r.ptV[i_index_r].dy = pst_static_radar->objects[j].Obj_Dist_Y;
				d_sum_r = d_sum_r + st_pst_r.ptV[i_index_r].dy;
				i_index_r++;
				st_pst_r.nNum++;
			}
		}
	}

	if (st_pts_l.nNum > 0)
	{
		d_ave_l = d_sum_l / st_pts_l.nNum;
	}
	else
	{

	}

	if (st_pst_r.nNum > 0)
	{
		d_ave_r = d_sum_r / st_pst_r.nNum;
	}
	else
	{

	}
	if (fabs(d_ave_l) > DBL_EPSILON)
	{
		bdry_BdryPtsSift(&st_pts_l, pst_pts_l_b, d_ave_l);   /* need to modify the method,sift pts with histogram */
	}
	if (fabs(d_ave_r) > DBL_EPSILON)
	{
		bdry_BdryPtsSift(&st_pst_r, pst_pts_r_b, d_ave_r);
	}
	return;
}
/******************************************************************************/
/**
* @brief bdry_CalcuYaw
* @details 计算边界目标点在车辆系下的弧度
* @param [in] pst_pts_l_b: 道路模型输入： 左边界目标点。
* @param [in] pst_pts_r_b: 道路模型输入： 右边界目标点。
* @param [out] pst_pts_l_b: 道路模型输入： 左边界目标点弧度。
* @param [out] pst_pts_r_b: 道路模型输入： 右边界目标点弧度。
* @return
*/
/******************************************************************************/
static
AVoid bdry_CalcuYaw(Bdry_PtsV* pst_pts_bdry)
{
	AInt32U i = 0;
	ADouble d_step_x, d_step_y;
	A_ASSERT(pst_pts_bdry);
	for (i = 0; i < pst_pts_bdry->nNum; ++i)
	{
		if (i == 0)
		{
			pst_pts_bdry->ptV[i].dYaw = 0.F;
		}
		else
		{
			d_step_x = pst_pts_bdry->ptV[i].dx - pst_pts_bdry->ptV[i - 1].dx;
			d_step_y = pst_pts_bdry->ptV[i].dy - pst_pts_bdry->ptV[i - 1].dy;

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
			pst_pts_bdry->ptV[i].dYaw = (AFloat)atan2(d_step_y, d_step_x);
		}
	}
	pst_pts_bdry->ptV[0].dYaw = pst_pts_bdry->ptV[1].dYaw;       /* Why let the 0 element to be same as the 1 element? */

	return;
}

/******************************************************************************/
/**
* @brief bdry_GetBdryLineStart
* @details 计算边界起点
* @param [in] pts: 道路模型输入： 边界点。
* @return 边界起点距离
*/
/******************************************************************************/
static
AFloat bdry_GetBdryLineStart(Bdry_PtsV* pts) {
	AFloat start_dis = 0;
	AFloat f_min_dis = 200;
	for (AInt i = 0; i < pts->nNum; i++)
	{
		if (pts->ptV[i].dx < f_min_dis)
		{
			f_min_dis = pts->ptV[i].dx;
		}
	}
	if (f_min_dis < FLT_EPSILON)
	{
		start_dis = 0;
	}
	else if (f_min_dis < 200)
	{
		start_dis = f_min_dis;
	}
	else
	{
		start_dis = 0;
	}

	return start_dis;
}
/******************************************************************************/
/**
* @brief bdry_GetBdryLineEnd
* @details 计算边界终点
* @param [in] pts: 道路模型输入： 边界点。
* @return 边界终点距离
*/
/******************************************************************************/
static
AFloat bdry_GetBdryLineEnd(Bdry_PtsV* pts) {
	AFloat end_dis = 0;
	AFloat f_max_dis = 0;
	for (AInt i = 0; i < pts->nNum; i++)
	{
		if (pts->ptV[i].dx > f_max_dis)
		{
			f_max_dis = pts->ptV[i].dx;
		}
	}
	if (f_max_dis < FLT_EPSILON)
	{
		end_dis = 0;
	}
	else if (f_max_dis < 200)
	{
		end_dis = f_max_dis;
	}
	else
	{
		end_dis = 0;
	}
	return end_dis;
}
/******************************************************************************/
/**
* @brief bdry_BdryFitting
* @details 边界点拟合
* @param [in] pts: 道路模型输入： 边界点。
* @param [out] line: 道路模型输出：边界曲线方程。
* @return
*/
/******************************************************************************/
static
AVoid bdry_BdryFitting(Bdry_PtsV* pts, SingleLineData* line) {

	AInt i_start;
	AInt i_end;
	AInt i_curr;
	/*decide the distance*/
	if (pts->nNum > 0) {
		line->dDisStart = bdry_GetBdryLineStart(pts);
		line->dDisEnd = bdry_GetBdryLineEnd(pts);
	}
	else
	{
	}

	if (pts->nNum <= P_RFM_FITTING_MIN_NUM)
	{
		line->bIsLineExist = LINE_NOT_EXIST;
		line->dQuality = 0;
	}
	else
	{
		iafDetermineFitRange_Bound(pts, &i_start, &i_end, &i_curr);
		iafValidateFitRange_Bound(i_start, i_curr, i_end, &line->dDisStart, &line->dDisEnd);
		bdry_SolveCurveCoeff(pts, line);
		/* line->dC0V = line->dC0V; */
		/* line->dC1V = line->dC1V; */
		/* line->dC2V = line->dC2V; */
		line->dC3V = 0;
		line->bIsLineExist = LINE_EXIST;
		line->dDisStart = line->dDisStart;
		line->dDisEnd = line->dDisEnd;
	}
	return;
}

/******************************************************************************/
/**
* @brief bdry_SpaceUnify
* @details 道路模型时空同步模块： 将车道线的点集依据本车运动状态进行补偿
* @param [in] pst_pts: 道路模型核心： 边界点点集。
* @param [in] f_alpha: 道路模型输入：边界点点集补偿的弧度 。
* @param [in] f_dx: 道路模型输入： 边界点点集补偿的纵向距离。
* @param [in] f_dy: 道路模型输入： 边界点点集补偿的横向距离。
* @param [out] pst_pts: 道路模型输出： 将最终得到的车道线赋予到车道线点集。
* @return 无返回值
*/
/******************************************************************************/
static
AVoid bdry_SpaceUnify(Bdry_PtsV* pst_pts, AFloat f_alpha, AFloat f_dx, AFloat f_dy)
{
	AInt32U i = 0;
	AFloat f_temp_dx = 0.F;
	AFloat f_cos_alpha = cos(f_alpha);
	AFloat f_sin_alpha = sin(f_alpha);
	AFloat f_sign_para = 0.F;
	A_ASSERT(pst_pts);
	if (f_alpha > FLT_EPSILON) {
		f_sign_para = 1.0F;
	}
	else
	{
		f_sign_para = -1.0F;
	}
	/* when alpha > 0
	x_i^'=x_i cos⁡(α)+y_i sin(α)-dx
	y_i^'=y_i cos⁡(α)-x_i sin(α)-dy */
	/* when alpha < 0
	x_i^'=x_i cos⁡(α)+y_i sin(α)-dx
	y_i^'=y_i cos⁡(α)-x_i sin(α)+dy */

	for (i = 0; i < pst_pts->nNum; i++)
	{
		f_temp_dx = pst_pts->ptV[i].dx;
		pst_pts->ptV[i].dx = pst_pts->ptV[i].dx * f_cos_alpha + pst_pts->ptV[i].dy * f_sin_alpha - f_dx;
		pst_pts->ptV[i].dy = pst_pts->ptV[i].dy * f_cos_alpha - f_temp_dx * f_sin_alpha - f_dy * f_sign_para;
		pst_pts->ptV[i].dYaw = pst_pts->ptV[i].dYaw + f_alpha;
	}
	return;
}

/******************************************************************************/
/**
* @brief bdry_BufferPts_Predict
* @details 边界点预测，将缓存边界点进行预测，对时空进行同步
* @param [in] tmp_buff_pts: 道路模型输入： 缓存边界点。
* @param [in] ego: 道路模型输入： 边界点。
* @param [in] delta_t: 道路模型输入： 两帧时间差。
* @param [out] tmp_buff_pts: 道路模型输出：边界点缓存。
* @return  无返回值
*/
/******************************************************************************/
static
AVoid bdry_BufferPts_Predict(Bdry_PtsV*  tmp_buff_pts, HWAEgoPack * ego, AFloat delta_t) {
	AFloat f_yaw_rate = ego->Yawrate; /*left + and right -, radian. If it is degree, it needs to convert the unit (yawrate)*/
	AFloat f_velocity = ego->Vel;
	AFloat f_t = 0.05F; /*second*/

	/* This time is a time of change */
	AFloat f_r = FLT_MAX;
	AFloat f_alpha = 0;
	AFloat f_dx = 0;
	AFloat f_dy = 0;
	if (delta_t < 0.2F)
	{
		f_t = delta_t;
	}
	else
	{
	}
	if (fabs(f_yaw_rate) > FLT_EPSILON)
	{
		/*Step 1: solve the rotation radius of the car*/
		f_r = fabs(f_velocity / f_yaw_rate);
		/*Step 2: solve the angle value according to the yaw rate and time*/
		f_alpha = f_yaw_rate * f_t;

		/*Step 3: calculate the displacement of the vehicle within this time difference*/
		f_dx = fabs(sin(f_alpha) * f_r);
		f_dy = f_r - cos(f_alpha) * f_r;
	}
	else
	{
		f_dx = f_velocity * f_t;
		f_dy = 0;
	}
	bdry_SpaceUnify(tmp_buff_pts, f_alpha, f_dx, f_dy);


	return;
}
/******************************************************************************/
/**
* @brief bdry_PtsBuffer
* @details 边界点缓存，将超出FOV的边界点进行缓存
* @param [in] pts: 道路模型输入： 边界点。
* @param [out] tmp_buff_pts: 道路模型输出：边界点缓存。
* @return 无返回值
*/
/******************************************************************************/
static
AVoid bdry_PtsBuffer(Bdry_PtsV*  tmp_buff_pts, Bdry_PtsV*  pts) {
	AFloat dx = 0;
	AFloat dy = 0;
	AFloat pts_dis = 0;
	AFloat min_dis = FLT_MAX;
	AInt tmp_buff_num = tmp_buff_pts->nNum;
	for (AInt i = 0; i < pts->nNum; i++)
	{
		if (pts->ptV[i].dx < P_RFM_RECORD_DIS_FRONT)
		{/*if tmp_buff have no pts */
			if (tmp_buff_pts->nNum == 0)
			{
				tmp_buff_pts->ptV[tmp_buff_num].dx = pts->ptV[i].dx;
				tmp_buff_pts->ptV[tmp_buff_num].dy = pts->ptV[i].dy;
				tmp_buff_pts->ptV[tmp_buff_num].dYaw = pts->ptV[i].dYaw;
				tmp_buff_num++;
			}
			else
			{
				for (AInt j = 0; j < tmp_buff_pts->nNum && (tmp_buff_num <= P_RFM_INSERT_PTS_TOTAL_BDRY); j++)
				{
					/*find min dis*/
					dx = tmp_buff_pts->ptV[j].dx - pts->ptV[i].dx;
					dy = tmp_buff_pts->ptV[j].dy - pts->ptV[i].dy;
					pts_dis = sqrt(dx * dx + dy * dy);
					if (pts_dis < min_dis)
					{
						min_dis = pts_dis;
					}
				}
				/* if buff(predicted) points associate with bdry_pts */
				if (min_dis < 2.0F)
				{/*Do you want to replace the predicted quantity with the measured quantity or delete the duplicate points?*/
					continue;
				}/*Put non duplicate points in temp_ buff*/
				else if ((pts->ptV[i].dx > P_RFM_RECORD_DIS_BEHIND)
					&& (pts->ptV[i].dx < P_RFM_RECORD_DIS_FRONT))
				{
					tmp_buff_pts->ptV[tmp_buff_num].dx = pts->ptV[i].dx;
					tmp_buff_pts->ptV[tmp_buff_num].dy = pts->ptV[i].dy;
					tmp_buff_pts->ptV[tmp_buff_num].dYaw = pts->ptV[i].dYaw;
					tmp_buff_num++;
				}
				else
				{

				}

			}

		}
	}
	tmp_buff_pts->nNum = tmp_buff_num;

	return;
}

/******************************************************************************/
/**
* @brief bdry_BufferPts_Select
* @details 缓存边界点的筛选，将满足条件的缓存点与边界点进行筛选，未匹配的点\n
* 加入边界点。
* @param [in] pts: 道路模型输入： 边界点。
* @param [out] tmp_buff_pts: 道路模型输出：边界点缓存。
* @return 无返回值
*/
/******************************************************************************/
static
AVoid bdry_BufferPts_Select(Bdry_PtsV*  tmp_buff_pts, Bdry_PtsV*  pts) {
	AFloat dx = 0;
	AFloat dy = 0;
	AFloat pts_dis = 0;
	AFloat min_dis = FLT_MAX;
	AInt bdry_pts_num = pts->nNum;
	for (AInt i = 0; i < tmp_buff_pts->nNum; i++)
	{
		if (tmp_buff_pts->ptV[i].dx < P_RFM_SELECT_DIS_FRONT)
		{/*if tmp_buff have no pts */
			for (AInt j = 0; j < pts->nNum; j++)
			{
				/*find min dis*/
				dx = tmp_buff_pts->ptV[i].dx - pts->ptV[j].dx;
				dy = tmp_buff_pts->ptV[i].dy - pts->ptV[j].dy;
				pts_dis = sqrt(dx * dx + dy * dy);
				if (pts_dis < min_dis)
				{
					min_dis = pts_dis;
					/*min_dis_idx = i;*/
				}
			}
			/* if buff(predicted) points associate with bdry_pts */
			if (min_dis < 2.0F)
			{ /*Repeat points are not treated*/
				continue;
			}/*将非重复点放入 bdry_pts*/
			else if ((tmp_buff_pts->ptV[i].dx > P_RFM_SELECT_DIS_BEHIND)
				&& (tmp_buff_pts->ptV[i].dx < P_RFM_SELECT_DIS_FRONT)
				&& (bdry_pts_num < P_RFM_INSERT_PTS_TOTAL_BDRY))
			{
				pts->ptV[bdry_pts_num].dx = tmp_buff_pts->ptV[i].dx;
				pts->ptV[bdry_pts_num].dy = tmp_buff_pts->ptV[i].dy;
				pts->ptV[bdry_pts_num].dYaw = tmp_buff_pts->ptV[i].dYaw;
				bdry_pts_num++;
			}
			else
			{

			}

		}
	}
	pts->nNum = bdry_pts_num;

	return;
}

/******************************************************************************/
/**
* @brief bdry_BufferFarPts_Delete
* @details 缓存边界点的筛选，将满足条件的缓存点与边界点进行筛选，未匹配的点\n
* 加入边界点。
* @param [in] pts: 道路模型输入： 边界点。
* @param [out] tmp_buff_pts: 道路模型输出：边界点缓存。
* @return 无返回值
*/
/******************************************************************************/
static
AVoid bdry_BufferFarPts_Delete(Bdry_PtsV*  tmp_buff_pts) {
	/*delete pts whose dx <-20 */
	Bdry_PtsV  temp;
	memset(&temp, 0, sizeof(Bdry_PtsV));
	AInt num = 0;
	for (AInt k = 0; k < tmp_buff_pts->nNum; k++)
	{
		if ((tmp_buff_pts->ptV[k].dx < P_RFM_RECORD_DIS_FRONT)
			&& (tmp_buff_pts->ptV[k].dx > P_RFM_RECORD_DIS_BEHIND))
		{
			temp.ptV[num].dx = tmp_buff_pts->ptV[k].dx;
			temp.ptV[num].dy = tmp_buff_pts->ptV[k].dy;
			temp.ptV[num].dYaw = tmp_buff_pts->ptV[k].dYaw;
			num++;
		}
		else
		{
			continue;
		}
	}
	temp.nNum = num;
	memcpy(tmp_buff_pts, &temp, sizeof(Bdry_PtsV));
	return;
}
/******************************************************************************/
/**
* @brief HWABoundaryBaseOnRadar
* @details 基于毫米波雷达静态目标生成边界
* @param [in] kernel: 道路模型输入： 道路模型内部的结构体。
* @param [in] Radarobject: 道路模型输入： 毫米波雷达目标。
* @param [in] vehiclepack: 道路模型输入： 车辆状态信息。
* @param [out] kernel: 道路模型输出：将毫米波边界赋予到结果。
* @return
*/
/******************************************************************************/
static
AVoid HWABoundaryBaseOnRadar(HWAKernel *pst_kernel, HWA_SensorInput_st* pst_radar_object, HWAEgoPack* pst_vehicle_pack, const HWAIFVPack* pst_cam) {

	HWAEgoPack* pst_ego = pst_vehicle_pack;
	HWA_SensorInput_st* pst_radar = pst_radar_object;
	HWA_SensorInput_st st_staticradar;
	HWA_ObjectInput_st ast_objs[P_RFM_MRR_OBJ_NUM];
	AInt32 i_num = 0;
	AFloat delta_t = (pst_kernel->timepack.hwacurTime - pst_kernel->pretime.hwacurTime)*0.001;

	Bdry_PtsV  st_pts_lb;
	Bdry_PtsV  st_pts_rb;

	Radar_LineData* pst_lines = &pst_kernel->radarlines;
	SingleLineData* ast_data[2];
	/*={	&pst_lines->lineLB, &pst_lines->lineRB }*/

	Radar_PtsVLine* pst_radarplv = &pst_kernel->radarplv;
	ast_data[0] = &pst_lines->lineLB;
	ast_data[1] = &pst_lines->lineRB;

	AInt times = 0; /* times */
	AFloat mThreshold = 1.5;/* m */
	Bdry_PtsV best_Set;
	LineModel Best_Model;
	memset(&best_Set, 0, sizeof(Bdry_PtsV));
	memset(&Best_Model, 0, sizeof(LineModel));

	/*MovType_STATIONARY 3*/
	memset(&st_staticradar, 0x00, sizeof(HWA_SensorInput_st));
	memset(ast_objs, 0x00, sizeof(ast_objs));
	st_staticradar.objects = ast_objs;

	memset(&st_pts_rb, 0, sizeof(Bdry_PtsV));
	memset(&st_pts_lb, 0, sizeof(Bdry_PtsV));

	/*static objs cluster*/
	bdry_StaticRadarSelect(pst_ego, pst_radar, &st_staticradar, &i_num);
	/*if no sort,pts cannot be select from near to far*/
	bdry_RadarDisSort(&st_staticradar, &i_num);

	/*devide left right*/
	bdry_DevideDirection(&st_staticradar, &st_pts_lb, &st_pts_rb, pst_cam);

	/*calculate pts yaw*/
	bdry_CalcuYaw(&st_pts_lb);
	bdry_CalcuYaw(&st_pts_rb);

	/**********************************/
	/* buffer points predict */
	bdry_BufferPts_Predict(&pst_kernel->buff_pts_left, pst_ego, delta_t);
	bdry_BufferPts_Predict(&pst_kernel->buff_pts_right, pst_ego, delta_t);

	/*points buffer*/
	bdry_PtsBuffer(&pst_kernel->buff_pts_left, &st_pts_lb);
	bdry_PtsBuffer(&pst_kernel->buff_pts_right, &st_pts_rb);

	/*fit the left*/ /*select non-same points*/ /*points combination*/
	bdry_BufferPts_Select(&pst_kernel->buff_pts_left, &st_pts_lb);
	/*ransac_computeModel(&st_pts_lb, &best_Set, &Best_Model, &times, mThreshold);*/
	bdry_BdryFitting(&st_pts_lb, ast_data[0]);

	/*fit the right*/ /*select non-same points*/ /*points combination*/
	bdry_BufferPts_Select(&pst_kernel->buff_pts_right, &st_pts_rb);
	/*ransac_computeModel(&st_pts_rb, &best_Set, &Best_Model, &times, mThreshold);*/
	bdry_BdryFitting(&st_pts_rb, ast_data[1]);

	/*delete far pts*/
	bdry_BufferFarPts_Delete(&pst_kernel->buff_pts_left);
	bdry_BufferFarPts_Delete(&pst_kernel->buff_pts_right);
	/************************************/

	uni_BdryValidity(ast_data[0], ast_data[1]);

	if (pst_lines->lineLB.bIsLineExist == LINE_EXIST)
	{
		iafRoadBoundLineInterpolate(ast_data[0], &pst_radarplv->BoundaryPtsL);
	}
	else
	{

	}
	if (pst_lines->lineRB.bIsLineExist == LINE_EXIST)
	{
		iafRoadBoundLineInterpolate(ast_data[1], &pst_radarplv->BoundaryPtsR);
	}
	else
	{

	}


	return;
}

/******************************************************************************/
/**
* @brief uni_LineValidity
* @details 道路模型车道线有效性判断：通过判断车道线各个参数值，分析车道线\n
* 是否有效，若超出范围或为无效值，置无效标志位。
* @param [in] linemsg: 车道线模型： 车道线信息内部的结构体。
* @param [in] linemsg: 车道线模型输出： 将最终的车道线有效性赋予到车道线结构。
* @return 无返回值
*/
/******************************************************************************/

static
AVoid uni_BdryValidity(SingleLineData* lineLB, SingleLineData* lineRB)
{
	/*LB VALID*/
	/*	if (LINE_ERROR(lineLB->dC0V)*/
	if (isnan(lineLB->dC0V)
		|| fabs(lineLB->dC0V) > P_RFM_BDRY_LINE_THRE_C0
		|| fabs(lineLB->dC1V) > P_RFM_BDRY_LINE_THRE_C1
		|| fabs(lineLB->dC2V) > P_RFM_BDRY_LINE_THRE_C2
		|| fabs(lineLB->dC3V) > P_RFM_BDRY_LINE_THRE_C3
		|| lineLB->dC0V < 0)
	{
		lineLB->bIsLineExist = LINE_NOT_EXIST;
		lineLB->dQuality = 0;
	}
	else
	{

	}
	/*RB VALID*/
	/*	if (LINE_ERROR(lineRB->dC0V)*/
	if (isnan(lineRB->dC0V)
		|| fabs(lineRB->dC0V) > P_RFM_BDRY_LINE_THRE_C0
		|| fabs(lineRB->dC1V) > P_RFM_BDRY_LINE_THRE_C1
		|| fabs(lineRB->dC2V) > P_RFM_BDRY_LINE_THRE_C2
		|| fabs(lineRB->dC3V) > P_RFM_BDRY_LINE_THRE_C3
		|| lineRB->dC0V > 0)
	{
		lineRB->bIsLineExist = LINE_NOT_EXIST;
		lineRB->dQuality = 0;
	}
	else
	{
	}
	return;
}
/******************************************************************************/
/**
* @brief HWABoundaryBaseOnCamera
* @details 将摄像头的边界线信息赋予道路核心结构体
* @param [in] pst_camera_line: 道路模型输入： 摄像头输入信息。
* @param [out] pst_kernel: 道路模型输出： 道路模型核心。
* @return
*/
/******************************************************************************/
static
AVoid HWABoundaryBaseOnCamera(HWAKernel* pst_kernel, HWAIFVPack* pst_camera_line)
{


	HWA_LaneMsg_st* pst_lines = &pst_kernel->linemsg[CURRENT];
	A_ASSERT(pst_camera_line);
	A_ASSERT(pst_kernel);
	/*TBD*/
	if (pst_camera_line->line[HWA_LB].nLaneType == CAM_LINE_SOLID || pst_camera_line->line[HWA_LB].hdCamQuality > FLT_EPSILON)
	{
		pst_lines->F_CLBdC0V = pst_camera_line->line[HWA_LB].dC0;
		pst_lines->F_CLBdC1V = pst_camera_line->line[HWA_LB].dC1;
		pst_lines->F_CLBdC2V = pst_camera_line->line[HWA_LB].dC2;
		pst_lines->F_CLBdC3V = pst_camera_line->line[HWA_LB].dC3;
		pst_lines->F_CLBdDisStart = pst_camera_line->line[HWA_LB].dRangeStart;
		pst_lines->F_CLBdDisFront = pst_camera_line->line[HWA_LB].dRangeEnd;
		pst_lines->F_CLBbIsLineExist = LINE_EXIST;
	}
	else
	{
		pst_lines->F_CLBbIsLineExist = LINE_NOT_EXIST;
	}

	if (pst_camera_line->line[HWA_RB].nLaneType == CAM_LINE_SOLID || pst_camera_line->line[HWA_RB].hdCamQuality > FLT_EPSILON)
	{
		pst_lines->F_CRBdC0V = pst_camera_line->line[HWA_RB].dC0;
		pst_lines->F_CRBdC1V = pst_camera_line->line[HWA_RB].dC1;
		pst_lines->F_CRBdC2V = pst_camera_line->line[HWA_RB].dC2;
		pst_lines->F_CRBdC3V = pst_camera_line->line[HWA_RB].dC3;
		pst_lines->F_CLBdDisStart = pst_camera_line->line[HWA_RB].dRangeStart;
		pst_lines->F_CLBdDisFront = pst_camera_line->line[HWA_RB].dRangeEnd;
		pst_lines->F_CRBbIsLineExist = LINE_EXIST;
	}
	else
	{
		pst_lines->F_CRBbIsLineExist = LINE_NOT_EXIST;
	}

	return;
}

/******************************************************************************/
/**
* @brief HWABoundaryPredicted
* @details 将毫米波生成的边界线信息进行预测，将预测结果赋予道路核心结构体
* @param [in] Cameraline: 道路模型输入： 摄像头输入信息。
* @param [out] kernel: 道路模型输出： 道路模型核心。
* @return
*/
/******************************************************************************/
static
AVoid HWABoundaryPredicted(HWAKernel* kernel)
{
	SingleLineData* preline_lb = &kernel->lines[PREVIOUS].lineF_LB;
	SingleLineData* preline_rb = &kernel->lines[PREVIOUS].lineF_RB;
	SingleLineData* line_lb = &kernel->lines[CURRENT].lineF_LB;
	SingleLineData* line_rb = &kernel->lines[CURRENT].lineF_RB;
	SingleLineData* radarline_lb = &kernel->radarlines.lineLB;
	SingleLineData* radarline_rb = &kernel->radarlines.lineRB;

	bdry_linepredict(kernel, preline_lb, radarline_lb, line_lb);
	bdry_linepredict(kernel, preline_rb, radarline_rb, line_rb);

#if MRR_BDRY_LOG
	/*_CRT_SECURE_NO_WARNINGS*/
	LineData * lines = kernel->lines;
	FILE *fp = fopen("F:\\BDRY\\docsbdry_data_1127_1.txt", "at");
	fprintf(fp, "LB_qality %d, LB_C0 %lf,LB_C1 %lf,LB_C2 %lf,LB_C3 %lf,", line_lb->bIsLineExist, line_lb->dC0V, line_lb->dC1V, line_lb->dC2V, line_lb->dC3V);
	fprintf(fp, "RB_qality %d, RB_C0 %lf,RB_C1 %lf,RB_C2 %lf,RB_C3 %lf,", line_rb->bIsLineExist, line_rb->dC0V, line_rb->dC1V, line_rb->dC2V, line_rb->dC3V);
	fprintf(fp, "CLB_qality %d, LB_C0 %lf,LB_C1 %lf,LB_C2 %lf,LB_C3 %lf,", lines->lineLB.bIsLineExist, lines->lineLB.dC0V, lines->lineLB.dC1V, lines->lineLB.dC2V, lines->lineLB.dC3V);
	fprintf(fp, "CRB_qality %d, RB_C0 %lf,RB_C1 %lf,RB_C2 %lf,RB_C3 %lf\n", lines->lineRB.bIsLineExist, lines->lineRB.dC0V, lines->lineRB.dC1V, lines->lineRB.dC2V, lines->lineRB.dC3V);

	fclose(fp);

	//FILE *fp = fopen("F:\\程序\HWA代码管理\\0420环境模型C代码HMI第一版\\df-debug-kit-for-windows -UDP\\docsbdry_data_R.txt", "a");
	//fprintf(fp, "RB_qality %d, RB_C0 %lf,RB_C1 %lf,RB_C2 %lf,RB_C3 %lf\n", lines->lineRB.bIsLineExist, lines->lineRB.dC0V, lines->lineRB.dC2V, lines->lineRB.dC3V);

	//fclose(fp);
#endif
	return;
}
