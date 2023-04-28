/******************************************************************************/
/**
* @file: HWABoundaryLinePredicted.cc
* @brief 时空同步模块
* @version: 3.0
* @author:
* @copyright: Copyright (c) All Rights Reserved
* @date:2020-8-3 18:24:25
*/
/******************************************************************************/

/*
********************************************************************************
* Include files section
********************************************************************************
*/
#include "HWABoundaryLinePredicted.h"
/*
********************************************************************************
* Function Prototype Declaration Section
********************************************************************************
*/

static
AVoid HWALineTimeSpaceUnify(
	HWAKernel* pst_kernel,
	PtsVLine* pst_line,
	HWAEgoPack* pst_ego,
	HWAIFVPack* pst_ifv_pack
);

static
AInt8U uni_LineColorConvert(
	AInt8U i_color
);

static
AVoid uni_SpaceUnify(
	PtsV* pst_pts,
	AFloat f_alpha, 
	AInt i_is_line_ok, 
	AFloat f_dx,
	AFloat f_dy
);

static
AVoid uni_LineFitting(
	HWAKernel* kernel,
	PtsVLine* line, 
	HWAIFVPack* ifv
);

static
AVoid uni_SingleLineFitting(
	ABool blineok,
	PtsV* ptsV, 
	SingleLineData* line,
	CamLine* camline
);
/******************************************************************************/
/**
* @brief HWATimeSpaceUnify
* @details 道路模型时空同步模块： 将车道线的点集依据本车运动状态进行补偿，\n
* 并进行拟合，计算得到当前车道线的曲线方程。
* @param [in] pst_kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] pst_vehicle_pack: 道路模型输入： 本车运动状态。
* @param [in] ifv: 道路模型输入： 摄像头输出数据。
* @param [in] pst_time_pack: 道路模型输入： 当前时间戳信息。
* @param [out] pst_kernel: 道路模型输出： 将最终得到的车道线赋予到核心结构。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
ABool HWATimeSpaceUnify(HWAKernel* pst_kernel, HWAEgoPack* pst_vehicle_pack, HWAIFVPack* pst_ifv, HWATimePack* pst_time_pack)
{

	PtsVLine* pst_ifvplv = &pst_kernel->camplv;
	HWATimePack* pst_curtime = pst_time_pack;
	HWAIFVPack* pst_ifv_pack = pst_ifv;
	A_ASSERT(pst_kernel);
	A_ASSERT(pst_ifvplv);
	A_ASSERT(pst_curtime);
	/* step1: Prediction of fixed period of sensor with measurement */
	HWALineTimeSpaceUnify(pst_kernel, pst_ifvplv, pst_vehicle_pack, pst_ifv_pack);

	return ATRUE;
}
/******************************************************************************/
/**
* @brief uni_LineColorConvert
* @details 车道线颜色枚举转换： 将传感器车道线颜色枚举转换为输出的枚举值。
* @param [in] i_color: 道路模型核心： 道路模型内部的结构体。
* @return 运行结果ret
*/
/******************************************************************************/
static
AInt8U uni_LineColorConvert(AInt8U i_color)
{
#define COLOR_NUM_MAX (5)
	AInt8U i_ret = 0;
	LineColor_en aen_color_map[COLOR_NUM_MAX] = { EN_COLOUR_NONE, EN_COLOUR_WHITE, EN_COLOUR_YELLOW, EN_COLOUR_BLUE, EN_COLOUR_NONE };
	if (i_color < COLOR_NUM_MAX)
	{
		i_ret = aen_color_map[i_color];
	}
	else
	{
	}
	return i_ret;
}
/******************************************************************************/
/**
* @brief uni_SpaceUnify
* @details 道路模型时空同步模块： 将车道线的点集依据本车运动状态进行补偿，\n
* 并将摄像头坐标中心转移至本车后轴中心。
* @param [in] pst_pts: 道路模型核心： 时空同步之前的车道线点集。
* @param [in] f_alpha: 道路模型输入：车道线点集补偿的弧度 。
* @param [in] isLineOK: 道路模型输入： 摄像头车道线是否可用。
* @param [in] f_dx: 道路模型输入： 车道线点集补偿的纵向距离。
* @param [in] f_dy: 道路模型输入： 车道线点集补偿的横向距离。
* @param [out] pst_pts: 道路模型输出： 将最终得到的车道线赋予到车道线点集。
* @return 无返回值
*/
/******************************************************************************/
static
AVoid uni_SpaceUnify(PtsV* pst_pts, AFloat f_alpha, AInt i_is_line_ok, AFloat f_dx, AFloat f_dy)
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

	for (i = 0; i < pst_pts->nNum && i_is_line_ok; i++)
	{
		f_temp_dx = pst_pts->ptV[i].dx;
		pst_pts->ptV[i].dx = pst_pts->ptV[i].dx * f_cos_alpha + pst_pts->ptV[i].dy * f_sin_alpha - f_dx + P_Global_EQ2RearAxis_m;
		pst_pts->ptV[i].dy = pst_pts->ptV[i].dy * f_cos_alpha - f_temp_dx * f_sin_alpha - f_dy * f_sign_para;
		pst_pts->ptV[i].dYaw = pst_pts->ptV[i].dYaw + f_alpha;
	}
	return;
}
/******************************************************************************/
/**
* @brief uni_SingleLineFitting
* @details 车道线拟合： 将车道线的点集进行拟合，\n
* 并将摄像头其他属性赋予结果。
* @param [in] kernel 道路模型核心： 道路模型核心结构体。
* @param [in] line: 道路模型输入：时空同步后的车道线点集 。
* @param [in] cam: 道路模型输入： 摄像头输出数据。
* @param [out] kernel: 道路模型输出： 将最终得到的车道线信息赋予到结果。
* @return 无返回值
*/
/******************************************************************************/

static
AVoid uni_SingleLineFitting(ABool blineok, PtsV* ptsV, SingleLineData* line, CamLine* camline) {

	PtsV* pst_ptsV;
	if (blineok)
	{

		pst_ptsV = ptsV;

		afSolveCurveCoeff(pst_ptsV, line);
		line->bIsLineExist = LINE_EXIST;
		line->dQuality = camline->hdCamQuality;
		line->dDisStart = camline->dRangeStart;
		line->dDisEnd = camline->dRangeEnd;
		line->enColour = (LineColor_en)uni_LineColorConvert(camline->Lane_Color);
		line->dLineWidth = camline->hdWidthMark;
		line->enLineType = (LineType_en)camline->nLaneType;
	}
	else
	{
		line->bIsLineExist = LINE_NOT_EXIST;
		line->dC0V = 0;
		line->dC1V = 0;
		line->dC2V = 0;
		line->dC3V = 0;
		line->dQuality = 0;
		line->dDisStart = 0;
		line->dDisEnd = 0;
		line->enColour = 0;
		line->dLineWidth = 0;
		line->enLineType = 0;
	}
	return;
}
/******************************************************************************/
/**
* @brief uni_LineFitting
* @details 道路模型时空同步模块： 将车道线的点集进行拟合，\n
* 并将摄像头其他属性赋予结果。
* @param [in] pst_kernel 道路模型核心： 道路模型核心结构体。
* @param [in] pst_line: 道路模型输入：时空同步后的车道线点集 。
* @param [in] pst_ifv: 道路模型输入： 摄像头输出数据。
* @param [out] pst_kernel: 道路模型输出： 将最终得到的车道线信息赋予到结果。
* @return 无返回值
*/
/******************************************************************************/
static
AVoid uni_LineFitting(HWAKernel* kernel, PtsVLine* line, HWAIFVPack* ifv)
{
	LineData* pst_lines = &kernel->lines[CURRENT];
	SingleLineData* ast_data[HWA_IDX_MAX];
	int i = 0;
	int idx = 0;
	ast_data[0] = &pst_lines->lineL1;
	ast_data[1] = &pst_lines->lineR1;
	ast_data[2] = &pst_lines->lineL2;
	ast_data[3] = &pst_lines->lineR2;
	ast_data[4] = &pst_lines->lineL3;
	ast_data[5] = &pst_lines->lineR3;
	ast_data[6] = &pst_lines->lineLB;
	ast_data[7] = &pst_lines->lineRB;
	ast_data[8] = &pst_lines->linePRED;
	/* &pst_lines->lineL1, &pst_lines->lineR1,
	&pst_lines->lineL2, &pst_lines->lineR2,
	&pst_lines->lineL3, &pst_lines->lineR3,
	&pst_lines->lineLB, &pst_lines->lineRB,
	&pst_lines->lineCL*/


	for (i = HWA_L1; i < HWA_IDX_MAX; ++i)
	{
		ast_data[i]->dDisStart = 0.F;
		ast_data[i]->dDisEnd = 200;
	}
	/*Lane line prediction should be carried out before lane line fusion*/
	for (idx = 0; idx < HWA_IDX_MAX; idx++)
	{
		uni_SingleLineFitting(LINE_OK(idx), (&line->lanePtsL + idx), ast_data[idx], &ifv->line[idx]);
	}

	return;
}
/******************************************************************************/
/**
* @brief HWALineTimeSpaceUnify
* @details 道路模型时空同步模块： 将车道线的点集依据本车运动状态进行补偿，\n
* 并进行拟合，计算得到当前车道线的曲线方程。
* @param [in] pst_kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] pst_ego: 道路模型输入： 本车运动状态。
* @param [in] line: 道路模型输入： 摄像头车道线离散得到的点集。
* @param [in] ifv_pack: 道路模型输入： 摄像头输出数据。
* @param [out] pst_kernel: 道路模型输出： 将最终得到的车道线赋予到核心结构。
* @return 无返回值
*/
/******************************************************************************/
static
AVoid HWALineTimeSpaceUnify(HWAKernel* pst_kernel, PtsVLine* linepts, HWAEgoPack* ego, HWAIFVPack* ifvpack)
{

	HWAIFVPack* ifv = ifvpack;
	AFloat f_yaw_rate = ego->Yawrate; /*left + and right -, radian. If it is degree, it needs to convert the unit (yawrate)*/
	AFloat f_velocity = ego->Vel;
	AFloat cycle_time_ms = 0.05F;/* This time is a time of change */
	AFloat f_t = 0.F;

	/* This time is a time of change */
	AFloat f_r = FLT_MAX;
	AFloat f_alpha = 0;
	AFloat f_dx = 0;
	AFloat f_dy = 0;
	AInt idx = 0;
	A_ASSERT(pst_kernel);
	A_ASSERT(linepts);
	A_ASSERT(ego);
	A_ASSERT(ifvpack);
	if ((ifv->timestamp_ms != 0) && (pst_kernel->timepack.hwacurTime != 0))
	{
		if (pst_kernel->timepack.hwacurTime - ifv->timestamp_ms < 100)
		{
			f_t = (pst_kernel->timepack.hwacurTime - ifv->timestamp_ms)*0.001 + cycle_time_ms;
		}
		else
		{
			f_t = cycle_time_ms;
		}
	}
	else
	{
		f_t = cycle_time_ms;
	}
	if (fabs(f_yaw_rate) > FLT_EPSILON)
	{
		/*Step 1: solve the rotation radius of the car*/
		f_r = fabs(f_velocity / f_yaw_rate);
		/*Step 2: solve the angle value according to the yaw rate and time*/
		f_alpha = f_yaw_rate * f_t;

		/*Step 3: calculate the displacement of the vehicle within this time difference*/
		f_dx =fabs(sin(f_alpha) * f_r);
		f_dy = f_r - cos(f_alpha) * f_r;
	}
	else
	{
		f_dx = f_velocity * f_t;
		f_dy = 0;
	}
	/*Step 4: according to the coordinate corresponding relationship of step 4,
	coordinate conversion is carried out, and the rotation angle is angel,
	so as to convert the lane line to the position relative to the current time*/

	for (idx = 0; idx < HWA_IDX_MAX; idx++)
	{
		uni_SpaceUnify((&linepts->lanePtsL + idx), f_alpha, LINE_OK(idx), f_dx, f_dy);
	}
	/*uni_SpaceUnify(&linepts->lanePtsL, f_alpha, LINE_OK(HWA_L1), f_dx, f_dy);
	uni_SpaceUnify(&linepts->lanePtsR, f_alpha, LINE_OK(HWA_R1), f_dx, f_dy);
	uni_SpaceUnify(&linepts->lanePtsL2, f_alpha, LINE_OK(HWA_L2), f_dx, f_dy);
	uni_SpaceUnify(&linepts->lanePtsR2, f_alpha, LINE_OK(HWA_R2), f_dx, f_dy);
	uni_SpaceUnify(&linepts->lanePtsL3, f_alpha, LINE_OK(HWA_L3), f_dx, f_dy);
	uni_SpaceUnify(&linepts->lanePtsR3, f_alpha, LINE_OK(HWA_R3), f_dx, f_dy);
	uni_SpaceUnify(&linepts->BoundaryPtsL, f_alpha, LINE_OK(HWA_LB), f_dx, f_dy);
	uni_SpaceUnify(&linepts->BoundaryPtsR, f_alpha, LINE_OK(HWA_LB), f_dx, f_dy);*/

	uni_LineFitting(pst_kernel, linepts, ifv);

	uni_LineValidity(&pst_kernel->lines[CURRENT]);
	return;

}


