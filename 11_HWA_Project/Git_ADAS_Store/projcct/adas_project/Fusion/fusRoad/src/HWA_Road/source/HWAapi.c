/******************************************************************************/
/**
 * @file: HWAapi.c
 * @brief 道路传感器接收模块
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  All Rights Reserved
 * @date: 2020-9-21 15:34:18
 */
 /******************************************************************************/

/*
********************************************************************************
* Include files section
********************************************************************************
*/
//#include"../include/HWAApi/HWAapi.h"
#include"HWAapi.h"
/*
********************************************************************************
* Define Section
********************************************************************************
*/
#define LINE_CONF (0.5)
/*
********************************************************************************
* Function Prototype Declaration Section
********************************************************************************
*/
static 
AInt8U LaneTypeConvert(AInt8U i_lanemark_Type,
	AInt8U i_LA_DLM_Type
);

static
AInt8U LRETypeConvert(AInt8U i_Lre_Type
);

static ABool Set_CamMsg_LH_Element(CamLine* camline, 
	EQ4_LH_ELEM_BUS* lh_elem, 
	EQ4_APPINFO_BUS* eq_appinfo
);

static
ABool Set_CamMsg_LA_Element(CamLine* camline,
	EQ4_LA_ELEM_BUS* la_elem, 
	EQ4_APPINFO_BUS* eq_appinfo
);

static
ABool Set_CamMsg_LRE_Element(CamLine* camline, 
	EQ4_LRE_ELEM_BUS* lre_elem,
	EQ4_APPINFO_BUS* eq_appinfo
);

static
ABool Set_CamMsg_PRED_Element(CamLine* camline,
	EQ4_LAP_HDR_BUS* pred_hdr,
	EQ4_APPINFO_BUS* eq_appinfo
);
/******************************************************************************/
/**
* @brief Set_CamMsg_LH_Element
* @details 本车道车道线接收函数
* @param [in] lh_elem: EQ4摄像头lane_host车道线
* @param [in] eq_appinfo: EQ4摄像头时间戳
* @param [out] camline: 内部摄像头车道线结构
* @return 无
*/
/******************************************************************************/
static 
ABool Set_CamMsg_LH_Element(CamLine* camline, EQ4_LH_ELEM_BUS* lh_elem, EQ4_APPINFO_BUS* eq_appinfo) {
	AInt8U  i_linetype;
	camline->hdCamQuality = lh_elem->LH_Confidence;
	camline->dC0 = lh_elem->LH_Line_First_C0;
	camline->dC1 = lh_elem->LH_Line_First_C1;
	camline->dC2 = lh_elem->LH_Line_First_C2;
	camline->dC3 = lh_elem->LH_Line_First_C3;
	camline->dRangeStart = lh_elem->LH_First_VR_Start;
	camline->dRangeEnd = lh_elem->LH_First_VR_End;
	camline->bStampValid = eq_appinfo->APP_SyncTsValid;
	camline->hdLaneLineStamp = (AInt32U)(eq_appinfo->APP_SyncTs*0.001);
	camline->hdWidthMark = lh_elem->LH_Marker_Width;

	camline->Lane_Color = lh_elem->LH_Color;  
	camline->Lane_Cut = lh_elem->LH_Crossing;
	camline->Lane_Cut_Type = 0;/*have no this signal*/
	camline->nFrameIndex = lh_elem->LH_Age;
	camline->nLaneLineID = HWA_L1;
	i_linetype = LaneTypeConvert(lh_elem->LH_Lanemark_Type, lh_elem->LH_DLM_Type);
	camline->nLaneType = (HWACamLineType)i_linetype;
	camline->stdC0 = 0;
	camline->stdC1 = 0;
	camline->stdC2 = 0;
	camline->stdC3 = 0;
	return ATRUE;
}
/******************************************************************************/
/**
* @brief Set_CamMsg_LA_Element
* @details 本车道车道线接收函数
* @param [in] la_elem: EQ4摄像头邻车道车道线
* @param [in] eq_appinfo: EQ4摄像头时间戳
* @param [out] camline: 内部摄像头车道线结构
* @return 无
*/
/******************************************************************************/
static
ABool Set_CamMsg_LA_Element(CamLine* camline, EQ4_LA_ELEM_BUS* la_elem, EQ4_APPINFO_BUS* eq_appinfo) {
	AInt8U  i_linetype;
	camline->hdCamQuality = la_elem->LA_Confidence;/* (la_elem->LA_Confidence > 0.5) ? 1.F : 0.F;*/
	camline->dC0 = la_elem->LA_Line_C0;
	camline->dC1 = la_elem->LA_Line_C1;
	camline->dC2 = la_elem->LA_Line_C2;
	camline->dC3 = la_elem->LA_Line_C3;
	camline->dRangeStart = la_elem->LA_View_Range_Start;
	camline->dRangeEnd = la_elem->LA_View_Range_End;
	camline->bStampValid = eq_appinfo->APP_SyncTsValid;
	camline->hdLaneLineStamp = (AInt32U)(eq_appinfo->APP_SyncTs*0.001);
	camline->hdWidthMark = la_elem->LA_Marker_Width;

	camline->Lane_Color = la_elem->LA_Color;   /*enum is the same to eq4*/
	camline->Lane_Cut = 0;
	camline->Lane_Cut_Type = 0;/*have no this signal*/
	camline->nFrameIndex = la_elem->LA_Age;
	camline->nLaneLineID = HWA_L2;
	i_linetype = LaneTypeConvert(la_elem->LA_Lanemark_Type, la_elem->LA_DLM_Type);
	camline->nLaneType = (HWACamLineType)i_linetype;

	camline->stdC0 = 0;
	camline->stdC1 = 0;
	camline->stdC2 = 0;
	camline->stdC3 = 0;
	return ATRUE;
}
/******************************************************************************/
/**
* @brief Set_CamMsg_LRE_Element
* @details 本车道车道线接收函数
* @param [in] lre_elem: EQ4摄像头边界线
* @param [in] eq_appinfo: EQ4摄像头时间戳
* @param [out] camline: 内部摄像头车道线结构
* @return 无
*/
/******************************************************************************/
static
ABool Set_CamMsg_LRE_Element(CamLine* camline, EQ4_LRE_ELEM_BUS* lre_elem, EQ4_APPINFO_BUS* eq_appinfo) {
	AInt8U  i_edge_type;
	camline->hdCamQuality = lre_elem->LRE_Confidence;/*(lre_elem->LRE_Confidence > 0.5) ? 1.F : 0.F;*/
	camline->dC0 = lre_elem->LRE_Line_C0;
	camline->dC1 = lre_elem->LRE_Line_C1;
	camline->dC2 = lre_elem->LRE_Line_C2;
	camline->dC3 = lre_elem->LRE_Line_C3;
	camline->dRangeStart = lre_elem->LRE_View_Range_Start;
	camline->dRangeEnd = lre_elem->LRE_View_Range_End;
	camline->hdLaneLineStamp = (AInt32U)(eq_appinfo->APP_SyncTs*0.001);    /*ms*/
	camline->bStampValid = eq_appinfo->APP_SyncTsValid;    /*ms*/
	camline->hdWidthMark = 0;
	camline->Lane_Color = 0;   /*NO COLOR*/
	camline->Lane_Cut = 0;
	camline->Lane_Cut_Type = 0;/*have no this signal*/
	camline->nFrameIndex = lre_elem->LRE_Age;
	camline->nLaneLineID = HWA_LB;
	i_edge_type = LRETypeConvert(lre_elem->LRE_Type);

	camline->nLaneType = (HWACamLineType)i_edge_type;
	camline->stdC0 = 0;
	camline->stdC1 = 0;
	camline->stdC2 = 0;
	camline->stdC3 = 0;
	return ATRUE;
}
/******************************************************************************/
/**
* @brief Set_CamMsg_PRED_Element
* @details 本车道车道线接收函数
* @param [in] lre_elem: EQ4摄像头边界线
* @param [in] eq_appinfo: EQ4摄像头时间戳
* @param [out] camline: 内部摄像头车道线结构
* @return 无
*/
/******************************************************************************/
static
ABool Set_CamMsg_PRED_Element(CamLine* camline, EQ4_LAP_HDR_BUS* pred_hdr, EQ4_APPINFO_BUS* eq_appinfo) {
	ABool LAP_Valid =pred_hdr->LAP_Path_Pred_Available;
	if (pred_hdr->LAP_Path_Pred_First_Valid || LAP_Valid) {
		camline->hdCamQuality = pred_hdr->LAP_Path_Pred_Conf;
		camline->dC0 = pred_hdr->LAP_Path_Pred_First_C0;
		camline->dC1 = pred_hdr->LAP_Path_Pred_First_C1;
		camline->dC2 = pred_hdr->LAP_Path_Pred_First_C2;
		camline->dC3 = pred_hdr->LAP_Path_Pred_First_C3;
		camline->dRangeStart = 0;
		camline->dRangeEnd = pred_hdr->LAP_Path_Pred_First_VR_End;
		camline->hdLaneLineStamp = (AInt32U)(eq_appinfo->APP_SyncTs*0.001);
		camline->bStampValid = eq_appinfo->APP_SyncTsValid;
		camline->hdWidthMark = 0;

		camline->Lane_Color = 0;   /*NO COLOR*/
		camline->Lane_Cut = 0;
		camline->Lane_Cut_Type = 0;/*have no this signal*/
		camline->nFrameIndex = 0;
		camline->nLaneLineID = HWA_CL;

		camline->nLaneType = (HWACamLineType)0;/*no type*/
		camline->stdC0 = 0;
		camline->stdC1 = 0;
		camline->stdC2 = 0;
		camline->stdC3 = 0;
	}
	return ATRUE;
}
/******************************************************************************/
/**
* @brief ReceiveEQLane_HWA
* @details 车道线接收函数
* @param [in] EQ4_LH: EQ4摄像头lane_host
* @param [in] EQ4_LA: EQ4摄像头邻车道车道线
* @param [in] EQ4_LRE: EQ4摄像头边界线
* @param [in] EQ4_LAP: EQ4摄像头预测线
* @param [out] campack: 内部摄像头车道线结构
* @return 无
*/
/******************************************************************************/
AVoid ReceiveEQLane_HWA(HWAIFVPack *campack,
	const EQ4_LH_BUS *EQ4_LH,
	const EQ4_LA_BUS *EQ4_LA,
	const EQ4_LRE_BUS *EQ4_LRE,
	const EQ4_LAP_BUS *EQ4_LAP) {
	EQ4_LH_BUS EQ4_LHpack = *EQ4_LH;
	EQ4_LA_BUS EQ4_LApack = *EQ4_LA;
	EQ4_LRE_BUS EQ4_LREpack = *EQ4_LRE;
	EQ4_LAP_BUS EQ4_LAPpack = *EQ4_LAP;
	AInt8U LH_count, LRE_count, LAP_Count, LAD_count,i;
/*	EQ4_LHpack.EQ4_LH_HDR.LH_Lanes_Count = 2;
	EQ4_LHpack.EQ4_LH_ELEM[0].LH_Confidence = 1;
	EQ4_LHpack.EQ4_LH_ELEM[0].LH_Line_First_C0 = -2.5;
	EQ4_LHpack.EQ4_LH_ELEM[0].LH_Line_First_C1 = 0;
	EQ4_LHpack.EQ4_LH_ELEM[0].LH_Line_First_C2 = 0;
	EQ4_LHpack.EQ4_LH_ELEM[0].LH_Line_First_C3 = 0;
	EQ4_LHpack.EQ4_LH_ELEM[0].LH_First_VR_End = 150;
	EQ4_LHpack.EQ4_LH_ELEM[0].LH_Color = 2;
	EQ4_LHpack.EQ4_LH_ELEM[0].LH_Side = 1;
	EQ4_LHpack.EQ4_LH_ELEM[0].LH_Lanemark_Type = 1;
	EQ4_LHpack.EQ4_LH_ELEM[1].LH_Confidence = 1;
	EQ4_LHpack.EQ4_LH_ELEM[1].LH_Line_First_C0 = 2.5;
	EQ4_LHpack.EQ4_LH_ELEM[1].LH_Line_First_C1 = 0;
	EQ4_LHpack.EQ4_LH_ELEM[1].LH_Line_First_C3 = 0;
	EQ4_LHpack.EQ4_LH_ELEM[1].LH_Line_First_C2 = 0;
	EQ4_LHpack.EQ4_LH_ELEM[1].LH_First_VR_End = 150;
	EQ4_LHpack.EQ4_LH_ELEM[1].LH_Color = 2;
	EQ4_LHpack.EQ4_LH_ELEM[1].LH_Side = 2;
	EQ4_LHpack.EQ4_LH_ELEM[1].LH_Lanemark_Type = 1;  */

	memset(campack, 0x00, sizeof(HWAIFVPack));
	if (EQ4_LH->EQ4_APPINFO.APP_SyncTsValid)
	{
		campack->timestamp_ms = (AInt32U)(EQ4_LH->EQ4_APPINFO.APP_SyncTs*0.001);
	}
	/*-----------------------lanesHost-------------------------------*/
	LH_count = EQ4_LHpack.EQ4_LH_HDR.LH_Lanes_Count;
	for (i = 0; i < LH_count; i++)
	{
		if (EQ4_LHpack.EQ4_LH_ELEM[i].LH_Side == 1) /*devide left=1 & right=2*/
		{
			Set_CamMsg_LH_Element(&campack->line[HWA_L1], &EQ4_LHpack.EQ4_LH_ELEM[i], &EQ4_LHpack.EQ4_APPINFO);
		}
		else if (EQ4_LHpack.EQ4_LH_ELEM[i].LH_Side == 2)
		{
			Set_CamMsg_LH_Element(&campack->line[HWA_R1], &EQ4_LHpack.EQ4_LH_ELEM[i], &EQ4_LHpack.EQ4_APPINFO);
		}
	}
	/*--------------------------Lanes_Adjacent--------------------------------------*/
	LAD_count = EQ4_LApack.EQ4_LA_HDR.LA_Adjacent_Count;
	for ( i = 0; i < LAD_count; i++)
	{
		if (EQ4_LApack.EQ4_LA_ELEM[i].LA_Line_Side == 1) /*devide left=1 & right=4   1:L2 2:L3 3:R3 4:R2    */
		{
			Set_CamMsg_LA_Element(&campack->line[HWA_L2],&EQ4_LApack.EQ4_LA_ELEM[i],&EQ4_LApack.EQ4_APPINFO);
		}
		else if (EQ4_LApack.EQ4_LA_ELEM[i].LA_Line_Side == 2)
		{
			Set_CamMsg_LA_Element(&campack->line[HWA_L3], &EQ4_LApack.EQ4_LA_ELEM[i], &EQ4_LApack.EQ4_APPINFO);
		}
		else if (EQ4_LApack.EQ4_LA_ELEM[i].LA_Line_Side == 3)
		{
			Set_CamMsg_LA_Element(&campack->line[HWA_R3], &EQ4_LApack.EQ4_LA_ELEM[i], &EQ4_LApack.EQ4_APPINFO);
		}
		else if (EQ4_LApack.EQ4_LA_ELEM[i].LA_Line_Side == 4)
		{
			Set_CamMsg_LA_Element(&campack->line[HWA_R2], &EQ4_LApack.EQ4_LA_ELEM[i], &EQ4_LApack.EQ4_APPINFO);
		}
		else
		{
		}
	}
	/*-------------------------Lanes_Road_Edge---------------------------------*/
	LRE_count = EQ4_LREpack.EQ4_LRE_HDR.LRE_Count;
	for ( i = 0; i < LRE_count; i++)
	{
		if (EQ4_LREpack.EQ4_LRE_ELEM[i].LRE_Side == 1) /*devide left=1 & right=2*/
		{
			Set_CamMsg_LRE_Element(&campack->line[HWA_LB], &EQ4_LREpack.EQ4_LRE_ELEM[i], &EQ4_LREpack.EQ4_APPINFO);
		}
		else if (EQ4_LREpack.EQ4_LRE_ELEM[i].LRE_Side == 2)
		{
			Set_CamMsg_LRE_Element(&campack->line[HWA_RB], &EQ4_LREpack.EQ4_LRE_ELEM[i], &EQ4_LREpack.EQ4_APPINFO);
		}
	}

	/*---------------------------CENTER LINE------------------------------------*/
	LAP_Count = 1;
	 Set_CamMsg_PRED_Element(&campack->line[HWA_CL], &EQ4_LAPpack.EQ4_LAP_HDR, &EQ4_LAPpack.EQ4_APPINFO);
	 	
	campack->nNum = LH_count + LAD_count + LRE_count +LAP_Count;

#if HWA_LOG
	printf("L1 conf %.2f c0 %.2f c1 %.3f c2 %f c3 %f type %d color %d start %.2f end %.2f\n", campack->line[HWA_L1].hdCamQuality, campack->line[HWA_L1].dC0, campack->line[HWA_L1].dC1, campack->line[HWA_L1].dC2, campack->line[HWA_L1].dC3, campack->line[HWA_L1].nLaneType, campack->line[HWA_L1].Lane_Color, campack->line[HWA_L1].dRangeStart, campack->line[HWA_L1].dRangeEnd);
	printf("R1 conf %.2f c0 %.2f c1 %.3f c2 %f c3 %f type %d color %d start %.2f end %.2f\n", campack->line[HWA_R1].hdCamQuality, campack->line[HWA_R1].dC0, campack->line[HWA_R1].dC1, campack->line[HWA_R1].dC2, campack->line[HWA_R1].dC3, campack->line[HWA_R1].nLaneType, campack->line[HWA_R1].Lane_Color, campack->line[HWA_R1].dRangeStart, campack->line[HWA_R1].dRangeEnd);
	printf("L2 conf %.2f c0 %.2f c1 %.3f c2 %f c3 %f type %d color %d start %.2f end %.2f\n", campack->line[HWA_L2].hdCamQuality, campack->line[HWA_L2].dC0, campack->line[HWA_L2].dC1, campack->line[HWA_L2].dC2, campack->line[HWA_L2].dC3, campack->line[HWA_L2].nLaneType, campack->line[HWA_L2].Lane_Color, campack->line[HWA_L2].dRangeStart, campack->line[HWA_L2].dRangeEnd);
	printf("R2 conf %.2f c0 %.2f c1 %.3f c2 %f c3 %f type %d color %d start %.2f end %.2f\n", campack->line[HWA_R2].hdCamQuality, campack->line[HWA_R2].dC0, campack->line[HWA_R2].dC1, campack->line[HWA_R2].dC2, campack->line[HWA_R2].dC3, campack->line[HWA_R2].nLaneType, campack->line[HWA_R2].Lane_Color, campack->line[HWA_R2].dRangeStart, campack->line[HWA_R2].dRangeEnd);
	printf("L3 conf %.2f c0 %.2f c1 %.3f c2 %f c3 %f type %d color %d start %.2f end %.2f\n", campack->line[HWA_L3].hdCamQuality, campack->line[HWA_L3].dC0, campack->line[HWA_L3].dC1, campack->line[HWA_L3].dC2, campack->line[HWA_L3].dC3, campack->line[HWA_L3].nLaneType, campack->line[HWA_L3].Lane_Color, campack->line[HWA_L3].dRangeStart, campack->line[HWA_L3].dRangeEnd);
	printf("R3 conf %.2f c0 %.2f c1 %.3f c2 %f c3 %f type %d color %d start %.2f end %.2f\n", campack->line[HWA_R3].hdCamQuality, campack->line[HWA_R3].dC0, campack->line[HWA_R3].dC1, campack->line[HWA_R3].dC2, campack->line[HWA_R3].dC3, campack->line[HWA_R3].nLaneType, campack->line[HWA_R3].Lane_Color, campack->line[HWA_R3].dRangeStart, campack->line[HWA_R3].dRangeEnd);
	printf("LB conf %.2f c0 %.2f c1 %.3f c2 %f c3 %f type %d color %d start %.2f end %.2f\n", campack->line[HWA_LB].hdCamQuality, campack->line[HWA_LB].dC0, campack->line[HWA_LB].dC1, campack->line[HWA_LB].dC2, campack->line[HWA_LB].dC3, campack->line[HWA_LB].nLaneType, campack->line[HWA_LB].Lane_Color, campack->line[HWA_LB].dRangeStart, campack->line[HWA_LB].dRangeEnd);
	printf("RB conf %.2f c0 %.2f c1 %.3f c2 %f c3 %f type %d color %d start %.2f end %.2f\n", campack->line[HWA_RB].hdCamQuality, campack->line[HWA_RB].dC0, campack->line[HWA_RB].dC1, campack->line[HWA_RB].dC2, campack->line[HWA_RB].dC3, campack->line[HWA_RB].nLaneType, campack->line[HWA_RB].Lane_Color, campack->line[HWA_RB].dRangeStart, campack->line[HWA_RB].dRangeEnd);

#endif

	return;
}

/******************************************************************************/
/**
* @brief ReceiveMrr_HWA
* @details 接收毫米波目标函数
* @param [in] MRR_HDR: 毫米波头信息。
* @param [in] MRR_OBJ: 毫米波目标信息。
* @param [out] pst_mrrpack: 内部毫米波接口
* @return 无
*/
/******************************************************************************/
AVoid ReceiveMrr_HWA(HWA_SensorInput_st *pst_mrrpack,
	const MRR_HDR_BUS *MRR_HDR,
	const MRR_OBJ_BUS *MRR_OBJ) {
	AInt8U i = 0;
	AInt8U j = 0;
	memset(pst_mrrpack->objects, 0x00, sizeof(HWA_ObjectInput_st) * 32);
	pst_mrrpack->HWA_SensorType = HWA_FRONT_RADAR;
	pst_mrrpack->SensorStatus = MRR_HDR->MRR_hdr_ErrorStatus;
	if (MRR_HDR->MRR_hdr_TimeStampStatus|| MRR_HDR->MRR_hdr_TimeStamp>0)
	{
		pst_mrrpack->timestamp = (AInt32U)(MRR_HDR->MRR_hdr_TimeStamp*1000);
	}
	for (i = 0; i < P_RFM_MRR_OBJ_NUM; i++)
	{
		if (MRR_OBJ[i].MRR_ObjID != 0)/*|| MRR_OBJ[i].MRR_ObjExistProb > 0.8*/
		{
			pst_mrrpack->objects[j].Object_ID = MRR_OBJ[i].MRR_ObjID;
			pst_mrrpack->objects[j].ObjExistProb = MRR_OBJ[i].MRR_ObjExistProb;
			pst_mrrpack->objects[j].ObjObstacleProb = MRR_OBJ[i].MRR_ObjObstacleProb;
			pst_mrrpack->objects[j].Obj_Dist_X = MRR_OBJ[i].MRR_ObjDistX;
			pst_mrrpack->objects[j].Obj_Dist_Y = MRR_OBJ[i].MRR_ObjDistY;
			pst_mrrpack->objects[j].Rel_Velocity_X = MRR_OBJ[i].MRR_ObjRelVelX;
			pst_mrrpack->objects[j].Rel_Velocity_Y = MRR_OBJ[i].MRR_ObjRelVelY;
			pst_mrrpack->objects[j].Obj_RelAcc_X = MRR_OBJ[i].MRR_ObjRelAccelX;
			pst_mrrpack->objects[j].Obj_RelAcc_Y = MRR_OBJ[i].MRR_ObjRelAccelY;
			pst_mrrpack->objects[j].Obj_Dist_XStd = MRR_OBJ[i].MRR_ObjDistXStd;
			pst_mrrpack->objects[j].Obj_Dist_YStd = MRR_OBJ[i].MRR_ObjDistYStd;
			pst_mrrpack->objects[j].Rel_Velocity_XStd = MRR_OBJ[i].MRR_ObjRelVelXStd;
			pst_mrrpack->objects[j].Rel_Velocity_YStd = MRR_OBJ[i].MRR_ObjRelVelYStd;
			pst_mrrpack->objects[j].Obj_RelAcc_XStd = MRR_OBJ[i].MRR_ObjRAccelXStd;
			pst_mrrpack->objects[j].Obj_RelAcc_YStd = MRR_OBJ[i].MRR_ObjRAccelYStd;
			pst_mrrpack->objects[j].Classification = MRR_OBJ[i].MRR_ObjType;
			pst_mrrpack->objects[j].ObjMoveclass = MRR_OBJ[i].MRR_ObjMotionType;
			pst_mrrpack->objects[j].Box_Size_Y = MRR_OBJ[i].VFC_ObjWidth;
			pst_mrrpack->objects[j].Box_Size_X = MRR_OBJ[i].VFC_ObjLength;
			pst_mrrpack->objects[j].Box_Size_Z = MRR_OBJ[i].VFC_ObjHeight;
			pst_mrrpack->objects[j].ObjMoveOrientation = MRR_OBJ[i].VFC_ObjMotionDirection;
			pst_mrrpack->objects[j].timestamp = (AInt32U)(MRR_HDR->MRR_hdr_TimeStamp*1000);
			j++;
		}
	}
	pst_mrrpack->HWA_ValidNumber = j;

	return;
}
/******************************************************************************/
/**
* @brief ReceiveEHR_HWA
* @details 接收EHR函数
* @param [in] EHRV2_CTRL_INFO: EHR信息。
* @param [in] EHRV2_ROAD_ATTR_INFO: EHR信息。
* @param [in] IFCHUTInterface: EHR信息。
* @param [in] MapDataValid: EHR信息。
* @param [out] pst_ehrpack: 内部EHR接口
* @return 无
*/
/******************************************************************************/
AVoid ReceiveEHR_HWA(HWAEHRPack *pst_ehrpack,
	const EHRV2_CTRL_INFO_BUS* EHRV2_CTRL_INFO,
	const EHRV2_ROAD_ATTR_INFO_BUS* EHRV2_ROAD_ATTR_INFO,
	AInt8U* MapDataValid) {

	AInt i = 0;
	/*EHRV2_ROAD_ATTR_INFO*/
	pst_ehrpack->BridgeDistance = EHRV2_ROAD_ATTR_INFO->BridgeDistance;
	pst_ehrpack->DrivingOnHighWay = EHRV2_ROAD_ATTR_INFO->DrivingOnHighWay;
	pst_ehrpack->EnterBridgeInfo = EHRV2_ROAD_ATTR_INFO->EnterBridgeInfo;
	pst_ehrpack->EnterTunnelInfo = EHRV2_ROAD_ATTR_INFO->EnterTunnelInfo;
	pst_ehrpack->FormOfWay = EHRV2_ROAD_ATTR_INFO->FormOfWay;
	pst_ehrpack->NumOfLaneDrvDir = EHRV2_ROAD_ATTR_INFO->NumOfLaneDrvDir;
	pst_ehrpack->RampDistance = EHRV2_ROAD_ATTR_INFO->RampDistance;
	pst_ehrpack->RampInDistance = EHRV2_ROAD_ATTR_INFO->RampInDistance;
	pst_ehrpack->RampOutDistance = EHRV2_ROAD_ATTR_INFO->RampOutDistance;
	pst_ehrpack->TunnelDistance = EHRV2_ROAD_ATTR_INFO->TunnelDistance;
	pst_ehrpack->TrafficSignDistance = EHRV2_ROAD_ATTR_INFO->TrafficSignDistance;
	pst_ehrpack->TrafficSignValue = EHRV2_ROAD_ATTR_INFO->TrafficSignValue;

	pst_ehrpack->WeatherType = EHRV2_ROAD_ATTR_INFO->WeatherType;
	pst_ehrpack->Temperature = EHRV2_ROAD_ATTR_INFO->Temperature;
	pst_ehrpack->TrafficJamDistance = EHRV2_ROAD_ATTR_INFO->TrafficJamDistance;
	pst_ehrpack->TrafficJamDistanceHold = EHRV2_ROAD_ATTR_INFO->TrafficJamDistanceHold;
	pst_ehrpack->RepairRoadPointDistance = EHRV2_ROAD_ATTR_INFO->RepairRoadPointDistance;
	pst_ehrpack->CtrlPointDistance = EHRV2_ROAD_ATTR_INFO->CtrlPointDistance;
	pst_ehrpack->FuncRoadClass = EHRV2_ROAD_ATTR_INFO->FuncRoadClass;
	pst_ehrpack->BuildUpArea = EHRV2_ROAD_ATTR_INFO->BuildUpArea;
	pst_ehrpack->CmplxInsctDistance = EHRV2_ROAD_ATTR_INFO->CmplxInsctDistance;
	pst_ehrpack->CountryCode = EHRV2_ROAD_ATTR_INFO->CountryCode;
	/*pst_ehrpack->Stub_Type = EHRV2_ROAD_ATTR_INFO->Stub_Type;
	pst_ehrpack->StubRamp_Dir = EHRV2_ROAD_ATTR_INFO->StubRamp_Dir;
	pst_ehrpack->Ramp_Type = EHRV2_ROAD_ATTR_INFO->Ramp_Type;
	pst_ehrpack->OnNavPath = EHRV2_ROAD_ATTR_INFO->OnNavPath;*/
	/*EHRV2_CTRL_INFO*/
	pst_ehrpack->ElectronicEyeDistance = EHRV2_CTRL_INFO->ElectronicEyeDistance;
	pst_ehrpack->ElectronicEyeSpeedLimit = EHRV2_CTRL_INFO->ElectronicEyeSpeedLimit;
	pst_ehrpack->RoadCurvature = EHRV2_CTRL_INFO->RoadCurvature;
	pst_ehrpack->RoadCurvatureFar = EHRV2_CTRL_INFO->RoadCurvatureFar;
	pst_ehrpack->RoadCurvatureFarDistance = EHRV2_CTRL_INFO->RoadCurvatureFarDistance;
	for (i = 0; i < 10; i++)
	{
		pst_ehrpack->RoadCurvatureValueMatrix[i] = EHRV2_CTRL_INFO->RoadCurvatureValueMatrix[i];
		pst_ehrpack->RoadCurvatureDistanceMatrix[i] = EHRV2_CTRL_INFO->RoadCurvatureDistanceMatrix[i];

		pst_ehrpack->RoadSlopeValueMatrix[i] = EHRV2_CTRL_INFO->RoadSlopeValueMatrix[i];
		pst_ehrpack->RoadSlopeDistanceMatrix[i] = EHRV2_CTRL_INFO->RoadSlopeDistanceMatrix[i];
	}
	pst_ehrpack->RoadCurvatureMatrixSize = EHRV2_CTRL_INFO->RoadCurvatureMatrixSize;
	pst_ehrpack->RoadSlope = EHRV2_CTRL_INFO->RoadSlope;
	pst_ehrpack->RoadSlopeFar = EHRV2_CTRL_INFO->RoadSlopeFar;
	pst_ehrpack->RoadSlopeMatrixSize = EHRV2_CTRL_INFO->RoadSlopeMatrixSize;
	pst_ehrpack->SpeedLimit = EHRV2_CTRL_INFO->SpeedLimit;
	pst_ehrpack->SpeedLimitType = EHRV2_CTRL_INFO->SpeedLimitType;
	pst_ehrpack->SpeedUnit = EHRV2_CTRL_INFO->SpeedUnit;

	pst_ehrpack->MapDataValid = *MapDataValid;
#if HWA_LOG
	printf(" EHR MapValid %d,BridgeDis %d,DriOnHighWay %d,RampOutDis %d, NumOfLane %d EyeDis %d, EyeSpl %d\n",
		pst_ehrpack->MapDataValid, pst_ehrpack->BridgeDistance, pst_ehrpack->DrivingOnHighWay,
		pst_ehrpack->RampOutDistance, pst_ehrpack->NumOfLaneDrvDir, pst_ehrpack->ElectronicEyeDistance, pst_ehrpack->ElectronicEyeSpeedLimit);
#endif
	return;
}
/******************************************************************************/
/**
* @brief ReceiveTSR_HWA
* @details 接收交通标志函数
* @param [in] pack: EQ交通标志。
* @param [out] pst_tsrpack: 内部交通标志接口
* @return 无
*/
/******************************************************************************/
AVoid ReceiveTSR_HWA(HWATSRPack* pst_tsrpack,
	const EQ4_TSR_BUS* pack) {

	AInt i = 0;
	AInt i_tsr_num = 0;
	EQ4_TSR_BUS st_TSRpack = *pack;
	memset(pst_tsrpack, 0x00, sizeof(HWATSRPack));

	if (st_TSRpack.EQ4_APPINFO.APP_SyncTsValid && st_TSRpack.EQ4_APPINFO.APP_E2EStatus)
	{
		pst_tsrpack->timeStamp = (AInt32U)(st_TSRpack.EQ4_APPINFO.APP_SyncTs*0.001);
	}
	pst_tsrpack->header.TSR_Approved_Sign_Count = st_TSRpack.EQ4_TSR_HDR.TSR_Approved_Sign_Count;
	pst_tsrpack->header.TSR_Filtered_Sign_Count = st_TSRpack.EQ4_TSR_HDR.TSR_Filtered_Sign_Count;
	pst_tsrpack->header.TSR_Protocol_Version = st_TSRpack.EQ4_TSR_HDR.TSR_Protocol_Version;
	pst_tsrpack->header.TSR_Sync_ID = st_TSRpack.EQ4_TSR_HDR.TSR_Sync_ID;
	pst_tsrpack->header.TSR_UnderTracking_Sign_Count = st_TSRpack.EQ4_TSR_HDR.TSR_UnderTracking_Sign_Count;
	pst_tsrpack->header.TSR_Zero_byte = st_TSRpack.EQ4_TSR_HDR.TSR_Zero_byte;
	pst_tsrpack->header.TSR_Valid_Num = st_TSRpack.EQ4_TSR_HDR.Reserved_1;
	for (i = 0; i <P_RFM_TSRMAXNUM; i++)
	{
		if (st_TSRpack.EQ4_TSR_ELEM[i].TSR_ID > 0 )
		{
			pst_tsrpack->element[i].Reserved_10 = st_TSRpack.EQ4_TSR_ELEM[i].Reserved_10;
			pst_tsrpack->element[i].Reserved_2 = st_TSRpack.EQ4_TSR_ELEM[i].Reserved_2;
			pst_tsrpack->element[i].Reserved_3 = st_TSRpack.EQ4_TSR_ELEM[i].Reserved_3;
			pst_tsrpack->element[i].Reserved_4 = st_TSRpack.EQ4_TSR_ELEM[i].Reserved_4;
			pst_tsrpack->element[i].Reserved_5 = st_TSRpack.EQ4_TSR_ELEM[i].Reserved_5;
			pst_tsrpack->element[i].Reserved_6 = st_TSRpack.EQ4_TSR_ELEM[i].Reserved_6;
			pst_tsrpack->element[i].Reserved_7 = st_TSRpack.EQ4_TSR_ELEM[i].Reserved_7;
			pst_tsrpack->element[i].Reserved_8 = st_TSRpack.EQ4_TSR_ELEM[i].Reserved_8;
			pst_tsrpack->element[i].Reserved_9 = st_TSRpack.EQ4_TSR_ELEM[i].Reserved_9;
			pst_tsrpack->element[i].TSR_AngleZ = st_TSRpack.EQ4_TSR_ELEM[i].TSR_AngleZ;
			pst_tsrpack->element[i].TSR_Camera_Source = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Camera_Source;
			pst_tsrpack->element[i].TSR_Confidence = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Confidence;
			pst_tsrpack->element[i].TSR_Filter_Type = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Filter_Type;
			pst_tsrpack->element[i].TSR_ID = st_TSRpack.EQ4_TSR_ELEM[i].TSR_ID;
			pst_tsrpack->element[i].TSR_Measurement_Status = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Measurement_Status;
			pst_tsrpack->element[i].TSR_Relevancy = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Relevancy;
			pst_tsrpack->element[i].TSR_Relevancy_Confidence = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Relevancy_Confidence;
			pst_tsrpack->element[i].TSR_Sign_Height = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Height;
			pst_tsrpack->element[i].TSR_Sign_Height_STD = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Height_STD;
			pst_tsrpack->element[i].TSR_Sign_Lateral_Distance = -(st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Lateral_Distance);/*to vehicle  coordinate*/
			pst_tsrpack->element[i].TSR_Sign_Lat_Distance_STD = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Lat_Distance_STD;
			pst_tsrpack->element[i].TSR_Sign_Long_Distance = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Long_Distance;
			pst_tsrpack->element[i].TSR_Sign_Long_Distance_STD = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Long_Distance_STD;
			pst_tsrpack->element[i].TSR_Sign_Name = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Name;
			pst_tsrpack->element[i].TSR_Sign_Panel_Height = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Panel_Height;
			pst_tsrpack->element[i].TSR_Sign_Panel_Height_STD = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Panel_Height_STD;
			pst_tsrpack->element[i].TSR_Sign_Panel_Width = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Panel_Width;
			pst_tsrpack->element[i].TSR_Sign_Panel_Width_STD = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Panel_Width_STD;
			pst_tsrpack->element[i].TSR_Sign_Shape = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Shape;
			pst_tsrpack->element[i].TSR_Sign_Structure = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sign_Structure;
			pst_tsrpack->element[i].TSR_Sup1_Confidence = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sup1_Confidence;
			pst_tsrpack->element[i].TSR_Sup1_Position = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sup1_Position;
			pst_tsrpack->element[i].TSR_Sup1_SignName = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sup1_SignName;
			pst_tsrpack->element[i].TSR_Sup2_Confidence = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sup2_Confidence;
			pst_tsrpack->element[i].TSR_Sup2_Position = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sup2_Position;
			pst_tsrpack->element[i].TSR_Sup2_SignName = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Sup2_SignName;
			pst_tsrpack->element[i].TSR_Tracking_Age = st_TSRpack.EQ4_TSR_ELEM[i].TSR_Tracking_Age;
			i_tsr_num++;
#if TSR_LOG
			printf("TSR %d: ID: %d,Name: %d,Conf: %.2f,Rele: %d,Lat: %.2f,Long: %.2f,Height: %.2f,Sup1Name:%d,Sup2Name:%d\n",i,
				pst_tsrpack->element[i].TSR_ID, pst_tsrpack->element[i].TSR_Sign_Name, pst_tsrpack->element[i].TSR_Confidence,
				pst_tsrpack->element[i].TSR_Relevancy, pst_tsrpack->element[i].TSR_Sign_Lateral_Distance,
				pst_tsrpack->element[i].TSR_Sign_Long_Distance, pst_tsrpack->element[i].TSR_Sign_Height, pst_tsrpack->element[i].TSR_Sup1_SignName,
				pst_tsrpack->element[i].TSR_Sup2_SignName);
#endif // HWA_LOG

		}
	}
	pst_tsrpack->header.TSR_Valid_Num = i_tsr_num;
	return;
}
/******************************************************************************/
/**
* @brief ReceiveFSPX_HWA
* @details 接收freespace函数
* @param [in] pack: EQ输出freespace信息。
* @param [out] pst_fspxpack: 内部freespace接口
* @return 无
*/
/******************************************************************************/
AVoid ReceiveFSPX_HWA(HWA_FSPXPack* pst_fspxpack,
	const EQ4_FSPX_BUS* pack) {
    AInt i = 0;
    AInt8U i_fspx_num = 0;
	EQ4_FSPX_BUS st_FSPXpack = *pack;
	memset(pst_fspxpack, 0x00, sizeof(HWA_FSPXPack));
	if (st_FSPXpack.EQ4_APPINFO.APP_SyncTsValid) {
		pst_fspxpack->timeStamp = (AInt32U)(st_FSPXpack.EQ4_APPINFO.APP_SyncTs/1000.0);
	}
	pst_fspxpack->header.FSPX_Header_Buffer = st_FSPXpack.EQ4_FSPX_HDR.FSPX_Header_Buffer;
	pst_fspxpack->header.FSPX_Protocol_Version = st_FSPXpack.EQ4_FSPX_HDR.FSPX_Protocol_Version;
	pst_fspxpack->header.FSPX_Sync_ID = st_FSPXpack.EQ4_FSPX_HDR.FSPX_Sync_ID;
	pst_fspxpack->header.FSPX_Zero_byte = st_FSPXpack.EQ4_FSPX_HDR.FSPX_Zero_byte;
	pst_fspxpack->header.Num_Of_Obstacles = 0;/*no more use*/
	for ( i = 0; i < pst_fspxpack->header.Num_Of_Obstacles; i++)
	{
		if (pst_fspxpack->element[i].FSPX_Range_B0 > 1.0 || (pst_fspxpack->element[i].FSPX_Is_Valid==1)) {
			pst_fspxpack->element[i].FSPX_Azimuth_Angle_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Azimuth_Angle_B0;
			pst_fspxpack->element[i].FSPX_Azimuth_Angle_STD_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Azimuth_Angle_STD_B0;
			pst_fspxpack->element[i].FSPX_Classification_Conf_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Classification_Conf_B0;
			pst_fspxpack->element[i].FSPX_Classification_Type_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Classification_Type_B0;
			pst_fspxpack->element[i].FSPX_Elevation_Angle_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Existence_Prob_B0;
			pst_fspxpack->element[i].FSPX_Existence_Prob_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Elevation_Angle_B0;
			pst_fspxpack->element[i].FSPX_Height_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Height_B0;
			pst_fspxpack->element[i].FSPX_Height_STD_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Height_STD_B0;
			pst_fspxpack->element[i].FSPX_Is_Valid = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Is_Valid;
			pst_fspxpack->element[i].FSPX_Lane_Assginment_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Lane_Assginment_B0;
			pst_fspxpack->element[i].FSPX_Mobility_Status_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Mobility_Status_B0;
			pst_fspxpack->element[i].FSPX_Obsticle_ID_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Obsticle_ID_B0;
			pst_fspxpack->element[i].FSPX_Range_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Range_B0;
			pst_fspxpack->element[i].FSPX_Range_STD_B0 = st_FSPXpack.EQ4_FSPX_ELEM[i].FSPX_Range_STD_B0;
			pst_fspxpack->element[i].Reserved_1 = st_FSPXpack.EQ4_FSPX_ELEM[i].Reserved_1;
			pst_fspxpack->element[i].Reserved_2 = st_FSPXpack.EQ4_FSPX_ELEM[i].Reserved_2;
			pst_fspxpack->element[i].Reserved_3 = st_FSPXpack.EQ4_FSPX_ELEM[i].Reserved_3;
			i_fspx_num++;
#if HWA_LOG
			printf("EQ4_FSPX idx %d， Prob %.2f ，Angle %.2f ，range %.2f ，valid %d \n", i,
				pst_fspxpack->element[i].FSPX_Existence_Prob_B0, pst_fspxpack->element[i].FSPX_Azimuth_Angle_B0,
				pst_fspxpack->element[i].FSPX_Range_B0, pst_fspxpack->element[i].FSPX_Is_Valid);
#endif
		}
	}
	pst_fspxpack->header.Num_Of_Obstacles = i_fspx_num;
	return;
}

/******************************************************************************/
/**
* @brief ReceiveINTP_HWA
* @details 接收interest points函数
* @param [in] pack: EQ输出interest points信息。
* @param [out] pst_intppack: 内部interest points接口
* @return 无
*/
/******************************************************************************/
AVoid ReceiveINTP_HWA(HWA_INTP_Pack* pst_intp_pack,
	const EQ4_LAP_BUS* pack) {
	AInt i = 0;
	AInt8U i_intp_num = 0;
	AInt8U i_LAP_INTP_Count = 0;
	EQ4_LAP_BUS st_INTPpack = *pack;
	memset(pst_intp_pack, 0x00, sizeof(HWA_INTP_Pack));
	if (st_INTPpack.EQ4_APPINFO.APP_SyncTsValid) {
		pst_intp_pack->timestamp_ms = (AInt32U)(st_INTPpack.EQ4_APPINFO.APP_SyncTs *0.001);
	}
	pst_intp_pack->LAP_Exit_Merge_Available= pack->EQ4_LAP_HDR.LAP_Exit_Merge_Available;
	pst_intp_pack->LAP_INTP_Available = pack->EQ4_LAP_HDR.LAP_INTP_Available;
	pst_intp_pack->LAP_Is_Construction_Area = pack->EQ4_LAP_HDR.LAP_Is_Construction_Area;
	pst_intp_pack->LAP_Is_Highway_Exit_Left = pack->EQ4_LAP_HDR.LAP_Is_Highway_Exit_Left;
	pst_intp_pack->LAP_Is_Highway_Exit_Right = pack->EQ4_LAP_HDR.LAP_Is_Highway_Exit_Right;
	pst_intp_pack->LAP_Is_Highway_Merge_Left = pack->EQ4_LAP_HDR.LAP_Is_Highway_Merge_Left;
	pst_intp_pack->LAP_Is_Highway_Merge_Right = pack->EQ4_LAP_HDR.LAP_Is_Highway_Merge_Right;
	i_LAP_INTP_Count = pack->EQ4_LAP_HDR.LAP_INTP_Count;
	for (i = 0; i < i_LAP_INTP_Count; i++)
	{
		if (pst_intp_pack->intp[i].LAP_INTP_Confidence > 0.5 || (pst_intp_pack->intp[i].LAP_INTP_Is_Valid == 1)) {
			pst_intp_pack->intp[i].LAP_INTP_ID = st_INTPpack.EQ4_LAP_ELEM[i].LAP_INTP_ID;
			pst_intp_pack->intp[i].LAP_INTP_Distance_Age = st_INTPpack.EQ4_LAP_ELEM[i].LAP_INTP_Distance_Age;
			pst_intp_pack->intp[i].LAP_INTP_Confidence = st_INTPpack.EQ4_LAP_ELEM[i].LAP_INTP_Confidence;
			pst_intp_pack->intp[i].LAP_INTP_Is_Valid = st_INTPpack.EQ4_LAP_ELEM[i].LAP_INTP_Is_Valid;
			pst_intp_pack->intp[i].LAP_INTP_Type = st_INTPpack.EQ4_LAP_ELEM[i].LAP_INTP_Type;
			pst_intp_pack->intp[i].LAP_INTP_Is_Start = st_INTPpack.EQ4_LAP_ELEM[i].LAP_INTP_Is_Start;
			pst_intp_pack->intp[i].LAP_INTP_Lat_Distance = st_INTPpack.EQ4_LAP_ELEM[i].LAP_INTP_Lat_Distance;
			pst_intp_pack->intp[i].LAP_INTP_Long_Distance = st_INTPpack.EQ4_LAP_ELEM[i].LAP_INTP_Long_Distance;

			i_intp_num++;
#if HWA_LOG
			printf("EQ4_INTP idx %d， Conf %.2f ，ID %d，disAge %d ，valid %d type %d, isStart %d,lat %.2f, long %.2f\n", i,
				pst_intp_pack->intp[i].LAP_INTP_Confidence, pst_intp_pack->intp[i].LAP_INTP_ID,
				pst_intp_pack->intp[i].LAP_INTP_Distance_Age, pst_intp_pack->intp[i].LAP_INTP_Is_Valid,
				pst_intp_pack->intp[i].LAP_INTP_Type, pst_intp_pack->intp[i].LAP_INTP_Is_Start,
				pst_intp_pack->intp[i].LAP_INTP_Lat_Distance, pst_intp_pack->intp[i].LAP_INTP_Long_Distance);
#endif
		}
	}
	pst_intp_pack->nNum = i_intp_num;
	return;
}
/******************************************************************************/
/**
* @brief ReceiveEgo_HWA
* @details 接收本车运动信息
* @param [in] axvRefMs2: 加速度。
* @param [in] vxvRefMs: 车速。
* @param [in] axvRoadSlopeMs2: 道路加速度。
* @param [in] axRefMs2: CAN加速度。
* @param [in] axRefDt: 加速度率。
* @param [in] psiDtOpt: 横摆角速率。
* @param [in] ayvRefMs2: 横向加速度。
* @param [in] alpSideSlipAngle: 侧滑角。
* @param [in] kapTraj: 当前道路曲率。
* @param [in] SteerAngleOffset_deg: 轮角偏移。
* @param [out] egopack: 内部本车信息接口
* @return 运行结果：转化后的类型值
*/
/******************************************************************************/
AVoid ReceiveEgo_HWA(HWAEgoPack *egopack, 
	AFloat *axvRefMs2, 
	AFloat *vxvRefMs,
	AFloat *axvRoadSlopeMs2,
	AFloat *axRefMs2,
	AFloat *axRefDt,
	AFloat *psiDtOpt,
	AFloat *ayvRefMs2,
	AFloat *alpSideSlipAngle,
	AFloat *kapTraj,
	AFloat *SteerAngleOffset_deg)
{
	memset(egopack, 0x00, sizeof(HWAEgoPack));
	egopack->Acc_x = *axvRefMs2;
	egopack->Vel = *vxvRefMs;
	egopack->RAcc_x = *axvRoadSlopeMs2;
	egopack->CANAcc_x = *axRefMs2;
	egopack->Acc_rate = *axRefDt;
	egopack->Yawrate = *psiDtOpt;
	egopack->Acc_y = *ayvRefMs2;
	egopack->SideSlipAngle = *alpSideSlipAngle;
	egopack->Road_curve = *kapTraj;
	egopack->SteerAngleOffset_deg = *SteerAngleOffset_deg;
	return;
}

/******************************************************************************/
/**
* @brief ReceiveTime_HWA
* @details 接收系统时间
* @param [in] SysCurrTimeMs: 系统时间。
* @param [out] timepack: 内部时间接口
* @return 运行结果：转化后的类型值
*/
/******************************************************************************/
AVoid ReceiveTime_HWA(HWATimePack * timepack, AInt32U * SysCurrTimeMs, 
	StbM_TimeStampExtendedType* IM_timeStamp,
	StbM_UserDataType* IM_userData,
	Std_ReturnType* IM_ReturnVal)
{
	
	memset(timepack, 0x00, sizeof(HWATimePack));
	if (0)//(*IM_ReturnVal== RTE_E_OK) ||(IM_timeStamp->timeBaseStatus==0x08))
	{
		timepack->hwacurTime = (AInt64U)((IM_timeStamp->seconds + IM_timeStamp->nanoseconds*(1e-9))*(1e3));/*ms*/
	}
	else
	{
		timepack->hwacurTime = *SysCurrTimeMs;
	}

	return;
}
/******************************************************************************/
/**
* @brief LaneTypeConvert
* @details 车道线类型的转化
* @param [in] i_lanemark_Type: EQ4摄像头类型lanemark_Type。
* @param [in] i_LA_DLM_Type: EQ4摄像头类型DLM_Typ
* @return 运行结果：转化后的类型值
*/
/******************************************************************************/
static 
AInt8U LaneTypeConvert(AInt8U i_lanemark_Type, AInt8U i_LA_DLM_Type)
{
	AInt8U i_ret_linetype = 0;

	if (( i_lanemark_Type < 3 ) && (i_lanemark_Type >=0 ))
	{
		i_ret_linetype = i_lanemark_Type;
	}
	else if ( i_lanemark_Type == 3 )
	{
		if (( i_LA_DLM_Type <= 4 ) && ( i_LA_DLM_Type >= 1 ))
		{
			i_ret_linetype = i_lanemark_Type + i_LA_DLM_Type - 1;
		}
	}
	else if (( i_lanemark_Type >= 4 ) && ( i_lanemark_Type <= 8 ))
	{
		i_ret_linetype = 3 + i_lanemark_Type;
	}
	else 
	{
		i_ret_linetype = 0;
	}
	return i_ret_linetype;
}
/******************************************************************************/
/**
* @brief LRETypeConvert
* @details 边界线类型的转化
* @param [in] i_Lre_Type: EQ4摄像头类型LRE_Type。
* @return 运行结果：转化后的类型值
*/
/******************************************************************************/
static 
AInt8U LRETypeConvert(AInt8U i_Lre_Type)
{
	AInt8U i_ret_type = 0;

	switch (i_Lre_Type)
	{
	case 0:
		i_ret_type = CAM_LINE_UNDECIDED;
		break;
	case 1:
		i_ret_type = CAM_LINE_UNDECIDED;
		break;
	case 2:
		i_ret_type = CAM_LINE_ELEVATED_STRUCTURE;
		break;
	case 3:
		i_ret_type = CAM_LINE_CURB;
		break;
	case 4:
		i_ret_type = CAM_LINE_CONES_POLES;
		break;
	case 5:
		i_ret_type = CAM_PARKED_CARS;
		break;
	default:
		break;
	}
	return i_ret_type;
}