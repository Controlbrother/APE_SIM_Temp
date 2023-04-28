/*
 * PubIfDecisionLSM_MDL_types.h
 *
 * Code generation for model "PubIfDecisionLSM_MDL".
 *
 * Model version              : 1.1192
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:28 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfDecisionLSM_MDL_types_h_
#define RTW_HEADER_PubIfDecisionLSM_MDL_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_EQ4_APPINFO_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_APPINFO_BUS_

typedef struct {
  uint32_T APP_SyncTs;
  uint8_T APP_SyncTsValid;
  uint8_T APP_E2EStatus;
} EQ4_APPINFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LAP_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LAP_HDR_BUS_

typedef struct {
  uint8_T LAP_Zero_byte;
  uint8_T LAP_Protocol_Version;
  uint8_T LAP_Sync_ID;
  uint8_T LAP_Is_Construction_Area;
  uint8_T LAP_Buffer_C0;
  uint8_T LAP_INTP_Available;
  uint8_T LAP_INTP_Count;
  uint8_T LAP_Exit_Merge_Available;
  uint8_T LAP_Is_Highway_Merge_Left;
  uint8_T LAP_Is_Highway_Merge_Right;
  uint8_T LAP_Is_Highway_Exit_Left;
  uint8_T LAP_Is_Highway_Exit_Right;
  uint8_T LAP_Vertical_Surface_Available;
  real32_T LAP_Vertical_Surface_VR_End;
  uint8_T Reserved_1;
  real32_T LAP_Vertical_Surface_C0;
  real32_T LAP_Vertical_Surface_C1;
  real32_T LAP_Vertical_Surface_C2;
  real32_T LAP_Vertical_Surface_C3;
  uint32_T LAP_Path_Pred_CRC;
  uint8_T LAP_Path_Pred_Available;
  uint8_T LAP_Path_Pred_First_Valid;
  uint8_T LAP_Path_Pred_Second_Valid;
  real32_T LAP_Path_Pred_Half_Width;
  real32_T LAP_Path_Pred_Conf;
  uint8_T LAP_Is_Triggered_SDM_Model;
  uint8_T Reserved_2;
  real32_T LAP_Path_Pred_First_VR_End;
  real32_T LAP_Path_Pred_second_VR_End;
  uint8_T Reserved_3;
  real32_T LAP_Path_Pred_First_C0;
  real32_T LAP_Path_Pred_First_C1;
  real32_T LAP_Path_Pred_First_C2;
  real32_T LAP_Path_Pred_First_C3;
  real32_T LAP_Path_Pred_Second_C0;
  real32_T LAP_Path_Pred_Second_C1;
  real32_T LAP_Path_Pred_Second_C2;
  real32_T LAP_Path_Pred_Second_C3;
} EQ4_LAP_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LAP_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LAP_ELEM_BUS_

typedef struct {
  uint8_T LAP_INTP_ID;
  uint8_T LAP_INTP_Distance_Age;
  real32_T LAP_INTP_Confidence;
  uint8_T LAP_INTP_Is_Valid;
  uint8_T LAP_INTP_Type;
  uint8_T LAP_INTP_Is_Start;
  uint8_T Reserved_4;
  real32_T LAP_INTP_Lat_Distance;
  real32_T LAP_INTP_Long_Distance;
  uint8_T Reserved_5;
  uint8_T LAP_Buffer_C1;
  uint8_T LAP_Buffer_C2;
  uint8_T Reserved_6;
} EQ4_LAP_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LAP_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LAP_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_LAP_HDR_BUS EQ4_LAP_HDR;
  EQ4_LAP_ELEM_BUS EQ4_LAP_ELEM[8];
} EQ4_LAP_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LH_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LH_HDR_BUS_

typedef struct {
  uint8_T LH_Zero_byte;
  uint8_T LH_Protocol_Version;
  uint8_T LH_Sync_ID;
  uint8_T LH_Lanes_Count;
  uint8_T Reserved_1;
  real32_T LH_Estimated_Width;
  uint8_T Reserved_2;
} EQ4_LH_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LH_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LH_ELEM_BUS_

typedef struct {
  uint32_T LH_CRC;
  uint8_T LH_Is_Triggered_SDM_Type;
  uint8_T LH_Is_Triggered_SDM_Model;
  uint8_T LH_Track_ID;
  uint8_T LH_Age;
  real32_T LH_Confidence;
  uint8_T Reserved_3;
  uint8_T LH_Prediction_Reason;
  uint8_T LH_Availability_State;
  uint8_T LH_Color;
  real32_T LH_Color_Confidence;
  uint8_T LH_Lanemark_Type;
  uint8_T LH_DLM_Type;
  uint8_T LH_DECEL_Type;
  uint8_T Reserved_4;
  real32_T LH_Lanemark_Type_Conf;
  uint8_T LH_Side;
  uint8_T LH_Crossing;
  real32_T LH_Marker_Width;
  real32_T LH_Marker_Width_STD;
  uint8_T Reserved_5;
  real32_T LH_Dash_Average_Length;
  real32_T LH_Dash_Average_Gap;
  uint8_T LH_Is_Multi_Clothoid;
  uint8_T Reserved_6;
  real32_T LH_Line_First_C0;
  real32_T LH_Line_First_C1;
  real32_T LH_Line_First_C2;
  real32_T LH_Line_First_C3;
  real32_T LH_First_VR_Start;
  real32_T LH_First_VR_End;
  uint8_T Reserved_7;
  real32_T LH_First_Measured_VR_End;
  real32_T LH_Second_Measured_VR_End;
  uint8_T Reserved_8;
  real32_T LH_Line_Second_C0;
  real32_T LH_Line_Second_C1;
  real32_T LH_Line_Second_C2;
  real32_T LH_Line_Second_C3;
  real32_T LH_Second_VR_Start;
  real32_T LH_Second_VR_End;
  uint8_T LH_Buffer_C3;
} EQ4_LH_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LH_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LH_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_LH_HDR_BUS EQ4_LH_HDR;
  EQ4_LH_ELEM_BUS EQ4_LH_ELEM[2];
} EQ4_LH_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LA_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LA_HDR_BUS_

typedef struct {
  uint8_T LA_Zero_byte;
  uint8_T LA_Protocol_Version;
  uint8_T LA_Sync_ID;
  uint8_T LA_Adjacent_Count;
  uint8_T Reserved_1;
} EQ4_LA_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LA_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LA_ELEM_BUS_

typedef struct {
  uint8_T LA_Lane_Track_ID;
  uint8_T LA_Age;
  real32_T LA_Confidence;
  uint8_T LA_Color;
  real32_T LA_Color_Conf;
  uint8_T LA_Prediction_Reason;
  uint8_T LA_Availability_State;
  real32_T LA_View_Range_Start;
  uint8_T Reserved_2;
  real32_T LA_View_Range_End;
  real32_T LA_Measured_VR_End;
  uint8_T Reserved_3;
  uint8_T LA_Lanemark_Type;
  uint8_T LA_DLM_Type;
  real32_T LA_Lanemark_Type_Conf;
  uint8_T LA_Line_Side;
  real32_T LA_Marker_Width;
  uint8_T Reserved_4;
  real32_T LA_Marker_Width_STD;
  uint8_T Reserved_5;
  real32_T LA_Line_C3;
  real32_T LA_Line_C2;
  real32_T LA_Line_C1;
  real32_T LA_Line_C0;
  uint8_T LH_Buffer_C1;
  uint8_T Reserved_6;
} EQ4_LA_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LA_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LA_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_LA_HDR_BUS EQ4_LA_HDR;
  EQ4_LA_ELEM_BUS EQ4_LA_ELEM[4];
} EQ4_LA_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LRE_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LRE_HDR_BUS_

typedef struct {
  uint8_T LRE_Zero_byte;
  uint8_T Reserved_1;
  uint32_T LRE_CRC;
  uint8_T LRE_Protocol_Version;
  uint8_T LRE_Sync_ID;
  uint8_T LRE_Count;
  uint8_T LRE_Header_Buffer;
} EQ4_LRE_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LRE_ELEM_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LRE_ELEM_BUS_

typedef struct {
  uint8_T LRE_ID;
  uint8_T LRE_Age;
  real32_T LRE_Confidence;
  uint8_T LRE_Type;
  uint8_T Reserved_2;
  uint8_T LRE_Prediction_Reason;
  uint8_T LRE_Availability_State;
  real32_T LRE_Height;
  real32_T LRE_Height_STD;
  uint8_T Reserved_3;
  real32_T LRE_View_Range_Start;
  real32_T LRE_View_Range_End;
  uint8_T Reserved_4;
  real32_T LRE_Measured_VR_End;
  uint8_T LRE_Side;
  uint8_T LRE_Is_Triggered_SDM_Model;
  uint8_T Reserved_5;
  real32_T LRE_Line_C3;
  real32_T LRE_Line_C2;
  real32_T LRE_Line_C1;
  real32_T LRE_Line_C0;
  uint8_T LRE_Detection_Source;
  uint8_T Reserved_6;
} EQ4_LRE_ELEM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_LRE_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_LRE_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_LRE_HDR_BUS EQ4_LRE_HDR;
  EQ4_LRE_ELEM_BUS EQ4_LRE_ELEM[2];
} EQ4_LRE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_P0_TARGET_LINE_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_P0_TARGET_LINE_BUS_

typedef struct {
  boolean_T OTL_Valid;
  real32_T OTL_C3;
  real32_T OTL_C2;
  real32_T OTL_C1;
  real32_T OTL_C0;
  real32_T OTL_Range;
  uint8_T OTL_Cnt;
} TOS_P0_TARGET_LINE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VSM_HMI_BUS_
#define DEFINED_TYPEDEF_FOR_VSM_HMI_BUS_

typedef struct {
  uint8_T TJASts;
  uint8_T HWASts;
  boolean_T HWAActive;
  uint8_T ACC_HazActv;
  uint8_T ACC_ModeDisp;
  boolean_T ACC_ParkShiftReq;
  uint8_T TJA_ModeDisp;
  uint8_T HWA_ModeDisp;
  boolean_T HWASlowRetreat_b;
  uint8_T CruiseChauffeur_ModeDisp;
  uint8_T ACCTextDisp;
  uint8_T TJATextDisp;
  uint8_T CCTextDisp;
  uint8_T HWATextDisp;
  uint8_T LCKSts;
  uint8_T HandsOffWarningLevel;
  uint8_T LDWSts;
  uint8_T LKASts;
  uint8_T LKAWarning;
  uint8_T ELKSts;
  real32_T LCKIEDist;
  boolean_T ACC_ISLResp;
  uint8_T ISL_InterSysInfoDisp;
  uint8_T ISLActive;
  boolean_T EPBTakeOver_Req;
  boolean_T ALC_Resp;
  uint8_T HWA_SnvtySet_Resp;
  boolean_T HWA_Resp;
  boolean_T ICA_HandsOffSwtResp;
  uint8_T TJA_ACC_SelSts;
  uint8_T HWA_LaneChangeReq;
  uint8_T HWA_Warning;
  boolean_T HandsOffDetd;
  uint8_T LSS_WarnFormSwtResp;
  uint8_T DriverInloop_Monitor;
  boolean_T ACC_SOS_Req;
  uint8_T LaneAvailability;
  uint8_T TJA_FollowSts;
  uint8_T ESSSts;
  uint8_T AESSts;
  uint8_T LCKIESts;
  uint8_T HWA_TurnLightReq;
  uint8_T ACC_DrvrOffDisp;
  uint8_T NOH_Sts;
  boolean_T NOH_Swt_Resp;
  boolean_T NOH_Act_Resp;
  uint8_T NOH_SysInfoDisplay;
  uint16_T NOH_DistToExit;
  uint8_T HiPilotModeSelect;
  uint8_T HWA_LaneChange;
} VSM_HMI_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PLAN_ALC_DECS_BUS_
#define DEFINED_TYPEDEF_FOR_PLAN_ALC_DECS_BUS_

typedef struct {
  uint8_T PLAN_ALC_sts;
  uint8_T PLAN_ALC_LcDecsLe;
  uint8_T PLAN_ALC_LcDecsRi;
  uint8_T PLAN_ALC_TurnLightReq;
  uint8_T PLAN_ALC_stsReason;
  uint8_T PLAN_ALC_LcReason;
  uint16_T PLAN_ALC_LcFeReason;
  uint16_T PLAN_ALC_LcCancelReason;
  uint32_T PLAN_ALC_DangerObjIndex;
} PLAN_ALC_DECS_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_ROAD_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_ROAD_BUS_

typedef struct {
  uint8_T nLaneID;
  uint8_T nLaneNum;
  real32_T dCurrentLaneWidth;
  real32_T dLeftLaneWidth;
  real32_T dRightLaneWidth;
  uint8_T bCurrentLaneFree;
  real32_T fCurrentLaneFreeDis;
  uint8_T bLeftLaneFree;
  real32_T fLeftLaneFreeDis;
  uint8_T bRightLaneFree;
  real32_T fRighLaneFreeDis;
  uint8_T b_toll;
  real32_T f_toll_distance;
  uint8_T b_tunnel;
  real32_T f_tunnel_distance;
  uint8_T b_bridge;
  real32_T f_bridge_distance;
  uint8_T b_traffic_jam;
  real32_T f_distance_to_jam;
  uint8_T b_traffic_accident;
  real32_T f_distance_to_accident;
  uint8_T en_weather;
  uint8_T i_mapvalid;
  uint8_T i_on_nav_path;
  real32_T i_road_curvature;
  real32_T i_road_curvature_far;
  uint16_T i_road_curvature_far_distance;
  real32_T i_road_curvature_value_matrix[10];
  uint16_T i_road_curvature_distance_matrix[10];
  uint8_T i_road_curvature_matrix_size;
} RFM_ROAD_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_LANE_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_LANE_BUS_

typedef struct {
  uint8_T b_is_avalible;
  uint8_T en_lane_type;
  uint8_T i_speed_max;
  real32_T f_spd_change_dis;
  uint8_T i_change_spd_max;
  real32_T f_width;
  uint8_T b_vanish_valid;
  real32_T f_vanish_pt_dis;
} RFM_LANE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_INTERSEC_ALERT_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_INTERSEC_ALERT_BUS_

typedef struct {
  uint8_T b_is_available;
  real32_T f_start_distance;
  real32_T f_end_distance;
  uint8_T en_direction;
  uint8_T en_type;
} RFM_INTERSEC_ALERT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_BRANCH_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_BRANCH_BUS_

typedef struct {
  uint8_T b_available;
  real32_T f_turning_angle;
  uint8_T en_RoadClass;
} RFM_BRANCH_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_REC_LANES_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_REC_LANES_BUS_

typedef struct {
  uint8_T i_rec_lanes_num;
  uint8_T i_rec_lanes[8];
} RFM_REC_LANES_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_LINE_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_LINE_BUS_

typedef struct {
  uint8_T bIsLineExist;
  real32_T dC0V;
  real32_T dC1V;
  real32_T dC2V;
  real32_T dC3V;
  real32_T dLaneWidth;
  uint8_T eLineType;
  real32_T dDisStart;
  real32_T dDisFront;
  real32_T dQuality;
  uint8_T eColour;
  uint8_T eFuType;
  uint8_T nTrackAge;
} RFM_LINE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_TSR_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_TSR_BUS_

typedef struct {
  uint8_T FUSSts;
  uint32_T RFframe_count;
  uint16_T CtryType;
  uint8_T RoadType;
  uint8_T SPL_TypeCurRoad;
  uint8_T SPL_ValueCurRoad;
  uint16_T VehToTrafEyeDist;
  uint8_T SPL_Unit;
  uint8_T SPL_End;
  uint8_T SPL_noSupp_Value;
  uint8_T SPL_whSupp_Value;
  uint8_T SPL_Sup1_SignName;
  real32_T SPL_Sup1_Confidence;
  uint8_T SPL_Sup2_SignName;
  real32_T SPL_Sup2_Confidence;
  uint8_T SPL_noSupp_LongDistance;
  uint8_T SPL_whSupp_LongDistance;
  uint8_T SPL_LeftLaneValue;
  uint8_T SPL_RightLaneValue;
  uint8_T TSR_ID;
  uint8_T TS_SignName;
  real32_T TS_Confidence;
  uint8_T TS_LongDistance;
  uint8_T VehInLeftmostLane;
  uint8_T VehInRightmostLane;
  uint8_T SPL_LaneChanged;
  uint32_T TSR_Sign_Long_Distance;
  real32_T TSR_Sign_Lateral_Distance;
} RFM_TSR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_NOT_ODD_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_NOT_ODD_BUS_

typedef struct {
  real32_T f_start_dis;
  real32_T f_end_dis;
  uint64_T i_type;
} RFM_NOT_ODD_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RFM_ODD_BUS_
#define DEFINED_TYPEDEF_FOR_RFM_ODD_BUS_

typedef struct {
  uint8_T b_is_in_notODD;
  uint64_T i_type;
  uint8_T i_count;
  RFM_NOT_ODD_BUS st_not_odd_vec[5];
} RFM_ODD_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LSM_TJA_ICA_BUS_
#define DEFINED_TYPEDEF_FOR_LSM_TJA_ICA_BUS_

typedef struct {
  boolean_T TJALineValid;
  real32_T TJALineC3;
  real32_T TJALineC2;
  real32_T TJALineC1;
  real32_T TJALineC0;
  real32_T TJARange;
} LSM_TJA_ICA_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LSM_LCK_BUS_
#define DEFINED_TYPEDEF_FOR_LSM_LCK_BUS_

typedef struct {
  boolean_T LCKLineValid;
  real32_T LCKLineC3;
  real32_T LCKLineC2;
  real32_T LCKLineC1;
  real32_T LCKLineC0;
  real32_T LCKRange;
} LSM_LCK_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LSM_HWA_BUS_
#define DEFINED_TYPEDEF_FOR_LSM_HWA_BUS_

typedef struct {
  boolean_T HWALineValid;
  real32_T HWALineC3;
  real32_T HWALineC2;
  real32_T HWALineC1;
  real32_T HWALineC0;
  real32_T HWARange;
  boolean_T HWALeLineValid;
  real32_T HWALeLineC3;
  real32_T HWALeLineC2;
  real32_T HWALeLineC1;
  real32_T HWALeLineC0;
  real32_T HWALeRange;
  boolean_T HWARiLineValid;
  real32_T HWARiLineC3;
  real32_T HWARiLineC2;
  real32_T HWARiLineC1;
  real32_T HWARiLineC0;
  real32_T HWARiRange;
  boolean_T SingleLineLost_b;
  boolean_T DoubleLineLost_b;
  real32_T preDyDiff;
  real32_T HeadAngDiff;
  boolean_T MLeLane;
  real32_T RoadWidth;
  boolean_T LeLineCrossing;
  boolean_T RiLineCrossing;
  uint8_T MRiLane;
  uint8_T MrcStopLane;
  boolean_T LeLineVirtual_b;
  boolean_T RiLineVirtual_b;
  boolean_T LeLineLcAvailable;
  boolean_T RiLineLcAvailable;
} LSM_HWA_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LSM_ESS_BUS_
#define DEFINED_TYPEDEF_FOR_LSM_ESS_BUS_

typedef struct {
  boolean_T ESSLineValid;
  real32_T ESSLineC3;
  real32_T ESSLineC2;
  real32_T ESSLineC1;
  real32_T ESSLineC0;
  real32_T ESSRange;
  boolean_T ESSLeLineValid;
  real32_T ESSLeLineC3;
  real32_T ESSLeLineC2;
  real32_T ESSLeLineC1;
  real32_T ESSLeLineC0;
  real32_T ESSLeRange;
  boolean_T ESSRiLineValid;
  real32_T ESSRiLineC3;
  real32_T ESSRiLineC2;
  real32_T ESSRiLineC1;
  real32_T ESSRiLineC0;
  real32_T ESSRiRange;
} LSM_ESS_BUS;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PubIfDecisionLSM_MDL_T RT_MODEL_PubIfDecisionLSM_MDL_T;

#endif                            /* RTW_HEADER_PubIfDecisionLSM_MDL_types_h_ */
