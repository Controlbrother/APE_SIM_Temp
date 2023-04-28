/*
 * PubIfStateVSM_MDL_types.h
 *
 * Code generation for model "PubIfStateVSM_MDL".
 *
 * Model version              : 1.130
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:14:44 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfStateVSM_MDL_types_h_
#define RTW_HEADER_PubIfStateVSM_MDL_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_HWA_STATE_
#define DEFINED_TYPEDEF_FOR_HWA_STATE_

typedef uint8_T HWA_STATE;

/* enum HWA_STATE */
#define HWA_STATE_HWA_Off              ((HWA_STATE)0U)           /* Default value */
#define HWA_STATE_HWA_Idle             ((HWA_STATE)1U)
#define HWA_STATE_HWA_Ready            ((HWA_STATE)2U)
#define HWA_STATE_HWA_CCAct            ((HWA_STATE)3U)
#define HWA_STATE_HWA_Pause            ((HWA_STATE)4U)
#define HWA_STATE_HWA_LeftTurn         ((HWA_STATE)5U)
#define HWA_STATE_HWA_RightTurn        ((HWA_STATE)6U)
#define HWA_STATE_HWA_Error            ((HWA_STATE)7U)
#define HWA_STATE_HWA_SafeStop         ((HWA_STATE)9U)
#define HWA_STATE_HWA_SlowRetreat      ((HWA_STATE)10U)
#define HWA_STATE_HWA_LeftTurnPrepare  ((HWA_STATE)11U)
#define HWA_STATE_HWA_RightTurnPrepare ((HWA_STATE)12U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_TJA_STATE_
#define DEFINED_TYPEDEF_FOR_TJA_STATE_

typedef uint8_T TJA_STATE;

/* enum TJA_STATE */
#define TJA_STATE_TJA_Off              ((TJA_STATE)0U)           /* Default value */
#define TJA_STATE_TJA_Idle             ((TJA_STATE)1U)
#define TJA_STATE_TJA_Ready            ((TJA_STATE)2U)
#define TJA_STATE_TJA_Active           ((TJA_STATE)3U)
#define TJA_STATE_TJA_Error            ((TJA_STATE)7U)
#define TJA_STATE_TJA_SafeStop         ((TJA_STATE)9U)
#define TJA_STATE_TJA_Wait             ((TJA_STATE)6U)
#define TJA_STATE_TJA_SlowRetreat      ((TJA_STATE)10U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_ACC_STATE_
#define DEFINED_TYPEDEF_FOR_ACC_STATE_

typedef enum {
  ACC_STATE_ACC_Off = 0,               /* Default value */
  ACC_STATE_ACC_Reject = 1,
  ACC_STATE_ACC_Standby = 2,
  ACC_STATE_ACC_ActiveControl = 3,
  ACC_STATE_ACC_BrakeOnly = 4,
  ACC_STATE_ACC_Override = 5,
  ACC_STATE_ACC_StandWait = 6,
  ACC_STATE_ACC_Failure = 7,
  ACC_STATE_ACC_StandActive = 9
} ACC_STATE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LCK_STATE_
#define DEFINED_TYPEDEF_FOR_LCK_STATE_

typedef uint8_T LCK_STATE;

/* enum LCK_STATE */
#define LCK_STATE_LCK_Off              ((LCK_STATE)0U)           /* Default value */
#define LCK_STATE_LCK_Idle             ((LCK_STATE)1U)
#define LCK_STATE_LCK_Ready            ((LCK_STATE)2U)
#define LCK_STATE_LCK_Active           ((LCK_STATE)3U)
#define LCK_STATE_LCK_Error            ((LCK_STATE)7U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_STATE_
#define DEFINED_TYPEDEF_FOR_STATE_

typedef uint8_T STATE;

/* enum STATE */
#define STATE_OFF                      ((STATE)0U)               /* Default value */
#define STATE_IDLE                     ((STATE)1U)
#define STATE_READY                    ((STATE)2U)
#define STATE_ACTIVE                   ((STATE)3U)
#define STATE_ACTIVE_LEFT              ((STATE)4U)
#define STATE_ACTIVE_RIGHT             ((STATE)5U)
#define STATE_ERROR                    ((STATE)6U)
#define STATE_DEFAULT                  ((STATE)7U)
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

#ifndef DEFINED_TYPEDEF_FOR_VCAN_AC_MSG_BUS_
#define DEFINED_TYPEDEF_FOR_VCAN_AC_MSG_BUS_

typedef struct {
  real32_T ACAmbTemp;
} VCAN_AC_MSG_BUS;

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

#ifndef DEFINED_TYPEDEF_FOR_ACC_DrvrOpr_Bus_
#define DEFINED_TYPEDEF_FOR_ACC_DrvrOpr_Bus_

typedef struct {
  boolean_T ACCon;
  boolean_T TJAOn;
  boolean_T User_ACCSet;
  boolean_T User_Res;
  boolean_T User_TJASet;
} ACC_DrvrOpr_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HAP_CAN_
#define DEFINED_TYPEDEF_FOR_HAP_CAN_

typedef struct {
  uint8_T USS_FrontSys_Status;
  real32_T USS_FLCNear_Obj_Confidence;
  real32_T USS_FLCNear_Obj_Pos_X;
  real32_T USS_FLCNear_Obj_Pos_Y;
  real32_T USS_FLMNear_Obj_Confidence;
  real32_T USS_FLMNear_Obj_Pos_X;
  real32_T USS_FLMNear_Obj_Pos_Y;
  real32_T USS_FRMNear_Obj_Confidence;
  real32_T USS_FRMNear_Obj_Pos_X;
  real32_T USS_FRMNear_Obj_Pos_Y;
  real32_T USS_FRCNear_Obj_Confidence;
  real32_T USS_FRCNear_Obj_Pos_X;
  real32_T USS_FRCNear_Obj_Pos_Y;
} HAP_CAN;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EHR_Bus_
#define DEFINED_TYPEDEF_FOR_EHR_Bus_

typedef struct {
  uint8_T DrivingOnHighWay;
  uint8_T FormOfWay;
  uint16_T TunnelDistance;
  uint16_T RampDistance;
  uint8_T MapDataValid;
} EHR_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ESS_VehicleSts_BUS_
#define DEFINED_TYPEDEF_FOR_ESS_VehicleSts_BUS_

typedef struct {
  boolean_T AEB_PedTrig;
  boolean_T AEB_VehTrig;
  uint8_T Inter_FCW_Warn;
} ESS_VehicleSts_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ELKSTATE_
#define DEFINED_TYPEDEF_FOR_ELKSTATE_

typedef uint8_T ELKSTATE;

/* enum ELKSTATE */
#define ELKSTATE_ELK_OFF               ((ELKSTATE)0U)            /* Default value */
#define ELKSTATE_ELK_IDLE              ((ELKSTATE)1U)
#define ELKSTATE_ELK_READY             ((ELKSTATE)2U)
#define ELKSTATE_ELK_ACTIVE_LEFT       ((ELKSTATE)3U)
#define ELKSTATE_ELK_ACTIVE_RIGHT      ((ELKSTATE)4U)
#define ELKSTATE_ELK_ONCOMING_LEFT     ((ELKSTATE)5U)
#define ELKSTATE_ELK_ONCOMING_RIGHT    ((ELKSTATE)6U)
#define ELKSTATE_ELK_OVERTAKING_LEFT   ((ELKSTATE)7U)
#define ELKSTATE_ELK_OVERTAKING_RIGHT  ((ELKSTATE)8U)
#define ELKSTATE_ELK_ERROR             ((ELKSTATE)9U)
#define ELKSTATE_ELK_DEFAULT           ((ELKSTATE)10U)
#endif

#ifndef DEFINED_TYPEDEF_FOR_LaneARe_SP_
#define DEFINED_TYPEDEF_FOR_LaneARe_SP_

typedef struct {
  boolean_T Left_Valid;
  real32_T Left_A3;
  real32_T Left_A2;
  real32_T Left_A1;
  real32_T Left_A0;
  real32_T Left_Range;
  uint8_T Left_Type;
  boolean_T Right_Valid;
  real32_T Right_A3;
  real32_T Right_A2;
  real32_T Right_A1;
  real32_T Right_A0;
  real32_T Right_Range;
  uint8_T Right_Type;
  boolean_T LeftRE_Valid;
  real32_T LeftRE_A3;
  real32_T LeftRE_A2;
  real32_T LeftRE_A1;
  real32_T LeftRE_A0;
  real32_T LeftRE_Range;
  boolean_T RightRE_Valid;
  real32_T RightRE_A3;
  real32_T RightRE_A2;
  real32_T RightRE_A1;
  real32_T RightRE_A0;
  real32_T RightRE_Range;
  real32_T LeftValid_A0;
  real32_T LeftValid_A1;
  real32_T LeftValid_A2;
  real32_T LeftValid_A3;
  real32_T LeftValid_Range;
  boolean_T LeftValid_Valid;
  uint8_T LeftValid_Type;
  real32_T RightValid_A0;
  real32_T RightValid_A1;
  real32_T RightValid_A2;
  real32_T RightValid_A3;
  real32_T RightValid_Range;
  boolean_T RightValid_Valid;
  uint8_T RightValid_Type;
  real32_T DeltaY;
  real32_T T_A0;
  real32_T T_A1;
  real32_T T_A2;
  real32_T T_A3;
  real32_T T_Range;
  boolean_T T_Valid;
  real32_T C_Lanewidth;
  boolean_T LeftChange;
  boolean_T RightChange;
  boolean_T Host_LRE;
  boolean_T Host_RRE;
  real32_T LaneCurve;
  boolean_T HeadingAngle_In;
  boolean_T HeadingAngle_Out;
  real32_T Left_LaneRe30;
  real32_T Right_LaneRe30;
  real32_T Scene_LaneValid;
  real32_T LDWLKAELK_LWidth;
  real32_T laneCenterA0;
  real32_T laneCenterA1;
  real32_T laneCenterA2;
  real32_T laneCenterA3;
  boolean_T laneCenterValid;
  boolean_T Left_LaneValid;
  boolean_T Right_LaneValid;
  boolean_T Left_ReValid;
  boolean_T Right_ReValid;
  real32_T Left_LaneOp_A0;
  real32_T Right_LaneOp_A0;
  real32_T Left_ReOp_A0;
  real32_T Right_ReOp_A0;
  real32_T Signal_Lane1;
  real32_T Signal_Lane2;
  real32_T Signal_Lane3;
  real32_T Left_Lane_A1;
  real32_T Right_Lane_A1;
  real32_T Left_Re_A1;
  real32_T Right_Re_A1;
} LaneARe_SP;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LaneARe_SP_LCK_
#define DEFINED_TYPEDEF_FOR_LaneARe_SP_LCK_

typedef struct {
  boolean_T Left_Valid;
  real32_T Left_A3;
  real32_T Left_A2;
  real32_T Left_A1;
  real32_T Left_A0;
  real32_T Left_Range;
  uint8_T Left_Type;
  boolean_T Right_Valid;
  real32_T Right_A3;
  real32_T Right_A2;
  real32_T Right_A1;
  real32_T Right_A0;
  real32_T Right_Range;
  uint8_T Right_Type;
  boolean_T LeftRE_Valid;
  real32_T LeftRE_A3;
  real32_T LeftRE_A2;
  real32_T LeftRE_A1;
  real32_T LeftRE_A0;
  real32_T LeftRE_Range;
  boolean_T RightRE_Valid;
  real32_T RightRE_A3;
  real32_T RightRE_A2;
  real32_T RightRE_A1;
  real32_T RightRE_A0;
  real32_T RightRE_Range;
  real32_T LeftValid_A0;
  real32_T LeftValid_A1;
  real32_T LeftValid_A2;
  real32_T LeftValid_A3;
  real32_T LeftValid_Range;
  boolean_T LeftValid_Valid;
  uint8_T LeftValid_Type;
  real32_T RightValid_A0;
  real32_T RightValid_A1;
  real32_T RightValid_A2;
  real32_T RightValid_A3;
  real32_T RightValid_Range;
  boolean_T RightValid_Valid;
  uint8_T RightValid_Type;
  real32_T DeltaY;
  real32_T T_A0;
  real32_T T_A1;
  real32_T T_A2;
  real32_T T_A3;
  real32_T T_Range;
  boolean_T T_Valid;
  real32_T C_Lanewidth;
  boolean_T LeftChange;
  boolean_T RightChange;
  boolean_T Host_LRE;
  boolean_T Host_RRE;
  real32_T LaneCurve;
  boolean_T HeadingAngle_In;
  boolean_T HeadingAngle_Out;
  real32_T Left_LaneRe30;
  real32_T Right_LaneRe30;
  real32_T Scene_LaneValid;
  real32_T LDWLKAELK_LWidth;
  real32_T laneCenterA0;
  real32_T laneCenterA1;
  real32_T laneCenterA2;
  real32_T laneCenterA3;
  boolean_T laneCenterValid;
  boolean_T Left_LaneValid;
  boolean_T Right_LaneValid;
  boolean_T Left_ReValid;
  boolean_T Right_ReValid;
  real32_T Left_LaneOp_A0;
  real32_T Right_LaneOp_A0;
  real32_T Left_ReOp_A0;
  real32_T Right_ReOp_A0;
  real32_T Signal_Lane1;
  real32_T Signal_Lane2;
  real32_T Signal_Lane3;
  real32_T Left_Lane_A1;
  real32_T Right_Lane_A1;
  real32_T Left_Re_A1;
  real32_T Right_Re_A1;
} LaneARe_SP_LCK;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LCKIE_AD_
#define DEFINED_TYPEDEF_FOR_LCKIE_AD_

typedef struct {
  boolean_T IntelligentEvaSwtReq;
  real32_T canABSVehicleSpd;
  uint8_T canBCMWiperSwitchSts;
  boolean_T canBCMHighBeamSts;
  boolean_T canBCMLowBeamSts;
  boolean_T canBCMRearFogLmpSts;
  boolean_T canBCMFrontFogLmpSts;
  real32_T canEPS_DriverInputTrqValue;
  uint8_T HWASts;
} LCKIE_AD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CenterLane_
#define DEFINED_TYPEDEF_FOR_CenterLane_

typedef struct {
  real32_T LCKLane_A0;
  real32_T LCKLane_A1;
  real32_T LCKLane_A2;
  real32_T LCKLane_A3;
  boolean_T LCKLane_Valid;
} CenterLane;

#endif

#ifndef DEFINED_TYPEDEF_FOR_LaneARe_SP_LKA_
#define DEFINED_TYPEDEF_FOR_LaneARe_SP_LKA_

typedef struct {
  boolean_T Left_Valid;
  real32_T Left_A3;
  real32_T Left_A2;
  real32_T Left_A1;
  real32_T Left_A0;
  real32_T Left_Range;
  uint8_T Left_Type;
  boolean_T Right_Valid;
  real32_T Right_A3;
  real32_T Right_A2;
  real32_T Right_A1;
  real32_T Right_A0;
  real32_T Right_Range;
  uint8_T Right_Type;
  boolean_T LeftRE_Valid;
  real32_T LeftRE_A3;
  real32_T LeftRE_A2;
  real32_T LeftRE_A1;
  real32_T LeftRE_A0;
  real32_T LeftRE_Range;
  boolean_T RightRE_Valid;
  real32_T RightRE_A3;
  real32_T RightRE_A2;
  real32_T RightRE_A1;
  real32_T RightRE_A0;
  real32_T RightRE_Range;
  real32_T LeftValid_A0;
  real32_T LeftValid_A1;
  real32_T LeftValid_A2;
  real32_T LeftValid_A3;
  real32_T LeftValid_Range;
  boolean_T LeftValid_Valid;
  uint8_T LeftValid_Type;
  real32_T RightValid_A0;
  real32_T RightValid_A1;
  real32_T RightValid_A2;
  real32_T RightValid_A3;
  real32_T RightValid_Range;
  boolean_T RightValid_Valid;
  uint8_T RightValid_Type;
  real32_T DeltaY;
  real32_T T_A0;
  real32_T T_A1;
  real32_T T_A2;
  real32_T T_A3;
  real32_T T_Range;
  boolean_T T_Valid;
  real32_T C_Lanewidth;
  boolean_T LeftChange;
  boolean_T RightChange;
  boolean_T Host_LRE;
  boolean_T Host_RRE;
  real32_T LaneCurve;
  boolean_T HeadingAngle_In;
  boolean_T HeadingAngle_Out;
  real32_T Left_LaneRe30;
  real32_T Right_LaneRe30;
  real32_T Scene_LaneValid;
  real32_T LDWLKAELK_LWidth;
  real32_T laneCenterA0;
  real32_T laneCenterA1;
  real32_T laneCenterA2;
  real32_T laneCenterA3;
  boolean_T laneCenterValid;
  boolean_T Left_LaneValid;
  boolean_T Right_LaneValid;
  boolean_T Left_ReValid;
  boolean_T Right_ReValid;
  real32_T Left_LaneOp_A0;
  real32_T Right_LaneOp_A0;
  real32_T Left_ReOp_A0;
  real32_T Right_ReOp_A0;
  real32_T Signal_Lane1;
  real32_T Signal_Lane2;
  real32_T Signal_Lane3;
  real32_T Left_Lane_A1;
  real32_T Right_Lane_A1;
  real32_T Left_Re_A1;
  real32_T Right_Re_A1;
} LaneARe_SP_LKA;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TLS_DesLane_
#define DEFINED_TYPEDEF_FOR_TLS_DesLane_

typedef struct {
  boolean_T TarLineValid;
  real32_T TarLineC3;
  real32_T TarLineC2;
  real32_T TarLineC1;
  real32_T TarLineC0;
  real32_T TarLineRange;
  uint8_T TarDangerLevel;
} TLS_DesLane;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TLS_ELKLane_
#define DEFINED_TYPEDEF_FOR_TLS_ELKLane_

typedef struct {
  boolean_T ELK_LaneValid;
  real32_T ELK_LaneA3;
  real32_T ELK_LaneA2;
  real32_T ELK_LaneA1;
  real32_T ELK_LaneA0;
  real32_T ELK_LaneRange;
} TLS_ELKLane;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TLS_LKALane_
#define DEFINED_TYPEDEF_FOR_TLS_LKALane_

typedef struct {
  boolean_T LKA_LaneValid;
  real32_T LKA_LaneA3;
  real32_T LKA_LaneA2;
  real32_T LKA_LaneA1;
  real32_T LKA_LaneA0;
  real32_T LKA_LaneRange;
} TLS_LKALane;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AD_TSR_CAN_
#define DEFINED_TYPEDEF_FOR_AD_TSR_CAN_

typedef struct {
  boolean_T TSRSwtReq;
  boolean_T TSRWarnSwtReq;
  int8_T TSR_SnvtySet;
  real32_T SteerWheelAng;
  boolean_T SteerWheelAngSign;
  real32_T VehSpd;
  boolean_T IP_VehSpdUnit;
  boolean_T RTurnLmpSwtSts;
  boolean_T LTurnLmpSwtSts;
  real32_T VehYawRate;
  boolean_T FFogLmpSts_F_Pbox;
  boolean_T RFogLmpSts_R_Pbox;
  boolean_T WindshldWiprActvSts;
  real32_T ACAmbTemp;
} AD_TSR_CAN;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TSR_BUS_
#define DEFINED_TYPEDEF_FOR_TSR_BUS_

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
  boolean_T SLW_Enable;
  uint8_T SLW_SpeedLimitValueWhSnvty;
  real32_T SPL_noSupp_Dist_Remain;
  real32_T SPL_whSupp_Dist_Remain;
  real32_T TS_SignName_Dist_Remain;
  uint8_T SPL_noSupp_Value_Remain;
  uint8_T SPL_whSupp_Value_Remain;
  uint8_T TS_SignName_Value_Remain;
  uint8_T SPL_SuppName_Value_Remain;
  real32_T SPLnoSuppDistKeep;
  real32_T SPLwhSuppDistKeep;
  real32_T TSDistKeep;
} TSR_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VSM_TSR_TSR_Measurements_
#define DEFINED_TYPEDEF_FOR_VSM_TSR_TSR_Measurements_

typedef struct {
  boolean_T VSM_TSR_SLIF_Suppress;
  boolean_T VSM_TSR_SLW_Suppress;
  uint8_T VSM_TSR_SPL_Constancy_Req;
  real32_T VSM_TSR_SPL_EndDist_Req;
  boolean_T VSM_TSR_SPL_End_Req;
  uint8_T SuppName_Value_Remain;
  real32_T VSM_TSR_SPL_noSupp_Dist_Req;
  boolean_T VSM_TSR_SPL_noSupp_EnableReq;
  uint8_T VSM_TSR_SPL_noSupp_Value_Req;
  real32_T whSupp_Dist_Remain;
  real32_T SPL_whSupp_Dist_Req;
  boolean_T SPL_whSupp_EnableReq;
  uint8_T whSupp_Value_Remain;
  uint8_T SPL_whSupp_Value_Req;
  int8_T VSM_TSR_SnvtySet;
  boolean_T VSM_TSR_TS_Suppress;
} VSM_TSR_TSR_Measurements;

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

/* Forward declaration for rtModel */
typedef struct tag_RTM_PubIfStateVSM_MDL_T RT_MODEL_PubIfStateVSM_MDL_T;

#endif                               /* RTW_HEADER_PubIfStateVSM_MDL_types_h_ */
