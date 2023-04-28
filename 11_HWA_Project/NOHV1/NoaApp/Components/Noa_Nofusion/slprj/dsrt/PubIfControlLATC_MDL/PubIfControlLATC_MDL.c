/*
 * Code generation for system model 'PubIfControlLATC_MDL'
 *
 * Model                      : PubIfControlLATC_MDL
 * Model version              : 3.732
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:23 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "PubIfControlLATC_MDL.h"
#include "PubIfControlLATC_MDL_private.h"
#include "MPC_Solver_QPhild_CVFnlpm0.h"
#include "look1_iflf_binlcapw.h"
#include "look1_iflf_binlcpw.h"
#include "look2_iflf_binlcapw.h"
#include "look2_iu8dtf_binlcapw.h"
#include "mldivide_vBmGKDRi.h"
#include "mpower_1Vv6hBEw.h"
#include "rt_powf_snf.h"

/* Named constants for Chart: '<S38>/Chart' */
#define PubIfControlLATC_MDL_IN_IsOverRide ((uint8_T)1U)
#define PubIfControlLATC_MDL_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define PubIfControlLATC_MDL_IN_NoOverRide ((uint8_T)2U)

const VCAN_EPS_MSG_BUS PubIfControlLATC_MDL_rtZVCAN_EPS_MSG_BUS = {
  0U,                                  /* EPS_DSTCtrlSts */
  0U,                                  /* EPS_FailSts */
  false,                               /* EPS_TrqSnsrSts */
  0U,                                  /* EPS_SteerMod */
  0.0F,                                /* EPS_DrvInpTrqVal_HighReslolution */
  0.0F,                                /* EPS_LKATorqOvrlDlvd */
  0U,                                  /* EPS_LKATrqOvlDlvdSts */
  false,                               /* EPS_DrvInpTrqVal_HighResVld */
  false,                               /* EPS_LKATorqOvrlDlvdVld */
  false,                               /* EPS_SteerWheelAngSign */
  0.0F,                                /* EPS_SteerWheelAng */
  false,                               /* EPS_SteerWheelSpdSign */
  0.0F,                                /* EPS_SteerWheelSpd */
  0U,                                  /* EPS_AvailStsforHAD */
  false,                               /* EPS_SteerWheelAngVld */
  0U,                                  /* EPS_HADerror_Reason */
  0U,                                  /* EPS_HADHndShkRespSt */
  false,                               /* EPS_AngCmdOverRange */
  0U                                   /* EPS_LKAAngDlvdSts */
} ;                                    /* VCAN_EPS_MSG_BUS ground */

const VCAN_CSA_MSG_BUS PubIfControlLATC_MDL_rtZVCAN_CSA_MSG_BUS = {
  0U,                                  /* FrntWiprSwtSts */
  0U,                                  /* FrntWshrSwtSts */
  false,                               /* LTurnLmpSwtSts */
  false,                               /* RTurnLmpSwtSts */
  false,                               /* FrntFogLmpSwtSts */
  false,                               /* LowBeamSwtSts */
  false,                               /* HiBeamSwtSts */
  false,                               /* AutoLmpSwtSts */
  false,                               /* SteerWheelAngSign */
  0.0F,                                /* SteerWheelAng */
  false,                               /* SteerWheelSpdSign */
  0.0F,                                /* SteerWheelSpd */
  false,                               /* ACC_TimeGap_DecSetSwt */
  false,                               /* ACC_TimeGap_IncSetSwt */
  false,                               /* CC_ACC_CANCEL_OFFSwt */
  false,                               /* CC_ACC_CRUISE_OFFSwt */
  false,                               /* CC_ACCSwtErr */
  false,                               /* CC_ACC_DecSetSpd_SetSwt */
  false,                               /* CC_ACC_IncSetSpd_ResuSwt */
  0U,                                  /* SAS_Sts */
  0U,                                  /* Rollingcounter_CSA2 */
  false                                /* HWA_OK_OFFSwt */
} ;                                    /* VCAN_CSA_MSG_BUS ground */

/* Exported block signals */
real_T LCS_LATC_HoldTime_s;            /* '<S51>/Product' */
real_T LCS_PLAN_Trajectory_NumTraj;    /* '<S62>/CartesianTrajectory' */
uint32_T LCS_SubModel_Number;          /* '<S2>/SW_Branch' */
uint32_T LCS_SubModel_VERSION;         /* '<S2>/SW_VERSION' */
real32_T LCS_IN_EPS_DrvInpTrqVal;      /* '<S4>/Data Type Conversion5' */
real32_T LCS_IN_SteerWheelSpd;         /* '<S4>/Data Type Conversion48' */
real32_T LCS_ESS_SteerWheelAngleSpd;   /* '<S16>/Abs1' */
real32_T LCS_ESS_SteerWheelAngleSpdFilter;/* '<S30>/Sum5' */
real32_T LCS_ESS_TarAngleSpd;          /* '<S16>/Abs' */
real32_T LCS_ESS_TarAngleSpdFilter;    /* '<S29>/Sum5' */
real32_T LCS_IN_vxvRefMs;              /* '<S4>/Signal Copy' */
real32_T LCS_IN_SteerWheelSpdSign;     /* '<S4>/Data Type Conversion3' */
real32_T LCS_IN_SteerWheelAngleSign;   /* '<S4>/Data Type Conversion4' */
real32_T LCS_IN_SteerWheelAng;         /* '<S4>/Data Type Conversion49' */
real32_T LCS_IN_CurrentLaneWidth;      /* '<S4>/Data Type Conversion50' */
real32_T LCS_IN_EPS_LKATorqOvrlDlvd;   /* '<S4>/Data Type Conversion6' */
real32_T LCS_IN_EPS_LKATorqOvrlDlvdVld;/* '<S4>/Data Type Conversion7' */
real32_T LCS_IN_CurSteerAngle_deg;     /* '<S39>/Product5' */
real32_T LCS_IN_SteerAngOffset_deg;    /* '<S4>/Switch1' */
real32_T LCS_LATC_CorrectSteerAngle_deg;/* '<S42>/Add' */
real32_T LCS_IN_Spd_Kph;               /* '<S41>/Sum' */
real32_T LCS_LATC_MaxAy_ms2;           /* '<S51>/Multiport Switch2' */
real32_T LCS_LATC_StateActAngleSlope_degs;/* '<S51>/Merge' */
real32_T LCS_LATC_StateAngleSlope_degs;/* '<S51>/Multiport Switch1' */
real32_T LCS_IN_psiDtOpt;              /* '<S4>/Signal Copy5' */
real32_T LCS_IN_desLaneA2;             /* '<S4>/Signal Conversion13' */
real32_T LCS_LATC_TarAngleFilter_deg;  /* '<S50>/Divide1' */
real32_T LCS_LATC_OutTrgSteerAngle;    /* '<S42>/Signal Copy' */
real32_T LCS_IN_kapTraj;               /* '<S4>/Signal Copy3' */
real32_T LCS_IN_axvRefMs2;             /* '<S4>/Signal Copy1' */
real32_T LCS_IN_desLaneA3;             /* '<S4>/Signal Conversion12' */
real32_T LCS_IN_desLaneA1;             /* '<S4>/Signal Conversion14' */
real32_T LCS_IN_desLaneA0;             /* '<S4>/Signal Copy7' */
real32_T LCS_PreDisCurve_m;            /* '<S65>/Sum5' */
real32_T LCS_Plan_AyDtlimit;           /* '<S64>/Multiport Switch3' */
real32_T LCS_Plan_FinalpreDis;         /* '<S64>/Product11' */
real32_T LCS_CurSteerAngle_deg;        /* '<S39>/Add1' */
real32_T LCS_IN_SteerAngleSpd_degs;    /* '<S39>/Product4' */
real32_T LCS_EqA0;                     /* '<S40>/Divide' */
real32_T LCS_IN_ayvRefMs2;             /* '<S4>/Signal Copy2' */
real32_T LCS_IN_alpSideSlipAngle;      /* '<S4>/Signal Copy4' */
real32_T LCS_PLAN_TrajectoryX[11];     /* '<S62>/CartesianTrajectory' */
real32_T LCS_PLAN_Trajectory_PlanY[11];/* '<S62>/CartesianTrajectory' */
real32_T LCS_LATC_PlanT;               /* '<S62>/CartesianTrajectory' */
real32_T LCS_LATC_PlanLength;          /* '<S62>/CartesianTrajectory' */
real32_T LCS_LATC_PlanAyDt[11];        /* '<S62>/CartesianTrajectory' */
real32_T LCS_LATC_CurrentSteerAngleOffset_deg;/* '<S59>/Sum7' */
real32_T LCS_LATC_SteerAngleCmd_deg;   /* '<S42>/TarSteerAngleCalc' */
real32_T LCS_LATC_Feedforward_deg;     /* '<S42>/TarSteerAngleCalc' */
real32_T LCS_LATC_Feedback_deg;        /* '<S42>/TarSteerAngleCalc' */
real32_T LCS_LATC_SteerAngleLimit_deg; /* '<S42>/TarSteerAngleCalc' */
real32_T LCS_LATC_MatrixResult_deg[6]; /* '<S42>/TarSteerAngleCalc' */
real32_T LCS_LATC_TarAngle_deg;        /* '<S42>/TarSteerAngleCalc' */
real32_T LCS_LATC_MPCDeltaT_s;         /* '<S42>/MATLAB Function' */
uint8_T LCS_Trq_Switch;                /* '<S2>/Constant8' */
uint8_T LCS_IN_EPS_FailSts;            /* '<S4>/Signal Conversion11' */
uint8_T LCS_IN_EPS_LKATrqOvlDlvdSts;   /* '<S4>/Signal Conversion10' */
uint8_T LCS_IN_TarDangerlLevel_Delay2Frame;/* '<S17>/Delay' */
uint8_T LCS_IN_TarDangerlLevel;        /* '<S17>/Signal Copy6' */
uint8_T LCS_OUT_AngCmdReqValVld;       /* '<S4>/Switch2' */
uint8_T LCS_Counter;                   /* '<S3>/Output' */
uint8_T LCS_IN_EPS_LKAAngDlvdSts;      /* '<S4>/Signal Conversion9' */
uint8_T LCS_LATC_AngleSlopeFlg_st;     /* '<S51>/MATLAB Function3' */
uint8_T LCS_EPSFault;                  /* '<S15>/MATLAB Function1' */
boolean_T LCS_ESS_NotActiveFlg1;       /* '<S27>/Compare' */
boolean_T LCS_ESS_NotActiveFlg2;       /* '<S25>/Compare' */
boolean_T LCS_ESS_NotActiveFlg3;       /* '<S28>/Compare' */
boolean_T LCS_ESS_NotActiveFlgOriginal;/* '<S16>/AND' */
boolean_T LCS_ESS_NotActiveFlg;        /* '<S16>/Switch2' */
boolean_T LCS_IN_desLaneValid;         /* '<S17>/Signal Copy4' */
boolean_T LCS_OffSetUpdate_Flg;        /* '<S53>/Logical Operator' */
boolean_T LCS_OverRideDetect_b;        /* '<S38>/Chart' */
boolean_T LCS_ESS_NotActiveDelayFlg;   /* '<S31>/MATLAB Function' */
MdlrefDW_PubIfControlLATC_MDL_T PubIfControlLATC_MDL_MdlrefDW;

/* Block signals (default storage) */
B_PubIfControlLATC_MDL_c_T PubIfControlLATC_MDL_B;

/* Block states (default storage) */
DW_PubIfControlLATC_MDL_f_T PubIfControlLATC_MDL_DW;

/* Forward declaration for local functions */
static void PubIfControlLATC_MDL_cat(real32_T varargin_2, real32_T y[3]);

/*
 * Output and update for action system:
 *    '<S51>/Switch Case Action Subsystem1'
 *    '<S68>/Switch Case Action Subsystem1'
 */
void PubIfControlLATC_MDL_SwitchCaseActionSubsystem1(real32_T *rty_Out1)
{
  /* SignalConversion generated from: '<S56>/Out1' incorporates:
   *  Constant: '<S56>/Constant'
   */
  *rty_Out1 = 100.0F;
}

/* Function for MATLAB Function: '<S42>/TarSteerAngleCalc' */
static void PubIfControlLATC_MDL_cat(real32_T varargin_2, real32_T y[3])
{
  y[0] = 0.0F;
  y[1] = 0.0F;
  y[2] = varargin_2;
}

/* System initialize for referenced model: 'PubIfControlLATC_MDL' */
void PubIfControlLATC_MDL_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S32>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S33>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_j = 0.0;

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay1' */
  PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S34>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_n = 0.0;

  /* InitializeConditions for Memory: '<S30>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_k = 0.0F;

  /* InitializeConditions for Memory: '<S29>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_m = 0.0F;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_m = false;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay3' */
  PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay2' */
  PubIfControlLATC_MDL_DW.UnitDelay2_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for Memory: '<S43>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_j = 0.0F;

  /* InitializeConditions for Memory: '<S48>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_h = 0.0F;

  /* InitializeConditions for Memory: '<S44>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_k = 0.0F;

  /* InitializeConditions for Memory: '<S46>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_e = 0.0F;

  /* InitializeConditions for Delay: '<S17>/Delay' */
  PubIfControlLATC_MDL_DW.Delay_DSTATE[0] = ((uint8_T)0U);
  PubIfControlLATC_MDL_DW.Delay_DSTATE[1] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay5' */
  PubIfControlLATC_MDL_DW.UnitDelay5_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay3' */
  PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE_k = ((uint16_T)0U);

  /* InitializeConditions for Memory: '<S53>/Memory52' */
  PubIfControlLATC_MDL_DW.Memory52_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S60>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_c = 0.0F;

  /* InitializeConditions for UnitDelay: '<S42>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_i = 0.0F;

  /* InitializeConditions for UnitDelay: '<S42>/Unit Delay1' */
  PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE_b = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S50>/Tapped Delay1' */
  PubIfControlLATC_MDL_DW.TappedDelay1_X[0] = 0.0F;
  PubIfControlLATC_MDL_DW.TappedDelay1_X[1] = 0.0F;
  PubIfControlLATC_MDL_DW.TappedDelay1_X[2] = 0.0F;
  PubIfControlLATC_MDL_DW.TappedDelay1_X[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay1' */
  PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE_k = false;

  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay2' */
  PubIfControlLATC_MDL_DW.UnitDelay2_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_o = ((uint8_T)1U);

  /* InitializeConditions for Memory: '<S45>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_g = 0.0F;

  /* InitializeConditions for Memory: '<S47>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_a = 0.0F;

  /* InitializeConditions for Memory: '<S65>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_f = 0.0F;

  /* InitializeConditions for UnitDelay: '<S64>/Unit Delay5' */
  PubIfControlLATC_MDL_DW.UnitDelay5_DSTATE_p = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S64>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_c = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S64>/Unit Delay3' */
  PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE_e = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S82>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_o = 0.0;

  /* InitializeConditions for Memory: '<S80>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_p = 0.0F;

  /* InitializeConditions for UnitDelay: '<S81>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_m = 0.0;

  /* InitializeConditions for UnitDelay: '<S3>/Output' */
  PubIfControlLATC_MDL_DW.Output_DSTATE = ((uint8_T)0U);

  /* SystemInitialize for Enabled SubSystem: '<S53>/Enabled Subsystem' */
  /* InitializeConditions for UnitDelay: '<S59>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_m1 = 0.0F;

  /* SystemInitialize for Sum: '<S59>/Sum7' incorporates:
   *  Outport: '<S59>/SteerAngleOffset_deg'
   */
  LCS_LATC_CurrentSteerAngleOffset_deg = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S53>/Enabled Subsystem' */

  /* SystemInitialize for Chart: '<S38>/Chart' */
  PubIfControlLATC_MDL_DW.is_active_c4_PubIfControlLATC_MDL = 0U;
  PubIfControlLATC_MDL_DW.is_c4_PubIfControlLATC_MDL =
    PubIfControlLATC_MDL_IN_NO_ACTIVE_CHILD;
}

/* System reset for referenced model: 'PubIfControlLATC_MDL' */
void PubIfControlLATC_MDL_Reset(void)
{
  /* InitializeConditions for UnitDelay: '<S32>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S33>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_j = 0.0;

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay1' */
  PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S34>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_n = 0.0;

  /* InitializeConditions for Memory: '<S30>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_k = 0.0F;

  /* InitializeConditions for Memory: '<S29>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_m = 0.0F;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_m = false;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay3' */
  PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay2' */
  PubIfControlLATC_MDL_DW.UnitDelay2_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for Memory: '<S43>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_j = 0.0F;

  /* InitializeConditions for Memory: '<S48>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_h = 0.0F;

  /* InitializeConditions for Memory: '<S44>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_k = 0.0F;

  /* InitializeConditions for Memory: '<S46>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_e = 0.0F;

  /* InitializeConditions for Delay: '<S17>/Delay' */
  PubIfControlLATC_MDL_DW.Delay_DSTATE[0] = ((uint8_T)0U);
  PubIfControlLATC_MDL_DW.Delay_DSTATE[1] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay5' */
  PubIfControlLATC_MDL_DW.UnitDelay5_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay3' */
  PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE_k = ((uint16_T)0U);

  /* InitializeConditions for Memory: '<S53>/Memory52' */
  PubIfControlLATC_MDL_DW.Memory52_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S60>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_c = 0.0F;

  /* InitializeConditions for UnitDelay: '<S42>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_i = 0.0F;

  /* InitializeConditions for UnitDelay: '<S42>/Unit Delay1' */
  PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE_b = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S50>/Tapped Delay1' */
  PubIfControlLATC_MDL_DW.TappedDelay1_X[0] = 0.0F;
  PubIfControlLATC_MDL_DW.TappedDelay1_X[1] = 0.0F;
  PubIfControlLATC_MDL_DW.TappedDelay1_X[2] = 0.0F;
  PubIfControlLATC_MDL_DW.TappedDelay1_X[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay1' */
  PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE_k = false;

  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay2' */
  PubIfControlLATC_MDL_DW.UnitDelay2_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_o = ((uint8_T)1U);

  /* InitializeConditions for Memory: '<S45>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_g = 0.0F;

  /* InitializeConditions for Memory: '<S47>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_a = 0.0F;

  /* InitializeConditions for Memory: '<S65>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_f = 0.0F;

  /* InitializeConditions for UnitDelay: '<S64>/Unit Delay5' */
  PubIfControlLATC_MDL_DW.UnitDelay5_DSTATE_p = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S64>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_c = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S64>/Unit Delay3' */
  PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE_e = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S82>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_o = 0.0;

  /* InitializeConditions for Memory: '<S80>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_p = 0.0F;

  /* InitializeConditions for UnitDelay: '<S81>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_m = 0.0;

  /* InitializeConditions for UnitDelay: '<S3>/Output' */
  PubIfControlLATC_MDL_DW.Output_DSTATE = ((uint8_T)0U);

  /* SystemReset for Chart: '<S38>/Chart' */
  PubIfControlLATC_MDL_DW.is_active_c4_PubIfControlLATC_MDL = 0U;
  PubIfControlLATC_MDL_DW.is_c4_PubIfControlLATC_MDL =
    PubIfControlLATC_MDL_IN_NO_ACTIVE_CHILD;
}

/* Start for referenced model: 'PubIfControlLATC_MDL' */
void PubIfControlLATC_MDL_Start(void)
{
  /* ConstCode for SignalConversion: '<S4>/Signal Conversion9' incorporates:
   *  Constant: '<S4>/Constant6'
   */
  LCS_IN_EPS_LKAAngDlvdSts = ((uint8_T)0U);

  /* ConstCode for Constant: '<S2>/SW_Branch' */
  LCS_SubModel_Number = 303U;

  /* ConstCode for Constant: '<S2>/SW_VERSION' */
  LCS_SubModel_VERSION = 38300517U;

  /* ConstCode for Constant: '<Root>/Constant' */
  PubIfControlLATC_MDL_B.LATC_SW_VERSION = 3826051620U;
}

/* Outputs for referenced model: 'PubIfControlLATC_MDL' */
void PubIfControlLATC_MDL(const VSM_LAT_CTRL_BUS *rtu_VSM_LAT_CTRL, const
  real32_T *rtu_vxvRefMs, const real32_T *rtu_axvRefMs2, const real32_T
  *rtu_ayvRefMs2, const real32_T *rtu_kapTraj, const real32_T
  *rtu_alpSideSlipAngle, const real32_T *rtu_psiDtOpt, const real32_T
  *rtu_SteerAngOffset_deg, const LATC_VCAN_EPS_BUS *rtu_LATC_VCAN_EPS, const
  LATC_VCAN_CSA_BUS *rtu_LATC_VCAN_CSA, const RFM_ROAD_BUS *rtu_RFM_ROAD,
  real32_T *rty_IFCTrqOvlCmdReqValue, uint8_T *rty_IFCFuncTrqCmdReqFlag, uint8_T
  *rty_LATC_IFCFuncAngCmdReqFlag, real32_T *rty_LATC_IFCAngCmdReqValue)
{
  static const real_T s[132] = { 1.0, 1.0, 1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, -0.0, -1.0, -1.0, -1.0, -1.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 1.0, 1.0, 1.0, -0.0, -0.0,
    -1.0, -1.0, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    -0.0, 0.0, 0.0, 0.0, 1.0, 1.0, -0.0, -0.0, -0.0, -1.0, -1.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0 };

  static const real32_T b[21] = { 1.4F, 1.6F, 2.1F, 2.3F, 2.5F, 2.7F, 3.0F, 3.3F,
    3.6F, 4.0F, 4.4F, 4.8F, 5.3F, 5.8F, 6.4F, 7.1F, 7.8F, 8.6F, 9.5F, 10.4F,
    11.4F };

  static const int8_T b_a_0[6] = { 1, 0, 0, 1, 0, 0 };

  static const int8_T c[6] = { 0, 0, 0, 0, 0, 1 };

  static const int8_T d[6] = { 0, 0, 0, 0, 1, 0 };

  static const int8_T e[6] = { 0, 0, 0, 2, 0, 0 };

  static const int8_T t_0[6] = { 0, 0, 0, 0, 0, 10 };

  real_T matrix_Q[400];
  real_T THETA[100];
  real_T THETA_0[100];
  real_T PHI[60];
  real_T matrix_Q_temp[40];
  real_T matrix_R[25];
  real_T THETA_temp[10];
  real_T f[6];
  real_T matrix_R_temp[5];
  real_T b_a[2];
  real_T minV;
  int32_T i;
  int32_T i_0;
  int32_T idx;
  int32_T kidx;
  int32_T sigIdx;
  real32_T H[36];
  real32_T H_0[36];
  real32_T THETA_1[25];
  real32_T b_Umax_0[22];
  real32_T Px[21];
  real32_T Py[21];
  real32_T TarEgoV[21];
  real32_T PHI_0[20];
  real32_T tmp[20];
  real32_T c_z1[11];
  real32_T A[9];
  real32_T b_b[9];
  real32_T A_0[6];
  real32_T B[6];
  real32_T Umin[5];
  real32_T Ut[5];
  real32_T b_Umax[5];
  real32_T delta_Umax[5];
  real32_T delta_Umin[5];
  real32_T matrix_q[4];
  real32_T b_B[3];
  real32_T kesi[3];
  real32_T Arcf;
  real32_T Min_PlanDis;
  real32_T PsiDtAckRaw;
  real32_T b2;
  real32_T b3;
  real32_T delaytime;
  real32_T delta_umax;
  real32_T delta_umin;
  real32_T kP;
  real32_T ref_delta;
  real32_T steer_angleK1;
  real32_T steer_cmd;
  real32_T steer_feedbackward_temp;
  real32_T steer_limit;
  real32_T steer_transmission_ratio;
  real32_T t;
  real32_T tmp_0;
  real32_T u1;
  real32_T umax;
  real32_T umin;
  uint32_T qY;
  uint16_T u0;
  uint16_T u1_0;
  uint8_T count;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T preLineValid;

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  PubIfControlLATC_MDL_B.BusAssignment =
    PubIfControlLATC_MDL_rtZVCAN_EPS_MSG_BUS;

  /* BusAssignment: '<Root>/Bus Assignment' */
  PubIfControlLATC_MDL_B.BusAssignment.EPS_DrvInpTrqVal_HighReslolution =
    rtu_LATC_VCAN_EPS->EPS_DrvInpTrqVal_HighReslolution;
  PubIfControlLATC_MDL_B.BusAssignment.EPS_LKATorqOvrlDlvd =
    rtu_LATC_VCAN_EPS->EPS_LKATorqOvrlDlvd;
  PubIfControlLATC_MDL_B.BusAssignment.EPS_LKATorqOvrlDlvdVld =
    rtu_LATC_VCAN_EPS->EPS_LKATorqOvrlDlvdVld;
  PubIfControlLATC_MDL_B.BusAssignment.EPS_LKAAngDlvdSts =
    rtu_LATC_VCAN_EPS->EPS_LKAAngDlvdSts;
  PubIfControlLATC_MDL_B.BusAssignment.EPS_LKATrqOvlDlvdSts =
    rtu_LATC_VCAN_EPS->EPS_LKATrqOvlDlvdSts;
  PubIfControlLATC_MDL_B.BusAssignment.EPS_FailSts =
    rtu_LATC_VCAN_EPS->EPS_FailSts;

  /* BusAssignment: '<Root>/Bus Assignment1' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  PubIfControlLATC_MDL_B.BusAssignment1 =
    PubIfControlLATC_MDL_rtZVCAN_CSA_MSG_BUS;

  /* BusAssignment: '<Root>/Bus Assignment1' */
  PubIfControlLATC_MDL_B.BusAssignment1.SteerWheelSpd =
    rtu_LATC_VCAN_CSA->SteerWheelSpd;
  PubIfControlLATC_MDL_B.BusAssignment1.SteerWheelAng =
    rtu_LATC_VCAN_CSA->SteerWheelAng;
  PubIfControlLATC_MDL_B.BusAssignment1.SteerWheelSpdSign =
    rtu_LATC_VCAN_CSA->SteerWheelSpdSign;
  PubIfControlLATC_MDL_B.BusAssignment1.SteerWheelAngSign =
    rtu_LATC_VCAN_CSA->SteerWheelAngSign;

  /* Constant: '<S2>/Constant8' */
  LCS_Trq_Switch = P_LCS_Trq_Switch;

  /* UnitDelay: '<S32>/Unit Delay' */
  PubIfControlLATC_MDL_B.UnitDelay = PubIfControlLATC_MDL_DW.UnitDelay_DSTATE;

  /* Sum: '<S32>/Add' incorporates:
   *  Constant: '<S32>/Constant'
   */
  PubIfControlLATC_MDL_B.Add = PubIfControlLATC_MDL_B.UnitDelay + 0.02;

  /* SignalConversion: '<S4>/Signal Conversion1' */
  PubIfControlLATC_MDL_B.SignalConversion1 =
    PubIfControlLATC_MDL_B.BusAssignment.EPS_DrvInpTrqVal_HighReslolution;

  /* DataTypeConversion: '<S4>/Data Type Conversion5' */
  LCS_IN_EPS_DrvInpTrqVal = PubIfControlLATC_MDL_B.SignalConversion1;

  /* Abs: '<S16>/Abs2' */
  PubIfControlLATC_MDL_B.Abs2 = fabsf(LCS_IN_EPS_DrvInpTrqVal);

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare = (PubIfControlLATC_MDL_B.Abs2 >
    P_LCS_ESSOverrideValue2);

  /* Switch: '<S32>/Switch' */
  if (PubIfControlLATC_MDL_B.Compare) {
    /* Switch: '<S32>/Switch' */
    PubIfControlLATC_MDL_B.Switch = PubIfControlLATC_MDL_B.Add;
  } else {
    /* Switch: '<S32>/Switch' incorporates:
     *  Constant: '<S32>/Constant1'
     */
    PubIfControlLATC_MDL_B.Switch = 0.0;
  }

  /* End of Switch: '<S32>/Switch' */

  /* MinMax: '<S32>/Max' incorporates:
   *  Constant: '<S32>/Constant2'
   */
  minV = fmin(PubIfControlLATC_MDL_B.Switch, 10.0);

  /* MinMax: '<S32>/Max' */
  PubIfControlLATC_MDL_B.Max = minV;

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
   */
  LCS_ESS_NotActiveFlg1 = (PubIfControlLATC_MDL_B.Max > P_LCS_ESSOverrideTime2);

  /* UnitDelay: '<S33>/Unit Delay' */
  PubIfControlLATC_MDL_B.UnitDelay_l =
    PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_j;

  /* Sum: '<S33>/Add' incorporates:
   *  Constant: '<S33>/Constant'
   */
  PubIfControlLATC_MDL_B.Add_e = PubIfControlLATC_MDL_B.UnitDelay_l + 0.02;

  /* Abs: '<S16>/Abs9' */
  PubIfControlLATC_MDL_B.Abs9 = fabsf(LCS_IN_EPS_DrvInpTrqVal);

  /* RelationalOperator: '<S24>/Compare' incorporates:
   *  Constant: '<S24>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_m = (PubIfControlLATC_MDL_B.Abs9 >
    P_LCS_ESSOverrideValue1);

  /* UnitDelay: '<S16>/Unit Delay1' */
  PubIfControlLATC_MDL_B.UnitDelay1 = PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE;

  /* Product: '<S16>/Product1' */
  PubIfControlLATC_MDL_B.Product1_g = LCS_IN_EPS_DrvInpTrqVal *
    PubIfControlLATC_MDL_B.UnitDelay1;

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S23>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_c = (PubIfControlLATC_MDL_B.Product1_g < 0.0F);

  /* Logic: '<S16>/Logical Operator80' */
  PubIfControlLATC_MDL_B.LogicalOperator80 = (PubIfControlLATC_MDL_B.Compare_m &&
    PubIfControlLATC_MDL_B.Compare_c);

  /* Switch: '<S33>/Switch' */
  if (PubIfControlLATC_MDL_B.LogicalOperator80) {
    /* Switch: '<S33>/Switch' */
    PubIfControlLATC_MDL_B.Switch_d = PubIfControlLATC_MDL_B.Add_e;
  } else {
    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S33>/Constant1'
     */
    PubIfControlLATC_MDL_B.Switch_d = 0.0;
  }

  /* End of Switch: '<S33>/Switch' */

  /* MinMax: '<S33>/Max' incorporates:
   *  Constant: '<S33>/Constant2'
   */
  minV = fmin(PubIfControlLATC_MDL_B.Switch_d, 10.0);

  /* MinMax: '<S33>/Max' */
  PubIfControlLATC_MDL_B.Max_i = minV;

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   */
  LCS_ESS_NotActiveFlg2 = (PubIfControlLATC_MDL_B.Max_i > P_LCS_ESSOverrideTime1);

  /* UnitDelay: '<S34>/Unit Delay' */
  PubIfControlLATC_MDL_B.UnitDelay_h =
    PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_n;

  /* Sum: '<S34>/Add' incorporates:
   *  Constant: '<S34>/Constant'
   */
  PubIfControlLATC_MDL_B.Add_c = PubIfControlLATC_MDL_B.UnitDelay_h + 0.02;

  /* Product: '<S30>/Product4' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Constant: '<S30>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4 = 0.02F / P_LCS_ESS_SteerAngleFilterTime;

  /* SignalConversion: '<S4>/Signal Conversion4' */
  PubIfControlLATC_MDL_B.SignalConversion4 =
    PubIfControlLATC_MDL_B.BusAssignment1.SteerWheelSpd;

  /* DataTypeConversion: '<S4>/Data Type Conversion48' */
  LCS_IN_SteerWheelSpd = PubIfControlLATC_MDL_B.SignalConversion4;

  /* Abs: '<S16>/Abs1' */
  LCS_ESS_SteerWheelAngleSpd = fabsf(LCS_IN_SteerWheelSpd);

  /* Memory: '<S30>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2 = PubIfControlLATC_MDL_DW.Memory2_PreviousInput;

  /* Sum: '<S30>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4 = LCS_ESS_SteerWheelAngleSpd -
    PubIfControlLATC_MDL_B.Memory2;

  /* Product: '<S30>/Product1' */
  PubIfControlLATC_MDL_B.Product1_p = PubIfControlLATC_MDL_B.Product4 *
    PubIfControlLATC_MDL_B.Sum4;

  /* Sum: '<S30>/Sum5' */
  LCS_ESS_SteerWheelAngleSpdFilter = PubIfControlLATC_MDL_B.Product1_p +
    PubIfControlLATC_MDL_B.Memory2;

  /* Product: '<S29>/Product4' incorporates:
   *  Constant: '<S16>/Constant4'
   *  Constant: '<S29>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4_n = 0.02F / P_LCS_ESS_TarAngleFilterTime;

  /* UnitDelay: '<S16>/Unit Delay' */
  PubIfControlLATC_MDL_B.UnitDelay_n =
    PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_k;

  /* Sum: '<S16>/Add3' */
  PubIfControlLATC_MDL_B.Add3_n = PubIfControlLATC_MDL_B.UnitDelay1 -
    PubIfControlLATC_MDL_B.UnitDelay_n;

  /* Gain: '<S16>/Gain1' */
  PubIfControlLATC_MDL_B.Gain1_g = 50.0F * PubIfControlLATC_MDL_B.Add3_n;

  /* Abs: '<S16>/Abs' */
  LCS_ESS_TarAngleSpd = fabsf(PubIfControlLATC_MDL_B.Gain1_g);

  /* Memory: '<S29>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2_a =
    PubIfControlLATC_MDL_DW.Memory2_PreviousInput_m;

  /* Sum: '<S29>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4_a = LCS_ESS_TarAngleSpd -
    PubIfControlLATC_MDL_B.Memory2_a;

  /* Product: '<S29>/Product1' */
  PubIfControlLATC_MDL_B.Product1_i = PubIfControlLATC_MDL_B.Product4_n *
    PubIfControlLATC_MDL_B.Sum4_a;

  /* Sum: '<S29>/Sum5' */
  LCS_ESS_TarAngleSpdFilter = PubIfControlLATC_MDL_B.Product1_i +
    PubIfControlLATC_MDL_B.Memory2_a;

  /* Sum: '<S16>/Add1' */
  PubIfControlLATC_MDL_B.Add1 = LCS_ESS_SteerWheelAngleSpdFilter -
    LCS_ESS_TarAngleSpdFilter;

  /* SignalConversion: '<S4>/Signal Copy' */
  LCS_IN_vxvRefMs = *rtu_vxvRefMs;

  /* Gain: '<S16>/Gain3' */
  PubIfControlLATC_MDL_B.Gain3 = 3.6F * LCS_IN_vxvRefMs;

  /* Gain: '<S16>/Gain4' */
  PubIfControlLATC_MDL_B.Gain4 = 1.03F * PubIfControlLATC_MDL_B.Gain3;

  /* Sum: '<S16>/Sum' incorporates:
   *  Constant: '<S16>/Constant8'
   */
  PubIfControlLATC_MDL_B.Sum = PubIfControlLATC_MDL_B.Gain4 + 1.3F;

  /* Lookup_n-D: '<S16>/ESS_SteerAngleErr' incorporates:
   *  Sum: '<S16>/Sum'
   */
  PubIfControlLATC_MDL_B.ESS_SteerAngleErr = look1_iflf_binlcpw
    (PubIfControlLATC_MDL_B.Sum, P_LCS_LATC_VehicleSpd_TabX_Kph,
     P_LCS_ESS_SteerAngleErr, 11U);

  /* RelationalOperator: '<S16>/Relational Operator' */
  PubIfControlLATC_MDL_B.RelationalOperator = (PubIfControlLATC_MDL_B.Add1 >
    PubIfControlLATC_MDL_B.ESS_SteerAngleErr);

  /* Switch: '<S34>/Switch' */
  if (PubIfControlLATC_MDL_B.RelationalOperator) {
    /* Switch: '<S34>/Switch' */
    PubIfControlLATC_MDL_B.Switch_a = PubIfControlLATC_MDL_B.Add_c;
  } else {
    /* Switch: '<S34>/Switch' incorporates:
     *  Constant: '<S34>/Constant1'
     */
    PubIfControlLATC_MDL_B.Switch_a = 0.0;
  }

  /* End of Switch: '<S34>/Switch' */

  /* MinMax: '<S34>/Max' incorporates:
   *  Constant: '<S34>/Constant2'
   */
  minV = fmin(PubIfControlLATC_MDL_B.Switch_a, 10.0);

  /* MinMax: '<S34>/Max' */
  PubIfControlLATC_MDL_B.Max_e = minV;

  /* RelationalOperator: '<S28>/Compare' incorporates:
   *  Constant: '<S28>/Constant'
   */
  LCS_ESS_NotActiveFlg3 = (PubIfControlLATC_MDL_B.Max_e > P_LCS_ESSOverrideTime3);

  /* Logic: '<S16>/AND1' */
  PubIfControlLATC_MDL_B.AND1 = (LCS_ESS_NotActiveFlg1 || LCS_ESS_NotActiveFlg2 ||
    LCS_ESS_NotActiveFlg3);

  /* RelationalOperator: '<S21>/Compare' incorporates:
   *  Constant: '<S21>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_h = (rtu_VSM_LAT_CTRL->TarDangerLevel ==
    ((uint8_T)6U));

  /* RelationalOperator: '<S22>/Compare' incorporates:
   *  Constant: '<S16>/Constant3'
   *  Constant: '<S22>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_f = (P_LCS_ESS_LogicTest_Enable == true);

  /* Logic: '<S16>/AND' */
  LCS_ESS_NotActiveFlgOriginal = (PubIfControlLATC_MDL_B.AND1 &&
    PubIfControlLATC_MDL_B.Compare_h && PubIfControlLATC_MDL_B.Compare_f);

  /* UnitDelay: '<S31>/Unit Delay4' */
  PubIfControlLATC_MDL_B.UnitDelay4_f =
    PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_m;

  /* UnitDelay: '<S31>/Unit Delay3' */
  PubIfControlLATC_MDL_B.UnitDelay3 = PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE;

  /* UnitDelay: '<S31>/Unit Delay2' */
  PubIfControlLATC_MDL_B.UnitDelay2 = PubIfControlLATC_MDL_DW.UnitDelay2_DSTATE;

  /* MATLAB Function: '<S31>/MATLAB Function' incorporates:
   *  Constant: '<S16>/Constant6'
   *  Constant: '<S31>/Constant5'
   */
  LCS_ESS_NotActiveDelayFlg = LCS_ESS_NotActiveFlgOriginal;
  delaytime = 0.0F;
  PubIfControlLATC_MDL_B.flg = 0U;
  if ((!PubIfControlLATC_MDL_B.UnitDelay4_f) && LCS_ESS_NotActiveFlgOriginal) {
    PubIfControlLATC_MDL_B.flg = 1U;
    LCS_ESS_NotActiveDelayFlg = true;
    delaytime = 0.02F;
  }

  if (PubIfControlLATC_MDL_B.UnitDelay2 == 1) {
    delaytime = PubIfControlLATC_MDL_B.UnitDelay3 + 0.02F;
    if (delaytime < P_LCS_ESS_NotActiveFlgDelayTime) {
      PubIfControlLATC_MDL_B.flg = 1U;
      LCS_ESS_NotActiveDelayFlg = true;
    }
  }

  PubIfControlLATC_MDL_B.delaytime = delaytime;

  /* End of MATLAB Function: '<S31>/MATLAB Function' */

  /* Switch: '<S16>/Switch2' incorporates:
   *  Constant: '<S16>/Constant5'
   */
  if (P_LCS_ESS_NotActiveFlgDelayTimeSW != 0.0F) {
    /* Switch: '<S16>/Switch2' */
    LCS_ESS_NotActiveFlg = LCS_ESS_NotActiveDelayFlg;
  } else {
    /* Switch: '<S16>/Switch2' */
    LCS_ESS_NotActiveFlg = LCS_ESS_NotActiveFlgOriginal;
  }

  /* End of Switch: '<S16>/Switch2' */

  /* Switch: '<S16>/Switch1' */
  if (LCS_ESS_NotActiveFlg) {
    /* Switch: '<S16>/Switch1' incorporates:
     *  Constant: '<S16>/Constant2'
     */
    PubIfControlLATC_MDL_B.Switch1_n = ((uint8_T)0U);
  } else {
    /* Switch: '<S16>/Switch1' */
    PubIfControlLATC_MDL_B.Switch1_n = rtu_VSM_LAT_CTRL->TarDangerLevel;
  }

  /* End of Switch: '<S16>/Switch1' */

  /* RelationalOperator: '<S7>/Compare' incorporates:
   *  Constant: '<S7>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_l = (PubIfControlLATC_MDL_B.Switch1_n ==
    ((uint8_T)6U));

  /* Gain: '<S18>/Gain3' */
  PubIfControlLATC_MDL_B.Gain3_d = 3.6F * LCS_IN_vxvRefMs;

  /* Gain: '<S18>/Gain4' */
  PubIfControlLATC_MDL_B.Gain4_g = 1.03F * PubIfControlLATC_MDL_B.Gain3_d;

  /* Sum: '<S18>/Sum' incorporates:
   *  Constant: '<S18>/Constant5'
   */
  PubIfControlLATC_MDL_B.Sum_g = PubIfControlLATC_MDL_B.Gain4_g + 1.3F;

  /* RelationalOperator: '<S12>/Compare' incorporates:
   *  Constant: '<S12>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_i = (PubIfControlLATC_MDL_B.Sum_g < 5.0F);

  /* SignalConversion: '<S4>/Signal Conversion11' */
  LCS_IN_EPS_FailSts = PubIfControlLATC_MDL_B.BusAssignment.EPS_FailSts;

  /* RelationalOperator: '<S10>/Compare' incorporates:
   *  Constant: '<S10>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_d = (LCS_IN_EPS_FailSts != ((uint8_T)0U));

  /* Logic: '<S4>/OR' */
  PubIfControlLATC_MDL_B.OR = (PubIfControlLATC_MDL_ConstB.Compare ||
    PubIfControlLATC_MDL_B.Compare_d);

  /* Logic: '<S4>/OR1' */
  PubIfControlLATC_MDL_B.OR1 = (PubIfControlLATC_MDL_B.Compare_i ||
    PubIfControlLATC_MDL_B.OR);

  /* Switch: '<S4>/Switch7' */
  if (PubIfControlLATC_MDL_B.OR1) {
    /* Switch: '<S4>/Switch7' incorporates:
     *  Constant: '<S4>/Constant5'
     */
    PubIfControlLATC_MDL_B.Switch7 = false;
  } else {
    /* Switch: '<S4>/Switch7' */
    PubIfControlLATC_MDL_B.Switch7 = rtu_VSM_LAT_CTRL->TarLineValid;
  }

  /* End of Switch: '<S4>/Switch7' */

  /* Switch: '<S16>/Switch' */
  if (LCS_ESS_NotActiveFlg) {
    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S16>/Constant'
     */
    PubIfControlLATC_MDL_B.Switch_h = false;
  } else {
    /* Switch: '<S16>/Switch' */
    PubIfControlLATC_MDL_B.Switch_h = PubIfControlLATC_MDL_B.Switch7;
  }

  /* End of Switch: '<S16>/Switch' */

  /* RelationalOperator: '<S8>/Compare' incorporates:
   *  Constant: '<S8>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_d4 = (PubIfControlLATC_MDL_B.Switch_h == true);

  /* Switch: '<S4>/Switch3' */
  if (PubIfControlLATC_MDL_B.Switch_h) {
    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S4>/Constant15'
     */
    PubIfControlLATC_MDL_B.Switch3 = ((uint8_T)3U);
  } else {
    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S4>/Constant16'
     */
    PubIfControlLATC_MDL_B.Switch3 = ((uint8_T)2U);
  }

  /* End of Switch: '<S4>/Switch3' */

  /* RelationalOperator: '<S9>/Compare' incorporates:
   *  Constant: '<S9>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_n = (PubIfControlLATC_MDL_B.Switch3 ==
    ((uint8_T)3U));

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_o = (LCS_IN_EPS_FailSts != ((uint8_T)0U));

  /* SignalConversion: '<S4>/Signal Conversion10' */
  LCS_IN_EPS_LKATrqOvlDlvdSts =
    PubIfControlLATC_MDL_B.BusAssignment.EPS_LKATrqOvlDlvdSts;

  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S14>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_i5 = (LCS_IN_EPS_LKATrqOvlDlvdSts >= ((uint8_T)
    2U));

  /* DataTypeConversion: '<S4>/Data Type Conversion1' */
  PubIfControlLATC_MDL_B.DataTypeConversion1_p = rtu_VSM_LAT_CTRL->TarLineValid;

  /* SignalConversion: '<S4>/Signal Conversion6' */
  PubIfControlLATC_MDL_B.SignalConversion6 =
    PubIfControlLATC_MDL_B.BusAssignment1.SteerWheelSpdSign;

  /* DataTypeConversion: '<S4>/Data Type Conversion3' */
  LCS_IN_SteerWheelSpdSign = PubIfControlLATC_MDL_B.SignalConversion6;

  /* SignalConversion: '<S4>/Signal Conversion7' */
  PubIfControlLATC_MDL_B.SignalConversion7 =
    PubIfControlLATC_MDL_B.BusAssignment1.SteerWheelAngSign;

  /* DataTypeConversion: '<S4>/Data Type Conversion4' */
  LCS_IN_SteerWheelAngleSign = PubIfControlLATC_MDL_B.SignalConversion7;

  /* SignalConversion: '<S4>/Signal Conversion5' */
  PubIfControlLATC_MDL_B.SignalConversion5 =
    PubIfControlLATC_MDL_B.BusAssignment1.SteerWheelAng;

  /* DataTypeConversion: '<S4>/Data Type Conversion49' */
  LCS_IN_SteerWheelAng = PubIfControlLATC_MDL_B.SignalConversion5;

  /* SignalConversion: '<S4>/Signal Conversion8' */
  PubIfControlLATC_MDL_B.SignalConversion8 = rtu_RFM_ROAD->dCurrentLaneWidth;

  /* DataTypeConversion: '<S4>/Data Type Conversion50' */
  LCS_IN_CurrentLaneWidth = PubIfControlLATC_MDL_B.SignalConversion8;

  /* SignalConversion: '<S4>/Signal Conversion2' */
  PubIfControlLATC_MDL_B.SignalConversion2 =
    PubIfControlLATC_MDL_B.BusAssignment.EPS_LKATorqOvrlDlvd;

  /* DataTypeConversion: '<S4>/Data Type Conversion6' */
  LCS_IN_EPS_LKATorqOvrlDlvd = PubIfControlLATC_MDL_B.SignalConversion2;

  /* SignalConversion: '<S4>/Signal Conversion3' */
  PubIfControlLATC_MDL_B.SignalConversion3 =
    PubIfControlLATC_MDL_B.BusAssignment.EPS_LKATorqOvrlDlvdVld;

  /* DataTypeConversion: '<S4>/Data Type Conversion7' */
  LCS_IN_EPS_LKATorqOvrlDlvdVld = PubIfControlLATC_MDL_B.SignalConversion3;

  /* SignalConversion: '<S17>/Signal Copy4' */
  LCS_IN_desLaneValid = PubIfControlLATC_MDL_B.DataTypeConversion1_p;

  /* Bias: '<S39>/Bias1' */
  PubIfControlLATC_MDL_B.Bias1 = LCS_IN_SteerWheelAngleSign + (-0.5F);

  /* Gain: '<S39>/Gain5' */
  PubIfControlLATC_MDL_B.Gain5 = (-2.0F) * PubIfControlLATC_MDL_B.Bias1;

  /* Product: '<S39>/Product5' */
  LCS_IN_CurSteerAngle_deg = LCS_IN_SteerWheelAng * PubIfControlLATC_MDL_B.Gain5;

  /* SignalConversion: '<S4>/Signal Copy6' */
  PubIfControlLATC_MDL_B.SignalCopy6 = *rtu_SteerAngOffset_deg;

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  if (P_LCS_IN_Offset_Test_SW > ((uint8_T)0U)) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant2'
     */
    LCS_IN_SteerAngOffset_deg = P_LCS_IN_Offset_Test_Value;
  } else {
    /* Switch: '<S4>/Switch1' */
    LCS_IN_SteerAngOffset_deg = PubIfControlLATC_MDL_B.SignalCopy6;
  }

  /* End of Switch: '<S4>/Switch1' */

  /* Sum: '<S42>/Add' */
  LCS_LATC_CorrectSteerAngle_deg = LCS_IN_CurSteerAngle_deg -
    LCS_IN_SteerAngOffset_deg;

  /* Product: '<S43>/Product4' incorporates:
   *  Constant: '<S42>/Constant4'
   *  Constant: '<S43>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4_o = 0.02F / P_LCS_LCC_RefcurveTime_s;

  /* Memory: '<S43>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2_m =
    PubIfControlLATC_MDL_DW.Memory2_PreviousInput_j;

  /* Sum: '<S43>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4_h = 0.0F - PubIfControlLATC_MDL_B.Memory2_m;

  /* Product: '<S43>/Product1' */
  PubIfControlLATC_MDL_B.Product1_a = PubIfControlLATC_MDL_B.Product4_o *
    PubIfControlLATC_MDL_B.Sum4_h;

  /* Sum: '<S43>/Sum5' */
  PubIfControlLATC_MDL_B.Sum5 = PubIfControlLATC_MDL_B.Product1_a +
    PubIfControlLATC_MDL_B.Memory2_m;

  /* Product: '<S48>/Product4' incorporates:
   *  Constant: '<S42>/Constant9'
   *  Constant: '<S48>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4_f = 0.02F / P_LCS_LCC_RefThetaTime_s;

  /* Memory: '<S48>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2_h =
    PubIfControlLATC_MDL_DW.Memory2_PreviousInput_h;

  /* Sum: '<S48>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4_j = 0.0F - PubIfControlLATC_MDL_B.Memory2_h;

  /* Product: '<S48>/Product1' */
  PubIfControlLATC_MDL_B.Product1_p2 = PubIfControlLATC_MDL_B.Product4_f *
    PubIfControlLATC_MDL_B.Sum4_j;

  /* Sum: '<S48>/Sum5' */
  PubIfControlLATC_MDL_B.Sum5_m = PubIfControlLATC_MDL_B.Product1_p2 +
    PubIfControlLATC_MDL_B.Memory2_h;

  /* MATLAB Function: '<S42>/MATLAB Function' */
  LCS_LATC_MPCDeltaT_s = 0.0F / (10.0F * LCS_IN_vxvRefMs);

  /* Product: '<S44>/Product4' incorporates:
   *  Constant: '<S42>/Constant5'
   *  Constant: '<S44>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4_p = 0.02F / P_LCS_LCC_LaterErrTime_s;

  /* Memory: '<S44>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2_f =
    PubIfControlLATC_MDL_DW.Memory2_PreviousInput_k;

  /* Sum: '<S44>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4_m = 0.0F - PubIfControlLATC_MDL_B.Memory2_f;

  /* Product: '<S44>/Product1' */
  PubIfControlLATC_MDL_B.Product1_gb = PubIfControlLATC_MDL_B.Product4_p *
    PubIfControlLATC_MDL_B.Sum4_m;

  /* Sum: '<S44>/Sum5' */
  PubIfControlLATC_MDL_B.Sum5_d = PubIfControlLATC_MDL_B.Product1_gb +
    PubIfControlLATC_MDL_B.Memory2_f;

  /* Product: '<S46>/Product4' incorporates:
   *  Constant: '<S42>/Constant7'
   *  Constant: '<S46>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4_a = 0.02F / P_LCS_LCC_HeadingErrTime_s;

  /* Memory: '<S46>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2_i =
    PubIfControlLATC_MDL_DW.Memory2_PreviousInput_e;

  /* Sum: '<S46>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4_c = 0.0F - PubIfControlLATC_MDL_B.Memory2_i;

  /* Product: '<S46>/Product1' */
  PubIfControlLATC_MDL_B.Product1_l = PubIfControlLATC_MDL_B.Product4_a *
    PubIfControlLATC_MDL_B.Sum4_c;

  /* Sum: '<S46>/Sum5' */
  PubIfControlLATC_MDL_B.Sum5_dw = PubIfControlLATC_MDL_B.Product1_l +
    PubIfControlLATC_MDL_B.Memory2_i;

  /* Gain: '<S41>/Gain3' */
  PubIfControlLATC_MDL_B.Gain3_o = 3.6F * LCS_IN_vxvRefMs;

  /* Gain: '<S41>/Gain4' */
  PubIfControlLATC_MDL_B.Gain4_i = 1.03F * PubIfControlLATC_MDL_B.Gain3_o;

  /* Sum: '<S41>/Sum' incorporates:
   *  Constant: '<S41>/Constant8'
   */
  LCS_IN_Spd_Kph = PubIfControlLATC_MDL_B.Gain4_i + 1.3F;

  /* Lookup_n-D: '<S42>/MatrixQ1' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.MatrixQ1 = look1_iflf_binlcapw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_MPCMatrixQ1_st, 15U);

  /* Lookup_n-D: '<S42>/MatrixQ2' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.MatrixQ2 = look1_iflf_binlcapw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_MPCMatrixQ2_st, 15U);

  /* Lookup_n-D: '<S42>/MatrixR' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.MatrixR = look1_iflf_binlcapw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_MPCMatrixR_st, 15U);

  /* Delay: '<S17>/Delay' */
  LCS_IN_TarDangerlLevel_Delay2Frame = PubIfControlLATC_MDL_DW.Delay_DSTATE[0];

  /* Lookup_n-D: '<S51>/LCKMaxAy' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LCKMaxAy = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCKMaxLatAcc_ms2, 15U);

  /* Lookup_n-D: '<S51>/LCKIEMaxAy' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LCKIEMaxAy = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCKIEMaxLatAcc_ms2, 15U);

  /* Lookup_n-D: '<S51>/LCNomal_MaxAy' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LCNomal_MaxAy = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCNormalMaxLatAcc_ms2, 15U);

  /* Lookup_n-D: '<S51>/LKA_MaxAy' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LKA_MaxAy = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LKAMaxLatAcc_ms2, 15U);

  /* Lookup_n-D: '<S51>/ELK_MaxAy' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.ELK_MaxAy = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_ELKMaxLatAcc_ms2, 15U);

  /* Lookup_n-D: '<S51>/ESS AES_MaxAy' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.ESSAES_MaxAy = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_ESSMaxLatAcc_ms2, 15U);

  /* Lookup_n-D: '<S51>/LC_Eco_MaxAy' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LC_Eco_MaxAy = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCEcoMaxLatAcc_ms2, 15U);

  /* Lookup_n-D: '<S51>/LC_SportMaxAy' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LC_SportMaxAy = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCSportMaxLatAcc_ms2, 15U);

  /* Lookup_n-D: '<S51>/LC_CancelMaxAy' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LC_CancelMaxAy = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCCancleMaxLatAcc_ms2, 15U);

  /* MultiPortSwitch: '<S51>/Multiport Switch2' */
  switch (LCS_IN_TarDangerlLevel_Delay2Frame) {
   case 0:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' incorporates:
     *  Constant: '<S51>/Constant1'
     */
    LCS_LATC_MaxAy_ms2 = 1.5F;
    break;

   case 1:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' */
    LCS_LATC_MaxAy_ms2 = PubIfControlLATC_MDL_B.LCKMaxAy;
    break;

   case 2:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' */
    LCS_LATC_MaxAy_ms2 = PubIfControlLATC_MDL_B.LCKIEMaxAy;
    break;

   case 3:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' */
    LCS_LATC_MaxAy_ms2 = PubIfControlLATC_MDL_B.LCNomal_MaxAy;
    break;

   case 4:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' */
    LCS_LATC_MaxAy_ms2 = PubIfControlLATC_MDL_B.LKA_MaxAy;
    break;

   case 5:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' */
    LCS_LATC_MaxAy_ms2 = PubIfControlLATC_MDL_B.ELK_MaxAy;
    break;

   case 6:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' */
    LCS_LATC_MaxAy_ms2 = PubIfControlLATC_MDL_B.ESSAES_MaxAy;
    break;

   case 7:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' */
    LCS_LATC_MaxAy_ms2 = PubIfControlLATC_MDL_B.LC_Eco_MaxAy;
    break;

   case 8:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' */
    LCS_LATC_MaxAy_ms2 = PubIfControlLATC_MDL_B.LC_SportMaxAy;
    break;

   case 9:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' */
    LCS_LATC_MaxAy_ms2 = PubIfControlLATC_MDL_B.LC_CancelMaxAy;
    break;

   default:
    /* MultiPortSwitch: '<S51>/Multiport Switch2' incorporates:
     *  Constant: '<S51>/Constant5'
     */
    LCS_LATC_MaxAy_ms2 = 1.5F;
    break;
  }

  /* End of MultiPortSwitch: '<S51>/Multiport Switch2' */

  /* DataTypeConversion: '<S51>/Data Type Conversion' */
  PubIfControlLATC_MDL_B.DataTypeConversion = LCS_LATC_MaxAy_ms2;

  /* UnitDelay: '<S51>/Unit Delay5' */
  PubIfControlLATC_MDL_B.UnitDelay5 = PubIfControlLATC_MDL_DW.UnitDelay5_DSTATE;

  /* UnitDelay: '<S51>/Unit Delay4' */
  PubIfControlLATC_MDL_B.UnitDelay4 = PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE;

  /* UnitDelay: '<S51>/Unit Delay3' */
  PubIfControlLATC_MDL_B.UnitDelay3_j =
    PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE_k;

  /* MATLAB Function: '<S51>/MATLAB Function3' incorporates:
   *  Constant: '<S51>/Constant2'
   */
  qY = PubIfControlLATC_MDL_B.UnitDelay3_j + 1U;
  if (qY > 65535U) {
    qY = 65535U;
  }

  u0 = (uint16_T)qY;
  u1_0 = P_LCS_LATC_StateHoldTime_st;
  if (u0 < u1_0) {
    u1_0 = u0;
  }

  if (u1_0 == P_LCS_LATC_StateHoldTime_st) {
    LCS_LATC_AngleSlopeFlg_st = 0U;
  } else {
    LCS_LATC_AngleSlopeFlg_st = PubIfControlLATC_MDL_B.UnitDelay4;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 1) &&
      (PubIfControlLATC_MDL_B.UnitDelay5 == 0)) {
    u1_0 = 0U;
    LCS_LATC_AngleSlopeFlg_st = 1U;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 3) &&
      ((PubIfControlLATC_MDL_B.UnitDelay5 == 1) ||
       (PubIfControlLATC_MDL_B.UnitDelay5 == 2))) {
    u1_0 = 0U;
    LCS_LATC_AngleSlopeFlg_st = 2U;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 7) &&
      ((PubIfControlLATC_MDL_B.UnitDelay5 == 1) ||
       (PubIfControlLATC_MDL_B.UnitDelay5 == 2))) {
    u1_0 = 0U;
    LCS_LATC_AngleSlopeFlg_st = 3U;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 8) &&
      ((PubIfControlLATC_MDL_B.UnitDelay5 == 1) ||
       (PubIfControlLATC_MDL_B.UnitDelay5 == 2))) {
    u1_0 = 0U;
    LCS_LATC_AngleSlopeFlg_st = 4U;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 6) &&
      ((PubIfControlLATC_MDL_B.UnitDelay5 == 1) ||
       (PubIfControlLATC_MDL_B.UnitDelay5 == 2))) {
    u1_0 = 0U;
    LCS_LATC_AngleSlopeFlg_st = 5U;
  }

  PubIfControlLATC_MDL_B.Cnt_o = u1_0;

  /* End of MATLAB Function: '<S51>/MATLAB Function3' */

  /* Product: '<S51>/Product' incorporates:
   *  Constant: '<S51>/Constant3'
   */
  LCS_LATC_HoldTime_s = 0.02 * (real_T)PubIfControlLATC_MDL_B.Cnt_o;

  /* SwitchCase: '<S51>/Switch Case' */
  switch (LCS_LATC_AngleSlopeFlg_st) {
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
    /* Outputs for IfAction SubSystem: '<S51>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    /* Merge: '<S51>/Merge' incorporates:
     *  Lookup_n-D: '<S55>/LC_start_slope'
     *  Product: '<S51>/Product'
     */
    LCS_LATC_StateActAngleSlope_degs = look2_iu8dtf_binlcapw
      (LCS_LATC_AngleSlopeFlg_st, LCS_LATC_HoldTime_s,
       P_LCS_LATC_StateActiveFlg_TabX_st, P_LCS_LATC_StateActiveHoldTime_TabY_st,
       P_LCS_LATC_StateActivAngleSlopeLimit_ratio, rtCP_LC_start_slope_maxIndex,
       5U);

    /* End of Outputs for SubSystem: '<S51>/Switch Case Action Subsystem' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S51>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */
    PubIfControlLATC_MDL_SwitchCaseActionSubsystem1
      (&LCS_LATC_StateActAngleSlope_degs);

    /* End of Outputs for SubSystem: '<S51>/Switch Case Action Subsystem1' */
    break;
  }

  /* End of SwitchCase: '<S51>/Switch Case' */

  /* Lookup_n-D: '<S51>/No Function 2 LCK' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.NoFunction2LCK = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCKAngleSlope_ratio, 15U);

  /* Lookup_n-D: '<S51>/LCKIE_Active' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LCKIE_Active = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCKIEAngleSlope_ratio, 15U);

  /* Lookup_n-D: '<S51>/LCK//IE TO LC_Nomal' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LCKIETOLC_Nomal = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCNormalAngleSlope_ratio, 15U);

  /* Lookup_n-D: '<S51>/LKA Active' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LKAActive = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LKAAngleSlope_ratio, 15U);

  /* Lookup_n-D: '<S51>/ELK Active' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.ELKActive = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_ELKAngleSlope_ratio, 15U);

  /* Lookup_n-D: '<S51>/ESS AES Active' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.ESSAESActive = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_ESSAngleSlope_ratio, 15U);

  /* Lookup_n-D: '<S51>/LCK//IE TO LC_Eco' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LCKIETOLC_Eco = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCEcoAngleSlope_ratio, 15U);

  /* Lookup_n-D: '<S51>/LCK//IE TO LC_Sport' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LCKIETOLC_Sport = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCSportAngleSlope_ratio, 15U);

  /* Lookup_n-D: '<S51>/LC Cancel' incorporates:
   *  Sum: '<S41>/Sum'
   */
  PubIfControlLATC_MDL_B.LCCancel = look1_iflf_binlcpw(LCS_IN_Spd_Kph,
    P_LCS_VehicleSpd_TabX_Kph, P_LCS_LATC_LCAngleSlope_ratio, 15U);

  /* MultiPortSwitch: '<S51>/Multiport Switch1' */
  switch (LCS_IN_TarDangerlLevel_Delay2Frame) {
   case 0:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' incorporates:
     *  Constant: '<S51>/Constant'
     */
    LCS_LATC_StateAngleSlope_degs = 0.4F;
    break;

   case 1:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' */
    LCS_LATC_StateAngleSlope_degs = PubIfControlLATC_MDL_B.NoFunction2LCK;
    break;

   case 2:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' */
    LCS_LATC_StateAngleSlope_degs = PubIfControlLATC_MDL_B.LCKIE_Active;
    break;

   case 3:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' */
    LCS_LATC_StateAngleSlope_degs = PubIfControlLATC_MDL_B.LCKIETOLC_Nomal;
    break;

   case 4:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' */
    LCS_LATC_StateAngleSlope_degs = PubIfControlLATC_MDL_B.LKAActive;
    break;

   case 5:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' */
    LCS_LATC_StateAngleSlope_degs = PubIfControlLATC_MDL_B.ELKActive;
    break;

   case 6:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' */
    LCS_LATC_StateAngleSlope_degs = PubIfControlLATC_MDL_B.ESSAESActive;
    break;

   case 7:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' */
    LCS_LATC_StateAngleSlope_degs = PubIfControlLATC_MDL_B.LCKIETOLC_Eco;
    break;

   case 8:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' */
    LCS_LATC_StateAngleSlope_degs = PubIfControlLATC_MDL_B.LCKIETOLC_Sport;
    break;

   case 9:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' */
    LCS_LATC_StateAngleSlope_degs = PubIfControlLATC_MDL_B.LCCancel;
    break;

   default:
    /* MultiPortSwitch: '<S51>/Multiport Switch1' incorporates:
     *  Constant: '<S51>/Constant4'
     */
    LCS_LATC_StateAngleSlope_degs = 0.4F;
    break;
  }

  /* End of MultiPortSwitch: '<S51>/Multiport Switch1' */

  /* MinMax: '<S51>/Min' */
  delaytime = fminf(LCS_LATC_StateActAngleSlope_degs,
                    LCS_LATC_StateAngleSlope_degs);

  /* MinMax: '<S51>/Min' */
  PubIfControlLATC_MDL_B.Min = delaytime;

  /* DataTypeConversion: '<S51>/Data Type Conversion1' */
  PubIfControlLATC_MDL_B.DataTypeConversion1 = PubIfControlLATC_MDL_B.Min;

  /* Product: '<S53>/FilterTime2' incorporates:
   *  Constant: '<S53>/Constant1'
   *  Constant: '<S53>/Constant6'
   */
  PubIfControlLATC_MDL_B.FilterTime2 = LCS_IN_CurSteerAngle_deg /
    P_Global_SteeringAngleRatio / 57.3F;

  /* Memory: '<S53>/Memory52' */
  PubIfControlLATC_MDL_B.Memory52 =
    PubIfControlLATC_MDL_DW.Memory52_PreviousInput;

  /* MATLAB Function: '<S53>/YOD_Ackman' incorporates:
   *  Constant: '<S53>/Constant4'
   *  Constant: '<S53>/Constant5'
   */
  if (LCS_IN_vxvRefMs == 0.0F) {
    PsiDtAckRaw = 0.0F;
    delaytime = 1.0F;
  } else {
    delaytime = fminf((LCS_IN_vxvRefMs * LCS_IN_vxvRefMs / (P_Global_CharSpd_ms *
      P_Global_CharSpd_ms) + 1.0F) * P_Global_WheelBase_m / LCS_IN_vxvRefMs,
                      32767.0F);
    PsiDtAckRaw = PubIfControlLATC_MDL_B.FilterTime2 / delaytime;
  }

  PubIfControlLATC_MDL_B.PsiDtAck = (PsiDtAckRaw -
    PubIfControlLATC_MDL_B.Memory52) * 0.2F + PubIfControlLATC_MDL_B.Memory52;
  PubIfControlLATC_MDL_B.AckConst = delaytime;

  /* End of MATLAB Function: '<S53>/YOD_Ackman' */

  /* SignalConversion: '<S4>/Signal Copy5' */
  LCS_IN_psiDtOpt = *rtu_psiDtOpt;

  /* Sum: '<S53>/Sum' */
  PubIfControlLATC_MDL_B.Sum_b = PubIfControlLATC_MDL_B.PsiDtAck -
    LCS_IN_psiDtOpt;

  /* Product: '<S60>/Product4' incorporates:
   *  Constant: '<S53>/Constant2'
   *  Constant: '<S60>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4_au = 0.02F / P_LCS_LATC_CurOffsetA2FliterT_s;

  /* SignalConversion: '<S4>/Signal Conversion13' */
  LCS_IN_desLaneA2 = rtu_VSM_LAT_CTRL->TarLineC2;

  /* Gain: '<S53>/Gain' */
  PubIfControlLATC_MDL_B.Gain = 2.0F * LCS_IN_desLaneA2;

  /* Abs: '<S53>/Abs' */
  PubIfControlLATC_MDL_B.Abs_o = fabsf(PubIfControlLATC_MDL_B.Gain);

  /* UnitDelay: '<S60>/Unit Delay' */
  PubIfControlLATC_MDL_B.UnitDelay_m =
    PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_c;

  /* Sum: '<S60>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4_n = PubIfControlLATC_MDL_B.Abs_o -
    PubIfControlLATC_MDL_B.UnitDelay_m;

  /* Product: '<S60>/Product1' */
  PubIfControlLATC_MDL_B.Product1_h = PubIfControlLATC_MDL_B.Product4_au *
    PubIfControlLATC_MDL_B.Sum4_n;

  /* Sum: '<S60>/Sum5' */
  PubIfControlLATC_MDL_B.Sum5_g = PubIfControlLATC_MDL_B.Product1_h +
    PubIfControlLATC_MDL_B.UnitDelay_m;

  /* RelationalOperator: '<S57>/Compare' incorporates:
   *  Constant: '<S57>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_b = (LCS_IN_vxvRefMs >
    P_LCS_LATC_CurOffsetVehicleSpdLimitValue_degs);

  /* Logic: '<S53>/Logical Operator' */
  LCS_OffSetUpdate_Flg = (PubIfControlLATC_MDL_ConstB.Compare_f &&
    PubIfControlLATC_MDL_B.Compare_b);

  /* Outputs for Enabled SubSystem: '<S53>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S59>/Enable'
   */
  if (LCS_OffSetUpdate_Flg) {
    /* Product: '<S59>/FilterTime2' incorporates:
     *  Constant: '<S59>/Constant7'
     *  Constant: '<S59>/Constant8'
     */
    PubIfControlLATC_MDL_B.FilterTime2_d = P_Global_SteeringAngleRatio * 57.3F *
      PubIfControlLATC_MDL_B.AckConst * PubIfControlLATC_MDL_B.Sum_b;

    /* Lookup_n-D: '<S59>/predis_ayFac1' incorporates:
     *  Sum: '<S60>/Sum5'
     */
    PubIfControlLATC_MDL_B.predis_ayFac1 = look1_iflf_binlcapw
      (PubIfControlLATC_MDL_B.Sum5_g, P_LCS_LATC_CurOffsetCurve_TabX_m,
       P_LCS_LATC_CurOffsetCurveFliterTime_Tab_s, 9U);

    /* Product: '<S59>/Product2' incorporates:
     *  Constant: '<S59>/Constant2'
     */
    PubIfControlLATC_MDL_B.Product2 = 0.02F /
      PubIfControlLATC_MDL_B.predis_ayFac1;

    /* UnitDelay: '<S59>/Unit Delay' */
    PubIfControlLATC_MDL_B.UnitDelay_fo =
      PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_m1;

    /* Sum: '<S59>/Sum6' */
    PubIfControlLATC_MDL_B.Sum6 = PubIfControlLATC_MDL_B.FilterTime2_d -
      PubIfControlLATC_MDL_B.UnitDelay_fo;

    /* Product: '<S59>/Product6' */
    PubIfControlLATC_MDL_B.Product6 = PubIfControlLATC_MDL_B.Product2 *
      PubIfControlLATC_MDL_B.Sum6;

    /* Sum: '<S59>/Sum7' */
    LCS_LATC_CurrentSteerAngleOffset_deg = PubIfControlLATC_MDL_B.Product6 +
      PubIfControlLATC_MDL_B.UnitDelay_fo;
  }

  /* End of Outputs for SubSystem: '<S53>/Enabled Subsystem' */

  /* Saturate: '<S42>/Saturation' */
  steer_limit = LCS_LATC_CurrentSteerAngleOffset_deg;
  u1 = (-8.0F);
  ref_delta = 8.0F;
  if (steer_limit > ref_delta) {
    /* Saturate: '<S42>/Saturation' */
    PubIfControlLATC_MDL_B.Saturation = ref_delta;
  } else if (steer_limit < u1) {
    /* Saturate: '<S42>/Saturation' */
    PubIfControlLATC_MDL_B.Saturation = u1;
  } else {
    /* Saturate: '<S42>/Saturation' */
    PubIfControlLATC_MDL_B.Saturation = steer_limit;
  }

  /* End of Saturate: '<S42>/Saturation' */

  /* UnitDelay: '<S42>/Unit Delay' */
  PubIfControlLATC_MDL_B.UnitDelay_f =
    PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_i;

  /* UnitDelay: '<S42>/Unit Delay1' */
  PubIfControlLATC_MDL_B.UnitDelay1_d =
    PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE_b;

  /* MATLAB Function: '<S42>/TarSteerAngleCalc' incorporates:
   *  Constant: '<S42>/Constant'
   *  Constant: '<S42>/Constant1'
   *  Constant: '<S42>/Constant2'
   */
  steer_limit = LCS_IN_vxvRefMs;
  delta_umax = LCS_LATC_MPCDeltaT_s;
  umax = P_LCS_LATC_MPCMaxSterAngle_deg;
  steer_cmd = P_LCS_LATC_MPCMaxSterAngleSpd_degs;
  u1 = PubIfControlLATC_MDL_B.DataTypeConversion;
  delaytime = PubIfControlLATC_MDL_B.DataTypeConversion1;
  PsiDtAckRaw = PubIfControlLATC_MDL_B.Saturation;
  steer_angleK1 = PubIfControlLATC_MDL_B.UnitDelay_f;
  umin = PubIfControlLATC_MDL_B.UnitDelay1_d;
  if (LCS_IN_desLaneValid) {
    steer_feedbackward_temp = P_Global_SteeringAngleRatio;
    steer_transmission_ratio = P_Global_SteeringAngleRatio;
    ref_delta = atanf(2.92F * PubIfControlLATC_MDL_B.Sum5);
    delta_umin = cosf(ref_delta);
    delta_umin = LCS_IN_vxvRefMs * LCS_LATC_MPCDeltaT_s / (delta_umin *
      delta_umin * 2.92F);
    PubIfControlLATC_MDL_cat(PubIfControlLATC_MDL_B.UnitDelay1_d, kesi);
    kesi[0] = PubIfControlLATC_MDL_B.Sum5_d;
    kesi[1] = PubIfControlLATC_MDL_B.Sum5_d;
    matrix_q[0] = PubIfControlLATC_MDL_B.MatrixQ1;
    matrix_q[2] = 0.0F;
    matrix_q[1] = 0.0F;
    matrix_q[3] = PubIfControlLATC_MDL_B.MatrixQ2;
    memset(&matrix_Q[0], 0, 400U * sizeof(real_T));
    memset(&matrix_Q_temp[0], 0, 40U * sizeof(real_T));
    for (sigIdx = 0; sigIdx < 10; sigIdx++) {
      for (kidx = 0; kidx < 10; kidx++) {
        if (sigIdx == kidx) {
          memset(&matrix_Q_temp[0], 0, 40U * sizeof(real_T));
          i = (kidx + 1) << 1;
          if ((kidx << 1) + 1 > i) {
            idx = 0;
            i = 0;
          } else {
            idx = kidx << 1;
          }

          i_0 = i - idx;
          for (i = 0; i < i_0; i++) {
            matrix_Q_temp[(idx + i) << 1] = matrix_q[i << 1];
            matrix_Q_temp[((idx + i) << 1) + 1] = matrix_q[(i << 1) + 1];
          }
        }
      }

      kidx = (sigIdx + 1) << 1;
      if ((sigIdx << 1) + 1 > kidx) {
        idx = 0;
        kidx = 0;
      } else {
        idx = sigIdx << 1;
      }

      kidx -= idx;
      for (i = 0; i < 20; i++) {
        for (i_0 = 0; i_0 < kidx; i_0++) {
          matrix_Q[(idx + i_0) + 20 * i] = matrix_Q_temp[kidx * i + i_0];
        }
      }
    }

    for (i = 0; i < 5; i++) {
      matrix_R_temp[i] = 0.0;
    }

    for (idx = 0; idx < 5; idx++) {
      for (i = 0; i < 5; i++) {
        if (idx == i) {
          for (i_0 = 0; i_0 < 5; i_0++) {
            matrix_R_temp[i_0] = 0.0;
          }

          matrix_R_temp[i] = PubIfControlLATC_MDL_B.MatrixR;
        }
      }

      for (i = 0; i < 5; i++) {
        matrix_R[idx + 5 * i] = matrix_R_temp[i];
      }
    }

    b3 = cosf(PubIfControlLATC_MDL_B.Sum5_m);
    A[0] = 1.0F;
    A[3] = LCS_IN_vxvRefMs * b3 * LCS_LATC_MPCDeltaT_s;
    A[1] = 0.0F;
    A[6] = 0.0F;
    A[4] = 1.0F;
    A[7] = delta_umin;
    A[2] = 0.0F;
    A[5] = 0.0F;
    A[8] = 1.0F;
    b_B[0] = 0.0F;
    b_B[1] = delta_umin;
    b_B[2] = 1.0F;
    memset(&PHI[0], 0, 60U * sizeof(real_T));
    memset(&THETA[0], 0, 100U * sizeof(real_T));
    memset(&THETA_temp[0], 0, 10U * sizeof(real_T));
    for (sigIdx = 0; sigIdx < 10; sigIdx++) {
      for (kidx = 0; kidx < 5; kidx++) {
        if (kidx <= sigIdx) {
          mpower_1Vv6hBEw(A, (real32_T)(sigIdx - kidx), b_b);
          for (i = 0; i < 2; i++) {
            b3 = 0.0F;
            for (i_0 = 0; i_0 < 3; i_0++) {
              A_0[i + (i_0 << 1)] = 0.0F;
              delta_umin = A_0[(i_0 << 1) + i];
              delta_umin += b_b[3 * i_0] * (real32_T)b_a_0[i];
              A_0[i + (i_0 << 1)] = delta_umin;
              delta_umin = A_0[(i_0 << 1) + i];
              delta_umin += b_b[3 * i_0 + 1] * (real32_T)b_a_0[i + 2];
              A_0[i + (i_0 << 1)] = delta_umin;
              delta_umin = A_0[(i_0 << 1) + i];
              delta_umin += b_b[3 * i_0 + 2] * 0.0F;
              A_0[i + (i_0 << 1)] = delta_umin;
              b3 += A_0[(i_0 << 1) + i] * b_B[i_0];
            }

            b_a[i] = b3;
          }

          for (i = 0; i < 1; i++) {
            THETA_temp[kidx << 1] = b_a[0];
            THETA_temp[(kidx << 1) + 1] = b_a[1];
          }
        }
      }

      idx = (sigIdx + 1) << 1;
      if ((sigIdx << 1) + 1 > idx) {
        kidx = 0;
        idx = 0;
      } else {
        kidx = sigIdx << 1;
      }

      idx -= kidx;
      for (i = 0; i < 5; i++) {
        for (i_0 = 0; i_0 < idx; i_0++) {
          THETA[(kidx + i_0) + 20 * i] = THETA_temp[idx * i + i_0];
        }
      }

      idx = (sigIdx + 1) << 1;
      if ((sigIdx << 1) + 1 > idx) {
        kidx = 0;
        idx = 0;
      } else {
        kidx = sigIdx << 1;
      }

      mpower_1Vv6hBEw(A, (real32_T)sigIdx + 1.0F, b_b);
      for (i = 0; i < 2; i++) {
        for (i_0 = 0; i_0 < 3; i_0++) {
          b3 = b_b[3 * i_0] * (real32_T)b_a_0[i];
          b3 += b_b[3 * i_0 + 1] * (real32_T)b_a_0[i + 2];
          b3 += b_b[3 * i_0 + 2] * 0.0F;
          f[i + (i_0 << 1)] = b3;
        }
      }

      idx -= kidx;
      for (i = 0; i < 3; i++) {
        for (i_0 = 0; i_0 < idx; i_0++) {
          PHI[(kidx + i_0) + 20 * i] = f[idx * i + i_0];
        }
      }
    }

    for (i = 0; i < 5; i++) {
      for (i_0 = 0; i_0 < 20; i_0++) {
        THETA_0[i + 5 * i_0] = 0.0;
        for (sigIdx = 0; sigIdx < 20; sigIdx++) {
          minV = THETA_0[5 * i_0 + i];
          minV += THETA[20 * i + sigIdx] * matrix_Q[20 * i_0 + sigIdx];
          THETA_0[i + 5 * i_0] = minV;
        }
      }

      for (i_0 = 0; i_0 < 5; i_0++) {
        minV = 0.0;
        for (sigIdx = 0; sigIdx < 20; sigIdx++) {
          minV += THETA_0[5 * sigIdx + i] * THETA[20 * i_0 + sigIdx];
        }

        THETA_1[i + 5 * i_0] = (real32_T)(matrix_R[5 * i_0 + i] + minV);
      }
    }

    for (i = 0; i < 5; i++) {
      for (i_0 = 0; i_0 < 5; i_0++) {
        H[i_0 + 6 * i] = THETA_1[5 * i + i_0] * 2.0F;
      }

      H[i + 30] = 0.0F;
    }

    for (i = 0; i < 6; i++) {
      H[6 * i + 5] = 2.0F * (real32_T)t_0[i];
      f[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      delta_umin = (real32_T)PHI[i] * kesi[0];
      delta_umin += (real32_T)PHI[i + 20] * kesi[1];
      delta_umin += (real32_T)PHI[i + 40] * kesi[2];
      PHI_0[i] = delta_umin;
    }

    for (i = 0; i < 20; i++) {
      tmp[i] = 0.0F;
      for (i_0 = 0; i_0 < 20; i_0++) {
        b3 = tmp[i];
        b3 += (real32_T)matrix_Q[20 * i + i_0] * (2.0F * PHI_0[i_0]);
        tmp[i] = b3;
      }
    }

    kidx = -1;
    for (sigIdx = 0; sigIdx < 5; sigIdx++) {
      b3 = 0.0F;
      for (i = 0; i < 20; i++) {
        b3 += (real32_T)THETA[20 * sigIdx + i] * tmp[i];
      }

      f[sigIdx] = b3;
      kidx++;
      Ut[kidx] = umin;
    }

    umin = -umax / 57.3F;
    umax /= 57.3F;
    delta_umin = -steer_cmd / 57.3F * delta_umax;
    delta_umax *= steer_cmd / 57.3F;
    kidx = -1;
    for (sigIdx = 0; sigIdx < 5; sigIdx++) {
      kidx++;
      Umin[kidx] = umin;
    }

    kidx = -1;
    for (sigIdx = 0; sigIdx < 5; sigIdx++) {
      kidx++;
      b_Umax[kidx] = umax;
    }

    kidx = -1;
    for (sigIdx = 0; sigIdx < 5; sigIdx++) {
      kidx++;
      delta_Umin[kidx] = delta_umin;
    }

    kidx = -1;
    for (sigIdx = 0; sigIdx < 5; sigIdx++) {
      kidx++;
      delta_Umax[kidx] = delta_umax;
    }

    for (i = 0; i < 6; i++) {
      for (i_0 = 0; i_0 < 6; i_0++) {
        H_0[i_0 + 6 * i] = (H[6 * i + i_0] + H[6 * i_0 + i]) / 2.0F;
      }
    }

    b_Umax_0[15] = 10.0F;
    for (i = 0; i < 5; i++) {
      delta_umax = Ut[i];
      b_Umax_0[i] = b_Umax[i] - delta_umax;
      b_Umax_0[i + 5] = -Umin[i] + delta_umax;
      b_Umax_0[i + 10] = delta_Umax[i];
      b_Umax_0[i + 16] = -delta_Umin[i];
    }

    b_Umax_0[21] = 10.0F;
    MPC_Solver_QPhild_CVFnlpm0(H_0, f, s, b_Umax_0, LCS_LATC_MatrixResult_deg);
    delta_umax = kesi[2] + LCS_LATC_MatrixResult_deg[0];
    steer_cmd = ref_delta + delta_umax;
    if (steer_cmd >= 0.0F) {
      steer_transmission_ratio = steer_feedbackward_temp;
    }

    ref_delta = ref_delta * 57.3F * steer_transmission_ratio;
    steer_feedbackward_temp = delta_umax * 57.3F * steer_transmission_ratio;
    steer_cmd = steer_cmd * 57.3F * steer_transmission_ratio;
    if (steer_limit < 1.0F) {
      steer_limit = atanf(u1 * 2.92F / (steer_limit * steer_limit)) * 57.3F *
        steer_transmission_ratio;
    } else {
      steer_limit = fminf((steer_limit * steer_limit / 552.25F + 1.0F) * 2.92F /
                          fmaxf(1.0F, steer_limit), 32767.0F) * u1 / steer_limit
        * 57.3F * steer_transmission_ratio;
    }

    delaytime = fminf(steer_angleK1 + delaytime, fmaxf(steer_angleK1 - delaytime,
      fminf(steer_limit, fmaxf(-steer_limit, steer_cmd)) + PsiDtAckRaw));
  } else {
    delta_umax = 0.0F;
    for (i = 0; i < 6; i++) {
      LCS_LATC_MatrixResult_deg[i] = 0.0F;
    }

    delaytime = LCS_LATC_CorrectSteerAngle_deg;
    steer_cmd = 0.0F;
    ref_delta = 0.0F;
    steer_feedbackward_temp = 0.0F;
    steer_limit = 0.0F;
  }

  LCS_LATC_SteerAngleCmd_deg = steer_cmd;
  LCS_LATC_Feedforward_deg = ref_delta;
  LCS_LATC_Feedback_deg = steer_feedbackward_temp;
  LCS_LATC_SteerAngleLimit_deg = steer_limit;
  LCS_LATC_TarAngle_deg = delaytime;
  PubIfControlLATC_MDL_B.U_k = delta_umax;

  /* End of MATLAB Function: '<S42>/TarSteerAngleCalc' */

  /* S-Function (sfix_udelay): '<S50>/Tapped Delay1' */
  PubIfControlLATC_MDL_B.TappedDelay1[0] = LCS_LATC_TarAngle_deg;

  /* MinMax: '<S50>/MinMax2' */
  delaytime = PubIfControlLATC_MDL_B.TappedDelay1[0];

  /* S-Function (sfix_udelay): '<S50>/Tapped Delay1' */
  PubIfControlLATC_MDL_B.TappedDelay1[1] =
    PubIfControlLATC_MDL_DW.TappedDelay1_X[0];

  /* MinMax: '<S50>/MinMax2' */
  delaytime = fminf(delaytime, PubIfControlLATC_MDL_B.TappedDelay1[1]);

  /* S-Function (sfix_udelay): '<S50>/Tapped Delay1' */
  PubIfControlLATC_MDL_B.TappedDelay1[2] =
    PubIfControlLATC_MDL_DW.TappedDelay1_X[1];

  /* MinMax: '<S50>/MinMax2' */
  delaytime = fminf(delaytime, PubIfControlLATC_MDL_B.TappedDelay1[2]);

  /* S-Function (sfix_udelay): '<S50>/Tapped Delay1' */
  PubIfControlLATC_MDL_B.TappedDelay1[3] =
    PubIfControlLATC_MDL_DW.TappedDelay1_X[2];

  /* MinMax: '<S50>/MinMax2' */
  delaytime = fminf(delaytime, PubIfControlLATC_MDL_B.TappedDelay1[3]);

  /* S-Function (sfix_udelay): '<S50>/Tapped Delay1' */
  PubIfControlLATC_MDL_B.TappedDelay1[4] =
    PubIfControlLATC_MDL_DW.TappedDelay1_X[3];

  /* MinMax: '<S50>/MinMax2' */
  delaytime = fminf(delaytime, PubIfControlLATC_MDL_B.TappedDelay1[4]);

  /* MinMax: '<S50>/MinMax2' */
  PubIfControlLATC_MDL_B.MinMax2 = delaytime;

  /* MinMax: '<S50>/Max of Elements1' */
  delaytime = PubIfControlLATC_MDL_B.TappedDelay1[0];
  delaytime = fmaxf(delaytime, PubIfControlLATC_MDL_B.TappedDelay1[1]);
  delaytime = fmaxf(delaytime, PubIfControlLATC_MDL_B.TappedDelay1[2]);
  delaytime = fmaxf(delaytime, PubIfControlLATC_MDL_B.TappedDelay1[3]);
  delaytime = fmaxf(delaytime, PubIfControlLATC_MDL_B.TappedDelay1[4]);

  /* MinMax: '<S50>/Max of Elements1' */
  PubIfControlLATC_MDL_B.MaxofElements1 = delaytime;

  /* Sum: '<S50>/Sum of Elements1' */
  delaytime = -0.0F;
  for (i = 0; i < 5; i++) {
    delaytime += PubIfControlLATC_MDL_B.TappedDelay1[i];
  }

  /* Sum: '<S50>/Sum of Elements1' */
  PubIfControlLATC_MDL_B.SumofElements1 = delaytime;

  /* Sum: '<S50>/Minus1' */
  PubIfControlLATC_MDL_B.Minus1 = (PubIfControlLATC_MDL_B.SumofElements1 -
    PubIfControlLATC_MDL_B.MinMax2) - PubIfControlLATC_MDL_B.MaxofElements1;

  /* Product: '<S50>/Divide1' incorporates:
   *  Constant: '<S50>/Constant11'
   */
  delaytime = (real32_T)P_LCS_LATC_TarAngleFliterWindowSize - 2.0F;

  /* Product: '<S50>/Divide1' */
  LCS_LATC_TarAngleFilter_deg = PubIfControlLATC_MDL_B.Minus1 / delaytime;

  /* SignalConversion: '<S42>/Signal Copy' */
  LCS_LATC_OutTrgSteerAngle = LCS_LATC_TarAngleFilter_deg;

  /* Sum: '<S15>/Add3' incorporates:
   *  Constant: '<S15>/Constant24'
   */
  PubIfControlLATC_MDL_B.Add3 = LCS_IN_SteerWheelAngleSign - 0.5;

  /* Gain: '<S15>/Gain1' */
  PubIfControlLATC_MDL_B.Gain1 = (-2.0) * PubIfControlLATC_MDL_B.Add3;

  /* Product: '<S15>/Product1' */
  PubIfControlLATC_MDL_B.Product1 = LCS_IN_SteerWheelAng *
    PubIfControlLATC_MDL_B.Gain1;

  /* Sum: '<S15>/Add2' */
  PubIfControlLATC_MDL_B.Add2 = LCS_LATC_OutTrgSteerAngle -
    PubIfControlLATC_MDL_B.Product1;

  /* Abs: '<S15>/Abs' */
  PubIfControlLATC_MDL_B.Abs = fabs(PubIfControlLATC_MDL_B.Add2);

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_j = (PubIfControlLATC_MDL_B.Abs >= 15.0);

  /* UnitDelay: '<S15>/Unit Delay1' */
  PubIfControlLATC_MDL_B.UnitDelay1_o =
    PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE_k;

  /* UnitDelay: '<S15>/Unit Delay2' */
  PubIfControlLATC_MDL_B.UnitDelay2_o =
    PubIfControlLATC_MDL_DW.UnitDelay2_DSTATE_l;

  /* Logic: '<S15>/Logical Operator2' */
  PubIfControlLATC_MDL_B.LogicalOperator2 = (PubIfControlLATC_MDL_B.Compare_j &&
    PubIfControlLATC_MDL_B.UnitDelay1_o && PubIfControlLATC_MDL_B.UnitDelay2_o);

  /* UnitDelay: '<S15>/Unit Delay4' */
  PubIfControlLATC_MDL_B.UnitDelay4_d =
    PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_o;

  /* MATLAB Function: '<S15>/MATLAB Function1' */
  sigIdx = PubIfControlLATC_MDL_B.UnitDelay4_d;
  qY = sigIdx - 1U;
  if (qY > (uint32_T)sigIdx) {
    qY = 0U;
  }

  i = (int32_T)qY;
  count = (uint8_T)i;
  if (PubIfControlLATC_MDL_B.LogicalOperator2) {
    count = MAX_uint8_T;
  }

  LCS_EPSFault = (uint8_T)(count <= 1);
  PubIfControlLATC_MDL_B.count = count;

  /* End of MATLAB Function: '<S15>/MATLAB Function1' */

  /* Memory: '<S45>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2_ap =
    PubIfControlLATC_MDL_DW.Memory2_PreviousInput_g;

  /* Product: '<S45>/Product4' incorporates:
   *  Constant: '<S42>/Constant6'
   *  Constant: '<S45>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4_oh = 0.02F / P_LCS_LCC_LaterErrRateTime_s;

  /* Sum: '<S45>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4_cc = 0.0F - PubIfControlLATC_MDL_B.Memory2_ap;

  /* Product: '<S45>/Product1' */
  PubIfControlLATC_MDL_B.Product1_l2 = PubIfControlLATC_MDL_B.Product4_oh *
    PubIfControlLATC_MDL_B.Sum4_cc;

  /* Sum: '<S45>/Sum5' */
  PubIfControlLATC_MDL_B.Sum5_e = PubIfControlLATC_MDL_B.Product1_l2 +
    PubIfControlLATC_MDL_B.Memory2_ap;

  /* Memory: '<S47>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2_k =
    PubIfControlLATC_MDL_DW.Memory2_PreviousInput_a;

  /* Product: '<S47>/Product4' incorporates:
   *  Constant: '<S42>/Constant8'
   *  Constant: '<S47>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4_b = 0.02F / P_LCS_LCC_HeadingErRrateTime_s;

  /* Sum: '<S47>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4_e = 0.0F - PubIfControlLATC_MDL_B.Memory2_k;

  /* Product: '<S47>/Product1' */
  PubIfControlLATC_MDL_B.Product1_me = PubIfControlLATC_MDL_B.Product4_b *
    PubIfControlLATC_MDL_B.Sum4_e;

  /* Sum: '<S47>/Sum5' */
  PubIfControlLATC_MDL_B.Sum5_a = PubIfControlLATC_MDL_B.Product1_me +
    PubIfControlLATC_MDL_B.Memory2_k;

  /* Constant: '<S42>/Constant3' */
  PubIfControlLATC_MDL_B.Constant3 = P_LCS_LATC_MPCDeltaT_s;

  /* SignalConversion: '<S4>/Signal Copy3' */
  LCS_IN_kapTraj = *rtu_kapTraj;

  /* SignalConversion: '<S4>/Signal Copy1' */
  LCS_IN_axvRefMs2 = *rtu_axvRefMs2;

  /* SignalConversion: '<S4>/Signal Conversion12' */
  LCS_IN_desLaneA3 = rtu_VSM_LAT_CTRL->TarLineC3;

  /* SignalConversion: '<S4>/Signal Conversion14' */
  LCS_IN_desLaneA1 = rtu_VSM_LAT_CTRL->TarLineC1;

  /* SignalConversion: '<S4>/Signal Copy7' */
  LCS_IN_desLaneA0 = rtu_VSM_LAT_CTRL->TarLineC0;

  /* Product: '<S65>/Product4' incorporates:
   *  Constant: '<S64>/Constant20'
   *  Constant: '<S65>/Weight//N3'
   */
  PubIfControlLATC_MDL_B.Product4_od = 0.02F / P_LCS_PLAN_A2FliterTime_s;

  /* MATLAB Function: '<S64>/MATLAB Function' incorporates:
   *  Constant: '<S64>/Constant13'
   */
  PubIfControlLATC_MDL_B.PreCurve = 6.0F * LCS_IN_desLaneA3 * (LCS_IN_vxvRefMs *
    P_LCS_Plan_A2Pretime_s) + 2.0F * LCS_IN_desLaneA2;

  /* Abs: '<S64>/Abs4' */
  PubIfControlLATC_MDL_B.Abs4 = fabsf(PubIfControlLATC_MDL_B.PreCurve);

  /* Memory: '<S65>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2_o =
    PubIfControlLATC_MDL_DW.Memory2_PreviousInput_f;

  /* Sum: '<S65>/Sum4' */
  PubIfControlLATC_MDL_B.Sum4_e1 = PubIfControlLATC_MDL_B.Abs4 -
    PubIfControlLATC_MDL_B.Memory2_o;

  /* Product: '<S65>/Product1' */
  PubIfControlLATC_MDL_B.Product1_pf = PubIfControlLATC_MDL_B.Product4_od *
    PubIfControlLATC_MDL_B.Sum4_e1;

  /* Sum: '<S65>/Sum5' */
  LCS_PreDisCurve_m = PubIfControlLATC_MDL_B.Product1_pf +
    PubIfControlLATC_MDL_B.Memory2_o;

  /* Lookup_n-D: '<S64>/Line_Plan_ayLimit11' incorporates:
   *  Sum: '<S41>/Sum'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.Line_Plan_ayLimit11 = look2_iflf_binlcapw
    (LCS_PreDisCurve_m, LCS_IN_Spd_Kph, P_LCS_PLAN_PreDisCurve_TabX_m,
     P_LCS_PLAN_VehicleSpd_TabY_Kph, P_LCS_PLAN_LCKAyDtLimit_Tab_ms3,
     rtCP_Line_Plan_ayLimit11_maxIndex, 13U);

  /* Lookup_n-D: '<S64>/Line_Plan_ayLimit19' incorporates:
   *  Sum: '<S41>/Sum'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.Line_Plan_ayLimit19 = look2_iflf_binlcapw
    (LCS_PreDisCurve_m, LCS_IN_Spd_Kph, P_LCS_PLAN_PreDisCurve_TabX_m,
     P_LCS_PLAN_VehicleSpd_TabY_Kph, P_LCS_Plan_LCKIEAyDtLimit_Tab_ms3,
     rtCP_Line_Plan_ayLimit19_maxIndex, 13U);

  /* Lookup_n-D: '<S64>/Line_Plan_ayLimit10' incorporates:
   *  Sum: '<S41>/Sum'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.Line_Plan_ayLimit10 = look2_iflf_binlcapw
    (LCS_PreDisCurve_m, LCS_IN_Spd_Kph, P_LCS_PLAN_PreDisCurve_TabX_m,
     P_LCS_PLAN_VehicleSpd_TabY_Kph, P_LCS_Plan_LCNomalAyDtLimit_Tab_ms3,
     rtCP_Line_Plan_ayLimit10_maxIndex, 13U);

  /* Lookup_n-D: '<S64>/Line_Plan_ayLimit12' incorporates:
   *  Sum: '<S41>/Sum'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.Line_Plan_ayLimit12 = look2_iflf_binlcapw
    (LCS_PreDisCurve_m, LCS_IN_Spd_Kph, P_LCS_PLAN_PreDisCurve_TabX_m,
     P_LCS_PLAN_VehicleSpd_TabY_Kph, P_LCS_Plan_LKAAyDtLimit_Tab_ms3,
     rtCP_Line_Plan_ayLimit12_maxIndex, 13U);

  /* Lookup_n-D: '<S64>/Line_Plan_ayLimit13' incorporates:
   *  Sum: '<S41>/Sum'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.Line_Plan_ayLimit13 = look2_iflf_binlcapw
    (LCS_PreDisCurve_m, LCS_IN_Spd_Kph, P_LCS_PLAN_PreDisCurve_TabX_m,
     P_LCS_PLAN_VehicleSpd_TabY_Kph, P_LCS_Plan_ELKAyDtLimit_Tab_ms3,
     rtCP_Line_Plan_ayLimit13_maxIndex, 13U);

  /* Lookup_n-D: '<S64>/Line_Plan_ayLimit14' incorporates:
   *  Sum: '<S41>/Sum'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.Line_Plan_ayLimit14 = look2_iflf_binlcapw
    (LCS_PreDisCurve_m, LCS_IN_Spd_Kph, P_LCS_PLAN_PreDisCurve_TabX_m,
     P_LCS_PLAN_VehicleSpd_TabY_Kph, rtCP_Line_Plan_ayLimit14_tableData,
     rtCP_Line_Plan_ayLimit14_maxIndex, 13U);

  /* Lookup_n-D: '<S64>/Line_Plan_ayLimit15' incorporates:
   *  Sum: '<S41>/Sum'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.Line_Plan_ayLimit15 = look2_iflf_binlcapw
    (LCS_PreDisCurve_m, LCS_IN_Spd_Kph, P_LCS_PLAN_PreDisCurve_TabX_m,
     P_LCS_PLAN_VehicleSpd_TabY_Kph, rtCP_Line_Plan_ayLimit15_tableData,
     rtCP_Line_Plan_ayLimit15_maxIndex, 13U);

  /* Lookup_n-D: '<S64>/Line_Plan_ayLimit16' incorporates:
   *  Sum: '<S41>/Sum'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.Line_Plan_ayLimit16 = look2_iflf_binlcapw
    (LCS_PreDisCurve_m, LCS_IN_Spd_Kph, P_LCS_PLAN_PreDisCurve_TabX_m,
     P_LCS_PLAN_VehicleSpd_TabY_Kph, P_LCS_Plan_LCSportAyDtLimit_Tab_ms3,
     rtCP_Line_Plan_ayLimit16_maxIndex, 13U);

  /* Lookup_n-D: '<S64>/Line_Plan_ayLimit17' incorporates:
   *  Sum: '<S41>/Sum'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.Line_Plan_ayLimit17 = look2_iflf_binlcapw
    (LCS_PreDisCurve_m, LCS_IN_Spd_Kph, P_LCS_PLAN_PreDisCurve_TabX_m,
     P_LCS_PLAN_VehicleSpd_TabY_Kph, P_LCS_Plan_LCAyDtLimit_Tab_ms3,
     rtCP_Line_Plan_ayLimit17_maxIndex, 13U);

  /* MultiPortSwitch: '<S64>/Multiport Switch3' */
  switch (LCS_IN_TarDangerlLevel_Delay2Frame) {
   case 0:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' incorporates:
     *  Constant: '<S64>/Constant10'
     */
    LCS_Plan_AyDtlimit = 3.0F;
    break;

   case 1:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' */
    LCS_Plan_AyDtlimit = PubIfControlLATC_MDL_B.Line_Plan_ayLimit11;
    break;

   case 2:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' */
    LCS_Plan_AyDtlimit = PubIfControlLATC_MDL_B.Line_Plan_ayLimit19;
    break;

   case 3:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' */
    LCS_Plan_AyDtlimit = PubIfControlLATC_MDL_B.Line_Plan_ayLimit10;
    break;

   case 4:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' */
    LCS_Plan_AyDtlimit = PubIfControlLATC_MDL_B.Line_Plan_ayLimit12;
    break;

   case 5:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' */
    LCS_Plan_AyDtlimit = PubIfControlLATC_MDL_B.Line_Plan_ayLimit13;
    break;

   case 6:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' */
    LCS_Plan_AyDtlimit = PubIfControlLATC_MDL_B.Line_Plan_ayLimit14;
    break;

   case 7:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' */
    LCS_Plan_AyDtlimit = PubIfControlLATC_MDL_B.Line_Plan_ayLimit15;
    break;

   case 8:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' */
    LCS_Plan_AyDtlimit = PubIfControlLATC_MDL_B.Line_Plan_ayLimit16;
    break;

   case 9:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' */
    LCS_Plan_AyDtlimit = PubIfControlLATC_MDL_B.Line_Plan_ayLimit17;
    break;

   default:
    /* MultiPortSwitch: '<S64>/Multiport Switch3' incorporates:
     *  Constant: '<S64>/Constant11'
     */
    LCS_Plan_AyDtlimit = 3.0F;
    break;
  }

  /* End of MultiPortSwitch: '<S64>/Multiport Switch3' */

  /* DataTypeConversion: '<S64>/Data Type Conversion' */
  PubIfControlLATC_MDL_B.DataTypeConversion_m =
    LCS_IN_TarDangerlLevel_Delay2Frame;

  /* Abs: '<S64>/Abs1' */
  PubIfControlLATC_MDL_B.Abs1 = fabsf(LCS_IN_desLaneA0);

  /* Lookup_n-D: '<S64>/LC//LKA//ELK_PreDis' incorporates:
   *  Abs: '<S64>/Abs1'
   *  DataTypeConversion: '<S64>/Data Type Conversion'
   */
  PubIfControlLATC_MDL_B.LCLKAELK_PreDis = look2_iflf_binlcapw
    (PubIfControlLATC_MDL_B.DataTypeConversion_m, PubIfControlLATC_MDL_B.Abs1,
     P_LCS_PLAN_TarDangerlLevel_Tabx_st, P_LCS_PLAN_DesLineA0_TabY_m,
     P_LCS_PLAN_LCPreDisFac_ratio, rtCP_LCLKAELK_PreDis_maxIndex, 3U);

  /* UnitDelay: '<S64>/Unit Delay5' */
  PubIfControlLATC_MDL_B.UnitDelay5_c =
    PubIfControlLATC_MDL_DW.UnitDelay5_DSTATE_p;

  /* UnitDelay: '<S64>/Unit Delay4' */
  PubIfControlLATC_MDL_B.UnitDelay4_p =
    PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_c;

  /* UnitDelay: '<S64>/Unit Delay3' */
  PubIfControlLATC_MDL_B.UnitDelay3_f =
    PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE_e;

  /* MATLAB Function: '<S64>/MATLAB Function3' incorporates:
   *  Constant: '<S64>/Constant1'
   */
  qY = PubIfControlLATC_MDL_B.UnitDelay3_f + 1U;
  if (qY > 65535U) {
    qY = 65535U;
  }

  u0 = (uint16_T)qY;
  u1_0 = P_LCS_PLAN_StateHoldTime_st;
  if (u0 < u1_0) {
    u1_0 = u0;
  }

  if (u1_0 == P_LCS_PLAN_StateHoldTime_st) {
    PubIfControlLATC_MDL_B.FLg = 0U;
  } else {
    PubIfControlLATC_MDL_B.FLg = PubIfControlLATC_MDL_B.UnitDelay4_p;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 1) &&
      (PubIfControlLATC_MDL_B.UnitDelay5_c == 0)) {
    u1_0 = 0U;
    PubIfControlLATC_MDL_B.FLg = 1U;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 3) &&
      ((PubIfControlLATC_MDL_B.UnitDelay5_c == 1) ||
       (PubIfControlLATC_MDL_B.UnitDelay5_c == 2))) {
    u1_0 = 0U;
    PubIfControlLATC_MDL_B.FLg = 2U;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 7) &&
      ((PubIfControlLATC_MDL_B.UnitDelay5_c == 1) ||
       (PubIfControlLATC_MDL_B.UnitDelay5_c == 2))) {
    u1_0 = 0U;
    PubIfControlLATC_MDL_B.FLg = 3U;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 8) &&
      ((PubIfControlLATC_MDL_B.UnitDelay5_c == 1) ||
       (PubIfControlLATC_MDL_B.UnitDelay5_c == 2))) {
    u1_0 = 0U;
    PubIfControlLATC_MDL_B.FLg = 4U;
  }

  if ((LCS_IN_TarDangerlLevel_Delay2Frame == 6) &&
      ((PubIfControlLATC_MDL_B.UnitDelay5_c == 1) ||
       (PubIfControlLATC_MDL_B.UnitDelay5_c == 2))) {
    u1_0 = 0U;
    PubIfControlLATC_MDL_B.FLg = 5U;
  }

  if (((LCS_IN_TarDangerlLevel_Delay2Frame == 1) ||
       (LCS_IN_TarDangerlLevel_Delay2Frame == 2)) &&
      (PubIfControlLATC_MDL_B.UnitDelay5_c == 3)) {
    u1_0 = 0U;
    PubIfControlLATC_MDL_B.FLg = 6U;
  }

  if (((LCS_IN_TarDangerlLevel_Delay2Frame == 1) ||
       (LCS_IN_TarDangerlLevel_Delay2Frame == 2)) &&
      (PubIfControlLATC_MDL_B.UnitDelay5_c == 7)) {
    u1_0 = 0U;
    PubIfControlLATC_MDL_B.FLg = 7U;
  }

  if (((LCS_IN_TarDangerlLevel_Delay2Frame == 1) ||
       (LCS_IN_TarDangerlLevel_Delay2Frame == 2)) &&
      (PubIfControlLATC_MDL_B.UnitDelay5_c == 8)) {
    u1_0 = 0U;
    PubIfControlLATC_MDL_B.FLg = 8U;
  }

  PubIfControlLATC_MDL_B.Cnt = u1_0;

  /* End of MATLAB Function: '<S64>/MATLAB Function3' */

  /* Product: '<S64>/Product1' incorporates:
   *  Constant: '<S64>/Constant2'
   */
  PubIfControlLATC_MDL_B.Product1_m = 0.02 * (real_T)PubIfControlLATC_MDL_B.Cnt;

  /* SwitchCase: '<S68>/Switch Case2' */
  switch (PubIfControlLATC_MDL_B.FLg) {
   case 6:
   case 7:
   case 8:
    /* Outputs for IfAction SubSystem: '<S68>/Switch Case Action Subsystem5' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    /* Merge: '<S68>/Merge2' incorporates:
     *  Lookup_n-D: '<S74>/LC_start_slope'
     *  Product: '<S64>/Product1'
     */
    PubIfControlLATC_MDL_B.Merge2 = look2_iu8dtf_binlcapw
      (PubIfControlLATC_MDL_B.FLg, PubIfControlLATC_MDL_B.Product1_m,
       P_LCS_PLAN_StateCompleteFlg_TabX_st,
       P_LCS_PLAN_StateActiveHoldTime_TabY_s,
       P_LCS_PLAN_LCCompletePreDisFac_Tab_ratio, rtCP_LC_start_slope_maxIndex_p,
       3U);

    /* End of Outputs for SubSystem: '<S68>/Switch Case Action Subsystem5' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S68>/Switch Case Action Subsystem4' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    /* Merge: '<S68>/Merge2' incorporates:
     *  Constant: '<S73>/Constant'
     *  SignalConversion generated from: '<S73>/Out1'
     */
    PubIfControlLATC_MDL_B.Merge2 = 1.0F;

    /* End of Outputs for SubSystem: '<S68>/Switch Case Action Subsystem4' */
    break;
  }

  /* End of SwitchCase: '<S68>/Switch Case2' */

  /* Lookup_n-D: '<S64>/Line_Plan_preDis' */
  PubIfControlLATC_MDL_B.Line_Plan_preDis = look1_iflf_binlcapw(0.0F,
    rtCP_Line_Plan_preDis_bp01Data, P_LCS_PLAN_PreDis_Tab_m, 15U);

  /* Lookup_n-D: '<S64>/PreDis_Fac' incorporates:
   *  Abs: '<S64>/Abs'
   *  Sum: '<S65>/Sum5'
   */
  PubIfControlLATC_MDL_B.LCS_Plan_PreDisCurveFac_ratio = look2_iflf_binlcapw
    (PubIfControlLATC_MDL_ConstB.Abs, LCS_PreDisCurve_m,
     P_LCS_PLAN_DesLineA0_TabX_m, rtCP_PreDis_Fac_bp02Data,
     P_LCS_PlLAN_PreDisFac_Tab_ratio, rtCP_PreDis_Fac_maxIndex, 7U);

  /* Product: '<S64>/Product11' */
  LCS_Plan_FinalpreDis = PubIfControlLATC_MDL_B.LCLKAELK_PreDis *
    PubIfControlLATC_MDL_B.Merge2 * PubIfControlLATC_MDL_B.Line_Plan_preDis *
    PubIfControlLATC_MDL_B.LCS_Plan_PreDisCurveFac_ratio;

  /* MATLAB Function: '<S62>/CartesianTrajectory' incorporates:
   *  Constant: '<S62>/Constant10'
   *  Constant: '<S62>/Constant2'
   */
  steer_limit = LCS_IN_vxvRefMs;
  u1 = LCS_IN_kapTraj;
  ref_delta = LCS_IN_axvRefMs2;
  steer_feedbackward_temp = LCS_IN_desLaneA3;
  steer_transmission_ratio = LCS_IN_desLaneA2;
  delta_umax = LCS_IN_desLaneA1;
  steer_cmd = LCS_IN_desLaneA0;
  umin = LCS_Plan_AyDtlimit;
  umax = LCS_Plan_FinalpreDis;
  delta_umin = P_LCS_PLAN_DisFac_Tab_ratio;
  Min_PlanDis = P_LCS_PLAN_MinDis_m;
  if (LCS_IN_desLaneValid) {
    for (i = 0; i < 21; i++) {
      Px[i] = b[i];
      TarEgoV[i] = LCS_IN_vxvRefMs;
    }

    if (LCS_IN_vxvRefMs > 1.0F) {
      for (i = 0; i < 21; i++) {
        Px[i] = LCS_IN_vxvRefMs * b[i];
      }
    }

    for (kidx = 0; kidx < 21; kidx++) {
      delaytime = Px[kidx];
      PsiDtAckRaw = rt_powf_snf(delaytime, 3.0F);
      steer_angleK1 = delaytime * delaytime;
      PsiDtAckRaw = ((LCS_IN_desLaneA3 * PsiDtAckRaw + LCS_IN_desLaneA2 *
                      steer_angleK1) + LCS_IN_desLaneA1 * delaytime) +
        LCS_IN_desLaneA0;
      Py[kidx] = PsiDtAckRaw;
    }

    for (i = 0; i < 11; i++) {
      LCS_PLAN_TrajectoryX[i] = 0.0F;
    }

    for (i = 0; i < 11; i++) {
      LCS_PLAN_Trajectory_PlanY[i] = 0.0F;
    }

    for (i = 0; i < 11; i++) {
      PubIfControlLATC_MDL_B.Ay[i] = 0.0F;
    }

    for (i = 0; i < 11; i++) {
      LCS_LATC_PlanAyDt[i] = 0.0F;
    }

    count = 0U;
    steer_angleK1 = 0.0F;
    delaytime = 0.0F;
    PsiDtAckRaw = 0.0F;
    sigIdx = 0;
    idx = 0;
    exitg1 = false;
    while ((!exitg1) && (idx < 21)) {
      sigIdx = idx;
      PsiDtAckRaw = sqrtf(Px[idx] * Px[idx] + Py[idx] * Py[idx]) * 1.05F / fmaxf
        (1.0F, (TarEgoV[idx] + steer_limit) * 0.5F);
      b3 = rt_powf_snf(PsiDtAckRaw, 5.0F);
      b2 = rt_powf_snf(PsiDtAckRaw, 4.0F);
      t = rt_powf_snf(PsiDtAckRaw, 3.0F);
      kP = rt_powf_snf(PsiDtAckRaw, 4.0F);
      Arcf = rt_powf_snf(PsiDtAckRaw, 3.0F);
      tmp_0 = rt_powf_snf(PsiDtAckRaw, 3.0F);
      for (i = 0; i < 6; i++) {
        H[6 * i] = c[i];
        H[6 * i + 1] = d[i];
        H[6 * i + 2] = e[i];
      }

      H[3] = b3;
      H[9] = b2;
      H[15] = t;
      H[21] = PsiDtAckRaw * PsiDtAckRaw;
      H[27] = PsiDtAckRaw;
      H[33] = 1.0F;
      H[4] = 5.0F * kP;
      H[10] = 4.0F * Arcf;
      H[16] = PsiDtAckRaw * PsiDtAckRaw * 3.0F;
      H[22] = 2.0F * PsiDtAckRaw;
      H[28] = 1.0F;
      H[34] = 0.0F;
      H[5] = 20.0F * tmp_0;
      H[11] = PsiDtAckRaw * PsiDtAckRaw * 12.0F;
      H[17] = 6.0F * PsiDtAckRaw;
      H[23] = 2.0F;
      H[29] = 0.0F;
      H[35] = 0.0F;
      kP = (3.0F * steer_feedbackward_temp * (Px[idx] * Px[idx]) + 2.0F *
            steer_transmission_ratio * Px[idx]) + delta_umax;
      Arcf = (6.0F * steer_feedbackward_temp * Px[idx] + 2.0F *
              steer_transmission_ratio) * (steer_limit * steer_limit);
      b3 = fmaxf(steer_limit, 1.0F);
      b2 = sqrtf(kP * kP + 1.0F);
      t = sqrtf(kP * kP + 1.0F);
      A_0[0] = 0.0F;
      A_0[1] = b3;
      A_0[2] = ref_delta;
      A_0[3] = Px[idx];
      A_0[4] = TarEgoV[idx] / b2;
      A_0[5] = Arcf * kP / t;
      mldivide_vBmGKDRi(H, A_0);
      b3 = sqrtf(kP * kP + 1.0F);
      b2 = sqrtf(kP * kP + 1.0F);
      B[0] = 0.0F;
      B[1] = 0.0F;
      B[2] = steer_limit * steer_limit * u1;
      B[3] = Py[idx];
      B[4] = TarEgoV[idx] * kP / b3;
      B[5] = Arcf / b2;
      mldivide_vBmGKDRi(H, B);
      kP = B[0];
      Arcf = B[1];
      b3 = B[2];
      b2 = B[3];
      preLineValid = true;
      kidx = 0;
      i = 0;
      exitg2 = false;
      while ((!exitg2) && (i < 11)) {
        kidx = i;
        t = (((real32_T)i + 1.0F) - 1.0F) * PsiDtAckRaw / 10.0F;
        LCS_PLAN_TrajectoryX[i] = ((((A_0[0] * rt_powf_snf(t, 5.0F) + A_0[1] *
          rt_powf_snf(t, 4.0F)) + A_0[2] * rt_powf_snf(t, 3.0F)) + t * t * A_0[3])
          + A_0[4] * t) + A_0[5];
        LCS_PLAN_Trajectory_PlanY[i] = ((((kP * rt_powf_snf(t, 5.0F) + Arcf *
          rt_powf_snf(t, 4.0F)) + b3 * rt_powf_snf(t, 3.0F)) + t * t * b2) + B[4]
          * t) + B[5];
        PubIfControlLATC_MDL_B.Ay[i] = ((20.0F * kP * rt_powf_snf(t, 3.0F) +
          12.0F * Arcf * (t * t)) + 6.0F * b3 * t) + 2.0F * b2;
        LCS_LATC_PlanAyDt[i] = (60.0F * kP * (t * t) + 24.0F * Arcf * t) + 6.0F *
          b3;
        if (fabsf(LCS_LATC_PlanAyDt[i]) > umin) {
          count = 1U;
          steer_angleK1 = fabsf(PubIfControlLATC_MDL_B.Ay[i]);
          delaytime = fabsf(LCS_LATC_PlanAyDt[i]);
          preLineValid = false;
          exitg2 = true;
        } else {
          i++;
        }
      }

      if ((sqrtf(LCS_PLAN_TrajectoryX[10] * LCS_PLAN_TrajectoryX[10] +
                 LCS_PLAN_Trajectory_PlanY[10] * LCS_PLAN_Trajectory_PlanY[10]) <
           Min_PlanDis) || (sqrtf(LCS_PLAN_TrajectoryX[10] *
            LCS_PLAN_TrajectoryX[10] + LCS_PLAN_Trajectory_PlanY[10] *
            LCS_PLAN_Trajectory_PlanY[10]) * delta_umin < umax + 2.1F)) {
        preLineValid = false;
      }

      if (preLineValid) {
        count = 3U;
        for (idx = 0; idx < 11; idx++) {
          c_z1[idx] = fabsf(PubIfControlLATC_MDL_B.Ay[idx]);
        }

        if (!rtIsNaNF(c_z1[0])) {
          idx = 1;
        } else {
          idx = 0;
          i = 2;
          exitg2 = false;
          while ((!exitg2) && (i < 12)) {
            if (!rtIsNaNF(c_z1[i - 1])) {
              idx = i;
              exitg2 = true;
            } else {
              i++;
            }
          }
        }

        if (idx == 0) {
          steer_angleK1 = c_z1[0];
        } else {
          steer_angleK1 = c_z1[idx - 1];
          while (idx + 1 < 12) {
            if (steer_angleK1 < c_z1[idx]) {
              steer_angleK1 = c_z1[idx];
            }

            idx++;
          }
        }

        delaytime = fabsf(LCS_LATC_PlanAyDt[kidx]);
        exitg1 = true;
      } else {
        if (idx + 1 == 21) {
          PsiDtAckRaw = Px[20];
          for (i = 0; i < 11; i++) {
            LCS_PLAN_TrajectoryX[i] = 4.0F * (real32_T)i;
          }

          for (kidx = 0; kidx < 11; kidx++) {
            LCS_PLAN_Trajectory_PlanY[kidx] = rt_powf_snf((((real32_T)kidx +
              1.0F) - 1.0F) * 4.0F, 3.0F);
          }

          for (kidx = 0; kidx < 11; kidx++) {
            i = kidx << 2;
            c_z1[kidx] = (real32_T)(i * i);
          }

          for (i = 0; i < 11; i++) {
            LCS_PLAN_Trajectory_PlanY[i] = ((steer_feedbackward_temp *
              LCS_PLAN_Trajectory_PlanY[i] + steer_transmission_ratio * c_z1[i])
              + 4.0F * (real32_T)i * delta_umax) + steer_cmd;
          }

          count = 4U;
          steer_angleK1 = 0.0F;
          delaytime = 0.0F;
        }

        idx++;
      }
    }

    preLineValid = true;
    steer_limit = LCS_PLAN_TrajectoryX[10];
  } else {
    preLineValid = false;
    PsiDtAckRaw = 0.0F;
    for (i = 0; i < 11; i++) {
      LCS_PLAN_TrajectoryX[i] = 0.0F;
    }

    for (i = 0; i < 11; i++) {
      LCS_PLAN_Trajectory_PlanY[i] = 0.0F;
    }

    sigIdx = -1;
    steer_limit = 0.0F;
    for (i = 0; i < 11; i++) {
      PubIfControlLATC_MDL_B.Ay[i] = 0.0F;
    }

    for (i = 0; i < 11; i++) {
      LCS_LATC_PlanAyDt[i] = 0.0F;
    }

    count = 0U;
    steer_angleK1 = 0.0F;
    delaytime = 0.0F;
  }

  PubIfControlLATC_MDL_B.planValid = preLineValid;
  LCS_LATC_PlanT = PsiDtAckRaw;
  LCS_PLAN_Trajectory_NumTraj = (real_T)sigIdx + 1.0;
  LCS_LATC_PlanLength = steer_limit;
  PubIfControlLATC_MDL_B.break_Flg = count;
  PubIfControlLATC_MDL_B.break_AyValue = steer_angleK1;
  PubIfControlLATC_MDL_B.break_AyDtValue = delaytime;

  /* End of MATLAB Function: '<S62>/CartesianTrajectory' */

  /* SwitchCase: '<S68>/Switch Case' */
  switch (PubIfControlLATC_MDL_B.FLg) {
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
    /* Outputs for IfAction SubSystem: '<S68>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S69>/Action Port'
     */
    /* Merge: '<S68>/Merge' incorporates:
     *  Lookup_n-D: '<S69>/LC_start_slope'
     */
    PubIfControlLATC_MDL_B.Merge = look2_iu8dtf_binlcapw
      (PubIfControlLATC_MDL_B.FLg, 0.0, P_LCS_PLAN_StateActiveFlg_TabX_st,
       P_LCS_PLAN_StateActiveHoldTime_TabY_s,
       P_LCS_PLAN_StateActivAngleSlope_Tab_ratio, rtCP_LC_start_slope_maxIndex_c,
       5U);

    /* End of Outputs for SubSystem: '<S68>/Switch Case Action Subsystem' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S68>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S70>/Action Port'
     */
    PubIfControlLATC_MDL_SwitchCaseActionSubsystem1
      (&PubIfControlLATC_MDL_B.Merge);

    /* End of Outputs for SubSystem: '<S68>/Switch Case Action Subsystem1' */
    break;
  }

  /* End of SwitchCase: '<S68>/Switch Case' */

  /* SwitchCase: '<S68>/Switch Case1' */
  switch (PubIfControlLATC_MDL_B.FLg) {
   case 6:
   case 7:
   case 8:
    /* Outputs for IfAction SubSystem: '<S68>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */
    /* Merge: '<S68>/Merge1' incorporates:
     *  Lookup_n-D: '<S71>/LC_start_slope'
     */
    PubIfControlLATC_MDL_B.Merge1 = look2_iu8dtf_binlcapw
      (PubIfControlLATC_MDL_B.FLg, 0.0, P_LCS_PLAN_StateCompleteFlg_TabX_st,
       P_LCS_PLAN_StateActiveHoldTime_TabY_s,
       P_LCS_PLAN_StateCompleteAngleSlope_Tab_ratio,
       rtCP_LC_start_slope_maxIndex_e, 3U);

    /* End of Outputs for SubSystem: '<S68>/Switch Case Action Subsystem2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S68>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    /* Merge: '<S68>/Merge1' incorporates:
     *  Constant: '<S72>/Constant'
     *  SignalConversion generated from: '<S72>/Out1'
     */
    PubIfControlLATC_MDL_B.Merge1 = 0.3F;

    /* End of Outputs for SubSystem: '<S68>/Switch Case Action Subsystem3' */
    break;
  }

  /* End of SwitchCase: '<S68>/Switch Case1' */

  /* SignalConversion: '<S17>/Signal Copy6' */
  LCS_IN_TarDangerlLevel = rtu_VSM_LAT_CTRL->TarDangerLevel;

  /* Sum: '<S39>/Add1' */
  LCS_CurSteerAngle_deg = LCS_IN_CurSteerAngle_deg - LCS_IN_SteerAngOffset_deg;

  /* Bias: '<S39>/Bias2' */
  PubIfControlLATC_MDL_B.Bias2 = LCS_IN_SteerWheelSpdSign + (-0.5F);

  /* Gain: '<S39>/Gain2' */
  PubIfControlLATC_MDL_B.Gain2 = (-2.0F) * PubIfControlLATC_MDL_B.Bias2;

  /* Product: '<S39>/Product4' */
  LCS_IN_SteerAngleSpd_degs = LCS_IN_SteerWheelSpd *
    PubIfControlLATC_MDL_B.Gain2;

  /* Abs: '<S40>/Abs1' */
  PubIfControlLATC_MDL_B.Abs1_o = fabsf(LCS_IN_desLaneA0);

  /* MinMax: '<S40>/MinMax' incorporates:
   *  Constant: '<S40>/Constant6'
   */
  delaytime = fmaxf(LCS_IN_CurrentLaneWidth, 3.0F);

  /* MinMax: '<S40>/MinMax' */
  PubIfControlLATC_MDL_B.MinMax = delaytime;

  /* MinMax: '<S40>/MinMax1' incorporates:
   *  Constant: '<S40>/Constant7'
   */
  delaytime = fminf(PubIfControlLATC_MDL_B.MinMax, 4.0F);

  /* MinMax: '<S40>/MinMax1' */
  PubIfControlLATC_MDL_B.MinMax1 = delaytime;

  /* Product: '<S40>/Divide' incorporates:
   *  Constant: '<S40>/Constant4'
   */
  LCS_EqA0 = PubIfControlLATC_MDL_B.Abs1_o * PubIfControlLATC_MDL_B.MinMax1 /
    3.6F;

  /* Abs: '<S38>/Abs4' */
  PubIfControlLATC_MDL_B.Abs4_b = fabsf(LCS_IN_EPS_DrvInpTrqVal);

  /* UnitDelay: '<S82>/Unit Delay' */
  PubIfControlLATC_MDL_B.UnitDelay_i =
    PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_o;

  /* Sum: '<S82>/Add' incorporates:
   *  Constant: '<S82>/Constant'
   */
  PubIfControlLATC_MDL_B.Add_g = PubIfControlLATC_MDL_B.UnitDelay_i + 0.02;

  /* Memory: '<S80>/Memory2' */
  PubIfControlLATC_MDL_B.Memory2_c =
    PubIfControlLATC_MDL_DW.Memory2_PreviousInput_p;

  /* DataTypeConversion: '<S80>/Data Type Conversion' */
  PubIfControlLATC_MDL_B.DataTypeConversion_j = PubIfControlLATC_MDL_B.Memory2_c;

  /* Product: '<S80>/Product5' */
  PubIfControlLATC_MDL_B.Product5 = PubIfControlLATC_MDL_B.DataTypeConversion_j *
    PubIfControlLATC_MDL_ConstB.Add1;

  /* Product: '<S80>/Product3' */
  PubIfControlLATC_MDL_B.Product3 = PubIfControlLATC_MDL_ConstB.Product2 *
    PubIfControlLATC_MDL_B.Abs4_b;

  /* Sum: '<S80>/Sum1' */
  PubIfControlLATC_MDL_B.Sum1 = PubIfControlLATC_MDL_B.Product5 +
    PubIfControlLATC_MDL_B.Product3;

  /* Switch: '<S80>/Switch1' incorporates:
   *  Constant: '<S38>/Constant13'
   */
  if (true) {
    /* Switch: '<S80>/Switch1' */
    PubIfControlLATC_MDL_B.Switch1 = PubIfControlLATC_MDL_B.Sum1;
  } else {
    /* Switch: '<S80>/Switch1' */
    PubIfControlLATC_MDL_B.Switch1 = PubIfControlLATC_MDL_B.Abs4_b;
  }

  /* End of Switch: '<S80>/Switch1' */

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_na = (PubIfControlLATC_MDL_B.Switch1 >
    P_LCS_DetOverRide_DrvTrq_TH);

  /* Switch: '<S82>/Switch' */
  if (PubIfControlLATC_MDL_B.Compare_na) {
    /* Switch: '<S82>/Switch' */
    PubIfControlLATC_MDL_B.Switch_o = PubIfControlLATC_MDL_B.Add_g;
  } else {
    /* Switch: '<S82>/Switch' incorporates:
     *  Constant: '<S82>/Constant1'
     */
    PubIfControlLATC_MDL_B.Switch_o = 0.0;
  }

  /* End of Switch: '<S82>/Switch' */

  /* MinMax: '<S82>/Max' incorporates:
   *  Constant: '<S82>/Constant2'
   */
  minV = fmin(PubIfControlLATC_MDL_B.Switch_o, 10.0);

  /* MinMax: '<S82>/Max' */
  PubIfControlLATC_MDL_B.Max_n = minV;

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_e = (PubIfControlLATC_MDL_B.Max_n >
    P_LCS_OverRideTime_TH_s);

  /* UnitDelay: '<S81>/Unit Delay' */
  PubIfControlLATC_MDL_B.UnitDelay_c =
    PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_m;

  /* Sum: '<S81>/Add' incorporates:
   *  Constant: '<S81>/Constant'
   */
  PubIfControlLATC_MDL_B.Add_b = PubIfControlLATC_MDL_B.UnitDelay_c + 0.02;

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_k = (PubIfControlLATC_MDL_B.Switch1 <=
    P_LCS_DetNoOverRide_DrvTrq_TH);

  /* Switch: '<S81>/Switch' */
  if (PubIfControlLATC_MDL_B.Compare_k) {
    /* Switch: '<S81>/Switch' */
    PubIfControlLATC_MDL_B.Switch_k = PubIfControlLATC_MDL_B.Add_b;
  } else {
    /* Switch: '<S81>/Switch' incorporates:
     *  Constant: '<S81>/Constant1'
     */
    PubIfControlLATC_MDL_B.Switch_k = 0.0;
  }

  /* End of Switch: '<S81>/Switch' */

  /* MinMax: '<S81>/Max' incorporates:
   *  Constant: '<S81>/Constant2'
   */
  minV = fmin(PubIfControlLATC_MDL_B.Switch_k, 10.0);

  /* MinMax: '<S81>/Max' */
  PubIfControlLATC_MDL_B.Max_e4 = minV;

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  PubIfControlLATC_MDL_B.Compare_iv = (PubIfControlLATC_MDL_B.Max_e4 >
    P_LCS_NoOverRideTime_TH_s);

  /* Chart: '<S38>/Chart' */
  if (PubIfControlLATC_MDL_DW.is_active_c4_PubIfControlLATC_MDL == 0U) {
    PubIfControlLATC_MDL_DW.is_active_c4_PubIfControlLATC_MDL = 1U;
    PubIfControlLATC_MDL_DW.is_c4_PubIfControlLATC_MDL =
      PubIfControlLATC_MDL_IN_NoOverRide;
    LCS_OverRideDetect_b = false;
  } else if (PubIfControlLATC_MDL_DW.is_c4_PubIfControlLATC_MDL == 1) {
    LCS_OverRideDetect_b = true;
    if (PubIfControlLATC_MDL_B.Compare_iv) {
      PubIfControlLATC_MDL_DW.is_c4_PubIfControlLATC_MDL =
        PubIfControlLATC_MDL_IN_NoOverRide;
      LCS_OverRideDetect_b = false;
    }
  } else {
    /* case IN_NoOverRide: */
    LCS_OverRideDetect_b = false;
    if (PubIfControlLATC_MDL_B.Compare_e) {
      PubIfControlLATC_MDL_DW.is_c4_PubIfControlLATC_MDL =
        PubIfControlLATC_MDL_IN_IsOverRide;
      LCS_OverRideDetect_b = true;
    }
  }

  /* End of Chart: '<S38>/Chart' */

  /* Logic: '<S38>/Logical Operator1' incorporates:
   *  Constant: '<S38>/Constant15'
   */
  PubIfControlLATC_MDL_B.LogicalOperator1 = ((P_LCS_OverRideDetect_b != 0.0) &&
    LCS_OverRideDetect_b);

  /* Logic: '<S4>/Logical Operator' */
  PubIfControlLATC_MDL_B.LogicalOperator = (PubIfControlLATC_MDL_B.Compare_l &&
    PubIfControlLATC_MDL_B.Compare_d4);

  /* Logic: '<S4>/OR2' */
  PubIfControlLATC_MDL_B.OR2 = (PubIfControlLATC_MDL_B.Compare_i5 ||
    PubIfControlLATC_MDL_B.Compare_o);

  /* Product: '<S4>/Product11' */
  PubIfControlLATC_MDL_B.LCS_EPS_LKATorqOvrlDlvd = LCS_IN_EPS_LKATorqOvrlDlvd *
    LCS_IN_EPS_LKATorqOvrlDlvdVld;

  /* Switch: '<S4>/Switch' */
  if (LCS_EPSFault != 0) {
    /* Switch: '<S4>/Switch' */
    PubIfControlLATC_MDL_B.Switch_aq = PubIfControlLATC_MDL_B.Switch_h;
  } else {
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/Constant'
     */
    PubIfControlLATC_MDL_B.Switch_aq = ((uint8_T)0U);
  }

  /* End of Switch: '<S4>/Switch' */

  /* Switch: '<S4>/Switch2' */
  if (PubIfControlLATC_MDL_B.LogicalOperator) {
    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S4>/Constant3'
     */
    LCS_OUT_AngCmdReqValVld = ((uint8_T)2U);
  } else {
    /* Switch: '<S4>/Switch2' */
    LCS_OUT_AngCmdReqValVld = PubIfControlLATC_MDL_B.Switch_aq;
  }

  /* End of Switch: '<S4>/Switch2' */

  /* Switch: '<S4>/Switch4' */
  if (PubIfControlLATC_MDL_B.Compare_n) {
    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S4>/Constant20'
     */
    PubIfControlLATC_MDL_B.Switch4 = true;
  } else {
    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S4>/Constant21'
     */
    PubIfControlLATC_MDL_B.Switch4 = false;
  }

  /* End of Switch: '<S4>/Switch4' */

  /* Switch: '<S4>/Switch8' */
  if (PubIfControlLATC_MDL_B.OR2) {
    /* Switch: '<S4>/Switch8' incorporates:
     *  Constant: '<S4>/Constant4'
     */
    PubIfControlLATC_MDL_B.Switch8 = false;
  } else {
    /* Switch: '<S4>/Switch8' */
    PubIfControlLATC_MDL_B.Switch8 = rtu_VSM_LAT_CTRL->TarLineValid;
  }

  /* End of Switch: '<S4>/Switch8' */

  /* SignalConversion: '<S4>/Signal Copy2' */
  LCS_IN_ayvRefMs2 = *rtu_ayvRefMs2;

  /* SignalConversion: '<S4>/Signal Copy4' */
  LCS_IN_alpSideSlipAngle = *rtu_alpSideSlipAngle;

  /* Switch: '<S2>/Switch1' incorporates:
   *  Constant: '<S17>/Constant30'
   *  Constant: '<S17>/Constant31'
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant5'
   *  Switch: '<S2>/Switch2'
   *  Switch: '<S2>/Switch3'
   *  Switch: '<S2>/Switch4'
   */
  if (LCS_Trq_Switch != 0) {
    *rty_LATC_IFCAngCmdReqValue = 0.0F;
    *rty_IFCTrqOvlCmdReqValue = 0.0F;
    *rty_IFCFuncTrqCmdReqFlag = ((uint8_T)0U);
    *rty_LATC_IFCFuncAngCmdReqFlag = ((uint8_T)0U);
  } else {
    *rty_LATC_IFCAngCmdReqValue = LCS_LATC_OutTrgSteerAngle;
    *rty_IFCTrqOvlCmdReqValue = 0.0F;
    *rty_IFCFuncTrqCmdReqFlag = ((uint8_T)0U);
    *rty_LATC_IFCFuncAngCmdReqFlag = LCS_OUT_AngCmdReqValVld;
  }

  /* End of Switch: '<S2>/Switch1' */

  /* UnitDelay: '<S3>/Output' */
  LCS_Counter = PubIfControlLATC_MDL_DW.Output_DSTATE;

  /* Sum: '<S5>/FixPt Sum1' incorporates:
   *  Constant: '<S5>/FixPt Constant'
   */
  PubIfControlLATC_MDL_B.FixPtSum1 = (uint8_T)((uint32_T)LCS_Counter + ((uint8_T)
    1U));

  /* Switch: '<S6>/FixPt Switch' */
  if (PubIfControlLATC_MDL_B.FixPtSum1 > ((uint8_T)15U)) {
    /* Switch: '<S6>/FixPt Switch' incorporates:
     *  Constant: '<S6>/Constant'
     */
    PubIfControlLATC_MDL_B.FixPtSwitch = ((uint8_T)0U);
  } else {
    /* Switch: '<S6>/FixPt Switch' */
    PubIfControlLATC_MDL_B.FixPtSwitch = PubIfControlLATC_MDL_B.FixPtSum1;
  }

  /* End of Switch: '<S6>/FixPt Switch' */
}

/* Update for referenced model: 'PubIfControlLATC_MDL' */
void PubIfControlLATC_MDL_Update(void)
{
  /* Update for UnitDelay: '<S32>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE = PubIfControlLATC_MDL_B.Max;

  /* Update for UnitDelay: '<S33>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_j = PubIfControlLATC_MDL_B.Max_i;

  /* Update for UnitDelay: '<S16>/Unit Delay1' */
  PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE = LCS_LATC_OutTrgSteerAngle;

  /* Update for UnitDelay: '<S34>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_n = PubIfControlLATC_MDL_B.Max_e;

  /* Update for Memory: '<S30>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput =
    LCS_ESS_SteerWheelAngleSpdFilter;

  /* Update for UnitDelay: '<S16>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_k = PubIfControlLATC_MDL_B.UnitDelay1;

  /* Update for Memory: '<S29>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_m = LCS_ESS_TarAngleSpdFilter;

  /* Update for UnitDelay: '<S31>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_m = LCS_ESS_NotActiveDelayFlg;

  /* Update for UnitDelay: '<S31>/Unit Delay3' */
  PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE = PubIfControlLATC_MDL_B.delaytime;

  /* Update for UnitDelay: '<S31>/Unit Delay2' */
  PubIfControlLATC_MDL_DW.UnitDelay2_DSTATE = PubIfControlLATC_MDL_B.flg;

  /* Update for Memory: '<S43>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_j = PubIfControlLATC_MDL_B.Sum5;

  /* Update for Memory: '<S48>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_h =
    PubIfControlLATC_MDL_B.Sum5_m;

  /* Update for Memory: '<S44>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_k =
    PubIfControlLATC_MDL_B.Sum5_d;

  /* Update for Memory: '<S46>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_e =
    PubIfControlLATC_MDL_B.Sum5_dw;

  /* Update for Delay: '<S17>/Delay' */
  PubIfControlLATC_MDL_DW.Delay_DSTATE[0] =
    PubIfControlLATC_MDL_DW.Delay_DSTATE[1];
  PubIfControlLATC_MDL_DW.Delay_DSTATE[1] = LCS_IN_TarDangerlLevel;

  /* Update for UnitDelay: '<S51>/Unit Delay5' */
  PubIfControlLATC_MDL_DW.UnitDelay5_DSTATE = LCS_IN_TarDangerlLevel_Delay2Frame;

  /* Update for UnitDelay: '<S51>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE = LCS_LATC_AngleSlopeFlg_st;

  /* Update for UnitDelay: '<S51>/Unit Delay3' */
  PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE_k = PubIfControlLATC_MDL_B.Cnt_o;

  /* Update for Memory: '<S53>/Memory52' */
  PubIfControlLATC_MDL_DW.Memory52_PreviousInput =
    PubIfControlLATC_MDL_B.PsiDtAck;

  /* Update for UnitDelay: '<S60>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_c = PubIfControlLATC_MDL_B.Sum5_g;

  /* Update for Enabled SubSystem: '<S53>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S59>/Enable'
   */
  if (LCS_OffSetUpdate_Flg) {
    /* Update for UnitDelay: '<S59>/Unit Delay' */
    PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_m1 =
      LCS_LATC_CurrentSteerAngleOffset_deg;
  }

  /* End of Update for SubSystem: '<S53>/Enabled Subsystem' */

  /* Update for UnitDelay: '<S42>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_i = LCS_LATC_TarAngle_deg;

  /* Update for UnitDelay: '<S42>/Unit Delay1' */
  PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE_b = PubIfControlLATC_MDL_B.U_k;

  /* Update for S-Function (sfix_udelay): '<S50>/Tapped Delay1' */
  PubIfControlLATC_MDL_DW.TappedDelay1_X[3] =
    PubIfControlLATC_MDL_DW.TappedDelay1_X[2];
  PubIfControlLATC_MDL_DW.TappedDelay1_X[2] =
    PubIfControlLATC_MDL_DW.TappedDelay1_X[1];
  PubIfControlLATC_MDL_DW.TappedDelay1_X[1] =
    PubIfControlLATC_MDL_DW.TappedDelay1_X[0];
  PubIfControlLATC_MDL_DW.TappedDelay1_X[0] = LCS_LATC_TarAngle_deg;

  /* Update for UnitDelay: '<S15>/Unit Delay1' */
  PubIfControlLATC_MDL_DW.UnitDelay1_DSTATE_k = PubIfControlLATC_MDL_B.Compare_j;

  /* Update for UnitDelay: '<S15>/Unit Delay2' */
  PubIfControlLATC_MDL_DW.UnitDelay2_DSTATE_l =
    PubIfControlLATC_MDL_B.UnitDelay1_o;

  /* Update for UnitDelay: '<S15>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_o = PubIfControlLATC_MDL_B.count;

  /* Update for Memory: '<S45>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_g =
    PubIfControlLATC_MDL_B.Sum5_e;

  /* Update for Memory: '<S47>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_a =
    PubIfControlLATC_MDL_B.Sum5_a;

  /* Update for Memory: '<S65>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_f = LCS_PreDisCurve_m;

  /* Update for UnitDelay: '<S64>/Unit Delay5' */
  PubIfControlLATC_MDL_DW.UnitDelay5_DSTATE_p =
    LCS_IN_TarDangerlLevel_Delay2Frame;

  /* Update for UnitDelay: '<S64>/Unit Delay4' */
  PubIfControlLATC_MDL_DW.UnitDelay4_DSTATE_c = PubIfControlLATC_MDL_B.FLg;

  /* Update for UnitDelay: '<S64>/Unit Delay3' */
  PubIfControlLATC_MDL_DW.UnitDelay3_DSTATE_e = PubIfControlLATC_MDL_B.Cnt;

  /* Update for UnitDelay: '<S82>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_o = PubIfControlLATC_MDL_B.Max_n;

  /* Update for Memory: '<S80>/Memory2' */
  PubIfControlLATC_MDL_DW.Memory2_PreviousInput_p =
    PubIfControlLATC_MDL_B.Switch1;

  /* Update for UnitDelay: '<S81>/Unit Delay' */
  PubIfControlLATC_MDL_DW.UnitDelay_DSTATE_m = PubIfControlLATC_MDL_B.Max_e4;

  /* Update for UnitDelay: '<S3>/Output' */
  PubIfControlLATC_MDL_DW.Output_DSTATE = PubIfControlLATC_MDL_B.FixPtSwitch;
}

/* Model initialize function */
void PubIfControlLATC_MDL_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_PubIfControlLATC_MDL_T *const PubIfControlLATC_MDL_M =
    &(PubIfControlLATC_MDL_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)PubIfControlLATC_MDL_M, 0,
                sizeof(RT_MODEL_PubIfControlLATC_MDL_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(PubIfControlLATC_MDL_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &PubIfControlLATC_MDL_B), 0,
                sizeof(B_PubIfControlLATC_MDL_c_T));

  {
    PubIfControlLATC_MDL_B.LATC_SW_VERSION = 3826051620U;
  }

  /* exported global signals */
  LCS_LATC_HoldTime_s = 0.0;
  LCS_PLAN_Trajectory_NumTraj = 0.0;
  LCS_IN_EPS_DrvInpTrqVal = 0.0F;
  LCS_IN_SteerWheelSpd = 0.0F;
  LCS_ESS_SteerWheelAngleSpd = 0.0F;
  LCS_ESS_SteerWheelAngleSpdFilter = 0.0F;
  LCS_ESS_TarAngleSpd = 0.0F;
  LCS_ESS_TarAngleSpdFilter = 0.0F;
  LCS_IN_vxvRefMs = 0.0F;
  LCS_IN_SteerWheelSpdSign = 0.0F;
  LCS_IN_SteerWheelAngleSign = 0.0F;
  LCS_IN_SteerWheelAng = 0.0F;
  LCS_IN_CurrentLaneWidth = 0.0F;
  LCS_IN_EPS_LKATorqOvrlDlvd = 0.0F;
  LCS_IN_EPS_LKATorqOvrlDlvdVld = 0.0F;
  LCS_IN_CurSteerAngle_deg = 0.0F;
  LCS_IN_SteerAngOffset_deg = 0.0F;
  LCS_LATC_CorrectSteerAngle_deg = 0.0F;
  LCS_IN_Spd_Kph = 0.0F;
  LCS_LATC_MaxAy_ms2 = 0.0F;
  LCS_LATC_StateActAngleSlope_degs = 0.0F;
  LCS_LATC_StateAngleSlope_degs = 0.0F;
  LCS_IN_psiDtOpt = 0.0F;
  LCS_IN_desLaneA2 = 0.0F;
  LCS_LATC_TarAngleFilter_deg = 0.0F;
  LCS_LATC_OutTrgSteerAngle = 0.0F;
  LCS_IN_kapTraj = 0.0F;
  LCS_IN_axvRefMs2 = 0.0F;
  LCS_IN_desLaneA3 = 0.0F;
  LCS_IN_desLaneA1 = 0.0F;
  LCS_IN_desLaneA0 = 0.0F;
  LCS_PreDisCurve_m = 0.0F;
  LCS_Plan_AyDtlimit = 0.0F;
  LCS_Plan_FinalpreDis = 0.0F;
  LCS_CurSteerAngle_deg = 0.0F;
  LCS_IN_SteerAngleSpd_degs = 0.0F;
  LCS_EqA0 = 0.0F;
  LCS_IN_ayvRefMs2 = 0.0F;
  LCS_IN_alpSideSlipAngle = 0.0F;

  {
    int32_T i;
    for (i = 0; i < 11; i++) {
      LCS_PLAN_TrajectoryX[i] = 0.0F;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 11; i++) {
      LCS_PLAN_Trajectory_PlanY[i] = 0.0F;
    }
  }

  LCS_LATC_PlanT = 0.0F;
  LCS_LATC_PlanLength = 0.0F;

  {
    int32_T i;
    for (i = 0; i < 11; i++) {
      LCS_LATC_PlanAyDt[i] = 0.0F;
    }
  }

  LCS_LATC_CurrentSteerAngleOffset_deg = 0.0F;
  LCS_LATC_SteerAngleCmd_deg = 0.0F;
  LCS_LATC_Feedforward_deg = 0.0F;
  LCS_LATC_Feedback_deg = 0.0F;
  LCS_LATC_SteerAngleLimit_deg = 0.0F;

  {
    int32_T i;
    for (i = 0; i < 6; i++) {
      LCS_LATC_MatrixResult_deg[i] = 0.0F;
    }
  }

  LCS_LATC_TarAngle_deg = 0.0F;
  LCS_LATC_MPCDeltaT_s = 0.0F;
  LCS_Trq_Switch = 0U;
  LCS_IN_EPS_FailSts = 0U;
  LCS_IN_EPS_LKATrqOvlDlvdSts = 0U;
  LCS_IN_TarDangerlLevel_Delay2Frame = 0U;
  LCS_IN_TarDangerlLevel = 0U;
  LCS_OUT_AngCmdReqValVld = 0U;
  LCS_Counter = 0U;
  LCS_LATC_AngleSlopeFlg_st = 0U;
  LCS_EPSFault = 0U;
  LCS_ESS_NotActiveFlg1 = false;
  LCS_ESS_NotActiveFlg2 = false;
  LCS_ESS_NotActiveFlg3 = false;
  LCS_ESS_NotActiveFlgOriginal = false;
  LCS_ESS_NotActiveFlg = false;
  LCS_IN_desLaneValid = false;
  LCS_OffSetUpdate_Flg = false;
  LCS_OverRideDetect_b = false;
  LCS_ESS_NotActiveDelayFlg = false;

  /* states (dwork) */
  (void) memset((void *)&PubIfControlLATC_MDL_DW, 0,
                sizeof(DW_PubIfControlLATC_MDL_f_T));
}
