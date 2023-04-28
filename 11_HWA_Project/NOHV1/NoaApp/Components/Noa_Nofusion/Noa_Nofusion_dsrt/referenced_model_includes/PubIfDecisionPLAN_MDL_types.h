/*
 * PubIfDecisionPLAN_MDL_types.h
 *
 * Code generation for model "PubIfDecisionPLAN_MDL".
 *
 * Model version              : 1.99
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:00 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfDecisionPLAN_MDL_types_h_
#define RTW_HEADER_PubIfDecisionPLAN_MDL_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
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

#ifndef DEFINED_TYPEDEF_FOR_TOS_LC_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_LC_BUS_

typedef struct {
  uint8_T Object_Fus_Type[11];
  uint8_T Object_ID[11];
  uint8_T Object_Type[11];
  real32_T Object_Length[11];
  real32_T Object_Width[11];
  real32_T Object_Hight[11];
  real32_T Object_HeadingAngle[11];
  real32_T Object_YawAngle[11];
  uint8_T Object_MovingState[11];
  uint8_T Object_Orientation[11];
  real32_T Object_DX[11];
  real32_T Object_DY[11];
  real32_T Object_VX[11];
  real32_T Object_VY[11];
  real32_T Object_Std_AX[11];
  real32_T Object_Std_AY[11];
  real32_T Object_Std_DX[11];
  real32_T Object_Std_DY[11];
  real32_T Object_Std_VX[11];
  real32_T Object_Std_VY[11];
  real32_T Object_AX[11];
  real32_T Object_AY[11];
  real32_T Object_Std_Length[11];
  real32_T Object_Std_Width[11];
  real32_T Object_Std_HeadingAngle[11];
  real32_T Object_Type_Prob[11];
  real32_T Object_ExistProb[11];
  real32_T Object_ObstacleProb[11];
  real32_T Object_Age[11];
  real32_T CurrentLane_Prob[11];
  real32_T LeftLane_Prob[11];
  real32_T RightLane_Prob[11];
  uint8_T ObjectIn_Lane[11];
} TOS_LC_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_VCAN_ESP_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_ESP_MSG_BUS_

typedef struct {
  boolean_T IsDrvReqFxBrakeDom;
  uint8_T DrvReqFxBrkDomAvail;
  boolean_T IsDrvPressBrkPedal;
  uint8_T DrvPressBrkPedalAvl;
  boolean_T L12mainVMCavailiable;
  boolean_T L12VLCADactive;
  boolean_T ESP_DiagActv;
  boolean_T BrkDskOvrheatd;
  boolean_T NoBrkForce;
  uint8_T VehStandstill;
  boolean_T AEBIBActv;
  boolean_T AEBBAActv;
  boolean_T AEBAvailable;
  boolean_T ABPAvailable;
  boolean_T ABPActv;
  boolean_T ABAavailable;
  boolean_T ABAactv;
  uint8_T HDCCtrl;
  boolean_T CDDActv;
  boolean_T CDDAvailable;
  boolean_T AWBAvailable;
  boolean_T AWBActv;
  uint8_T AVHSts;
  boolean_T CDPActv;
  uint8_T DrivingModDis;
  boolean_T PTCActv_RA;
  boolean_T BTCActv_RA;
  boolean_T ESPFuncOffSts;
  boolean_T ESPBrkLmpCtrl;
  boolean_T ESPFailSts;
  boolean_T ESP_MasterCylBrkPressVld;
  boolean_T VDCActv;
  boolean_T MSRActv;
  boolean_T PTCActv;
  boolean_T BTCActv;
  real32_T ESP_MasterCylBrkPress;
  boolean_T MSRActv_RA;
  boolean_T VehSpdVld;
  boolean_T EBDFailSts;
  boolean_T ABSFailSts;
  real32_T VehSpd;
  boolean_T ABSActv;
  boolean_T FLWheelSpdVld;
  uint8_T FLWheelDriveDirection;
  real32_T FLWheelSpd;
  boolean_T FRWheelSpdVld;
  uint8_T FRWheelDriveDirection;
  real32_T FRWheelSpd;
  uint8_T WssFLEdgesSum;
  uint8_T WssFREdgesSum;
  boolean_T WssFREdgesSumVld;
  boolean_T WssFLEdgesSumVld;
  boolean_T EPB_SwtPosnVld;
  uint8_T EPBErrSts;
  uint8_T EPBSts;
  uint8_T EPB_SwtPosn;
  uint8_T ESP_DSTSts;
  boolean_T RLWheelSpdVld;
  uint8_T RLWheelDriveDirection;
  real32_T RLWheelSpd;
  boolean_T RRWheelSpdVld;
  uint8_T RRWheelDriveDirection;
  real32_T RRWheelSpd;
  uint8_T WssRREdgesSum;
  uint8_T WssRLEdgesSum;
  boolean_T WssRREdgesSumVld;
  boolean_T WssRLEdgesSumVld;
  uint8_T LSMGearRequest;
  uint8_T VLC_ESP_State;
  boolean_T VLC_ESP_FuelCutOffPrevention;
  uint8_T L3mainVMCavailiable;
  boolean_T L3VLCADactive;
  boolean_T ParkPawlRequest;
  real32_T VLC_IntTartAccel;
} VCAN_ESP_MSG_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_VSM_UOM_LC_BUS_
#define DEFINED_TYPEDEF_FOR_VSM_UOM_LC_BUS_

typedef struct {
  boolean_T User_LeTurnLmpOn;
  boolean_T User_RiTurnLmpOn;
  boolean_T User_LC_LeTurnNextLineReq;
  boolean_T User_LC_RiTurnNextLineReq;
  boolean_T User_LC_TurnMostLeLineReq;
  boolean_T User_LC_TurnMostRiLineReq;
  uint8_T User_LC_ALCswt;
  boolean_T User_LC_DrvConfirm;
  uint8_T User_LC_DrvOverride;
  uint8_T User_LC_DrvLCswt;
} VSM_UOM_LC_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_PLAN_ACCPLAN_BUS_
#define DEFINED_TYPEDEF_FOR_PLAN_ACCPLAN_BUS_

typedef struct {
  real32_T ACC_axvCvAim;
  real32_T ACC_axv_ComfortBandLowerValue;
  real32_T ACC_axv_ComfortBandUpperValue;
  real32_T ACC_DecelerateJerk;
  real32_T ACC_AccelerateJerk;
  boolean_T ACC_BrakePrefer;
} PLAN_ACCPLAN_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_PLAN_DPC_ALC_BUS_
#define DEFINED_TYPEDEF_FOR_PLAN_DPC_ALC_BUS_

typedef struct {
  real32_T PLAN_DPC_HWA_DangerPlaus_L;
  real32_T PLAN_DPC_HWA_DangerPlaus_R;
  boolean_T PLAN_DPC_HWA_OncomingFlag_Le;
  boolean_T PLAN_DPC_HWA_OncomingFlag_Ri;
  boolean_T PLAN_DPC_HWA_NearestObjValid_L;
  boolean_T PLAN_DPC_HWA_NearestObjValid_R;
  real32_T PLAN_DPC_HWA_NearestObjDx_L;
  real32_T PLAN_DPC_HWA_NearestObjDx_R;
  real32_T PLAN_DPC_HWA_NearestObjSpeed_L;
  real32_T PLAN_DPC_HWA_NearestObjSpeed_R;
  boolean_T PLAN_DPC_HWA_RearObjValid;
  real32_T PLAN_DPC_HWA_RearObjDx;
  real32_T PLAN_DPC_HWA_RearObjSpeed;
} PLAN_DPC_ALC_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_PLAN_DPC_ESS_BUS_
#define DEFINED_TYPEDEF_FOR_PLAN_DPC_ESS_BUS_

typedef struct {
  real32_T PLAN_DPC_ESS_DangerPlaus_L;
  real32_T PLAN_DPC_ESS_DangerPlaus_R;
  boolean_T PLAN_DPC_ESS_L_Oncoming_flag;
  boolean_T PLAN_DPC_ESS_R_Oncoming_flag;
} PLAN_DPC_ESS_BUS;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PubIfDecisionPLAN_MDL_T RT_MODEL_PubIfDecisionPLAN_MDL_T;

#endif                           /* RTW_HEADER_PubIfDecisionPLAN_MDL_types_h_ */
