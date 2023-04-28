/*
 * Code generation for system model 'PubIfControlLONC_MDL'
 *
 * Model                      : PubIfControlLONC_MDL
 * Model version              : 3.55
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:11 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "PubIfControlLONC_MDL.h"
#include "PubIfControlLONC_MDL_private.h"
#include "LookUp_real32_T_real32_T.h"
#include "LookUp_real_Treal32_T_real32_T.h"
#include "look1_iflf_binlcapw.h"
#include "look1_iflf_binlcpw.h"

/* Named constants for Chart: '<S6>/VLC_control_sts' */
#define PubIfControlLONC_MDL_IN_Active ((uint8_T)1U)
#define PubIfControlLONC_MDL_IN_DC     ((uint8_T)1U)
#define PubIfControlLONC_MDL_IN_EC     ((uint8_T)2U)
#define PubIfControlLONC_MDL_IN_ECDC   ((uint8_T)3U)
#define PubIfControlLONC_MDL_IN_ECDC1  ((uint8_T)1U)
#define PubIfControlLONC_MDL_IN_ECDC2  ((uint8_T)2U)
#define PubIfControlLONC_MDL_IN_Failure ((uint8_T)2U)
#define PubIfControlLONC_MDL_IN_Init   ((uint8_T)3U)
#define PubIfControlLONC_MDL_IN_Off    ((uint8_T)4U)
#define PubIfControlLONC_MDL_IN_Override ((uint8_T)4U)

/* Exported block signals */
real_T LongCtrl_ICEActWheelTrq;        /* '<S15>/Product2' */
real_T LongCtrl_VLCState;              /* '<S6>/VLC_control_sts' */
real_T LongCtrl_tECDC;                 /* '<S6>/VLC_control_sts' */
uint32_T LongCtrl_SubModel_VERSION;    /* '<S1>/Constant' */
uint32_T LongCtrl_SubModel_Number;     /* '<S1>/Constant1' */
real32_T LongCtrl_vxvRefMs;            /* '<S6>/Signal Copy1' */
real32_T LongCtrl_axvRoadSlopeMs2;     /* '<S6>/Signal Copy' */
real32_T LongCtrl_accelHoldMin;        /* '<S9>/1-D Lookup Table' */
real32_T LongCtrl_jerkHold;            /* '<S9>/1-D Lookup Table1' */
real32_T LongCtrl_accelSlidHold;       /* '<S9>/1-D Lookup Table2' */
real32_T LongCtrl_jerkSlidHold;        /* '<S9>/1-D Lookup Table3' */
real32_T LongCtrl_OverrideToDC;        /* '<S6>/Unit Delay2' */
real32_T Longctrl_NetEngTrq;           /* '<S6>/Signal Copy9' */
real32_T Longctrl_NetEngTorqNorm;      /* '<S6>/Signal Copy10' */
real32_T Longctrl_EngSpd;              /* '<S6>/Signal Copy13' */
real32_T LongCtrl_Tr_Ratio;            /* '<S6>/Saturation2' */
real32_T LongCtrl_Fz;                  /* '<S24>/Sum2' */
real32_T LongCtrl_ICEFzNm;             /* '<S15>/Product' */
real32_T Longctrl_VIE_axRefMs2;        /* '<S6>/Signal Copy2' */
real32_T Longctrl_ACC_axvCvAim;        /* '<S6>/Signal Copy16' */
real32_T Longctrl_ACC_AccelerateJerk;  /* '<S6>/Signal Copy20' */
real32_T Longctrl_ACC_DecelerateJerk;  /* '<S6>/Signal Copy19' */
real32_T LongCtrl_axvDiff;             /* '<S22>/Sum5' */
real32_T LongCtrl_PI_NetEngTorqInc;    /* '<S14>/Product8' */
real32_T LongCtrl_axvTracActMean;      /* '<S24>/Product6' */
real32_T LongCtrl_axvModelDiff;        /* '<S23>/Sum10' */
real32_T Longctrl_VIE_AxRefDt;         /* '<S6>/Signal Copy4' */
real32_T LongCtrl_axvModelResidual;    /* '<S23>/Sum12' */
real32_T LongCtrl_axvClosedLoopControl;/* '<S22>/Sum3' */
real32_T LongCtrl_FF_NetEngTorqMax;    /* '<S11>/Efficiency' */
real32_T LongCtrl_FF_NetEngTorqInc;    /* '<S11>/Product6' */
real32_T LongCtrl_UpdateLowerValue;    /* '<S10>/Sum3' */
real32_T LongCtrl_UpdateUpperValue;    /* '<S10>/Sum2' */
real32_T LongCtrl_ACC_EngTrqReq;       /* '<S10>/MinMax2' */
real32_T Longctrl_EngTqMinAct;         /* '<S6>/Signal Copy11' */
real32_T Longctrl_ACC_axv_ComfortBandLowerValue;/* '<S6>/Signal Copy17' */
real32_T Longctrl_ACC_axv_ComfortBandUpperValue;/* '<S6>/Signal Copy18' */
real32_T LongCtrl_PI_NetEngTorq;       /* '<S6>/Sum1' */
real32_T LongCtrl_FF_NetEngTorq;       /* '<S6>/Sum2' */
real32_T LongCtrl_axvTracMin;          /* '<S25>/Product6' */
real32_T LongCtrl_axvModelRef;         /* '<S23>/Sum13' */
real32_T Longctrl_VIE_alpSideSlipAngle;/* '<S6>/Signal Copy3' */
real32_T Longctrl_EngTqMaxActSpd;      /* '<S6>/Signal Copy12' */
real32_T Longctrl_tCycleVLC;           /* '<S6>/Signal Copy23' */
real32_T LongCtrl_tEC;                 /* '<S6>/VLC_control_sts' */
real32_T LongCtrl_ACC_Decel_ReqValue;  /* '<S9>/StandstillAccel2' */
uint8_T LongCtrl_Counter;              /* '<S2>/Output' */
uint8_T Longctrl_ACCSts;               /* '<S6>/Signal Copy14' */
uint8_T LongCtrl_RRWheelDriveDirection;/* '<S6>/Signal Copy28' */
uint8_T LongCtrl_RLWheelDriveDirection;/* '<S6>/Signal Copy27' */
uint8_T LongCtrl_FRWheelDriveDirection;/* '<S6>/Signal Copy26' */
uint8_T LongCtrl_FLWheelDriveDirection;/* '<S6>/Signal Copy24' */
uint8_T Longctrl_CurrentGear;          /* '<S6>/Signal Copy7' */
boolean_T Longctrl_VehicleStandStill;  /* '<S6>/Signal Copy6' */
boolean_T LongCtrl_Sw2EC;              /* '<S6>/Unit Delay7' */
boolean_T LongCtrl_Sw2DC;              /* '<S6>/Unit Delay6' */
boolean_T LongCtrl_ForwardFlagVxv;     /* '<S15>/Logical Operator5' */
boolean_T LongCtrl_ForwardFlagTrq;     /* '<S15>/Relational Operator13' */
boolean_T LongCtrl_SlideFlag;          /* '<S15>/Logical Operator7' */
boolean_T LongCtrl_VLC_DriveOffConditonFulfilled;/* '<S6>/Signal Copy25' */
boolean_T Longctrl_ACC_DrvOFF_Req;     /* '<S6>/Signal Copy15' */
boolean_T Longctrl_ShiftinProgress;    /* '<S6>/Signal Copy8' */
boolean_T Longctrl_NoBrakeForce;       /* '<S6>/Signal Copy5' */
boolean_T LongCtrl_UpdateEnable_axvModeldiff;/* '<S19>/Logical Operator' */
boolean_T Longctrl_ACC_BrakePrefer;    /* '<S6>/Signal Copy21' */
boolean_T Longctrl_ACC_DecelToStopReq; /* '<S6>/Signal Copy22' */
boolean_T LongCtrl_Sw2DC6;             /* '<S40>/Compare' */
boolean_T LongCtrl_Sw2DC1;             /* '<S17>/Logical Operator3' */
boolean_T LongCtrl_Sw2DC3;             /* '<S17>/Relational Operator2' */
boolean_T LongCtrl_Sw2DC5;             /* '<S17>/Relational Operator3' */
boolean_T LongCtrl_Sw2DC7;             /* '<S17>/Relational Operator6' */
boolean_T LongCtrl_Sw2DC2;             /* '<S17>/Relational Operator7' */
boolean_T LongCtrl_Sw2DC4;             /* '<S17>/Relational Operator8' */
boolean_T LongCtrl_Sw2EC1;             /* '<S44>/Compare' */
boolean_T LongCtrl_Sw2EC3;             /* '<S18>/Relational Operator' */
boolean_T LongCtrl_Sw2EC2;             /* '<S18>/Relational Operator2' */
boolean_T LongCtrl_Sw2EC5;             /* '<S18>/Relational Operator4' */
boolean_T LongCtrl_Sw2EC4;             /* '<S18>/Relational Operator6' */
boolean_T LongCtrl_ECEnable;           /* '<S6>/VLC_control_sts' */
boolean_T LongCtrl_DCEnable;           /* '<S6>/VLC_control_sts' */
MdlrefDW_PubIfControlLONC_MDL_T PubIfControlLONC_MDL_MdlrefDW;

/* Block signals (default storage) */
B_PubIfControlLONC_MDL_c_T PubIfControlLONC_MDL_B;

/* Block states (default storage) */
DW_PubIfControlLONC_MDL_f_T PubIfControlLONC_MDL_DW;

/* Forward declaration for local functions */
static void PubIfControlLONC_MDL_exit_internal_ECDC(void);
static void PubIfControlLONC_MDL_exit_internal_Active(void);

/* Function for Chart: '<S6>/VLC_control_sts' */
static void PubIfControlLONC_MDL_exit_internal_ECDC(void)
{
  switch (PubIfControlLONC_MDL_DW.is_ECDC) {
   case PubIfControlLONC_MDL_IN_ECDC1:
    LongCtrl_VLCState = 0.0;
    LongCtrl_DCEnable = false;
    LongCtrl_ECEnable = false;
    PubIfControlLONC_MDL_DW.is_ECDC = 0;
    break;

   case PubIfControlLONC_MDL_IN_ECDC2:
    LongCtrl_VLCState = 0.0;
    LongCtrl_DCEnable = false;
    LongCtrl_ECEnable = false;
    LongCtrl_tECDC = 0.0;
    PubIfControlLONC_MDL_DW.is_ECDC = 0;
    break;

   default:
    PubIfControlLONC_MDL_DW.is_ECDC = 0;
    break;
  }
}

/* Function for Chart: '<S6>/VLC_control_sts' */
static void PubIfControlLONC_MDL_exit_internal_Active(void)
{
  switch (PubIfControlLONC_MDL_DW.is_Active) {
   case PubIfControlLONC_MDL_IN_DC:
    LongCtrl_DCEnable = false;
    PubIfControlLONC_MDL_B.tDC = 0.0F;
    PubIfControlLONC_MDL_DW.is_Active = 0;
    break;

   case PubIfControlLONC_MDL_IN_EC:
    LongCtrl_ECEnable = false;
    LongCtrl_tEC = 0.0F;
    PubIfControlLONC_MDL_DW.is_Active = 0;
    break;

   case PubIfControlLONC_MDL_IN_ECDC:
    PubIfControlLONC_MDL_exit_internal_ECDC();
    PubIfControlLONC_MDL_DW.is_Active = 0;
    break;

   default:
    PubIfControlLONC_MDL_DW.is_Active = 0;
    break;
  }
}

/* System initialize for referenced model: 'PubIfControlLONC_MDL' */
void PubIfControlLONC_MDL_Init(LONC_Hybrid_CTRL_OUT_BUS
  *rty_LONC_Hybrid_CTRL_OUT)
{
  int32_T i;

  /* InitializeConditions for UnitDelay: '<S2>/Output' */
  PubIfControlLONC_MDL_DW.Output_DSTATE = ((uint8_T)0U);

  /* SystemInitialize for Atomic SubSystem: '<S3>/Vlc' */
  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay7' */
  PubIfControlLONC_MDL_DW.UnitDelay7_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay6' */
  PubIfControlLONC_MDL_DW.UnitDelay6_DSTATE = false;

  /* InitializeConditions for S-Function (sfix_udelay): '<S16>/Tapped Delay2' */
  PubIfControlLONC_MDL_DW.TappedDelay2_X = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay2' */
  PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay2' */
  PubIfControlLONC_MDL_DW.TappedDelay2_X_b = (((uint8_T)0U) != 0);

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay3' */
  PubIfControlLONC_MDL_DW.TappedDelay3_X = (((uint8_T)0U) != 0);

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay4' */
  PubIfControlLONC_MDL_DW.TappedDelay4_X = (((uint8_T)0U) != 0);

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay5' */
  PubIfControlLONC_MDL_DW.TappedDelay5_X = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S9>/Tapped Delay' */
  PubIfControlLONC_MDL_DW.TappedDelay_X = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_k = false;

  /* InitializeConditions for S-Function (sfix_udelay): '<S10>/Tapped Delay4' */
  PubIfControlLONC_MDL_DW.TappedDelay4_X_h = (((uint8_T)0U) != 0);

  /* InitializeConditions for S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
  PubIfControlLONC_MDL_DW.TappedDelay1_X = (((uint8_T)0U) != 0);

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_p = 0.0F;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay2' */
  PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE_c = 0.0F;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay3' */
  PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay2' */
  PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE_n = 0.0F;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_k = 0.0F;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay5' */
  PubIfControlLONC_MDL_DW.UnitDelay5_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_f = 0.0F;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_g = 0.0F;

  /* InitializeConditions for UnitDelay: '<S13>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_n = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S19>/Tapped Delay1' */
  for (i = 0; i < 5; i++) {
    PubIfControlLONC_MDL_DW.TappedDelay1_X_b[i] = (((uint8_T)0U) != 0);
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<S19>/Tapped Delay1' */

  /* InitializeConditions for UnitDelay: '<S53>/Delay Input1' */
  PubIfControlLONC_MDL_DW.DelayInput1_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_f = 0.0F;

  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_c = 0.0F;

  /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_fb = 0.0F;

  /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_m = 0.0F;

  /* InitializeConditions for UnitDelay: '<S55>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_a = 0.0F;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_o = 0.0F;

  /* InitializeConditions for UnitDelay: '<S30>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_h = 0.0F;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_n1 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay5' */
  PubIfControlLONC_MDL_DW.UnitDelay5_DSTATE_e = 0.0F;

  /* InitializeConditions for UnitDelay: '<S28>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_l = 0.0F;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay3' */
  PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE_m = 0.0F;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay4' */
  PubIfControlLONC_MDL_DW.UnitDelay4_DSTATE_a = false;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay4' */
  PubIfControlLONC_MDL_DW.UnitDelay4_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_j = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_nf = 0.0F;

  /* InitializeConditions for UnitDelay: '<S41>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_o3 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay3' */
  PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE_g = 0.0F;

  /* SystemInitialize for Chart: '<S6>/VLC_control_sts' */
  PubIfControlLONC_MDL_DW.is_Active = 0;
  PubIfControlLONC_MDL_DW.is_ECDC = 0;
  LongCtrl_ECEnable = false;
  LongCtrl_tEC = 0.0F;
  PubIfControlLONC_MDL_B.tDC = 0.0F;
  LongCtrl_DCEnable = false;
  LongCtrl_VLCState = 0.0;
  LongCtrl_tECDC = 0.0;

  /* Chart: '<S6>/VLC_control_sts' */
  PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
    PubIfControlLONC_MDL_IN_Init;

  /* SystemInitialize for Chart: '<S9>/StandstillAccel2' */
  PubIfControlLONC_MDL_DW.timer = 0.0F;
  PubIfControlLONC_MDL_DW.timerFailure = 0U;

  /* End of SystemInitialize for SubSystem: '<S3>/Vlc' */

  /* SystemInitialize for BusCreator: '<S3>/Bus Creator1' */
  rty_LONC_Hybrid_CTRL_OUT->Longctrl_HCUTrqReq =
    PubIfControlLONC_MDL_ConstB.Longctrl_HCUTrqReq;
  rty_LONC_Hybrid_CTRL_OUT->Longctrl_HCUTrqReqActive =
    PubIfControlLONC_MDL_ConstB.Longctrl_HCUTrqReqActive;
}

/* System reset for referenced model: 'PubIfControlLONC_MDL' */
void PubIfControlLONC_MDL_Reset(void)
{
  int32_T i;

  /* InitializeConditions for UnitDelay: '<S2>/Output' */
  PubIfControlLONC_MDL_DW.Output_DSTATE = ((uint8_T)0U);

  /* SystemReset for Atomic SubSystem: '<S3>/Vlc' */
  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay7' */
  PubIfControlLONC_MDL_DW.UnitDelay7_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay6' */
  PubIfControlLONC_MDL_DW.UnitDelay6_DSTATE = false;

  /* InitializeConditions for S-Function (sfix_udelay): '<S16>/Tapped Delay2' */
  PubIfControlLONC_MDL_DW.TappedDelay2_X = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay2' */
  PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay2' */
  PubIfControlLONC_MDL_DW.TappedDelay2_X_b = (((uint8_T)0U) != 0);

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay3' */
  PubIfControlLONC_MDL_DW.TappedDelay3_X = (((uint8_T)0U) != 0);

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay4' */
  PubIfControlLONC_MDL_DW.TappedDelay4_X = (((uint8_T)0U) != 0);

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay5' */
  PubIfControlLONC_MDL_DW.TappedDelay5_X = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S9>/Tapped Delay' */
  PubIfControlLONC_MDL_DW.TappedDelay_X = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_k = false;

  /* InitializeConditions for S-Function (sfix_udelay): '<S10>/Tapped Delay4' */
  PubIfControlLONC_MDL_DW.TappedDelay4_X_h = (((uint8_T)0U) != 0);

  /* InitializeConditions for S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
  PubIfControlLONC_MDL_DW.TappedDelay1_X = (((uint8_T)0U) != 0);

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_p = 0.0F;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay2' */
  PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE_c = 0.0F;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay3' */
  PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay2' */
  PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE_n = 0.0F;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_k = 0.0F;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay5' */
  PubIfControlLONC_MDL_DW.UnitDelay5_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_f = 0.0F;

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_g = 0.0F;

  /* InitializeConditions for UnitDelay: '<S13>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_n = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S19>/Tapped Delay1' */
  for (i = 0; i < 5; i++) {
    PubIfControlLONC_MDL_DW.TappedDelay1_X_b[i] = (((uint8_T)0U) != 0);
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<S19>/Tapped Delay1' */

  /* InitializeConditions for UnitDelay: '<S53>/Delay Input1' */
  PubIfControlLONC_MDL_DW.DelayInput1_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_f = 0.0F;

  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_c = 0.0F;

  /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_fb = 0.0F;

  /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_m = 0.0F;

  /* InitializeConditions for UnitDelay: '<S55>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_a = 0.0F;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_o = 0.0F;

  /* InitializeConditions for UnitDelay: '<S30>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_h = 0.0F;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_n1 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay5' */
  PubIfControlLONC_MDL_DW.UnitDelay5_DSTATE_e = 0.0F;

  /* InitializeConditions for UnitDelay: '<S28>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_l = 0.0F;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay3' */
  PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE_m = 0.0F;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay4' */
  PubIfControlLONC_MDL_DW.UnitDelay4_DSTATE_a = false;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay4' */
  PubIfControlLONC_MDL_DW.UnitDelay4_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_j = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_nf = 0.0F;

  /* InitializeConditions for UnitDelay: '<S41>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_o3 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay3' */
  PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE_g = 0.0F;

  /* SystemReset for Chart: '<S6>/VLC_control_sts' */
  PubIfControlLONC_MDL_DW.is_Active = 0;
  PubIfControlLONC_MDL_DW.is_ECDC = 0;
  LongCtrl_ECEnable = false;
  LongCtrl_tEC = 0.0F;
  PubIfControlLONC_MDL_B.tDC = 0.0F;
  LongCtrl_DCEnable = false;
  LongCtrl_VLCState = 0.0;
  LongCtrl_tECDC = 0.0;

  /* Chart: '<S6>/VLC_control_sts' */
  PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
    PubIfControlLONC_MDL_IN_Init;

  /* SystemReset for Chart: '<S9>/StandstillAccel2' */
  PubIfControlLONC_MDL_DW.timer = 0.0F;
  PubIfControlLONC_MDL_DW.timerFailure = 0U;

  /* End of SystemReset for SubSystem: '<S3>/Vlc' */
}

/* Start for referenced model: 'PubIfControlLONC_MDL' */
void PubIfControlLONC_MDL_Start(void)
{
  /* ConstCode for Atomic SubSystem: '<S3>/Vlc' */
  /* ConstCode for SignalConversion: '<S6>/Signal Copy23' incorporates:
   *  Constant: '<S3>/Constant2'
   */
  Longctrl_tCycleVLC = 0.02F;

  /* End of ConstCode for SubSystem: '<S3>/Vlc' */

  /* ConstCode for Constant: '<S1>/Constant' */
  LongCtrl_SubModel_VERSION = 12200526U;

  /* ConstCode for Constant: '<S1>/Constant1' */
  LongCtrl_SubModel_Number = 301U;
}

/* Outputs for referenced model: 'PubIfControlLONC_MDL' */
void PubIfControlLONC_MDL(const real32_T *rtu_vxvRefMs, const real32_T
  *rtu_axvRoadSlopeMs2, const real32_T *rtu_axRefMs2, const real32_T
  *rtu_alpSideSlipAngle, const real32_T *rtu_axRefDt, const VCAN_ESP_MSG_BUS
  *rtu_LONC_VCAN_ESP, const VCAN_DCT_MSG_BUS *rtu_LONC_VCAN_DCT, const
  VCAN_ECM_MSG_BUS *rtu_LONC_VCAN_ECM, const VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL,
  const real32_T *rtu_PLAN_ACCPLAN_ACC_axvCvAim, const real32_T
  *rtu_PLAN_ACCPLAN_ACC_axv_ComfortBandLowerValue, const real32_T
  *rtu_PLAN_ACCPLAN_ACC_axv_ComfortBandUpperValue, const real32_T
  *rtu_PLAN_ACCPLAN_ACC_DecelerateJerk, const real32_T
  *rtu_PLAN_ACCPLAN_ACC_AccelerateJerk, const boolean_T
  *rtu_PLAN_ACCPLAN_ACC_BrakePrefer, const boolean_T
  *rtu_PLAN_Longctrl_DecelToStopReq, const boolean_T
  *rtu_PLAN_DriverOffConditionFulfilled, LONC_CTRL_OUT_BUS *rty_LONC_CTRL_OUT,
  LONC_Hybrid_CTRL_OUT_BUS *rty_LONC_Hybrid_CTRL_OUT)
{
  int32_T i;
  real32_T Icompension;
  real32_T Istability;
  real32_T VlcSlidAxTar;
  real32_T t_I;
  uint32_T tmp;
  boolean_T guard1 = false;
  boolean_T sf_internal_predicateOutput;

  /* Outputs for Atomic SubSystem: '<S3>/Vlc' */
  /* SignalConversion: '<S6>/Signal Copy1' */
  LongCtrl_vxvRefMs = *rtu_vxvRefMs;

  /* S-Function (sfix_look1_dyn): '<S6>/AxTarUplimit' incorporates:
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant3'
   */
  /* Dynamic Look-Up Table Block: '<S6>/AxTarUplimit'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T( &(PubIfControlLONC_MDL_B.AxTarUplimit),
    &P_LongCtrl_VLCdriveOffAxUpLimYAxix[0], LongCtrl_vxvRefMs,
    &P_LongCtrl_VLCdriveOffAxUpLimXAxix[0], 4U);

  /* RelationalOperator: '<S7>/Compare' incorporates:
   *  Constant: '<S7>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare = (rtu_LONC_VCAN_ESP->VehStandstill ==
    ((uint8_T)1U));

  /* SignalConversion: '<S6>/Signal Copy6' */
  Longctrl_VehicleStandStill = PubIfControlLONC_MDL_B.Compare;

  /* RelationalOperator: '<S8>/Compare' incorporates:
   *  Constant: '<S8>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_l = (Longctrl_VehicleStandStill == false);

  /* SignalConversion: '<S6>/Signal Copy' */
  LongCtrl_axvRoadSlopeMs2 = *rtu_axvRoadSlopeMs2;

  /* Lookup_n-D: '<S9>/1-D Lookup Table' incorporates:
   *  SignalConversion: '<S6>/Signal Copy'
   */
  LongCtrl_accelHoldMin = look1_iflf_binlcapw(LongCtrl_axvRoadSlopeMs2,
    P_LongCtrl_VLCaccelMinHoldXAxis, P_LongCtrl_VLCaccelMinHoldYAxis, 1U);

  /* Lookup_n-D: '<S9>/1-D Lookup Table1' incorporates:
   *  SignalConversion: '<S6>/Signal Copy'
   */
  LongCtrl_jerkHold = look1_iflf_binlcapw(LongCtrl_axvRoadSlopeMs2,
    P_LongCtrl_VLCjerkHoldXAxis, P_LongCtrl_VLCjerkHoldYAxis, 1U);

  /* Lookup_n-D: '<S9>/1-D Lookup Table2' incorporates:
   *  SignalConversion: '<S6>/Signal Copy'
   */
  LongCtrl_accelSlidHold = look1_iflf_binlcpw(LongCtrl_axvRoadSlopeMs2,
    P_LongCtrl_VLCaccelMinSlidHoldXAxis, P_LongCtrl_VLCaccelMinSlidHoldYAxis, 6U);

  /* Lookup_n-D: '<S9>/1-D Lookup Table3' incorporates:
   *  SignalConversion: '<S6>/Signal Copy'
   */
  LongCtrl_jerkSlidHold = look1_iflf_binlcpw(LongCtrl_axvRoadSlopeMs2,
    P_LongCtrl_VLCjerkSlidHoldXAxis, P_LongCtrl_VLCjerkSlidHoldYAxis, 6U);

  /* UnitDelay: '<S6>/Unit Delay7' */
  LongCtrl_Sw2EC = PubIfControlLONC_MDL_DW.UnitDelay7_DSTATE;

  /* UnitDelay: '<S6>/Unit Delay6' */
  LongCtrl_Sw2DC = PubIfControlLONC_MDL_DW.UnitDelay6_DSTATE;

  /* S-Function (sfix_udelay): '<S16>/Tapped Delay2' */
  PubIfControlLONC_MDL_B.TappedDelay2[0] = rtu_VSM_LON_CTRL->ACCSts;
  PubIfControlLONC_MDL_B.TappedDelay2[1] =
    PubIfControlLONC_MDL_DW.TappedDelay2_X;

  /* UnitDelay: '<S16>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay = PubIfControlLONC_MDL_DW.UnitDelay_DSTATE;

  /* MATLAB Function: '<S16>/MATLAB Function' */
  VlcSlidAxTar = PubIfControlLONC_MDL_B.UnitDelay;
  if ((PubIfControlLONC_MDL_B.TappedDelay2[0] == 7) &&
      ((PubIfControlLONC_MDL_B.TappedDelay2[1] == 6) ||
       (PubIfControlLONC_MDL_B.TappedDelay2[1] == 9))) {
    VlcSlidAxTar = 76.0F;
  }

  if (VlcSlidAxTar > 0.0F) {
    PubIfControlLONC_MDL_B.ACCModeSts = 6U;
    PubIfControlLONC_MDL_B.CounterK1 = fmaxf(0.0F, VlcSlidAxTar - 1.0F);
  } else {
    PubIfControlLONC_MDL_B.ACCModeSts = PubIfControlLONC_MDL_B.TappedDelay2[0];
    PubIfControlLONC_MDL_B.CounterK1 = 0.0F;
  }

  /* End of MATLAB Function: '<S16>/MATLAB Function' */

  /* SignalConversion: '<S6>/Signal Copy14' */
  Longctrl_ACCSts = PubIfControlLONC_MDL_B.ACCModeSts;

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  PubIfControlLONC_MDL_B.DataTypeConversion = PubIfControlLONC_MDL_B.Compare_l;

  /* UnitDelay: '<S6>/Unit Delay2' */
  LongCtrl_OverrideToDC = PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE;

  /* SignalConversion: '<S6>/Signal Copy28' */
  LongCtrl_RRWheelDriveDirection = rtu_LONC_VCAN_ESP->RRWheelDriveDirection;

  /* RelationalOperator: '<S15>/Relational Operator7' incorporates:
   *  Constant: '<S15>/Constant7'
   */
  PubIfControlLONC_MDL_B.RelationalOperator7 = (LongCtrl_RRWheelDriveDirection ==
    2.0);

  /* SignalConversion: '<S6>/Signal Copy27' */
  LongCtrl_RLWheelDriveDirection = rtu_LONC_VCAN_ESP->RLWheelDriveDirection;

  /* RelationalOperator: '<S15>/Relational Operator6' incorporates:
   *  Constant: '<S15>/Constant6'
   */
  PubIfControlLONC_MDL_B.RelationalOperator6 = (LongCtrl_RLWheelDriveDirection ==
    2.0);

  /* Logic: '<S15>/Logical Operator3' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant4'
   */
  PubIfControlLONC_MDL_B.LogicalOperator3 =
    (PubIfControlLONC_MDL_B.RelationalOperator7 ||
     PubIfControlLONC_MDL_B.RelationalOperator6 || false || false);

  /* RelationalOperator: '<S15>/Relational Operator4' incorporates:
   *  Constant: '<S15>/P_LongCtrl_AxvRoadSlopeThrd'
   */
  PubIfControlLONC_MDL_B.RelationalOperator4 = (LongCtrl_axvRoadSlopeMs2 >
    P_LongCtrl_AxvRoadSlopeThrd);

  /* Logic: '<S15>/Logical Operator' */
  PubIfControlLONC_MDL_B.LogicalOperator =
    (PubIfControlLONC_MDL_B.LogicalOperator3 &&
     PubIfControlLONC_MDL_B.RelationalOperator4);

  /* RelationalOperator: '<S15>/Relational Operator1' incorporates:
   *  Constant: '<S15>/Constant1'
   */
  PubIfControlLONC_MDL_B.RelationalOperator1 = (Longctrl_ACCSts == 6.0);

  /* RelationalOperator: '<S15>/Relational Operator3' incorporates:
   *  Constant: '<S15>/Constant3'
   */
  PubIfControlLONC_MDL_B.RelationalOperator3 = (Longctrl_ACCSts == 9.0);

  /* Logic: '<S15>/Logical Operator2' */
  PubIfControlLONC_MDL_B.LogicalOperator2 =
    (PubIfControlLONC_MDL_B.RelationalOperator1 ||
     PubIfControlLONC_MDL_B.RelationalOperator3);

  /* RelationalOperator: '<S15>/Relational Operator8' incorporates:
   *  Constant: '<S15>/P_LongCtrl_VxvRefThrd'
   */
  PubIfControlLONC_MDL_B.RelationalOperator8 = (LongCtrl_vxvRefMs >
    P_LongCtrl_VxvRefThrd);

  /* RelationalOperator: '<S15>/Relational Operator12' incorporates:
   *  Constant: '<S15>/Constant12'
   */
  PubIfControlLONC_MDL_B.RelationalOperator12 = (LongCtrl_RRWheelDriveDirection ==
    1.0);

  /* RelationalOperator: '<S15>/Relational Operator11' incorporates:
   *  Constant: '<S15>/Constant11'
   */
  PubIfControlLONC_MDL_B.RelationalOperator11 = (LongCtrl_RLWheelDriveDirection ==
    1.0);

  /* SignalConversion: '<S6>/Signal Copy26' */
  LongCtrl_FRWheelDriveDirection = rtu_LONC_VCAN_ESP->FRWheelDriveDirection;

  /* RelationalOperator: '<S15>/Relational Operator10' incorporates:
   *  Constant: '<S15>/Constant10'
   */
  PubIfControlLONC_MDL_B.RelationalOperator10 = (LongCtrl_FRWheelDriveDirection ==
    1.0);

  /* SignalConversion: '<S6>/Signal Copy24' */
  LongCtrl_FLWheelDriveDirection = rtu_LONC_VCAN_ESP->FLWheelDriveDirection;

  /* RelationalOperator: '<S15>/Relational Operator9' incorporates:
   *  Constant: '<S15>/Constant9'
   */
  PubIfControlLONC_MDL_B.RelationalOperator9 = (LongCtrl_FLWheelDriveDirection ==
    1.0);

  /* Logic: '<S15>/Logical Operator4' */
  PubIfControlLONC_MDL_B.LogicalOperator4 =
    (PubIfControlLONC_MDL_B.RelationalOperator12 &&
     PubIfControlLONC_MDL_B.RelationalOperator11 &&
     PubIfControlLONC_MDL_B.RelationalOperator10 &&
     PubIfControlLONC_MDL_B.RelationalOperator9);

  /* Logic: '<S15>/Logical Operator5' */
  LongCtrl_ForwardFlagVxv = (PubIfControlLONC_MDL_B.RelationalOperator8 &&
    PubIfControlLONC_MDL_B.LogicalOperator4);

  /* SignalConversion: '<S6>/Signal Copy9' */
  Longctrl_NetEngTrq = rtu_LONC_VCAN_ECM->NetEngTrq;

  /* MinMax: '<S6>/MinMax1' incorporates:
   *  Constant: '<S6>/Constant'
   */
  VlcSlidAxTar = fmaxf(1.0F, rtu_LONC_VCAN_ECM->MaxEngTrqNorm);

  /* MinMax: '<S6>/MinMax1' */
  PubIfControlLONC_MDL_B.MinMax1 = VlcSlidAxTar;

  /* SignalConversion: '<S6>/Signal Copy10' */
  Longctrl_NetEngTorqNorm = PubIfControlLONC_MDL_B.MinMax1;

  /* SignalConversion: '<S6>/Signal Copy13' */
  Longctrl_EngSpd = rtu_LONC_VCAN_ECM->EngSpd;

  /* Gain: '<S6>/Gain1' */
  PubIfControlLONC_MDL_B.Gain1 = 3.6F * LongCtrl_vxvRefMs;

  /* Saturate: '<S6>/Saturation1' */
  VlcSlidAxTar = PubIfControlLONC_MDL_B.Gain1;
  t_I = 1.08F;
  Icompension = 180.0F;
  if (VlcSlidAxTar > Icompension) {
    /* Saturate: '<S6>/Saturation1' */
    PubIfControlLONC_MDL_B.Saturation1 = Icompension;
  } else if (VlcSlidAxTar < t_I) {
    /* Saturate: '<S6>/Saturation1' */
    PubIfControlLONC_MDL_B.Saturation1 = t_I;
  } else {
    /* Saturate: '<S6>/Saturation1' */
    PubIfControlLONC_MDL_B.Saturation1 = VlcSlidAxTar;
  }

  /* End of Saturate: '<S6>/Saturation1' */

  /* Product: '<S6>/Product5' incorporates:
   *  Constant: '<S6>/Weight//N1'
   *  Constant: '<S6>/Weight//N2'
   */
  PubIfControlLONC_MDL_B.Product5 = 0.377F * P_Global_TireRadius_m *
    Longctrl_EngSpd / PubIfControlLONC_MDL_B.Saturation1;

  /* Saturate: '<S6>/Saturation2' */
  VlcSlidAxTar = PubIfControlLONC_MDL_B.Product5;
  t_I = P_LongCtrl_VLCTrTatioMin;
  Icompension = P_LongCtrl_VLCTrTatioMax;
  if (VlcSlidAxTar > Icompension) {
    /* Saturate: '<S6>/Saturation2' */
    LongCtrl_Tr_Ratio = Icompension;
  } else if (VlcSlidAxTar < t_I) {
    /* Saturate: '<S6>/Saturation2' */
    LongCtrl_Tr_Ratio = t_I;
  } else {
    /* Saturate: '<S6>/Saturation2' */
    LongCtrl_Tr_Ratio = VlcSlidAxTar;
  }

  /* End of Saturate: '<S6>/Saturation2' */

  /* Product: '<S15>/Product2' incorporates:
   *  Constant: '<S15>/Constant13'
   */
  LongCtrl_ICEActWheelTrq = Longctrl_NetEngTrq * 0.01 * Longctrl_NetEngTorqNorm *
    LongCtrl_Tr_Ratio;

  /* Product: '<S15>/Product1' incorporates:
   *  Constant: '<S15>/Constant8'
   */
  PubIfControlLONC_MDL_B.Product1 = P_LongCtrl_TotWheelTrqRatio *
    LongCtrl_ICEActWheelTrq;

  /* Product: '<S24>/Product3' incorporates:
   *  Constant: '<S24>/Weight//N2'
   *  Constant: '<S24>/Weight//N3'
   *  Constant: '<S24>/Weight//N4'
   */
  PubIfControlLONC_MDL_B.F_wind = PubIfControlLONC_MDL_B.Gain1 *
    PubIfControlLONC_MDL_B.Gain1 * P_LongCtrl_VLC_fRollCoef *
    P_LongCtrl_VLC_WindArea / 21.15F;

  /* Lookup_n-D: '<S24>/f' incorporates:
   *  Gain: '<S6>/Gain1'
   */
  PubIfControlLONC_MDL_B.f = look1_iflf_binlcapw(PubIfControlLONC_MDL_B.Gain1,
    P_LongCtrl_VLCcoefFXAxis, P_LongCtrl_VLCcoefFYAxis, 9U);

  /* Product: '<S6>/Product' incorporates:
   *  Constant: '<S6>/g'
   */
  PubIfControlLONC_MDL_B.Product = LongCtrl_axvRoadSlopeMs2 * 0.1F;

  /* Trigonometry: '<S6>/Trigonometric Function' */
  VlcSlidAxTar = PubIfControlLONC_MDL_B.Product;
  if (VlcSlidAxTar > 1.0F) {
    VlcSlidAxTar = 1.0F;
  } else {
    if (VlcSlidAxTar < -1.0F) {
      VlcSlidAxTar = -1.0F;
    }
  }

  /* Trigonometry: '<S6>/Trigonometric Function' */
  PubIfControlLONC_MDL_B.TrigonometricFunction = asinf(VlcSlidAxTar);

  /* Trigonometry: '<S24>/Trigonometric Function' */
  PubIfControlLONC_MDL_B.TrigonometricFunction_l = cosf
    (PubIfControlLONC_MDL_B.TrigonometricFunction);

  /* Product: '<S24>/Product2' incorporates:
   *  Constant: '<S24>/Weight//N6'
   */
  PubIfControlLONC_MDL_B.F_f = PubIfControlLONC_MDL_B.f * P_Global_Weight_N *
    PubIfControlLONC_MDL_B.TrigonometricFunction_l;

  /* Trigonometry: '<S24>/Trigonometric Function1' */
  PubIfControlLONC_MDL_B.TrigonometricFunction1 = sinf
    (PubIfControlLONC_MDL_B.TrigonometricFunction);

  /* Product: '<S24>/Product4' incorporates:
   *  Constant: '<S24>/Weight//N5'
   */
  PubIfControlLONC_MDL_B.F_slope = P_Global_Weight_N *
    PubIfControlLONC_MDL_B.TrigonometricFunction1;

  /* Sum: '<S24>/Sum2' */
  LongCtrl_Fz = (PubIfControlLONC_MDL_B.F_wind + PubIfControlLONC_MDL_B.F_f) +
    PubIfControlLONC_MDL_B.F_slope;

  /* Product: '<S15>/Product' incorporates:
   *  Constant: '<S15>/Weight//N1'
   */
  LongCtrl_ICEFzNm = LongCtrl_Fz * P_Global_TireRadius_m;

  /* RelationalOperator: '<S15>/Relational Operator13' */
  LongCtrl_ForwardFlagTrq = (PubIfControlLONC_MDL_B.Product1 > LongCtrl_ICEFzNm);

  /* Logic: '<S15>/Logical Operator8' */
  PubIfControlLONC_MDL_B.LongCtrl_ForwardFlag = (LongCtrl_ForwardFlagVxv ||
    LongCtrl_ForwardFlagTrq);

  /* Logic: '<S15>/Logical Operator9' */
  PubIfControlLONC_MDL_B.LogicalOperator9 =
    !PubIfControlLONC_MDL_B.LongCtrl_ForwardFlag;

  /* Logic: '<S15>/Logical Operator1' */
  PubIfControlLONC_MDL_B.LogicalOperator1 =
    (PubIfControlLONC_MDL_B.RelationalOperator4 &&
     PubIfControlLONC_MDL_B.LogicalOperator2 &&
     PubIfControlLONC_MDL_B.LogicalOperator9);

  /* Logic: '<S15>/Logical Operator6' */
  PubIfControlLONC_MDL_B.LogicalOperator6 =
    (PubIfControlLONC_MDL_B.LogicalOperator ||
     PubIfControlLONC_MDL_B.LogicalOperator1);

  /* Logic: '<S15>/Logical Operator7' incorporates:
   *  Constant: '<S15>/P_LongCtrl_SlideFlagEnable'
   */
  LongCtrl_SlideFlag = (PubIfControlLONC_MDL_B.LogicalOperator6 &&
                        P_LongCtrl_SlideFlagEnable);

  /* SignalConversion: '<S6>/Signal Copy25' */
  LongCtrl_VLC_DriveOffConditonFulfilled = *rtu_PLAN_DriverOffConditionFulfilled;

  /* Chart: '<S6>/VLC_control_sts' incorporates:
   *  Constant: '<S6>/VlcInternalFail'
   */
  guard1 = false;
  switch (PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL) {
   case PubIfControlLONC_MDL_IN_Active:
    if (((uint8_T)0U) == 1) {
      PubIfControlLONC_MDL_exit_internal_Active();
      PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
        PubIfControlLONC_MDL_IN_Failure;
    } else if ((Longctrl_ACCSts == 0) || (Longctrl_ACCSts == 1) ||
               (Longctrl_ACCSts == 2) || (Longctrl_ACCSts == 7)) {
      PubIfControlLONC_MDL_exit_internal_Active();
      PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
        PubIfControlLONC_MDL_IN_Off;
    } else {
      switch (PubIfControlLONC_MDL_DW.is_Active) {
       case PubIfControlLONC_MDL_IN_DC:
        if (LongCtrl_Sw2EC && (PubIfControlLONC_MDL_B.tDC >= 25.0F *
                               PubIfControlLONC_MDL_B.DataTypeConversion)) {
          LongCtrl_DCEnable = false;
          PubIfControlLONC_MDL_B.tDC = 0.0F;
          PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_EC;
          LongCtrl_ECEnable = true;
          LongCtrl_tEC = 1.0F;
        } else if (LongCtrl_SlideFlag) {
          PubIfControlLONC_MDL_B.tDC = 0.0F;
          PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_ECDC;
          PubIfControlLONC_MDL_DW.is_ECDC = PubIfControlLONC_MDL_IN_ECDC1;
          LongCtrl_VLCState = 3.0;
          LongCtrl_DCEnable = true;
          LongCtrl_ECEnable = false;
        } else if (Longctrl_ACCSts == 5) {
          LongCtrl_DCEnable = false;
          PubIfControlLONC_MDL_B.tDC = 0.0F;
          PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_Override;
        } else {
          PubIfControlLONC_MDL_B.tDC = fminf(PubIfControlLONC_MDL_B.tDC + 1.0F,
            200.0F);
        }
        break;

       case PubIfControlLONC_MDL_IN_EC:
        if (LongCtrl_SlideFlag) {
          LongCtrl_tEC = 0.0F;
          PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_ECDC;
          PubIfControlLONC_MDL_DW.is_ECDC = PubIfControlLONC_MDL_IN_ECDC1;
          LongCtrl_VLCState = 3.0;
          LongCtrl_DCEnable = true;
          LongCtrl_ECEnable = false;
        } else if (LongCtrl_Sw2DC) {
          LongCtrl_ECEnable = false;
          LongCtrl_tEC = 0.0F;
          PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_DC;
          LongCtrl_DCEnable = true;
          PubIfControlLONC_MDL_B.tDC = 1.0F;
        } else if (Longctrl_ACCSts == 5) {
          LongCtrl_ECEnable = false;
          LongCtrl_tEC = 0.0F;
          PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_Override;
        } else {
          LongCtrl_tEC = fminf(LongCtrl_tEC + 1.0F, 200.0F);
        }
        break;

       case PubIfControlLONC_MDL_IN_ECDC:
        if (Longctrl_ACCSts == 5) {
          PubIfControlLONC_MDL_exit_internal_ECDC();
          PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_Override;
        } else if (PubIfControlLONC_MDL_B.LongCtrl_ForwardFlag) {
          PubIfControlLONC_MDL_exit_internal_ECDC();
          PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_EC;
          LongCtrl_ECEnable = true;
          LongCtrl_tEC = 1.0F;
        } else if (PubIfControlLONC_MDL_DW.is_ECDC == 1) {
          if (LongCtrl_Sw2EC || LongCtrl_VLC_DriveOffConditonFulfilled) {
            PubIfControlLONC_MDL_DW.is_ECDC = PubIfControlLONC_MDL_IN_ECDC2;
            LongCtrl_VLCState = 3.0;
            LongCtrl_DCEnable = true;
            LongCtrl_ECEnable = true;
            LongCtrl_tECDC = 1.0;
          }
        } else {
          /* case IN_ECDC2: */
          LongCtrl_tECDC = fmin(LongCtrl_tECDC + 1.0, 200.0);
        }
        break;

       default:
        /* case IN_Override: */
        if (Longctrl_ACCSts != 5) {
          if (LongCtrl_OverrideToDC == 0.0F) {
            PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_EC;
            LongCtrl_ECEnable = true;
            LongCtrl_tEC = 1.0F;
          } else {
            if (LongCtrl_OverrideToDC == 1.0F) {
              PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_DC;
              LongCtrl_DCEnable = true;
              PubIfControlLONC_MDL_B.tDC = 1.0F;
            }
          }
        }
        break;
      }
    }
    break;

   case PubIfControlLONC_MDL_IN_Failure:
    if (((uint8_T)0U) == 0) {
      PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
        PubIfControlLONC_MDL_IN_Init;
    }
    break;

   case PubIfControlLONC_MDL_IN_Init:
    if (((uint8_T)0U) == 1) {
      PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
        PubIfControlLONC_MDL_IN_Failure;
    } else {
      if (((uint8_T)0U) == 0) {
        PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
          PubIfControlLONC_MDL_IN_Off;
      }
    }
    break;

   default:
    /* case IN_Off: */
    if ((Longctrl_ACCSts == 3) || (Longctrl_ACCSts == 6) || (Longctrl_ACCSts ==
         5) || (Longctrl_ACCSts == 9)) {
      if ((Longctrl_ACCSts == 6) || (Longctrl_ACCSts == 9)) {
        PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
          PubIfControlLONC_MDL_IN_Active;
        PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_DC;
        LongCtrl_DCEnable = true;
        PubIfControlLONC_MDL_B.tDC = 1.0F;
      } else if ((Longctrl_ACCSts != 6) && (Longctrl_ACCSts != 9)) {
        PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
          PubIfControlLONC_MDL_IN_Active;
        PubIfControlLONC_MDL_DW.is_Active = PubIfControlLONC_MDL_IN_EC;
        LongCtrl_ECEnable = true;
        LongCtrl_tEC = 1.0F;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    break;
  }

  if (guard1) {
    if (((uint8_T)0U) == 1) {
      PubIfControlLONC_MDL_DW.is_c14_PubIfControlLONC_MDL =
        PubIfControlLONC_MDL_IN_Failure;
    }
  }

  /* End of Chart: '<S6>/VLC_control_sts' */

  /* S-Function (sfix_udelay): '<S6>/Tapped Delay2' */
  PubIfControlLONC_MDL_B.TappedDelay2_f[0] = LongCtrl_ECEnable;
  PubIfControlLONC_MDL_B.TappedDelay2_f[1] =
    PubIfControlLONC_MDL_DW.TappedDelay2_X_b;

  /* S-Function (sfix_udelay): '<S6>/Tapped Delay3' */
  PubIfControlLONC_MDL_B.TappedDelay3[0] = LongCtrl_DCEnable;
  PubIfControlLONC_MDL_B.TappedDelay3[1] =
    PubIfControlLONC_MDL_DW.TappedDelay3_X;

  /* SignalConversion: '<S6>/Signal Copy15' */
  Longctrl_ACC_DrvOFF_Req = rtu_VSM_LON_CTRL->ACC_DrvOffReq;

  /* S-Function (sfix_udelay): '<S6>/Tapped Delay4' */
  PubIfControlLONC_MDL_B.TappedDelay4[0] = Longctrl_ACC_DrvOFF_Req;
  PubIfControlLONC_MDL_B.TappedDelay4[1] =
    PubIfControlLONC_MDL_DW.TappedDelay4_X;

  /* S-Function (sfix_udelay): '<S6>/Tapped Delay5' */
  PubIfControlLONC_MDL_B.TappedDelay5[0] = Longctrl_ACCSts;
  PubIfControlLONC_MDL_B.TappedDelay5[1] =
    PubIfControlLONC_MDL_DW.TappedDelay5_X;

  /* SignalConversion: '<S6>/Signal Copy2' */
  Longctrl_VIE_axRefMs2 = *rtu_axRefMs2;

  /* SignalConversion: '<S6>/Signal Copy16' */
  Longctrl_ACC_axvCvAim = *rtu_PLAN_ACCPLAN_ACC_axvCvAim;

  /* SignalConversion: '<S6>/Signal Copy20' */
  Longctrl_ACC_AccelerateJerk = *rtu_PLAN_ACCPLAN_ACC_AccelerateJerk;

  /* SignalConversion: '<S6>/Signal Copy19' */
  Longctrl_ACC_DecelerateJerk = *rtu_PLAN_ACCPLAN_ACC_DecelerateJerk;

  /* UnitDelay: '<S6>/Unit Delay1' */
  PubIfControlLONC_MDL_B.UnitDelay1 = PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE;

  /* MATLAB Function: '<S6>/VlcInternalAccCalc' */
  if (PubIfControlLONC_MDL_B.TappedDelay5[0] == 3) {
    if (PubIfControlLONC_MDL_B.TappedDelay4[0] &&
        (!PubIfControlLONC_MDL_B.TappedDelay4[1])) {
      LongCtrl_VlcInternalAcc = 0.2F;
    } else if (((PubIfControlLONC_MDL_B.UnitDelay1 > Longctrl_ACC_axvCvAim) &&
                (Longctrl_ACC_axvCvAim >= Longctrl_VIE_axRefMs2)) ||
               ((PubIfControlLONC_MDL_B.UnitDelay1 < Longctrl_ACC_axvCvAim) &&
                (Longctrl_ACC_axvCvAim <= Longctrl_VIE_axRefMs2))) {
      LongCtrl_VlcInternalAcc = Longctrl_ACC_axvCvAim;
    } else if ((Longctrl_ACC_DecelerateJerk * Longctrl_tCycleVLC +
                PubIfControlLONC_MDL_B.UnitDelay1 > Longctrl_VIE_axRefMs2) &&
               (Longctrl_VIE_axRefMs2 > Longctrl_ACC_axvCvAim)) {
      LongCtrl_VlcInternalAcc = Longctrl_ACC_DecelerateJerk * Longctrl_tCycleVLC
        + Longctrl_VIE_axRefMs2;
    } else if ((Longctrl_ACC_AccelerateJerk * Longctrl_tCycleVLC +
                PubIfControlLONC_MDL_B.UnitDelay1 < Longctrl_VIE_axRefMs2) &&
               (Longctrl_VIE_axRefMs2 < Longctrl_ACC_axvCvAim)) {
      LongCtrl_VlcInternalAcc = Longctrl_ACC_AccelerateJerk * Longctrl_tCycleVLC
        + Longctrl_VIE_axRefMs2;
    } else {
      LongCtrl_VlcInternalAcc = fmaxf(fminf(Longctrl_ACC_axvCvAim,
        Longctrl_ACC_AccelerateJerk * Longctrl_tCycleVLC +
        PubIfControlLONC_MDL_B.UnitDelay1), Longctrl_ACC_DecelerateJerk *
        Longctrl_tCycleVLC + PubIfControlLONC_MDL_B.UnitDelay1);
    }
  } else if ((PubIfControlLONC_MDL_B.TappedDelay5[0] == 6) ||
             (PubIfControlLONC_MDL_B.TappedDelay5[0] == 9)) {
    LongCtrl_VlcInternalAcc = fmaxf(fminf(Longctrl_ACC_axvCvAim,
      Longctrl_ACC_AccelerateJerk * Longctrl_tCycleVLC +
      PubIfControlLONC_MDL_B.UnitDelay1), Longctrl_ACC_DecelerateJerk *
      Longctrl_tCycleVLC + PubIfControlLONC_MDL_B.UnitDelay1);
  } else {
    LongCtrl_VlcInternalAcc = Longctrl_VIE_axRefMs2;
  }

  LongCtrl_VlcInternalAcc = fminf(PubIfControlLONC_MDL_B.AxTarUplimit,
    LongCtrl_VlcInternalAcc);

  /* End of MATLAB Function: '<S6>/VlcInternalAccCalc' */

  /* Product: '<S9>/Product1' */
  PubIfControlLONC_MDL_B.Product1_b = (real32_T)LongCtrl_DCEnable *
    LongCtrl_VlcInternalAcc;

  /* S-Function (sfix_udelay): '<S9>/Tapped Delay' */
  PubIfControlLONC_MDL_B.TappedDelay[0] = Longctrl_ACCSts;
  PubIfControlLONC_MDL_B.TappedDelay[1] = PubIfControlLONC_MDL_DW.TappedDelay_X;

  /* Chart: '<S9>/StandstillAccel2' */
  if (LongCtrl_VLCState == 3.0) {
    PubIfControlLONC_MDL_DW.SlidTimer = fminf(100.0F,
      PubIfControlLONC_MDL_DW.SlidTimer + 1.0F);
    VlcSlidAxTar = fmaxf(LongCtrl_accelSlidHold, LongCtrl_jerkSlidHold *
                         Longctrl_tCycleVLC * PubIfControlLONC_MDL_DW.SlidTimer
                         + fminf(-0.3F, PubIfControlLONC_MDL_B.Product1_b));
  } else {
    PubIfControlLONC_MDL_DW.SlidTimer = 0.0F;
    VlcSlidAxTar = PubIfControlLONC_MDL_B.Product1_b;
  }

  if ((PubIfControlLONC_MDL_B.TappedDelay[0] == 6) ||
      (PubIfControlLONC_MDL_B.TappedDelay[0] == 9)) {
    PubIfControlLONC_MDL_DW.timer = fminf(100.0F, PubIfControlLONC_MDL_DW.timer
      + 1.0F);
    LongCtrl_ACC_Decel_ReqValue = fmaxf(LongCtrl_accelHoldMin, LongCtrl_jerkHold
      * Longctrl_tCycleVLC * PubIfControlLONC_MDL_DW.timer + fminf(-0.3F,
      PubIfControlLONC_MDL_B.Product1_b));
  } else {
    PubIfControlLONC_MDL_DW.timer = 0.0F;
    LongCtrl_ACC_Decel_ReqValue = VlcSlidAxTar;
  }

  if (((PubIfControlLONC_MDL_B.TappedDelay[1] == 6) ||
       (PubIfControlLONC_MDL_B.TappedDelay[1] == 9)) &&
      (PubIfControlLONC_MDL_B.TappedDelay[0] == 7)) {
    PubIfControlLONC_MDL_DW.timerFailure = 75U;
  } else {
    i = PubIfControlLONC_MDL_DW.timerFailure;
    tmp = i - 1U;
    if (tmp > (uint32_T)i) {
      tmp = 0U;
    }

    i = (int32_T)tmp;
    PubIfControlLONC_MDL_DW.timerFailure = (uint8_T)i;
  }

  if (PubIfControlLONC_MDL_DW.timerFailure > 0) {
    LongCtrl_ACC_Decel_ReqValue = PubIfControlLONC_MDL_DW.decelReqK1;
    PubIfControlLONC_MDL_B.decelReqActive = true;
  } else {
    PubIfControlLONC_MDL_B.decelReqActive = false;
  }

  PubIfControlLONC_MDL_DW.decelReqK1 = LongCtrl_ACC_Decel_ReqValue;

  /* End of Chart: '<S9>/StandstillAccel2' */

  /* Logic: '<S9>/Logical Operator' */
  rty_LONC_CTRL_OUT->Longctrl_Decel_Req = (LongCtrl_DCEnable ||
    PubIfControlLONC_MDL_B.decelReqActive);

  /* UnitDelay: '<S10>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_kd =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_k;

  /* S-Function (sfix_udelay): '<S10>/Tapped Delay4' */
  PubIfControlLONC_MDL_B.TappedDelay4_g[0] = LongCtrl_ECEnable;
  PubIfControlLONC_MDL_B.TappedDelay4_g[1] =
    PubIfControlLONC_MDL_DW.TappedDelay4_X_h;

  /* S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
  PubIfControlLONC_MDL_B.TappedDelay1[0] = Longctrl_ACC_DrvOFF_Req;
  PubIfControlLONC_MDL_B.TappedDelay1[1] =
    PubIfControlLONC_MDL_DW.TappedDelay1_X;

  /* UnitDelay: '<S10>/Unit Delay1' */
  PubIfControlLONC_MDL_B.UnitDelay1_b =
    PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_p;

  /* UnitDelay: '<S10>/Unit Delay2' */
  PubIfControlLONC_MDL_B.UnitDelay2 =
    PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE_c;

  /* MATLAB Function: '<S10>/FxLimit' */
  if (LongCtrl_VLCState == 3.0) {
    PubIfControlLONC_MDL_B.Up = fminf((real32_T)(LongCtrl_tECDC * 0.5),
      Longctrl_ACC_AccelerateJerk);
    PubIfControlLONC_MDL_B.Low = fmaxf((real32_T)-LongCtrl_tECDC,
      Longctrl_ACC_DecelerateJerk);
    VlcSlidAxTar = 0.0F;
    t_I = 0.0F;
  } else {
    VlcSlidAxTar = fmaxf(PubIfControlLONC_MDL_B.UnitDelay1_b - 1.0F, 0.0F);
    t_I = fmaxf(PubIfControlLONC_MDL_B.UnitDelay2 - 1.0F, 0.0F);
    if (PubIfControlLONC_MDL_B.TappedDelay1[0] &&
        (!PubIfControlLONC_MDL_B.TappedDelay1[1])) {
      VlcSlidAxTar = P_LongCtrl_VLCCounterDrvOff2EC;
    } else {
      if ((LongCtrl_vxvRefMs > 0.3) && PubIfControlLONC_MDL_B.TappedDelay4_g[0] &&
          PubIfControlLONC_MDL_B.UnitDelay_kd) {
        t_I = P_LongCtrl_VLCCounterDC2ECTorqDelay;
      }
    }

    if (VlcSlidAxTar > 0.0F) {
      PubIfControlLONC_MDL_B.Up = P_LongCtrl_VLCUpperJerkCounterDrvOff2EC;
      PubIfControlLONC_MDL_B.Low = P_LongCtrl_VLCLowerJerkCounterDrvOff2EC;
    } else {
      PubIfControlLONC_MDL_B.Up = fminf(LongCtrl_tEC * 0.5F,
        Longctrl_ACC_AccelerateJerk);
      PubIfControlLONC_MDL_B.Low = fmaxf(-LongCtrl_tEC,
        Longctrl_ACC_DecelerateJerk);
      if (t_I > 0.0F) {
        PubIfControlLONC_MDL_B.Up = fminf(LongCtrl_tEC * 0.1F,
          Longctrl_ACC_AccelerateJerk);
      }
    }
  }

  PubIfControlLONC_MDL_B.Counter = VlcSlidAxTar;
  PubIfControlLONC_MDL_B.Counter2 = t_I;

  /* End of MATLAB Function: '<S10>/FxLimit' */

  /* Gain: '<S10>/Gain1' */
  PubIfControlLONC_MDL_B.Gain1_d = 3.6F * LongCtrl_vxvRefMs;

  /* Gain: '<S10>/Gain2' incorporates:
   *  Constant: '<S10>/Weight//N1'
   */
  PubIfControlLONC_MDL_B.Gain2 = 0.1F * P_Global_Weight_N;

  /* Gain: '<S10>/Gain6' incorporates:
   *  Constant: '<S10>/Weight//N6'
   */
  PubIfControlLONC_MDL_B.Gain6 = 0.1F * P_Global_Weight_N;

  /* Lookup_n-D: '<S10>/PI_Factor ' incorporates:
   *  Gain: '<S10>/Gain1'
   */
  PubIfControlLONC_MDL_B.PI_Factor = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Gain1_d, P_LongCtrl_VLCvelCharCoefPIXAxis,
     P_LongCtrl_VLCcoefPIYAxis, 3U);

  /* Sum: '<S22>/Sum5' */
  LongCtrl_axvDiff = LongCtrl_VlcInternalAcc - Longctrl_VIE_axRefMs2;

  /* UnitDelay: '<S14>/Unit Delay3' */
  PubIfControlLONC_MDL_B.UnitDelay3 = PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE;

  /* Sum: '<S14>/Add3' */
  PubIfControlLONC_MDL_B.Add3 = LongCtrl_axvDiff -
    PubIfControlLONC_MDL_B.UnitDelay3;

  /* Gain: '<S14>/Gain3' */
  PubIfControlLONC_MDL_B.Gain3 = 50.0F * PubIfControlLONC_MDL_B.Add3;

  /* UnitDelay: '<S14>/Unit Delay2' */
  PubIfControlLONC_MDL_B.UnitDelay2_e =
    PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE_n;

  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  PubIfControlLONC_MDL_B.DataTypeConversion_f =
    PubIfControlLONC_MDL_B.UnitDelay2_e;

  /* Sum: '<S14>/Add4' */
  PubIfControlLONC_MDL_B.Add4 = PubIfControlLONC_MDL_B.Gain3 -
    PubIfControlLONC_MDL_B.DataTypeConversion_f;

  /* Product: '<S14>/Product3' */
  PubIfControlLONC_MDL_B.Product3 = PubIfControlLONC_MDL_ConstB.Product4 *
    PubIfControlLONC_MDL_B.Add4;

  /* Sum: '<S14>/Add5' */
  PubIfControlLONC_MDL_B.Add5 = PubIfControlLONC_MDL_B.Product3 +
    PubIfControlLONC_MDL_B.DataTypeConversion_f;

  /* If: '<S14>/If' */
  if (LongCtrl_axvDiff > 0.0F) {
    /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    /* Merge: '<S14>/Merge' incorporates:
     *  Inport: '<S33>/In1'
     */
    PubIfControlLONC_MDL_B.Merge = PubIfControlLONC_MDL_B.Add5;

    /* End of Outputs for SubSystem: '<S14>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    /* Merge: '<S14>/Merge' incorporates:
     *  Gain: '<S34>/Gain2'
     */
    PubIfControlLONC_MDL_B.Merge = (-1.0F) * PubIfControlLONC_MDL_B.Add5;

    /* End of Outputs for SubSystem: '<S14>/If Action Subsystem1' */
  }

  /* End of If: '<S14>/If' */

  /* Lookup_n-D: '<S14>/CoefKiDiffDtEnlarge' incorporates:
   *  Merge: '<S14>/Merge'
   */
  PubIfControlLONC_MDL_B.CoefKiDiffDtEnlarge = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Merge, P_LongCtrl_VLCdiffDtCharCoefKiEnlargeXAxis,
     P_LongCtrl_VLCcoefKiDiffDtEnlargeYAxis, 5U);

  /* S-Function (sfix_look1_dyn): '<S14>/P_LongCtrl_VLCcoefKiEnlargeADiffChar' incorporates:
   *  Constant: '<S14>/Weight//N1'
   *  Constant: '<S6>/PVLCaXCKiCtrlDevChar_Y'
   */
  /* Dynamic Look-Up Table Block: '<S14>/P_LongCtrl_VLCcoefKiEnlargeADiffChar'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T
    ( &(PubIfControlLONC_MDL_B.P_LongCtrl_VLCcoefKiEnlargeADiffChar),
     &P_LongCtrl_VLCcoefKiEnlargeADiffYAxis[0], LongCtrl_axvDiff,
     &P_LongCtrl_VLCaDiffCharCoefKiXAxis[0], 10U);

  /* Lookup_n-D: '<S14>/CoefKiEnable' incorporates:
   *  Sum: '<S22>/Sum5'
   */
  PubIfControlLONC_MDL_B.CoefKiEnable = look1_iflf_binlcapw(LongCtrl_axvDiff,
    P_LongCtrl_VLCaDiffCharCoefKiEnableXAxis, P_LongCtrl_VLCcoefKiEnableYAxis,
    5U);

  /* MinMax: '<S14>/MinMax1' incorporates:
   *  Constant: '<S14>/Constant4'
   *  Constant: '<S6>/Constant4'
   */
  VlcSlidAxTar = fmaxf(P_LongCtrl_VLCki, 0.001F);

  /* MinMax: '<S14>/MinMax1' */
  PubIfControlLONC_MDL_B.MinMax1_f = VlcSlidAxTar;

  /* Gain: '<S14>/Gain1' */
  PubIfControlLONC_MDL_B.Gain1_b = 2000.0F * PubIfControlLONC_MDL_B.MinMax1_f;

  /* Product: '<S14>/Product5' */
  PubIfControlLONC_MDL_B.Product5_b = PubIfControlLONC_MDL_B.CoefKiDiffDtEnlarge
    * PubIfControlLONC_MDL_B.P_LongCtrl_VLCcoefKiEnlargeADiffChar *
    PubIfControlLONC_MDL_B.CoefKiEnable * PubIfControlLONC_MDL_B.Gain1_b;

  /* UnitDelay: '<S14>/Unit Delay1' */
  PubIfControlLONC_MDL_B.UnitDelay1_e =
    PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_k;

  /* S-Function (sfix_look1_dyn): '<S14>/P_VlcAxCtrlDevDeadZoneChar' incorporates:
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S6>/P_VlcAxCtrlDevDeadZoneChar_Y'
   */
  /* Dynamic Look-Up Table Block: '<S14>/P_VlcAxCtrlDevDeadZoneChar'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T( &(PubIfControlLONC_MDL_B.P_VlcAxCtrlDevDeadZoneChar),
    &P_LongCtrl_VLCaxCtrlDevDeadZoneChar_Y[0], PubIfControlLONC_MDL_B.Gain1,
    &P_LongCtrl_VLCvelCharAxCtrlDevDeadZoneXAxis[0], 4U);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_c = (PubIfControlLONC_MDL_B.Gain1 > 1.08F);

  /* Switch: '<S14>/Switch' */
  if (PubIfControlLONC_MDL_B.Compare_c) {
    /* Switch: '<S14>/Switch' */
    PubIfControlLONC_MDL_B.Switch = LongCtrl_axvDiff;
  } else {
    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S14>/Constant1'
     */
    PubIfControlLONC_MDL_B.Switch = 0.0F;
  }

  /* End of Switch: '<S14>/Switch' */

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S6>/Constant8'
   */
  PubIfControlLONC_MDL_B.Product1_a = 10.0F / PubIfControlLONC_MDL_B.MinMax1_f;

  /* UnitDelay: '<S6>/Unit Delay5' */
  PubIfControlLONC_MDL_B.UnitDelay5 = PubIfControlLONC_MDL_DW.UnitDelay5_DSTATE;

  /* Sum: '<S6>/Sum8' */
  PubIfControlLONC_MDL_B.Sum8 = LongCtrl_VlcInternalAcc -
    PubIfControlLONC_MDL_B.UnitDelay5;

  /* Gain: '<S6>/Gain2' */
  PubIfControlLONC_MDL_B.Gain2_m = 50.0F * PubIfControlLONC_MDL_B.Sum8;

  /* UnitDelay: '<S12>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_n =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_f;

  /* Sum: '<S12>/Sum6' */
  PubIfControlLONC_MDL_B.Sum6 = PubIfControlLONC_MDL_B.Gain2_m -
    PubIfControlLONC_MDL_B.UnitDelay_n;

  /* Product: '<S12>/Product6' */
  PubIfControlLONC_MDL_B.Product6 = PubIfControlLONC_MDL_ConstB.Product2 *
    PubIfControlLONC_MDL_B.Sum6;

  /* Sum: '<S12>/Sum7' */
  PubIfControlLONC_MDL_B.Sum7_i = PubIfControlLONC_MDL_B.Product6 +
    PubIfControlLONC_MDL_B.UnitDelay_n;

  /* Abs: '<S14>/Abs' */
  PubIfControlLONC_MDL_B.Abs = fabsf(Longctrl_VIE_axRefMs2);

  /* Lookup_n-D: '<S14>/1-D Lookup Table' incorporates:
   *  Abs: '<S14>/Abs'
   */
  PubIfControlLONC_MDL_B.uDLookupTable = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Abs, rtCP_uDLookupTable_bp01Data,
     rtCP_uDLookupTable_tableData, 5U);

  /* SignalConversion: '<S6>/Signal Copy8' */
  Longctrl_ShiftinProgress = rtu_LONC_VCAN_DCT->SHIFT_IN_PROGRESS;

  /* UnitDelay: '<S14>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_e =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_g;

  /* MATLAB Function: '<S14>/MATLAB Function' */
  VlcSlidAxTar = Longctrl_tCycleVLC / PubIfControlLONC_MDL_B.uDLookupTable *
    (Longctrl_VIE_axRefMs2 - PubIfControlLONC_MDL_B.UnitDelay_e) +
    PubIfControlLONC_MDL_B.UnitDelay_e;
  if (!Longctrl_ShiftinProgress) {
    if ((((PubIfControlLONC_MDL_B.UnitDelay1_e > 0.0F) &&
          (PubIfControlLONC_MDL_B.Switch > 0.0F)) ||
         ((PubIfControlLONC_MDL_B.UnitDelay1_e <= 0.0F) &&
          (PubIfControlLONC_MDL_B.Switch <= 0.0F))) && (fabsf
         (PubIfControlLONC_MDL_B.Sum7_i) < P_LongCtrl_VLCAxTarDtThreEnableI)) {
      t_I = PubIfControlLONC_MDL_B.Switch * Longctrl_tCycleVLC;
    } else if (fabsf(PubIfControlLONC_MDL_B.Switch) >
               P_LongCtrl_VLCcoefIFadeOut1Condition *
               PubIfControlLONC_MDL_B.P_VlcAxCtrlDevDeadZoneChar) {
      t_I = P_LongCtrl_VLCcoefIFadeOut1Calc * PubIfControlLONC_MDL_B.Switch *
        Longctrl_tCycleVLC;
    } else if (fabsf(PubIfControlLONC_MDL_B.Switch) >
               P_LongCtrl_VLCcoefIFadeOut2Condition *
               PubIfControlLONC_MDL_B.P_VlcAxCtrlDevDeadZoneChar) {
      t_I = P_LongCtrl_VLCcoefIFadeOut2Calc * PubIfControlLONC_MDL_B.Switch *
        Longctrl_tCycleVLC;
    } else if (fabsf(PubIfControlLONC_MDL_B.Switch) >
               P_LongCtrl_VLCcoefIFadeOut3Condition *
               PubIfControlLONC_MDL_B.P_VlcAxCtrlDevDeadZoneChar) {
      t_I = P_LongCtrl_VLCcoefIFadeOut3Calc * PubIfControlLONC_MDL_B.Switch *
        Longctrl_tCycleVLC;
    } else {
      t_I = PubIfControlLONC_MDL_B.Switch * Longctrl_tCycleVLC;
    }

    if ((fabsf(PubIfControlLONC_MDL_B.Sum7_i) < P_LongCtrl_VLCAxTarDtThreEnableI)
        && (fabsf(PubIfControlLONC_MDL_B.Switch) <
            PubIfControlLONC_MDL_B.P_VlcAxCtrlDevDeadZoneChar)) {
      if ((fabsf(LongCtrl_VlcInternalAcc) > 0.001) && (fabsf(VlcSlidAxTar) <
           PubIfControlLONC_MDL_B.P_VlcAxCtrlDevDeadZoneChar)) {
        if (LongCtrl_VlcInternalAcc > 0.001) {
          Icompension = P_LongCtrl_VLCIACompensionPos * Longctrl_tCycleVLC;
        } else if (LongCtrl_VlcInternalAcc < -0.001) {
          Icompension = P_LongCtrl_VLCIACompensionNeg * Longctrl_tCycleVLC;
        } else {
          Icompension = 0.0F;
        }
      } else {
        Icompension = 0.0F;
      }

      if ((fabsf(LongCtrl_VlcInternalAcc) < 0.001) && (fabsf(VlcSlidAxTar) <
           PubIfControlLONC_MDL_B.P_VlcAxCtrlDevDeadZoneChar)) {
        Istability = -VlcSlidAxTar * Longctrl_tCycleVLC;
      } else {
        Istability = 0.0F;
      }
    } else {
      Icompension = 0.0F;
      Istability = 0.0F;
    }

    t_I = ((PubIfControlLONC_MDL_B.UnitDelay1_e + t_I) + Icompension) +
      Istability;
    t_I = fmaxf(fminf(PubIfControlLONC_MDL_B.Product1_a, t_I),
                -PubIfControlLONC_MDL_B.Product1_a);
    PubIfControlLONC_MDL_B.Limited = (real32_T)((t_I ==
      PubIfControlLONC_MDL_B.Product1_a) || (t_I ==
      -PubIfControlLONC_MDL_B.Product1_a));
    if (LongCtrl_ECEnable) {
      PubIfControlLONC_MDL_B.I_l = t_I;
    } else {
      PubIfControlLONC_MDL_B.I_l = 0.0F;
    }
  } else {
    PubIfControlLONC_MDL_B.I_l = 0.5F * PubIfControlLONC_MDL_B.UnitDelay1_e;
    PubIfControlLONC_MDL_B.Limited = 0.0F;
  }

  PubIfControlLONC_MDL_B.axvFilt = VlcSlidAxTar;

  /* End of MATLAB Function: '<S14>/MATLAB Function' */

  /* Product: '<S14>/I' */
  PubIfControlLONC_MDL_B.I = PubIfControlLONC_MDL_B.Product5_b *
    PubIfControlLONC_MDL_B.I_l;
  for (i = 0; i < 7; i++) {
    /* Switch: '<S14>/Switch1' */
    if (Longctrl_ShiftinProgress) {
      /* Switch: '<S14>/Switch1' incorporates:
       *  Constant: '<S14>/Constant5'
       */
      PubIfControlLONC_MDL_B.Switch1[i] = 0.0F;
    } else {
      /* Switch: '<S14>/Switch1' incorporates:
       *  Constant: '<S6>/Constant5'
       */
      PubIfControlLONC_MDL_B.Switch1[i] = P_LongCtrl_VLCaXCDeadZoneProp_Y[i];
    }

    /* End of Switch: '<S14>/Switch1' */
  }

  /* S-Function (sfix_look1_dyn): '<S14>/P_VlcAXCDeadZoneProp' incorporates:
   *  Constant: '<S14>/Constant'
   */
  /* Dynamic Look-Up Table Block: '<S14>/P_VlcAXCDeadZoneProp'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T( &(PubIfControlLONC_MDL_B.P_VlcAXCDeadZoneProp),
    &PubIfControlLONC_MDL_B.Switch1[0], LongCtrl_axvDiff, rtCP_Constant_Value_g,
    6U);

  /* Product: '<S14>/P' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  PubIfControlLONC_MDL_B.P = LongCtrl_axvDiff *
    PubIfControlLONC_MDL_B.P_VlcAXCDeadZoneProp * P_LongCtrl_VLCkp;

  /* Sum: '<S14>/Add1' */
  PubIfControlLONC_MDL_B.Add1 = PubIfControlLONC_MDL_B.I +
    PubIfControlLONC_MDL_B.P;

  /* Product: '<S14>/Product7' incorporates:
   *  Constant: '<S14>/Weight//N2'
   */
  PubIfControlLONC_MDL_B.Product7 = 1.0F / LongCtrl_Tr_Ratio *
    PubIfControlLONC_MDL_B.Add1 * P_Global_TireRadius_m;

  /* Product: '<S14>/Product8' incorporates:
   *  Constant: '<S14>/TireRadius//m2'
   */
  LongCtrl_PI_NetEngTorqInc = PubIfControlLONC_MDL_B.Product7 /
    Longctrl_NetEngTorqNorm * 100.0F;

  /* Product: '<S10>/Product1' */
  PubIfControlLONC_MDL_B.Product1_m = PubIfControlLONC_MDL_B.PI_Factor *
    LongCtrl_PI_NetEngTorqInc;

  /* Lookup_n-D: '<S6>/Ma_Ratio' incorporates:
   *  Saturate: '<S6>/Saturation2'
   */
  PubIfControlLONC_MDL_B.Ma_Ratio = look1_iflf_binlcapw(LongCtrl_Tr_Ratio,
    P_LongCtrl_VLCTrRatioCharMaXAxis, P_LongCtrl_VLCMaRatioCharMaYAxis, 17U);

  /* Gain: '<S24>/Gain2' incorporates:
   *  Constant: '<S24>/Weight//N7'
   */
  PubIfControlLONC_MDL_B.Gain2_h = 0.10204082F * P_Global_Weight_N;

  /* Product: '<S24>/Product5' */
  PubIfControlLONC_MDL_B.Product5_d = PubIfControlLONC_MDL_B.Ma_Ratio *
    PubIfControlLONC_MDL_B.Gain2_h;

  /* UnitDelay: '<S13>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_i =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_n;

  /* Sum: '<S13>/Sum6' */
  PubIfControlLONC_MDL_B.Sum6_a = Longctrl_NetEngTrq -
    PubIfControlLONC_MDL_B.UnitDelay_i;

  /* Product: '<S13>/Product6' */
  PubIfControlLONC_MDL_B.Product6_k = PubIfControlLONC_MDL_ConstB.Product2_j *
    PubIfControlLONC_MDL_B.Sum6_a;

  /* Sum: '<S13>/Sum7' */
  PubIfControlLONC_MDL_B.Sum7_b = PubIfControlLONC_MDL_B.Product6_k +
    PubIfControlLONC_MDL_B.UnitDelay_i;

  /* Lookup_n-D: '<S24>/Efficiency' incorporates:
   *  Sum: '<S13>/Sum7'
   */
  PubIfControlLONC_MDL_B.Efficiency = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Sum7_b, P_LongCtrl_VLCtorqCharEngEfficientXAxis,
     P_LongCtrl_VLCengEfficientCharYAxis, 4U);

  /* Gain: '<S24>/Gain' */
  PubIfControlLONC_MDL_B.Gain = 0.01F * PubIfControlLONC_MDL_B.Sum7_b;

  /* Product: '<S24>/Product' */
  PubIfControlLONC_MDL_B.Product_h = PubIfControlLONC_MDL_B.Efficiency *
    PubIfControlLONC_MDL_B.Gain * Longctrl_NetEngTorqNorm;

  /* Product: '<S24>/Product1' incorporates:
   *  Constant: '<S24>/Weight//N1'
   */
  PubIfControlLONC_MDL_B.F_drive = LongCtrl_Tr_Ratio *
    PubIfControlLONC_MDL_B.Product_h / P_Global_TireRadius_m;

  /* Sum: '<S24>/Sum1' */
  PubIfControlLONC_MDL_B.Sum1_l = ((PubIfControlLONC_MDL_B.F_drive -
    PubIfControlLONC_MDL_B.F_wind) - PubIfControlLONC_MDL_B.F_f) -
    PubIfControlLONC_MDL_B.F_slope;

  /* Product: '<S24>/Product6' */
  LongCtrl_axvTracActMean = 1.0F / PubIfControlLONC_MDL_B.Product5_d *
    PubIfControlLONC_MDL_B.Sum1_l;

  /* Sum: '<S23>/Sum10' */
  LongCtrl_axvModelDiff = LongCtrl_axvTracActMean - Longctrl_VIE_axRefMs2;

  /* Abs: '<S23>/Abs1' */
  PubIfControlLONC_MDL_B.Abs1 = fabsf(LongCtrl_axvModelDiff);

  /* Lookup_n-D: '<S23>/FilterTime' incorporates:
   *  Abs: '<S23>/Abs1'
   */
  PubIfControlLONC_MDL_B.FilterTime = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Abs1, rtCP_FilterTime_bp01Data,
     rtCP_FilterTime_tableData, 4U);

  /* Product: '<S23>/Product4' incorporates:
   *  Constant: '<S23>/Weight//N3'
   */
  PubIfControlLONC_MDL_B.Product4 = 0.02F / PubIfControlLONC_MDL_B.FilterTime;

  /* SignalConversion: '<S6>/Signal Copy5' */
  Longctrl_NoBrakeForce = rtu_LONC_VCAN_ESP->NoBrkForce;

  /* S-Function (sfix_udelay): '<S19>/Tapped Delay1' */
  PubIfControlLONC_MDL_B.TappedDelay1_g[0] = Longctrl_NoBrakeForce;
  for (i = 0; i < 5; i++) {
    PubIfControlLONC_MDL_B.TappedDelay1_g[i + 1] =
      PubIfControlLONC_MDL_DW.TappedDelay1_X_b[i];
  }

  /* End of S-Function (sfix_udelay): '<S19>/Tapped Delay1' */

  /* Sum: '<S19>/Sum of Elements1' */
  tmp = 0U;
  for (i = 0; i < 6; i++) {
    tmp += PubIfControlLONC_MDL_B.TappedDelay1_g[i];
  }

  /* Sum: '<S19>/Sum of Elements1' */
  PubIfControlLONC_MDL_B.SumofElements1 = (uint8_T)tmp;

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_e = (PubIfControlLONC_MDL_B.SumofElements1 ==
    ((uint8_T)6U));

  /* SignalConversion: '<S6>/Signal Copy4' */
  Longctrl_VIE_AxRefDt = *rtu_axRefDt;

  /* Abs: '<S19>/Abs4' */
  PubIfControlLONC_MDL_B.Abs4 = fabsf(Longctrl_VIE_AxRefDt);

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_m = (PubIfControlLONC_MDL_B.Abs4 <=
    P_LongCtrl_VLCaDtThresUpdateTorq);

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_n = (PubIfControlLONC_MDL_B.Gain1 >=
    P_LongCtrl_VLCvelThresUpdateTorq);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_a = (Longctrl_ShiftinProgress == false);

  /* UnitDelay: '<S53>/Delay Input1' */
  PubIfControlLONC_MDL_B.Uk1 = PubIfControlLONC_MDL_DW.DelayInput1_DSTATE;

  /* RelationalOperator: '<S53>/FixPt Relational Operator' */
  PubIfControlLONC_MDL_B.FixPtRelationalOperator = (uint8_T)((int32_T)
    Longctrl_ShiftinProgress < (int32_T)PubIfControlLONC_MDL_B.Uk1);

  /* UnitDelay: '<S52>/Unit Delay1' */
  PubIfControlLONC_MDL_B.UnitDelay1_j =
    PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_f;

  /* UnitDelay: '<S52>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_ir =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_c;

  /* MATLAB Function: '<S52>/MATLAB Function' */
  VlcSlidAxTar = PubIfControlLONC_MDL_B.UnitDelay_ir;
  t_I = 0.0F;
  if (PubIfControlLONC_MDL_B.FixPtRelationalOperator == 1) {
    VlcSlidAxTar = 1.0F;
  }

  if (VlcSlidAxTar == 1.0F) {
    t_I = PubIfControlLONC_MDL_B.UnitDelay1_j + 0.02F;
  }

  if (t_I > 0.5F) {
    VlcSlidAxTar = 0.0F;
  }

  PubIfControlLONC_MDL_B.Timer = t_I;
  PubIfControlLONC_MDL_B.StartTimer = VlcSlidAxTar;

  /* End of MATLAB Function: '<S52>/MATLAB Function' */

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_o = (PubIfControlLONC_MDL_B.Timer == 0.0F);

  /* Logic: '<S19>/Logical Operator' */
  LongCtrl_UpdateEnable_axvModeldiff = (PubIfControlLONC_MDL_B.Compare_e &&
    PubIfControlLONC_MDL_B.Compare_m && PubIfControlLONC_MDL_B.Compare_n &&
    PubIfControlLONC_MDL_B.Compare_a && PubIfControlLONC_MDL_B.Compare_o);

  /* UnitDelay: '<S23>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_k =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_fb;

  /* Switch: '<S23>/Switch1' */
  if (LongCtrl_UpdateEnable_axvModeldiff) {
    /* Switch: '<S23>/Switch1' */
    PubIfControlLONC_MDL_B.Switch1_e = LongCtrl_axvModelDiff;
  } else {
    /* Switch: '<S23>/Switch1' */
    PubIfControlLONC_MDL_B.Switch1_e = PubIfControlLONC_MDL_B.UnitDelay_k;
  }

  /* End of Switch: '<S23>/Switch1' */

  /* RelationalOperator: '<S56>/LowerRelop1' incorporates:
   *  Constant: '<S23>/Constant1'
   */
  PubIfControlLONC_MDL_B.LowerRelop1 = (PubIfControlLONC_MDL_B.Switch1_e > 0.5F);

  /* RelationalOperator: '<S56>/UpperRelop' */
  PubIfControlLONC_MDL_B.UpperRelop = (PubIfControlLONC_MDL_B.Switch1_e <
    PubIfControlLONC_MDL_ConstB.Gain1);

  /* Switch: '<S56>/Switch' */
  if (PubIfControlLONC_MDL_B.UpperRelop) {
    /* Switch: '<S56>/Switch' */
    PubIfControlLONC_MDL_B.Switch_m = PubIfControlLONC_MDL_ConstB.Gain1;
  } else {
    /* Switch: '<S56>/Switch' */
    PubIfControlLONC_MDL_B.Switch_m = PubIfControlLONC_MDL_B.Switch1_e;
  }

  /* End of Switch: '<S56>/Switch' */

  /* Switch: '<S56>/Switch2' */
  if (PubIfControlLONC_MDL_B.LowerRelop1) {
    /* Switch: '<S56>/Switch2' incorporates:
     *  Constant: '<S23>/Constant1'
     */
    PubIfControlLONC_MDL_B.Switch2 = 0.5F;
  } else {
    /* Switch: '<S56>/Switch2' */
    PubIfControlLONC_MDL_B.Switch2 = PubIfControlLONC_MDL_B.Switch_m;
  }

  /* End of Switch: '<S56>/Switch2' */

  /* Sum: '<S23>/Sum11' */
  PubIfControlLONC_MDL_B.Sum11 = PubIfControlLONC_MDL_B.Switch2 -
    PubIfControlLONC_MDL_B.UnitDelay_k;

  /* Product: '<S23>/Product3' */
  PubIfControlLONC_MDL_B.Product3_a = PubIfControlLONC_MDL_B.Product4 *
    PubIfControlLONC_MDL_B.Sum11;

  /* Sum: '<S23>/Sum12' */
  LongCtrl_axvModelResidual = PubIfControlLONC_MDL_B.Product3_a +
    PubIfControlLONC_MDL_B.UnitDelay_k;

  /* Sum: '<S22>/Sum3' */
  LongCtrl_axvClosedLoopControl = LongCtrl_axvModelResidual +
    LongCtrl_VlcInternalAcc;

  /* UnitDelay: '<S22>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_n4 =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_m;

  /* Sum: '<S22>/Sum4' */
  PubIfControlLONC_MDL_B.Sum4 = LongCtrl_axvClosedLoopControl -
    PubIfControlLONC_MDL_B.UnitDelay_n4;

  /* UnitDelay: '<S55>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_e0 =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_a;

  /* Sum: '<S55>/Sum9' */
  PubIfControlLONC_MDL_B.Sum9 = PubIfControlLONC_MDL_B.Sum4 -
    PubIfControlLONC_MDL_B.UnitDelay_e0;

  /* Product: '<S55>/Product8' */
  PubIfControlLONC_MDL_B.Product8 = PubIfControlLONC_MDL_ConstB.Product7_i *
    PubIfControlLONC_MDL_B.Sum9;

  /* Sum: '<S55>/Sum14' */
  PubIfControlLONC_MDL_B.Sum14 = PubIfControlLONC_MDL_B.Product8 +
    PubIfControlLONC_MDL_B.UnitDelay_e0;

  /* Abs: '<S22>/Abs' */
  PubIfControlLONC_MDL_B.Abs_n = fabsf(PubIfControlLONC_MDL_B.Sum14);

  /* Lookup_n-D: '<S22>/tfxvCvFilter1 ' incorporates:
   *  Abs: '<S22>/Abs'
   */
  PubIfControlLONC_MDL_B.tfxvCvFilter1 = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Abs_n, rtCP_tfxvCvFilter1_bp01Data,
     rtCP_tfxvCvFilter1_tableData, 3U);

  /* Product: '<S22>/Product' incorporates:
   *  Constant: '<S22>/Constant'
   */
  PubIfControlLONC_MDL_B.Product_i = 0.02F /
    PubIfControlLONC_MDL_B.tfxvCvFilter1;

  /* Abs: '<S22>/Abs1' */
  PubIfControlLONC_MDL_B.Abs1_a = fabsf(LongCtrl_axvDiff);

  /* Lookup_n-D: '<S22>/tfxvCvFilter2' incorporates:
   *  Abs: '<S22>/Abs1'
   */
  PubIfControlLONC_MDL_B.tfxvCvFilter2 = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Abs1_a, rtCP_tfxvCvFilter2_bp01Data,
     rtCP_tfxvCvFilter2_tableData, 3U);

  /* Product: '<S22>/Product1' incorporates:
   *  Constant: '<S22>/Constant1'
   */
  PubIfControlLONC_MDL_B.Product1_k = 0.02F /
    PubIfControlLONC_MDL_B.tfxvCvFilter2;

  /* MinMax: '<S22>/MinMax' */
  VlcSlidAxTar = fminf(PubIfControlLONC_MDL_B.Product_i,
                       PubIfControlLONC_MDL_B.Product1_k);

  /* MinMax: '<S22>/MinMax' */
  PubIfControlLONC_MDL_B.MinMax = VlcSlidAxTar;

  /* Gain: '<S11>/Gain2' incorporates:
   *  Constant: '<S11>/Weight//N6'
   */
  PubIfControlLONC_MDL_B.Gain2_d = 0.1F * P_Global_Weight_N;

  /* Product: '<S11>/Product5' */
  PubIfControlLONC_MDL_B.Product5_c = PubIfControlLONC_MDL_B.Ma_Ratio *
    PubIfControlLONC_MDL_B.Gain2_d;

  /* Product: '<S11>/Product1' */
  PubIfControlLONC_MDL_B.Product1_j = LongCtrl_axvClosedLoopControl *
    PubIfControlLONC_MDL_B.Product5_c;

  /* Lookup_n-D: '<S31>/FilterTime' incorporates:
   *  SignalConversion: '<S6>/Signal Copy1'
   */
  PubIfControlLONC_MDL_B.FilterTime_m = look1_iflf_binlcapw(LongCtrl_vxvRefMs,
    rtCP_FilterTime_bp01Data_h, rtCP_FilterTime_tableData_g, 4U);

  /* Product: '<S31>/Product2' incorporates:
   *  Constant: '<S31>/Constant2'
   */
  PubIfControlLONC_MDL_B.Product2 = 0.02F / PubIfControlLONC_MDL_B.FilterTime_m;

  /* UnitDelay: '<S31>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_o =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_o;

  /* Sum: '<S31>/Sum6' */
  PubIfControlLONC_MDL_B.Sum6_o = LongCtrl_Fz -
    PubIfControlLONC_MDL_B.UnitDelay_o;

  /* Product: '<S31>/Product6' */
  PubIfControlLONC_MDL_B.Product6_h = PubIfControlLONC_MDL_B.Product2 *
    PubIfControlLONC_MDL_B.Sum6_o;

  /* Sum: '<S31>/Sum7' */
  PubIfControlLONC_MDL_B.Sum7_g = PubIfControlLONC_MDL_B.Product6_h +
    PubIfControlLONC_MDL_B.UnitDelay_o;

  /* Sum: '<S11>/Add1' */
  PubIfControlLONC_MDL_B.Fxv = PubIfControlLONC_MDL_B.Product1_j +
    PubIfControlLONC_MDL_B.Sum7_g;

  /* UnitDelay: '<S30>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_b =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_h;

  /* Sum: '<S30>/Add2' */
  PubIfControlLONC_MDL_B.Add2 = PubIfControlLONC_MDL_B.Fxv -
    PubIfControlLONC_MDL_B.UnitDelay_b;

  /* Product: '<S30>/Product4' */
  PubIfControlLONC_MDL_B.Product4_b = PubIfControlLONC_MDL_B.MinMax *
    PubIfControlLONC_MDL_B.Add2;

  /* Sum: '<S30>/Add3' */
  PubIfControlLONC_MDL_B.Add3_c = PubIfControlLONC_MDL_B.Product4_b +
    PubIfControlLONC_MDL_B.UnitDelay_b;

  /* Sum: '<S11>/Add2' incorporates:
   *  Constant: '<S6>/FxvCompensate'
   */
  PubIfControlLONC_MDL_B.Add2_d = PubIfControlLONC_MDL_B.Add3_c + 0.0F;

  /* Product: '<S11>/Product2' incorporates:
   *  Constant: '<S11>/Weight//N2'
   */
  PubIfControlLONC_MDL_B.Product2_a = 1.0F / LongCtrl_Tr_Ratio *
    PubIfControlLONC_MDL_B.Add2_d * P_Global_TireRadius_m;

  /* Product: '<S11>/Product3' incorporates:
   *  Constant: '<S11>/TireRadius//m1'
   */
  PubIfControlLONC_MDL_B.Product3_k = PubIfControlLONC_MDL_B.Product2_a /
    Longctrl_NetEngTorqNorm * 100.0F;

  /* Lookup_n-D: '<S11>/Efficiency' incorporates:
   *  Product: '<S11>/Product3'
   */
  LongCtrl_FF_NetEngTorqMax = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Product3_k,
     P_LongCtrl_VLCtorqCharEngInverseEfficientXAxis,
     P_LongCtrl_VLCengInverseEfficientYAxis, 4U);

  /* UnitDelay: '<S6>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_oy =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_n1;

  /* Sum: '<S11>/Add4' */
  PubIfControlLONC_MDL_B.Add4_h = LongCtrl_FF_NetEngTorqMax -
    PubIfControlLONC_MDL_B.UnitDelay_oy;

  /* Product: '<S11>/Product6' incorporates:
   *  Constant: '<S6>/Ks'
   */
  LongCtrl_FF_NetEngTorqInc = PubIfControlLONC_MDL_B.Add4_h * P_LongCtrl_VLCks;

  /* UnitDelay: '<S10>/Unit Delay5' */
  PubIfControlLONC_MDL_B.UnitDelay5_h =
    PubIfControlLONC_MDL_DW.UnitDelay5_DSTATE_e;

  /* Sum: '<S10>/Sum6' */
  PubIfControlLONC_MDL_B.Sum6_p = (PubIfControlLONC_MDL_B.Product1_m +
    LongCtrl_FF_NetEngTorqInc) + PubIfControlLONC_MDL_B.UnitDelay5_h;

  /* UnitDelay: '<S28>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_e5 =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_l;

  /* Sum: '<S28>/Sum9' */
  PubIfControlLONC_MDL_B.Sum9_e = PubIfControlLONC_MDL_B.Sum6_p -
    PubIfControlLONC_MDL_B.UnitDelay_e5;

  /* Product: '<S28>/Product8' */
  PubIfControlLONC_MDL_B.Product8_p = PubIfControlLONC_MDL_ConstB.Product7 *
    PubIfControlLONC_MDL_B.Sum9_e;

  /* Sum: '<S28>/Sum14' */
  PubIfControlLONC_MDL_B.Sum14_m = PubIfControlLONC_MDL_B.Product8_p +
    PubIfControlLONC_MDL_B.UnitDelay_e5;

  /* UnitDelay: '<S10>/Unit Delay3' */
  PubIfControlLONC_MDL_B.UnitDelay3_f =
    PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE_m;

  /* UnitDelay: '<S10>/Unit Delay4' */
  PubIfControlLONC_MDL_B.UnitDelay4_i =
    PubIfControlLONC_MDL_DW.UnitDelay4_DSTATE_a;

  /* MATLAB Function: '<S10>/MATLAB Function' */
  if (!PubIfControlLONC_MDL_B.UnitDelay4_i) {
    PubIfControlLONC_MDL_B.y = Longctrl_NetEngTrq;
  } else {
    PubIfControlLONC_MDL_B.y = PubIfControlLONC_MDL_B.UnitDelay3_f;
  }

  /* End of MATLAB Function: '<S10>/MATLAB Function' */

  /* Product: '<S10>/Product5' */
  PubIfControlLONC_MDL_B.FxIncDelta = PubIfControlLONC_MDL_B.Up *
    Longctrl_tCycleVLC * PubIfControlLONC_MDL_B.Gain2 *
    PubIfControlLONC_MDL_B.Ma_Ratio;

  /* Lookup_n-D: '<S10>/P_VlcdFxLimPosChar ' incorporates:
   *  SignalConversion: '<S6>/Signal Copy13'
   */
  PubIfControlLONC_MDL_B.P_VlcdFxLimPosChar = look1_iflf_binlcapw
    (Longctrl_EngSpd, rtCP_P_VlcdFxLimPosChar_bp01Data,
     rtCP_P_VlcdFxLimPosChar_tableData, 2U);

  /* MinMax: '<S10>/MinMax' */
  VlcSlidAxTar = fminf(PubIfControlLONC_MDL_B.FxIncDelta,
                       PubIfControlLONC_MDL_B.P_VlcdFxLimPosChar);

  /* MinMax: '<S10>/MinMax' */
  PubIfControlLONC_MDL_B.MinMax_l = VlcSlidAxTar;

  /* Product: '<S10>/Product6' */
  PubIfControlLONC_MDL_B.FxDecDelta = PubIfControlLONC_MDL_B.Low *
    Longctrl_tCycleVLC * PubIfControlLONC_MDL_B.Gain6 *
    PubIfControlLONC_MDL_B.Ma_Ratio;

  /* MinMax: '<S10>/MinMax7' incorporates:
   *  Constant: '<S10>/P_VlcdFxLimNeg'
   */
  VlcSlidAxTar = fmaxf(-15000.0F, PubIfControlLONC_MDL_B.FxDecDelta);

  /* MinMax: '<S10>/MinMax7' */
  PubIfControlLONC_MDL_B.MinMax7 = VlcSlidAxTar;

  /* Product: '<S10>/Product8' incorporates:
   *  Constant: '<S10>/Weight//N2'
   */
  PubIfControlLONC_MDL_B.Product8_l = 1.0F / LongCtrl_Tr_Ratio *
    P_Global_TireRadius_m * PubIfControlLONC_MDL_B.MinMax7;

  /* Product: '<S10>/Product3' incorporates:
   *  Constant: '<S10>/TireRadius//m1'
   */
  PubIfControlLONC_MDL_B.Product3_h = PubIfControlLONC_MDL_B.Product8_l /
    Longctrl_NetEngTorqNorm * 100.0F;

  /* Sum: '<S10>/Sum3' */
  LongCtrl_UpdateLowerValue = PubIfControlLONC_MDL_B.y +
    PubIfControlLONC_MDL_B.Product3_h;

  /* MinMax: '<S10>/MinMax1' */
  VlcSlidAxTar = fmaxf(LongCtrl_UpdateLowerValue, PubIfControlLONC_MDL_B.Sum14_m);

  /* MinMax: '<S10>/MinMax1' */
  PubIfControlLONC_MDL_B.MinMax1_m = VlcSlidAxTar;

  /* Product: '<S10>/Product7' incorporates:
   *  Constant: '<S10>/Weight//N2'
   */
  PubIfControlLONC_MDL_B.Product7_l = PubIfControlLONC_MDL_B.MinMax_l *
    P_Global_TireRadius_m / LongCtrl_Tr_Ratio;

  /* Product: '<S10>/Product2' incorporates:
   *  Constant: '<S10>/TireRadius//m2'
   */
  PubIfControlLONC_MDL_B.Product2_p = PubIfControlLONC_MDL_B.Product7_l /
    Longctrl_NetEngTorqNorm * 100.0F;

  /* Sum: '<S10>/Sum2' */
  LongCtrl_UpdateUpperValue = PubIfControlLONC_MDL_B.Product2_p +
    PubIfControlLONC_MDL_B.y;

  /* MinMax: '<S10>/MinMax2' */
  VlcSlidAxTar = fminf(PubIfControlLONC_MDL_B.MinMax1_m,
                       LongCtrl_UpdateUpperValue);

  /* MinMax: '<S10>/MinMax2' */
  LongCtrl_ACC_EngTrqReq = VlcSlidAxTar;

  /* Gain: '<S11>/Gain1' */
  PubIfControlLONC_MDL_B.Gain1_a = 0.8F * PubIfControlLONC_MDL_B.Add4_h;

  /* Sum: '<S11>/Add3' */
  PubIfControlLONC_MDL_B.Add3_n = PubIfControlLONC_MDL_B.Gain1_a +
    PubIfControlLONC_MDL_B.UnitDelay_oy;

  /* SignalConversion: '<S6>/Signal Copy11' */
  Longctrl_EngTqMinAct = rtu_LONC_VCAN_ECM->EngTrqMinAct;

  /* SignalConversion: '<S6>/Signal Copy17' */
  Longctrl_ACC_axv_ComfortBandLowerValue =
    *rtu_PLAN_ACCPLAN_ACC_axv_ComfortBandLowerValue;

  /* SignalConversion: '<S6>/Signal Copy18' */
  Longctrl_ACC_axv_ComfortBandUpperValue =
    *rtu_PLAN_ACCPLAN_ACC_axv_ComfortBandUpperValue;

  /* SignalConversion: '<S6>/Signal Copy21' */
  Longctrl_ACC_BrakePrefer = *rtu_PLAN_ACCPLAN_ACC_BrakePrefer;

  /* SignalConversion: '<S6>/Signal Copy22' */
  Longctrl_ACC_DecelToStopReq = *rtu_PLAN_Longctrl_DecelToStopReq;

  /* RelationalOperator: '<S15>/Relational Operator2' incorporates:
   *  Constant: '<S15>/Constant2'
   */
  PubIfControlLONC_MDL_B.RelationalOperator2 = (LongCtrl_FLWheelDriveDirection ==
    2.0);

  /* RelationalOperator: '<S15>/Relational Operator5' incorporates:
   *  Constant: '<S15>/Constant5'
   */
  PubIfControlLONC_MDL_B.RelationalOperator5 = (LongCtrl_FRWheelDriveDirection ==
    2.0);

  /* UnitDelay: '<S6>/Unit Delay4' */
  PubIfControlLONC_MDL_B.UnitDelay4 = PubIfControlLONC_MDL_DW.UnitDelay4_DSTATE;

  /* Sum: '<S6>/Sum1' */
  LongCtrl_PI_NetEngTorq = LongCtrl_PI_NetEngTorqInc +
    PubIfControlLONC_MDL_B.UnitDelay4;

  /* Sum: '<S6>/Sum2' */
  LongCtrl_FF_NetEngTorq = PubIfControlLONC_MDL_B.UnitDelay4 +
    LongCtrl_FF_NetEngTorqInc;

  /* Sum: '<S17>/Add2' */
  PubIfControlLONC_MDL_B.Add2_c = Longctrl_NetEngTrq - LongCtrl_ACC_EngTrqReq;

  /* RelationalOperator: '<S37>/Compare' incorporates:
   *  Constant: '<S37>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_ly = (PubIfControlLONC_MDL_B.Add2_c >
    P_LongCtrl_VLCTorqDiffThreAxvTracMinTimeout);

  /* Switch: '<S17>/Switch2' */
  if (PubIfControlLONC_MDL_B.Compare_ly) {
    /* Switch: '<S17>/Switch2' incorporates:
     *  Constant: '<S17>/Constant4'
     */
    PubIfControlLONC_MDL_B.Switch2_l = 1.0F;
  } else {
    /* Switch: '<S17>/Switch2' incorporates:
     *  Constant: '<S17>/Constant5'
     */
    PubIfControlLONC_MDL_B.Switch2_l = (-5.0F);
  }

  /* End of Switch: '<S17>/Switch2' */

  /* UnitDelay: '<S17>/Unit Delay1' */
  PubIfControlLONC_MDL_B.UnitDelay1_f =
    PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_j;

  /* Sum: '<S17>/Add3' */
  PubIfControlLONC_MDL_B.Add3_m = PubIfControlLONC_MDL_B.Switch2_l +
    PubIfControlLONC_MDL_B.UnitDelay1_f;

  /* Saturate: '<S17>/Saturation' */
  VlcSlidAxTar = PubIfControlLONC_MDL_B.Add3_m;
  t_I = 0.0F;
  Icompension = 100.0F;
  if (VlcSlidAxTar > Icompension) {
    /* Saturate: '<S17>/Saturation' */
    PubIfControlLONC_MDL_B.Saturation = Icompension;
  } else if (VlcSlidAxTar < t_I) {
    /* Saturate: '<S17>/Saturation' */
    PubIfControlLONC_MDL_B.Saturation = t_I;
  } else {
    /* Saturate: '<S17>/Saturation' */
    PubIfControlLONC_MDL_B.Saturation = VlcSlidAxTar;
  }

  /* End of Saturate: '<S17>/Saturation' */

  /* RelationalOperator: '<S38>/Compare' incorporates:
   *  Constant: '<S38>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_nq = (PubIfControlLONC_MDL_B.Saturation >
    P_LongCtrl_VLCCounterAxvTracMinTimeout);

  /* RelationalOperator: '<S39>/Compare' incorporates:
   *  Constant: '<S39>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_i = (LongCtrl_VlcInternalAcc <
    P_LongCtrl_VLCVlcAccThresAxvTracMinTimeout);

  /* RelationalOperator: '<S40>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
   */
  LongCtrl_Sw2DC6 = (Longctrl_ShiftinProgress == false);

  /* Gain: '<S25>/Gain2' incorporates:
   *  Constant: '<S25>/Weight//N7'
   */
  PubIfControlLONC_MDL_B.Gain2_hq = 0.10204082F * P_Global_Weight_N;

  /* Product: '<S25>/Product5' */
  PubIfControlLONC_MDL_B.Product5_i = PubIfControlLONC_MDL_B.Ma_Ratio *
    PubIfControlLONC_MDL_B.Gain2_hq;

  /* Lookup_n-D: '<S25>/1-D Lookup Table' incorporates:
   *  Gain: '<S6>/Gain1'
   */
  PubIfControlLONC_MDL_B.uDLookupTable_o = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Gain1, rtCP_uDLookupTable_bp01Data_l,
     rtCP_uDLookupTable_tableData_a, 10U);

  /* Product: '<S25>/Product7' */
  PubIfControlLONC_MDL_B.Product7_c = Longctrl_EngTqMinAct *
    PubIfControlLONC_MDL_B.uDLookupTable_o;

  /* Lookup_n-D: '<S25>/Efficiency' incorporates:
   *  Product: '<S25>/Product7'
   */
  PubIfControlLONC_MDL_B.Efficiency_p = look1_iflf_binlcapw
    (PubIfControlLONC_MDL_B.Product7_c, P_LongCtrl_VLCtorqCharEngEfficientXAxis,
     P_LongCtrl_VLCengEfficientCharYAxis, 4U);

  /* Gain: '<S25>/Gain' */
  PubIfControlLONC_MDL_B.Gain_g = 0.01F * PubIfControlLONC_MDL_B.Product7_c;

  /* Product: '<S25>/Product' */
  PubIfControlLONC_MDL_B.Product_a = PubIfControlLONC_MDL_B.Efficiency_p *
    PubIfControlLONC_MDL_B.Gain_g * Longctrl_NetEngTorqNorm;

  /* Product: '<S25>/Product1' incorporates:
   *  Constant: '<S25>/Weight//N1'
   */
  PubIfControlLONC_MDL_B.F_drive_d = LongCtrl_Tr_Ratio *
    PubIfControlLONC_MDL_B.Product_a / P_Global_TireRadius_m;

  /* Product: '<S25>/Product3' incorporates:
   *  Constant: '<S25>/Weight//N4'
   *  Constant: '<S25>/Weight//N8'
   *  Constant: '<S25>/Weight//N9'
   */
  PubIfControlLONC_MDL_B.F_wind_m = PubIfControlLONC_MDL_B.Gain1 *
    PubIfControlLONC_MDL_B.Gain1 * P_LongCtrl_VLC_fRollCoef *
    P_LongCtrl_VLC_WindArea / 21.15F;

  /* Lookup_n-D: '<S25>/f' incorporates:
   *  Gain: '<S6>/Gain1'
   */
  PubIfControlLONC_MDL_B.f_p = look1_iflf_binlcapw(PubIfControlLONC_MDL_B.Gain1,
    P_LongCtrl_VLCcoefFXAxis, P_LongCtrl_VLCcoefFYAxis, 9U);

  /* Trigonometry: '<S25>/Trigonometric Function' */
  PubIfControlLONC_MDL_B.TrigonometricFunction_e = cosf
    (PubIfControlLONC_MDL_B.TrigonometricFunction);

  /* Product: '<S25>/Product2' incorporates:
   *  Constant: '<S25>/Weight//N5'
   */
  PubIfControlLONC_MDL_B.F_f_c = PubIfControlLONC_MDL_B.f_p * P_Global_Weight_N *
    PubIfControlLONC_MDL_B.TrigonometricFunction_e;

  /* Trigonometry: '<S25>/Trigonometric Function1' */
  PubIfControlLONC_MDL_B.TrigonometricFunction1_f = sinf
    (PubIfControlLONC_MDL_B.TrigonometricFunction);

  /* Product: '<S25>/Product4' incorporates:
   *  Constant: '<S25>/Weight//N6'
   */
  PubIfControlLONC_MDL_B.F_slope_k = P_Global_Weight_N *
    PubIfControlLONC_MDL_B.TrigonometricFunction1_f;

  /* Sum: '<S25>/Sum1' */
  PubIfControlLONC_MDL_B.Sum1_i = ((PubIfControlLONC_MDL_B.F_drive_d -
    PubIfControlLONC_MDL_B.F_wind_m) - PubIfControlLONC_MDL_B.F_f_c) -
    PubIfControlLONC_MDL_B.F_slope_k;

  /* Product: '<S25>/Product6' */
  LongCtrl_axvTracMin = 1.0F / PubIfControlLONC_MDL_B.Product5_i *
    PubIfControlLONC_MDL_B.Sum1_i;

  /* RelationalOperator: '<S17>/Relational Operator9' */
  PubIfControlLONC_MDL_B.RelationalOperator9_b = (LongCtrl_axvTracMin >
    Longctrl_ACC_axvCvAim);

  /* DataTypeConversion: '<S17>/Data Type Conversion7' */
  PubIfControlLONC_MDL_B.DataTypeConversion7 =
    PubIfControlLONC_MDL_B.RelationalOperator9_b;

  /* Sum: '<S17>/Sum1' */
  PubIfControlLONC_MDL_B.Sum1_h = Longctrl_VIE_axRefMs2 -
    Longctrl_ACC_axv_ComfortBandUpperValue;

  /* UnitDelay: '<S17>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_c =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_nf;

  /* Sum: '<S17>/Sum3' */
  PubIfControlLONC_MDL_B.Sum3 = PubIfControlLONC_MDL_B.Sum1_h -
    PubIfControlLONC_MDL_B.UnitDelay_c;

  /* Gain: '<S17>/Gain1' */
  PubIfControlLONC_MDL_B.Gain1_as = 50.0F * PubIfControlLONC_MDL_B.Sum3;

  /* Gain: '<S17>/Gain2' */
  PubIfControlLONC_MDL_B.Gain2_f = (-1.0F) * LongCtrl_axvRoadSlopeMs2;

  /* UnitDelay: '<S41>/Unit Delay' */
  PubIfControlLONC_MDL_B.UnitDelay_g =
    PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_o3;

  /* Sum: '<S41>/Sum4' */
  PubIfControlLONC_MDL_B.Sum4_p = PubIfControlLONC_MDL_B.Gain1_as -
    PubIfControlLONC_MDL_B.UnitDelay_g;

  /* Product: '<S41>/Product1' */
  PubIfControlLONC_MDL_B.Product1_jo = PubIfControlLONC_MDL_ConstB.Product4_j *
    PubIfControlLONC_MDL_B.Sum4_p;

  /* Sum: '<S41>/Sum5' */
  PubIfControlLONC_MDL_B.Sum5 = PubIfControlLONC_MDL_B.Product1_jo +
    PubIfControlLONC_MDL_B.UnitDelay_g;

  /* Logic: '<S17>/Logical Operator1' */
  PubIfControlLONC_MDL_B.LogicalOperator1_c = (PubIfControlLONC_MDL_B.Compare_nq
    && PubIfControlLONC_MDL_B.Compare_i);

  /* Lookup_n-D: '<S17>/P_LongCtrl_VLCAxvTracMinDC1FullFill' incorporates:
   *  SignalConversion: '<S6>/Signal Copy1'
   */
  PubIfControlLONC_MDL_B.P_LongCtrl_VLCAxvTracMinDC1FullFill =
    look1_iflf_binlcapw(LongCtrl_vxvRefMs,
                        P_LongCtrl_VLCAxvTracMinDC1FullFillXAxis,
                        P_LongCtrl_VLCAxvTracMinDC1FullFillYAxis, 3U);

  /* Sum: '<S17>/Sum8' */
  PubIfControlLONC_MDL_B.Sum8_a = LongCtrl_axvTracMin -
    PubIfControlLONC_MDL_B.P_LongCtrl_VLCAxvTracMinDC1FullFill;

  /* RelationalOperator: '<S17>/Relational Operator1' */
  PubIfControlLONC_MDL_B.RelationalOperator1_f = (LongCtrl_VlcInternalAcc <=
    PubIfControlLONC_MDL_B.Sum8_a);

  /* Logic: '<S17>/Logical Operator3' */
  LongCtrl_Sw2DC1 = (PubIfControlLONC_MDL_B.LogicalOperator1_c ||
                     PubIfControlLONC_MDL_B.RelationalOperator1_f);

  /* S-Function (sfix_look1_dyn): '<S17>/P_LongCtrl_VLCAxCtrlDevTresAddEC2DCChar' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Constant: '<S6>/Constant11'
   */
  /* Dynamic Look-Up Table Block: '<S17>/P_LongCtrl_VLCAxCtrlDevTresAddEC2DCChar'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T
    ( &(PubIfControlLONC_MDL_B.P_LongCtrl_VLCAxCtrlDevTresAddEC2DCChar),
     &P_LongCtrl_VLCaxCtrlDevThresAddEC2DCCharYAxis[0],
     PubIfControlLONC_MDL_B.Sum7_i,
     &P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddEC2DCXAxis[0], 4U);

  /* S-Function (sfix_look1_dyn): '<S17>/VlcAxCtrlDevThresAddEC2DC1' incorporates:
   *  Constant: '<S17>/Constant2'
   *  Constant: '<S17>/Constant6'
   */
  /* Dynamic Look-Up Table Block: '<S17>/VlcAxCtrlDevThresAddEC2DC1'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T( &(PubIfControlLONC_MDL_B.VlcAxCtrlDevThresAddEC2DC1),
    &P_LongCtrl_VLCaxvRoadSlopeDC4CharYAxis[0], LongCtrl_axvRoadSlopeMs2,
    &P_LongCtrl_VLCaxvRoadSlopeDC4CharXAxis[0], 4U);

  /* Product: '<S17>/Product' */
  PubIfControlLONC_MDL_B.Product_n =
    PubIfControlLONC_MDL_B.P_LongCtrl_VLCAxCtrlDevTresAddEC2DCChar *
    PubIfControlLONC_MDL_B.VlcAxCtrlDevThresAddEC2DC1;

  /* Sum: '<S17>/Sum2' */
  PubIfControlLONC_MDL_B.Sum2 = Longctrl_VIE_axRefMs2 -
    PubIfControlLONC_MDL_B.P_LongCtrl_VLCAxCtrlDevTresAddEC2DCChar;

  /* RelationalOperator: '<S17>/Relational Operator2' */
  LongCtrl_Sw2DC3 = (LongCtrl_VlcInternalAcc <= PubIfControlLONC_MDL_B.Sum2);

  /* RelationalOperator: '<S17>/Relational Operator3' incorporates:
   *  Constant: '<S17>/P_LongCtrl_VLCDtAxvRef2UpperBandDC5'
   */
  LongCtrl_Sw2DC5 = (PubIfControlLONC_MDL_B.Sum5 >=
                     P_LongCtrl_VLCDtAxvRef2UpperBandDC5);

  /* Sum: '<S17>/Sum4' */
  PubIfControlLONC_MDL_B.Sum4_o = Longctrl_VIE_axRefMs2 -
    Longctrl_ACC_axv_ComfortBandUpperValue;

  /* RelationalOperator: '<S17>/Relational Operator4' incorporates:
   *  Constant: '<S6>/Constant12'
   */
  PubIfControlLONC_MDL_B.RelationalOperator4_d = (PubIfControlLONC_MDL_B.Sum4_o >
    P_LongCtrl_VLCaxCtrlDevEC2DCMax);

  /* RelationalOperator: '<S17>/Relational Operator5' incorporates:
   *  Constant: '<S6>/Constant13'
   */
  PubIfControlLONC_MDL_B.RelationalOperator5_d = (PubIfControlLONC_MDL_B.Sum7_i <
    P_LongCtrl_VLCdaxTarEC2DCMax);

  /* Sum: '<S17>/Sum5' incorporates:
   *  Constant: '<S17>/Constant3'
   */
  PubIfControlLONC_MDL_B.Sum5_b = 0.2F + PubIfControlLONC_MDL_B.Gain2_f;

  /* RelationalOperator: '<S17>/Relational Operator6' */
  LongCtrl_Sw2DC7 = (LongCtrl_VlcInternalAcc < PubIfControlLONC_MDL_B.Sum5_b);

  /* RelationalOperator: '<S17>/Relational Operator7' */
  LongCtrl_Sw2DC2 = (Longctrl_ACC_axvCvAim <= LongCtrl_VlcInternalAcc);

  /* Sum: '<S17>/Sum6' */
  PubIfControlLONC_MDL_B.Sum6_j = Longctrl_VIE_axRefMs2 -
    PubIfControlLONC_MDL_B.Product_n;

  /* RelationalOperator: '<S17>/Relational Operator8' */
  LongCtrl_Sw2DC4 = (PubIfControlLONC_MDL_B.Sum6_j >=
                     Longctrl_ACC_axv_ComfortBandUpperValue);

  /* MATLAB Function: '<S17>/Switch' */
  if ((Longctrl_ACCSts == 6) || (Longctrl_ACCSts == 9) ||
      Longctrl_ACC_DecelToStopReq) {
    PubIfControlLONC_MDL_B.y_m = true;
  } else if (Longctrl_ACC_BrakePrefer) {
    PubIfControlLONC_MDL_B.y_m = LongCtrl_Sw2DC1;
  } else if (PubIfControlLONC_MDL_B.RelationalOperator5_d ||
             PubIfControlLONC_MDL_B.RelationalOperator4_d) {
    sf_internal_predicateOutput = (LongCtrl_Sw2DC1 && LongCtrl_Sw2DC2 &&
      LongCtrl_Sw2DC3 && LongCtrl_Sw2DC4 && LongCtrl_Sw2DC7);
    PubIfControlLONC_MDL_B.y_m = sf_internal_predicateOutput;
  } else {
    sf_internal_predicateOutput = (LongCtrl_Sw2DC1 && LongCtrl_Sw2DC2 &&
      LongCtrl_Sw2DC3 && LongCtrl_Sw2DC4 && LongCtrl_Sw2DC5 && LongCtrl_Sw2DC6 &&
      LongCtrl_Sw2DC7);
    PubIfControlLONC_MDL_B.y_m = sf_internal_predicateOutput;
  }

  /* End of MATLAB Function: '<S17>/Switch' */

  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_ap = (Longctrl_ACCSts == ((uint8_T)3U));

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   */
  LongCtrl_Sw2EC1 = (Longctrl_NoBrakeForce == true);

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   */
  PubIfControlLONC_MDL_B.Compare_a5 = (Longctrl_ACC_DrvOFF_Req == true);

  /* RelationalOperator: '<S18>/Relational Operator5' incorporates:
   *  Constant: '<S18>/P_VlcAxSlopeDriveOffDCMode'
   */
  PubIfControlLONC_MDL_B.RelationalOperator5_f = (LongCtrl_axvRoadSlopeMs2 >
    (-0.8));

  /* Logic: '<S18>/Logical Operator' */
  PubIfControlLONC_MDL_B.LogicalOperator_a = (PubIfControlLONC_MDL_B.Compare_a5 &&
    PubIfControlLONC_MDL_B.RelationalOperator5_f);

  /* S-Function (sfix_look1_dyn): '<S18>/VlcAxCtrlDevTresAddDC2EC' incorporates:
   *  Constant: '<S18>/Constant2'
   *  Constant: '<S6>/Constant9'
   */
  /* Dynamic Look-Up Table Block: '<S18>/VlcAxCtrlDevTresAddDC2EC'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real_Treal32_T_real32_T
    ( &(PubIfControlLONC_MDL_B.VlcAxCtrlDevTresAddDC2EC),
     &P_LongCtrl_VLCaxCtrlDevTresAddDC2ECYAxis[0], PubIfControlLONC_MDL_B.Sum7_i,
     &P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddDC2ECXAxis[0], 4U);

  /* Sum: '<S18>/Sum1' */
  PubIfControlLONC_MDL_B.Sum1 = Longctrl_VIE_axRefMs2 +
    PubIfControlLONC_MDL_B.VlcAxCtrlDevTresAddDC2EC;

  /* RelationalOperator: '<S18>/Relational Operator' */
  LongCtrl_Sw2EC3 = (LongCtrl_VlcInternalAcc >= PubIfControlLONC_MDL_B.Sum1);

  /* RelationalOperator: '<S18>/Relational Operator2' */
  LongCtrl_Sw2EC2 = (LongCtrl_VlcInternalAcc <= Longctrl_ACC_axvCvAim);

  /* Sum: '<S18>/Sum4' */
  PubIfControlLONC_MDL_B.Sum4_k = LongCtrl_VlcInternalAcc -
    Longctrl_VIE_axRefMs2;

  /* RelationalOperator: '<S18>/Relational Operator4' incorporates:
   *  Constant: '<S6>/Constant10'
   */
  LongCtrl_Sw2EC5 = (PubIfControlLONC_MDL_B.Sum4_k >=
                     P_LongCtrl_VLCaxCtrlDevFastQuitDCMode);

  /* Sum: '<S18>/Sum7' */
  PubIfControlLONC_MDL_B.Sum7 = Longctrl_ACC_axv_ComfortBandLowerValue -
    PubIfControlLONC_MDL_B.VlcAxCtrlDevTresAddDC2EC;

  /* RelationalOperator: '<S18>/Relational Operator6' */
  LongCtrl_Sw2EC4 = (PubIfControlLONC_MDL_B.Sum7 >= Longctrl_VIE_axRefMs2);

  /* MATLAB Function: '<S18>/Switch' */
  if (PubIfControlLONC_MDL_B.Compare_ap) {
    if (Longctrl_ACC_BrakePrefer || Longctrl_ACC_DecelToStopReq) {
      PubIfControlLONC_MDL_B.y_i = false;
    } else if (LongCtrl_Sw2EC5) {
      PubIfControlLONC_MDL_B.y_i = LongCtrl_Sw2EC1;
    } else {
      sf_internal_predicateOutput = (LongCtrl_Sw2EC1 && LongCtrl_Sw2EC2 &&
        LongCtrl_Sw2EC3 && LongCtrl_Sw2EC4);
      PubIfControlLONC_MDL_B.y_i = sf_internal_predicateOutput;
    }

    PubIfControlLONC_MDL_B.y_i = (PubIfControlLONC_MDL_B.LogicalOperator_a ||
      PubIfControlLONC_MDL_B.y_i);
  } else {
    PubIfControlLONC_MDL_B.y_i = false;
  }

  /* End of MATLAB Function: '<S18>/Switch' */

  /* UnitDelay: '<S6>/Unit Delay3' */
  PubIfControlLONC_MDL_B.UnitDelay3_h =
    PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE_g;

  /* Product: '<S23>/Product' incorporates:
   *  Constant: '<S23>/Constant'
   */
  PubIfControlLONC_MDL_B.Product_m = LongCtrl_axvModelResidual * 0.95F;

  /* Switch: '<S23>/Switch2' */
  if (LongCtrl_UpdateEnable_axvModeldiff) {
    /* Switch: '<S23>/Switch2' */
    PubIfControlLONC_MDL_B.Switch2_j = LongCtrl_axvModelResidual;
  } else {
    /* Switch: '<S23>/Switch2' */
    PubIfControlLONC_MDL_B.Switch2_j = PubIfControlLONC_MDL_B.Product_m;
  }

  /* End of Switch: '<S23>/Switch2' */

  /* Sum: '<S23>/Sum13' */
  LongCtrl_axvModelRef = LongCtrl_axvTracActMean -
    PubIfControlLONC_MDL_B.Switch2_j;

  /* SignalConversion: '<S6>/Signal Copy3' */
  Longctrl_VIE_alpSideSlipAngle = *rtu_alpSideSlipAngle;

  /* SignalConversion: '<S6>/Signal Copy7' */
  Longctrl_CurrentGear = rtu_LONC_VCAN_DCT->CURRENT_GEAR;

  /* SignalConversion: '<S6>/Signal Copy12' */
  Longctrl_EngTqMaxActSpd = rtu_LONC_VCAN_ECM->EngTrqMaxActSpd;

  /* End of Outputs for SubSystem: '<S3>/Vlc' */

  /* BusCreator: '<S3>/Bus Creator' */
  rty_LONC_CTRL_OUT->Longctrl_EngTrqReq = LongCtrl_ACC_EngTrqReq;
  rty_LONC_CTRL_OUT->Longctrl_EngTrqReqActive = LongCtrl_ECEnable;
  rty_LONC_CTRL_OUT->Longctrl_Decel_ReqValue = LongCtrl_ACC_Decel_ReqValue;

  /* BusCreator: '<S3>/Bus Creator1' */
  rty_LONC_Hybrid_CTRL_OUT->Longctrl_HCUTrqReq =
    PubIfControlLONC_MDL_ConstB.Longctrl_HCUTrqReq;
  rty_LONC_Hybrid_CTRL_OUT->Longctrl_HCUTrqReqActive =
    PubIfControlLONC_MDL_ConstB.Longctrl_HCUTrqReqActive;

  /* UnitDelay: '<S2>/Output' */
  LongCtrl_Counter = PubIfControlLONC_MDL_DW.Output_DSTATE;

  /* Sum: '<S4>/FixPt Sum1' incorporates:
   *  Constant: '<S4>/FixPt Constant'
   */
  PubIfControlLONC_MDL_B.FixPtSum1 = (uint8_T)((uint32_T)LongCtrl_Counter +
    ((uint8_T)1U));

  /* Switch: '<S5>/FixPt Switch' */
  if (PubIfControlLONC_MDL_B.FixPtSum1 > ((uint8_T)15U)) {
    /* Switch: '<S5>/FixPt Switch' incorporates:
     *  Constant: '<S5>/Constant'
     */
    PubIfControlLONC_MDL_B.FixPtSwitch = ((uint8_T)0U);
  } else {
    /* Switch: '<S5>/FixPt Switch' */
    PubIfControlLONC_MDL_B.FixPtSwitch = PubIfControlLONC_MDL_B.FixPtSum1;
  }

  /* End of Switch: '<S5>/FixPt Switch' */
}

/* Update for referenced model: 'PubIfControlLONC_MDL' */
void PubIfControlLONC_MDL_Update(const VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL)
{
  /* Update for Atomic SubSystem: '<S3>/Vlc' */
  /* Update for UnitDelay: '<S6>/Unit Delay7' */
  PubIfControlLONC_MDL_DW.UnitDelay7_DSTATE = PubIfControlLONC_MDL_B.y_i;

  /* Update for UnitDelay: '<S6>/Unit Delay6' */
  PubIfControlLONC_MDL_DW.UnitDelay6_DSTATE = PubIfControlLONC_MDL_B.y_m;

  /* Update for S-Function (sfix_udelay): '<S16>/Tapped Delay2' */
  PubIfControlLONC_MDL_DW.TappedDelay2_X = rtu_VSM_LON_CTRL->ACCSts;

  /* Update for UnitDelay: '<S16>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE = PubIfControlLONC_MDL_B.CounterK1;

  /* Update for UnitDelay: '<S6>/Unit Delay2' */
  PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE =
    PubIfControlLONC_MDL_B.DataTypeConversion7;

  /* Update for S-Function (sfix_udelay): '<S6>/Tapped Delay2' */
  PubIfControlLONC_MDL_DW.TappedDelay2_X_b = LongCtrl_ECEnable;

  /* Update for S-Function (sfix_udelay): '<S6>/Tapped Delay3' */
  PubIfControlLONC_MDL_DW.TappedDelay3_X = LongCtrl_DCEnable;

  /* Update for S-Function (sfix_udelay): '<S6>/Tapped Delay4' */
  PubIfControlLONC_MDL_DW.TappedDelay4_X = Longctrl_ACC_DrvOFF_Req;

  /* Update for S-Function (sfix_udelay): '<S6>/Tapped Delay5' */
  PubIfControlLONC_MDL_DW.TappedDelay5_X = Longctrl_ACCSts;

  /* Update for UnitDelay: '<S6>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE = LongCtrl_VlcInternalAcc;

  /* Update for S-Function (sfix_udelay): '<S9>/Tapped Delay' */
  PubIfControlLONC_MDL_DW.TappedDelay_X = Longctrl_ACCSts;

  /* Update for UnitDelay: '<S10>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_k = LongCtrl_DCEnable;

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay4' */
  PubIfControlLONC_MDL_DW.TappedDelay4_X_h = LongCtrl_ECEnable;

  /* Update for S-Function (sfix_udelay): '<S10>/Tapped Delay1' */
  PubIfControlLONC_MDL_DW.TappedDelay1_X = Longctrl_ACC_DrvOFF_Req;

  /* Update for UnitDelay: '<S10>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_p = PubIfControlLONC_MDL_B.Counter;

  /* Update for UnitDelay: '<S10>/Unit Delay2' */
  PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE_c = PubIfControlLONC_MDL_B.Counter2;

  /* Update for UnitDelay: '<S14>/Unit Delay3' */
  PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE = LongCtrl_axvDiff;

  /* Update for UnitDelay: '<S14>/Unit Delay2' */
  PubIfControlLONC_MDL_DW.UnitDelay2_DSTATE_n = PubIfControlLONC_MDL_B.Add5;

  /* Update for UnitDelay: '<S14>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_k = PubIfControlLONC_MDL_B.I_l;

  /* Update for UnitDelay: '<S6>/Unit Delay5' */
  PubIfControlLONC_MDL_DW.UnitDelay5_DSTATE = LongCtrl_VlcInternalAcc;

  /* Update for UnitDelay: '<S12>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_f = PubIfControlLONC_MDL_B.Sum7_i;

  /* Update for UnitDelay: '<S14>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_g = PubIfControlLONC_MDL_B.axvFilt;

  /* Update for UnitDelay: '<S13>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_n = PubIfControlLONC_MDL_B.Sum7_b;

  /* Update for S-Function (sfix_udelay): '<S19>/Tapped Delay1' */
  PubIfControlLONC_MDL_DW.TappedDelay1_X_b[4] =
    PubIfControlLONC_MDL_DW.TappedDelay1_X_b[3];
  PubIfControlLONC_MDL_DW.TappedDelay1_X_b[3] =
    PubIfControlLONC_MDL_DW.TappedDelay1_X_b[2];
  PubIfControlLONC_MDL_DW.TappedDelay1_X_b[2] =
    PubIfControlLONC_MDL_DW.TappedDelay1_X_b[1];
  PubIfControlLONC_MDL_DW.TappedDelay1_X_b[1] =
    PubIfControlLONC_MDL_DW.TappedDelay1_X_b[0];
  PubIfControlLONC_MDL_DW.TappedDelay1_X_b[0] = Longctrl_NoBrakeForce;

  /* Update for UnitDelay: '<S53>/Delay Input1' */
  PubIfControlLONC_MDL_DW.DelayInput1_DSTATE = Longctrl_ShiftinProgress;

  /* Update for UnitDelay: '<S52>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_f = PubIfControlLONC_MDL_B.Timer;

  /* Update for UnitDelay: '<S52>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_c = PubIfControlLONC_MDL_B.StartTimer;

  /* Update for UnitDelay: '<S23>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_fb = PubIfControlLONC_MDL_B.Switch2_j;

  /* Update for UnitDelay: '<S22>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_m = LongCtrl_axvClosedLoopControl;

  /* Update for UnitDelay: '<S55>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_a = PubIfControlLONC_MDL_B.Sum14;

  /* Update for UnitDelay: '<S31>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_o = PubIfControlLONC_MDL_B.Sum7_g;

  /* Update for UnitDelay: '<S30>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_h = PubIfControlLONC_MDL_B.Add3_c;

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_n1 = LongCtrl_ACC_EngTrqReq;

  /* Update for UnitDelay: '<S10>/Unit Delay5' */
  PubIfControlLONC_MDL_DW.UnitDelay5_DSTATE_e = PubIfControlLONC_MDL_B.y;

  /* Update for UnitDelay: '<S28>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_l = PubIfControlLONC_MDL_B.Sum14_m;

  /* Update for UnitDelay: '<S10>/Unit Delay3' */
  PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE_m = LongCtrl_ACC_EngTrqReq;

  /* Update for UnitDelay: '<S10>/Unit Delay4' */
  PubIfControlLONC_MDL_DW.UnitDelay4_DSTATE_a = LongCtrl_ECEnable;

  /* Update for UnitDelay: '<S6>/Unit Delay4' */
  PubIfControlLONC_MDL_DW.UnitDelay4_DSTATE =
    PubIfControlLONC_MDL_B.UnitDelay3_h;

  /* Update for UnitDelay: '<S17>/Unit Delay1' */
  PubIfControlLONC_MDL_DW.UnitDelay1_DSTATE_j =
    PubIfControlLONC_MDL_B.Saturation;

  /* Update for UnitDelay: '<S17>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_nf = PubIfControlLONC_MDL_B.Sum1_h;

  /* Update for UnitDelay: '<S41>/Unit Delay' */
  PubIfControlLONC_MDL_DW.UnitDelay_DSTATE_o3 = PubIfControlLONC_MDL_B.Sum5;

  /* Update for UnitDelay: '<S6>/Unit Delay3' */
  PubIfControlLONC_MDL_DW.UnitDelay3_DSTATE_g = Longctrl_NetEngTrq;

  /* End of Update for SubSystem: '<S3>/Vlc' */

  /* Update for UnitDelay: '<S2>/Output' */
  PubIfControlLONC_MDL_DW.Output_DSTATE = PubIfControlLONC_MDL_B.FixPtSwitch;
}

/* Model initialize function */
void PubIfControlLONC_MDL_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_PubIfControlLONC_MDL_T *const PubIfControlLONC_MDL_M =
    &(PubIfControlLONC_MDL_MdlrefDW.rtm);

  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)PubIfControlLONC_MDL_M, 0,
                sizeof(RT_MODEL_PubIfControlLONC_MDL_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(PubIfControlLONC_MDL_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &PubIfControlLONC_MDL_B), 0,
                sizeof(B_PubIfControlLONC_MDL_c_T));

  /* exported global signals */
  LongCtrl_ICEActWheelTrq = 0.0;
  LongCtrl_VLCState = 0.0;
  LongCtrl_tECDC = 0.0;
  LongCtrl_vxvRefMs = 0.0F;
  LongCtrl_axvRoadSlopeMs2 = 0.0F;
  LongCtrl_accelHoldMin = 0.0F;
  LongCtrl_jerkHold = 0.0F;
  LongCtrl_accelSlidHold = 0.0F;
  LongCtrl_jerkSlidHold = 0.0F;
  LongCtrl_OverrideToDC = 0.0F;
  Longctrl_NetEngTrq = 0.0F;
  Longctrl_NetEngTorqNorm = 0.0F;
  Longctrl_EngSpd = 0.0F;
  LongCtrl_Tr_Ratio = 0.0F;
  LongCtrl_Fz = 0.0F;
  LongCtrl_ICEFzNm = 0.0F;
  Longctrl_VIE_axRefMs2 = 0.0F;
  Longctrl_ACC_axvCvAim = 0.0F;
  Longctrl_ACC_AccelerateJerk = 0.0F;
  Longctrl_ACC_DecelerateJerk = 0.0F;
  LongCtrl_axvDiff = 0.0F;
  LongCtrl_PI_NetEngTorqInc = 0.0F;
  LongCtrl_axvTracActMean = 0.0F;
  LongCtrl_axvModelDiff = 0.0F;
  Longctrl_VIE_AxRefDt = 0.0F;
  LongCtrl_axvModelResidual = 0.0F;
  LongCtrl_axvClosedLoopControl = 0.0F;
  LongCtrl_FF_NetEngTorqMax = 0.0F;
  LongCtrl_FF_NetEngTorqInc = 0.0F;
  LongCtrl_UpdateLowerValue = 0.0F;
  LongCtrl_UpdateUpperValue = 0.0F;
  LongCtrl_ACC_EngTrqReq = 0.0F;
  Longctrl_EngTqMinAct = 0.0F;
  Longctrl_ACC_axv_ComfortBandLowerValue = 0.0F;
  Longctrl_ACC_axv_ComfortBandUpperValue = 0.0F;
  LongCtrl_PI_NetEngTorq = 0.0F;
  LongCtrl_FF_NetEngTorq = 0.0F;
  LongCtrl_axvTracMin = 0.0F;
  LongCtrl_axvModelRef = 0.0F;
  Longctrl_VIE_alpSideSlipAngle = 0.0F;
  Longctrl_EngTqMaxActSpd = 0.0F;
  LongCtrl_tEC = 0.0F;
  LongCtrl_ACC_Decel_ReqValue = 0.0F;
  LongCtrl_Counter = 0U;
  Longctrl_ACCSts = 0U;
  LongCtrl_RRWheelDriveDirection = 0U;
  LongCtrl_RLWheelDriveDirection = 0U;
  LongCtrl_FRWheelDriveDirection = 0U;
  LongCtrl_FLWheelDriveDirection = 0U;
  Longctrl_CurrentGear = 0U;
  Longctrl_VehicleStandStill = false;
  LongCtrl_Sw2EC = false;
  LongCtrl_Sw2DC = false;
  LongCtrl_ForwardFlagVxv = false;
  LongCtrl_ForwardFlagTrq = false;
  LongCtrl_SlideFlag = false;
  LongCtrl_VLC_DriveOffConditonFulfilled = false;
  Longctrl_ACC_DrvOFF_Req = false;
  Longctrl_ShiftinProgress = false;
  Longctrl_NoBrakeForce = false;
  LongCtrl_UpdateEnable_axvModeldiff = false;
  Longctrl_ACC_BrakePrefer = false;
  Longctrl_ACC_DecelToStopReq = false;
  LongCtrl_Sw2DC6 = false;
  LongCtrl_Sw2DC1 = false;
  LongCtrl_Sw2DC3 = false;
  LongCtrl_Sw2DC5 = false;
  LongCtrl_Sw2DC7 = false;
  LongCtrl_Sw2DC2 = false;
  LongCtrl_Sw2DC4 = false;
  LongCtrl_Sw2EC1 = false;
  LongCtrl_Sw2EC3 = false;
  LongCtrl_Sw2EC2 = false;
  LongCtrl_Sw2EC5 = false;
  LongCtrl_Sw2EC4 = false;
  LongCtrl_ECEnable = false;
  LongCtrl_DCEnable = false;

  /* states (dwork) */
  (void) memset((void *)&PubIfControlLONC_MDL_DW, 0,
                sizeof(DW_PubIfControlLONC_MDL_f_T));
}
