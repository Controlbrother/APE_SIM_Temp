/******************************************************************************/
/**
 * @file: HWARoadLayout.c
 * @brief 道路限速模块
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


#include "HWASpeedLimit.h"


/*
********************************************************************************
* Define Section
********************************************************************************
*/
/*#define GetArrLen(type, arr) (sizeof(arr) / sizeof(type))*/
static
AVoid spl_Get_RoadType_Result(
	HWA_RoadMsg_st* p_road_msg,
	HWAEHRPack* ehr
);

static
AInt8U spl_Get_CtryCode_Result(
	HWAEHRPack* ehr
);

static
AVoid spl_GetNavSPL_Result(
	HWA_RoadMsg_st* p_road_msg,
	HWAEHRPack* ehr
);
/*
********************************************************************************
* Function Prototype Declaration Section
********************************************************************************
*/

/******************************************************************************/
/**
* @brief spl_Get_RoadType_Result
* @details 限速模块：输出道路类型信息
* @param [in] ehr: 道路模型输入： 地图信息。
* @param [out] p_road_msg: 道路模型输出： 将转换得到的道路类型赋予到结果。
* @return 返回结果 无
*/
/******************************************************************************/
static
AVoid spl_Get_RoadType_Result(HWA_RoadMsg_st* p_road_msg, HWAEHRPack* ehr) {
	if ((ehr->FuncRoadClass <= RClass_PRO_OR_CTRY_ROAD)
		&& (ehr->FuncRoadClass > 0))
	{
		p_road_msg->RoadType = ehr->FuncRoadClass;
	}
	else if ((ehr->FuncRoadClass >= RClass_MAIN_ROAD)
		&& (ehr->FuncRoadClass <= RoadClass_VILLAGE_ROAD))
	{
		p_road_msg->RoadType = RoadClass_VILLAGE_ROAD;
	}
	else
	{
		p_road_msg->RoadType = RoadClass_UNKNOWN;
	}
}
/******************************************************************************/
/**
* @brief spl_Get_RoadType_Result
* @details 限速模块：输出道路类型信息
* @param [in] ehr: 道路模型输入： 地图信息。
* @param [out] p_road_msg: 道路模型输出： 将转换得到的道路类型赋予到结果。
* @return 返回结果 无
*/
/******************************************************************************/
static
AVoid spl_GetNavSPL_Result(HWA_RoadMsg_st* p_road_msg, HWAEHRPack* ehr) {
	if (ehr->MapDataValid == 1)/*1:valid;2:invalid*/
	{
		p_road_msg->SPL_Unit = ehr->SpeedUnit;/*0x0:KPH  0x1:MPH  same to result*/

		if ((ehr->ElectronicEyeDistance != 630) && (ehr->ElectronicEyeSpeedLimit != 0))
		{
			p_road_msg->SPL_TypeCurRoad = SPLType_Electronic_Eye; /*0x0:Unknown 0x1:Traffic sign 0x2 : Electronic eye 0x3 : Rode Default*/
			p_road_msg->VehToTrafEyeDist = ehr->ElectronicEyeDistance;
			p_road_msg->SPL_ValueCurRoad = ehr->ElectronicEyeSpeedLimit;
		}
		else if (ehr->SpeedLimit != 0)
		{
			p_road_msg->SPL_TypeCurRoad = SPLType_Road_Default; /*0x0:Unknown 0x1:Traffic sign 0x2 : Electronic eye 0x3 : Rode Default*/
			p_road_msg->VehToTrafEyeDist = 0;
			p_road_msg->SPL_ValueCurRoad = ehr->SpeedLimit;
		}
		else if ((ehr->TrafficSignValue != 0) && (ehr->TrafficSignValue < 255))/*!=255*/
		{
			/*tbd according to the ehr->tsr's coding*/
			p_road_msg->SPL_TypeCurRoad = SPLType_Traffic_Sign; /*0x0:Unknown 0x1:Traffic sign 0x2 : Electronic eye 0x3 : Rode Default*/
			p_road_msg->VehToTrafEyeDist = 0;
			p_road_msg->SPL_ValueCurRoad = 0;
		}
		else
		{
			p_road_msg->SPL_TypeCurRoad = SPLType_Unknown; /*0x0:Unknown 0x1:Traffic sign 0x2 : Electronic eye 0x3 : Rode Default*/
			p_road_msg->VehToTrafEyeDist = 0;
			p_road_msg->SPL_ValueCurRoad = 0;
		}
	}
}
/******************************************************************************/
/**
* @brief spl_Get_CtryCode_Result
* @details 限速模块：输出国家代码
* @param [in] ehr: 道路模型输入： 地图信息。
* @param [out] p_road_msg: 道路模型输出： 将转换得到的道路类型赋予到结果。
* @return 返回结果 无
*/
/******************************************************************************/
static
AInt8U spl_Get_CtryCode_Result(HWAEHRPack* ehr) {
	AInt8U CountryCode = 0;
	if (ehr->CountryCode>255)
	{
		CountryCode = ehr->CountryCode;
	}
	return CountryCode;/*156*/
}
/******************************************************************************/
/**
* @brief HWASpeedLimit
* @details 限速模块：利用地图信息获取限速信息
* @param [in] kernel: 道路模型核心： 道路模型内部的结构体。
* @param [in] ehrpack: 道路模型输入： 地图输出数据
* @param [in] tsrpack: 道路模型输入： 摄像头输出的交通标志数据
* @param [in] hutpack: 道路模型输入： 导航输出数据
* @param [out] kernel: 道路模型输出： 将计算得到的限速信息赋予到结果。
* @return 运行结果
* - 1 代表成功
* - 0 代表失败
*/
/******************************************************************************/
ABool HWASpeedLimit(HWAKernel* kernel, HWAEHRPack* ehrpack, HWATSRPack* tsrpack)
{
	HWAEHRPack* ehr = ehrpack;
	HWA_RoadMsg_st* p_road_msg = &kernel->roadmsg[CURRENT];
	/*spl type&value*/
	spl_GetNavSPL_Result(p_road_msg, ehr);
	/*spl signal*/
	spl_Get_RoadType_Result(p_road_msg,ehr);
	
	p_road_msg->CtryType = spl_Get_CtryCode_Result(ehr);
/* 	AInt8U          FUSSts;  */              /*workstatus 1 0x0:Off 0x1:Fusion 0x2:Vision 0x3:Navigation  */ 
	return ATRUE;
}