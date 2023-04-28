/*
 * PubIfControlLONC_MDL_types.h
 *
 * Code generation for model "PubIfControlLONC_MDL".
 *
 * Model version              : 3.55
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:11 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfControlLONC_MDL_types_h_
#define RTW_HEADER_PubIfControlLONC_MDL_types_h_
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

#ifndef DEFINED_TYPEDEF_FOR_VCAN_DCT_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_DCT_MSG_BUS_

typedef struct {
  boolean_T TargetGearValid;
  boolean_T SHIFT_IN_PROGRESS;
  boolean_T CurrentGearValid;
  uint8_T TARGET_GEAR;
  boolean_T ShiftInPrgValid;
  uint8_T TGS_LEVER;
  uint8_T CURRENT_GEAR;
  real32_T RatAct;
  uint8_T DrvFaiMsg;
} VCAN_DCT_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCAN_ECM_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_ECM_MSG_BUS_

typedef struct {
  real32_T NetEngTrq;
  real32_T DrvEngTrqReq;
  boolean_T DrvEngTrqReqVld;
  uint8_T HCU_Start_StopSts;
  uint8_T HCU_PowertrainSts_P0;
  real32_T EngTrqMinAct;
  real32_T EngTrqMaxActSpd;
  real32_T TrqLoss;
  boolean_T TrqLossVldty;
  uint8_T BrkPedalSts;
  uint8_T Start_StopSts;
  real32_T EngSpd;
  uint8_T EngSpdVldty;
  boolean_T AccPedalOverride;
  real32_T AccelPedlPosnDiagc;
  boolean_T ECMACCInterface;
  boolean_T ECMRespACC;
  uint8_T EngFail;
  real32_T AccelPedalPosn;
  uint8_T AccelPedalPosnVldty;
  uint8_T EngState;
  uint8_T EngState_PHEV;
  uint16_T MaxEngTrqNorm;
  boolean_T EngLimpHomeSts;
  real32_T EngSpd_ECM1;
  uint8_T EngSpdVldty_ECM1;
} VCAN_ECM_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCAN_HCU_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_HCU_MSG_BUS_

typedef struct {
  real32_T HCU_AccelPedalPosn_Diag;
  boolean_T HCU_BrkPedalStsValid;
  boolean_T HCU_AccelPedalPosn_DiagValid;
  uint8_T HCU_BrkPedalSts;
  int16_T ActWheelTrqDmd;
  int16_T MaxPsblWheelTrq;
  int16_T TotWheelTrq;
  boolean_T HCU_ACCInterface;
  int16_T MinPsblWheelTrq;
  uint8_T HCU_PowertrainSts;
  uint8_T ACU_ShiftInProgress;
  uint8_T HCU_PTDrvMod;
  uint8_T HCU_DrvMod;
  uint8_T DrvTrqReqOvld;
  uint8_T HCU_FltLvl;
  uint8_T HCU_GearSts;
} VCAN_HCU_MSG_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_LONC_CTRL_OUT_BUS_
#define DEFINED_TYPEDEF_FOR_LONC_CTRL_OUT_BUS_

typedef struct {
  real32_T Longctrl_EngTrqReq;
  boolean_T Longctrl_EngTrqReqActive;
  boolean_T Longctrl_Decel_Req;
  real32_T Longctrl_Decel_ReqValue;
} LONC_CTRL_OUT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LONC_Hybrid_CTRL_OUT_BUS_
#define DEFINED_TYPEDEF_FOR_LONC_Hybrid_CTRL_OUT_BUS_

typedef struct {
  real32_T Longctrl_HCUTrqReq;
  boolean_T Longctrl_HCUTrqReqActive;
} LONC_Hybrid_CTRL_OUT_BUS;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_PubIfControlLONC_MDL_T RT_MODEL_PubIfControlLONC_MDL_T;

#endif                            /* RTW_HEADER_PubIfControlLONC_MDL_types_h_ */
