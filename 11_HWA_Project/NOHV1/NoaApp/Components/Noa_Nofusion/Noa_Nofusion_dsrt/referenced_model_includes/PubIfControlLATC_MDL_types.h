/*
 * PubIfControlLATC_MDL_types.h
 *
 * Code generation for model "PubIfControlLATC_MDL".
 *
 * Model version              : 3.732
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:23 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfControlLATC_MDL_types_h_
#define RTW_HEADER_PubIfControlLATC_MDL_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_VSM_LAT_CTRL_BUS_
#define DEFINED_TYPEDEF_FOR_VSM_LAT_CTRL_BUS_

typedef struct {
  boolean_T TarLineValid;
  real32_T TarLineC3;
  real32_T TarLineC2;
  real32_T TarLineC1;
  real32_T TarLineC0;
  real32_T TarLineRange;
  uint8_T TarDangerLevel;
} VSM_LAT_CTRL_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LATC_VCAN_EPS_BUS_
#define DEFINED_TYPEDEF_FOR_LATC_VCAN_EPS_BUS_

typedef struct {
  uint8_T EPS_SteerMod;
  real32_T EPS_DrvInpTrqVal_HighReslolution;
  real32_T EPS_LKATorqOvrlDlvd;
  boolean_T EPS_LKATorqOvrlDlvdVld;
  uint8_T EPS_LKAAngDlvdSts;
  uint8_T EPS_LKATrqOvlDlvdSts;
  uint8_T EPS_FailSts;
} LATC_VCAN_EPS_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LATC_VCAN_CSA_BUS_
#define DEFINED_TYPEDEF_FOR_LATC_VCAN_CSA_BUS_

typedef struct {
  real32_T SteerWheelAng;
  boolean_T SteerWheelAngSign;
  real32_T SteerWheelSpd;
  boolean_T SteerWheelSpdSign;
} LATC_VCAN_CSA_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_VCAN_EPS_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_EPS_MSG_BUS_

typedef struct {
  uint8_T EPS_DSTCtrlSts;
  uint8_T EPS_FailSts;
  boolean_T EPS_TrqSnsrSts;
  uint8_T EPS_SteerMod;
  real32_T EPS_DrvInpTrqVal_HighReslolution;
  real32_T EPS_LKATorqOvrlDlvd;
  uint8_T EPS_LKATrqOvlDlvdSts;
  boolean_T EPS_DrvInpTrqVal_HighResVld;
  boolean_T EPS_LKATorqOvrlDlvdVld;
  boolean_T EPS_SteerWheelAngSign;
  real32_T EPS_SteerWheelAng;
  boolean_T EPS_SteerWheelSpdSign;
  real32_T EPS_SteerWheelSpd;
  uint8_T EPS_AvailStsforHAD;
  boolean_T EPS_SteerWheelAngVld;
  uint8_T EPS_HADerror_Reason;
  uint8_T EPS_HADHndShkRespSt;
  boolean_T EPS_AngCmdOverRange;
  uint8_T EPS_LKAAngDlvdSts;
} VCAN_EPS_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCAN_CSA_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_CSA_MSG_BUS_

typedef struct {
  uint8_T FrntWiprSwtSts;
  uint8_T FrntWshrSwtSts;
  boolean_T LTurnLmpSwtSts;
  boolean_T RTurnLmpSwtSts;
  boolean_T FrntFogLmpSwtSts;
  boolean_T LowBeamSwtSts;
  boolean_T HiBeamSwtSts;
  boolean_T AutoLmpSwtSts;
  boolean_T SteerWheelAngSign;
  real32_T SteerWheelAng;
  boolean_T SteerWheelSpdSign;
  real32_T SteerWheelSpd;
  boolean_T ACC_TimeGap_DecSetSwt;
  boolean_T ACC_TimeGap_IncSetSwt;
  boolean_T CC_ACC_CANCEL_OFFSwt;
  boolean_T CC_ACC_CRUISE_OFFSwt;
  boolean_T CC_ACCSwtErr;
  boolean_T CC_ACC_DecSetSpd_SetSwt;
  boolean_T CC_ACC_IncSetSpd_ResuSwt;
  uint8_T SAS_Sts;
  uint8_T Rollingcounter_CSA2;
  boolean_T HWA_OK_OFFSwt;
} VCAN_CSA_MSG_BUS;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PubIfControlLATC_MDL_T RT_MODEL_PubIfControlLATC_MDL_T;

#endif                            /* RTW_HEADER_PubIfControlLATC_MDL_types_h_ */
