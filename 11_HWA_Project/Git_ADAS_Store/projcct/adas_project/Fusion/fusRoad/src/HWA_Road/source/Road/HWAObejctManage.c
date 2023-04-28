/******************************************************************************/
/**
 * @file: HWAObejctManage.c
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

#include "HWAObejctManage.h"
/*
********************************************************************************
* Define Section
********************************************************************************
*/
/*TSR_Name*/
static const TSR_Name a_out_tsr_map[] = {
	e_TSR_Reserved_0,		        e_Triangular_Beware_Of_Snow,/*131*/		e_TSR_Reserved_0,		                e_TSR_Reserved_0,
	e_TSR_Reserved_0,		        e_Motorway_Begin,/*171*/	         	e_Regular_End_Of_Motorway,/*172*/		e_TSR_Reserved_0,
	e_TSR_Reserved_0,		        e_TSR_Reserved_0,	                	e_TSR_Reserved_0,		                e_TSR_Reserved_0,
	e_TSR_Reserved_0,		        e_TSR_Reserved_0,		                e_TSR_Reserved_0,		                e_End_Of_No_Passing,/*201*/
	e_No_Passing_Start,/*200*/		e_Stop_Sign,/*210*/	                	e_Triangular_Yield,/*168*/	         	e_Road_Closed,/*250*/
	e_No_Entrance,/*199*/	    	 e_Car_Limit,/*23*/	                	e_Truck_Limit,/*211*/	              	e_Bus_Limit,/*258*/
	e_No_U_turn,/*48*/		        e_TSR_Reserved_0,	                	e_TSR_Reserved_0,	                 	e_TSR_Reserved_0,
	e_Arrow_No_Left,/*245*/	     	e_Arrow_No_Right,/*246*/	        	e_No_Straight,/*307*/	              	e_Triangular_Children,/*134*/
	e_Warning_Pedestrians_Crossing,/*150*/		e_Triangular_Bicycle_Crossing,/*132*/		e_Warning_Road_Work,/*157*/		e_Warning_Wild_Animal_Crossing,/*167*/
	e_TSR_Reserved_0,	         	e_TSR_Reserved_0,	                	e_Triangular_City_Entrance_China,/*185*/		e_TSR_Reserved_0,
	e_Warning_Curve_Right,/*137*/	e_Curve_Left,/*136*/	          	e_Reverse_Curve_Left,/*95*/		            e_Reverse_Curve_Right,/*96*/
	e_TSR_Reserved_0,		        e_Warning_Cross_Roads,/*212*/		e_Warning_Right_Merge,/*152*/	         	e_Warning_Left_Merge/*146*/
};
/*spl name*/
static const TSR_Name spl_name_map[] = {
	e_Speed_Limit_10,	e_Speed_Limit_20,	e_Speed_Limit_30,	e_Speed_Limit_40,	e_Speed_Limit_50,	e_Speed_Limit_60,	e_Speed_Limit_70,	e_Speed_Limit_80,	e_Speed_Limit_90,	e_Speed_Limit_100,
	e_Speed_Limit_110,	e_Speed_Limit_120,	e_Speed_Limit_130,	e_Speed_Limit_140,	e_Minimun_Sign,		e_Electronic_Speed_Limet_10,	e_Electronic_Speed_Limet_20,	e_Electronic_Speed_Limet_30,	e_Electronic_Speed_Limet_40,	e_Electronic_Speed_Limet_50,
	e_Electronic_Speed_Limet_60,	e_Electronic_Speed_Limet_70,	e_Electronic_Speed_Limet_80,	e_Electronic_Speed_Limet_90,	e_Electronic_Speed_Limet_100,		e_Electronic_Speed_Limet_110,	e_Electronic_Speed_Limet_120,	e_Electronic_Speed_Limet_130,	e_Electronic_Speed_Limet_140,	e_End_General,
	e_Electronic_End_General,	e_End_of_Speed_Limit_2_Digits,		e_End_of_Speed_Limit_3_Digits,	e_LED_End_of_Speed_Limit_2_Digits,	e_LED_End_of_Speed_Limit_3_Digits,	e_Speed_Limit_150,	e_Speed_Limit_160,	e_Speed_Limit_5,	e_Speed_Limit_15,	e_Speed_Limit_25,
	e_Speed_Limit_35,	e_Speed_Limit_45,	e_Speed_Limit_55,	e_Speed_Limit_65,	e_Speed_Limit_75,	e_Speed_Limit_85,	e_Speed_Limit_95,	e_Speed_Limit_105,	e_Speed_Limit_115,	e_Speed_Limit_125,
	e_Speed_Limit_135,	e_Speed_Limit_145,	e_LED_Speed_Limit_5,	e_LED_Speed_Limit_15,	e_LED_Speed_Limit_25,	e_LED_Speed_Limit_35,	e_LED_Speed_Limit_45,	e_LED_Speed_Limit_55,	e_LED_Speed_Limit_65,	e_LED_Speed_Limit_75,
	e_LED_Speed_Limit_85,	e_LED_Speed_Limit_95,	e_LED_Speed_Limit_105,	e_LED_Speed_Limit_115,	e_LED_Speed_Limit_125,	e_Motorway_Begin,	e_Regular_End_Of_Motorway,	e_Expressway_Begin,		e_Expressway_End,	e_Playground_Residential_Area_Begin,
	e_End_Of_Playground_Residential_Area,	e_City_Entrance,	e_Combined_City_Exit,	e_City_Entrance_Black_Background,	e_Built_Up_Area,	e_End_of_Built_Up_Area,		e_End_Of_City,		Electronic_sign_Off
};
/*spl value*/
static const AInt8U spl_value_map[] = {
	 10 ,		 20	 ,		 30	 ,		 40	 ,		 50	 ,		 60	 ,		 70	 ,		 80	 ,		 90	 ,		 100 ,
	 110 ,		 120 ,		 130 ,		 140 ,		0,      	 10	 ,		 20	 ,		 30	 ,		 40	 ,		 50	 ,
	 60	 ,		 70	 ,		 80	 ,		 90	 ,		 100 ,		 110 ,		 120 ,		 130 ,		 140 ,		 0,/* END,*/
	 0,		      0,		  0,		 0,		      0,		 150 ,		 160 ,		 5	 ,		 15	 ,		 25	 ,
	 35	 ,		 45	 ,		 55	 ,		 65	 ,		 75	 ,		 85	 ,		 95	 ,		 105 ,		 115 ,		 125 ,
	 135 ,		 145 ,		 5	 ,		 15	 ,		 25	 ,		 35	 ,		 45	 ,		 55	 ,		 65	 ,		 75	 ,
	 85	 ,		 95	 ,		 105 ,		 115 ,		 125 ,		  0,		  0,		 0,		      0,		 0,
	 0,			 0,		      0,		 0,		      0,		 0,		      0,		0
};
/*TSR_END_Name*/
static const TSR_Name spl_end_name_map[] = {
	e_End_General,/*64*/
	e_Electronic_End_General,/*65*/
	e_End_of_Speed_Limit_2_Digits,/*79*/
	e_End_of_Speed_Limit_3_Digits,/*80*/
	e_LED_End_of_Speed_Limit_2_Digits,/*81*/
	e_LED_End_of_Speed_Limit_3_Digits,/*82*/
};
/*TSR_Sup_Name*/
static const TSR_Sup_Name a_out_sup_map[] = {
	e_none,	e_rain,	e_snow, e_larmschutz, e_distance_arrow, e_distance_in,
	e_none, e_none, e_none, e_none,       e_Arrow_right,     e_BendArrow_right,
	e_Arrow_left, e_BendArrow_left, e_none, e_none, e_none, e_none,
	e_none, e_none, e_none, e_none,		e_trailer
};
/*
********************************************************************************
* Function Prototype Declaration Section
********************************************************************************
*/
static
AInt8U tsr_GetSPLvalue(
	HWA_TSRElement* p_tsr_elem
);

static
ABool tsr_GetTSR_Valid_Sts(
	HWA_TSRElement* p_tsr_elem, 
	AInt8U b_right_most, 
	HWAEHRPack* p_ehr
);

static
AInt8U tsr_GetTS_SignName(
	HWA_TSRElement* p_tsr_elem
);

static
ABool tsr_GetSpl_end(
	HWA_TSRElement* p_tsr_elem
);

static
AInt8U tsr_GetSPLsupName(
	HWA_TSRElement* p_tsr_elem
);

static
PointD tsr_GetLaneSPLvalue(
	HWA_TSRElement* p_tsr_elem,
	LineData* p_lines,
	AInt8U* i_left,
	AInt8U* i_cur, 
	AInt8U* i_right, 
	AInt8U spl_value
);

static
AVoid tsr_CycleKeep_Single(
	AInt8U* cur_signal, 
	AInt8U* pre_signal, 
	AInt8U* cnt
);

static
AVoid tsr_CycleKeep_CurSpl(
	AInt8U* cur_signal, 
	AInt8U* pre_signal, 
	AInt8U* cnt
);

static
AVoid tsr_CycleKeep_NoSup(
	HWA_RoadMsg_st* road_msg, 
	HWA_RoadMsg_st* pre_road_msg
);

static
AVoid tsr_CycleKeep_Sup(
	HWA_RoadMsg_st* road_msg, 
	HWA_RoadMsg_st* pre_road_msg
);

static
AVoid tsr_CycleKeep_Name(
	HWA_RoadMsg_st* road_msg, 
	HWA_RoadMsg_st* pre_road_msg
);

static
AVoid tsr_CycleKeep(
	HWA_RoadMsg_st* p_road_msg,
	HWA_RoadMsg_st* pre_road_msg
);

static
ABool tsr_GetSPL_End_Result(
	AInt8U noSupp_result, 
	AInt8U Supp_result,
	AInt8U End_flag
);

static
AVoid tsr_GetTSR_Result(
	HWA_RoadMsg_st* p_road_msg, 
	HWATSRPack* p_tsr,
	HWAEHRPack* p_ehr, 
	AInt8U tsr_idx, 
	AInt8U SignName
);

static
AVoid tsr_GetSPL_Nosup_Result(
	HWA_RoadMsg_st* p_road_msg,
	HWATSRPack* p_tsr, 
	AInt8U nosup_idx,
	AInt8U i_spl_cur_lane,
	PointD i_spl_cur_dis_out,
	AInt8U SPLnoSuppValue_result
);

static
AVoid tsr_GetSPL_Dis_Result(
	HWA_RoadMsg_st* p_road_msg,
	HWATSRPack* p_tsr,
	PointD i_spl_cur_dis_out,
	AInt8U i_spl_cur_lane, 
	AInt8U whsup_idx, 
	AInt8U nosup_idx
);

/***********************************************************************************/
/**
* @brief tsr_GetTSR_Valid_Sts
* @details 判断TSR是否可用：根据置信度和可用状态进行判断，同时将误报的TSR判断为可用
* @param [in] p_tsr_elem: 道路模型输入： TSR元素信息。
* @param [in] b_right_most: 道路模型输入：本车是否在最右侧车道。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/***********************************************************************************/
static
ABool tsr_GetTSR_Valid_Sts(HWA_TSRElement* p_tsr_elem, AInt8U b_right_most, HWAEHRPack* p_ehr) {
	ABool b_ret = AFALSE;
	/*Me was judged to be relevant*/
/*	if ((p_tsr_elem->TSR_Confidence > 0.99) && (p_tsr_elem->TSR_Relevancy == 0) && (p_tsr_elem->TSR_Relevancy_Confidence > 0.99) && (p_tsr_elem->TSR_ID != 0) && (p_tsr_elem->TSR_Measurement_Status == 1))*/
	if ((p_tsr_elem->TSR_Relevancy == 0) &&  (p_tsr_elem->TSR_ID != 0))
	{
		b_ret = ATRUE;
		return b_ret;
	}
	/*Me is judged as the exit of expressway, but the self driving vehicle is driving in the rightmost lane*/
	if ((p_tsr_elem->TSR_Confidence > 0.99) && (p_tsr_elem->TSR_Relevancy == 1) && (b_right_most))/* && (p_tsr_elem->TSR_Measurement_Status == 1)*/
	{
		b_ret = ATRUE;
		return b_ret;
	}
	/* city expressway */
	if ((p_tsr_elem->TSR_ID != 0) && (p_tsr_elem->TSR_Relevancy == 1) && (p_ehr->DrivingOnHighWay != 1))/* && (p_tsr_elem->TSR_Measurement_Status == 1)*/
	{
		b_ret = ATRUE;
		return b_ret;
	}
	if ((p_tsr_elem->TSR_ID != 0)
		&& ((p_tsr_elem->TSR_Relevancy == 1)|| p_tsr_elem->TSR_Relevancy == 3) 
		&& (b_right_most)
		&& (p_ehr->DrivingOnHighWay == 1))/* && (p_tsr_elem->TSR_Measurement_Status == 1)*/
	{
		b_ret = ATRUE;
		return b_ret;
	}
	/*Me was judged as the exit of expressway, but there was no exit within 600 ahead*/
/*	if ((p_tsr_elem->TSR_Confidence > 0.99) && (p_tsr_elem->TSR_Relevancy == 1) && (p_ehr->MapDataValid == 1) && (p_ehr->RampOutDistance > P_RFM_TSR_MATCH_DIS))
	{
		b_ret = ATRUE;
	}*/
	/* near ramp */
/*	if ((p_tsr_elem->TSR_ID != 0) && (p_tsr_elem->TSR_Relevancy == 1) && (p_ehr->MapDataValid == 1) && (p_ehr->RampOutDistance > P_RFM_TSR_MATCH_DIS))
	{
		b_ret = ATRUE;
	}*/

	/*spl lane assign*/
	if ((p_tsr_elem->TSR_Relevancy == 2) && (p_tsr_elem->TSR_ID != 0) && (p_tsr_elem->TSR_Sign_Height > P_RFM_LANE_SPL_HEIGHT))
	{
		b_ret = ATRUE;
		return b_ret;
	}

	return b_ret;
}
/******************************************************************************/
/**
* @brief tsr_GetTS_SignName
* @details 获取当前非限速标志的名称：TSR_name的转换
* @param [in] p_tsr_elem: 道路模型输入： TSR元素信息。
* @return 返回值：转换后的交通标志名称
*/
/******************************************************************************/
static
AInt8U tsr_GetTS_SignName(HWA_TSRElement* p_tsr_elem) {

	AInt i_tsr_len = GetArrLen(TSR_Name, a_out_tsr_map);
	AInt8U i_out_idx;
	AInt8U i_out_tsr_name = 0;
	for (i_out_idx = 0; i_out_idx < i_tsr_len; i_out_idx++)
	{
		if ((a_out_tsr_map[i_out_idx] == p_tsr_elem->TSR_Sign_Name) && (p_tsr_elem->TSR_Sign_Name != e_TSR_Reserved_0))
		{
			i_out_tsr_name = i_out_idx;
		}
	}
    /* addition */
	switch (p_tsr_elem->TSR_Sign_Name)
	{   /*220*/
	case e_LED_No_Passing:
		i_out_tsr_name = 16;
		break;
		/*221*/
	case e_LED_No_Passing_End:
		i_out_tsr_name = 15;
		break;
	default:
		break;
	}
	return i_out_tsr_name;
}
/******************************************************************************/
/**
* @brief tsr_GetSPLvalue
* @details 将限速牌转换为限速值：根据限速牌的coding，将限速牌转换为限速值
* @param [in] p_tsr_elem: 道路模型输入： TSR元素信息。
* @return 返回值：限速牌的限速值
*/
/******************************************************************************/
static
AInt8U tsr_GetSPLvalue(HWA_TSRElement* p_tsr_elem) {

	AInt spl_name_len = GetArrLen(TSR_Name, spl_name_map);
	AInt spl_value_len = GetArrLen(AInt8U, spl_value_map);
	AInt i;
	AInt8U ret_spl_value = 0;
	for (i = 0; i < spl_name_len && (spl_name_len == spl_value_len); i++)
	{
		if (p_tsr_elem->TSR_Sign_Name == spl_name_map[i])
		{
			ret_spl_value = spl_value_map[i];
		}
	}
	return ret_spl_value;
}
/******************************************************************************/
/**
* @brief tsr_GetSpl_end
* @details 将限速牌转换为限速值：根据限速牌的coding，将限速牌转换为限速值
* @param [in] p_tsr_elem: 道路模型输入： TSR元素信息。
* @return 返回值：限速牌的限速值
*/
/******************************************************************************/
static
ABool tsr_GetSpl_end(HWA_TSRElement* p_tsr_elem) {

	/*	e_Motorway_Begin,	e_Regular_End_Of_Motorway,	e_Expressway_Begin,
		e_Expressway_End,	e_Playground_Residential_Area_Begin,
		e_End_Of_Playground_Residential_Area,	e_City_Entrance,
		e_Combined_City_Exit,	e_City_Entrance_Black_Background,
		e_Built_Up_Area,	e_End_of_Built_Up_Area,		e_End_Of_City,
		Electronic_sign_Off */

	AInt8U spl_end_len = GetArrLen(TSR_Name, spl_end_name_map);
	AInt8U i;
	ABool b_ret = AFALSE;
	for (i = 0; i < spl_end_len; i++)
	{
		if (p_tsr_elem->TSR_Sign_Name == spl_end_name_map[i])
		{
			b_ret = ATRUE;
		}
	}
	return b_ret;
}
/******************************************************************************/
/**
* @brief tsr_GetSPLsupName
* @details 获取限速补充标志的值：若存在限速牌，获取限速牌的补充标志
* @param [in] p_tsr_elem: 道路模型输入： TSR元素信息。
* @return 返回值：限速牌的限速值
*/
/******************************************************************************/
static
AInt8U tsr_GetSPLsupName(HWA_TSRElement* p_tsr_elem) {

	AInt i_sup_out_len = GetArrLen(TSR_Sup_Name, a_out_sup_map);
	AInt8U i_out_idx;
	AInt8U SPL_Supp_SignName = e_none;
	AInt8U TSR_Supp_SignName = 0;
	AInt8U TSR_Supp1_SignNameCfd, TSR_Supp2_SignNameCfd;
	/*judge confidence*/
	/*TSR_Supp1_SignNameCfd = p_tsr_elem->TSR_Sup1_Confidence;
	TSR_Supp2_SignNameCfd = p_tsr_elem->TSR_Sup2_Confidence;*/
	/*judge name*/
	TSR_Supp1_SignNameCfd = p_tsr_elem->TSR_Sup1_SignName;
	TSR_Supp2_SignNameCfd = p_tsr_elem->TSR_Sup2_SignName;
	if ((TSR_Supp1_SignNameCfd == 0) && (TSR_Supp2_SignNameCfd == 0))
	{
		TSR_Supp_SignName = 0;
	}
	else if ((TSR_Supp1_SignNameCfd != 0) && (TSR_Supp2_SignNameCfd == 0))
	{
		TSR_Supp_SignName = p_tsr_elem->TSR_Sup1_SignName;
	}
	else if ((TSR_Supp1_SignNameCfd == 0) && (TSR_Supp2_SignNameCfd != 0))
	{
		TSR_Supp_SignName = p_tsr_elem->TSR_Sup2_SignName;
	}
	else if ((TSR_Supp1_SignNameCfd != 0) && (TSR_Supp2_SignNameCfd != 0))
	{
		TSR_Supp_SignName = p_tsr_elem->TSR_Sup1_SignName;
	}
	else
	{
	}
	if ((TSR_Supp_SignName != 0))
	{
		for (i_out_idx = 0; i_out_idx < i_sup_out_len; i_out_idx++)
		{
			if (a_out_sup_map[i_out_idx] == TSR_Supp_SignName)
			{
				SPL_Supp_SignName = i_out_idx;
			}
		}
	}
	return SPL_Supp_SignName;
}

/******************************************************************************/
/**
* @brief tsr_GetLaneSPLvalue
* @details 获取车道级限速值：若存在龙门架限速，获取根据与车道的关系，\
* 计算当前车道和左右车道的限速值
* @param [in] p_tsr_elem: 道路模型输入： TSR元素信息。
* @return 返回值：左右车道的限速值
*/
/******************************************************************************/
static
PointD tsr_GetLaneSPLvalue(HWA_TSRElement* p_tsr_elem, LineData* p_lines, AInt8U* i_left, AInt8U* i_cur, AInt8U* i_right, AInt8U spl_value) {
#define RFM_P_TSR_LAT_COMP (0.2F)
	PointD ret_dis;  /*1: left 2: current 3:right*/
	AInt i_lane_assign = 0;
	SingleLineData line_L1 = p_lines->lineL1;
	SingleLineData line_R1 = p_lines->lineR1;
	SingleLineData line_L2 = p_lines->lineL2;
	SingleLineData line_R2 = p_lines->lineR2;
	/*SingleLineData line_L3 = p_lines->lineL3;
	SingleLineData line_R3 = p_lines->lineR3;*/
	AFloat f_dx = p_tsr_elem->TSR_Sign_Long_Distance;
	AFloat f_dy = p_tsr_elem->TSR_Sign_Lateral_Distance;
	AFloat f_L1_lat = (LINE_LAT_CALCULATE(line_L1.dC0V, line_L1.dC1V, line_L1.dC2V, line_L1.dC3V, f_dx));
	AFloat f_R1_lat = (LINE_LAT_CALCULATE(line_R1.dC0V, line_R1.dC1V, line_R1.dC2V, line_R1.dC3V, f_dx));
	AFloat f_L2_lat = (LINE_LAT_CALCULATE(line_L2.dC0V, line_L2.dC1V, line_L2.dC2V, line_L2.dC3V, f_dx));
	AFloat f_R2_lat = (LINE_LAT_CALCULATE(line_R2.dC0V, line_R2.dC1V, line_R2.dC2V, line_R2.dC3V, f_dx));
	ret_dis.dx = 0;
	ret_dis.dy = 0;
	
	if ((line_L1.bIsLineExist==LINE_EXIST)
		&&(line_R1.bIsLineExist == LINE_EXIST)
		&&(f_L1_lat > f_dy)
		&& (f_R1_lat < f_dy))
	{
		i_lane_assign = 2;
	}
	else if ((line_L2.bIsLineExist == LINE_EXIST)
		&& (line_L1.bIsLineExist == LINE_EXIST)
		&&(f_L2_lat + RFM_P_TSR_LAT_COMP > f_dy)
		&& (f_L1_lat < f_dy))
	{
		i_lane_assign = 1;
	}
	else if ((line_R2.bIsLineExist == LINE_EXIST)
		&& (line_R1.bIsLineExist == LINE_EXIST)
		&& (f_R1_lat > f_dy)
		&& (f_R2_lat - RFM_P_TSR_LAT_COMP < f_dy))
	{
		i_lane_assign = 3;
	}
	else
	{
	}

	switch (i_lane_assign)
	{
	case 1:
		*i_left = spl_value;
		break;
	case 2:
		*i_cur = spl_value;
		break;
	case 3:
		*i_right = spl_value;
		break;
	default:
		break;
	}
	if ((*i_cur)&&(i_lane_assign == 2))
	{
		ret_dis.dx = f_dx;
		ret_dis.dy = f_dy;
	}
	return ret_dis;
}

/******************************************************************************/
/**
* @brief tsr_CycleKeep_NoSup
* @details 输出信号保持：输出信号若有更新，则更新，否则保持三帧
* @param [in] pre_road_msg: 道路模型输入： 上一时刻信号。
* @param [in] road_msg: 道路模型输出： 当前输出信号。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_CycleKeep_NoSup(HWA_RoadMsg_st* road_msg, HWA_RoadMsg_st* pre_road_msg) {
	if ((road_msg->SPL_noSupp_Value != 0) && (pre_road_msg->SPL_noSupp_Value == 0))
	{
		road_msg->SPL_noSupp_Cnt = 0;
	}
	else if ((road_msg->SPL_noSupp_Value != 0) && (pre_road_msg->SPL_noSupp_Value != 0) && (road_msg->SPL_noSupp_Cnt < P_RFM_TSR_KEEP_CNT))
	{
		if (road_msg->SPL_noSupp_Value< pre_road_msg->SPL_noSupp_Value)
		{
			road_msg->SPL_noSupp_Value = pre_road_msg->SPL_noSupp_Value;
			road_msg->SPL_noSupp_LongDistance = pre_road_msg->SPL_noSupp_LongDistance;
		}
		road_msg->SPL_noSupp_Cnt++;
	}/*If there is no output at the current time and there is output at the previous time, the output data at the previous time should be less than three cycles*/
	else if ((road_msg->SPL_noSupp_Value == 0) && (pre_road_msg->SPL_noSupp_Value != 0) && (road_msg->SPL_noSupp_Cnt < P_RFM_TSR_KEEP_CNT))
	{
		road_msg->SPL_noSupp_Value = pre_road_msg->SPL_noSupp_Value;
		road_msg->SPL_noSupp_LongDistance = pre_road_msg->SPL_noSupp_LongDistance;
		road_msg->SPL_noSupp_Cnt++;
	}
	else
	{
	}
	/*If more than three cycles, the data is cleared*/
	if (road_msg->SPL_noSupp_Cnt >= P_RFM_TSR_KEEP_CNT)
	{
		road_msg->SPL_noSupp_Cnt = 0;
		road_msg->SPL_noSupp_LongDistance = 0;
		road_msg->SPL_noSupp_Value = 0;
	}
	/*if there is cur_lane_spl, put out cur_lane_spl*/
	if (road_msg->SPL_CurLaneValue != 0)
	{
		road_msg->SPL_noSupp_Value = road_msg->SPL_CurLaneValue;
	}
}
/******************************************************************************/
/**
* @brief tsr_CycleKeep_Sup
* @details 输出信号保持：输出信号若有更新，则更新，否则保持三帧
* @param [in] pre_road_msg: 道路模型输入： 上一时刻信号。
* @param [in] road_msg: 道路模型输出： 当前输出信号。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_CycleKeep_Sup(HWA_RoadMsg_st* road_msg, HWA_RoadMsg_st* pre_road_msg) {
	if (road_msg->SPL_whSupp_Value != 0)
	{
		road_msg->SPL_whSupp_Cnt = 0;
	}/*If there is no output at the current time and there is output at the previous time, the output data at the previous time should be less than three cycles*/
	else if ((road_msg->SPL_whSupp_Value == 0) && (pre_road_msg->SPL_whSupp_Value != 0) && (road_msg->SPL_whSupp_Cnt < P_RFM_TSR_KEEP_CNT))
	{
		road_msg->SPL_whSupp_Value = pre_road_msg->SPL_whSupp_Value;
		road_msg->SPL_whSupp_LongDistance = pre_road_msg->SPL_whSupp_LongDistance;
		road_msg->SPL_Sup1_SignName = pre_road_msg->SPL_Sup1_SignName;
		road_msg->SPL_Sup1_Confidence = pre_road_msg->SPL_Sup1_Confidence;
		road_msg->SPL_Sup2_SignName = pre_road_msg->SPL_Sup2_SignName;
		road_msg->SPL_Sup2_Confidence = pre_road_msg->SPL_Sup2_Confidence;

		road_msg->SPL_whSupp_Cnt++;
	}
	else
	{
	}
	/*If more than three cycles, the data is cleared*/
	if (road_msg->SPL_whSupp_Cnt >= P_RFM_TSR_KEEP_CNT)
	{
		road_msg->SPL_whSupp_Cnt = 0;
		road_msg->SPL_whSupp_LongDistance = 0;
		road_msg->SPL_Sup1_SignName = 0;
		road_msg->SPL_Sup1_Confidence = 0;
		road_msg->SPL_Sup2_SignName = 0;
		road_msg->SPL_Sup2_Confidence = 0;
		road_msg->SPL_whSupp_Value = 0;
	}
}
/******************************************************************************/
/**
* @brief tsr_CycleKeep_Name
* @details 输出信号保持：输出信号若有更新，则更新，否则保持三帧
* @param [in] pre_road_msg: 道路模型输入： 上一时刻信号。
* @param [in] road_msg: 道路模型输出： 当前输出信号。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_CycleKeep_Name(HWA_RoadMsg_st* road_msg, HWA_RoadMsg_st* pre_road_msg) {
	if (road_msg->TSR_Sign_Name != 0)
	{
		road_msg->TSR_Sign_Cnt = 0;
	}/*If there is no output at the current time and there is output at the previous time, the output data at the previous time should be less than three cycles*/
	else if ((road_msg->TSR_Sign_Name == 0) && (pre_road_msg->TSR_Sign_Name != 0) && (road_msg->TSR_Sign_Cnt < P_RFM_TSR_KEEP_CNT))
	{
		road_msg->TSR_Sign_Name = pre_road_msg->TSR_Sign_Name;
		road_msg->TSR_ID = pre_road_msg->TSR_ID;
		road_msg->TSR_Sign_Cnt++;
	}
	else
	{
	}
	/*If more than three cycles, the data is cleared*/
	if (road_msg->TSR_Sign_Cnt >= P_RFM_TSR_KEEP_CNT)
	{
		road_msg->TSR_Sign_Cnt = 0;
		road_msg->TSR_ID = 0;
		road_msg->TSR_Sign_Name = 0;
	}

}
/******************************************************************************/
/**
* @brief tsr_CycleKeep_Single
* @details 输出信号保持：输出信号若有更新，则更新，否则保持三帧
* @param [in] pre_signal: 道路模型输入： 上一时刻信号。
* @param [in] cnt: 道路模型输入： 保持帧数。
* @param [in] cur_signal: 道路模型输出： 当前输出信号。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_CycleKeep_Single(AInt8U* cur_signal, AInt8U* pre_signal, AInt8U* cnt) {
	AInt8U i_cur = *cur_signal;
	AInt8U i_pre = *pre_signal;
	AInt8U i_cnt = *cnt;
	if (i_cur)
	{
		i_cnt = 0;
	}/*If there is no output at the current time and there is output at the previous time, the output data at the previous time should be less than three cycles*/
	else if ((i_cur == 0) && (i_pre != 0) && (i_cnt < P_RFM_TSR_KEEP_CNT))
	{
		i_cur = i_pre;
		i_cnt++;
	}
	else
	{
	}
	/*If more than three cycles, the data is cleared*/
	if (i_cnt >= P_RFM_TSR_KEEP_CNT)
	{
		i_cnt = 0;
		i_cur = 0;
	}
	*cur_signal = i_cur;
	*cnt = i_cnt;
}
/******************************************************************************/
/**
* @brief tsr_CycleKeep_CurSpl
* @details 输出信号保持：当前车道限速若有更新，则更新，否则保持7*4帧
* @param [in] pre_signal: 道路模型输入： 上一时刻信号。
* @param [in] cnt: 道路模型输入： 保持帧数。
* @param [in] cur_signal: 道路模型输出： 当前输出信号。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_CycleKeep_CurSpl(AInt8U* cur_signal, AInt8U* pre_signal, AInt8U* cnt) {
	AInt8U i_cur = *cur_signal;
	AInt8U i_pre = *pre_signal;
	AInt8U i_cnt = *cnt;
	if (i_cur)
	{
		i_cnt = 0;
	}/*If there is no output at the current time and there is output at the previous time, the output data at the previous time should be less than three cycles*/
	else if ((i_cur == 0) && (i_pre != 0) && (i_cnt < P_RFM_TSR_KEEP_CNT * 3))
	{
		i_cur = i_pre;
		i_cnt++;
	}
	else
	{
	}
	/*If more than three cycles, the data is cleared*/
	if (i_cnt >= P_RFM_TSR_KEEP_CNT * 3)
	{
		i_cnt = 0;
		i_cur = 0;
	}
	*cur_signal = i_cur;
	*cnt = i_cnt;
}
/******************************************************************************/
/**
* @brief tsr_GetSPLsupName
* @details 输出信号保持：输出信号若有更新，则更新，否则保持七帧
* @param [in] pre_road_msg: 道路模型输入： 上一时刻道路信息。
* @param [out] road_msg: 道路模型输入： 当前时刻道路信息。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_CycleKeep(HWA_RoadMsg_st* road_msg, HWA_RoadMsg_st* pre_road_msg) {
	/* 1. SPL_End*/    /*set cnt*/
	tsr_CycleKeep_Single(&road_msg->SPL_End, &pre_road_msg->SPL_End, &road_msg->SPL_End_Cnt);
	/* 1.2 SPL_CurLaneValue*/    /*set cnt*/
	tsr_CycleKeep_CurSpl(&road_msg->SPL_CurLaneValue, &pre_road_msg->SPL_CurLaneValue, &road_msg->SPL_Cur_Cnt);

	/* 2. SPL_noSupp_Value, SPL_noSupp_LongDistance */
	tsr_CycleKeep_NoSup(road_msg, pre_road_msg);

	/* 3. SPL_Sup */
	tsr_CycleKeep_Sup(road_msg, pre_road_msg);

	/* 4. SPL_LeftLaneValue*/
	tsr_CycleKeep_Single(&road_msg->SPL_LeftLaneValue, &pre_road_msg->SPL_LeftLaneValue, &road_msg->SPL_Left_Cnt);

	/* 5. SPL_RightLaneValue*/
	tsr_CycleKeep_Single(&road_msg->SPL_RightLaneValue, &pre_road_msg->SPL_RightLaneValue, &road_msg->SPL_Right_Cnt);

	/* 6. TS_SignName*/
	tsr_CycleKeep_Name(road_msg, pre_road_msg);

	/* 7. Lane change signal*/
	tsr_CycleKeep_Single(&road_msg->SPL_LaneChanged, &pre_road_msg->SPL_LaneChanged, &road_msg->SPL_LaneChanged_Cnt);

	return;
}
/******************************************************************************/
/**
* @brief tsr_GetSPLsupName
* @details 输出信号保持：输出信号若有更新，则更新，否则保持三帧
* @param [in] pre_road_msg: 道路模型输入： 上一时刻道路信息。
* @param [out] road_msg: 道路模型输入： 当前时刻道路信息。
* @return 返回值：无
*/
/******************************************************************************/
static
ABool tsr_GetSPL_End_Result(AInt8U noSupp_result, AInt8U Supp_result, AInt8U End_flag) {
	if ((noSupp_result == 0) && (Supp_result == 0) && (End_flag))
	{
		End_flag = ATRUE;
	}
	else
	{
		End_flag = AFALSE;
	}
	return End_flag;
}
/******************************************************************************/
/**
* @brief tsr_GetTSR_Result
* @details 输出信号：将交通标志结果输出
* @param [in] p_tsr: 道路模型输入： TSR信息。
* @param [in] p_ehr: 道路模型输入： EHR信息。
* @param [in] tsr_idx: 道路模型输入： 结果TSR元素索引值。
* @param [in] TS_SignName_result: 道路模型输入： TSR输出结果。
* @param [out] road_msg: 道路模型输出： 当前时刻道路信息。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_GetTSR_Result(HWA_RoadMsg_st* p_road_msg, HWATSRPack* p_tsr, HWAEHRPack* p_ehr, AInt8U tsr_idx, AInt8U TS_SignName_result) {
	
	if ((TS_SignName_result != 255) && (tsr_idx != P_RFM_TSRMAXNUM))
	{
		p_road_msg->TSR_Sign_Name = TS_SignName_result;
		p_road_msg->TSR_ID = p_tsr->element[tsr_idx].TSR_ID;
		p_road_msg->TS_Confidence = p_tsr->element[tsr_idx].TSR_Confidence;
		p_road_msg->TS_LongDistance = (AInt8U)p_tsr->element[tsr_idx].TSR_Sign_Long_Distance;
	}
	else if ((TS_SignName_result == 255) && (p_ehr->MapDataValid == 1) && (p_ehr->TrafficSignValue > 0) && (p_ehr->TrafficSignValue < 255))
	{
		p_road_msg->TSR_Sign_Name = p_ehr->TrafficSignValue;
		p_road_msg->TS_LongDistance = (p_ehr->TrafficSignDistance < 255) ? p_ehr->TrafficSignDistance : 255;
		p_road_msg->TS_Confidence = 0.F;
		p_road_msg->TSR_ID = 0;
	}
	else
	{
		p_road_msg->TSR_Sign_Name = 0;
		p_road_msg->TS_Confidence = 0.F;
		p_road_msg->TSR_ID = 0;
		p_road_msg->TS_LongDistance = 0;
	}
}
/******************************************************************************/
/**
* @brief tsr_GetSup_Result
* @details 输出信号：将补充交通标志结果输出
* @param [in] p_tsr: 道路模型输入： TSR信息。
* @param [in] whsup_idx: 道路模型输入： 结果TSR元素索引值。
* @param [in] SPLsuppSignName_result: 道路模型输入： TSR输出结果。
* @param [out] road_msg: 道路模型输出： 当前时刻道路信息。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_GetSup_Result(HWA_RoadMsg_st* p_road_msg, HWATSRPack* p_tsr, AInt8U whsup_idx, AInt8U SPLsuppSignName_result) {
	if (SPLsuppSignName_result)
	{
		p_road_msg->SPL_Sup1_SignName = SPLsuppSignName_result;
		p_road_msg->SPL_Sup1_Confidence = p_tsr->element[whsup_idx].TSR_Sup1_Confidence;	/*or use the max conf?*/
		p_road_msg->SPL_Sup2_SignName = 0;
		p_road_msg->SPL_Sup2_Confidence = 0.F;
	}
	else
	{
		p_road_msg->SPL_Sup1_SignName = 0;
		p_road_msg->SPL_Sup1_Confidence = 0.F;
		p_road_msg->SPL_whSupp_LongDistance = 0;
		p_road_msg->SPL_Sup2_SignName = 0;
		p_road_msg->SPL_Sup2_Confidence = 0.F;
	}
}
/******************************************************************************/
/**
* @brief tsr_GetSPL_Nosup_Result
* @details 输出信号：将无补充交通标志的限速结果输出
* @param [in] p_tsr: 道路模型输入： TSR信息。
* @param [in] nosup_idx: 道路模型输入： 结果TSR元素索引值。
* @param [in] i_spl_cur_lane: 道路模型输入： 当前车道限速。
* @param [in] i_spl_cur_dis_out: 道路模型输入： 当前车道限速牌坐标。
* @param [in] SPLnoSuppValue_result: 道路模型输入： 无补充标志限速值。
* @param [out] road_msg: 道路模型输出： 当前时刻道路信息。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_GetSPL_Nosup_Result(HWA_RoadMsg_st* p_road_msg, HWATSRPack* p_tsr, AInt8U nosup_idx, AInt8U i_spl_cur_lane, PointD i_spl_cur_dis_out, AInt8U SPLnoSuppValue_result) {
	if (i_spl_cur_lane)
	{
		p_road_msg->SPL_noSupp_Value = i_spl_cur_lane;
		p_road_msg->SPL_noSupp_LongDistance = (AInt8U)i_spl_cur_dis_out.dx;
		p_road_msg->SPL_CurLaneValue = i_spl_cur_lane;
	}
	else if ((SPLnoSuppValue_result) && (nosup_idx != P_RFM_TSRMAXNUM))
	{
		p_road_msg->SPL_noSupp_LongDistance = (AInt8U)p_tsr->element[nosup_idx].TSR_Sign_Long_Distance;
		p_road_msg->SPL_noSupp_Value = SPLnoSuppValue_result;
		p_road_msg->SPL_CurLaneValue = 0;
	}
	else
	{
		p_road_msg->SPL_noSupp_Value = 0;
		p_road_msg->SPL_noSupp_LongDistance = 0;
		p_road_msg->SPL_CurLaneValue = 0;
	}
}
/******************************************************************************/
/**
* @brief tsr_GetSPL_Sup_Result
* @details 输出信号：将带补充交通标志的限速结果输出
* @param [in] p_tsr: 道路模型输入： TSR信息。
* @param [in] whsup_idx: 道路模型输入： 结果TSR元素索引值。
* @param [in] SPLwhSuppValue_result: 道路模型输入： 含补充标志限速值。
* @param [out] road_msg: 道路模型输出： 当前时刻道路信息。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_GetSPL_Sup_Result(HWA_RoadMsg_st* p_road_msg, HWATSRPack* p_tsr, AInt8U whsup_idx, AInt8U SPLwhSuppValue_result) {
	if ((SPLwhSuppValue_result) && (whsup_idx != P_RFM_TSRMAXNUM))
	{
		p_road_msg->SPL_whSupp_Value = SPLwhSuppValue_result;
		p_road_msg->SPL_whSupp_LongDistance = (AInt8U)p_tsr->element[whsup_idx].TSR_Sign_Long_Distance;
	}
	else
	{
		p_road_msg->SPL_whSupp_Value = 0;
		p_road_msg->SPL_whSupp_LongDistance = 0;
	}
}
/******************************************************************************/
/**
* @brief tsr_GetSPL_Dis_Result
* @details 输出信号：将限速标志的坐标输出
* @param [in] p_tsr: 道路模型输入： TSR信息。
* @param [in] i_spl_cur_dis_out: 道路模型输入： 本车道限速牌坐标。
* @param [in] i_spl_cur_lane: 道路模型输入： 本车道限速值。
* @param [in] whsup_idx: 道路模型输入： 带补充标志限速牌索引值。
* @param [in] nosup_idx: 道路模型输入： 不带补充标志限速牌索引值。
* @param [out] road_msg: 道路模型输出： 当前时刻道路信息。
* @return 返回值：无
*/
/******************************************************************************/
static
AVoid tsr_GetSPL_Dis_Result(HWA_RoadMsg_st* p_road_msg, HWATSRPack* p_tsr, PointD i_spl_cur_dis_out, AInt8U i_spl_cur_lane, AInt8U whsup_idx, AInt8U nosup_idx) {
	AInt32U spl_long_dis = 0;
	AFloat spl_lat_dis = 0;
	if (whsup_idx != P_RFM_TSRMAXNUM)
	{
		spl_long_dis = (AInt32U)p_tsr->element[whsup_idx].TSR_Sign_Long_Distance;
		spl_lat_dis = p_tsr->element[whsup_idx].TSR_Sign_Lateral_Distance;

	}
	else if (nosup_idx != P_RFM_TSRMAXNUM)
	{
		if (i_spl_cur_lane)
		{
			spl_long_dis = (AInt32U)i_spl_cur_dis_out.dx;
			spl_lat_dis = i_spl_cur_dis_out.dy;
		}
		else
		{
			spl_long_dis = (AInt32U)p_tsr->element[nosup_idx].TSR_Sign_Long_Distance;
			spl_lat_dis = p_tsr->element[nosup_idx].TSR_Sign_Lateral_Distance;
		}
	}
	if (spl_long_dis == 0)
	{
		spl_long_dis = (AInt32U)TSR_Long_Unknown;
	}
	else if (spl_long_dis > 60)
	{
		spl_long_dis = (AInt32U)TSR_Long_outofrange;
	}
	else
	{
	}
	p_road_msg->TSR_Sign_Long_Distance = spl_long_dis;
	p_road_msg->TSR_Sign_Lateral_Distance = spl_lat_dis;

}
/******************************************************************************/
/**
* @brief HWAObejctManage
* @details 道路模型TSR模块：根据后端需求，筛选出优先级较高的TSR的类型和置信度，\n
* 并保持3个周期。
* @param [in] kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] ehrpack: 道路模型输入：地图输出数据
* @param [in] tsrpack: 道路模型输入： 摄像头输出TSR数据
* @param [out] kernel: 道路模型输出：将筛选得到的TSR信息赋予核心结构体。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
ABool HWAObejctManage(HWAKernel* kernel, HWAEHRPack* pst_ehrpack, HWATSRPack* pst_tsrpack)
{
	HWA_RoadMsg_st* p_road_msg = &kernel->roadmsg[CURRENT];
	LineData* p_lines = &kernel->lines[CURRENT];
	HWA_RoadMsg_st* pre_road_msg = &kernel->roadmsg[PREVIOUS];
	HWAEHRPack* p_ehr = pst_ehrpack;
	HWATSRPack* p_tsr = pst_tsrpack;
	AInt8U i, i_TSR_Valid;
	AInt8U tsr_idx = P_RFM_TSRMAXNUM;
	AInt8U nosup_idx = P_RFM_TSRMAXNUM;
	AInt8U whsup_idx = P_RFM_TSRMAXNUM;

	AInt8U SPLValue_looptemp = 0;/*current spl value*/
	AInt8U SPLsuppSignName_looptemp = 0; /*cur temp spl name with sup */
	AInt8U SPLwhSuppValue_result = 0;/*spl value with sup */
	AInt8U SPLnoSuppValue_result = 0;/*spl value without sup */
	AInt8U SPLsuppSignName_result = 0;/*spl name with sup */
	AInt8U TS_SignName_looptemp = 0;
	AInt8U TS_SignName_result = 255;/*spl name with sup */
	AInt8U SPLendFlag = AFALSE;
	AInt8U i_spl_left_lane = 0;
	AInt8U i_spl_cur_lane = 0;
	AInt8U i_spl_right_lane = 0;
	PointD i_spl_cur_dis ;
	PointD i_spl_cur_dis_out;


	i_spl_cur_dis.dx = 0;
	i_spl_cur_dis.dy = 0;
	i_spl_cur_dis_out.dx = 0;
	i_spl_cur_dis_out.dy = 0;
	p_road_msg->FUSSts = 1;/*1：fusion 2:vision*/
	for (i = 0; i < p_tsr->header.TSR_Valid_Num; i++)
	{
		i_TSR_Valid = tsr_GetTSR_Valid_Sts(&p_tsr->element[i], p_road_msg->VehInRightmostLane, p_ehr);
		if (i_TSR_Valid)
		{/*Temporary storage of current speed limit value*/
			SPLValue_looptemp = tsr_GetSPLvalue(&p_tsr->element[i]);
			/*Temporary storage of current traffic sign values*/
			TS_SignName_looptemp = tsr_GetTS_SignName(&p_tsr->element[i]);
			SPLendFlag = tsr_GetSpl_end(&p_tsr->element[i]);
			/*If there are speed limit signs*/
			if (SPLValue_looptemp)
			{/*Gets the value of the speed limit supplementary sign*/
				SPLsuppSignName_looptemp = tsr_GetSPLsupName(&p_tsr->element[i]);
				/*If there is a speed limit supplementary sign*/
				if (SPLsuppSignName_looptemp)
				{/*Take the last conditional speed limit and its speed limit value*/
					whsup_idx = i;
					SPLwhSuppValue_result = SPLValue_looptemp;
					SPLsuppSignName_result = SPLsuppSignName_looptemp;
				}/*If there is no speed limit supplementary sign*/
				else
				{
					if (SPLValue_looptemp > SPLnoSuppValue_result)
					{/*Take the maximum non conditional speed limit value*/
						nosup_idx = i;
						SPLnoSuppValue_result = SPLValue_looptemp;
					}
					if ((p_tsr->element[i].TSR_Sign_Height > P_RFM_LANE_SPL_HEIGHT))
						/* && (p_ehr->MapDataValid == 1)
						&& (p_ehr->DrivingOnHighWay == 1))*/ 
					{
						i_spl_cur_dis = tsr_GetLaneSPLvalue(&p_tsr->element[i],p_lines ,&i_spl_left_lane,&i_spl_cur_lane,&i_spl_right_lane,SPLValue_looptemp);
						if (fabs(i_spl_cur_dis.dy) > FLT_EPSILON) {
							i_spl_cur_dis_out = i_spl_cur_dis;
						}
					}
				}
			}
			/*If there are recognizable non speed limit signs*/
			if (TS_SignName_looptemp)
			{/*coding The lowest value has the highest priority*/
				if (TS_SignName_looptemp < TS_SignName_result)
				{
					tsr_idx = i;
					TS_SignName_result = TS_SignName_looptemp;
				}
			}
		}
	}
	/*If there is no speed limit and there is a speed limit release, the speed limit release is sent*/
	p_road_msg->SPL_End = tsr_GetSPL_End_Result(SPLnoSuppValue_result, SPLwhSuppValue_result, SPLendFlag);
	/*TS_SignName*/
	tsr_GetTSR_Result(p_road_msg, p_tsr, p_ehr, tsr_idx, TS_SignName_result);

	/*SPLsuppSignName*/
	tsr_GetSup_Result(p_road_msg, p_tsr, whsup_idx, SPLsuppSignName_result);

	/*SPLnoSuppValue*/
	tsr_GetSPL_Nosup_Result(p_road_msg, p_tsr, nosup_idx, i_spl_cur_lane, i_spl_cur_dis_out, SPLnoSuppValue_result);

	/*SPL_whSupp_Value*/
	tsr_GetSPL_Sup_Result(p_road_msg, p_tsr, whsup_idx, SPLwhSuppValue_result);

	p_road_msg->SPL_LeftLaneValue = i_spl_left_lane;
	p_road_msg->SPL_RightLaneValue = i_spl_right_lane;

	/*TSR_Sign_Long_Distance*/
	tsr_GetSPL_Dis_Result(p_road_msg, p_tsr, i_spl_cur_dis_out, i_spl_cur_lane, whsup_idx, nosup_idx);

	/*need to keep 7 cycles*/
	tsr_CycleKeep(p_road_msg, pre_road_msg);
#if TSR_LOG
	printf("TSR_OUT: ID %d,Name: %d,Conf: %f,Lat:%f,Spl_long:%d,TS_long:%d,Wh_spd:%d,Wh_long:%d,Sup_name:%d,\n   \
            right_spd: %d,left_spd: %d, No_spd:%d,No_long:%d,Spl_End:%d\n",
		p_road_msg->TSR_ID,p_road_msg->TSR_Sign_Name, p_road_msg->TS_Confidence, 
		p_road_msg->TSR_Sign_Lateral_Distance, p_road_msg->TSR_Sign_Long_Distance, p_road_msg->TS_LongDistance,
		p_road_msg->SPL_whSupp_Value, p_road_msg->SPL_whSupp_LongDistance, p_road_msg->SPL_Sup1_SignName,
		p_road_msg->SPL_RightLaneValue, p_road_msg->SPL_LeftLaneValue,
		p_road_msg->SPL_noSupp_Value, p_road_msg->SPL_noSupp_LongDistance,
		p_road_msg->SPL_End
		);

#endif 


	return ATRUE;
}