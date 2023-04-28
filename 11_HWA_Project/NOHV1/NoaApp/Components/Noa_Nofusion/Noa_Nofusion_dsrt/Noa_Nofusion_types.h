/*
 * Noa_Nofusion_types.h
 *
 * Code generation for model "Noa_Nofusion".
 *
 * Model version              : 1.579
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:18:59 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Noa_Nofusion_types_h_
#define RTW_HEADER_Noa_Nofusion_types_h_
#include "rtwtypes.h"
#include "RFMResult.h"
#include "mcuEQ4.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_CAL_AHBC_CONFIG_BUS_
#define DEFINED_TYPEDEF_FOR_CAL_AHBC_CONFIG_BUS_

typedef struct {
  uint8_T VehConfigADB;
  uint8_T VehConfigHMA;
  uint8_T VehConfigHMA_laser;
} CAL_AHBC_CONFIG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAL_VSM_CONFIG_BUS_
#define DEFINED_TYPEDEF_FOR_CAL_VSM_CONFIG_BUS_

typedef struct {
  uint8_T VehConfigHWA;
  uint8_T VehConfigTJA;
  uint8_T VehConfigLCK;
  uint8_T VehConfigELK;
  uint8_T VehConfigACC;
  uint8_T VehConfigESS;
  uint8_T VehConfigCC;
  uint8_T VehConfigLKA;
  uint8_T VehConfigLDW;
  uint8_T VehConfigLCKIE;
  uint8_T VehConfigiACC;
  uint8_T VehConfigTSR;
  uint8_T VehConfigAES;
} CAL_VSM_CONFIG_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_R_PBOX1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_R_PBOX1_MSG_BUS_

typedef struct {
  boolean_T PosnLmpOutpSts_R_Pbox;
  boolean_T RBrkLmpFailSts;
  boolean_T LBrkLmpFailSts;
  boolean_T HiPosnBrkLmpFailSts;
  boolean_T RFogLmpSts_R_Pbox;
  boolean_T RFogLmpFailSts_R_Pbox;
  boolean_T RTurnLmpSts_R_Pbox;
  boolean_T LTurnLmpSts_R_Pbox;
  uint16_T FreshnessValue_R_PBox1;
} R_PBOX1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_F_PBOX1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_F_PBOX1_MSG_BUS_

typedef struct {
  boolean_T FFogLmpSts_F_Pbox;
  boolean_T LowBeamSts_F_Pbox;
  boolean_T HiBeamSts_F_Pbox;
  boolean_T HoodSts_F_Pbox;
  boolean_T RHeadLmpFailSts;
  boolean_T LHeadLmpFailSts;
} F_PBOX1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PBOX_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_PBOX_NODE_BUS_

typedef struct {
  R_PBOX1_MSG_BUS R_PBOX1_MSG;
  F_PBOX1_MSG_BUS F_PBOX1_MSG;
} PBOX_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HC1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HC1_MSG_BUS_

typedef struct {
  uint8_T CheckSum_HC1;
  boolean_T ALS_FailSts;
  boolean_T RightHighBeamFailSts;
  boolean_T LeftHighBeamFailSts;
  boolean_T RightLowBeamFailSts;
  boolean_T LeftLowBeamFailSts;
  uint8_T ADBstatus;
  boolean_T HighBeamSts_HC;
  uint8_T HBStatusSegment3;
  uint8_T HBStatusSegment2;
  uint8_T HBStatusSegment1;
  uint8_T HBStatusSegment0;
  uint8_T HBStatusSegment7;
  uint8_T HBStatusSegment6;
  uint8_T HBStatusSegment5;
  uint8_T HBStatusSegment4;
  boolean_T ALSDrvSide_FB;
  uint8_T RollingCounter_HC1;
} HC1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HC_NM_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HC_NM_MSG_BUS_

typedef struct {
  uint8_T Destination_HC_NM;
  uint8_T OpCode_HC_NM;
} HC_NM_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HC_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_HC_NODE_BUS_

typedef struct {
  HC1_MSG_BUS HC1_MSG;
  HC_NM_MSG_BUS HC_NM_MSG;
} HC_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AC2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_AC2_MSG_BUS_

typedef struct {
  uint8_T ACFrntBlwrSpd;
  real32_T ACAmbTemp;
} AC2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AC_NEDE_BUS_
#define DEFINED_TYPEDEF_FOR_AC_NEDE_BUS_

typedef struct {
  AC2_MSG_BUS AC2_MSG;
} AC_NEDE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ABM1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_ABM1_MSG_BUS_

typedef struct {
  uint8_T CheckSum_ABM1;
  boolean_T PassSBR;
  boolean_T SecRowRSBR;
  boolean_T DrvSBR;
  boolean_T SecRowMidSBR;
  boolean_T AirbFailLmpCmd;
  boolean_T SecRowLSBR;
  boolean_T PABSwtSts;
  uint8_T CrashOutputSts;
  uint8_T DrvSBR_Visual;
  uint8_T PassSBR_Visual;
  uint8_T SecRowLSBR_Visual;
  uint8_T SecRowMidSBR_Visual;
  uint8_T SecRowRSBR_Visual;
  uint8_T RollingCounter_ABM1;
  uint16_T FreshnessValue_ABM1;
} ABM1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ABM2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_ABM2_MSG_BUS_

typedef struct {
  uint8_T CheckSum_ABM2;
  real32_T VehLgtAccel;
  real32_T VehLatAccel;
  real32_T VehYawRate;
  uint8_T RollingCounter_ABM2;
  boolean_T VehDynYawRateVld;
  boolean_T VehLatAccelVld;
  boolean_T VehLgtAccelVld;
} ABM2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ABM_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_ABM_NODE_BUS_

typedef struct {
  ABM1_MSG_BUS ABM1_MSG;
  ABM2_MSG_BUS ABM2_MSG;
} ABM_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BCM1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_BCM1_MSG_BUS_

typedef struct {
  boolean_T BrkPedalSts_BCM;
  boolean_T WindshldWiprActvSts;
  boolean_T RRDoorSts;
  boolean_T PassengerDoorSts;
  boolean_T LRDoorSts;
  boolean_T DrvDoorSts;
  boolean_T TrunkSts;
  boolean_T BrkPedalFailSts;
  uint8_T ReversGearSts;
  uint8_T ParkBrkSts;
  boolean_T PosnLightReq;
  boolean_T RLSFailSts;
  uint16_T FreshnessValue_BCM1;
} BCM1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BCM10_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_BCM10_MSG_BUS_

typedef struct {
  uint8_T Checksum_BCM10;
  boolean_T LTurnLampWorkCmd;
  boolean_T RTurnLmpWorkCmd;
  boolean_T LowBeamWorkCmd;
  boolean_T HiBeamWorkCmd;
  boolean_T LFFogLmpWorkCmd;
  boolean_T RFFogLmpWorkCmd;
  boolean_T LDayRunngLmpWorkCmd;
  boolean_T RDayRunngLmpWorkCmd;
  boolean_T HornWorkCmd;
  boolean_T FFogLmpAsstSts;
  boolean_T RFogLmpWorkCmd;
  boolean_T BrkLmpWorkCmd;
  boolean_T ReversLampWorkCmd;
  boolean_T LicPlateLmpWorkCmd;
  uint8_T ChildLockProtWorkCmd;
  boolean_T AsstPosnLmpSts;
  boolean_T TrunkLmpWorkCmd;
  boolean_T LHorseRaceLmpWorkCmd;
  boolean_T RHorseRaceLmpWorkCmd;
  boolean_T RCornrLmpWorkCmd;
  boolean_T LCornrLmpWorkCmd;
  boolean_T LasHdLmpWorkCmd;
  uint8_T Rollingcounter_BCM10;
  uint16_T FreshnessValue_BCM10;
} BCM10_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BCM3_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_BCM3_MSG_BUS_

typedef struct {
  boolean_T HazardLmpSwtSts;
  uint8_T BCM_HWPWorkSts;
  uint16_T FreshnessValue_BCM3;
} BCM3_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BCM8_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_BCM8_MSG_BUS_

typedef struct {
  uint8_T Checksum_BCM8;
  boolean_T PASWorkCmd;
  boolean_T RViewMirrorSts;
  uint8_T WiprReq_F_PBOX;
  uint8_T Rollingcounter_BCM8;
  boolean_T KL30BRelaySts;
} BCM8_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BCM_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_BCM_NODE_BUS_

typedef struct {
  BCM1_MSG_BUS BCM1_MSG;
  BCM10_MSG_BUS BCM10_MSG;
  BCM3_MSG_BUS BCM3_MSG;
  BCM8_MSG_BUS BCM8_MSG;
} BCM_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CSA1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_CSA1_MSG_BUS_

typedef struct {
  uint8_T FrntWiprSwtSts;
  uint8_T FrntWshrSwtSts;
  boolean_T LTurnLmpSwtSts;
  boolean_T RTurnLmpSwtSts;
  boolean_T FrntFogLmpSwtSts;
  boolean_T LowBeamSwtSts;
  boolean_T HiBeamSwtSts;
  boolean_T OverVehBeamSwtSts;
  boolean_T AutoHiLowBeamSwtSts;
  boolean_T AutoLmpSwtSts;
} CSA1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CSA2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_CSA2_MSG_BUS_

typedef struct {
  uint8_T Checksum_CSA2;
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
  uint8_T ManualShiftReq;
} CSA2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CSA4_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_CSA4_MSG_BUS_

typedef struct {
  uint8_T CheckSum_CSA4;
  uint8_T HOD_ErrInfo;
  uint8_T HOD_HandOffSts;
  uint8_T RollingCounter_CSA4;
} CSA4_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CSA_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_CSA_NODE_BUS_

typedef struct {
  CSA1_MSG_BUS CSA1_MSG;
  CSA2_MSG_BUS CSA2_MSG;
  CSA4_MSG_BUS CSA4_MSG;
} CSA_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DCT5_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_DCT5_MSG_BUS_

typedef struct {
  uint8_T CheckSum_DCT5;
  boolean_T TargetGearValid;
  boolean_T SHIFT_IN_PROGRESS;
  boolean_T CurrentGearValid;
  uint8_T TARGET_GEAR;
  boolean_T TCU_APS_Available;
  boolean_T ShiftInPrgValid;
  uint8_T TGS_LEVER;
  uint8_T CURRENT_GEAR;
  uint8_T RollingCounter_DCT5;
} DCT5_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DCT_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_DCT_FD1_MSG_BUS_

typedef struct {
  boolean_T TCUResponseHWP;
  boolean_T TmLimpHomeValid;
  real32_T RatAct;
  uint16_T FreshnessValue_DCT_FD1;
} DCT_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DCT_FD4_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_DCT_FD4_MSG_BUS_

typedef struct {
  uint8_T DrvFaiMsg;
  uint16_T FreshnessValue_DCT_FD4;
} DCT_FD4_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DCT_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_DCT_NODE_BUS_

typedef struct {
  DCT5_MSG_BUS DCT5_MSG;
  DCT_FD1_MSG_BUS DCT_FD1_MSG;
  DCT_FD4_MSG_BUS DCT_FD4_MSG;
} DCT_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DMS_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_DMS_FD1_MSG_BUS_

typedef struct {
  uint8_T DistrctnLvlQlty_ACC;
  uint8_T DrowsnsLvlQlty_ACC;
  uint8_T DrowsnsLvl_ACC;
  uint8_T DistrctnLvl_ACC;
  int16_T HeadPosnX;
  int16_T HeadPosnY;
  uint8_T HeadPosQlty;
  int16_T HeadPosnZ;
  int16_T GazePosnX;
  int16_T GazePosnY;
  int16_T GazePosnZ;
  int8_T HeadYawAng;
  int8_T HeadPitchAng;
  int8_T HeadRollAng;
  boolean_T HeadDetn;
  uint8_T HeadRotAngQlty;
  uint8_T DMSSts;
  int8_T RobustGazeYawAng;
  int8_T RobustGazePitchAng;
  uint8_T LEyeOpenStsQlty;
  uint8_T REyeOpenStsQlty;
  uint8_T RobustGazeAngQlty;
  uint8_T REyeOpenSts;
  uint8_T LEyeOpenSts;
} DMS_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DMS_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_DMS_NODE_BUS_

typedef struct {
  DMS_FD1_MSG_BUS DMS_FD1_MSG;
} DMS_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ECM1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_ECM1_MSG_BUS_

typedef struct {
  real32_T EngSpd;
  uint8_T EngSpdVldty;
} ECM1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ECM_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_ECM_FD1_MSG_BUS_

typedef struct {
  uint8_T Checksum_ECM4;
  real32_T NetEngTrq;
  real32_T DrvEngTrqReq;
  uint8_T RollingCounter_ECM4;
  boolean_T DrvEngTrqReqVld;
  uint8_T HCU_Start_StopSts;
  uint8_T HCU_PowertrainSts_P0;
  real32_T EngTrqMinAct;
  real32_T EngTrqMaxActSpd;
  real32_T TrqLoss;
  boolean_T TrqLossVldty;
  uint8_T Checksum_ECM1;
  uint8_T BrkPedalSts;
  uint8_T Start_StopSts;
  real32_T EngSpd;
  uint8_T RollingCounter_ECM1;
  uint8_T EngSpdVldty;
  uint16_T FreshnessValue_ECM_FD1;
} ECM_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ECM_FD2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_ECM_FD2_MSG_BUS_

typedef struct {
  uint8_T Checksum_ECM9;
  boolean_T ECM_interfaceAPS;
  boolean_T AccPedalOverride;
  real32_T AccelPedlPosnDiagc;
  boolean_T ECMACCInterface;
  boolean_T ECMRespACC;
  uint8_T RollingCounter_ECM9;
  uint8_T Checksum_ECM10;
  boolean_T AccPedalOverride_HWP;
  uint8_T EngFail;
  boolean_T ECMHWPinterface;
  uint8_T RollingCounter_ECM10;
  uint8_T Checksum_ECM2;
  real32_T AccelPedalPosn;
  uint8_T AccelPedalPosnVldty;
  uint8_T RollingCounter_ECM2;
  uint8_T EngState;
  uint8_T EngState_PHEV;
  uint16_T FreshnessValue_ECM_FD2;
} ECM_FD2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ECM_FD3_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_ECM_FD3_MSG_BUS_

typedef struct {
  uint16_T MaxEngTrqNorm;
  boolean_T EngLimpHomeSts;
} ECM_FD3_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ECM_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_ECM_NODE_BUS_

typedef struct {
  ECM1_MSG_BUS ECM1_MSG;
  ECM_FD1_MSG_BUS ECM_FD1_MSG;
  ECM_FD2_MSG_BUS ECM_FD2_MSG;
  ECM_FD3_MSG_BUS ECM_FD3_MSG;
} ECM_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ESP_FD2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_ESP_FD2_MSG_BUS_

typedef struct {
  uint8_T CheckSum_ESP_FD2_1;
  uint8_T RollingCounter_ESP_FD2_1;
  boolean_T L12mainVMCavailiable;
  boolean_T L12VLCADactive;
  uint8_T CheckSum_ESP2;
  boolean_T CTABrkAvailable;
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
  uint8_T AVHErrSts;
  uint8_T AVHSts;
  uint8_T DrivingModReq_ESP;
  uint8_T DrivingModDis;
  uint8_T RollingCounter_ESP2;
  uint8_T CheckSum_ESP1;
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
  uint8_T RollingCounter_ESP1;
  uint8_T CheckSum_ESP7;
  boolean_T ESP_MEBBrkAvail;
  uint16_T FourWhlsBrkTrq;
  uint8_T LgtCtrlrFailr;
  uint8_T LgtCtrlrSts;
  real32_T EngTrqReq;
  boolean_T APS_EngTrqReqEna;
  uint8_T RollingCounter_ESP7;
  uint8_T LgtCtrlrAvail;
  uint8_T CheckSum_ABS3;
  boolean_T VehSpdVld;
  boolean_T EBDFailSts;
  boolean_T ABSFailSts;
  real32_T VehSpd;
  boolean_T ABSActv;
  boolean_T EBDActv;
  uint8_T RollingCounter_ABS3;
  uint16_T FreshnessValue_ESP_FD2;
} ESP_FD2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ESP_FD3_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_ESP_FD3_MSG_BUS_

typedef struct {
  uint8_T CheckSum_ABS1;
  boolean_T FLWheelSpdVld;
  uint8_T FLWheelDriveDirection;
  real32_T FLWheelSpd;
  boolean_T FRWheelSpdVld;
  uint8_T FRWheelDriveDirection;
  real32_T FRWheelSpd;
  uint8_T WssFLEdgesSum;
  uint8_T WssFREdgesSum;
  uint8_T RollingCounter_ABS1;
  boolean_T WssFREdgesSumVld;
  boolean_T WssFLEdgesSumVld;
  uint8_T CheckSum_EPB1;
  boolean_T EPB_SwtPosnVld;
  uint8_T EPBErrSts;
  uint8_T EPBSts;
  uint8_T EPB_SwtPosn;
  uint8_T RollingCounter_EPB1;
  uint8_T CheckSum_ABS2;
  boolean_T RLWheelSpdVld;
  uint8_T RLWheelDriveDirection;
  real32_T RLWheelSpd;
  boolean_T RRWheelSpdVld;
  uint8_T RRWheelDriveDirection;
  real32_T RRWheelSpd;
  uint8_T WssRREdgesSum;
  uint8_T WssRLEdgesSum;
  uint8_T RollingCounter_ABS2;
  boolean_T WssRREdgesSumVld;
  boolean_T WssRLEdgesSumVld;
  uint8_T CheckSum_ESP_FD3_7;
  boolean_T LSMSubMTReqAvailable;
  uint8_T LSMSubMTReqEcho;
  uint8_T LSMSubMTLongEcho;
  uint8_T LSMSubMTLevelEcho;
  uint8_T LSMPosLongACapbl;
  uint8_T LSMGearRequest;
  uint8_T Lsm23Avl;
  uint8_T Lsm12EmergencyAvl;
  uint8_T Lsm12ComfortAvl;
  uint8_T VLC_ESP_State;
  boolean_T VLC_ESP_FuelCutOffPrevention;
  uint8_T L3mainVMCavailiable;
  boolean_T L3VLCADactive;
  boolean_T ParkPawlRequest;
  uint8_T RollingCounter_ESP_FD3_7;
  uint16_T FreshnessValue_ESP_FD3;
} ESP_FD3_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ESP_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_ESP_NODE_BUS_

typedef struct {
  ESP_FD2_MSG_BUS ESP_FD2_MSG;
  ESP_FD3_MSG_BUS ESP_FD3_MSG;
} ESP_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EPS_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_EPS_FD1_MSG_BUS_

typedef struct {
  uint8_T CheckSum_EPS1;
  uint8_T EPS_FailSts;
  boolean_T EPS_TrqSnsrSts;
  uint8_T EPS_AvailSts;
  boolean_T EPS_InterferDetdVld;
  boolean_T EPS_InterferDetd;
  uint8_T EPS_SteerMod;
  uint8_T RollingCounter_EPS1;
  uint8_T CheckSum_EPS2;
  real32_T EPS_DrvInpTrqVal_HighReslolution;
  real32_T EPS_LKATorqOvrlDlvd;
  uint8_T RollingCounter_EPS2;
  uint8_T EPS_LKATrqOvlDlvdSts;
  boolean_T EPS_LKATorqOvrlDlvdVld;
  uint8_T CheckSum_EPS3;
  boolean_T EPS_HWPHndShkResp;
  uint8_T ElecPwrSteerCpby;
  boolean_T EPS_SteerWheelAngSign;
  real32_T EPS_SteerWheelAng;
  boolean_T EPS_SteerWheelSpdSign;
  real32_T EPS_SteerWheelSpd;
  uint8_T RollingCounter_EPS3;
  uint16_T FreshnessValue_EPS_FD1;
} EPS_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EPS_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_EPS_NODE_BUS_

typedef struct {
  EPS_FD1_MSG_BUS EPS_FD1_MSG;
} EPS_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HCU_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HCU_FD1_MSG_BUS_

typedef struct {
  uint8_T Checksum_HCU_PT1;
  real32_T HCU_AccelPedalPosn_Diag;
  boolean_T HCU_BrkPedalStsValid;
  boolean_T HCU_AccelPedalPosn_DiagValid;
  uint8_T HCU_BrkPedalSts;
  int16_T ActWheelTrqDmd;
  uint8_T RollingCounter_HCU_PT1;
  uint8_T Checksum_HCU_PT9;
  int16_T MaxPsblWheelTrq;
  int16_T TotWheelTrq;
  boolean_T HCU_ACCInterface;
  int16_T MinPsblWheelTrq;
  uint8_T RollingCounter_HCU_PT9;
  uint8_T HCU_PowertrainSts;
  boolean_T HCU_RespHWP;
  boolean_T HCU_HWPInterface;
  uint8_T ACU_ShiftInProgress;
  uint16_T FreshnessValue_HCU_FD1;
} HCU_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HCU_FD3_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HCU_FD3_MSG_BUS_

typedef struct {
  uint8_T Checksum_HCU_PT5;
  uint8_T HCU_PTDrvMod;
  uint8_T HCU_DrvMod;
  uint8_T DrvTrqReqOvld;
  uint8_T RollingCounter_HCU_PT5;
  uint8_T HCU_GearSts;
  boolean_T HCU_APS_Available;
  uint16_T HCU_VehSpdLimit;
  uint16_T FreshnessValue_HCU_FD3;
} HCU_FD3_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HCU_HP8_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HCU_HP8_MSG_BUS_

typedef struct {
  uint16_T HCU_TrqLimMax_Norm;
} HCU_HP8_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HCU_PT4_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HCU_PT4_MSG_BUS_

typedef struct {
  boolean_T HCU_RdyLmpSts;
} HCU_PT4_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HCU_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_HCU_NODE_BUS_

typedef struct {
  HCU_FD1_MSG_BUS HCU_FD1_MSG;
  HCU_FD3_MSG_BUS HCU_FD3_MSG;
  HCU_HP8_MSG_BUS HCU_HP8_MSG;
  HCU_PT4_MSG_BUS HCU_PT4_MSG;
} HCU_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT15_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT15_MSG_BUS_

typedef struct {
  uint8_T APSPrkgTypSeln;
  boolean_T SDWSwtSet;
  uint8_T APSSwtReq_VR;
} HUT15_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT19_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT19_MSG_BUS_

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
} HUT19_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT20_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT20_MSG_BUS_

typedef struct {
  uint8_T ADAS_ProfLong_MsgTyp;
  uint16_T ADAS_ProfLong_Offset;
  uint8_T ADAS_ProfLong_PathIdx;
  uint8_T ADAS_ProfLong_CycCnt;
  boolean_T ADAS_ProfLong_Update;
  boolean_T ADAS_ProfLong_Retr;
  boolean_T ADAS_ProfLong_CtrlPoint;
  uint8_T ADAS_ProfLong_ProfTyp;
  uint32_T ADAS_ProfLong_Value;
} HUT20_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT21_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT21_MSG_BUS_

typedef struct {
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
} HUT21_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT22_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT22_MSG_BUS_

typedef struct {
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
} HUT22_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT23_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT23_MSG_BUS_

typedef struct {
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
} HUT23_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT32_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT32_MSG_BUS_

typedef struct {
  uint8_T CheckSum_HUT32;
  boolean_T ContnPrkgReqValid;
  boolean_T DetVideoLost;
  boolean_T PrkgCtrlModReqValid;
  boolean_T PrkStraightSwtReq_HUT;
  uint8_T PrkgCtrlModReq;
  uint8_T ContnPrkgReq;
  uint8_T PrkStraightSuspendOrFinishReq_HUT;
  uint16_T XLvl;
  uint16_T YLvl;
  boolean_T PrkStraightVehStrtReq_HUT_Valid;
  boolean_T PrkStraightStrtReq_HUT;
  uint8_T ScrnOpSts;
  boolean_T PrkStraightContinueReq_HUT;
  uint8_T RollingCounter_HUT32;
  boolean_T PrkStraightSts_HUT;
  uint8_T PrkStraightModSel_HUT;
} HUT32_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT33_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT33_MSG_BUS_

typedef struct {
  uint8_T PrkInDirChoice;
  boolean_T PathLrngFinshCmd;
  boolean_T PathLrngStartCmd;
  boolean_T ParkMdlCmd;
  boolean_T BackReq_APS;
  uint8_T SelPrkOutDirReq;
  boolean_T StartPrkgPath2Cmd;
  boolean_T DeletePath2Cmd;
  boolean_T StartPrkgPath1Cmd;
  boolean_T DeletePath1Cmd;
  uint8_T SelPrkgFctnCmd;
} HUT33_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT34_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT34_MSG_BUS_

typedef struct {
  uint8_T Time_Hour;
  boolean_T TimeMod;
  boolean_T TimeIndcn;
  uint8_T Time_Minutes;
  uint8_T Time_Second;
  uint8_T Time_Year_Right;
  uint8_T Time_Year_Left;
  uint8_T Time_Month;
  uint8_T Time_Day;
} HUT34_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT6_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT6_MSG_BUS_

typedef struct {
  boolean_T Guid_Ovl_Display_Cmd;
  uint8_T Sgl_View_Sel;
  boolean_T Radar_DispCmd;
  boolean_T LaneCalActvtCmd;
  boolean_T CarMdlTrsprcySwtCmd;
  boolean_T MdlColrChgCmd;
  boolean_T AutoViewChgCmd;
  boolean_T WshSoftSwt;
  boolean_T AutoAVMSwSet_Cmd;
  boolean_T SwToFieldCalRstCmd;
  boolean_T View_SoftswitchCmd;
  boolean_T FPAS_AutoModSwt;
  boolean_T MEBSwtSet;
  boolean_T MODChgReq;
  boolean_T CarMdlDispCmd;
} HUT6_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT_FD1_MSG_BUS_

typedef struct {
  uint8_T IFC_SnvtySet;
  uint8_T FCW_SnvtySet;
  boolean_T RCWSwtReq;
  boolean_T RCTABrkSwtReq;
  boolean_T RCTASwtReq;
  boolean_T LCASwtReq;
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
  boolean_T DOWSwtReq;
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
  boolean_T FCTABrkSwtReq;
  boolean_T FCTASwtReq;
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
  uint16_T FreshnessValue_HUT_FD1;
} HUT_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT_FD2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT_FD2_MSG_BUS_

typedef struct {
  real32_T HUT_OD_Obj0_Confidence;
  uint8_T HUT_OD_Obj0_ID;
  uint8_T HUT_OD_Obj0_type;
  real32_T HUT_OD_Obj0_width;
  real32_T HUT_OD_Obj0_Ground_Pos_X;
  real32_T HUT_OD_Obj0_Ground_Pos_Y;
  real32_T HUT_OD_Obj1_Confidence;
  uint8_T HTU_OD_Obj1_ID;
  uint8_T HUT_OD_Obj1_type;
  real32_T HUT_OD_Obj1_width;
  real32_T HUT_OD_Obj1_Ground_Pos_X;
  real32_T HUT_OD_Obj1_Ground_Pos_Y;
  real32_T HUT_OD_Obj2_Confidence;
  uint8_T HUT_OD_Obj2_ID;
  uint8_T HUT_OD_Obj2_type;
  real32_T HUT_OD_Obj2_width;
  real32_T HUT_OD_Obj2_Ground_Pos_X;
  real32_T HUT_OD_Obj2_Ground_Pos_Y;
  real32_T HUT_OD_Obj3_Confidence;
  uint8_T HUT_OD_Obj3_ID;
  uint8_T HUT_OD_Obj3_type;
  real32_T HUT_OD_Obj3_width;
  real32_T HUT_OD_Obj3_Ground_Pos_X;
  real32_T HUT_OD_Obj3_Ground_Pos_Y;
  real32_T HUT_OD_Obj4_Confidence;
  uint8_T HUT_OD_Obj4_ID;
  uint8_T HUT_OD_Obj4_type;
  real32_T HUT_OD_Obj4_width;
  real32_T HUT_OD_Obj4_Ground_Pos_X;
  real32_T HUT_OD_Obj4_Ground_Pos_Y;
  real32_T HUT_OD_Obj5_Confidence;
  uint8_T HUT_OD_Obj5_ID;
  uint8_T HUT_OD_Obj5_type;
  real32_T HUT_OD_Obj5_width;
  real32_T HUT_OD_Obj5_Ground_Pos_X;
  real32_T HUT_OD_Obj5_Ground_Pos_Y;
  real32_T HUT_OD_Obj6_Confidence;
  uint8_T HUT_OD_Obj6_ID;
  uint8_T HUT_OD_Obj6_type;
  real32_T HUT_OD_Obj6_width;
  real32_T HUT_OD_Obj6_Ground_Pos_X;
  real32_T HUT_OD_Obj6_Ground_Pos_Y;
} HUT_FD2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT_FD3_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HUT_FD3_MSG_BUS_

typedef struct {
  real32_T HUT_OD_Obj7_Confidence;
  uint8_T HUT_OD_Obj7_ID;
  uint8_T HUT_OD_Obj7_type;
  real32_T HUT_OD_Obj7_width;
  real32_T HUT_OD_Obj7_Ground_Pos_X;
  real32_T HUT_OD_Obj7_Ground_Pos_Y;
  uint16_T HUT_OD_Obj_Timestamp;
  real32_T HUT_FSD1_distance;
  real32_T HUT_FSD2_distance;
  real32_T HUT_FSD4_distance;
  real32_T HUT_FSD3_distance;
  uint8_T HUT_OD_WorkSts;
  real32_T HUT_FSD5_distance;
  real32_T HUT_FSD6_distance;
  real32_T HUT_FSD7_distance;
  real32_T HUT_FSD9_distance;
  real32_T HUT_FSD8_distance;
  real32_T HUT_FSD10_distance;
  real32_T HUT_FSD11_distance;
  real32_T HUT_FSD13_distance;
  real32_T HUT_FSD12_distance;
  real32_T HUT_FSD14_distance;
  real32_T HUT_FSD15_distance;
  real32_T HUT_FSD17_distance;
  real32_T HUT_FSD16_distance;
  real32_T HUT_FSD18_distance;
} HUT_FD3_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HUT_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_HUT_NODE_BUS_

typedef struct {
  HUT15_MSG_BUS HUT15_MSG;
  HUT19_MSG_BUS HUT19_MSG;
  HUT20_MSG_BUS HUT20_MSG;
  HUT21_MSG_BUS HUT21_MSG;
  HUT22_MSG_BUS HUT22_MSG;
  HUT23_MSG_BUS HUT23_MSG;
  HUT32_MSG_BUS HUT32_MSG;
  HUT33_MSG_BUS HUT33_MSG;
  HUT34_MSG_BUS HUT34_MSG;
  HUT6_MSG_BUS HUT6_MSG;
  HUT_FD1_MSG_BUS HUT_FD1_MSG;
  HUT_FD2_MSG_BUS HUT_FD2_MSG;
  HUT_FD3_MSG_BUS HUT_FD3_MSG;
} HUT_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IDC_L3_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_IDC_L3_FD1_MSG_BUS_

typedef struct {
  uint8_T Checksum_IDC_L3_1;
  real32_T HWP_AngCmdReqVal;
  uint16_T HWP_TrqOvlCmdProtnValue;
  real32_T HWP_TrqOvlCmdReqValue;
  uint8_T HWP_FuncTrqCmdReqFlag;
  uint8_T HWP_HapcWarnReq;
  boolean_T HWP_AngCmdReqValVld;
  boolean_T HWP_ReqCtrlEPSVld;
  boolean_T HWP_ReqCtrlEPS;
  uint8_T RollingCounter_IDC_L3_1;
  uint8_T Checksum_IDC_L3_3;
  real32_T HWP_Lgtctrl_EngTrqReq;
  boolean_T HWP_EngTrqReqActvVld;
  boolean_T HWP_ECMOvrdReq;
  boolean_T HWP_Lgtctrl_FuelCutOffReq;
  boolean_T HWP_Lgtctrl_EngTrqReqActv;
  boolean_T HWP_TgtGearReqVld;
  uint8_T HWP_TgtGearReq;
  uint8_T HWP_WorkReq;
  uint8_T HWP_lgt_ModSts;
  boolean_T HWP_Lgtctrl_EngTrqReqVld;
  boolean_T HWP_WorkReqVld;
  uint8_T RollingCounter_IDC_L3_3;
  uint8_T Checksum_IDC_L3_5;
  real32_T HWP_lgt_Decel_ReqValue;
  real32_T HWP_AEB_DecelCtrlReqVal;
  boolean_T HWP_EBA_DecelCtrlReq;
  boolean_T HWP_AEB_ABAReq;
  uint8_T HWP_AEB_ABALvl;
  boolean_T HWP_lgt_DecelToStopReq;
  boolean_T HWP_lgt_Decel_Req;
  boolean_T HWP_lgt_DrvOFF_Req;
  boolean_T HWP_lgt_VehHldReq;
  boolean_T HWP_AEB_ABP_Req;
  uint8_T HWP_AEB_AWB_Lvl;
  boolean_T HWP_AEB_AWB_Req;
  boolean_T HWP_AEB_DecelCtrlReq;
  boolean_T HWP_AEB_VehHldReq;
  boolean_T HWP_EPBCtrlReqVld;
  boolean_T HWP_EPBCtrlReq;
  uint8_T RollingCounter_IDC_L3_5;
  uint8_T Checksum_IDC_L3_4;
  real32_T HWP_Lgt_HCUTrqReq;
  boolean_T HWP_HCUOvrdReq;
  boolean_T HWP_Lgt_HCUTrqReqActvVld;
  boolean_T HWP_Lgt_HCUTrqReqActv;
  boolean_T HWP_Lgt_HCUTrqReqVld;
  uint8_T RollingCounter_IDC_L3_4;
  real32_T HWP_TgtAccel;
  real32_T HWP_UpperLimit;
  real32_T HWP_LowerLimit;
  real32_T HWP_TgtAccelCmftUpprLimVal;
  real32_T HWP_TgtAccelCmftLwrLimVal;
  boolean_T HWP_SuprAvail;
  boolean_T HWP_SecureReq;
  boolean_T HWP_UseTgtAccelCmftUpprLimVal;
  boolean_T HWP_ShutdownReq;
  uint8_T HWP_MotTypeReqLong;
  uint8_T HWP_MotTypeReqMode;
  uint16_T FreshnessValue_IDC_L3_FD1;
} IDC_L3_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IDC_L3_FD2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_IDC_L3_FD2_MSG_BUS_

typedef struct {
  boolean_T HWP_RFogLightReq;
  boolean_T HWP_FFogLightReq;
  boolean_T HWP_HiBeamtReq;
  boolean_T HWP_DippedBeamReq;
  boolean_T HWP_HornReq;
  uint8_T HWP_TurnlLightReq;
  boolean_T HWP_EmgyLightReq;
  boolean_T HWP_RWshrReq;
  uint8_T HWP_FWshrReq;
  uint8_T HWP_RWiperReq;
  uint8_T HWP_FWiperReq;
  boolean_T HWP_AC_Req;
  uint8_T HWP_TrkReq;
  uint8_T HWP_CenCtrllockReq;
  boolean_T HWP_BackupReq;
  boolean_T HWP_BrkLmpReq;
  boolean_T HWP_KBCM_Req;
  boolean_T HWP_WorkReqVld_KBCM;
  uint8_T HWP_TarTemp;
  uint8_T HWP_TarWind;
  uint8_T HWP_TextWarn_AC;
  uint8_T HWP_WorkReq_KBCM;
  uint16_T FreshnessValue_IDC_L3_FD2;
} IDC_L3_FD2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IDC_L3_FD3_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_IDC_L3_FD3_MSG_BUS_

typedef struct {
  uint8_T Checksum_IDC_L3_2;
  uint8_T HWP_CrsSpdSetVal;
  real32_T EgoVehSpd;
  real32_T HWP_SpdMaxLim;
  uint8_T HWP_OperStsDecision;
  uint8_T HWP_OperSts;
  boolean_T HWP_VehSpdUnit;
  uint8_T HWP_ChimeWarn;
  uint8_T HWP_TextWarn;
  uint8_T RollingCounter_IDC_L3_2;
  uint8_T HWP_HAP_Cmd;
  uint16_T FreshnessValue_IDC_L3_FD3;
} IDC_L3_FD3_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IDC_L3_NM_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_IDC_L3_NM_MSG_BUS_

typedef struct {
  uint8_T Destination_IDC_L3_NM;
  uint8_T OpCode_IDC_L3_NM;
} IDC_L3_NM_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IDC_L3_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_IDC_L3_NODE_BUS_

typedef struct {
  IDC_L3_FD1_MSG_BUS IDC_L3_FD1_MSG;
  IDC_L3_FD2_MSG_BUS IDC_L3_FD2_MSG;
  IDC_L3_FD3_MSG_BUS IDC_L3_FD3_MSG;
  IDC_L3_NM_MSG_BUS IDC_L3_NM_MSG;
} IDC_L3_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IP2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_IP2_MSG_BUS_

typedef struct {
  real32_T IP_VehTotDistance;
  boolean_T IP_VehTotDistanceValid;
  boolean_T IP_ACCErr;
  boolean_T IP_Err;
  boolean_T IP_VehSpdUnit;
  uint16_T FreshnessValue_IP2;
} IP2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IP_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_IP_NODE_BUS_

typedef struct {
  IP2_MSG_BUS IP2_MSG;
} IP_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CR_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_CR_FD1_MSG_BUS_

typedef struct {
  uint8_T Checksum_CR_R_1;
  boolean_T FCTA_Warn;
  uint8_T FCTA_B_FuncSts;
  boolean_T CR_FCTB_Resp;
  boolean_T CR_FCTA_Resp;
  boolean_T FCTB_ABA_Req;
  uint8_T FCTB_ABA_Level;
  boolean_T FCTBTrig;
  boolean_T CR_BrkgReq;
  boolean_T CR_BliSts;
  boolean_T CR_ErrSts;
  real32_T CR_BrkgReqVal;
  real32_T FCTA_B_TTC;
  boolean_T FCTB_ABP_Req;
  uint8_T RollingCounter_CR_R_1;
  uint8_T Checksum_CR_R_2;
  real32_T CR_ObjDistY_Le;
  uint8_T CR_ObjID_Le;
  real32_T CR_ObjDistX_Le;
  real32_T CR_ObjRelVelX_Le;
  uint8_T CR_ObjSts_Le;
  real32_T CR_ObjRelAccelX_Le;
  uint8_T RollingCounter_CR_R_2;
  uint8_T CR_ObjMotionType_Le;
  uint8_T Checksum_CR_R_3;
  real32_T CR_ObjDistY_Ri;
  uint8_T CR_ObjID_Ri;
  real32_T CR_ObjDistX_Ri;
  real32_T CR_ObjRelVelX_Ri;
  uint8_T CR_ObjSts_Ri;
  real32_T CR_ObjRelAccelX_Ri;
  uint8_T RollingCounter_CR_R_3;
  uint8_T CR_ObjMotionType_Ri;
  uint8_T Checksum_CR_R_4;
  real32_T CR_ObjRelAccelY_Ri;
  real32_T CR_ObjRelAccelY_Le;
  real32_T CR_ObjRelVelY_Ri;
  real32_T CR_ObjRelVelY_Le;
  uint8_T RollingCounter_CR_R_4;
  real32_T CR_ObjDistXStd_Le;
  real32_T CR_ObjRelVelXStd_Le;
  real32_T CR_ObjDistYStd_Le;
  real32_T CR_ObjRelVelYStd_Le;
  real32_T CR_ObjRAccelYStd_Le;
  real32_T CR_ObjRAccelXStd_Le;
  real32_T CR_ObjDistYStd_Ri;
  real32_T CR_ObjDistXStd_Ri;
  real32_T CR_ObjRelVelXStd_Ri;
  real32_T CR_ObjRelVelYStd_Ri;
  real32_T CR_ObjRAccelYStd_Ri;
  real32_T CR_ObjRAccelXStd_Ri;
} CR_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CR_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_CR_NODE_BUS_

typedef struct {
  CR_FD1_MSG_BUS CR_FD1_MSG;
} CR_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RSDS_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_RSDS_FD1_MSG_BUS_

typedef struct {
  real32_T RSDS_ObjRelAccelY_Le;
  uint8_T Checksum_RSDS_R_2;
  boolean_T RSDS_BrkgReq;
  boolean_T RSDS_Brk_ErrSts;
  uint8_T RSDS_IPSoundReq;
  uint8_T RSDS_LEDLightReqRight;
  uint8_T RSDS_LEDLightReqLeft;
  real32_T RSDS_BrkgReqVal;
  uint8_T DOW_warningReqleft;
  uint8_T DOW_warningReqRight;
  uint8_T BSD_LCA_warningReqleft;
  uint8_T BSD_LCA_warningReqRight;
  uint8_T RSDS_RCW_Trigger;
  boolean_T RSDS_RCTAResp;
  boolean_T RSDS_RCWResp;
  boolean_T RSDS_DOWResp;
  boolean_T RSDS_LCAResp;
  boolean_T RSDS_TrailerSts;
  boolean_T RSDS_BliSts;
  boolean_T RSDS_BrkgTrig;
  boolean_T RSDS_ErrSts;
  uint8_T RollingCounter_RSDS_R_2;
  boolean_T RCTA_warningReqLeft;
  boolean_T RCTA_warningReqRight;
  boolean_T RSDS_CTA_Actv;
  boolean_T RSDS_RCTABrkResp;
  uint8_T Checksum_RSDS_R_3;
  uint8_T ObjIDLe;
  uint8_T LeTarSts;
  real32_T ObjLgtPosnCurvLe;
  real32_T ObjLatPosnCurvLe;
  real32_T ObjLgtSpdCurvLe;
  real32_T ObjLatSpdCurvLe;
  uint8_T RollingCounter_RSDS_R_3;
  real32_T ObjTTCLe;
  uint8_T Checksum_RSDS_R_4;
  boolean_T ObjStatyLe;
  real32_T ObjWidthLe;
  uint8_T ObjLenLe;
  uint8_T ObjRinRi;
  uint8_T ObjStsLe;
  uint8_T ZoneIndLe;
  uint8_T ObjStsRi;
  uint8_T ZoneIndRi;
  boolean_T ObjStatyRi;
  real32_T ObjWidthRi;
  uint8_T RollingCounter_RSDS_R_4;
  uint8_T Checksum_RSDS_R_5;
  uint8_T ObjIDRi;
  uint8_T RiTarSts;
  real32_T ObjLgtPosnCurvRi;
  real32_T ObjLatPosnCurvRi;
  real32_T ObjLgtSpdCurvRi;
  real32_T ObjLatSpdCurvRi;
  uint8_T RollingCounter_RSDS_R_5;
  real32_T ObjTTCRi;
  real32_T RSDS_ObjDistXStd_Le;
  real32_T RSDS_ObjRelVelXStd_Le;
  real32_T RSDS_ObjDistYStd_Le;
  real32_T RSDS_ObjRelVelYStd_Le;
  real32_T RSDS_ObjRAccelYStd_Le;
  real32_T RSDS_ObjRAccelXStd_Le;
  real32_T RSDS_ObjDistYStd_Ri;
  real32_T RSDS_ObjDistXStd_Ri;
  real32_T RSDS_ObjRelVelXStd_Ri;
  real32_T RSDS_ObjRelVelYStd_Ri;
  real32_T RSDS_ObjRAccelYStd_Ri;
  real32_T RSDS_ObjRAccelXStd_Ri;
  real32_T RSDS_ObjRelAccelX_Le;
  real32_T RSDS_ObjRelAccelX_Ri;
  real32_T RSDS_ObjRelAccelY_Ri;
} RSDS_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RSDS_FD2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_RSDS_FD2_MSG_BUS_

typedef struct {
  real32_T RCTA_B_TTC;
  real32_T BSD_LCA_Left_TTC;
  real32_T RCW_TTC;
  real32_T BSD_LCA_Right_TTC;
  real32_T RSDS_LeTgt_01_dy;
  boolean_T RSDS_LeTgt_01;
  boolean_T RSDS_LeTgt_02;
  real32_T RSDS_LeTgt_01_dx;
  real32_T RSDS_LeTgt_02_dx;
  boolean_T RSDS_RiTgt_01;
  real32_T RSDS_LeTgt_02_dy;
  real32_T RSDS_RiTgt_01_dx;
  boolean_T RSDS_RiTgt_02;
  real32_T RSDS_RiTgt_01_dy;
  real32_T RSDS_RiTgt_02_dx;
  boolean_T RSDS_MidTgt_01;
  real32_T RSDS_RiTgt_02_dy;
  real32_T RSDS_MidTgt_01_dx;
  boolean_T RSDS_MidTgt_02;
  real32_T RSDS_MidTgt_01_dy;
  real32_T RSDS_MidTgt_02_dx;
  real32_T RSDS_MidTgt_02_dy;
} RSDS_FD2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RSDS_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_RSDS_NODE_BUS_

typedef struct {
  RSDS_FD1_MSG_BUS RSDS_FD1_MSG;
  RSDS_FD2_MSG_BUS RSDS_FD2_MSG;
} RSDS_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IBOOSTER_FD2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_IBOOSTER_FD2_MSG_BUS_

typedef struct {
  uint8_T IB_BrkPedalAppldVld;
  boolean_T IB_BrkPedalAppld;
  uint8_T CheckSum_EPB1;
  uint8_T EPBSts;
  uint8_T RollingCounter_EPB1;
  uint8_T CheckSum_ABS1;
  boolean_T FLWheelSpdVld;
  uint8_T FLWheelDriveDirection;
  real32_T FLWheelSpd;
  boolean_T FRWheelSpdVld;
  uint8_T FRWheelDriveDirection;
  real32_T FRWheelSpd;
  uint8_T WssFLEdgesSum;
  uint8_T WssFREdgesSum;
  uint8_T RollingCounter_ABS1;
  boolean_T WssFREdgesSumVld;
  boolean_T WssFLEdgesSumVld;
  uint8_T CheckSum_ABS3;
  boolean_T VehSpdVld;
  boolean_T EBDFailSts;
  boolean_T ABSFailSts;
  real32_T VehSpd;
  boolean_T ABSActv;
  boolean_T EBDActv;
  uint8_T RollingCounter_ABS3;
  uint8_T CheckSum_IBooster_FD2_5;
  uint8_T L3mainVMCavailiable;
  boolean_T L3VLCADactive;
  uint8_T RollingCounter_Booster_FD2_5;
  uint8_T CheckSum_ABS2;
  boolean_T RLWheelSpdVld;
  uint8_T RLWheelDriveDirection;
  real32_T RLWheelSpd;
  boolean_T RRWheelSpdVld;
  uint8_T RRWheelDriveDirection;
  real32_T RRWheelSpd;
  uint8_T WssRREdgesSum;
  uint8_T WssRLEdgesSum;
  uint8_T RollingCounter_ABS2;
  boolean_T WssRREdgesSumVld;
  boolean_T WssRLEdgesSumVld;
} IBOOSTER_FD2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IBOOSTER_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_IBOOSTER_NODE_BUS_

typedef struct {
  IBOOSTER_FD2_MSG_BUS IBOOSTER_FD2_MSG;
} IBOOSTER_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PEPS2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_PEPS2_MSG_BUS_

typedef struct {
  boolean_T SysPowerModVld;
  uint8_T SysPowerMod;
} PEPS2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_PEPS_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_PEPS_NODE_BUS_

typedef struct {
  PEPS2_MSG_BUS PEPS2_MSG;
} PEPS_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HAP_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HAP_FD1_MSG_BUS_

typedef struct {
  uint8_T Checksum_APS1;
  boolean_T APS_ReqCtrlEPS;
  boolean_T APS_ReqEPSTgtAngValid;
  uint8_T APS_SlotDisp;
  uint8_T APS_SysSoundIndcn;
  real32_T APS_ReqEPSTgtAng;
  uint8_T APS_TextDisp;
  boolean_T APS_SwtSts;
  uint8_T APS_ProcBar;
  uint8_T TurnLightsCmd;
  uint8_T APS_PrkgMod;
  uint8_T APS_PrkgTyp;
  uint8_T RollingCounter_APS1;
  uint8_T Checksum_APS4;
  uint8_T APS_BrkCategory;
  uint8_T APS_ESP_TgtGearReq;
  uint8_T APS_BrkFctnMod;
  uint8_T APS_WorkSts;
  boolean_T MEB_BrkgReq;
  boolean_T MEBErrSts;
  uint8_T APS_BrkModSts;
  real32_T APS_ESP_SpdLimn;
  boolean_T MEB_AVHReq;
  uint16_T APS_ESP_BrkDistance;
  real32_T MEB_BrkgReqValue;
  uint8_T RollingCounter_APS4;
  uint8_T HAP_ESP_LSMSubMTReq;
  boolean_T HAP_ESP_DriverPresenceExternal;
  uint16_T HAP_ESP_LSMDistToStop;
  boolean_T HAP_ESP_LSMPrefill;
  uint8_T HAP_ESP_LSMSubMTLevel;
  boolean_T HAP_ESP_SafeDrvrHandoverReq;
  real32_T HAP_ESP_LSMvMaxRq;
  boolean_T HAP_ESP_LSMNudgeReq;
  boolean_T HAP_ESP_LSMVehSecReq;
  uint8_T HAP_ESP_LSMComfBrakeReq;
  uint8_T HAP_ESP_LSMVehDirRq;
  uint8_T HAP_ESP_LSMSubMTLong;
  uint8_T P2P_PahDelSts;
  uint8_T HAP_PrkgModCurrSts;
  uint8_T APS_PASSwtReq;
  boolean_T P2P_Pah1Avail;
  uint8_T P2P_SelfDetErrCode;
  uint8_T HAP_SwtDispCtrlCmd;
  boolean_T TailVertPrkgOutVald;
  boolean_T HeadVertPrkgOutVald;
  boolean_T RParaPrkgOutVald;
  boolean_T LParaPrkgOutVald;
  boolean_T RmtPrkgReq;
  boolean_T P2P_Pah2Avail;
  uint8_T P2P_SelfDetSts;
  uint8_T APS_MovgDirc;
  uint16_T FreshnessValue_HAP_FD1;
} HAP_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HAP_FD2_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HAP_FD2_MSG_BUS_

typedef struct {
  uint8_T SigViewIndcn;
  uint8_T AVM_CurrSts;
  uint8_T HAP_Hmi_Index;
  boolean_T AutoAVMSwtSet_Sts;
  boolean_T AutoViewChgFuncSts;
  boolean_T CarMdlDispSts;
  boolean_T MOD_AlarmSts;
  boolean_T MOD_WorkSts;
  uint8_T MdlColrSts;
  uint8_T RadarDispSts;
  uint8_T GuidOvlSts;
  boolean_T CurrCalResultSts;
  uint8_T LaneCalFltSts;
  uint8_T LaneCalSts;
  uint8_T CarMdlTrsprcySts;
  boolean_T OvlOpFailSts;
  boolean_T EolNotCmpltd;
  boolean_T FrntCamInpFailSts;
  boolean_T RearCamInpFailSts;
  boolean_T LeCamInpFailSts;
  boolean_T RiCamInpFailSts;
  uint16_T AVM_3DAngSts;
  uint8_T DVRWorkSts;
  boolean_T HAP_DispCmd;
} HAP_FD2_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HAP_FD3_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HAP_FD3_MSG_BUS_

typedef struct {
  uint8_T RPAS_NearBrrdstn;
  uint8_T APS_ObjRiSideAr2;
  uint8_T APS_ObjRiSideAr1;
  uint8_T APS_ObjRiSideAr4;
  uint8_T APS_ObjRiSideAr3;
  uint8_T APS_ObjLeSideAr1;
  uint8_T APS_ObjRiSideAr5;
  uint8_T APS_ObjLeSideAr3;
  uint8_T APS_ObjLeSideAr2;
  uint8_T APS_ObjLeSideAr5;
  uint8_T APS_ObjLeSideAr4;
  boolean_T SDWActiveSts;
  uint8_T SDW_SoundIndcn;
  boolean_T APS_RLSideSnsrFailSts;
  boolean_T APS_RRSideSnsrFailSts;
  boolean_T APS_FLSideSnsrFailSts;
  boolean_T APS_FRSideSnsrFailSts;
  uint8_T RPAS_ObjRRCornrAr2;
  uint8_T RPAS_ObjRRCornrAr1;
  uint8_T RPAS_ObjRRMidlAr2;
  uint8_T RPAS_ObjRRMidlAr1;
  uint8_T RPAS_ObjRLMidlAr2;
  uint8_T RPAS_ObjRLMidlAr1;
  uint8_T RPAS_ObjRLCornrAr2;
  uint8_T RPAS_ObjRLCornrAr1;
  uint8_T RPAS_WorkSts;
  boolean_T RPAS_RRCornrSnsrFailSts;
  boolean_T RPAS_RRMiddlSnsrFailSts;
  boolean_T RPAS_RLMiddlSnsrFailSts;
  boolean_T RPAS_RLCornrSnsrFailSts;
  boolean_T MEB_EnableSts;
  uint8_T MEBWorkSts;
  uint8_T RPAS_SoundIndcn;
  uint8_T FPAS_ObjFLCornrAr2;
  uint8_T FPAS_ObjFLCornrAr1;
  uint8_T FPAS_ObjFLMidlAr2;
  uint8_T FPAS_ObjFLMidlAr1;
  uint8_T FPAS_ObjFRMidlAr2;
  uint8_T FPAS_ObjFRMidlAr1;
  uint8_T FPAS_ObjFRCornrAr2;
  uint8_T FPAS_ObjFRCornrAr1;
  boolean_T FPAS_AutoModSts;
  boolean_T FPAS_DispCmd;
  uint8_T FPAS_WorkSts;
  boolean_T FPAS_FRCornrSnsrFailSts;
  boolean_T FPAS_FRMiddlSnsrFailSts;
  boolean_T FPAS_FLMiddlSnsrFailSts;
  boolean_T FPAS_FLCornrSnsrFailSts;
  uint8_T FPAS_SoundIndcn;
  uint8_T FPAS_NearBrrdstn;
  uint8_T FADS_FuncSts;
  uint8_T RADS_FuncSts;
  uint8_T P2P_FuncSts;
  uint8_T APA_FuncSts;
  uint8_T OrvmCtrlCmd;
  uint8_T HAP_TextIconDispCtrl;
  uint8_T APA_MenuDispCtrlCmd;
  boolean_T RmtPrkgSts;
  uint8_T RmtPrkgFinishReq;
  uint16_T APS_Coordinate_Angle;
  int16_T APS_Coordinate_X;
  int16_T APS_Coordinate_Y;
  uint8_T HAPob_WorkSts;
  real32_T LtSlope;
  real32_T LtCurVtur;
  real32_T Ltlntcep;
  real32_T LtCobfi;
  real32_T RtSlope;
  real32_T RtCurVtur;
  real32_T Rtlntcep;
  real32_T RtCobfi;
  uint16_T FreshnessValue_HAP_FD3;
} HAP_FD3_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HAP_FD4_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HAP_FD4_MSG_BUS_

typedef struct {
  real32_T OD_Obj1_width;
  uint8_T OD_Obj1_type;
  real32_T OD_Obj1_Confidence;
  real32_T OD_Obj1_height;
  real32_T OD_Obj1_length;
  real32_T OD_Obj1_Ground_Pos_X;
  real32_T OD_Obj1_Ground_Pos_Y;
  uint8_T OD_Obj1_ID;
  real32_T OD_Obj2_width;
  uint8_T OD_Obj2_type;
  real32_T OD_Obj2_Confidence;
  real32_T OD_Obj2_height;
  real32_T OD_Obj2_length;
  real32_T OD_Obj2_Ground_Pos_X;
  real32_T OD_Obj2_Ground_Pos_Y;
  uint8_T OD_Obj2_ID;
  real32_T OD_Obj3_width;
  uint8_T OD_Obj3_type;
  real32_T OD_Obj3_Confidence;
  real32_T OD_Obj3_height;
  real32_T OD_Obj3_length;
  real32_T OD_Obj3_Ground_Pos_X;
  real32_T OD_Obj3_Ground_Pos_Y;
  uint8_T OD_Obj3_ID;
  real32_T OD_Obj4_width;
  uint8_T OD_Obj4_type;
  real32_T OD_Obj4_Confidence;
  real32_T OD_Obj4_height;
  real32_T OD_Obj4_length;
  real32_T OD_Obj4_Ground_Pos_X;
  real32_T OD_Obj4_Ground_Pos_Y;
  uint8_T OD_Obj4_ID;
  real32_T OD_Obj5_width;
  uint8_T OD_Obj5_type;
  real32_T OD_Obj5_Confidence;
  real32_T OD_Obj5_height;
  real32_T OD_Obj5_length;
  real32_T OD_Obj5_Ground_Pos_X;
  real32_T OD_Obj5_Ground_Pos_Y;
  uint8_T OD_Obj5_ID;
  real32_T OD_Obj6_width;
  uint8_T OD_Obj6_type;
  real32_T OD_Obj6_Confidence;
  real32_T OD_Obj6_height;
  real32_T OD_Obj6_length;
  real32_T OD_Obj6_Ground_Pos_X;
  real32_T OD_Obj6_Ground_Pos_Y;
  uint8_T OD_Obj6_ID;
  real32_T OD_Obj7_width;
  uint8_T OD_Obj7_type;
  real32_T OD_Obj7_Confidence;
  real32_T OD_Obj7_height;
  real32_T OD_Obj7_length;
  real32_T OD_Obj7_Ground_Pos_X;
  real32_T OD_Obj7_Ground_Pos_Y;
  uint8_T OD_Obj7_ID;
} HAP_FD4_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HAP_FD5_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HAP_FD5_MSG_BUS_

typedef struct {
  real32_T Freespace_1_distance;
  real32_T Freespace_2_distance;
  real32_T Freespace_4_distance;
  real32_T Freespace_3_distance;
  real32_T Freespace_5_distance;
  real32_T Freespace_6_distance;
  real32_T Freespace_8_distance;
  real32_T Freespace_7_distance;
  real32_T Freespace_9_distance;
  real32_T Freespace_10_distance;
  real32_T Freespace_12_distance;
  real32_T Freespace_11_distance;
  real32_T Freespace_13_distance;
  real32_T Freespace_14_distance;
  real32_T Freespace_16_distance;
  real32_T Freespace_15_distance;
  real32_T Freespace_17_distance;
  real32_T Freespace_18_distance;
  real32_T Freespace_20_distance;
  real32_T Freespace_19_distance;
  real32_T Freespace_21_distance;
  real32_T Freespace_22_distance;
  real32_T Freespace_24_distance;
  real32_T Freespace_23_distance;
  real32_T Freespace_25_distance;
  real32_T Freespace_26_distance;
  real32_T Freespace_28_distance;
  real32_T Freespace_27_distance;
  real32_T Freespace_29_distance;
  real32_T Freespace_30_distance;
  real32_T Freespace_32_distance;
  real32_T Freespace_31_distance;
  real32_T Freespace_33_distance;
  real32_T Freespace_34_distance;
  real32_T Freespace_36_distance;
  real32_T Freespace_35_distance;
  real32_T Freespace_37_distance;
  real32_T Freespace_38_distance;
  real32_T Freespace_40_distance;
  real32_T Freespace_39_distance;
  real32_T Freespace_41_distance;
  real32_T Freespace_42_distance;
  real32_T Freespace_44_distance;
  real32_T Freespace_43_distance;
  real32_T Freespace_45_distance;
  real32_T Freespace_46_distance;
  real32_T Freespace_48_distance;
  real32_T Freespace_47_distance;
} HAP_FD5_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HAP_FD6_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_HAP_FD6_MSG_BUS_

typedef struct {
  uint8_T HAP_RtSide_Obj1_type;
  uint8_T HAP_RtSide_Obj1_ID;
  real32_T HAP_RtSide_Obj1_Confidence;
  real32_T HAP_RtSide_Obj1_Ground_Pos_X;
  real32_T HAP_RtSide_Obj1_Ground_Pos_Y;
  uint8_T HAP_RtCam_WorkSts;
  uint8_T HAP_RtSide_Obj2_type;
  uint8_T HAP_RtSide_Obj2_ID;
  real32_T HAP_RtSide_Obj2_Confidence;
  real32_T HAP_RtSide_Obj2_Ground_Pos_X;
  real32_T HAP_RtSide_Obj2_Ground_Pos_Y;
  uint8_T HAP_RtSide_Obj3_type;
  uint8_T HAP_RtSide_Obj3_ID;
  real32_T HAP_RtSide_Obj3_Confidence;
  real32_T HAP_RtSide_Obj3_Ground_Pos_X;
  real32_T HAP_RtSide_Obj3_Ground_Pos_Y;
  uint8_T HAP_RtSide_Obj4_type;
  uint8_T HAP_RtSide_Obj4_ID;
  real32_T HAP_RtSide_Obj4_Confidence;
  real32_T HAP_RtSide_Obj4_Ground_Pos_X;
  real32_T HAP_RtSide_Obj4_Ground_Pos_Y;
  uint8_T USS_RRSide2_Status;
  uint8_T USS_FRSide1_Status;
  uint8_T USS_RLSide2_Status;
  uint8_T USS_FLSide1_Status;
  real32_T USS_FLSide1_Dist;
  real32_T USS_RLSide2_Dist;
  real32_T USS_FRSide1_Dist;
  real32_T USS_RRSide2_Dist;
  real32_T USS_FLCNear_Obj_Pos_X;
  real32_T USS_FLCNear_Obj_Confidence;
  real32_T USS_FLCNear_Obj_Pos_Y;
  real32_T USS_FLMNear_Obj_Pos_X;
  real32_T USS_FLMNear_Obj_Confidence;
  real32_T USS_FLMNear_Obj_Pos_Y;
  real32_T USS_FRMNear_Obj_Pos_X;
  real32_T USS_FRMNear_Obj_Confidence;
  real32_T USS_FRMNear_Obj_Pos_Y;
  uint8_T USS_FrontSys_Status;
  real32_T USS_FRCNear_Obj_Pos_X;
  real32_T USS_FRCNear_Obj_Confidence;
  real32_T USS_FRCNear_Obj_Pos_Y;
} HAP_FD6_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HAP_NODE_BUS_
#define DEFINED_TYPEDEF_FOR_HAP_NODE_BUS_

typedef struct {
  HAP_FD1_MSG_BUS HAP_FD1_MSG;
  HAP_FD2_MSG_BUS HAP_FD2_MSG;
  HAP_FD3_MSG_BUS HAP_FD3_MSG;
  HAP_FD4_MSG_BUS HAP_FD4_MSG;
  HAP_FD5_MSG_BUS HAP_FD5_MSG;
  HAP_FD6_MSG_BUS HAP_FD6_MSG;
} HAP_NODE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCAN_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_BUS_

typedef struct {
  PBOX_NODE_BUS PBOX_NODE;
  HC_NODE_BUS HC_NODE;
  AC_NEDE_BUS AC_NEDE;
  ABM_NODE_BUS ABM_NODE;
  BCM_NODE_BUS BCM_NODE;
  CSA_NODE_BUS CSA_NODE;
  DCT_NODE_BUS DCT_NODE;
  DMS_NODE_BUS DMS_NODE;
  ECM_NODE_BUS ECM_NODE;
  ESP_NODE_BUS ESP_NODE;
  EPS_NODE_BUS EPS_NODE;
  HCU_NODE_BUS HCU_NODE;
  HUT_NODE_BUS HUT_NODE;
  IDC_L3_NODE_BUS IDC_L3_NODE;
  IP_NODE_BUS IP_NODE;
  CR_NODE_BUS CR_NODE;
  RSDS_NODE_BUS RSDS_NODE;
  IBOOSTER_NODE_BUS IBOOSTER_NODE;
  PEPS_NODE_BUS PEPS_NODE;
  HAP_NODE_BUS HAP_NODE;
} VCAN_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ACC_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_ACC_FD1_MSG_BUS_

typedef struct {
  int8_T HWP_TgtAccel_L2;
  real32_T HWP_UpperLimit_L2;
  real32_T HWP_LowerLimit_L2;
  real32_T HWP_TgtAccelCmftUpprLimVal_L2;
  real32_T HWP_TgtAccelCmftLwrLimVal_L2;
  boolean_T HWP_ShutdownReq_L2;
  uint8_T HWP_MotTypeReqLong_L2;
  uint8_T HWP_MotTypeReqMode_L2;
  boolean_T HWP_ACCAvail;
  boolean_T HWP_AEBAvail;
  boolean_T HWP_SecureReq_L2;
  boolean_T HWP_UseTgtAccelCmftUpprLimVal_L2;
  uint8_T Checksum_ACC1;
  boolean_T Longctrl_Decel_Req;
  uint8_T Longctrl_ModSts;
  boolean_T Longctrl_DrvOFF_Req;
  boolean_T Longctrl_VehHldReq;
  real32_T Longctrl_EngTrqReq;
  uint8_T Longctrl_ParkShiftReq;
  boolean_T Longctrl_DecelToStopReq;
  boolean_T Longctrl_FuelCutOffPrevn;
  boolean_T Longctrl_EngTrqReqActive;
  real32_T Longctrl_Decel_ReqValue;
  uint8_T ActualTargetSpeed;
  uint8_T RollingCounter_ACC1;
  uint8_T Checksum_ACC2;
  uint8_T RollingCounter_ACC2;
  boolean_T ACC_CRInterface;
  uint8_T Checksum_ACC10;
  real32_T Longctrl_HCUTrqReq;
  boolean_T Longctrl_HCUTrqReqActive;
  uint8_T RollingCounter_ACC10;
  uint16_T FreshnessValue_ACC_FD1;
} ACC_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_

typedef struct {
  uint8_T ProtocolMode;
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint8_T BRS;
  uint8_T ESI;
  uint8_T DLC;
  uint32_T ID;
  uint32_T Reserved;
  real_T Timestamp;
  uint8_T Data[64];
} CAN_FD_MESSAGE_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_IFC_FD1_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_IFC_FD1_MSG_BUS_

typedef struct {
  uint8_T IFCFuncAngCmdReqFlag;
  uint8_T Checksum_IFC1;
  uint16_T IFCTrqOvlCmdProtnValue;
  uint8_T IFCVibrationWarning;
  real32_T IFCTrqOvlCmdReqValue;
  uint8_T RollingCounter_IFC1;
  uint8_T IFCFuncTrqCmdReqFlag;
  uint8_T Checksum_IFC2;
  real32_T IFCAngCmdReqValue;
  uint16_T IFCAngCmdReqProtnValue;
  uint8_T RollingCounter_IFC2;
} IFC_FD1_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAL_AEB_CONFIG_BUS_
#define DEFINED_TYPEDEF_FOR_CAL_AEB_CONFIG_BUS_

typedef struct {
  uint8_T VehConfigFCW;
  uint8_T VehConfigAEB;
  uint8_T VehConfigAEBPed;
  uint8_T VehConfigAEBCyc;
  uint8_T VehConfigAEBJA;
  uint8_T VehConfigIbooster;
} CAL_AEB_CONFIG_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_LATC_VCAN_CSA_BUS_
#define DEFINED_TYPEDEF_FOR_LATC_VCAN_CSA_BUS_

typedef struct {
  real32_T SteerWheelAng;
  boolean_T SteerWheelAngSign;
  real32_T SteerWheelSpd;
  boolean_T SteerWheelSpdSign;
} LATC_VCAN_CSA_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_LONC_Hybrid_CTRL_OUT_BUS_
#define DEFINED_TYPEDEF_FOR_LONC_Hybrid_CTRL_OUT_BUS_

typedef struct {
  real32_T Longctrl_HCUTrqReq;
  boolean_T Longctrl_HCUTrqReqActive;
} LONC_Hybrid_CTRL_OUT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_APPINFO_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_APPINFO_BUS_

typedef struct {
  uint32_T APP_SyncTs;
  uint8_T APP_SyncTsValid;
  uint8_T APP_E2EStatus;
} EQ4_APPINFO_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_VCAN_BCM_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_BCM_MSG_BUS_

typedef struct {
  boolean_T WindshldWiprActvSts;
  boolean_T RRDoorSts;
  boolean_T PassengerDoorSts;
  boolean_T LRDoorSts;
  boolean_T DrvDoorSts;
  boolean_T HazardLmpSwtSts;
  boolean_T PASWorkCmd;
  uint8_T WiprReq_F_PBOX;
  boolean_T KL30BRelaySts;
} VCAN_BCM_MSG_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_VCAN_PEPS_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_PEPS_MSG_BUS_

typedef struct {
  boolean_T SysPowerModVld;
  uint8_T SysPowerMod;
} VCAN_PEPS_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCAN_HAP_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_HAP_MSG_BUS_

typedef struct {
  uint8_T TurnLightsCmd;
  uint8_T APS_WorkSts;
  uint8_T DVRWorkSts;
  real32_T USS_FLCNear_Obj_Pos_X;
  real32_T USS_FLCNear_Obj_Confidence;
  real32_T USS_FLCNear_Obj_Pos_Y;
  real32_T USS_FLMNear_Obj_Pos_X;
  real32_T USS_FLMNear_Obj_Confidence;
  real32_T USS_FLMNear_Obj_Pos_Y;
  real32_T USS_FRMNear_Obj_Pos_X;
  real32_T USS_FRMNear_Obj_Confidence;
  real32_T USS_FRMNear_Obj_Pos_Y;
  uint8_T USS_FrontSys_Status;
  real32_T USS_FRCNear_Obj_Pos_X;
  real32_T USS_FRCNear_Obj_Confidence;
  real32_T USS_FRCNear_Obj_Pos_Y;
} VCAN_HAP_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCAN_CR_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_CR_MSG_BUS_

typedef struct {
  boolean_T FCTA_Warn;
  uint8_T FCTA_B_FuncSts;
  boolean_T CR_FCTB_Resp;
  boolean_T CR_FCTA_Resp;
  boolean_T FCTB_ABA_Req;
  uint8_T FCTB_ABA_Level;
  boolean_T FCTBTrig;
  boolean_T CR_BrkgReq;
  boolean_T CR_BliSts;
  boolean_T CR_ErrSts;
  real32_T CR_BrkgReqVal;
  real32_T FCTA_B_TTC;
  boolean_T FCTB_ABP_Req;
  real32_T CR_ObjDistY_Le;
  uint8_T CR_ObjID_Le;
  real32_T CR_ObjDistX_Le;
  real32_T CR_ObjRelVelX_Le;
  uint8_T CR_ObjSts_Le;
  real32_T CR_ObjRelAccelX_Le;
  uint8_T CR_ObjMotionType_Le;
  real32_T CR_ObjDistY_Ri;
  uint8_T CR_ObjID_Ri;
  real32_T CR_ObjDistX_Ri;
  real32_T CR_ObjRelVelX_Ri;
  uint8_T CR_ObjSts_Ri;
  real32_T CR_ObjRelAccelX_Ri;
  uint8_T CR_ObjMotionType_Ri;
  real32_T CR_ObjRelAccelY_Ri;
  real32_T CR_ObjRelAccelY_Le;
  real32_T CR_ObjRelVelY_Ri;
  real32_T CR_ObjRelVelY_Le;
  real32_T CR_ObjDistXStd_Le;
  real32_T CR_ObjRelVelXStd_Le;
  real32_T CR_ObjDistYStd_Le;
  real32_T CR_ObjRelVelYStd_Le;
  real32_T CR_ObjRAccelYStd_Le;
  real32_T CR_ObjRAccelXStd_Le;
  real32_T CR_ObjDistYStd_Ri;
  real32_T CR_ObjDistXStd_Ri;
  real32_T CR_ObjRelVelXStd_Ri;
  real32_T CR_ObjRelVelYStd_Ri;
  real32_T CR_ObjRAccelYStd_Ri;
  real32_T CR_ObjRAccelXStd_Ri;
} VCAN_CR_MSG_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_PLAN_DPC_ESS_BUS_
#define DEFINED_TYPEDEF_FOR_PLAN_DPC_ESS_BUS_

typedef struct {
  real32_T PLAN_DPC_ESS_DangerPlaus_L;
  real32_T PLAN_DPC_ESS_DangerPlaus_R;
  boolean_T PLAN_DPC_ESS_L_Oncoming_flag;
  boolean_T PLAN_DPC_ESS_R_Oncoming_flag;
} PLAN_DPC_ESS_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_VCAN_AC_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_AC_MSG_BUS_

typedef struct {
  real32_T ACAmbTemp;
} VCAN_AC_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCAN_IP_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_IP_MSG_BUS_

typedef struct {
  real32_T IP_VehSpdDisp;
  uint8_T IP_VelSpdDisp_Mile;
  real32_T IP_VehTotDistance;
  boolean_T IP_VehTotDistanceValid;
  boolean_T IP_ACCErr;
  boolean_T IP_Err;
  boolean_T IP_VehSpdUnit;
} VCAN_IP_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCAN_HC_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_HC_MSG_BUS_

typedef struct {
  boolean_T ALS_FailSts;
  boolean_T RightHighBeamFailSts;
  boolean_T LeftHighBeamFailSts;
  boolean_T RightLowBeamFailSts;
  boolean_T LeftLowBeamFailSts;
  uint8_T ADBstatus;
  boolean_T HighBeamSts_HC;
  uint8_T HBStatusSegment3;
  uint8_T HBStatusSegment2;
  uint8_T HBStatusSegment1;
  uint8_T HBStatusSegment0;
  uint8_T HBStatusSegment7;
  uint8_T HBStatusSegment6;
  uint8_T HBStatusSegment5;
  uint8_T HBStatusSegment4;
  boolean_T RLHiBeamReq_HC;
  boolean_T LLHiBeamReq_HC;
} VCAN_HC_MSG_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCAN_PBOX_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_PBOX_MSG_BUS_

typedef struct {
  boolean_T FFogLmpSts_F_Pbox;
  boolean_T LowBeamSts_F_Pbox;
  boolean_T HiBeamSts_F_Pbox;
  boolean_T HoodSts_F_Pbox;
  boolean_T RFogLmpSts_R_Pbox;
  boolean_T RTurnLmpSts_R_Pbox;
  boolean_T LTurnLmpSts_R_Pbox;
} VCAN_PBOX_MSG_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_DFIM_VSM_STS_BUS_
#define DEFINED_TYPEDEF_FOR_DFIM_VSM_STS_BUS_

typedef struct {
  uint8_T TJA_ICA_Error;
  uint8_T ACC_Error;
  uint8_T HWA_Error;
  uint8_T LKA_LCK_Error;
  uint8_T LDW_Error;
  uint8_T ELK_Error;
  uint8_T ESS_Error;
  uint8_T TSR_Error;
  uint8_T ALC_Error;
  uint8_T NOA_Error;
  uint8_T ID_Error;
} DFIM_VSM_STS_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_AEB_LONOBJ_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_AEB_LONOBJ_BUS_

typedef struct {
  uint8_T FusionType;
  uint8_T ObjectID;
  uint8_T ObjectType;
  boolean_T ObjectTypeCameraConfirmed;
  real32_T ObjectLength;
  real32_T ObjectWidth;
  real32_T ObjectHight;
  real32_T ObjectAzimuthAngle;
  real32_T ObjectYawAngle;
  uint8_T ObjectMovingState;
  uint8_T ObjectMovingOrientation;
  real32_T dxFisrtDetection;
  real32_T dyFisrtDetection;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  real32_T dxVariance;
  real32_T dyVariance;
  real32_T vxVariance;
  real32_T vyVariance;
  real32_T axVariance;
  real32_T ayVariance;
  real32_T ObjectLengthVar;
  real32_T ObjectWidthVar;
  real32_T ObjectYawAngleVar;
  real32_T ObjectTypeProb;
  real32_T ObjectMovingStateProb;
  real32_T ObjectMovingOrientationProb;
  real32_T ObjectExistProb;
  real32_T ObjectIsObstacleProb;
  real32_T ObjectRCS;
  real32_T ObjectMeasurementStatus;
  uint16_T ObjectLifeCycle;
  real32_T dyObject2Center;
  real32_T dyEgo2Center;
  boolean_T ObjUpdate;
} TOS_AEB_LONOBJ_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_ELK_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_ELK_BUS_

typedef struct {
  uint8_T Object_Fus_Type[8];
  uint8_T Object_ID[8];
  uint8_T Object_Type[8];
  real32_T Object_Length[8];
  real32_T Object_Width[8];
  real32_T Object_Hight[8];
  real32_T Object_HeadingAngle[8];
  real32_T Object_YawAngle[8];
  uint8_T Object_MovingState[8];
  uint8_T Object_Orientation[8];
  real32_T Object_DX[8];
  real32_T Object_DY[8];
  real32_T Object_VX[8];
  real32_T Object_VY[8];
  real32_T Object_Std_AX[8];
  real32_T Object_Std_AY[8];
  real32_T Object_Std_DX[8];
  real32_T Object_Std_DY[8];
  real32_T Object_Std_VX[8];
  real32_T Object_Std_VY[8];
  real32_T Object_AX[8];
  real32_T Object_AY[8];
  real32_T Object_Std_Length[8];
  real32_T Object_Std_Width[8];
  real32_T Object_Std_HeadingAngle[8];
  real32_T Object_Type_Prob[8];
  real32_T Object_ExistProb[8];
  real32_T Object_ObstacleProb[8];
  real32_T Object_Age[8];
  real32_T CurrentLane_Prob[8];
  real32_T LeftLane_Prob[8];
  real32_T RightLane_Prob[8];
  uint8_T ObjectIn_Lane[8];
} TOS_ELK_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_LCKIE_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_LCKIE_BUS_

typedef struct {
  uint8_T Object_Fus_Type[9];
  uint8_T Object_ID[9];
  uint8_T Object_Type[9];
  real32_T Object_Length[9];
  real32_T Object_Width[9];
  real32_T Object_Hight[9];
  real32_T Object_HeadingAngle[9];
  real32_T Object_YawAngle[9];
  uint8_T Object_MovingState[9];
  uint8_T Object_Orientation[9];
  real32_T Object_DX[9];
  real32_T Object_DY[9];
  real32_T Object_VX[9];
  real32_T Object_VY[9];
  real32_T Object_Std_AX[9];
  real32_T Object_Std_AY[9];
  real32_T Object_Std_DX[9];
  real32_T Object_Std_DY[9];
  real32_T Object_Std_VX[9];
  real32_T Object_Std_VY[9];
  real32_T Object_AX[9];
  real32_T Object_AY[9];
  real32_T Object_Std_Length[9];
  real32_T Object_Std_Width[9];
  real32_T Object_Std_HeadingAngle[9];
  real32_T Object_Type_Prob[9];
  real32_T Object_ExistProb[9];
  real32_T Object_ObstacleProb[9];
  real32_T Object_Age[9];
  uint8_T cutIn[9];
  real32_T CurrentLane_Prob[9];
  real32_T LeftLane_Prob[9];
  real32_T RightLane_Prob[9];
  uint8_T ObjectIn_Lane[9];
} TOS_LCKIE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VSM_TSR_INIT_BUS_
#define DEFINED_TYPEDEF_FOR_VSM_TSR_INIT_BUS_

typedef struct {
  real32_T SPL_noSupp_Dist_Init;
  real32_T SPL_whSupp_Dist_Init;
  real32_T TS_SignName_Dist_Init;
  uint8_T SPL_noSupp_Value_Init;
  uint8_T SPL_whSupp_Value_Init;
  uint8_T TS_SignName_Value_Init;
  uint8_T SPL_SuppName_Value_Init;
} VSM_TSR_INIT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VSM_CTRL_LINE_BUS_
#define DEFINED_TYPEDEF_FOR_VSM_CTRL_LINE_BUS_

typedef struct {
  boolean_T LKALineValid;
  real32_T LKALineC3;
  real32_T LKALineC2;
  real32_T LKALineC1;
  real32_T LKALineC0;
  real32_T LKALineRange;
  boolean_T ELKLineValid;
  real32_T ELKLineC3;
  real32_T ELKLineC2;
  real32_T ELKLineC1;
  real32_T ELKLineC0;
  real32_T ELKLineRange;
} VSM_CTRL_LINE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VSM_TSR_BUS_
#define DEFINED_TYPEDEF_FOR_VSM_TSR_BUS_

typedef struct {
  uint8_T TSRSts;
  boolean_T TSRResp;
  boolean_T TSRWarnResp;
  int8_T TSR_Snvty;
  uint8_T TSRSpdLimUnit;
  uint8_T TSRSpdLimSts;
  uint8_T TSRSpdLim;
  uint8_T TSRSpdLimCfdc;
  boolean_T TSRSpdLimWarn;
  uint8_T TSRConSpdLim;
  boolean_T TSRConSpdLimWarn;
  uint8_T TSRTrfcSignVal;
  uint8_T TSRTrfcSignValCfdc;
} VSM_TSR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VSM_TSR_REMAIN_BUS_
#define DEFINED_TYPEDEF_FOR_VSM_TSR_REMAIN_BUS_

typedef struct {
  real32_T SPL_noSupp_Dist_Remain;
  real32_T SPL_whSupp_Dist_Remain;
  real32_T TS_SignName_Dist_Remain;
  uint8_T SPL_noSupp_Value_Remain;
  uint8_T SPL_whSupp_Value_Remain;
  uint8_T TS_SignName_Value_Remain;
  uint8_T SPL_SuppName_Value_Remain;
} VSM_TSR_REMAIN_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VSM_DATACLCT_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_VSM_DATACLCT_INFO_BUS_

typedef struct {
  uint32_T ACCDataClct_ConNotStsf;
  uint32_T TJADataClct_ConNotStsf;
  boolean_T HWADataClct_OverrideHWAExit;
  boolean_T HWADataClct_DriverBrakeHWAExit;
  boolean_T HWADataClct_DriverSteerHWAExit;
  boolean_T ACCDataClct_OverrideACCExit;
  boolean_T ACCDataClct_DriverBrakeACCExit;
  boolean_T ACCDataClct_DriverSteerACCExit;
  boolean_T LDW_Con_AccPedalRate_LDWExit;
  boolean_T LDW_Con_BrakePressure_LDWExit;
  boolean_T LDW_Con_SteerWheelAngle_LDWExit;
  boolean_T LDW_Con_DriverInput_LDWExit;
  boolean_T LDW_Con_SteerWheelSpd_LDWExit;
  boolean_T LKA_Con_AccPedalRate_LKAExit;
  boolean_T LKA_Con_BrakePressure_LKAExit;
  boolean_T LKA_Con_SteerWheelAngle_LKAExit;
  boolean_T LKA_Con_DriverInput_LKAExit;
  boolean_T LKA_Con_SteerWheelSpd_LKAExit;
  boolean_T LKA_Con_OverRide_LKAExit;
  boolean_T ELK_Con_AccPedalRate_ELKExit;
  boolean_T ELK_Con_BrakePressure_ELKExit;
  boolean_T ELK_Con_SteerWheelAngle_ELKExit;
  boolean_T ELK_Con_SteerWheelSpd_ELKExit;
  boolean_T LCK_Con_AccPedalRate_LCKExit;
  boolean_T LCK_Con_BrakePress_LCKExit;
  boolean_T LCK_Con_SteerAngleSpd_LCKExit;
  boolean_T LCK_Con_OverRide_LCKExit;
  boolean_T LCK_Con_SteerWheelAngle_LCKExit;
  boolean_T LCK_Con_DriverInput_LCKExit;
  boolean_T ESSDataClct_OverrideESSExit;
  boolean_T ESSDataClct_DriverSteerESSExit;
} VSM_DATACLCT_INFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_AEB_LATOBJ_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_AEB_LATOBJ_BUS_

typedef struct {
  uint8_T FusionType;
  uint8_T ObjectID;
  uint8_T ObjectType;
  boolean_T ObjectTypeCameraConfirmed;
  real32_T ObjectLength;
  real32_T ObjectWidth;
  real32_T ObjectHight;
  real32_T ObjectAzimuthAngle;
  real32_T ObjectYawAngle;
  uint8_T ObjectMovingState;
  uint8_T ObjectMovingOrientation;
  real32_T dxFisrtDetection;
  real32_T dyFisrtDetection;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  real32_T dxVariance;
  real32_T dyVariance;
  real32_T vxVariance;
  real32_T vyVariance;
  real32_T axVariance;
  real32_T ayVariance;
  real32_T ObjectLengthVar;
  real32_T ObjectWidthVar;
  real32_T ObjectYawAngleVar;
  real32_T ObjectTypeProb;
  real32_T ObjectMovingStateProb;
  real32_T ObjectMovingOrientationProb;
  real32_T ObjectExistProb;
  real32_T ObjectIsObstacleProb;
  real32_T ObjectRCS;
  real32_T ObjectMeasurementStatus;
  uint16_T ObjectLifeCycle;
  boolean_T ObjUpdate;
} TOS_AEB_LATOBJ_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TOS_AEB_JAOBJ_BUS_
#define DEFINED_TYPEDEF_FOR_TOS_AEB_JAOBJ_BUS_

typedef struct {
  uint8_T FusionType;
  uint8_T ObjectID;
  uint8_T ObjectType;
  boolean_T ObjectTypeCameraConfirmed;
  real32_T ObjectLength;
  real32_T ObjectWidth;
  real32_T ObjectHight;
  real32_T ObjectAzimuthAngle;
  real32_T ObjectYawAngle;
  uint8_T ObjectMovingState;
  uint8_T ObjectMovingOrientation;
  real32_T dxFisrtDetection;
  real32_T dyFisrtDetection;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  real32_T dxVariance;
  real32_T dyVariance;
  real32_T vxVariance;
  real32_T vyVariance;
  real32_T axVariance;
  real32_T ayVariance;
  real32_T ObjectLengthVar;
  real32_T ObjectWidthVar;
  real32_T ObjectYawAngleVar;
  real32_T ObjectTypeProb;
  real32_T ObjectMovingStateProb;
  real32_T ObjectMovingOrientationProb;
  real32_T ObjectExistProb;
  real32_T ObjectIsObstacleProb;
  real32_T ObjectRCS;
  real32_T ObjectMeasurementStatus;
  uint16_T ObjectLifeCycle;
  boolean_T ObjUpdate;
} TOS_AEB_JAOBJ_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_VCAN_ABM_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_VCAN_ABM_BUS_

typedef struct {
  boolean_T DrvSBR;
  boolean_T PassSBR;
  real32_T VehLgtAccel;
  boolean_T VehLgtAccelVld;
} AEB_VCAN_ABM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_VCAN_ESP_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_VCAN_ESP_BUS_

typedef struct {
  uint8_T FLWheelDriveDirection;
  boolean_T FLWheelSpdVld;
  real32_T FLWheelSpd;
  uint8_T FRWheelDriveDirection;
  boolean_T FRWheelSpdVld;
  real32_T FRWheelSpd;
  uint8_T RLWheelDriveDirection;
  boolean_T RLWheelSpdVld;
  real32_T RLWheelSpd;
  uint8_T RRWheelDriveDirection;
  boolean_T RRWheelSpdVld;
  real32_T RRWheelSpd;
  boolean_T BTCActv;
  boolean_T PTCActv;
  boolean_T VDCActv;
  boolean_T ESP_MasterCylBrkPressVld;
  real32_T ESP_MasterCylBrkPress;
  uint8_T VehStandstill;
  boolean_T ABAactv;
  boolean_T ABAavailable;
  boolean_T ABPActv;
  boolean_T ABPAvailable;
  boolean_T AEBAvailable;
  boolean_T AEBBAActv;
  boolean_T AEBIBActv;
  boolean_T AWBActv;
  boolean_T AWBAvailable;
  uint8_T AVHSts;
  uint8_T DrivingModDis;
  boolean_T ESPFuncOffSts;
  real32_T VehSpd;
} AEB_VCAN_ESP_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_VCAN_BCM_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_VCAN_BCM_BUS_

typedef struct {
  boolean_T DrvDoorSts;
  boolean_T PassengerDoorSts;
} AEB_VCAN_BCM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_VCAN_CSA_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_VCAN_CSA_BUS_

typedef struct {
  boolean_T LTurnLmpSwtSts;
  boolean_T RTurnLmpSwtSts;
  real32_T SteerWheelAng;
  boolean_T SteerWheelAngSign;
  real32_T SteerWheelSpd;
  boolean_T SteerWheelSpdSign;
} AEB_VCAN_CSA_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_VCAN_DCT_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_VCAN_DCT_BUS_

typedef struct {
  boolean_T CurrentGearValid;
  uint8_T CURRENT_GEAR;
} AEB_VCAN_DCT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_VCAN_ECM_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_VCAN_ECM_BUS_

typedef struct {
  uint8_T BrkPedalSts;
  uint8_T HCU_Start_StopSts;
  uint8_T EngState;
  uint8_T AccelPedalPosnVldty;
  boolean_T AccPedalOverride;
  real32_T AccelPedlPosnDiagc;
} AEB_VCAN_ECM_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_VCAN_HUT_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_VCAN_HUT_BUS_

typedef struct {
  boolean_T AEB_PedSwtReq;
  boolean_T AEB_VehSwtReq;
  boolean_T AEB_JASwtReq;
  uint8_T FCW_SnvtySet;
} AEB_VCAN_HUT_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_VCAN_CR_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_VCAN_CR_BUS_

typedef struct {
  uint8_T FCTB_ABA_Level;
  boolean_T FCTB_ABA_Req;
  boolean_T FCTB_ABP_Req;
  boolean_T CR_BrkgReq;
  real32_T CR_BrkgReqVal;
} AEB_VCAN_CR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_VCAN_HCU_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_VCAN_HCU_BUS_

typedef struct {
  uint8_T HCU_PowertrainSts;
  real32_T HCU_AccelPedalPosn_Diag;
  boolean_T HCU_AccelPedalPosn_DiagValid;
  uint8_T HCU_DrvMod;
} AEB_VCAN_HCU_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DFIM_AEB_STS_BUS_
#define DEFINED_TYPEDEF_FOR_DFIM_AEB_STS_BUS_

typedef struct {
  uint8_T AEB_Error;
  uint8_T AEB_Ped_Error;
  uint8_T AEB_JA_Error;
} DFIM_AEB_STS_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FCF_VD_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FCF_VD_HDR_BUS_

typedef struct {
  uint8_T FCF_VD_Zero_byte;
  uint8_T FCF_VD_Protocol_Version;
  uint8_T FCF_VD_SyncID;
  uint8_T Reserved_1;
  uint32_T FCF_Header_CRC;
  uint16_T FCF_VD_AEB_Supp_FCV;
  uint16_T FCF_VD_Alert_FCV;
  uint8_T FCF_VD_ID_FCV;
  uint8_T FCF_VD_HeadWay_Alert;
  real32_T FCF_VD_HeadWay_Distance;
  real32_T FCF_VD_Header_Buffer_C0;
  uint8_T FCF_VD_Header_Buffer_C1;
  uint8_T Reserved_2;
  uint16_T FCF_VD_HW_Supp_Reason;
  real32_T FCF_VD_Header_Buffer_C2;
  uint8_T FCF_Header_Buffer;
  uint32_T FCF_VD_CRC_A;
  uint16_T FCF_VD_Alert_A;
  uint8_T FCF_VD_ID_A;
  real32_T FCF_VD_Buffer_C0_A;
  uint16_T FCF_VD_AEB_Supp_A;
  uint8_T FCF_VD_Safety_Suppressed_A;
  uint8_T Reserved_3;
  uint32_T FCF_VD_FCW_Supp_A;
  uint8_T FCF_VD_Set_Type_A;
  real32_T FCF_VD_TTC_Thresh_A;
  real32_T FCF_VD_Buffer_C1_A;
  uint8_T FCF_VD_Buffer_A;
  uint32_T FCF_VD_CRC_B;
  uint16_T FCF_VD_Alert_B;
  uint8_T FCF_VD_ID_B;
  real32_T FCF_VD_Buffer_C0_B;
  uint16_T FCF_VD_AEB_Supp_B;
  uint8_T FCF_VD_Safety_Suppressed_B;
  uint8_T Reserved_4;
  uint32_T FCF_VD_FCW_Supp_B;
  uint8_T FCF_VD_Set_Type_B;
  real32_T FCF_VD_TTC_Thresh_B;
  real32_T FCF_VD_Buffer_C1_B;
  uint8_T FCF_VD_Buffer_B;
  uint32_T FCF_VD_CRC_C;
  uint16_T FCF_VD_Alert_C;
  uint8_T FCF_VD_ID_C;
  real32_T FCF_VD_Buffer_C0_C;
  uint16_T FCF_VD_AEB_Supp_C;
  uint8_T FCF_VD_Safety_Suppressed_C;
  uint8_T Reserved_5;
  uint32_T FCF_VD_FCW_Supp_C;
  uint8_T FCF_VD_Set_Type_C;
  real32_T FCF_VD_TTC_Thresh_C;
  real32_T FCF_VD_Buffer_C1_C;
  uint8_T FCF_VD_Buffer_C;
  uint32_T FCF_VD_CRC_D;
  uint16_T FCF_VD_Alert_D;
  uint8_T FCF_VD_ID_D;
  real32_T FCF_VD_Buffer_C0_D;
  uint16_T FCF_VD_AEB_Supp_D;
  uint8_T FCF_VD_Safety_Suppressed_D;
  uint8_T Reserved_6;
  uint32_T FCF_VD_FCW_Supp_D;
  uint8_T FCF_VD_Set_Type_D;
  real32_T FCF_VD_TTC_Thresh_D;
  real32_T FCF_VD_Buffer_C1_D;
  uint8_T FCF_VD_Buffer_D;
  uint32_T FCF_VD_CRC_E;
  uint16_T FCF_VD_Alert_E;
  uint8_T FCF_VD_ID_E;
  real32_T FCF_VD_Buffer_C0_E;
  uint16_T FCF_VD_AEB_Supp_E;
  uint8_T FCF_VD_Safety_Suppressed_E;
  uint8_T Reserved_7;
  uint32_T FCF_VD_FCW_Supp_E;
  uint8_T FCF_VD_Set_Type_E;
  real32_T FCF_VD_TTC_Thresh_E;
  real32_T FCF_VD_Buffer_C1_E;
  uint8_T FCF_VD_Buffer_E;
  uint32_T FCF_VD_CRC_F;
  uint16_T FCF_VD_Alert_F;
  uint8_T FCF_VD_ID_F;
  real32_T FCF_VD_Buffer_C0_F;
  uint16_T FCF_VD_AEB_Supp_F;
  uint8_T FCF_VD_Safety_Suppressed_F;
  uint8_T Reserved_8;
  uint32_T FCF_VD_FCW_Supp_F;
  uint8_T FCF_VD_Set_Type_F;
  real32_T FCF_VD_TTC_Thresh_F;
  real32_T FCF_VD_Buffer_C1_F;
  uint8_T FCF_VD_Buffer_F;
  uint32_T FCF_VD_CRC_G;
  uint16_T FCF_VD_Alert_G;
  uint8_T FCF_VD_ID_G;
  real32_T FCF_VD_Buffer_C0_G;
  uint16_T FCF_VD_AEB_Supp_G;
  uint8_T FCF_VD_Safety_Suppressed_G;
  uint8_T Reserved_9;
  uint32_T FCF_VD_FCW_Supp_G;
  uint8_T FCF_VD_Set_Type_G;
  real32_T FCF_VD_TTC_Thresh_G;
  real32_T FCF_VD_Buffer_C1_G;
  uint8_T FCF_VD_Buffer_G;
  uint32_T FCF_VD_CRC_H;
  uint16_T FCF_VD_Alert_H;
  uint8_T FCF_VD_ID_H;
  real32_T FCF_VD_Buffer_C0_H;
  uint16_T FCF_VD_AEB_Supp_H;
  uint8_T FCF_VD_Safety_Suppressed_H;
  uint8_T Reserved_10;
  uint32_T FCF_VD_FCW_Supp_H;
  uint8_T FCF_VD_Set_Type_H;
  real32_T FCF_VD_TTC_Thresh_H;
  real32_T FCF_VD_Buffer_C1_H;
  uint8_T FCF_VD_Buffer_H;
} EQ4_FCF_VD_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FCF_VD_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FCF_VD_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_FCF_VD_HDR_BUS EQ4_FCF_VD_HDR;
} EQ4_FCF_VD_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FCF_VRU_HDR_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FCF_VRU_HDR_BUS_

typedef struct {
  uint8_T FCF_VRU_Zero_byte;
  uint8_T FCF_VRU_Protocol_Version;
  uint8_T FCF_VRU_Sync_ID;
  real32_T FCF_VRU_Header_Buffer_C0;
  uint8_T FCF_VRU_Header_Buffer;
  uint32_T FCF_VRU_CRC_L1;
  uint16_T FCF_VRU_Alert_L1;
  real32_T FCF_VRU_Buffer_C0_L1;
  uint8_T FCF_VRU_PED_ID_L1;
  uint8_T FCF_VRU_Suppress_L1;
  uint8_T FCF_VRU_Safety_Suppressed_L1;
  uint8_T FCF_VRU_Set_Type_L1;
  uint8_T FCF_VRU_Curr_In_Path_L1;
  uint8_T FCF_VRU_Pred_In_Path_L1;
  real32_T FCF_VRU_TTC_L1;
  real32_T FCF_VRU_TTC_Thresh_L1;
  uint8_T FCF_VRU_Buffer_L1;
  uint32_T FCF_VRU_CRC_L2;
  uint16_T FCF_VRU_Alert_L2;
  real32_T FCF_VRU_Buffer_C0_L2;
  uint8_T FCF_VRU_PED_ID_L2;
  uint8_T FCF_VRU_Suppress_L2;
  uint8_T FCF_VRU_Safety_Suppressed_L2;
  uint8_T FCF_VRU_Set_Type_L2;
  uint8_T FCF_VRU_Curr_In_Path_L2;
  uint8_T FCF_VRU_Pred_In_Path_L2;
  real32_T FCF_VRU_TTC_L2;
  real32_T FCF_VRU_TTC_Thresh_L2;
  uint8_T FCF_VRU_Buffer_L2;
  uint32_T FCF_VRU_CRC_L3;
  uint16_T FCF_VRU_Alert_L3;
  real32_T FCF_VRU_Buffer_C0_L3;
  uint8_T FCF_VRU_PED_ID_L3;
  uint8_T FCF_VRU_Suppress_L3;
  uint8_T FCF_VRU_Safety_Suppressed_L3;
  uint8_T FCF_VRU_Set_Type_L3;
  uint8_T FCF_VRU_Curr_In_Path_L3;
  uint8_T FCF_VRU_Pred_In_Path_L3;
  real32_T FCF_VRU_TTC_L3;
  real32_T FCF_VRU_TTC_Thresh_L3;
  uint8_T FCF_VRU_Buffer_L3;
  uint32_T FCF_VRU_CRC_L4;
  uint16_T FCF_VRU_Alert_L4;
  real32_T FCF_VRU_Buffer_C0_L4;
  uint8_T FCF_VRU_PED_ID_L4;
  uint8_T FCF_VRU_Suppress_L4;
  uint8_T FCF_VRU_Safety_Suppressed_L4;
  uint8_T FCF_VRU_Set_Type_L4;
  uint8_T FCF_VRU_Curr_In_Path_L4;
  uint8_T FCF_VRU_Pred_In_Path_L4;
  real32_T FCF_VRU_TTC_L4;
  real32_T FCF_VRU_TTC_Thresh_L4;
  uint8_T FCF_VRU_Buffer_L4;
  uint32_T FCF_VRU_CRC_L5;
  uint16_T FCF_VRU_Alert_L5;
  real32_T FCF_VRU_Buffer_C0_L5;
  uint8_T FCF_VRU_PED_ID_L5;
  uint8_T FCF_VRU_Suppress_L5;
  uint8_T FCF_VRU_Safety_Suppressed_L5;
  uint8_T FCF_VRU_Set_Type_L5;
  uint8_T FCF_VRU_Curr_In_Path_L5;
  uint8_T FCF_VRU_Pred_In_Path_L5;
  real32_T FCF_VRU_TTC_L5;
  real32_T FCF_VRU_TTC_Thresh_L5;
  uint8_T FCF_VRU_Buffer_L5;
  uint32_T FCF_VRU_CRC_L6;
  uint16_T FCF_VRU_Alert_L6;
  real32_T FCF_VRU_Buffer_C0_L6;
  uint8_T FCF_VRU_PED_ID_L6;
  uint8_T FCF_VRU_Suppress_L6;
  uint8_T FCF_VRU_Safety_Suppressed_L6;
  uint8_T FCF_VRU_Set_Type_L6;
  uint8_T FCF_VRU_Curr_In_Path_L6;
  uint8_T FCF_VRU_Pred_In_Path_L6;
  real32_T FCF_VRU_TTC_L6;
  real32_T FCF_VRU_TTC_Thresh_L6;
  uint8_T FCF_VRU_Buffer_L6;
  uint32_T FCF_VRU_CRC_L7;
  uint16_T FCF_VRU_Alert_L7;
  real32_T FCF_VRU_Buffer_C0_L7;
  uint8_T FCF_VRU_PED_ID_L7;
  uint8_T FCF_VRU_Suppress_L7;
  uint8_T FCF_VRU_Safety_Suppressed_L7;
  uint8_T FCF_VRU_Set_Type_L7;
  uint8_T FCF_VRU_Curr_In_Path_L7;
  uint8_T FCF_VRU_Pred_In_Path_L7;
  real32_T FCF_VRU_TTC_L7;
  real32_T FCF_VRU_TTC_Thresh_L7;
  uint8_T FCF_VRU_Buffer_L7;
  uint32_T FCF_VRU_CRC_L8;
  uint16_T FCF_VRU_Alert_L8;
  real32_T FCF_VRU_Buffer_C0_L8;
  uint8_T FCF_VRU_PED_ID_L8;
  uint8_T FCF_VRU_Suppress_L8;
  uint8_T FCF_VRU_Safety_Suppressed_L8;
  uint8_T FCF_VRU_Set_Type_L8;
  uint8_T FCF_VRU_Curr_In_Path_L8;
  uint8_T FCF_VRU_Pred_In_Path_L8;
  real32_T FCF_VRU_TTC_L8;
  real32_T FCF_VRU_TTC_Thresh_L8;
  uint8_T FCF_VRU_Buffer_L8;
} EQ4_FCF_VRU_HDR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EQ4_FCF_VRU_BUS_
#define DEFINED_TYPEDEF_FOR_EQ4_FCF_VRU_BUS_

typedef struct {
  EQ4_APPINFO_BUS EQ4_APPINFO;
  EQ4_FCF_VRU_HDR_BUS EQ4_FCF_VRU_HDR;
} EQ4_FCF_VRU_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_DVR_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_DVR_INFO_BUS_

typedef struct {
  uint8_T AEBObjID;
  boolean_T AEBObjVideoCfmd;
  uint8_T AEBObjState;
  real32_T AEBObjDx;
  real32_T AEBObjDy;
  real32_T AEBObjVx;
  real32_T AEBObjVy;
  real32_T AEBObjAx;
  real32_T AEBObjAy;
  real32_T AEBObjExist;
  real32_T AEBObjObstcl;
  uint16_T AEBObjCntAlive;
  uint8_T AEBObjOverlap;
  uint8_T AEBObjDrvby;
  uint8_T PedObjID;
  boolean_T PedObjVideoCfmd;
  uint8_T PedObjState;
  real32_T PedObjDx;
  real32_T PedObjDy;
  real32_T PedObjVx;
  real32_T PedObjVy;
  real32_T PedObjAx;
  real32_T PedObjAy;
  real32_T PedObjExist;
  real32_T PedObjObstcl;
  uint16_T PedObjCntAlive;
  uint8_T CyclistObjID;
  boolean_T CyclistObjVideoCfmd;
  uint8_T CyclistObjState;
  real32_T CyclistObjDx;
  real32_T CyclistObjDy;
  real32_T CyclistObjVx;
  real32_T CyclistObjVy;
  real32_T CyclistObjAx;
  real32_T CyclistObjAy;
  real32_T CyclistObjExist;
  real32_T CyclistObjObstcl;
  uint16_T CyclistObjCntAlive;
  uint8_T AEBJAObjID;
  boolean_T AEBJAObjVideoCfmd;
  uint8_T AEBJAObjState;
  real32_T AEBJAObjDx;
  real32_T AEBJAObjDy;
  real32_T AEBJAObjVx;
  real32_T AEBJAObjVy;
  real32_T AEBJAObjAx;
  real32_T AEBJAObjAy;
  real32_T AEBJAObjExist;
  real32_T AEBJAObjObstcl;
  uint16_T AEBJAObjCntAlive;
  uint8_T JAPedObjID;
  boolean_T JAPedObjVideoCfmd;
  uint8_T JAPedObjState;
  real32_T JAPedObjDx;
  real32_T JAPedObjDy;
  real32_T JAPedObjVx;
  real32_T JAPedObjVy;
  real32_T JAPedObjAx;
  real32_T JAPedObjAy;
  real32_T JAPedObjExist;
  real32_T JAPedObjObstcl;
  uint16_T JAPedObjCntAlive;
} AEB_DVR_INFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_EDR_LONOBJ_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_EDR_LONOBJ_INFO_BUS_

typedef struct {
  uint8_T FusionType;
  uint8_T ObjectID;
  uint8_T ObjectType;
  boolean_T ObjectTypeCameraConfirmed;
  real32_T ObjectLength;
  real32_T ObjectWidth;
  real32_T ObjectHight;
  real32_T ObjectYawAngle;
  uint8_T ObjectMovingState;
  uint8_T ObjectMovingOrientation;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  real32_T dxVariance;
  real32_T dyVariance;
  real32_T ObjectExistProb;
  real32_T ObjectIsObstacleProb;
  real32_T ObjectMeasurementStatus;
  real32_T dyObject2Center;
  real32_T dyEgo2Center;
} AEB_EDR_LONOBJ_INFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_EDR_LATPED_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_EDR_LATPED_INFO_BUS_

typedef struct {
  uint8_T FusionType;
  uint8_T ObjectID;
  uint8_T ObjectType;
  boolean_T ObjectTypeCameraConfirmed;
  real32_T ObjectLength;
  real32_T ObjectWidth;
  real32_T ObjectHight;
  real32_T ObjectYawAngle;
  uint8_T ObjectMovingState;
  uint8_T ObjectMovingOrientation;
  real32_T dxFisrtDetection;
  real32_T dyFisrtDetection;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  real32_T dxVariance;
  real32_T dyVariance;
  real32_T ObjectExistProb;
  real32_T ObjectIsObstacleProb;
  real32_T ObjectMeasurementStatus;
  real32_T ObjectLifeCycle;
} AEB_EDR_LATPED_INFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_EDR_LATCYC_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_EDR_LATCYC_INFO_BUS_

typedef struct {
  uint8_T FusionType;
  uint8_T ObjectID;
  uint8_T ObjectType;
  boolean_T ObjectTypeCameraConfirmed;
  real32_T ObjectLength;
  real32_T ObjectWidth;
  real32_T ObjectHight;
  real32_T ObjectYawAngle;
  uint8_T ObjectMovingState;
  uint8_T ObjectMovingOrientation;
  real32_T dxFisrtDetection;
  real32_T dyFisrtDetection;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  real32_T dxVariance;
  real32_T dyVariance;
  real32_T ObjectExistProb;
  real32_T ObjectIsObstacleProb;
  real32_T ObjectMeasurementStatus;
  real32_T ObjectLifeCycle;
} AEB_EDR_LATCYC_INFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_EDR_JAPED_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_EDR_JAPED_INFO_BUS_

typedef struct {
  uint8_T FusionType;
  uint8_T ObjectID;
  uint8_T ObjectType;
  boolean_T ObjectTypeCameraConfirmed;
  real32_T ObjectLength;
  real32_T ObjectWidth;
  real32_T ObjectHight;
  real32_T ObjectYawAngle;
  uint8_T ObjectMovingState;
  uint8_T ObjectMovingOrientation;
  real32_T dxFisrtDetection;
  real32_T dyFisrtDetection;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  real32_T dxVariance;
  real32_T dyVariance;
  real32_T ObjectExistProb;
  real32_T ObjectIsObstacleProb;
  real32_T ObjectMeasurementStatus;
  real32_T ObjectLifeCycle;
} AEB_EDR_JAPED_INFO_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AEB_EDR_JAVEH_INFO_BUS_
#define DEFINED_TYPEDEF_FOR_AEB_EDR_JAVEH_INFO_BUS_

typedef struct {
  uint8_T FusionType;
  uint8_T ObjectID;
  uint8_T ObjectType;
  boolean_T ObjectTypeCameraConfirmed;
  real32_T ObjectLength;
  real32_T ObjectWidth;
  real32_T ObjectHight;
  real32_T ObjectYawAngle;
  uint8_T ObjectMovingState;
  uint8_T ObjectMovingOrientation;
  real32_T dxFisrtDetection;
  real32_T dyFisrtDetection;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T vx;
  real32_T vy;
  real32_T ax;
  real32_T ay;
  real32_T dxVariance;
  real32_T dyVariance;
  real32_T ObjectExistProb;
  real32_T ObjectIsObstacleProb;
  real32_T ObjectMeasurementStatus;
  real32_T ObjectLifeCycle;
} AEB_EDR_JAVEH_INFO_BUS;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_Noa_Nofusion_T RT_MODEL_Noa_Nofusion_T;

#endif                                 /* RTW_HEADER_Noa_Nofusion_types_h_ */
