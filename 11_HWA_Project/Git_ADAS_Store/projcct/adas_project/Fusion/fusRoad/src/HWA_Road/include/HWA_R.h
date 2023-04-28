/******************************************************************************/
/**
 * @file: HWA_R.h
 * @brief: 道路融合模块头文件。
 * @version: 3.0
 * @author: 
 * @copyright: Copyright (c) All Rights Reserved
 * @LastEditTime: 2020-08-03
 */
 /******************************************************************************/
#ifndef _HWA_R_H_
#define _HWA_R_H_
/*
********************************************************************************
* Include Files Section
********************************************************************************
*/
// #include "../include/HWAApi/HWAError.h"
// #include "../include/HWAApi/aaMacro.h"
// #include "../include/HWAApi/HWA_Cali.h"
// #include "../include/HWAApi/HWAapi.h"

// #include "../include/HWAPack/HWARoadPack.h"
// #include "../include/HWAMsg/HWARoadLineData.h"
// #include "../include/HWAMsg/HWARoadPtsVLine.h"
#include "HWAError.h"
#include "aaMacro.h"
#include "HWA_Cali.h"
#include "HWAapi.h"

#include "HWARoadPack.h"
#include "HWARoadLineData.h"
#include "HWARoadPtsVLine.h"

/*
********************************************************************************
* Define Section
********************************************************************************
*/

#define LINE_OK(idx)        (ifv->line[idx].hdCamQuality > FLT_EPSILON)
#define LANE_OK(idx1, idx2) (LINE_OK(idx1) && LINE_OK(idx2))
#define LANE_WIDTH_CALCU(idx1, idx2)                                                        \
fabs(ifv->line[idx2].dC0 - ifv->line[idx1].dC0)/(sqrt(1+(ifv->line[idx1].dC1*ifv->line[idx2].dC1)))


#define LINE_QUALITY(idx)        (ifvpack->line[idx].hdCamQuality > DBL_EPSILON)
#define LANE_QUALITY(idx1, idx2) (LINE_QUALITY(idx1) && LINE_QUALITY(idx2))
#define LINE_ERROR(x)    (fabs(x)>20)
/*#define isnan(x)                                                         \
    ( sizeof(x) == sizeof(float)  ? __inline_isnanf((float)(x))          \
    : sizeof(x) == sizeof(double) ? __inline_isnand((double)(x))         \
                                  : __inline_isnanl((long double)(x)))*/
#define LINE_LAT_CALCULATE(f_c0,f_c1,f_c2,f_c3,f_dx)                        \
(f_c0+f_c1*f_dx+f_c2*f_dx*f_dx+f_c3*f_dx*f_dx*f_dx)
/*
********************************************************************************
* Typedef Section
********************************************************************************
*/
typedef AHandler HWA_ROAD_HDLE;

typedef enum _tag_enum_buffer_index {
	PREVIOUS = 0,
	CURRENT,
	BUFFER_SIZE
} BufferINDEX;

typedef enum _tag_NewSPLType {
	SPLType_Unknown = 0,
	SPLType_Traffic_Sign,
	SPLType_Electronic_Eye,
	SPLType_Road_Default
} New_SPL_Type;


typedef enum _tag_TSR_Long_Dis {
	TSR_Long_outofrange = 61,
	TSR_Long_Reserved,
	TSR_Long_Unknown
} TSR_Long_Dis;

typedef enum _tag_NavRoadClass {
	RoadClass_UNKNOWN = 0,
	RoadClass_EXPRESSWAY,
	RoadClass_CITY_EXPRESSWAY,
	RoadClass_NATIONAL_ROAD,
	RoadClass_PROVINCIAL_ROAD,
	RoadClass_COUNTRY_ROAD,
	RoadClass_VILLAGE_ROAD,
	RoadClass_RMAP,
	RoadClass_TUNNEL,
	RoadClass_SIDE_ROAD,
	RoadClass_CHANNEL,
	RoadClass_RESERVED
} NavRoadClass;
/*********************************************************************************
* Lane
*********************************************************************************/


typedef struct _tag_HWA_LaneMsg {
	                  
	AInt8U CLbIsLineExist;               
	AFloat CLdC0V;                    
	AFloat CLdC1V;                    
	AFloat CLdC2V;                    
	AFloat CLdC3V;                    
	AFloat CLdLaneWidth;               
	AInt8U CLenLineType;
	AFloat CLdDisStart;
	AFloat CLdDisFront;               
	AFloat CLdQuality;                  
	AInt8U  CLColour;                   
	AInt8U F_L1bIsLineExist;               
	AFloat F_L1dC0V;                    
	AFloat F_L1dC1V;                    
	AFloat F_L1dC2V;                    
	AFloat F_L1dC3V;                    
	AFloat F_L1dLaneWidth;              
	AInt8U F_L1enLineType;
	AFloat F_L1dDisStart;
	AFloat F_L1dDisFront;               
	AFloat F_L1dQuality;                  
	AInt8U  F_L1Colour;                   
	AInt8U F_R1bIsLineExist;               
	AFloat F_R1dC0V;                    
	AFloat F_R1dC1V;                    
	AFloat F_R1dC2V;                    
	AFloat F_R1dC3V;                    
	AFloat F_R1dLaneWidth;              
	AInt8U F_R1enLineType;
	AFloat F_R1dDisStart;
	AFloat F_R1dDisFront;               
	AFloat F_R1dQuality;                  
	AInt8U  F_R1Colour;                   
	AInt8U F_L2bIsLineExist;                
	AFloat F_L2dC0V;
	AFloat F_L2dC1V;
	AFloat F_L2dC2V;
	AFloat F_L2dC3V;
	AFloat F_L2dLaneWidth;               
	AInt8U F_L2enLineType;
	AFloat F_L2dDisStart;
	AFloat F_L2dDisFront;              
	AFloat F_L2dQuality;                  
	AInt8U  F_L2Colour;                   
	AInt8U F_R2bIsLineExist;               
	AFloat F_R2dC0V;
	AFloat F_R2dC1V;
	AFloat F_R2dC2V;
	AFloat F_R2dC3V;
	AFloat F_R2dLaneWidth;               
	AInt8U F_R2enLineType;
	AFloat F_R2dDisStart;
	AFloat F_R2dDisFront;              
	AFloat F_R2dQuality;                  
	AInt8U  F_R2Colour;                   
	AInt8U F_LBbIsLineExist;                
	AFloat F_LBdC0V;
	AFloat F_LBdC1V;
	AFloat F_LBdC2V;
	AFloat F_LBdC3V;
	AFloat F_LBdLaneWidth;               
	AInt8U F_LBenLineType;
	AFloat F_LBdDisStart;
	AFloat F_LBdDisFront;              
	AFloat F_LBdQuality;                  
	AInt8U  F_LBColour;                   
	AInt8U F_RBbIsLineExist;               
	AFloat F_RBdC0V;
	AFloat F_RBdC1V;
	AFloat F_RBdC2V;
	AFloat F_RBdC3V;
	AFloat F_RBdLaneWidth;               
	AInt8U F_RBenLineType;
	AFloat F_RBdDisStart;
	AFloat F_RBdDisFront;              
	AFloat F_RBdQuality;                  
	AInt8U  F_RBColour;    
	/*cam bdry*/
	AInt8U F_CLBbIsLineExist;
	AFloat F_CLBdC0V;
	AFloat F_CLBdC1V;
	AFloat F_CLBdC2V;
	AFloat F_CLBdC3V;
	AFloat F_CLBdLaneWidth;
	AInt8U F_CLBenLineType;
	AFloat F_CLBdDisStart;
	AFloat F_CLBdDisFront;
	AFloat F_CLBdQuality;
	AInt8U  F_CLBColour;
	AInt8U F_CRBbIsLineExist;
	AFloat F_CRBdC0V;
	AFloat F_CRBdC1V;
	AFloat F_CRBdC2V;
	AFloat F_CRBdC3V;
	AFloat F_CRBdLaneWidth;
	AInt8U F_CRBenLineType;
	AFloat F_CRBdDisStart;
	AFloat F_CRBdDisFront;
	AFloat F_CRBdQuality;
	AInt8U  F_CRBColour;
} HWA_LaneMsg_st;

/*********************************************************************************
* LaneInfo
*********************************************************************************/
typedef struct _tag_HWA_LaneInfo {

	HWALaneModel left_lane;
	HWALaneModel current_lane;
	HWALaneModel right_lane;
	HWALaneModel branch_lane;

} HWA_LaneInfo_st;
/*********************************************************************************
* Road
*********************************************************************************/


typedef enum _tag_RoadObjectMsg {
	ROAD_NORMAL = 0,
	ROAD_INTUNNEL,
	ROAD_BRIDGE 
} RoadObjectMsg;
typedef enum _tag_LaneObjectMsg {
	LANE_NORMAL = 0,
	LANE_MERGE,                                   
	LANE_SPLIT                                    
} LaneIntersecType;
typedef enum _tag_RoadType1 {
	MAIN_ROAD = 0,                 
	RING_ROAD                      
} HighWayType;
typedef struct _tag_HWA_RoadMsg {
	AInt8U			nLaneNum;
	AInt8U			nLaneID;  
	AInt8U			nTempLaneID;  
	AInt8U			nLaneIDAge;  
	AFloat			dCurrentLaneWidth;   
	AFloat			dLeftLaneWidth;   
	AFloat			dRightLaneWidth; 
	AFloat			dRoadSpeedLimit;
	AFloat			dCurveDistance;  
	AFloat			dRoadCurvature;  
	AFloat			dRoadCurvatureFar;
	AFloat			dRoadCurvatureFarmax; 
	AFloat			dRoadGradeFarmax; 

	HighWayType     e_road_type;                     
	AInt8U          FUSSts;                    /*workstatus*/
	AInt32          frame_count;
	AInt8U          CtryType;                   /*hut*/
	AInt8U          RoadType;
	AInt8U          SPL_TypeCurRoad;                   /*hut*/
	AInt8U          SPL_ValueCurRoad;                  /*hut*/
	AInt16U         VehToTrafEyeDist;            /*20200615*/
	AInt8U          SPL_Unit;                  /*hut 0:kmh 1:mph 2:unknown*/
	AInt8U          SPL_End;                 /*0x0:invalid 0x1:SPLend*/
	AInt8U          SPL_End_Cnt;                 /*_Cnt*/
	AInt8U          SPL_noSupp_Value;                 /*0x00-0x96:Valid value | 0xFF:Invalid*/
	AInt8U          SPL_noSupp_Cnt;                 /*_Cnt*/
	AInt8U          SPL_whSupp_Value;                 /*0x00-0x96:Valid value | 0xFF:Invalid*/
	AInt8U          SPL_whSupp_Cnt;                 /*_Cnt*/
	AInt32          SPL_Sup1_SignName;         /*firstadditionaltype*/
	AFloat          SPL_Sup1_Confidence;        /* conf*/
	AInt32          SPL_Sup2_SignName;           /*secondadditionaltype*/
	AFloat          SPL_Sup2_Confidence;        /*confidence*/
	AFloat          SPL_Sup_Cnt;        /*_Cnt*/
	AInt8U          SPL_noSupp_LongDistance;                /*0——254:Valid | 255:Invalid*/
	AInt8U          SPL_whSupp_LongDistance;                /*0——254:Valid | 255:Invalid*/
	AInt8U          SPL_LeftLaneValue;                /*0——254:Valid | 255:Invalid*/
	AInt8U          SPL_Left_Cnt;                /*0——254:Valid | 255:Invalid*/
	AInt8U          SPL_RightLaneValue;                /*0——254:Valid | 255:Invalid*/
	AInt8U          SPL_Right_Cnt;                /*_Cnt*/
	AInt8U          SPL_CurLaneValue;                /*0——254:Valid | 255:Invalid*/
	AInt8U          SPL_Cur_Cnt;               /*_Cnt*/
	AInt32          TSR_ID;                      /*tsr*/  /*signid*/
	AInt8U          TSR_Sign_Name;               /*tsr*/ /*signtype*/
	AInt8U          TSR_Sign_Cnt;               /*_Cnt*/
	AFloat          TS_Confidence;            /*tsr*/ /*signconfidence*/
	AInt8U          TS_LongDistance;                /*0——254:Valid | 255:Invalid*/
	AInt8U          VehInLeftmostLane;                /*0x0:invalid 0x1:valid*/
	AInt8U          VehInRightmostLane;                /*0x0:invalid 0x1:valid*/
	AInt8U          SPL_LaneChanged;                /*0x0:invalid 0x1:left 2：right*/
	AInt8U          SPL_LaneChanged_Cnt;                /*0x0:invalid 0x1:left 2：right*/
	AInt32U         TSR_Sign_Long_Distance;      /*latdis*/
	AFloat          TSR_Sign_Lateral_Distance;   /*londis*/

	AInt32          TSR_Tracking_Age; 
	AInt32          TSR_Hold_Frames;           /*hold frames 20200619*/
	AInt32          SPL_Hold_Frames;           /*hold frames 20200619*/
	ABool           bCurrentLaneFree;            /*freespace valid */
	AFloat      	fCurrentLaneFreeDis;        /*freespace dis */
	ABool           bLeftLaneFree;
	AFloat      	fLeftLaneFreeDis;
	ABool           bRightLaneFree;
	AFloat      	fRightLaneFreeDis;

	AInt8U          i_rec_lanes_num;      /*recommend*/
	AInt8U          i_rec_lanes[8];
	AInt8U          b_branch_available;
	AFloat          f_branch_turning_angle;
	AInt8U          en_branch_RoadClass;
} HWA_RoadMsg_st;


/*#pragma pack()*/
/*********************************************************************************
* HWAResultPack pack
*********************************************************************************/
typedef struct _tag_HWA_IntersectionMsg {   
	AInt8U b_is_available;
	AFloat f_distance;
	AInt8U en_direction;
	AInt8U en_type;
} HWA_IntersecMsg_st;

/*for HMI*/
typedef struct _tag_HWAResult {
	HWA_LaneMsg_st             linemsg;
	HWA_LaneInfo_st            laneinfo;
	HWA_IntersecMsg_st         intersecmsg;
	HWA_RoadMsg_st             roadmsg;
} HWAResult;




/*********************************************************************************
* HWAKernel
*********************************************************************************/
typedef struct _tag_HWAKernel {
	AInt32U             cycles;
	AInt32U             RFM_SWC_Version;
	/* input data var(s) */
	HWATimePack				timepack;
	HWATimePack				pretime;
	HWAEgoPack				vehiclepack;
	HWAIFVPack				preIfv;    /* Previous input data var(s) */
	HWATSRPack				preTsr;    /* Previous input data var(s) */
	/* Output data Var(s) */
	HWA_LaneMsg_st             linemsg[BUFFER_SIZE]; 
	HWA_RoadMsg_st             roadmsg[BUFFER_SIZE]; 
	Bdry_PtsV  buff_pts_left;
	Bdry_PtsV  buff_pts_right;
	Radar_PtsVLine      radarplv; 
	PtsVLine            camplv;                       
	Radar_LineData      radarlines;                 
	LineData            lines[BUFFER_SIZE];
	NOALineData         noa_lines[BUFFER_SIZE];/*new*/
	HWALaneModelAll		drvmsg[BUFFER_SIZE];
	HWA_LaneInfo_st     laneinfo[BUFFER_SIZE];/*new*/
	HWA_IntersecMsg_st  intersecmsg[BUFFER_SIZE];/*new*/
	RoadError           errcode;
	AInt                scene;             /* Application Scene : 0: Highway 1:City */
} HWAKernel;


/*********************************************************************************
* Declaration of API functions section
*********************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif

	/* Call HWACreate funtion only once at the start of main function          */
	AInt HWACreate(                  
		HWA_ROAD_HDLE*           rfhandle,
		HWAKernel *       stic_handle

	); /* Func of Creating Road-Fusion module   */

	/* Call HWARoadKernel funtion only once at the end of main function            */
		/* Loop call afRoadKernel funtion to implement road-fusion                    */
	AInt HWARoadKernel(                  /* Kernel of Road-Fusion module          */
		HWA_ROAD_HDLE             handle,
		HWAIFVPack* campack,
		HWA_SensorInput_st* mrrpack,
		HWAEgoPack *vehiclepack,
		HWATimePack *timepack,
		HWAEHRPack *ehrpack,
		HWATSRPack *tsrpack,
		HWA_FSPXPack* fspxpack,
		HWA_INTP_Pack* intp_pack,
		RFM_Result*           result
	);

	AVoid HWADestroy(                 /* Func of Destroy Road-Fusion module    */
		HWA_ROAD_HDLE             rfhandle
	);
#ifdef __cplusplus
}
#endif

#endif
