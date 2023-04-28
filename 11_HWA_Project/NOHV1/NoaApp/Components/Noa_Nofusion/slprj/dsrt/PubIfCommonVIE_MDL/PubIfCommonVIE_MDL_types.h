/*
 * PubIfCommonVIE_MDL_types.h
 *
 * Code generation for model "PubIfCommonVIE_MDL".
 *
 * Model version              : 3.34
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:54 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfCommonVIE_MDL_types_h_
#define RTW_HEADER_PubIfCommonVIE_MDL_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
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

#ifndef DEFINED_TYPEDEF_FOR_VCAN_ABM_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_ABM_MSG_BUS_

typedef struct {
  boolean_T PassSBR;
  boolean_T DrvSBR;
  real32_T VehLgtAccel;
  real32_T VehLatAccel;
  real32_T VehYawRate;
  boolean_T VehDynYawRateVld;
  boolean_T VehLatAccelVld;
  boolean_T VehLgtAccelVld;
} VCAN_ABM_MSG_BUS;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PubIfCommonVIE_MDL_T RT_MODEL_PubIfCommonVIE_MDL_T;

#endif                              /* RTW_HEADER_PubIfCommonVIE_MDL_types_h_ */
