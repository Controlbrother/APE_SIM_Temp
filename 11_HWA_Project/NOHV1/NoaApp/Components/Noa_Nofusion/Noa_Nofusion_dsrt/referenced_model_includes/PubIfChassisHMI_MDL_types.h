/*
 * PubIfChassisHMI_MDL_types.h
 *
 * Code generation for model "PubIfChassisHMI_MDL".
 *
 * Model version              : 3.97
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:19 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfChassisHMI_MDL_types_h_
#define RTW_HEADER_PubIfChassisHMI_MDL_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_VSM_LON_CTRL_BUS_
#define DEFINED_TYPEDEF_FOR_VSM_LON_CTRL_BUS_

typedef struct {
  uint8_T ACCSts;
  uint8_T ACC_SpdSetValue;
  real32_T ACC_SpdSetValueKmh;
  uint8_T ACC_TimeGapSet;
  boolean_T vSetBelowMin;
  uint8_T HWAAccControlSts;
  boolean_T ACC_DrvOffReq;
  uint8_T ACC_TimeGapSet_HMI;
} VSM_LON_CTRL_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_VCAN_HUT_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_HUT_MSG_BUS_

typedef struct {
  uint8_T ADAS_Meta_MapProvider;
  uint8_T ADAS_Meta_MsgTyp;
  uint16_T ADAS_Meta_CountryCode;
  uint8_T ADAS_Meta_ProtVer_MinorSub;
  uint8_T ADAS_Meta_ProtVer_Major;
  uint8_T ADAS_Meta_CycCnt;
  uint16_T ADAS_Meta_HwVer;
  boolean_T ADAS_Meta_DrvSide;
  uint16_T ADAS_Meta_RegionCode;
  uint8_T ADAS_Meta_MapVerYear;
  uint8_T ADAS_Meta_MapVerQtr;
  uint8_T ADAS_Meta_ProtVer_Minor;
  boolean_T ADAS_Meta_SpdUnits;
  uint8_T ADAS_ProfLong_MsgTyp;
  uint16_T ADAS_ProfLong_Offset;
  uint8_T ADAS_ProfLong_PathIdx;
  uint8_T ADAS_ProfLong_CycCnt;
  boolean_T ADAS_ProfLong_Update;
  boolean_T ADAS_ProfLong_Retr;
  boolean_T ADAS_ProfLong_CtrlPoint;
  uint8_T ADAS_ProfLong_ProfTyp;
  uint32_T ADAS_ProfLong_Value;
  uint8_T ADAS_ProfShort_MsgTyp;
  uint16_T ADAS_ProfShort_Offset;
  uint8_T ADAS_ProfShort_PathIdx;
  uint8_T ADAS_ProfShort_CycCnt;
  boolean_T ADAS_ProfShort_Update;
  boolean_T ADAS_ProfShort_Retr;
  boolean_T ADAS_ProfShort_CtrlPoint;
  uint8_T ADAS_ProfShort_ProfTyp;
  uint8_T ADAS_ProfShort_AccurClass;
  uint16_T ADAS_ProfShort_Dist1;
  uint16_T ADAS_ProfShort_Value0;
  uint16_T ADAS_ProfShort_Value1;
  uint8_T ADAS_Seg_MsgTyp;
  uint16_T ADAS_Seg_Offset;
  uint8_T ADAS_Seg_PathIdx;
  uint8_T ADAS_Seg_CycCnt;
  boolean_T ADAS_Seg_Update;
  boolean_T ADAS_Seg_Retr;
  uint8_T ADAS_Seg_BuildUpArea;
  uint8_T ADAS_Seg_Brdg;
  uint8_T ADAS_Seg_Tunnel;
  uint8_T ADAS_Seg_FuncRoadClass;
  real32_T ADAS_Seg_RelProbb;
  uint8_T ADAS_Seg_FormOfWay;
  uint8_T ADAS_Seg_CmplxInsct;
  uint8_T ADAS_Seg_PartOfCalcRoute;
  uint8_T ADAS_Seg_EffSpdLmtTyp;
  uint8_T ADAS_Seg_EffSpdLmt;
  uint8_T ADAS_Seg_NumOfLaneDrvDir;
  uint8_T ADAS_Seg_NumOfLaneOppDir;
  uint8_T ADAS_Seg_DivideRoad;
  uint8_T ADAS_Stub_MsgTyp;
  uint16_T ADAS_Stub_Offset;
  uint8_T ADAS_Stub_PathIdx;
  uint8_T ADAS_Stub_CycCnt;
  boolean_T ADAS_Stub_Update;
  boolean_T ADAS_Stub_Retr;
  uint8_T ADAS_Stub_StubPathIdx;
  uint8_T ADAS_Stub_FuncRoadClass;
  real32_T ADAS_Stub_RelProbb;
  uint8_T ADAS_Stub_FormOfWay;
  uint8_T ADAS_Stub_CmplxInsct;
  uint8_T ADAS_Stub_PartOfCalcRoute;
  real32_T ADAS_Stub_TurnAngl;
  uint8_T ADAS_Stub_NumOfLaneDrvDir;
  uint8_T ADAS_Stub_NumOfLaneOppDir;
  uint8_T ADAS_Stub_RtOfWay;
  boolean_T ADAS_Stub_LastStub;
  uint8_T Time_Hour;
  boolean_T TimeMod;
  boolean_T TimeIndcn;
  uint8_T Time_Minutes;
  uint8_T Time_Second;
  uint8_T Time_Year_Right;
  uint8_T Time_Year_Left;
  uint8_T Time_Month;
  uint8_T Time_Day;
  uint8_T IFC_SnvtySet;
  uint8_T FCW_SnvtySet;
  boolean_T LDWSwtReq;
  boolean_T ESS_VehSwtReq;
  boolean_T ESS_PedSwtReq;
  boolean_T ELKSwtReq;
  boolean_T LCKSwtReq;
  boolean_T LKASwtReq;
  boolean_T AEB_VehSwtReq;
  uint8_T LSSWarnFormSwtReq;
  boolean_T TSRWarnSwtReq;
  boolean_T TSRSwtReq;
  boolean_T AEB_PedSwtReq;
  boolean_T LSSSwtReq;
  boolean_T IntelligentEvaSwtReq;
  int8_T TSR_SnvtySet;
  boolean_T ISLSwtReq;
  boolean_T ICA_HandsOffSwtReq;
  uint16_T NavVehToTrafEyeDist;
  uint8_T NavSpdLimUnit_HUT;
  uint8_T NavSpdLimValue;
  boolean_T HWA_SwtReq;
  uint8_T NavSpdLimSignSts;
  uint16_T NavCtryType;
  uint8_T NavTSRTrafSign;
  boolean_T ALC_SwtReq;
  boolean_T AESSwtReq;
  boolean_T AEB_JASwtReq;
  uint8_T HWA_SnvtySet;
  uint8_T NavSpdLimType;
  uint8_T NavRoadType;
  uint8_T ADAS_Posn_MsgTye;
  uint16_T ADAS_Posn_Offset;
  uint8_T ADAS_Posn_Pathldx;
  uint8_T ADAS_Posn_CycCnt;
  real32_T ADAS_Posn_PosProbb;
  uint8_T ADAS_Posn_Idx;
  uint16_T ADAS_Posn_Age;
  uint8_T ADAS_Posn_CurLane;
  uint8_T ADAS_Posn_PosConfdc;
  real32_T ADAS_Posn_Spd;
  real32_T ADAS_Posn_Rehead;
  boolean_T NOH_Act_Req;
  boolean_T NOH_Swt_Req;
} VCAN_HUT_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DMON_SENS_ERR_BUS_
#define DEFINED_TYPEDEF_FOR_DMON_SENS_ERR_BUS_

typedef struct {
  uint8_T FCam_CalibrationSts;
  uint8_T FCam_BlockageSts;
} DMON_SENS_ERR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PLAN_HMI_BUS_
#define DEFINED_TYPEDEF_FOR_PLAN_HMI_BUS_

typedef struct {
  boolean_T tor;
  uint8_T ACC_TgtObjBarDisp;
  uint8_T ACC_LeTgtObjBarDisp;
  uint8_T ACC_RiTgtObjBarDisp;
  boolean_T IntelligentCurveActive;
} PLAN_HMI_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_ACCP0_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_ACCP0_BUS_

typedef struct {
  uint8_T IDP0;
  real32_T dxP0;
  real32_T vxRelP0;
  real32_T ACCTgtObjVy;
  real32_T axAbsGroundP0;
  real32_T rangeP0;
  boolean_T targetExistP0;
  uint8_T fu_typeP0;
  uint8_T ObjMovingStateP0;
  uint8_T Object_Orientation;
  uint8_T ObjTypeP0;
  real32_T ObjDYP0;
  real32_T ACCTgtObjObstcl;
  real32_T ACCTgtObjAy;
  real32_T ACCTgtObjCntAlive;
  real32_T ACCTgtObjExist;
  real32_T P0HeadingAngle;
  boolean_T P0CutInflg;
} TOS_ACCP0_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_ACCP1_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_ACCP1_BUS_

typedef struct {
  uint8_T IDP1;
  real32_T dxP1;
  real32_T vxRelP1;
  real32_T axAbsGroundP1;
  real32_T rangeP1;
  boolean_T targetExistP1;
  uint8_T fu_typeP1;
  uint8_T ObjMovingStateP1;
  uint8_T ObjTypeP1;
  real32_T ObjDYP1;
  real32_T P1HeadingAngle;
} TOS_ACCP1_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_ACCP2_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_ACCP2_BUS_

typedef struct {
  uint8_T IDP2;
  real32_T dxP2;
  real32_T vxRelP2;
  real32_T axAbsGroundP2;
  real32_T rangeP2;
  boolean_T targetExistP2;
  uint8_T fu_typeP2;
  uint8_T ObjMovingStateP2;
  uint8_T ObjTypeP2;
  real32_T ObjDYP2;
  real32_T P2CutinProb;
  real32_T P2HeadingAngle;
} TOS_ACCP2_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_ACCP3_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_ACCP3_BUS_

typedef struct {
  uint8_T IDP3;
  real32_T dxP3;
  real32_T vxRelP3;
  real32_T axAbsGroundP3;
  real32_T rangeP3;
  boolean_T targetExistP3;
  uint8_T fu_typeP3;
  uint8_T ObjMovingStateP3;
  uint8_T ObjTypeP3;
  real32_T ObjDYP3;
  real32_T P3CutinProb;
  real32_T P3HeadingAngle;
} TOS_ACCP3_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_ACCP4_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_ACCP4_BUS_

typedef struct {
  real32_T dyP4;
  real32_T dxP4;
  uint8_T ObjTypeP4;
  boolean_T targetExistP4;
} TOS_ACCP4_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_ACCP5_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_ACCP5_BUS_

typedef struct {
  real32_T dyP5;
  real32_T dxP5;
  uint8_T ObjTypeP5;
  boolean_T targetExistP5;
} TOS_ACCP5_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_EHRV2_ROAD_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_EHRV2_ROAD_INFO_BUS_

typedef struct {
  uint8_T i_func_road_class;
  uint8_T i_form_of_way;
  uint8_T i_spd_lmt_type;
  uint8_T i_spd_lmt;
  uint8_T i_lane_num_cur_drv;
  uint8_T i_lane_num_cur_opp;
  uint16_T i_electronic_eye_distance;
  uint8_T i_electronic_eye_speed_limit;
  real32_T i_road_curvature;
  real32_T i_road_curvature_far;
  uint16_T i_road_curvature_far_distance;
  real32_T i_road_slope;
  real32_T i_road_slope_far;
  real32_T i_road_curvature_value_matrix[10];
  real32_T i_road_curvature_distance_matrix[10];
  uint8_T i_road_curvature_matrix_size;
  real32_T i_road_slope_value_matrix[10];
  real32_T i_road_slope_distance_matrix[10];
  uint8_T i_road_slope_matrix_size;
  uint16_T i_multi_way_intersection_distance;
} EHRV2_ROAD_INFO_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_EHRV2_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EHRV2_HDR_BUS_

typedef struct {
  uint8_T MapDataValid;
  uint32_T ErrorCode;
} EHRV2_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_BRK_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_BRK_INFO_BUS_

typedef struct {
  boolean_T AEB_ABP_Req;
  boolean_T AEB_ABA_Req;
  uint8_T AEB_ABA_Level;
  boolean_T AEB_AWB_Req;
  uint8_T AEB_AWB_Level;
  boolean_T AEB_TgtDecel_Req;
  real32_T AEB_TgtDecel_ReqValue;
  uint8_T AEB_BrkReqFunc;
  boolean_T EBA_TgtDecel_Req;
  boolean_T AEB_VehHldReq;
} AEB_BRK_INFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_IPHUT_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_IPHUT_INFO_BUS_

typedef struct {
  boolean_T AEB_VehResp;
  boolean_T AEB_PedResp;
  boolean_T AEB_JA_Resp;
  uint8_T FCW_Snvty;
  uint8_T FCW_AEB_VehFctSts;
  uint8_T FCW_AEB_PedFctSts;
  uint8_T AEB_JAFuncSts;
  boolean_T AEB_VehTrig;
  boolean_T AEB_PedTrig;
  uint8_T AEB_JABrkTrig;
  uint8_T FCW_Warn;
  uint8_T AEB_JA_Warn;
  uint8_T AEB_ObjSty;
  uint8_T AEB_LePedDetn;
  uint8_T AEB_LePedTyp;
  real32_T AEB_LePedHeading;
  real32_T AEB_LePedDx;
  real32_T AEB_LePedDy;
  boolean_T AEB_LePed_collisionprob;
  uint8_T AEB_RiPedDetn;
  uint8_T AEB_RiPedTyp;
  real32_T AEB_RiPedHeading;
  real32_T AEB_RiPedDx;
  real32_T AEB_RiPedDy;
  boolean_T AEB_RiPed_collisionprob;
  uint8_T AEB_LeCyclistDetn;
  uint8_T AEB_LeCyclistTyp;
  real32_T AEB_LeCyclistHeading;
  real32_T AEB_LeCyclistDx;
  real32_T AEB_LeCyclistDy;
  boolean_T AEB_LeCyclist_collisionprob;
  uint8_T AEB_RiCyclistDetn;
  uint8_T AEB_RiCyclistTyp;
  real32_T AEB_RiCyclistHeading;
  real32_T AEB_RiCyclistDx;
  real32_T AEB_RiCyclistDy;
  boolean_T AEB_RiCyclist_collisionprob;
  real32_T FCWAEB_longTTC;
  real32_T FCWAEB_crossingTTC;
  real32_T FCWAEB_JATTC;
} AEB_IPHUT_INFO_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_LONC_CTRL_OUT_BUS_
#define DEFINED_TYPEDEF_FOR_LONC_CTRL_OUT_BUS_

typedef struct {
  real32_T Longctrl_EngTrqReq;
  boolean_T Longctrl_EngTrqReqActive;
  boolean_T Longctrl_Decel_Req;
  real32_T Longctrl_Decel_ReqValue;
} LONC_CTRL_OUT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_IFC_FD2_BUS_
#define DEFINED_TYPEDEF_FOR_HMI_IFC_FD2_BUS_

typedef struct {
  uint8_T LSSIntervention;
  uint8_T LSSWarnFormResp;
  boolean_T ELKResp;
  boolean_T LCKResp;
  boolean_T LKAResp;
  boolean_T LDWResp;
  boolean_T IntelligentEvaResp;
  uint8_T LSSFuncSts;
  uint8_T LSSErrSts;
  boolean_T LSSResp;
  uint8_T ELKMainState;
  uint8_T LDW_LKAWarn;
  boolean_T ESS_PedResp;
  boolean_T ESS_VehResp;
  boolean_T AESResp;
  uint8_T LaneAvailability;
  uint8_T LDW_LKA_Snvty;
  uint8_T IFCCalibrationSts;
  boolean_T IFCHUTInterface;
  boolean_T CameraBlockageSts;
  uint8_T TJA_FollowSts;
  uint8_T IFC_LeLaneTyp;
  uint8_T IFC_RiLaneTyp;
  uint8_T IFC_NextLeLaneTyp;
  uint8_T IFC_NextRiLaneTyp;
  real32_T IFC_LaneCurve;
  real32_T IFC_LeLane_dy;
  real32_T IFC_RiLane_dy;
  real32_T IFC_NextLeLane_dy;
  real32_T IFC_NextRiLane_dy;
  uint8_T AESintervention;
  uint8_T ESSintervention;
  uint8_T ELKActSts;
  uint8_T IntelligentEvaActSts;
  uint8_T IFC_Handsoffwarn;
  uint8_T AESSts;
  uint8_T ESSSts;
} HMI_IFC_FD2_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_ACC_FD2_BUS_
#define DEFINED_TYPEDEF_FOR_HMI_ACC_FD2_BUS_

typedef struct {
  uint8_T ACC_ModDisp;
  uint8_T TJA_ICA_ModDisp;
  uint8_T HWA_ModDisp;
  uint8_T ACC_InterSysInfoDisp;
  uint8_T TJA_ICA_InterSysInfoDisp;
  uint8_T HWA_InterSysInfoDisp;
  uint8_T CruCha_ModDisp;
  uint8_T CruChar_InterSysInfoDisp;
  boolean_T ALC_Resp;
  boolean_T HWA_Resp;
  boolean_T ISL_Resp;
  boolean_T ICA_HandsOffResp;
  uint8_T HWA_warning;
  uint8_T ACC_TimeGapSet;
  uint8_T ACC_SpdSetValue;
  uint8_T TJA_ACC_SelSts;
  boolean_T ACC_TakeOverReq;
  uint8_T ACC_FctSts;
  uint8_T ACC_EgoStatus;
  uint8_T Longctrl_HazActv;
  uint8_T ADAS_DriverInloop_Monitor;
  uint8_T HWA_SnvtySet_Resp;
  uint8_T HWA_LaneChangeReq;
  uint8_T HWA_LaneChange;
  boolean_T ACC_ObjDetecte;
  uint8_T ACC_RlvTgtDetn;
  uint8_T ACC_PotentialTgtDetn;
  uint8_T ACC_PotentialTgtTyp;
  real32_T ACC_PotentialTgtDx;
  real32_T ACC_PotentialTgtDy;
  uint8_T ACC_LeTargrtDection;
  uint8_T ACC_LeTgtTyp;
  real32_T ACC_LeTgtDx;
  real32_T ACC_LeTgtDy;
  uint8_T ACC_RiTargrtDetn;
  uint8_T ACC_RiTgtTyp;
  real32_T ACC_RiTgtDx;
  real32_T ACC_RiTgtDy;
  uint8_T ISL_InterSysInfoDisp;
  boolean_T Longctrl_DrvOFF_Req_DVR;
  uint8_T Longctrl_ModSts_DVR;
  uint8_T Longctrl_ParkShiftReq_DVR;
  uint8_T ACC_RlvTgtTyp;
  real32_T ACC_RlvTgtDx;
  real32_T ACC_RlvTgtDy;
  real32_T Longctrl_HCUTrqReq_DVR;
  uint8_T ALC_InterSysInfoDisp;
  uint8_T Request_driveoff;
  boolean_T Longctrl_VehHldReq_DVR;
  boolean_T Longctrl_HCUTrqReqActive_DVR;
  boolean_T IntelligentCurveAct;
  boolean_T ACC_RlvTgtfusion;
  real32_T ACC_RlvTgtHeading;
  boolean_T ACC_LeTgtfusion;
  real32_T ACC_LeTgtHeading;
  boolean_T ACC_RiTgtfusion;
  real32_T ACC_RiTgtHeading;
  boolean_T ACC_PotentialTgtfusion;
  real32_T ACC_PotentialTgtHeading;
  real32_T ACC_LeTgt_02_Dy;
  real32_T ACC_LeTgt_02_Dx;
  uint8_T ACC_LeTgt_02_Typ;
  uint8_T ACC_LeTargrt_02_Detn;
  uint8_T ACC_RiTargrt_02_Detn;
  real32_T ACC_RiTgt_02_Dy;
  real32_T ACC_RiTgt_02_Dx;
  uint8_T ACC_RiTgt_02_Typ;
  uint8_T ACC_TgtObjBarDisp;
  uint8_T ACC_LeTgtObjBarDisp;
  uint8_T ACC_RiTgtObjBarDisp;
} HMI_ACC_FD2_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_ACC_FD4_BUS_
#define DEFINED_TYPEDEF_FOR_HMI_ACC_FD4_BUS_

typedef struct {
  real32_T ACCTgtObjDx;
  real32_T ACCTgtObjDy;
  real32_T ACCTgtObjObstcl;
  real32_T ACCTgtObjExist;
  real32_T ACCTgtObjVy;
  real32_T ACCTgtObjVx;
  real32_T ACCTgtObjAx;
  real32_T ACCTgtObjAy;
  uint8_T ACCTgtObjState;
  boolean_T ACCTgtObjVideoCfmd;
  uint32_T ACCTgtObjCntAlive;
  uint8_T HandsoffDetd;
  uint8_T DrvgOnHiWay;
  real32_T RoadCrvt;
  uint16_T SpdLimitDst;
  real32_T RoadCrvtFar;
  uint16_T RampDst;
  uint8_T SpdLimit;
  uint16_T CurveDst;
  uint8_T NavSpdLimUnit;
  uint16_T TunnelDst;
  uint8_T DrvgOnRiLane;
  uint16_T BrdgDst;
  uint8_T ACC_SOSReq;
  boolean_T MapDataValid;
  uint8_T DrvrSts;
  uint8_T ACCTgtObjID;
} HMI_ACC_FD4_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_ACC_FD1_BUS_
#define DEFINED_TYPEDEF_FOR_HMI_ACC_FD1_BUS_

typedef struct {
  boolean_T Longctrl_DrvOFF_Req;
  uint8_T Longctrl_ModSts;
  uint8_T Longctrl_ParkShiftReq;
  uint8_T ActualTargetSpeed;
  boolean_T Longctrl_VehHldReq;
  boolean_T ACC_CRInterface;
  boolean_T Longctrl_FuelCutOffPrevn;
} HMI_ACC_FD1_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_IFC_FD5_BUS_
#define DEFINED_TYPEDEF_FOR_HMI_IFC_FD5_BUS_

typedef struct {
  real32_T IFC_Line01_Dy;
  real32_T IFC_Line01_Curv;
  real32_T IFC_Line01_CurvChange;
  uint8_T IFC_Line01_Type;
  real32_T IFC_Line02_Dy;
  real32_T IFC_Line02_Curv;
  real32_T IFC_Line02_CurvChange;
  uint8_T IFC_Line02_Type;
  real32_T IFC_Line03_Dy;
  real32_T IFC_Line03_Curv;
  real32_T IFC_Line03_CurvChange;
  uint8_T IFC_Line03_Type;
  real32_T IFC_Line04_Dy;
  real32_T IFC_Line04_Curv;
  real32_T IFC_Line04_CurvChange;
  uint8_T IFC_Line04_Type;
  real32_T IFC_Roadedge01_Dy;
  real32_T IFC_Roadedge01_Curv;
  real32_T IFC_Roadedge01_CurvChange;
  uint8_T IFC_Roadedge01_Type;
  real32_T IFC_Roadedge02_Dy;
  real32_T IFC_Roadedge02_Curv;
  real32_T IFC_Roadedge02_CurvChange;
  uint8_T IFC_Roadedge02_Type;
} HMI_IFC_FD5_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_IFC_FD6_BUS_
#define DEFINED_TYPEDEF_FOR_HMI_IFC_FD6_BUS_

typedef struct {
  real32_T IFC_Line01_HeadingAngle;
  real32_T IFC_Line02_HeadingAngle;
  real32_T IFC_Line03_HeadingAngle;
  real32_T IFC_Line04_HeadingAngle;
  real32_T IFC_Roadedge01_HeadingAngle;
  real32_T IFC_Roadedge02_HeadingAngle;
  real32_T IFC_Line01_DxStart;
  real32_T IFC_Line01_DxEnd;
  real32_T IFC_Line02_DxStart;
  real32_T IFC_Line02_DxEnd;
  real32_T IFC_Line03_DxStart;
  real32_T IFC_Line03_DxEnd;
  real32_T IFC_Line04_DxStart;
  real32_T IFC_Line04_DxEnd;
  real32_T IFC_Roadedge01_DxStart;
  real32_T IFC_Roadedge01_DxEnd;
  real32_T IFC_Roadedge02_DxStart;
  real32_T IFC_Roadedge02_DxEnd;
} HMI_IFC_FD6_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HMI_IFC_FD3_BUS_
#define DEFINED_TYPEDEF_FOR_HMI_IFC_FD3_BUS_

typedef struct {
  boolean_T IDC_L2_EmgyLightReq;
  uint8_T IDC_L2_TurnLightReq;
  uint8_T IDC_L2_FWiperReq;
} HMI_IFC_FD3_BUS;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PubIfChassisHMI_MDL_T RT_MODEL_PubIfChassisHMI_MDL_T;

#endif                             /* RTW_HEADER_PubIfChassisHMI_MDL_types_h_ */
