/******************************************************************************/
/**
 * @file: HWALineFusion.c
 * @brief 车道线融合模块
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c) All Rights Reserved
 * @date: 2020-8-3 18:45:17
 */
 /******************************************************************************/

/*
********************************************************************************
* Include files section
********************************************************************************
*/

#include "HWALineFusion.h"

/*
********************************************************************************
* Define Section
********************************************************************************
*/
static
AVoid fusion_GetCenterLine(
	LineData* lines, 
	HWAEHRPack* ehr
);

static
AVoid fusion_GetPredictedLine(
	LineData* lines,
	HWAEgoPack* st_egopack,
	HWAEHRPack* st_ehrpack
);
/******************************************************************************/
/**
* @brief HWALineFusion
* @details 道路模型车道线融合模块： 根摄像头输出的车道线和边界信息，\n
* 计算当前车道的中心线。
* @param [in] lines: 车道线模型输入： 预处理后的车道线。
* @param [out] lines: 车道线模型输出：计算得到的中心线。
* @return 无
*/
/******************************************************************************/
static
AVoid fusion_GetCenterLine(LineData* lines,HWAEHRPack* ehr) {
	AFloat f_delta_time = 0.05;
	lines->lineCL.enColour = EN_COLOUR_NONE;
	lines->lineCL.dLineWidth = 0;
	lines->lineCL.enLineType = EN_LINE_UNDECIDED;
	if (lines->lineL1.bIsLineExist == LINE_EXIST 
		&& lines->lineR1.bIsLineExist == LINE_EXIST)
	{
		lines->lineCL.bIsLineExist = LINE_EXIST;
		lines->lineCL.dQuality = lines->lineL1.dQuality;
		lines->lineCL.dC0V = (lines->lineL1.dC0V + lines->lineR1.dC0V) / 2;
		lines->lineCL.dC1V = (lines->lineL1.dC1V + lines->lineR1.dC1V) / 2;
		lines->lineCL.dC2V = (lines->lineL1.dC2V + lines->lineR1.dC2V) / 2;
		lines->lineCL.dC3V = (lines->lineL1.dC3V + lines->lineR1.dC3V) / 2;
		lines->lineCL.dDisStart = lines->lineL1.dDisStart;
		lines->lineCL.dDisEnd = lines->lineL1.dDisEnd;
	}
	else if (lines->lineL1.bIsLineExist == LINE_EXIST
		&& lines->lineRB.bIsLineExist == LINE_EXIST 
		&& (lines->lineL1.dC0V - lines->lineRB.dC0V < P_RFM_WIDTH_FOR_CLINE))
	{
		lines->lineCL.bIsLineExist = LINE_EXIST;
		lines->lineCL.dC0V = (lines->lineL1.dC0V + lines->lineRB.dC0V) / 2;
		lines->lineCL.dC1V = (lines->lineL1.dC1V + lines->lineRB.dC1V) / 2;
		lines->lineCL.dC2V = (lines->lineL1.dC2V + lines->lineRB.dC2V) / 2;
		lines->lineCL.dC3V = (lines->lineL1.dC3V + lines->lineRB.dC3V) / 2;
		lines->lineCL.dQuality = lines->lineL1.dQuality;
		lines->lineCL.dDisStart = lines->lineL1.dDisStart;
		lines->lineCL.dDisEnd = lines->lineL1.dDisEnd;
	}
	else if ((lines->lineLB.bIsLineExist == LINE_EXIST)
		&& (lines->lineR1.bIsLineExist == LINE_EXIST )
		&& (lines->lineLB.dC0V - lines->lineR1.dC0V < P_RFM_WIDTH_FOR_CLINE))
	{
		lines->lineCL.bIsLineExist = LINE_EXIST;
		lines->lineCL.dC0V = (lines->lineLB.dC0V + lines->lineR1.dC0V) / 2;
		lines->lineCL.dC1V = (lines->lineLB.dC1V + lines->lineR1.dC1V) / 2;
		lines->lineCL.dC2V = (lines->lineLB.dC2V + lines->lineR1.dC2V) / 2;
		lines->lineCL.dC3V = (lines->lineLB.dC3V + lines->lineR1.dC3V) / 2;
		lines->lineCL.dQuality = (lines->lineLB.dQuality + lines->lineR1.dQuality)*0.5;
		lines->lineCL.dDisStart = lines->lineR1.dDisStart;
		lines->lineCL.dDisEnd = lines->lineR1.dDisEnd;
	}
	else if ((lines->lineLB.bIsLineExist == LINE_EXIST)
		&& (lines->lineRB.bIsLineExist == LINE_EXIST)
		&& (lines->lineLB.dC0V - lines->lineRB.dC0V < P_RFM_WIDTH_FOR_CLINE))
	{
		lines->lineCL.bIsLineExist = LINE_EXIST;
		lines->lineCL.dC0V = (lines->lineLB.dC0V + lines->lineRB.dC0V) / 2;
		lines->lineCL.dC1V = (lines->lineLB.dC1V + lines->lineRB.dC1V) / 2;
		lines->lineCL.dC2V = (lines->lineLB.dC2V + lines->lineRB.dC2V) / 2;
		lines->lineCL.dC3V = (lines->lineLB.dC3V + lines->lineRB.dC3V) / 2;
		lines->lineCL.dQuality = (lines->lineLB.dQuality > lines->lineRB.dQuality) ? lines->lineRB.dQuality*0.5 : lines->lineLB.dQuality*0.5;
		lines->lineCL.dDisStart = lines->lineLB.dDisStart;
		lines->lineCL.dDisEnd = lines->lineLB.dDisEnd;
	}/*only right line*/
	else if ((lines->lineL1.bIsLineExist == LINE_EXIST)
		&& (lines->lineL1.dC0V > 1.5)
		&& (lines->lineL1.dC0V < 2.0))
	{
		lines->lineCL.bIsLineExist = LINE_EXIST;
		lines->lineCL.dC0V = lines->lineL1.dC0V - 1.875;
		lines->lineCL.dC1V = lines->lineL1.dC1V;
		lines->lineCL.dC2V = lines->lineL1.dC2V;
		lines->lineCL.dC3V = lines->lineL1.dC3V;
		lines->lineCL.dQuality = lines->lineL1.dQuality*0.5;
		lines->lineCL.dDisStart = lines->lineL1.dDisStart;
		lines->lineCL.dDisEnd = lines->lineL1.dDisEnd;
	}/*only right line*/
	else if ((lines->lineR1.bIsLineExist == LINE_EXIST)
		&& (lines->lineR1.dC0V > -2.0)
		&& (lines->lineR1.dC0V < -1.5))
	{
		lines->lineCL.bIsLineExist = LINE_EXIST;
		lines->lineCL.dC0V = lines->lineR1.dC0V + 1.8;
		lines->lineCL.dC1V = lines->lineR1.dC1V;
		lines->lineCL.dC2V = lines->lineR1.dC2V;
		lines->lineCL.dC3V = lines->lineR1.dC3V;
		lines->lineCL.dQuality = lines->lineR1.dQuality*0.5;
		lines->lineCL.dDisStart = lines->lineR1.dDisStart;
		lines->lineCL.dDisEnd = lines->lineR1.dDisEnd;

	}
	/*only left bdry*/
	else if (lines->lineLB.bIsLineExist == LINE_EXIST)
	{
		lines->lineCL.bIsLineExist = LINE_EXIST;
		lines->lineCL.dC0V = 0;/*lines->lineLB.dC0V-1.875*/
		lines->lineCL.dC1V = lines->lineLB.dC1V;
		lines->lineCL.dC2V = lines->lineLB.dC2V;
		lines->lineCL.dC3V = lines->lineLB.dC3V;
		lines->lineCL.dQuality = lines->lineLB.dQuality*0.5;
		lines->lineCL.dDisStart = lines->lineLB.dDisStart;
		lines->lineCL.dDisEnd = lines->lineLB.dDisEnd;
	}/*only right bdry*/
	else if (lines->lineRB.bIsLineExist == LINE_EXIST)
	{
		lines->lineCL.bIsLineExist = LINE_EXIST;
		lines->lineCL.dC0V = 0;/*lines->lineRB.dC0V+1.875*/
		lines->lineCL.dC1V = lines->lineRB.dC1V;
		lines->lineCL.dC2V = lines->lineRB.dC2V;
		lines->lineCL.dC3V = lines->lineRB.dC3V;
		lines->lineCL.dQuality = lines->lineRB.dQuality*0.5;
		lines->lineCL.dDisStart = lines->lineLB.dDisStart;
		lines->lineCL.dDisEnd = lines->lineLB.dDisEnd;

	}
	else if ((ehr->MapDataValid == 1)
		&& (ehr->DrivingOnHighWay == 1)
		&& (lines->lineF_LB.bIsLineExist == LINE_EXIST)
		&& (lines->lineF_RB.bIsLineExist == LINE_EXIST)
		&& (lines->lineF_LB.dQuality > 0.7)
		&& (lines->lineF_RB.dQuality > 0.7))
	{
		lines->lineCL.bIsLineExist = LINE_EXIST;
		lines->lineCL.dC0V = 0;
		lines->lineCL.dC1V = (lines->lineF_LB.dC1V + lines->lineF_RB.dC1V) / 2;
		lines->lineCL.dC2V = (lines->lineF_LB.dC2V + lines->lineF_RB.dC2V) / 2;
		lines->lineCL.dC3V = (lines->lineF_LB.dC3V + lines->lineF_RB.dC3V) / 2;
		lines->lineCL.dQuality = 0.2;
		lines->lineCL.dDisStart = (lines->lineLB.dDisStart > lines->lineRB.dDisStart) ? lines->lineRB.dDisStart : lines->lineLB.dDisStart;
		lines->lineCL.dDisEnd = (lines->lineLB.dDisEnd > lines->lineRB.dDisEnd) ? lines->lineRB.dDisEnd : lines->lineLB.dDisEnd;
	}
	else
	{
	}

	return;
}
/******************************************************************************/
/**
* @brief fusion_GetPredictedLine
* @details 预测线计算模块： 根据不同车身、车道线、EHR输出信息，\n
* 与当前车道线的曲率进行加权融合，最终输出预测线。
* @param [in] lines: 道路模型输入： 道路模型内部的车道线结构体。
* @param [in] st_egopack: 道路模型输入：本车信息输出数据
* @param [in] st_ehrpack: 道路模型输入： 地图输出数据
* @param [out] lines: 道路模型输出：将融合得到的车道线信息赋予车道线结构体。
* @return 无
*/
/******************************************************************************/
static
AVoid fusion_GetPredictedLine(LineData* lines, HWAEgoPack* st_egopack, HWAEHRPack* st_ehrpack) {
	AInt8U i_curve_num = st_ehrpack->RoadCurvatureMatrixSize;
	AInt8U i_valid_curve_num = 0;
	AFloat f_ave_curve = 0.F;
	AFloat f_cur_curve = st_ehrpack->RoadCurvature;
	AFloat f_road_c2;
	AFloat f_curve_sum = 0.F;
	AInt8U i = 0;
	if (st_ehrpack->MapDataValid == 1)
	{
		f_road_c2 = f_cur_curve / 2;

		for (i = 0; i < i_curve_num	&&i_curve_num; i++)
		{
			if ( (fabs(st_ehrpack->RoadCurvatureValueMatrix[i]) > FLT_EPSILON)
				&& (fabs(st_ehrpack->RoadCurvatureValueMatrix[i]) < 0.2))
			{
				f_curve_sum += st_ehrpack->RoadCurvatureValueMatrix[i];
				i_valid_curve_num++;
			}
		}
		if (i_valid_curve_num)
		{
			f_ave_curve = f_curve_sum / i_valid_curve_num;
		}
		else
		{
			f_ave_curve = f_road_c2;
		}
	}
	if ((lines->linePRED.bIsLineExist != LINE_EXIST)
		&&(st_ehrpack->MapDataValid == 1)
		&&(st_ehrpack->DrivingOnHighWay==1)
		&& (fabs(f_ave_curve)>FLT_EPSILON))
	{
		lines->linePRED.bIsLineExist = LINE_EXIST;
		lines->linePRED.dC0V = lines->lineCL.dC0V;
		lines->linePRED.dC1V = lines->lineCL.dC1V;
		lines->linePRED.dC2V = f_ave_curve / 2;
		lines->linePRED.dC3V = lines->lineCL.dC3V;
		lines->linePRED.dDisStart = 0;
		lines->linePRED.dDisEnd = st_ehrpack->RoadCurvatureFarDistance;
		
	}
	else if (lines->linePRED.bIsLineExist == LINE_NOT_EXIST)
	{
		lines->linePRED = lines->lineCL;
	}
	else
	{

	}
	
	return;
}
/******************************************************************************/
/**
* @brief fusion_LinesPredict
* @details 道路模型车道线预测模块： 若当前时刻车道线无输出，\n
* 则利用上一时刻车道线进行预测输出。
* @param [in] pst_kernel: 道路模型核心： 道路模型内部的结构体。
* @param [out] pst_kernel: 道路模型输出：将预测得到的车道线信息赋予核心结构体。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/  

AVoid fusion_LinesPredict(HWAKernel* pst_kernel) {
	AInt8U	idx = 0;
	AFloat f_delta_time = (pst_kernel->timepack.hwacurTime - pst_kernel->pretime.hwacurTime)*0.001;
	HWAEgoPack* pst_egopack = &pst_kernel->vehiclepack;
	LineData* lines = &pst_kernel->lines[CURRENT];
	LineData* pre_lines = &pst_kernel->lines[PREVIOUS];
	//*predict 100 frames*/

	for (idx = 0; idx < HWA_IDX_MAX; idx++)
	{
		fusion_linepredict(&f_delta_time, pst_egopack, (&lines->lineL1+idx), (&pre_lines->lineL1 + idx));
	}
	/*center line predict*/
	fusion_linepredict(&f_delta_time, pst_egopack, &lines->lineCL, &pre_lines->lineCL);

	return;
}
/******************************************************************************/
/**
* @brief fusion_GetFusionLine
* @details 道路模型车道线修正模块： 使用当前和一段距离的曲率，修正车道线\n
* 参数并输出。
* @param [in] pst_kernel: 道路模型核心： 道路模型内部的结构体。
* @param [out] pst_kernel: 道路模型输出：将预测得到的车道线信息赋予核心结构体。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
static
AVoid fusion_GetFusionLine(HWAEHRPack* pst_ehr_pack, HWA_LaneMsg_st* linemsg, LineData* lines) {

	AFloat f_curve = pst_ehr_pack->RoadCurvatureValueMatrix[2];            /*0m Curvature*/
	AFloat f_cur_distance = pst_ehr_pack->RoadCurvatureDistanceMatrix[6];  /*about 150m*/
	AFloat f_curve_far = pst_ehr_pack->RoadCurvatureValueMatrix[6];        /* 150m curve*/

	AFloat f_cam_weight_c2 = 0.9F;
	AFloat f_cam_weight_c3 = 0.1F;

	if (f_curve != 1 && fabs(f_curve) < 1)/*Error proofing*/
	{
		linemsg->F_L1dC0V = lines->lineL1.dC0V;
		linemsg->F_L1dC1V = lines->lineL1.dC1V;
		linemsg->F_L1dC2V = lines->lineL1.dC2V * f_cam_weight_c2 + f_curve / 2 * (1 - f_cam_weight_c2);
		linemsg->F_L1dC3V = lines->lineL1.dC3V * f_cam_weight_c3 + (f_curve_far - f_curve) / 6 * f_cur_distance*(1 - f_cam_weight_c3);
		linemsg->F_L1dDisStart = lines->lineL1.dDisStart;
		linemsg->F_L1dDisFront = lines->lineL1.dDisEnd;
		linemsg->F_L1bIsLineExist = lines->lineL1.bIsLineExist;

		linemsg->F_R1dC0V = lines->lineR1.dC0V;
		linemsg->F_R1dC1V = lines->lineR1.dC1V;
		linemsg->F_R1dC2V = lines->lineR1.dC2V * f_cam_weight_c2 + f_curve / 2 * (1 - f_cam_weight_c2);
		linemsg->F_R1dC3V = lines->lineR1.dC3V * f_cam_weight_c3 + (f_curve_far - f_curve) / 6 * f_cur_distance * (1 - f_cam_weight_c3);
		linemsg->F_R1dDisStart = lines->lineR1.dDisStart;
		linemsg->F_R1dDisFront = lines->lineR1.dDisEnd;
		linemsg->F_R1bIsLineExist = lines->lineR1.bIsLineExist;

		linemsg->F_L2dC0V = lines->lineL2.dC0V;
		linemsg->F_L2dC1V = lines->lineL2.dC1V;
		linemsg->F_L2dC2V = lines->lineL2.dC2V * f_cam_weight_c2 + f_curve / 2 * (1 - f_cam_weight_c2);
		linemsg->F_L2dC3V = lines->lineL2.dC3V * f_cam_weight_c3 + (f_curve_far - f_curve) / 6 * f_cur_distance*(1 - f_cam_weight_c3);
		linemsg->F_L2dDisStart = lines->lineL2.dDisStart;
		linemsg->F_L2dDisFront = lines->lineL2.dDisEnd;
		linemsg->F_L2bIsLineExist = lines->lineL2.bIsLineExist;

		linemsg->F_R2dC0V = lines->lineR2.dC0V;
		linemsg->F_R2dC1V = lines->lineR2.dC1V;
		linemsg->F_R2dC2V = lines->lineR2.dC2V * f_cam_weight_c2 + f_curve / 2 * (1 - f_cam_weight_c2);
		linemsg->F_R2dC3V = lines->lineR2.dC3V * f_cam_weight_c3 + (f_curve_far - f_curve) / 6 * f_cur_distance * (1 - f_cam_weight_c3);
		linemsg->F_R2dDisStart = lines->lineR2.dDisStart;
		linemsg->F_R2dDisFront = lines->lineR2.dDisEnd;
		linemsg->F_R2bIsLineExist = lines->lineR2.bIsLineExist;

	}
	else
	{
		linemsg->F_L1dC0V = lines->lineL1.dC0V;
		linemsg->F_L1dC1V = lines->lineL1.dC1V;
		linemsg->F_L1dC2V = lines->lineL1.dC2V;
		linemsg->F_L1dC2V = lines->lineL1.dC2V;
		linemsg->F_L1dDisStart = lines->lineL1.dDisStart;
		linemsg->F_L1dDisFront = lines->lineL1.dDisEnd;
		linemsg->F_L1bIsLineExist = lines->lineL1.bIsLineExist;

		linemsg->F_R1dC0V = lines->lineR1.dC0V;
		linemsg->F_R1dC1V = lines->lineR1.dC1V;
		linemsg->F_R1dC2V = lines->lineR1.dC2V;
		linemsg->F_R1dC2V = lines->lineR1.dC2V;
		linemsg->F_R1dDisStart = lines->lineR1.dDisStart;
		linemsg->F_R1dDisFront = lines->lineR1.dDisEnd;
		linemsg->F_R1bIsLineExist = lines->lineR1.bIsLineExist;

		linemsg->F_L2dC0V = lines->lineL2.dC0V;
		linemsg->F_L2dC1V = lines->lineL2.dC1V;
		linemsg->F_L2dC2V = lines->lineL2.dC2V;
		linemsg->F_L2dC2V = lines->lineL2.dC2V;
		linemsg->F_L2dDisStart = lines->lineL2.dDisStart;
		linemsg->F_L2dDisFront = lines->lineL2.dDisEnd;
		linemsg->F_L2bIsLineExist = lines->lineL2.bIsLineExist;

		linemsg->F_R2dC0V = lines->lineR2.dC0V;
		linemsg->F_R2dC1V = lines->lineR2.dC1V;
		linemsg->F_R2dC2V = lines->lineR2.dC2V;
		linemsg->F_R2dC2V = lines->lineR2.dC2V;
		linemsg->F_R2dDisStart = lines->lineR2.dDisStart;
		linemsg->F_R2dDisFront = lines->lineR2.dDisEnd;
		linemsg->F_R2bIsLineExist = lines->lineR2.bIsLineExist;
	}
	return;
}
/******************************************************************************/
/**
* @brief HWALineFusion
* @details 道路模型车道线融合模块： 根据不同距离的地图输出的道路曲率信息，\n
* 与当前车道线的曲率进行加权融合，最终输出中心线和预测线。
* @param [in] pst_kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] pst_ifv_pack: 道路模型输入： 摄像头输出数据，地图输出数据
* @param [in] pst_ehr_pack: 道路模型输入： 地图输出数据
* @param [out] pst_kernel: 道路模型输出：将融合得到的车道线信息赋予核心结构体。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
ABool HWALineFusion(HWAKernel* pst_kernel, HWAIFVPack* pst_ifv_pack, HWAEHRPack* pst_ehr_pack)
{
	HWAEHRPack* pst_ehr = pst_ehr_pack;
	HWA_LaneMsg_st* linemsg = &pst_kernel->linemsg[CURRENT];
	LineData* lines = &pst_kernel->lines[CURRENT];

	/* fusion lines */
	fusion_GetFusionLine(pst_ehr_pack, linemsg, lines);
	/* CENTER-LINE */
	fusion_GetCenterLine(lines, pst_ehr);
	/* PRED-LINE */
	fusion_GetPredictedLine(lines, &pst_kernel->vehiclepack, pst_ehr);
	/* lines prediction */
	fusion_LinesPredict(pst_kernel);

	uni_LineValidity(&pst_kernel->lines[CURRENT]);

	return ATRUE;
}
