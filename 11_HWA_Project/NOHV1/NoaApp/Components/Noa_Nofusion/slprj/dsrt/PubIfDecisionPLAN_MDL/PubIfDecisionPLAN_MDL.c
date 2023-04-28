/*
 * Code generation for system model 'PubIfDecisionPLAN_MDL'
 *
 * Model                      : PubIfDecisionPLAN_MDL
 * Model version              : 1.99
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:00 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "PubIfDecisionPLAN_MDL.h"
#include "PubIfDecisionPLAN_MDL_private.h"
#include "LookUp_real32_T_real32_T.h"
#include "Interpol_Un9SFRZd.h"
#include "Interpol_zjiXKfGp.h"
#include "NumMin_uz5e5ZqN.h"
#include "ifWhileCond_5kpBgavU.h"
#include "intrp1d_fu32fga_pw.h"
#include "intrp2d_fu32fl_pw.h"
#include "local_ismember_ubQD6XDC.h"
#include "look1_binlcpw.h"
#include "look1_iflf_binlcapw.h"
#include "look1_iflf_binlcpw.h"
#include "look1_iflf_binlxpw.h"
#include "look2_iflf_binlcpw.h"
#include "look2_iu8fbfflftf_binlcpw.h"
#include "mldivide_eM7gRv4h.h"
#include "mod_1AYEMF5H.h"
#include "plook_u32ff_binc.h"
#include "plook_u32ff_evenca.h"
#include "plook_u32u8ff_binc.h"
#include "rt_powf_snf.h"
#include "valueMax_xItBCuOH.h"
#include "valueMin_cV8T4AKr.h"
#include "xzgetrf_qoSwvruO.h"

/* Named constants for Chart: '<S341>/SigHold1' */
#define PubIfDecisionPLAN_MDL_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define PubIfDecisionPLAN_MDL_IN_cross ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_hold  ((uint8_T)2U)
#define PubIfDecisionPLAN_MDL_IN_ture  ((uint8_T)3U)

/* Named constants for Chart: '<S47>/AccelSupression' */
#define PubIfDecisionPLAN_MDL_IN_AutoLaneChange ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_NoAutoLaneChange ((uint8_T)2U)

/* Named constants for Chart: '<S155>/DriveOff_Judge' */
#define PubIfDecisionPLAN_MDL_IN_DriveOff_DisEnough ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_DriveOff_Follow ((uint8_T)2U)
#define PubIfDecisionPLAN_MDL_IN_DriveOff_Judge_TargetExist ((uint8_T)3U)
#define PubIfDecisionPLAN_MDL_IN_Initialize ((uint8_T)4U)

/* Named constants for Chart: '<S156>/Chart' */
#define PubIfDecisionPLAN_MDL_IN_TorCtrlOff ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_TorCtrlOn ((uint8_T)2U)
#define PubIfDecisionPLAN_MDL_IN_TorCtrlOnCounter ((uint8_T)3U)

/* Named constants for Chart: '<S4>/ALC_DECS' */
#define PubIfDecisionPLAN_MDL_IN_ALC_OFF ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_ALC_ON ((uint8_T)2U)
#define PubIfDecisionPLAN_MDL_IN_LeLC  ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_RiLC  ((uint8_T)2U)
#define PubIfDecisionPLAN_MDL_IN_WaitLC ((uint8_T)3U)

/* Named constants for Chart: '<S182>/ALCHMISM' */
#define PubIfDecisionPLAN_MDL_IN_CC    ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_Lc    ((uint8_T)2U)

/* Named constants for Chart: '<S183>/SigValueHold1' */
#define PubIfDecisionPLAN_MDL_IN_Hold  ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_Through ((uint8_T)2U)

/* Named constants for Chart: '<S184>/Chart' */
#define PubIfDecisionPLAN_MDL_IN_LeLc  ((uint8_T)2U)
#define PubIfDecisionPLAN_MDL_IN_LeLc1 ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_LeLc2 ((uint8_T)2U)
#define PubIfDecisionPLAN_MDL_IN_RiLc  ((uint8_T)3U)
#define PubIfDecisionPLAN_MDL_IN_RiLc1 ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_RiLc2 ((uint8_T)2U)

/* Named constants for Chart: '<S337>/Chart' */
#define PubIfDecisionPLAN_MDL_IN_off   ((uint8_T)1U)
#define PubIfDecisionPLAN_MDL_IN_on    ((uint8_T)2U)

/* Named constants for Chart: '<S189>/ALCHMISM' */
#define PubIfDecisionPLAN_MDL_IN_Left  ((uint8_T)2U)
#define PubIfDecisionPLAN_MDL_IN_Right ((uint8_T)3U)

const PLAN_ALC_DECS_BUS PubIfDecisionPLAN_MDL_rtZPLAN_ALC_DECS_BUS = {
  0U,                                  /* PLAN_ALC_sts */
  0U,                                  /* PLAN_ALC_LcDecsLe */
  0U,                                  /* PLAN_ALC_LcDecsRi */
  0U,                                  /* PLAN_ALC_TurnLightReq */
  0U,                                  /* PLAN_ALC_stsReason */
  0U,                                  /* PLAN_ALC_LcReason */
  0U,                                  /* PLAN_ALC_LcFeReason */
  0U,                                  /* PLAN_ALC_LcCancelReason */
  0U                                   /* PLAN_ALC_DangerObjIndex */
} ;                                    /* PLAN_ALC_DECS_BUS ground */

/* Exported block signals */
boolean_T PLAN_ALC_LcOverTkLe_ALCSwtOn;/* '<S319>/Compare' */
boolean_T PLAN_ALC_LcOverTkRi_ALCSwtOn;/* '<S327>/Compare' */
MdlrefDW_PubIfDecisionPLAN_MDL_T PubIfDecisionPLAN_MDL_MdlrefDW;

/* Block signals (default storage) */
B_PubIfDecisionPLAN_MDL_c_T PubIfDecisionPLAN_MDL_B;

/* Block states (default storage) */
DW_PubIfDecisionPLAN_MDL_f_T PubIfDecisionPLAN_MDL_DW;

/* Forward declaration for local functions */
static real32_T PubIfDecisionPLAN_MDL_minimum(const real32_T x[10]);

/*
 * Output and update for action system:
 *    '<S39>/If Action Subsystem'
 *    '<S285>/If Action Subsystem'
 *    '<S304>/If Action Subsystem'
 *    '<S342>/If Action Subsystem'
 *    '<S343>/If Action Subsystem'
 *    '<S431>/If Action Subsystem'
 *    '<S432>/If Action Subsystem'
 *    '<S440>/If Action Subsystem'
 *    '<S441>/If Action Subsystem'
 *    '<S450>/If Action Subsystem'
 *    ...
 */
void PubIfDecisionPLAN_MDL_IfActionSubsystem(uint16_T rtu_In1, uint16_T
  *rty_Out1, B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T *localB)
{
  uint16_T u0;
  uint16_T u1;

  /* Sum: '<S40>/Add' incorporates:
   *  Constant: '<S40>/Constant'
   */
  localB->Add = (uint16_T)((uint32_T)rtu_In1 + ((uint16_T)1U));

  /* Saturate: '<S40>/Saturation' */
  u0 = localB->Add;
  u1 = ((uint16_T)60000U);
  if (u0 < u1) {
    u1 = u0;
  }

  *rty_Out1 = u1;

  /* End of Saturate: '<S40>/Saturation' */
}

/*
 * Output and update for action system:
 *    '<S39>/If Action Subsystem1'
 *    '<S285>/If Action Subsystem1'
 *    '<S304>/If Action Subsystem1'
 *    '<S342>/If Action Subsystem1'
 *    '<S343>/If Action Subsystem1'
 *    '<S431>/If Action Subsystem1'
 *    '<S432>/If Action Subsystem1'
 *    '<S440>/If Action Subsystem1'
 *    '<S441>/If Action Subsystem1'
 *    '<S450>/If Action Subsystem1'
 *    ...
 */
void PubIfDecisionPLAN_MDL_IfActionSubsystem1(uint16_T *rty_Out1)
{
  /* SignalConversion generated from: '<S41>/Out1' incorporates:
   *  Constant: '<S41>/Constant'
   */
  *rty_Out1 = ((uint16_T)0U);
}

/* Output and update for Simulink Function: '<S225>/Simulink Function' */
void PubIfDecisionPLAN_MDL_PointPre(real32_T rtu_mPointX, real32_T rtu_mPointY,
  real32_T rtu_kapTraj, real32_T rtu_mpsTrajSpd, real32_T rtu_sPreTime, real32_T
  *rty_mPrePointX, real32_T *rty_mPrePointY)
{
  real32_T tmp;

  /* SignalConversion generated from: '<S227>/u2' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu2Outport1_a = rtu_kapTraj;

  /* SignalConversion generated from: '<S227>/u3' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu3Outport1 = rtu_mpsTrajSpd;

  /* SignalConversion generated from: '<S227>/u4' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu4Outport1_c = rtu_sPreTime;

  /* SignalConversion generated from: '<S227>/u' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtuOutport1_n = rtu_mPointX;

  /* SignalConversion generated from: '<S227>/u1' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu1Outport1_g = rtu_mPointY;

  /* If: '<S227>/If' */
  if (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu2Outport1_a == 0.0F) {
    /* Outputs for IfAction SubSystem: '<S227>/Subsystem1' incorporates:
     *  ActionPort: '<S231>/Action Port'
     */
    /* Product: '<S231>/Product' */
    PubIfDecisionPLAN_MDL_B.PreVehDx_b =
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu3Outport1 *
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu4Outport1_c;

    /* Merge generated from: '<S227>/Merge' incorporates:
     *  Sum: '<S231>/Add2'
     */
    PubIfDecisionPLAN_MDL_B.mPrePointX = PubIfDecisionPLAN_MDL_B.PreVehDx_b +
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtuOutport1_n;

    /* Merge generated from: '<S227>/Merge' incorporates:
     *  Inport: '<S231>/mPointY'
     */
    PubIfDecisionPLAN_MDL_B.mPrePointY =
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu1Outport1_g;

    /* End of Outputs for SubSystem: '<S227>/Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S227>/Subsystem' incorporates:
     *  ActionPort: '<S230>/Action Port'
     */
    /* Math: '<S230>/Math Function'
     *
     * About '<S230>/Math Function':
     *  Operator: reciprocal
     */
    tmp = PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu2Outport1_a;

    /* Math: '<S230>/Math Function'
     *
     * About '<S230>/Math Function':
     *  Operator: reciprocal
     */
    PubIfDecisionPLAN_MDL_B.radius = 1.0F / tmp;

    /* Product: '<S230>/Product' */
    PubIfDecisionPLAN_MDL_B.preAngle =
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu2Outport1_a *
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu3Outport1 *
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu4Outport1_c;

    /* Trigonometry: '<S230>/Sin' */
    PubIfDecisionPLAN_MDL_B.Sin = sinf(PubIfDecisionPLAN_MDL_B.preAngle);

    /* Product: '<S230>/Product1' */
    PubIfDecisionPLAN_MDL_B.PreVehDx = PubIfDecisionPLAN_MDL_B.radius *
      PubIfDecisionPLAN_MDL_B.Sin;

    /* Trigonometry: '<S230>/Cos' */
    PubIfDecisionPLAN_MDL_B.Cos = cosf(PubIfDecisionPLAN_MDL_B.preAngle);

    /* Product: '<S230>/Product4' */
    PubIfDecisionPLAN_MDL_B.Product4 =
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtuOutport1_n *
      PubIfDecisionPLAN_MDL_B.Cos;

    /* Product: '<S230>/Product8' */
    PubIfDecisionPLAN_MDL_B.Product8 =
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu1Outport1_g *
      PubIfDecisionPLAN_MDL_B.Sin;

    /* Merge generated from: '<S227>/Merge' incorporates:
     *  Sum: '<S230>/Add2'
     */
    PubIfDecisionPLAN_MDL_B.mPrePointX = (PubIfDecisionPLAN_MDL_B.PreVehDx +
      PubIfDecisionPLAN_MDL_B.Product4) - PubIfDecisionPLAN_MDL_B.Product8;

    /* Product: '<S230>/Product7' */
    PubIfDecisionPLAN_MDL_B.Product7 = PubIfDecisionPLAN_MDL_B.radius *
      PubIfDecisionPLAN_MDL_B.Cos;

    /* Sum: '<S230>/Subtract' */
    PubIfDecisionPLAN_MDL_B.PreVehDy = PubIfDecisionPLAN_MDL_B.radius -
      PubIfDecisionPLAN_MDL_B.Product7;

    /* Product: '<S230>/Product9' */
    PubIfDecisionPLAN_MDL_B.Product9 =
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtuOutport1_n *
      PubIfDecisionPLAN_MDL_B.Sin;

    /* Product: '<S230>/Product10' */
    PubIfDecisionPLAN_MDL_B.Product10 =
      PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu1Outport1_g *
      PubIfDecisionPLAN_MDL_B.Cos;

    /* Merge generated from: '<S227>/Merge' incorporates:
     *  Sum: '<S230>/Add3'
     */
    PubIfDecisionPLAN_MDL_B.mPrePointY = (PubIfDecisionPLAN_MDL_B.PreVehDy +
      PubIfDecisionPLAN_MDL_B.Product9) + PubIfDecisionPLAN_MDL_B.Product10;

    /* End of Outputs for SubSystem: '<S227>/Subsystem' */
  }

  /* End of If: '<S227>/If' */

  /* SignalConversion generated from: '<S227>/y' */
  *rty_mPrePointX = PubIfDecisionPLAN_MDL_B.mPrePointX;

  /* SignalConversion generated from: '<S227>/y1' */
  *rty_mPrePointY = PubIfDecisionPLAN_MDL_B.mPrePointY;
}

/* Output and update for Simulink Function: '<S225>/Simulink Function1' */
void PubIfDecisionPLAN_MDL_FrenetCS(real32_T rtu_LaneC0, real32_T rtu_LaneC1,
  real32_T rtu_LaneC2, real32_T rtu_PointX, real32_T rtu_PointY, real32_T
  *rty_PointFrenetD)
{
  /* SignalConversion generated from: '<S228>/u5' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu5Outport1 = rtu_PointY;

  /* SignalConversion generated from: '<S228>/u4' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu4Outport1 = rtu_PointX;

  /* SignalConversion generated from: '<S228>/u1' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu1Outport1 = rtu_LaneC1;

  /* Product: '<S228>/Product' */
  PubIfDecisionPLAN_MDL_B.Product_gq =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu4Outport1 *
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu1Outport1;

  /* Math: '<S228>/Math Function' */
  PubIfDecisionPLAN_MDL_B.MathFunction =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu4Outport1 *
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu4Outport1;

  /* SignalConversion generated from: '<S228>/u2' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu2Outport1 = rtu_LaneC2;

  /* Product: '<S228>/Product1' */
  PubIfDecisionPLAN_MDL_B.Product1_c = PubIfDecisionPLAN_MDL_B.MathFunction *
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu2Outport1;

  /* SignalConversion generated from: '<S228>/u' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtuOutport1 = rtu_LaneC0;

  /* Sum: '<S228>/Add' */
  PubIfDecisionPLAN_MDL_B.Add_d = (PubIfDecisionPLAN_MDL_B.Product_gq +
    PubIfDecisionPLAN_MDL_B.Product1_c) +
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtuOutport1;

  /* Sum: '<S228>/Subtract1' */
  PubIfDecisionPLAN_MDL_B.Subtract1 =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu5Outport1 -
    PubIfDecisionPLAN_MDL_B.Add_d;

  /* Product: '<S228>/Product2' */
  PubIfDecisionPLAN_MDL_B.Product2_ej =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu2Outport1 *
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu4Outport1;

  /* Gain: '<S228>/Gain' */
  PubIfDecisionPLAN_MDL_B.Gain_f = 2.0F * PubIfDecisionPLAN_MDL_B.Product2_ej;

  /* Sum: '<S228>/Add1' */
  PubIfDecisionPLAN_MDL_B.Add1_gf =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtu1Outport1 +
    PubIfDecisionPLAN_MDL_B.Gain_f;

  /* Math: '<S228>/Math Function1' */
  PubIfDecisionPLAN_MDL_B.MathFunction1 = PubIfDecisionPLAN_MDL_B.Add1_gf *
    PubIfDecisionPLAN_MDL_B.Add1_gf;

  /* Sum: '<S228>/Add2' incorporates:
   *  Constant: '<S228>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Add2_f = PubIfDecisionPLAN_MDL_B.MathFunction1 + 1.0F;

  /* Sqrt: '<S228>/Sqrt' */
  PubIfDecisionPLAN_MDL_B.Sqrt = sqrtf(PubIfDecisionPLAN_MDL_B.Add2_f);

  /* Product: '<S228>/Divide' */
  PubIfDecisionPLAN_MDL_B.Divide_c = PubIfDecisionPLAN_MDL_B.Subtract1 /
    PubIfDecisionPLAN_MDL_B.Sqrt;

  /* SignalConversion generated from: '<S228>/y1' */
  *rty_PointFrenetD = PubIfDecisionPLAN_MDL_B.Divide_c;
}

/*
 * System initialize for atomic system:
 *    '<S341>/SigHold1'
 *    '<S341>/SigHold2'
 */
void PubIfDecisionPLAN_MDL_SigHold1_Init(DW_SigHold1_PubIfDecisionPLAN_MDL_T
  *localDW)
{
  localDW->is_active_c127_PubIfDecisionPLAN_MDL = 0U;
  localDW->is_c127_PubIfDecisionPLAN_MDL =
    PubIfDecisionPLAN_MDL_IN_NO_ACTIVE_CHILD;
}

/*
 * System reset for atomic system:
 *    '<S341>/SigHold1'
 *    '<S341>/SigHold2'
 */
void PubIfDecisionPLAN_MDL_SigHold1_Reset(DW_SigHold1_PubIfDecisionPLAN_MDL_T
  *localDW)
{
  localDW->is_active_c127_PubIfDecisionPLAN_MDL = 0U;
  localDW->is_c127_PubIfDecisionPLAN_MDL =
    PubIfDecisionPLAN_MDL_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S341>/SigHold1'
 *    '<S341>/SigHold2'
 */
void PubIfDecisionPLAN_MDL_SigHold1(real32_T rtu_Data, boolean_T rtu_Trigger,
  B_SigHold1_PubIfDecisionPLAN_MDL_T *localB,
  DW_SigHold1_PubIfDecisionPLAN_MDL_T *localDW)
{
  int32_T tmp;

  /* Chart: '<S341>/SigHold1' */
  if (localDW->is_active_c127_PubIfDecisionPLAN_MDL == 0U) {
    localDW->is_active_c127_PubIfDecisionPLAN_MDL = 1U;
    localDW->is_c127_PubIfDecisionPLAN_MDL = PubIfDecisionPLAN_MDL_IN_ture;
    localB->outData = rtu_Data;
    localB->outTrigger = rtu_Trigger;
  } else {
    switch (localDW->is_c127_PubIfDecisionPLAN_MDL) {
     case PubIfDecisionPLAN_MDL_IN_cross:
      if (rtu_Trigger) {
        localDW->is_c127_PubIfDecisionPLAN_MDL = PubIfDecisionPLAN_MDL_IN_ture;
        localB->outData = rtu_Data;
        localB->outTrigger = true;
      } else {
        localB->outData = rtu_Data;
        localB->outTrigger = false;
      }
      break;

     case PubIfDecisionPLAN_MDL_IN_hold:
      if (rtu_Trigger) {
        localDW->is_c127_PubIfDecisionPLAN_MDL = PubIfDecisionPLAN_MDL_IN_ture;
        localB->outData = rtu_Data;
        localB->outTrigger = true;
      } else if (localDW->Cnt > 250) {
        localDW->is_c127_PubIfDecisionPLAN_MDL = PubIfDecisionPLAN_MDL_IN_cross;
        localB->outData = rtu_Data;
        localB->outTrigger = false;
      } else {
        if (localDW->Cnt < 255) {
          tmp = (int32_T)(localDW->Cnt + 1U);
          if ((uint32_T)tmp > 255U) {
            tmp = 255;
          }

          localDW->Cnt = (uint8_T)tmp;
        }
      }
      break;

     default:
      /* case IN_ture: */
      if (!rtu_Trigger) {
        localDW->is_c127_PubIfDecisionPLAN_MDL = PubIfDecisionPLAN_MDL_IN_hold;
        localDW->Cnt = 0U;
      } else {
        localB->outData = rtu_Data;
        localB->outTrigger = true;
      }
      break;
    }
  }

  /* End of Chart: '<S341>/SigHold1' */
}

/*
 * Output and update for atomic system:
 *    '<S424>/MATLAB Function'
 *    '<S425>/MATLAB Function'
 */
void PubIfDecisionPLAN_MDL_MATLABFunction(boolean_T rtu_Trigger, boolean_T
  rtu_TriggerK1, boolean_T rtu_ClearCnt, uint16_T rtu_MaxCnt, boolean_T
  rtu_OutK1, uint16_T rtu_CounterK1, boolean_T rtu_TraggerhappendK1,
  B_MATLABFunction_PubIfDecisionPLAN_MDL_T *localB)
{
  int32_T q0;
  int32_T qY;
  uint16_T Counter;
  boolean_T Traggerhappend;
  localB->TimeOut = false;
  Traggerhappend = rtu_TraggerhappendK1;
  if (rtu_MaxCnt != 0) {
    if (rtu_Trigger && (!rtu_TriggerK1)) {
      Counter = rtu_MaxCnt;
      Traggerhappend = true;
    } else if (rtu_CounterK1 > 0) {
      q0 = rtu_CounterK1;
      qY = (int32_T)(q0 - 1U);
      if ((uint32_T)qY > (uint32_T)q0) {
        qY = 0;
      }

      Counter = (uint16_T)qY;
    } else {
      Counter = 0U;
    }

    if (rtu_ClearCnt) {
      Traggerhappend = false;
      Counter = 0U;
    }

    localB->Out = (Counter > 0);
  } else {
    Counter = 0U;
    localB->Out = ((rtu_Trigger && (!rtu_TriggerK1)) || rtu_OutK1);
    localB->Out = ((!rtu_ClearCnt) && localB->Out);
  }

  localB->TimeOut = (((Counter == 0) && rtu_Trigger && Traggerhappend) ||
                     localB->TimeOut);
  Traggerhappend = (rtu_Trigger && Traggerhappend);
  localB->Counter = Counter;
  localB->Traggerhappend = Traggerhappend;
}

/*
 * Output and update for atomic system:
 *    '<S471>/MATLAB Function'
 *    '<S471>/MATLAB Function1'
 *    '<S471>/MATLAB Function2'
 */
void PubIfDecisionPLAN_MDL_MATLABFunction_f(real_T rtu_Alpha, const uint8_T
  rtu_ID[11], const uint8_T rtu_IDK1[11], const real32_T rtu_signal[11], const
  real32_T rtu_resultK1[11], B_MATLABFunction_PubIfDecisionPLAN_MDL_a_T *localB)
{
  int32_T i;
  int32_T iloc;
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  for (i = 0; i < 11; i++) {
    tf = false;
    iloc = -1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (rtu_ID[i] == rtu_IDK1[k]) {
        tf = true;
        iloc = k;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if ((rtu_ID[i] != 0) && tf) {
      localB->result[i] = (rtu_signal[i] - rtu_resultK1[iloc]) * (real32_T)
        rtu_Alpha + rtu_resultK1[iloc];
    } else {
      localB->result[i] = rtu_signal[i];
    }
  }
}

/*
 * System initialize for iterator system:
 *    '<S462>/For Iterator Subsystem2'
 *    '<S462>/For Iterator Subsystem4'
 */
void PubIfDecisionPLAN_MDL_ForIteratorSubsystem2_Init
  (B_ForIteratorSubsystem2_PubIfDecisionPLAN_MDL_T *localB)
{
  int32_T i;
  for (i = 0; i < 11; i++) {
    /* SystemInitialize for Assignment: '<S484>/Assignment' incorporates:
     *  Outport: '<S484>/DPC'
     */
    localB->Assignment[i] = 0.0F;
  }
}

/*
 * Output and update for iterator system:
 *    '<S462>/For Iterator Subsystem2'
 *    '<S462>/For Iterator Subsystem4'
 */
void PubIfDecisionPLAN_MDL_ForIteratorSubsystem2(const real32_T rtu_Obj_Vx[11],
  const real32_T rtu_Obj_Dx[11], B_ForIteratorSubsystem2_PubIfDecisionPLAN_MDL_T
  *localB)
{
  int32_T i;
  real32_T u0;
  real32_T u1;
  real32_T u2;
  int8_T s484_iter;

  /* Outputs for Iterator SubSystem: '<S462>/For Iterator Subsystem2' incorporates:
   *  ForIterator: '<S484>/For Iterator'
   */
  for (s484_iter = 1; s484_iter <= 11; s484_iter++) {
    /* Outputs for Iterator SubSystem: '<S462>/For Iterator Subsystem2' incorporates:
     *  ForIterator: '<S484>/For Iterator'
     */
    localB->ForIterator = s484_iter;

    /* MultiPortSwitch: '<S484>/Index Vector2' */
    localB->IndexVector2 = rtu_Obj_Dx[localB->ForIterator - 1];

    /* MultiPortSwitch: '<S484>/Index Vector3' */
    localB->IndexVector3 = rtu_Obj_Vx[localB->ForIterator - 1];

    /* MultiPortSwitch: '<S484>/Index Vector1' */
    localB->IndexVector1 = rtu_Obj_Dx[localB->ForIterator - 1];

    /* RelationalOperator: '<S484>/Relational Operator' incorporates:
     *  Constant: '<S484>/Constant'
     */
    localB->RelationalOperator = (localB->IndexVector1 >= 0.0F);

    /* Switch: '<S484>/Switch' */
    if (localB->RelationalOperator) {
      /* Switch: '<S484>/Switch' */
      localB->Switch = localB->IndexVector3;
    } else {
      /* Switch: '<S484>/Switch' incorporates:
       *  Constant: '<S484>/Constant2'
       */
      localB->Switch = 100.0F;
    }

    /* End of Switch: '<S484>/Switch' */

    /* Lookup_n-D: '<S484>/FrontObj_Line_1_1' incorporates:
     *  Constant: '<S484>/Constant1'
     *  Constant: '<S484>/Constant6'
     *  Switch: '<S484>/Switch'
     */
    localB->FrontObj_Line_1 = look1_iflf_binlxpw(localB->Switch,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_FrontObj_DX_1, 23U);

    /* Lookup_n-D: '<S484>/FrontObj_Line_0.8_0.8' incorporates:
     *  Constant: '<S484>/Constant7'
     *  Constant: '<S484>/Constant8'
     *  Switch: '<S484>/Switch'
     */
    localB->FrontObj_Line_08 = look1_iflf_binlxpw(localB->Switch,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_FrontObj_DX_08, 23U);

    /* Lookup_n-D: '<S484>/FrontObj_Line_0.3_0.1' incorporates:
     *  Constant: '<S484>/Constant10'
     *  Constant: '<S484>/Constant9'
     *  Switch: '<S484>/Switch'
     */
    localB->FrontObj_Line_03 = look1_iflf_binlxpw(localB->Switch,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_FrontObj_DX_03, 23U);

    /* Lookup_n-D: '<S484>/FrontObj_Line_0_1' incorporates:
     *  Constant: '<S484>/Constant11'
     *  Constant: '<S484>/Constant12'
     *  Switch: '<S484>/Switch'
     */
    localB->FrontObj_Line_0 = look1_iflf_binlxpw(localB->Switch,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_FrontObj_DX_00, 23U);

    /* DataTypeConversion: '<S484>/Data Type Conversion3' */
    localB->DataTypeConversion3[0] = localB->FrontObj_Line_1;
    localB->DataTypeConversion3[1] = localB->FrontObj_Line_08;
    localB->DataTypeConversion3[2] = localB->FrontObj_Line_03;
    localB->DataTypeConversion3[3] = localB->FrontObj_Line_0;

    /* Lookup_n-D: '<S484>/1-D Lookup Table1' incorporates:
     *  MultiPortSwitch: '<S484>/Index Vector2'
     */
    localB->uDLookupTable1 = look1_iflf_binlcpw(localB->IndexVector2,
      localB->DataTypeConversion3, rtCP_uDLookupTable1_tableData_g, 3U);

    /* MultiPortSwitch: '<S484>/Index Vector4' */
    localB->IndexVector4 = rtu_Obj_Dx[localB->ForIterator - 1];

    /* RelationalOperator: '<S484>/Relational Operator1' incorporates:
     *  Constant: '<S484>/Constant4'
     */
    localB->RelationalOperator1 = (localB->IndexVector1 < 0.0F);

    /* Switch: '<S484>/Switch1' */
    if (localB->RelationalOperator1) {
      /* Switch: '<S484>/Switch1' */
      localB->Switch1 = localB->IndexVector3;
    } else {
      /* Switch: '<S484>/Switch1' incorporates:
       *  Constant: '<S484>/Constant5'
       */
      localB->Switch1 = (-100.0F);
    }

    /* End of Switch: '<S484>/Switch1' */

    /* Lookup_n-D: '<S484>/Rearobj_Line_0_0' incorporates:
     *  Constant: '<S484>/Constant13'
     *  Constant: '<S484>/Constant14'
     *  Switch: '<S484>/Switch1'
     */
    localB->Rearobj_Line_0 = look1_iflf_binlxpw(localB->Switch1,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_HearObj_DX_00, 23U);

    /* Lookup_n-D: '<S484>/Rearobj_Line_0.3_0.3' incorporates:
     *  Constant: '<S484>/Constant15'
     *  Constant: '<S484>/Constant16'
     *  Switch: '<S484>/Switch1'
     */
    localB->Rearobj_Line_03 = look1_iflf_binlxpw(localB->Switch1,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_HearObj_DX_03, 23U);

    /* Lookup_n-D: '<S484>/Rearobj_Line_0.8_0.8' incorporates:
     *  Constant: '<S484>/Constant17'
     *  Constant: '<S484>/Constant18'
     *  Switch: '<S484>/Switch1'
     */
    localB->Rearobj_Line_08 = look1_iflf_binlxpw(localB->Switch1,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_HearObj_DX_08, 23U);

    /* Lookup_n-D: '<S484>/Rearobj_Line_1_2' incorporates:
     *  Constant: '<S484>/Constant19'
     *  Constant: '<S484>/Constant20'
     *  Switch: '<S484>/Switch1'
     */
    localB->Rearobj_Line_1 = look1_iflf_binlxpw(localB->Switch1,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_HearObj_DX_11, 23U);

    /* DataTypeConversion: '<S484>/Data Type Conversion5' */
    localB->DataTypeConversion5[0] = localB->Rearobj_Line_0;
    localB->DataTypeConversion5[1] = localB->Rearobj_Line_03;
    localB->DataTypeConversion5[2] = localB->Rearobj_Line_08;
    localB->DataTypeConversion5[3] = localB->Rearobj_Line_1;

    /* Lookup_n-D: '<S484>/1-D Lookup Table8' incorporates:
     *  MultiPortSwitch: '<S484>/Index Vector4'
     */
    localB->uDLookupTable8 = look1_iflf_binlcpw(localB->IndexVector4,
      localB->DataTypeConversion5, rtCP_uDLookupTable8_tableData, 3U);

    /* Saturate: '<S484>/Saturation1' */
    u0 = localB->uDLookupTable1;
    u1 = 0.0F;
    u2 = 1.0F;
    if (u0 > u2) {
      /* Saturate: '<S484>/Saturation1' */
      localB->Saturation1 = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S484>/Saturation1' */
      localB->Saturation1 = u1;
    } else {
      /* Saturate: '<S484>/Saturation1' */
      localB->Saturation1 = u0;
    }

    /* End of Saturate: '<S484>/Saturation1' */

    /* RelationalOperator: '<S484>/Relational Operator2' */
    localB->RelationalOperator2 = ((int32_T)localB->RelationalOperator >
      (int32_T)localB->RelationalOperator1);

    /* Saturate: '<S484>/Saturation' */
    u0 = localB->uDLookupTable8;
    u1 = 0.0F;
    u2 = 1.0F;
    if (u0 > u2) {
      /* Saturate: '<S484>/Saturation' */
      localB->Saturation = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S484>/Saturation' */
      localB->Saturation = u1;
    } else {
      /* Saturate: '<S484>/Saturation' */
      localB->Saturation = u0;
    }

    /* End of Saturate: '<S484>/Saturation' */

    /* Switch: '<S484>/Switch2' */
    if (localB->RelationalOperator2) {
      /* Switch: '<S484>/Switch2' */
      localB->Switch2 = localB->Saturation1;
    } else {
      /* Switch: '<S484>/Switch2' */
      localB->Switch2 = localB->Saturation;
    }

    /* End of Switch: '<S484>/Switch2' */

    /* Assignment: '<S484>/Assignment' */
    if (s484_iter == 1) {
      /* Assignment: '<S484>/Assignment' incorporates:
       *  Constant: '<S484>/Constant3'
       */
      for (i = 0; i < 11; i++) {
        localB->Assignment[i] = rtCP_Constant3_Value_g[i];
      }

      /* End of Assignment: '<S484>/Assignment' */
    }

    localB->Assignment[localB->ForIterator - 1] = localB->Switch2;

    /* End of Assignment: '<S484>/Assignment' */
  }

  /* End of Outputs for SubSystem: '<S462>/For Iterator Subsystem2' */
}

/*
 * System initialize for iterator system:
 *    '<S462>/Obj_front'
 *    '<S462>/Obj_front1'
 */
void PubIfDecisionPLAN_MDL_Obj_front_Init(B_Obj_front_PubIfDecisionPLAN_MDL_T
  *localB)
{
  int32_T i;
  for (i = 0; i < 11; i++) {
    /* SystemInitialize for Assignment: '<S486>/Assignment1' incorporates:
     *  Outport: '<S486>/obj_Front_sub_DPC'
     */
    localB->Assignment1[i] = 0.0F;
  }

  for (i = 0; i < 11; i++) {
    /* SystemInitialize for Assignment: '<S486>/Assignment' incorporates:
     *  Outport: '<S486>/obj_Rear_sub_DPC'
     */
    localB->Assignment[i] = 0.0F;
  }
}

/*
 * Output and update for iterator system:
 *    '<S462>/Obj_front'
 *    '<S462>/Obj_front1'
 */
void PubIfDecisionPLAN_MDL_Obj_front(const real32_T rtu_obj_Front_sub_Dx[11],
  const real32_T rtu_obj_front_Vx[11], const real32_T rtu_obj_Rear_sub_Dx[11],
  const real32_T rtu_obj_Rear_Vx[11], B_Obj_front_PubIfDecisionPLAN_MDL_T
  *localB)
{
  int32_T i;
  real32_T u0;
  real32_T u1;
  real32_T u2;
  int8_T s486_iter;

  /* Outputs for Iterator SubSystem: '<S462>/Obj_front' incorporates:
   *  ForIterator: '<S486>/For Iterator'
   */
  for (s486_iter = 1; s486_iter <= 11; s486_iter++) {
    /* Outputs for Iterator SubSystem: '<S462>/Obj_front' incorporates:
     *  ForIterator: '<S486>/For Iterator'
     */
    localB->ForIterator = s486_iter;

    /* MultiPortSwitch: '<S486>/Index Vector2' */
    localB->IndexVector2 = rtu_obj_Front_sub_Dx[localB->ForIterator - 1];

    /* MultiPortSwitch: '<S486>/Index Vector3' */
    localB->IndexVector3 = rtu_obj_front_Vx[localB->ForIterator - 1];

    /* Lookup_n-D: '<S486>/FrontObj_Line_1_1' incorporates:
     *  Constant: '<S486>/Constant'
     *  Constant: '<S486>/Constant2'
     *  MultiPortSwitch: '<S486>/Index Vector3'
     */
    localB->FrontObj_Line_1 = look1_iflf_binlxpw(localB->IndexVector3,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_FrontObj_DX_1, 23U);

    /* Lookup_n-D: '<S486>/FrontObj_Line_0.8_0.8' incorporates:
     *  Constant: '<S486>/Constant4'
     *  Constant: '<S486>/Constant5'
     *  MultiPortSwitch: '<S486>/Index Vector3'
     */
    localB->FrontObj_Line_08 = look1_iflf_binlxpw(localB->IndexVector3,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_FrontObj_DX_08, 23U);

    /* Lookup_n-D: '<S486>/FrontObj_Line_0.3_0.1' incorporates:
     *  Constant: '<S486>/Constant6'
     *  Constant: '<S486>/Constant7'
     *  MultiPortSwitch: '<S486>/Index Vector3'
     */
    localB->FrontObj_Line_03 = look1_iflf_binlxpw(localB->IndexVector3,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_FrontObj_DX_03, 23U);

    /* Lookup_n-D: '<S486>/FrontObj_Line_0_1' incorporates:
     *  Constant: '<S486>/Constant8'
     *  Constant: '<S486>/Constant9'
     *  MultiPortSwitch: '<S486>/Index Vector3'
     */
    localB->FrontObj_Line_0 = look1_iflf_binlxpw(localB->IndexVector3,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_FrontObj_DX_00, 23U);

    /* DataTypeConversion: '<S486>/Data Type Conversion3' */
    localB->DataTypeConversion3[0] = localB->FrontObj_Line_1;
    localB->DataTypeConversion3[1] = localB->FrontObj_Line_08;
    localB->DataTypeConversion3[2] = localB->FrontObj_Line_03;
    localB->DataTypeConversion3[3] = localB->FrontObj_Line_0;

    /* Lookup_n-D: '<S486>/1-D Lookup Table1' incorporates:
     *  MultiPortSwitch: '<S486>/Index Vector2'
     */
    localB->uDLookupTable1 = look1_iflf_binlxpw(localB->IndexVector2,
      localB->DataTypeConversion3, rtCP_uDLookupTable1_tableData_k, 3U);

    /* MultiPortSwitch: '<S486>/Index Vector4' */
    localB->IndexVector4 = rtu_obj_Rear_sub_Dx[localB->ForIterator - 1];

    /* MultiPortSwitch: '<S486>/Index Vector' */
    localB->IndexVector = rtu_obj_Rear_Vx[localB->ForIterator - 1];

    /* Lookup_n-D: '<S486>/Rearobj_Line_0_0' incorporates:
     *  Constant: '<S486>/Constant10'
     *  Constant: '<S486>/Constant11'
     *  MultiPortSwitch: '<S486>/Index Vector'
     */
    localB->Rearobj_Line_0 = look1_iflf_binlxpw(localB->IndexVector,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_HearObj_DX_00, 23U);

    /* Lookup_n-D: '<S486>/Rearobj_Line_0.3_0.3' incorporates:
     *  Constant: '<S486>/Constant12'
     *  Constant: '<S486>/Constant13'
     *  MultiPortSwitch: '<S486>/Index Vector'
     */
    localB->Rearobj_Line_03 = look1_iflf_binlxpw(localB->IndexVector,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_HearObj_DX_03, 23U);

    /* Lookup_n-D: '<S486>/Rearobj_Line_0.8_0.8' incorporates:
     *  Constant: '<S486>/Constant14'
     *  Constant: '<S486>/Constant15'
     *  MultiPortSwitch: '<S486>/Index Vector'
     */
    localB->Rearobj_Line_08 = look1_iflf_binlxpw(localB->IndexVector,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_HearObj_DX_08, 23U);

    /* Lookup_n-D: '<S486>/Rearobj_Line_1_1' incorporates:
     *  Constant: '<S486>/Constant16'
     *  Constant: '<S486>/Constant17'
     *  MultiPortSwitch: '<S486>/Index Vector'
     */
    localB->Rearobj_Line_1 = look1_iflf_binlxpw(localB->IndexVector,
      rtP_P_PLAN_DPC_xiangduisudu_kmh, rtP_P_PLAN_DPC_HearObj_DX_11, 23U);

    /* DataTypeConversion: '<S486>/Data Type Conversion5' */
    localB->DataTypeConversion5[0] = localB->Rearobj_Line_0;
    localB->DataTypeConversion5[1] = localB->Rearobj_Line_03;
    localB->DataTypeConversion5[2] = localB->Rearobj_Line_08;
    localB->DataTypeConversion5[3] = localB->Rearobj_Line_1;

    /* Lookup_n-D: '<S486>/1-D Lookup Table8' incorporates:
     *  MultiPortSwitch: '<S486>/Index Vector4'
     */
    localB->uDLookupTable8 = look1_iflf_binlxpw(localB->IndexVector4,
      localB->DataTypeConversion5, rtCP_uDLookupTable8_tableData_d, 3U);

    /* Saturate: '<S486>/Saturation' */
    u0 = localB->uDLookupTable8;
    u1 = 0.0F;
    u2 = 1.0F;
    if (u0 > u2) {
      /* Saturate: '<S486>/Saturation' */
      localB->Saturation = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S486>/Saturation' */
      localB->Saturation = u1;
    } else {
      /* Saturate: '<S486>/Saturation' */
      localB->Saturation = u0;
    }

    /* End of Saturate: '<S486>/Saturation' */

    /* Assignment: '<S486>/Assignment' */
    if (s486_iter == 1) {
      /* Assignment: '<S486>/Assignment' incorporates:
       *  Constant: '<S486>/Constant3'
       */
      for (i = 0; i < 11; i++) {
        localB->Assignment[i] = rtCP_Constant3_Value_o[i];
      }

      /* End of Assignment: '<S486>/Assignment' */
    }

    localB->Assignment[localB->ForIterator - 1] = localB->Saturation;

    /* End of Assignment: '<S486>/Assignment' */

    /* Saturate: '<S486>/Saturation1' */
    u0 = localB->uDLookupTable1;
    u1 = 0.0F;
    u2 = 1.0F;
    if (u0 > u2) {
      /* Saturate: '<S486>/Saturation1' */
      localB->Saturation1 = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S486>/Saturation1' */
      localB->Saturation1 = u1;
    } else {
      /* Saturate: '<S486>/Saturation1' */
      localB->Saturation1 = u0;
    }

    /* End of Saturate: '<S486>/Saturation1' */

    /* Assignment: '<S486>/Assignment1' */
    if (s486_iter == 1) {
      /* Assignment: '<S486>/Assignment1' incorporates:
       *  Constant: '<S486>/Constant1'
       */
      for (i = 0; i < 11; i++) {
        localB->Assignment1[i] = rtCP_Constant1_Value_l[i];
      }

      /* End of Assignment: '<S486>/Assignment1' */
    }

    localB->Assignment1[localB->ForIterator - 1] = localB->Saturation1;

    /* End of Assignment: '<S486>/Assignment1' */
  }

  /* End of Outputs for SubSystem: '<S462>/Obj_front' */
}

/*
 * Output and update for atomic system:
 *    '<S489>/MATLAB Function'
 *    '<S489>/MATLAB Function1'
 *    '<S489>/MATLAB Function2'
 *    '<S489>/MATLAB Function3'
 */
void PubIfDecisionPLAN_MDL_MATLABFunction_g(real32_T rtu_Alpha, const uint8_T
  rtu_ID[11], const uint8_T rtu_IDK1[11], const real32_T rtu_signal[11], const
  real32_T rtu_resultK1[11], B_MATLABFunction_PubIfDecisionPLAN_MDL_n_T *localB)
{
  int32_T i;
  int32_T iloc;
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  for (i = 0; i < 11; i++) {
    tf = false;
    iloc = -1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (rtu_ID[i] == rtu_IDK1[k]) {
        tf = true;
        iloc = k;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if ((rtu_ID[i] != 0) && tf) {
      localB->result[i] = (rtu_signal[i] - rtu_resultK1[iloc]) * rtu_Alpha +
        rtu_resultK1[iloc];
    } else {
      localB->result[i] = rtu_signal[i];
    }
  }
}

/* Function for Chart: '<S108>/Chart' */
static real32_T PubIfDecisionPLAN_MDL_minimum(const real32_T x[10])
{
  int32_T idx;
  int32_T k;
  real32_T ex;
  boolean_T exitg1;
  if (!rtIsNaNF(x[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 11)) {
      if (!rtIsNaNF(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    while (idx + 1 < 11) {
      if (ex > x[idx]) {
        ex = x[idx];
      }

      idx++;
    }
  }

  return ex;
}

/* System initialize for referenced model: 'PubIfDecisionPLAN_MDL' */
void PubIfDecisionPLAN_MDL_Init(boolean_T *rty_PLAN_Longctrl_DecelToStopReq)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_p;
  int32_T ForEach_itr_k;
  int32_T i;

  /* InitializeConditions for UnitDelay: '<S463>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE = 3.75F;

  /* InitializeConditions for UnitDelay: '<S283>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_m = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_o = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay7' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay7_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay5' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay5_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S265>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_n = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S262>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_i = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S264>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_mv = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay8' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay8_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S185>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_mc = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay4' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_a = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S266>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_h = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S261>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g4 = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S263>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_ad = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S185>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_f0 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S302>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_lp = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay15' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay15_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S301>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pu = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S304>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_ot = false;

  /* InitializeConditions for UnitDelay: '<S304>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_m = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay9' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay9_DSTATE_e = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay10' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay10_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay11' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay11_DSTATE_i = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S334>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pv = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S342>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_a = false;

  /* InitializeConditions for UnitDelay: '<S342>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_c0 = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay14' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay14_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_i4 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_i1 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay6' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay6_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S337>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S340>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_d = false;

  /* InitializeConditions for UnitDelay: '<S340>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_b = 0.0F;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g = 0.0F;

  /* InitializeConditions for UnitDelay: '<S369>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_ia = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S368>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_e = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S371>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S335>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_f = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S343>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_m = false;

  /* InitializeConditions for UnitDelay: '<S343>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_f = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S370>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_eg = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S226>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_d = 0.0F;

  /* InitializeConditions for UnitDelay: '<S224>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_kn = false;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay16' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay16_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay13' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay13_DSTATE_e = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S366>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_k = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S184>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g3 = false;

  /* InitializeConditions for UnitDelay: '<S223>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S367>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_cu = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S184>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_dv = false;

  /* InitializeConditions for S-Function (sfix_udelay): '<S184>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[0] = 0.0F;
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[1] = 0.0F;
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[2] = 0.0F;
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S182>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_nj = false;

  /* InitializeConditions for UnitDelay: '<S421>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_e = false;

  /* InitializeConditions for UnitDelay: '<S421>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_he = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S420>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_mr = false;

  /* InitializeConditions for UnitDelay: '<S420>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_o = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S413>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_j = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S412>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_hk = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S189>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jg = false;

  /* InitializeConditions for UnitDelay: '<S431>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_px = false;

  /* InitializeConditions for UnitDelay: '<S431>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_a = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S432>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_me = false;

  /* InitializeConditions for UnitDelay: '<S432>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_l = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S440>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S440>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_im = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S441>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_g = false;

  /* InitializeConditions for UnitDelay: '<S441>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ia = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S450>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_i = false;

  /* InitializeConditions for UnitDelay: '<S450>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_gs = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S425>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jd = false;

  /* InitializeConditions for UnitDelay: '<S425>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_do = false;

  /* InitializeConditions for UnitDelay: '<S425>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ob = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S425>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_dc = false;

  /* InitializeConditions for UnitDelay: '<S424>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_o = false;

  /* InitializeConditions for UnitDelay: '<S424>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_b = false;

  /* InitializeConditions for UnitDelay: '<S424>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ar = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S424>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_f = false;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay12' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay12_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S285>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_k = false;

  /* InitializeConditions for UnitDelay: '<S285>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_d = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S349>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S460>/Unit Delay14' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay14_DSTATE_m = ((uint8_T)0U);
  for (i = 0; i < 11; i++) {
    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay11' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay11_DSTATE[i] =
      rtCP_UnitDelay11_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay12' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay12_DSTATE[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay13' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay13_DSTATE[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jw[i] = ((uint8_T)0U);

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_c[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay10' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay10_DSTATE[i] =
      rtCP_UnitDelay10_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay8' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay8_DSTATE[i] =
      rtCP_UnitDelay8_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay7' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay7_DSTATE[i] =
      rtCP_UnitDelay7_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay5' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay5_DSTATE[i] =
      rtCP_UnitDelay5_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay6' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay6_DSTATE[i] =
      rtCP_UnitDelay6_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay4' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE[i] =
      rtCP_UnitDelay4_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay9' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay9_DSTATE[i] =
      rtCP_UnitDelay9_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pj[i] = ((uint8_T)0U);

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_g[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_f[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_g[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S471>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gm[i] = ((uint8_T)0U);

    /* InitializeConditions for UnitDelay: '<S471>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_i[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S471>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_p[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S471>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_d[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay4' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE_k[i] = 0.0F;
  }

  /* InitializeConditions for UnitDelay: '<S2>/Output' */
  PubIfDecisionPLAN_MDL_DW.Output_DSTATE = ((uint8_T)0U);

  /* SystemInitialize for Iterator SubSystem: '<S462>/Obj_front' */
  PubIfDecisionPLAN_MDL_Obj_front_Init(&PubIfDecisionPLAN_MDL_B.Obj_front);

  /* End of SystemInitialize for SubSystem: '<S462>/Obj_front' */

  /* SystemInitialize for Iterator SubSystem: '<S462>/Obj_front1' */
  PubIfDecisionPLAN_MDL_Obj_front_Init(&PubIfDecisionPLAN_MDL_B.Obj_front1);

  /* End of SystemInitialize for SubSystem: '<S462>/Obj_front1' */

  /* SystemInitialize for Chart: '<S185>/SigValueHold1' */
  PubIfDecisionPLAN_MDL_DW.is_active_c121_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c121_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for Chart: '<S185>/SigValueHold3' */
  PubIfDecisionPLAN_MDL_DW.is_active_c122_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c122_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for Chart: '<S337>/Chart' */
  PubIfDecisionPLAN_MDL_DW.is_active_c123_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c123_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for Chart: '<S341>/SigHold2' */
  PubIfDecisionPLAN_MDL_SigHold1_Init(&PubIfDecisionPLAN_MDL_DW.sf_SigHold2);

  /* SystemInitialize for Chart: '<S341>/SigHold1' */
  PubIfDecisionPLAN_MDL_SigHold1_Init(&PubIfDecisionPLAN_MDL_DW.sf_SigHold1);

  /* SystemInitialize for Chart: '<S184>/Chart' */
  PubIfDecisionPLAN_MDL_DW.is_LeLc = 0;
  PubIfDecisionPLAN_MDL_DW.is_RiLc = 0;
  PubIfDecisionPLAN_MDL_DW.is_active_c1_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c1_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for Chart: '<S4>/ALC_DECS' */
  PubIfDecisionPLAN_MDL_DW.is_ALC_ON = 0;
  PubIfDecisionPLAN_MDL_DW.is_active_c115_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c115_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for Chart: '<S182>/ALCHMISM' */
  PubIfDecisionPLAN_MDL_DW.is_active_c116_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c116_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for Atomic SubSystem: '<S8>/AP' */
  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gy = 0.0F;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_gj = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S39>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_fj = false;

  /* InitializeConditions for UnitDelay: '<S39>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_dg = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay22' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay22_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay21' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay21_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay20' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay20_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay19' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay19_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay63' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay63_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay62' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay62_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay22' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay22_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay21' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay21_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay20' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay20_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay19' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay19_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay63' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay63_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay62' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay62_DSTATE[1] = 0.0F;
  for (i = 0; i < 25; i++) {
    /* InitializeConditions for S-Function (sfix_udelay): '<S144>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay_X[i] = 0.0F;

    /* InitializeConditions for S-Function (sfix_udelay): '<S144>/Tapped Delay1' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_m[i] = 0.0F;
  }

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S140>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay42' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay42_DSTATE[0] = false;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay43' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay43_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay48' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay48_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay47' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay47_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay46' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay46_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay45' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay45_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay44' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay44_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay42' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay42_DSTATE[1] = false;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay43' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay43_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay48' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay48_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay47' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay47_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay46' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay46_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay45' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay45_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay44' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay44_DSTATE[1] = 0.0F;

  /* InitializeConditions for Memory: '<S109>/Memory' */
  PubIfDecisionPLAN_MDL_DW.Memory_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S127>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_a = 0.0F;

  /* InitializeConditions for UnitDelay: '<S113>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_p = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S20>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h0 = ((uint8_T)0U);

  /* InitializeConditions for Memory: '<S20>/Memory5' */
  PubIfDecisionPLAN_MDL_DW.Memory5_PreviousInput = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S22>/Tapped Delay' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay_X_b = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sfix_udelay): '<S22>/Tapped Delay1' */
  for (i = 0; i < 19; i++) {
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_i[i] = 0.0F;
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<S22>/Tapped Delay1' */

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_hu = false;

  /* InitializeConditions for UnitDelay: '<S178>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_o = 0U;
  PubIfDecisionPLAN_MDL_DW.CCSetSpdK1 = 255.0;
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCRaw = 0.0F;
  PubIfDecisionPLAN_MDL_B.fastDecel = 0.0;

  /* SystemInitialize for Chart: '<S12>/AccelCCCalc' incorporates:
   *  SubSystem: '<S26>/CCAccelePos'
   */
  /* SystemInitialize for Product: '<S34>/Product' incorporates:
   *  Outport: '<S34>/accelCC'
   */
  PubIfDecisionPLAN_MDL_B.CCAccele_l = 0.0F;

  /* SystemInitialize for Chart: '<S12>/AccelCCCalc' incorporates:
   *  SubSystem: '<S26>/CCAcceleNeg'
   */
  /* SystemInitialize for Product: '<S33>/Product' incorporates:
   *  Outport: '<S33>/accelCC'
   */
  PubIfDecisionPLAN_MDL_B.CCAccele = 0.0F;

  /* SystemInitialize for Chart: '<S12>/AccelCCCalc' incorporates:
   *  SubSystem: '<S26>/CCDeltaVCalc'
   */
  /* SystemInitialize for Product: '<S35>/Product1' incorporates:
   *  Outport: '<S35>/deltaVelCC'
   */
  PubIfDecisionPLAN_MDL_B.CCDeltaV_i = 0.0F;

  /* SystemInitialize for Chart: '<S12>/AccelCCCalc' incorporates:
   *  SubSystem: '<S26>/Mph2KphCalc'
   */
  /* SystemInitialize for Product: '<S36>/Product' incorporates:
   *  Outport: '<S36>/ACC_SpdSetValueMph2Kph'
   */
  PubIfDecisionPLAN_MDL_B.ACC_SpdSetValueMph2Kph = 0.0F;

  /* SystemInitialize for Chart: '<S12>/AcceleBandCC' incorporates:
   *  SubSystem: '<S28>/CCPosAcceleBandCalc'
   */
  /* SystemInitialize for MinMax: '<S43>/MinMax' incorporates:
   *  Outport: '<S43>/upperBandCC'
   */
  PubIfDecisionPLAN_MDL_B.upperBandCC_j = 0.0F;

  /* SystemInitialize for MinMax: '<S43>/MinMax1' incorporates:
   *  Outport: '<S43>/lowerBandCC'
   */
  PubIfDecisionPLAN_MDL_B.lowerBandCC_j = 0.0F;

  /* SystemInitialize for Chart: '<S12>/AcceleBandCC' incorporates:
   *  SubSystem: '<S28>/CCNegAcceleBandCalc'
   */
  /* SystemInitialize for MinMax: '<S42>/MinMax' incorporates:
   *  Outport: '<S42>/upperBandCC'
   */
  PubIfDecisionPLAN_MDL_B.upperBandCC = 0.0F;

  /* SystemInitialize for MinMax: '<S42>/MinMax1' incorporates:
   *  Outport: '<S42>/lowerBandCC'
   */
  PubIfDecisionPLAN_MDL_B.lowerBandCC = 0.0F;

  /* SystemInitialize for Iterator SubSystem: '<S108>/LP' */
  for (ForEach_itr_k = 0; ForEach_itr_k < 10; ForEach_itr_k++) {
    /* InitializeConditions for S-Function (sfix_udelay): '<S115>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[0] = 0.0F;
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[1] = 0.0F;
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[2] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S115>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].UnitDelay_DSTATE = 0.0F;
  }

  /* End of SystemInitialize for SubSystem: '<S108>/LP' */

  /* SystemInitialize for Chart: '<S108>/Chart' incorporates:
   *  SubSystem: '<S114>/velDeltaCalc'
   */
  /* SystemInitialize for Chart: '<S108>/Chart' incorporates:
   *  SubSystem: '<S114>/velSubjLimChar'
   */
  for (i = 0; i < 10; i++) {
    /* SystemInitialize for Gain: '<S121>/Gain2' incorporates:
     *  Outport: '<S121>/velSubjLimMap'
     */
    PubIfDecisionPLAN_MDL_B.Gain2_a0[i] = 0.0F;

    /* SystemInitialize for Sum: '<S120>/Add' incorporates:
     *  Outport: '<S120>/velDelta'
     */
    PubIfDecisionPLAN_MDL_B.velDelta_c[i] = 0.0F;
  }

  /* SystemInitialize for Chart: '<S108>/Chart' incorporates:
   *  SubSystem: '<S114>/accelICCurvatureMapPosCalc'
   */
  /* SystemInitialize for Product: '<S118>/Product' incorporates:
   *  Outport: '<S118>/accelICCurvatureMapMatrix'
   */
  PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix_g = 0.0F;

  /* SystemInitialize for Chart: '<S108>/Chart' incorporates:
   *  SubSystem: '<S114>/accelICCurvatureMapNegCalc'
   */
  /* SystemInitialize for Product: '<S117>/Product' incorporates:
   *  Outport: '<S117>/accelICCurvatureMapMatrix'
   */
  PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix_k = 0.0F;

  /* SystemInitialize for Chart: '<S108>/Chart' incorporates:
   *  SubSystem: '<S114>/accelICCurvatureMapDistExceed'
   */
  /* SystemInitialize for Product: '<S116>/Product2' incorporates:
   *  Outport: '<S116>/accelICCurvatureMapMatrix'
   */
  PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix_i = 0.0F;

  /* SystemInitialize for Chart: '<S108>/Chart' incorporates:
   *  SubSystem: '<S114>/distDesCurvatureMapCalc'
   */
  /* SystemInitialize for Product: '<S119>/Product' incorporates:
   *  Outport: '<S119>/distDesCurvatureMap'
   */
  PubIfDecisionPLAN_MDL_B.distDesCurvatureMap = 0.0F;

  /* SystemInitialize for IfAction SubSystem: '<S109>/If Action Subsystem' */
  /* InitializeConditions for S-Function (sfix_udelay): '<S130>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[0] = 0.0F;
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[1] = 0.0F;
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S130>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gk = 0.0F;

  /* SystemInitialize for Iterator SubSystem: '<S125>/For Each Subsystem' */
  for (ForEach_itr_p = 0; ForEach_itr_p < 2; ForEach_itr_p++) {
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].CurvatureIFC = 0.0F;

    /* SystemInitialize for Chart: '<S129>/CurvatureChar' incorporates:
     *  SubSystem: '<S131>/Curvature1Calc'
     */
    /* SystemInitialize for Product: '<S132>/Product6' incorporates:
     *  Outport: '<S132>/Curvature1'
     */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product6 = 0.0;

    /* SystemInitialize for Chart: '<S129>/CurvatureChar' incorporates:
     *  SubSystem: '<S131>/Curvature2Calc'
     */
    /* SystemInitialize for Sum: '<S133>/Add1' incorporates:
     *  Outport: '<S133>/Curvature2'
     */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add1 = 0.0;

    /* SystemInitialize for Chart: '<S129>/CurvatureChar' incorporates:
     *  SubSystem: '<S131>/Curvature3Calc'
     */
    /* SystemInitialize for Sum: '<S134>/Add3' incorporates:
     *  Outport: '<S134>/Curvature3'
     */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add3 = 0.0;
  }

  /* End of SystemInitialize for SubSystem: '<S125>/For Each Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S109>/If Action Subsystem' */
  PubIfDecisionPLAN_MDL_DW.offRampDecelStart = false;

  /* SystemInitialize for Chart: '<S18>/ORD' incorporates:
   *  SubSystem: '<S146>/velDeltaCalc'
   */
  /* SystemInitialize for Product: '<S151>/Product1' incorporates:
   *  Outport: '<S151>/velDelta'
   */
  PubIfDecisionPLAN_MDL_B.velDelta_g = 0.0F;

  /* SystemInitialize for Sum: '<S151>/Add1' incorporates:
   *  Outport: '<S151>/IPKVel'
   */
  PubIfDecisionPLAN_MDL_B.Add1_l = 0.0F;

  /* SystemInitialize for Chart: '<S18>/ORD' incorporates:
   *  SubSystem: '<S146>/accelOffRampPosCalc'
   */
  /* SystemInitialize for Product: '<S149>/Product' incorporates:
   *  Outport: '<S149>/accelOffRamp'
   */
  PubIfDecisionPLAN_MDL_B.accelOffRamp_ov = 0.0F;

  /* SystemInitialize for Chart: '<S18>/ORD' incorporates:
   *  SubSystem: '<S146>/accelOffRampNegCalc'
   */
  /* SystemInitialize for Product: '<S148>/Product' incorporates:
   *  Outport: '<S148>/accelOffRamp'
   */
  PubIfDecisionPLAN_MDL_B.accelOffRamp_h = 0.0F;

  /* SystemInitialize for Chart: '<S18>/ORD' incorporates:
   *  SubSystem: '<S146>/accelOffRampDistExceed'
   */
  /* SystemInitialize for Product: '<S147>/Product1' incorporates:
   *  Outport: '<S147>/accelOffRamp'
   */
  PubIfDecisionPLAN_MDL_B.accelOffRamp_o = 0.0F;

  /* SystemInitialize for Chart: '<S18>/ORD' incorporates:
   *  SubSystem: '<S146>/distDesOffRampCalc'
   */
  /* SystemInitialize for Product: '<S150>/Product' incorporates:
   *  Outport: '<S150>/distDesOffRamp'
   */
  PubIfDecisionPLAN_MDL_B.distDesOffRamp = 0.0F;

  /* SystemInitialize for Chart: '<S22>/Chart' */
  PubIfDecisionPLAN_MDL_DW.tNoneActive2Active = 0.0F;

  /* SystemInitialize for Enabled SubSystem: '<S9>/FollowCtrl' */
  /* InitializeConditions for S-Function (sfix_udelay): '<S48>/Tapped Delay' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay_X_o = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sfix_udelay): '<S49>/Tapped Delay' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay_X_m = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sfix_udelay): '<S49>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_d = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sfix_udelay): '<S49>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_n = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sfix_udelay): '<S58>/Tapped Delay' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay_X_j = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sfix_udelay): '<S58>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S58>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_dz = 0.0F;

  /* InitializeConditions for UnitDelay: '<S58>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_h = 0.0F;

  /* InitializeConditions for UnitDelay: '<S58>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gc = 2.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S55>/Tapped Delay' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay_X_by = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_l = 0.0F;

  /* InitializeConditions for UnitDelay: '<S75>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_hq = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S75>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_c = 0.0F;

  /* InitializeConditions for UnitDelay: '<S50>/Output' */
  PubIfDecisionPLAN_MDL_DW.Output_DSTATE_j = ((uint8_T)0U);

  /* SystemInitialize for Chart: '<S49>/accelTargAbsFilter' incorporates:
   *  SubSystem: '<S63>/tFiltP0Calc'
   */
  /* SystemInitialize for Lookup_n-D: '<S64>/1-D Lookup Table' incorporates:
   *  Outport: '<S64>/tFiltP0'
   */
  PubIfDecisionPLAN_MDL_B.tFiltP0 = 0.0F;

  /* SystemInitialize for Chart: '<S48>/AccelTargAbsEnableJudge' */
  PubIfDecisionPLAN_MDL_DW.accelTargAbsEnableNegFlag = false;
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable = 0.0F;

  /* SystemInitialize for Chart: '<S47>/AccelSupression' */
  PubIfDecisionPLAN_MDL_DW.is_active_c63_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c63_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for MATLAB Function: '<S58>/spdPlanning' */
  PubIfDecisionPLAN_MDL_DW.cntSmallNumRawArb = 0.0F;
  PubIfDecisionPLAN_MDL_DW.cntBigNumRawArb = 0.0F;

  /* SystemInitialize for Chart: '<S55>/StandstillOverride' */
  PubIfDecisionPLAN_MDL_DW.ACCModeStateFullFill = false;
  PubIfDecisionPLAN_MDL_DW.ACCModeK1 = 0U;

  /* SystemInitialize for Chart: '<S67>/DecelToStopCtrl' */
  PubIfDecisionPLAN_MDL_DW.counter = 0.0F;
  PubIfDecisionPLAN_MDL_DW.ACCModeStsK1_n = 0U;
  PubIfDecisionPLAN_MDL_DW.accelForceClear = false;
  PubIfDecisionPLAN_MDL_B.LongCtrl_ForceStop = false;

  /* SystemInitialize for Chart: '<S56>/Chart' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowSlopeAssist = 0.0F;
  PubIfDecisionPLAN_MDL_DW.ACCModeStsK1 = 0U;
  PubIfDecisionPLAN_MDL_DW.tStartUpEnable = 0.0F;
  PubIfDecisionPLAN_MDL_B.LongCtrl_coefVelDist2AccelStartUp = 1.0F;

  /* SystemInitialize for Chart: '<S56>/Chart1' incorporates:
   *  SubSystem: '<S92>/coefVelTargRel2AccelCalc'
   */
  /* SystemInitialize for Lookup_n-D: '<S98>/1-D Lookup Table' incorporates:
   *  Outport: '<S98>/coefVelTargRel2Accel'
   */
  PubIfDecisionPLAN_MDL_B.uDLookupTable_j = 0.0F;

  /* SystemInitialize for Chart: '<S56>/Chart1' incorporates:
   *  SubSystem: '<S92>/coefDistTargRel2AccelCalc'
   */
  /* SystemInitialize for Lookup_n-D: '<S97>/1-D Lookup Table' incorporates:
   *  Outport: '<S97>/coefDistTargRel2Accel'
   */
  PubIfDecisionPLAN_MDL_B.uDLookupTable_h = 0.0F;
  PubIfDecisionPLAN_MDL_B.lowerJerkOverride = 0.0F;

  /* SystemInitialize for Chart: '<S74>/OverrideJerk' incorporates:
   *  SubSystem: '<S81>/lowerJerkOverrideCalc'
   */
  /* SystemInitialize for Lookup_n-D: '<S82>/1-D Lookup Table' incorporates:
   *  Outport: '<S82>/lowerJerkOverride'
   */
  PubIfDecisionPLAN_MDL_B.uDLookupTable_l0 = 0.0F;

  /* SystemInitialize for Product: '<S56>/Product' incorporates:
   *  Outport: '<S16>/accelFollow'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollow = 0.0F;

  /* SystemInitialize for Sum: '<S76>/Add' incorporates:
   *  Outport: '<S16>/upperBandFollow'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandFollow = 0.0F;

  /* SystemInitialize for Sum: '<S76>/Add1' incorporates:
   *  Outport: '<S16>/lowerBandFollow'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandFollow = 0.0F;

  /* SystemInitialize for Product: '<S73>/Product' incorporates:
   *  Outport: '<S16>/upperJerkFollow'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkFollow = 0.0F;

  /* SystemInitialize for MinMax: '<S74>/MinMax1' incorporates:
   *  Outport: '<S16>/lowerJerkFollow'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkFollow = 0.0F;

  /* SystemInitialize for Outport: '<S16>/distRelPlanMin' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanMin = 0.0F;

  /* SystemInitialize for Outport: '<S16>/distRelDesDistRelPlanNumMin' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_distRelDesDistRelPlanNumMin = 0.0F;

  /* SystemInitialize for Lookup_n-D: '<S52>/DesireDistance2' incorporates:
   *  Outport: '<S16>/distDesCur'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur = 0.0F;

  /* SystemInitialize for Outport: '<S16>/tStartDecel' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_tStartDecel = 0.0F;

  /* SystemInitialize for MinMax: '<S72>/MinMax1' incorporates:
   *  Outport: '<S16>/accelFollowAfterJerk'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterJerk = 0.0F;

  /* SystemInitialize for Product: '<S57>/Product1' incorporates:
   *  Outport: '<S16>/ttc'
   */
  PubIfDecisionPLAN_MDL_B.Product1_h = 0.0F;
  for (i = 0; i < 40; i++) {
    /* SystemInitialize for Outport: '<S16>/velSubjPlanFollow' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanOpt[i] = 0.0F;

    /* SystemInitialize for Outport: '<S16>/accelSubjPlanOpt' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlanOpt[i] = 0.0F;
  }

  /* End of SystemInitialize for SubSystem: '<S9>/FollowCtrl' */

  /* SystemInitialize for Chart: '<S11>/Arbitrate' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.velPlanEffect = 0U;
  PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag = 0.0;

  /* SystemInitialize for Chart: '<S155>/DriveOff_Judge' */
  PubIfDecisionPLAN_MDL_DW.is_active_c59_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for Chart: '<S153>/DeceleToStop' incorporates:
   *  SubSystem: '<S166>/VxTargetCalc'
   */
  /* SystemInitialize for Sum: '<S168>/Add' incorporates:
   *  Outport: '<S168>/velTargetAbs'
   */
  PubIfDecisionPLAN_MDL_B.velTargetAbs = 0.0F;

  /* SystemInitialize for Chart: '<S153>/DeceleToStop' incorporates:
   *  SubSystem: '<S166>/DresCalc'
   */
  /* SystemInitialize for Sum: '<S167>/Add' incorporates:
   *  Outport: '<S167>/distRes'
   */
  PubIfDecisionPLAN_MDL_B.distRes = 0.0F;

  /* SystemInitialize for Iterator SubSystem: '<S154>/ACC_DisplayBar1' */
  for (ForEach_itr = 0; ForEach_itr < 3; ForEach_itr++) {
    /* InitializeConditions for UnitDelay: '<S169>/Unit Delay34' */
    PubIfDecisionPLAN_MDL_DW.CoreSubsys_es[ForEach_itr].UnitDelay34_DSTATE =
      ((uint8_T)0U);
  }

  /* End of SystemInitialize for SubSystem: '<S154>/ACC_DisplayBar1' */

  /* SystemInitialize for Chart: '<S156>/Chart' */
  PubIfDecisionPLAN_MDL_DW.is_active_c4_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c4_PubIfDecisionPLAN_MDL = 0;

  /* End of SystemInitialize for SubSystem: '<S8>/AP' */

  /* SystemInitialize for Chart: '<S189>/ALCHMISM' */
  PubIfDecisionPLAN_MDL_DW.is_active_c130_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c130_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for Chart: '<S183>/SigValueHold1' */
  PubIfDecisionPLAN_MDL_DW.is_active_c118_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c118_PubIfDecisionPLAN_MDL = 0;

  /* SystemInitialize for Iterator SubSystem: '<S462>/For Iterator Subsystem2' */
  PubIfDecisionPLAN_MDL_ForIteratorSubsystem2_Init
    (&PubIfDecisionPLAN_MDL_B.ForIteratorSubsystem2);

  /* End of SystemInitialize for SubSystem: '<S462>/For Iterator Subsystem2' */

  /* SystemInitialize for Iterator SubSystem: '<S462>/For Iterator Subsystem4' */
  PubIfDecisionPLAN_MDL_ForIteratorSubsystem2_Init
    (&PubIfDecisionPLAN_MDL_B.ForIteratorSubsystem4);

  /* End of SystemInitialize for SubSystem: '<S462>/For Iterator Subsystem4' */

  /* SystemInitialize for SignalConversion generated from: '<Root>/PLAN_Longctrl_DecelToStopReq' */
  *rty_PLAN_Longctrl_DecelToStopReq =
    PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop;
}

/* System reset for referenced model: 'PubIfDecisionPLAN_MDL' */
void PubIfDecisionPLAN_MDL_Reset(void)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_k;
  int32_T i;

  /* InitializeConditions for UnitDelay: '<S463>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE = 3.75F;

  /* InitializeConditions for UnitDelay: '<S283>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_m = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_o = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay7' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay7_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay5' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay5_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S265>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_n = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S262>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_i = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S264>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_mv = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay8' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay8_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S185>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_mc = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay4' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_a = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S266>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_h = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S261>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g4 = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S263>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_ad = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S185>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_f0 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S302>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_lp = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay15' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay15_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S301>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pu = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S304>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_ot = false;

  /* InitializeConditions for UnitDelay: '<S304>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_m = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay9' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay9_DSTATE_e = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay10' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay10_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay11' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay11_DSTATE_i = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S334>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pv = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S342>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_a = false;

  /* InitializeConditions for UnitDelay: '<S342>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_c0 = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay14' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay14_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_i4 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_i1 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay6' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay6_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S337>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S340>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_d = false;

  /* InitializeConditions for UnitDelay: '<S340>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_b = 0.0F;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g = 0.0F;

  /* InitializeConditions for UnitDelay: '<S369>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_ia = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S368>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_e = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S371>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S335>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_f = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S343>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_m = false;

  /* InitializeConditions for UnitDelay: '<S343>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_f = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S370>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_eg = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S226>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_d = 0.0F;

  /* InitializeConditions for UnitDelay: '<S224>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_kn = false;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay16' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay16_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay13' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay13_DSTATE_e = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S366>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_k = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S184>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g3 = false;

  /* InitializeConditions for UnitDelay: '<S223>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S367>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_cu = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S184>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_dv = false;

  /* InitializeConditions for S-Function (sfix_udelay): '<S184>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[0] = 0.0F;
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[1] = 0.0F;
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[2] = 0.0F;
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S182>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_nj = false;

  /* InitializeConditions for UnitDelay: '<S421>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_e = false;

  /* InitializeConditions for UnitDelay: '<S421>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_he = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S420>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_mr = false;

  /* InitializeConditions for UnitDelay: '<S420>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_o = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S413>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_j = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S412>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_hk = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S189>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jg = false;

  /* InitializeConditions for UnitDelay: '<S431>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_px = false;

  /* InitializeConditions for UnitDelay: '<S431>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_a = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S432>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_me = false;

  /* InitializeConditions for UnitDelay: '<S432>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_l = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S440>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S440>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_im = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S441>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_g = false;

  /* InitializeConditions for UnitDelay: '<S441>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ia = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S450>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_i = false;

  /* InitializeConditions for UnitDelay: '<S450>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_gs = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S425>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jd = false;

  /* InitializeConditions for UnitDelay: '<S425>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_do = false;

  /* InitializeConditions for UnitDelay: '<S425>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ob = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S425>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_dc = false;

  /* InitializeConditions for UnitDelay: '<S424>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_o = false;

  /* InitializeConditions for UnitDelay: '<S424>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_b = false;

  /* InitializeConditions for UnitDelay: '<S424>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ar = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S424>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_f = false;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay12' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay12_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S285>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_k = false;

  /* InitializeConditions for UnitDelay: '<S285>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_d = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S349>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S460>/Unit Delay14' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay14_DSTATE_m = ((uint8_T)0U);
  for (i = 0; i < 11; i++) {
    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay11' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay11_DSTATE[i] =
      rtCP_UnitDelay11_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay12' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay12_DSTATE[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay13' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay13_DSTATE[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jw[i] = ((uint8_T)0U);

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_c[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay10' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay10_DSTATE[i] =
      rtCP_UnitDelay10_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay8' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay8_DSTATE[i] =
      rtCP_UnitDelay8_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay7' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay7_DSTATE[i] =
      rtCP_UnitDelay7_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay5' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay5_DSTATE[i] =
      rtCP_UnitDelay5_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay6' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay6_DSTATE[i] =
      rtCP_UnitDelay6_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay4' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE[i] =
      rtCP_UnitDelay4_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S460>/Unit Delay9' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay9_DSTATE[i] =
      rtCP_UnitDelay9_InitialCondition[i];

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pj[i] = ((uint8_T)0U);

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_g[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_f[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_g[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S471>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gm[i] = ((uint8_T)0U);

    /* InitializeConditions for UnitDelay: '<S471>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_i[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S471>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_p[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S471>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_d[i] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S489>/Unit Delay4' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE_k[i] = 0.0F;
  }

  /* InitializeConditions for UnitDelay: '<S2>/Output' */
  PubIfDecisionPLAN_MDL_DW.Output_DSTATE = ((uint8_T)0U);

  /* SystemReset for Chart: '<S185>/SigValueHold1' */
  PubIfDecisionPLAN_MDL_DW.is_active_c121_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c121_PubIfDecisionPLAN_MDL = 0;

  /* SystemReset for Chart: '<S185>/SigValueHold3' */
  PubIfDecisionPLAN_MDL_DW.is_active_c122_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c122_PubIfDecisionPLAN_MDL = 0;

  /* SystemReset for Chart: '<S337>/Chart' */
  PubIfDecisionPLAN_MDL_DW.is_active_c123_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c123_PubIfDecisionPLAN_MDL = 0;

  /* SystemReset for Chart: '<S341>/SigHold2' */
  PubIfDecisionPLAN_MDL_SigHold1_Reset(&PubIfDecisionPLAN_MDL_DW.sf_SigHold2);

  /* SystemReset for Chart: '<S341>/SigHold1' */
  PubIfDecisionPLAN_MDL_SigHold1_Reset(&PubIfDecisionPLAN_MDL_DW.sf_SigHold1);

  /* SystemReset for Chart: '<S184>/Chart' */
  PubIfDecisionPLAN_MDL_DW.is_LeLc = 0;
  PubIfDecisionPLAN_MDL_DW.is_RiLc = 0;
  PubIfDecisionPLAN_MDL_DW.is_active_c1_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c1_PubIfDecisionPLAN_MDL = 0;

  /* SystemReset for Chart: '<S4>/ALC_DECS' */
  PubIfDecisionPLAN_MDL_DW.is_ALC_ON = 0;
  PubIfDecisionPLAN_MDL_DW.is_active_c115_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c115_PubIfDecisionPLAN_MDL = 0;

  /* SystemReset for Chart: '<S182>/ALCHMISM' */
  PubIfDecisionPLAN_MDL_DW.is_active_c116_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c116_PubIfDecisionPLAN_MDL = 0;

  /* SystemReset for Atomic SubSystem: '<S8>/AP' */
  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gy = 0.0F;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_gj = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S39>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_fj = false;

  /* InitializeConditions for UnitDelay: '<S39>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_dg = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay22' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay22_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay21' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay21_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay20' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay20_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay19' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay19_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay63' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay63_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay62' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay62_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay22' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay22_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay21' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay21_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay20' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay20_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay19' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay19_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay63' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay63_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay62' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay62_DSTATE[1] = 0.0F;
  for (i = 0; i < 25; i++) {
    /* InitializeConditions for S-Function (sfix_udelay): '<S144>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay_X[i] = 0.0F;

    /* InitializeConditions for S-Function (sfix_udelay): '<S144>/Tapped Delay1' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_m[i] = 0.0F;
  }

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S140>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay42' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay42_DSTATE[0] = false;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay43' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay43_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay48' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay48_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay47' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay47_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay46' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay46_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay45' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay45_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay44' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay44_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay42' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay42_DSTATE[1] = false;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay43' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay43_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay48' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay48_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay47' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay47_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay46' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay46_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay45' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay45_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay44' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay44_DSTATE[1] = 0.0F;

  /* InitializeConditions for Memory: '<S109>/Memory' */
  PubIfDecisionPLAN_MDL_DW.Memory_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S127>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_a = 0.0F;

  /* InitializeConditions for UnitDelay: '<S113>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_p = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S20>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h0 = ((uint8_T)0U);

  /* InitializeConditions for Memory: '<S20>/Memory5' */
  PubIfDecisionPLAN_MDL_DW.Memory5_PreviousInput = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S22>/Tapped Delay' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay_X_b = ((uint8_T)0U);

  /* InitializeConditions for S-Function (sfix_udelay): '<S22>/Tapped Delay1' */
  for (i = 0; i < 19; i++) {
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_i[i] = 0.0F;
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<S22>/Tapped Delay1' */

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_hu = false;

  /* InitializeConditions for UnitDelay: '<S178>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_o = 0U;

  /* SystemReset for Chart: '<S12>/AccelCCCalc' */
  PubIfDecisionPLAN_MDL_DW.CCSetSpdK1 = 255.0;
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCRaw = 0.0F;
  PubIfDecisionPLAN_MDL_B.fastDecel = 0.0;

  /* SystemReset for Iterator SubSystem: '<S108>/LP' */
  for (ForEach_itr_k = 0; ForEach_itr_k < 10; ForEach_itr_k++) {
    /* InitializeConditions for S-Function (sfix_udelay): '<S115>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[0] = 0.0F;
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[1] = 0.0F;
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[2] = 0.0F;

    /* InitializeConditions for UnitDelay: '<S115>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].UnitDelay_DSTATE = 0.0F;
  }

  /* End of SystemReset for SubSystem: '<S108>/LP' */

  /* SystemReset for Chart: '<S18>/ORD' */
  PubIfDecisionPLAN_MDL_DW.offRampDecelStart = false;

  /* SystemReset for Chart: '<S22>/Chart' */
  PubIfDecisionPLAN_MDL_DW.tNoneActive2Active = 0.0F;

  /* SystemReset for Chart: '<S11>/Arbitrate' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb = 0.0F;
  PubIfDecisionPLAN_MDL_B.velPlanEffect = 0U;
  PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag = 0.0;

  /* SystemReset for Chart: '<S155>/DriveOff_Judge' */
  PubIfDecisionPLAN_MDL_DW.is_active_c59_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL = 0;

  /* SystemReset for Iterator SubSystem: '<S154>/ACC_DisplayBar1' */
  for (ForEach_itr = 0; ForEach_itr < 3; ForEach_itr++) {
    /* InitializeConditions for UnitDelay: '<S169>/Unit Delay34' */
    PubIfDecisionPLAN_MDL_DW.CoreSubsys_es[ForEach_itr].UnitDelay34_DSTATE =
      ((uint8_T)0U);
  }

  /* End of SystemReset for SubSystem: '<S154>/ACC_DisplayBar1' */

  /* SystemReset for Chart: '<S156>/Chart' */
  PubIfDecisionPLAN_MDL_DW.is_active_c4_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c4_PubIfDecisionPLAN_MDL = 0;

  /* End of SystemReset for SubSystem: '<S8>/AP' */

  /* SystemReset for Chart: '<S189>/ALCHMISM' */
  PubIfDecisionPLAN_MDL_DW.is_active_c130_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c130_PubIfDecisionPLAN_MDL = 0;

  /* SystemReset for Chart: '<S183>/SigValueHold1' */
  PubIfDecisionPLAN_MDL_DW.is_active_c118_PubIfDecisionPLAN_MDL = 0U;
  PubIfDecisionPLAN_MDL_DW.is_c118_PubIfDecisionPLAN_MDL = 0;
}

/* Start for referenced model: 'PubIfDecisionPLAN_MDL' */
void PubIfDecisionPLAN_MDL_Start(void)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_p;
  int32_T ForEach_itr_k;

  /* Start for Atomic SubSystem: '<S8>/AP' */
  /* Start for Constant: '<S31>/deceleratejerk1' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkCC = (-4.0F);

  /* Start for Constant: '<S31>/acceleratejerk1' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkCC = 4.0F;

  /* Start for Iterator SubSystem: '<S108>/LP' */
  for (ForEach_itr_k = 0; ForEach_itr_k < 10; ForEach_itr_k++) {
    /* Start for Abs: '<S115>/Abs1' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Abs1 = 0.0F;

    /* Start for RelationalOperator: '<S122>/Compare' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Compare = false;

    /* Start for S-Function (sfix_udelay): '<S115>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].TappedDelay2[0] = 0.0F;
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[0] = 0.0F;

    /* Start for S-Function (sfix_udelay): '<S115>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].TappedDelay2[1] = 0.0F;
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[1] = 0.0F;

    /* Start for S-Function (sfix_udelay): '<S115>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].TappedDelay2[2] = 0.0F;
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[2] = 0.0F;

    /* Start for MinMax: '<S115>/Max' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Max = 0.0F;

    /* Start for MinMax: '<S115>/Min' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Min = 0.0F;

    /* Start for Sum: '<S115>/Sum of Elements2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].SumofElements2 = 0.0F;

    /* Start for Sum: '<S115>/Add' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Add = 0.0F;

    /* Start for UnitDelay: '<S115>/Unit Delay' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].UnitDelay = 0.0F;
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].UnitDelay_DSTATE = 0.0F;

    /* Start for Sum: '<S115>/Add5' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Add5 = 0.0F;

    /* Start for Product: '<S115>/Product8' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Product8 = 0.0F;

    /* Start for Sum: '<S115>/Add6' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Add6 = 0.0F;

    /* Start for Switch: '<S115>/Switch' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Switch = 0.0F;

    /* Start for Abs: '<S115>/Abs' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Abs = 0.0F;
  }

  /* End of Start for SubSystem: '<S108>/LP' */

  /* Start for If: '<S109>/If' */
  PubIfDecisionPLAN_MDL_DW.If_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<S109>/If Action Subsystem' */
  /* Start for Iterator SubSystem: '<S125>/For Each Subsystem' */
  for (ForEach_itr_p = 0; ForEach_itr_p < 2; ForEach_itr_p++) {
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].CurvatureIFC = 0.0F;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC2V = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC3V = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC2V = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC3V = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dDisFront = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dDisFront = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].velSubj = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC2V_c = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC3V_j = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dDisFront_f = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].velSubj_a = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC2V_b = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC3V_n = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dDisFront_c = 0.0;
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].velSubj_f = 0.0;

    /* Start for Chart: '<S129>/CurvatureChar' incorporates:
     *  SubSystem: '<S131>/Curvature1Calc'
     */
    /* Start for Lookup_n-D: '<S132>/1-D Lookup Table1' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].uDLookupTable1 = 0.0;

    /* Start for Product: '<S132>/Product' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product_j = 0.0;

    /* Start for Product: '<S132>/Product1' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product1_l = 0.0;

    /* Start for MinMax: '<S132>/MinMax' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax_n = 0.0;

    /* Start for Product: '<S132>/Product2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product2_j = 0.0;

    /* Start for Sum: '<S132>/Add1' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add1_n = 0.0;

    /* Start for Product: '<S132>/Product3' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product3_g = 0.0;

    /* Start for Product: '<S132>/Product4' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product4_a = 0.0;

    /* Start for MinMax: '<S132>/MinMax1' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax1 = 0.0;

    /* Start for Product: '<S132>/Product5' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product5_b = 0.0;

    /* Start for Sum: '<S132>/Add3' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add3_c = 0.0;

    /* Start for Sum: '<S132>/Add4' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add4 = 0.0;

    /* Start for Product: '<S132>/Product6' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product6 = 0.0;

    /* Start for Chart: '<S129>/CurvatureChar' incorporates:
     *  SubSystem: '<S131>/Curvature2Calc'
     */
    /* Start for Lookup_n-D: '<S133>/1-D Lookup Table2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].uDLookupTable2_c = 0.0;

    /* Start for Product: '<S133>/Product' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product = 0.0;

    /* Start for Product: '<S133>/Product1' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product1 = 0.0;

    /* Start for MinMax: '<S133>/MinMax' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax_a = 0.0;

    /* Start for Product: '<S133>/Product2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product2 = 0.0;

    /* Start for Sum: '<S133>/Add1' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add1 = 0.0;

    /* Start for Chart: '<S129>/CurvatureChar' incorporates:
     *  SubSystem: '<S131>/Curvature3Calc'
     */
    /* Start for Lookup_n-D: '<S134>/1-D Lookup Table2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].uDLookupTable2 = 0.0;

    /* Start for Product: '<S134>/Product3' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product3 = 0.0;

    /* Start for Product: '<S134>/Product4' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product4 = 0.0;

    /* Start for MinMax: '<S134>/MinMax' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax = 0.0;

    /* Start for Product: '<S134>/Product5' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product5 = 0.0;

    /* Start for Sum: '<S134>/Add3' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add3 = 0.0;
  }

  /* End of Start for SubSystem: '<S125>/For Each Subsystem' */
  /* End of Start for SubSystem: '<S109>/If Action Subsystem' */

  /* Start for Iterator SubSystem: '<S154>/ACC_DisplayBar1' */
  for (ForEach_itr = 0; ForEach_itr < 3; ForEach_itr++) {
    /* Start for UnitDelay: '<S169>/Unit Delay34' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].UnitDelay34 = 0U;

    /* Start for MATLAB Function: '<S169>/ACC_DisplayBar' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 0U;
  }

  /* End of Start for SubSystem: '<S154>/ACC_DisplayBar1' */
  /* End of Start for SubSystem: '<S8>/AP' */

  /* ConstCode for Atomic SubSystem: '<S8>/AP' */
  /* ConstCode for Constant: '<S31>/deceleratejerk1' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkCC = (-4.0F);

  /* ConstCode for Constant: '<S31>/acceleratejerk1' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkCC = 4.0F;

  /* End of ConstCode for SubSystem: '<S8>/AP' */

  /* ConstCode for Constant: '<S3>/Constant' */
  PubIfDecisionPLAN_MDL_B.PLAN_AP_SubModel_VERSION = 11090591U;

  /* ConstCode for Constant: '<S3>/Constant3' */
  PubIfDecisionPLAN_MDL_B.PLAN_AP_SubModel_Number = 301U;

  /* ConstCode for RelationalOperator: '<S281>/Compare' incorporates:
   *  Constant: '<S281>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_LciMrc = (0 == ((uint8_T)1U));

  /* ConstCode for Constant: '<S4>/Constant5' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_SubModel_VERSION = 11100000U;

  /* ConstCode for Constant: '<S4>/Constant7' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_SubModel_Number = 301U;

  /* ConstCode for Constant: '<S5>/Constant5' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_SubModel_VERSION = 39220304U;

  /* ConstCode for Constant: '<S5>/Constant6' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_SubModel_Number = 301U;

  /* ConstCode for Constant: '<S1>/Constant' */
  PubIfDecisionPLAN_MDL_B.PLAN_SW_VERSION = 2103180110U;

  /* ConstCode for Constant: '<S1>/Constant1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALL_SubModel_VERSION = 39150000U;

  /* ConstCode for Constant: '<S1>/Constant4' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALL_SubModel_Number = 301U;
}

/* Outputs for referenced model: 'PubIfDecisionPLAN_MDL' */
void PubIfDecisionPLAN_MDL(const RFM_LINE_BUS *rtu_RFM_LINE_L1, const
  RFM_LINE_BUS *rtu_RFM_LINE_R1, const LSM_HWA_BUS *rtu_LSM_HWA, const
  LSM_ESS_BUS *rtu_LSM_ESS, const TOS_LC_BUS *rtu_TOS_LC, const TOS_ACCP0_BUS
  *rtu_TOS_ACCP0, const TOS_ACCP2_BUS *rtu_TOS_ACCP2, const TOS_ACCP3_BUS
  *rtu_TOS_ACCP3, const uint32_T *rtu_TOS_UpdateCnt, const VSM_LON_CTRL_BUS
  *rtu_VSM_LON_CTRL, const real32_T *rtu_vxvRefMs, const real32_T *rtu_axvRefMs2,
  const real32_T *rtu_axvRoadSlopeMs2, const real32_T *rtu_kapTraj, const
  VCAN_ESP_MSG_BUS *rtu_PLAN_VCAN_ESP, const VSM_HMI_BUS *rtu_VSM_HMI, const
  real32_T *rtu_LONC_VLC_InternalAcc, const uint8_T *rtu_LSM_PilotTurnSwSts,
  const VSM_UOM_LC_BUS *rtu_VSM_UOM_LC, const uint16_T *rtu_LSM_PilotSPLDist,
  const uint8_T *rtu_LSM_PilotSPL, const real32_T
  *rtu_EHRV2_ROAD_INFO_i_road_curvature, const real32_T
  *rtu_EHRV2_ROAD_INFO_i_road_curvature_far, const uint16_T
  *rtu_EHRV2_ROAD_INFO_i_road_curvature_far_distance, const real32_T
  rtu_EHRV2_ROAD_INFO_i_road_curvature_value_matrix[10], const real32_T
  rtu_EHRV2_ROAD_INFO_i_road_curvature_distance_matrix[10], const uint8_T
  *rtu_EHRV2_ROAD_INFO_i_road_curvature_matrix_size, const uint32_T
  *rtu_RFM_UpdateCnt, PLAN_DPC_ESS_BUS *rty_PLAN_DPC_ESS, PLAN_ALC_DECS_BUS
  *rty_PLAN_ALC_DECS, PLAN_ACCPLAN_BUS *rty_PLAN_ACCPLAN, boolean_T
  *rty_PLAN_HMI_BUS_tor, uint8_T *rty_PLAN_HMI_BUS_ACC_TgtObjBarDisp, uint8_T
  *rty_PLAN_HMI_BUS_ACC_LeTgtObjBarDisp, uint8_T
  *rty_PLAN_HMI_BUS_ACC_RiTgtObjBarDisp, boolean_T
  *rty_PLAN_HMI_BUS_IntelligentCurveActive, boolean_T
  *rty_PLAN_Longctrl_DecelToStopReq, boolean_T
  *rty_PLAN_DriverOffConditionFulfilled)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_p;
  int32_T ForEach_itr_k;
  static const real32_T g[40] = { 0.25F, 1.0F, 2.25F, 4.0F, 6.25F, 9.0F, 12.25F,
    16.0F, 20.25F, 25.0F, 30.25F, 36.0F, 42.25F, 49.0F, 56.25F, 64.0F, 72.25F,
    81.0F, 90.25F, 100.0F, 110.25F, 121.0F, 132.25F, 144.0F, 156.25F, 169.0F,
    182.25F, 196.0F, 210.25F, 225.0F, 240.25F, 256.0F, 272.25F, 289.0F, 306.25F,
    324.0F, 342.25F, 361.0F, 380.25F, 400.0F };

  static const real32_T h[40] = { 0.125F, 1.0F, 3.375F, 8.0F, 15.625F, 27.0F,
    42.875F, 64.0F, 91.125F, 125.0F, 166.375F, 216.0F, 274.625F, 343.0F,
    421.875F, 512.0F, 614.125F, 729.0F, 857.375F, 1000.0F, 1157.625F, 1331.0F,
    1520.875F, 1728.0F, 1953.125F, 2197.0F, 2460.375F, 2744.0F, 3048.625F,
    3375.0F, 3723.875F, 4096.0F, 4492.125F, 4913.0F, 5359.375F, 5832.0F,
    6331.625F, 6859.0F, 7414.875F, 8000.0F };

  static const real32_T k[40] = { 0.0625F, 1.0F, 5.0625F, 16.0F, 39.0625F, 81.0F,
    150.0625F, 256.0F, 410.0625F, 625.0F, 915.0625F, 1296.0F, 1785.0625F,
    2401.0F, 3164.0625F, 4096.0F, 5220.0625F, 6561.0F, 8145.0625F, 10000.0F,
    12155.0625F, 14641.0F, 17490.0625F, 20736.0F, 24414.0625F, 28561.0F,
    33215.0625F, 38416.0F, 44205.0625F, 50625.0F, 57720.0625F, 65536.0F,
    74120.0625F, 83521.0F, 93789.0625F, 104976.0F, 117135.063F, 130321.0F,
    144590.063F, 160000.0F };

  static const real32_T l[40] = { 0.03125F, 1.0F, 7.59375F, 32.0F, 97.65625F,
    243.0F, 525.21875F, 1024.0F, 1845.28125F, 3125.0F, 5032.84375F, 7776.0F,
    11602.9063F, 16807.0F, 23730.4688F, 32768.0F, 44370.5313F, 59049.0F,
    77378.0938F, 100000.0F, 127628.156F, 161051.0F, 201135.719F, 248832.0F,
    305175.781F, 371293.0F, 448403.344F, 537824.0F, 640973.438F, 759375.0F,
    894661.0F, 1.048576E+6F, 1.222981E+6F, 1.419857E+6F, 1.64130863E+6F,
    1.889568E+6F, 2.16699875E+6F, 2.476099E+6F, 2.81950625E+6F, 3.2E+6F };

  static const real32_T q[20] = { 0.25F, 2.25F, 6.25F, 12.25F, 20.25F, 30.25F,
    42.25F, 56.25F, 72.25F, 90.25F, 110.25F, 132.25F, 156.25F, 182.25F, 210.25F,
    240.25F, 272.25F, 306.25F, 342.25F, 380.25F };

  static const real32_T r[20] = { 0.125F, 3.375F, 15.625F, 42.875F, 91.125F,
    166.375F, 274.625F, 421.875F, 614.125F, 857.375F, 1157.625F, 1520.875F,
    1953.125F, 2460.375F, 3048.625F, 3723.875F, 4492.125F, 5359.375F, 6331.625F,
    7414.875F };

  static const real32_T s[20] = { 0.0625F, 5.0625F, 39.0625F, 150.0625F,
    410.0625F, 915.0625F, 1785.0625F, 3164.0625F, 5220.0625F, 8145.0625F,
    12155.0625F, 17490.0625F, 24414.0625F, 33215.0625F, 44205.0625F, 57720.0625F,
    74120.0625F, 93789.0625F, 117135.063F, 144590.063F };

  static const real32_T t_0[20] = { 0.03125F, 7.59375F, 97.65625F, 525.21875F,
    1845.28125F, 5032.84375F, 11602.9063F, 23730.4688F, 44370.5313F, 77378.0938F,
    127628.156F, 201135.719F, 305175.781F, 448403.344F, 640973.375F, 894661.0F,
    1.222981E+6F, 1.64130863E+6F, 2.16699875E+6F, 2.81950625E+6F };

  static const real32_T u[20] = { 0.75F, 6.75F, 18.75F, 36.75F, 60.75F, 90.75F,
    126.75F, 168.75F, 216.75F, 270.75F, 330.75F, 396.75F, 468.75F, 546.75F,
    630.75F, 720.75F, 816.75F, 918.75F, 1026.75F, 1140.75F };

  static const real32_T v[20] = { 0.5F, 13.5F, 62.5F, 171.5F, 364.5F, 665.5F,
    1098.5F, 1687.5F, 2456.5F, 3429.5F, 4630.5F, 6083.5F, 7812.5F, 9841.5F,
    12194.5F, 14895.5F, 17968.5F, 21437.5F, 25326.5F, 29659.5F };

  static const real32_T w[20] = { 0.3125F, 25.3125F, 195.3125F, 750.3125F,
    2050.3125F, 4575.3125F, 8925.3125F, 15820.3125F, 26100.3125F, 40725.3125F,
    60775.3125F, 87450.3125F, 122070.313F, 166075.313F, 221025.313F, 288600.313F,
    370600.313F, 468945.313F, 585675.313F, 722950.313F };

  static const real32_T y[20] = { 2.5F, 67.5F, 312.5F, 857.5F, 1822.5F, 3327.5F,
    5492.5F, 8437.5F, 12282.5F, 17147.5F, 23152.5F, 30417.5F, 39062.5F, 49207.5F,
    60972.5F, 74477.5F, 89842.5F, 107187.5F, 126632.5F, 148297.5F };

  static const int16_T x[20] = { 3, 27, 75, 147, 243, 363, 507, 675, 867, 1083,
    1323, 1587, 1875, 2187, 2523, 2883, 3267, 3675, 4107, 4563 };

  static const int8_T n_0[6] = { 1, 0, 0, 0, 0, 0 };

  static const int8_T o[6] = { 0, 1, 0, 0, 0, 0 };

  static const int8_T p[6] = { 0, 0, 2, 0, 0, 0 };

  real_T L_Oncoming[11];
  real_T R_Oncoming[11];
  real_T DeltaDistance_Y_R;
  real_T absx;
  int32_T ipiv[4];
  int32_T JminIni;
  int32_T exitg2;
  int32_T i_0;
  int32_T i_1;
  int32_T i_2;
  int32_T kAcol;
  int32_T oldestbufIndex;
  real32_T a[800];
  real32_T adet[800];
  real32_T a_0[40];
  real32_T distDesPlanExpand[40];
  real32_T vTerminateExpand[40];
  real32_T n[36];
  real32_T adetsum[20];
  real32_T dsum[20];
  real32_T vsum[20];
  real32_T A[16];
  real32_T MatrixA[16];
  real32_T ScaleDis[12];
  real32_T lowScaleDis[12];
  real32_T upScaleDis[12];
  real32_T velDelta[10];
  real32_T C[6];
  real32_T xi[4];
  real32_T fractions[2];
  real32_T Error;
  real32_T Error_idx_1;
  real32_T Error_idx_2;
  real32_T Jmin;
  real32_T LineC2Factor;
  real32_T NearestObjDx_L;
  real32_T NearestObjDx_R;
  real32_T NearestObjSpeed_L;
  real32_T ObjDxRelFinal_FL_1;
  real32_T ObjDxRelFinal_FR;
  real32_T ObjDxRelFinal_RL;
  real32_T ObjDxRelInitial_Rear;
  real32_T ObjVxGnd;
  real32_T P_Global_DxvFrontBumper_m_0;
  real32_T P_VSM_DPC_HWALineRearA3Factor;
  real32_T RoadWidth;
  real32_T RtVehSpdms;
  real32_T ToleranceBoxRightOffset;
  real32_T VehicleSpd_ms;
  real32_T accelNegSum;
  real32_T b_y;
  real32_T deltaVelCC;
  real32_T distDesThresAccelFadeOut;
  real32_T jTargStop;
  real32_T rtb_ImpSel_InsertedFor_L1dC3V_at_outport_0;
  real32_T rtb_ImpSel_InsertedFor_LongCtrl_IC_EHRV2_CurMatrix_at_outport_0;
  real32_T rtb_ImpSel_InsertedFor_R1dC3V_at_outport_0;
  real32_T t;
  real32_T t_dy_idx_0;
  real32_T t_dy_idx_1;
  real32_T temp;
  real32_T velSubjNegTolerance;
  uint32_T bpIndices[2];
  uint32_T bpIdx;
  uint16_T u0;
  uint16_T u1;
  int8_T NearestObj_Oncoming[11];
  int8_T rtAction;
  uint8_T LaneConf[2];
  uint8_T i;
  uint8_T iMax;
  boolean_T tmpForInput_1[15];
  boolean_T tmpForInput_2[13];
  boolean_T tmpForInput_0[8];
  boolean_T tmpForInput[7];
  boolean_T tmpForInput_3[6];
  boolean_T tmp[2];
  boolean_T BigNumArbFail;
  boolean_T Update;
  boolean_T distRelPlanStartReasonable;
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T tmpForInput_idx_0;
  boolean_T tmpForInput_idx_4;

  /* UnitDelay: '<S463>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE;

  /* MATLAB Function: '<S463>/RoadWidthCalc' */
  PubIfDecisionPLAN_MDL_B.RoadWidth_l = PubIfDecisionPLAN_MDL_B.UnitDelay1;
  if ((rtu_RFM_LINE_L1->bIsLineExist > 1.5) && (rtu_RFM_LINE_R1->bIsLineExist >
       1.5) && (fabsf((atanf(rtu_RFM_LINE_L1->dC1V) - atanf
                       (rtu_RFM_LINE_R1->dC1V)) * 57.3F) < 3.0F)) {
    temp = (rtu_RFM_LINE_L1->dC0V - rtu_RFM_LINE_R1->dC0V) / sqrtf
      (rtu_RFM_LINE_L1->dC1V * rtu_RFM_LINE_L1->dC1V + 1.0F);
    PubIfDecisionPLAN_MDL_B.RoadWidth_l = (temp -
      PubIfDecisionPLAN_MDL_B.UnitDelay1) * 0.1F +
      PubIfDecisionPLAN_MDL_B.UnitDelay1;
  }

  /* End of MATLAB Function: '<S463>/RoadWidthCalc' */

  /* MATLAB Function: '<S461>/DangerPlaus_Calculate_Radar' incorporates:
   *  Constant: '<S461>/Constant'
   *  Constant: '<S461>/Constant21'
   *  Constant: '<S461>/Constant22'
   *  Constant: '<S461>/Constant23'
   */
  deltaVelCC = rtu_LSM_ESS->ESSLeLineC3;
  t = rtu_LSM_ESS->ESSLeLineC2;
  RtVehSpdms = rtu_LSM_ESS->ESSLeLineC1;
  ToleranceBoxRightOffset = rtu_LSM_ESS->ESSLeLineC0;
  LineC2Factor = rtu_LSM_ESS->ESSLeRange;
  jTargStop = rtu_LSM_ESS->ESSRiLineC3;
  Jmin = rtu_LSM_ESS->ESSRiLineC2;
  distDesThresAccelFadeOut = rtu_LSM_ESS->ESSRiLineC1;
  Error_idx_1 = rtu_LSM_ESS->ESSRiLineC0;
  Error_idx_2 = rtu_LSM_ESS->ESSRiRange;
  RoadWidth = PubIfDecisionPLAN_MDL_B.RoadWidth_l;
  t_dy_idx_0 = rtP_P_PLAN_DPC_HWALineRearA2Factor;
  P_VSM_DPC_HWALineRearA3Factor = rtP_P_PLAN_DPC_HWALineRearA3Factor;
  P_Global_DxvFrontBumper_m_0 = P_Global_DxvFrontBumper_m;
  t_dy_idx_1 = P_Global_DxvRearBumper_m;
  memset(&L_Oncoming[0], 0, 11U * sizeof(real_T));
  memset(&R_Oncoming[0], 0, 11U * sizeof(real_T));
  VehicleSpd_ms = rtu_PLAN_VCAN_ESP->VehSpd / 3.6F;
  temp = fabsf(rtu_LSM_ESS->ESSLeLineC0) / PubIfDecisionPLAN_MDL_B.RoadWidth_l *
    4.0F;
  b_y = fabsf(rtu_LSM_ESS->ESSRiLineC0) / PubIfDecisionPLAN_MDL_B.RoadWidth_l *
    4.0F;
  Update = false;
  NearestObjDx_L = 999.0F;
  NearestObjSpeed_L = 999.0F;
  BigNumArbFail = false;
  NearestObjDx_R = 999.0F;
  velSubjNegTolerance = 999.0F;
  accelNegSum = 0.0F;
  ObjDxRelFinal_FL_1 = 0.0F;
  for (JminIni = 0; JminIni < 11; JminIni++) {
    if ((rtu_TOS_LC->Object_ID[JminIni] > 0) && (rtu_TOS_LC->Object_Age[JminIni]
         > 3.0F)) {
      ObjVxGnd = rtu_TOS_LC->Object_VX[JminIni] + VehicleSpd_ms;
      if (JminIni + 1 == 1) {
        accelNegSum = ObjVxGnd;
      }

      if (rtu_TOS_LC->Object_DX[JminIni] >= 0.0F) {
        PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RL[JminIni] = -999.0;
        PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RR[JminIni] = -999.0;
        ObjDxRelInitial_Rear = rtu_TOS_LC->Object_DX[JminIni] -
          P_Global_DxvFrontBumper_m_0;
        ObjDxRelFinal_RL = ((temp + 3.0F) * ObjVxGnd + ObjDxRelInitial_Rear) -
          (temp + 3.0F) * VehicleSpd_ms;
        if (JminIni + 1 == 1) {
          ObjDxRelFinal_FL_1 = ObjDxRelFinal_RL;
        }

        ObjDxRelFinal_FR = ((b_y + 3.0F) * ObjVxGnd + ObjDxRelInitial_Rear) -
          (b_y + 3.0F) * VehicleSpd_ms;
        if (ObjDxRelInitial_Rear * ObjDxRelFinal_RL < 0.0F) {
          PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FL[JminIni] = 0.0;
        } else {
          PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FL[JminIni] = fminf
            (ObjDxRelInitial_Rear, ObjDxRelFinal_RL);
        }

        if (ObjDxRelInitial_Rear * ObjDxRelFinal_FR < 0.0F) {
          PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FR[JminIni] = 0.0;
        } else {
          PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FR[JminIni] = fminf
            (ObjDxRelInitial_Rear, ObjDxRelFinal_FR);
        }

        ObjDxRelInitial_Rear = ((0.0F * deltaVelCC * rtu_TOS_LC->
          Object_DX[JminIni] * rtu_TOS_LC->Object_DX[JminIni] *
          rtu_TOS_LC->Object_DX[JminIni] + Interpol_zjiXKfGp(0.0, 1.0,
          LineC2Factor, 1.0, LineC2Factor + 20.0F, 0.7, LineC2Factor + 40.0F,
          0.0, rtu_TOS_LC->Object_DX[JminIni]) * t * rtu_TOS_LC->
          Object_DX[JminIni] * rtu_TOS_LC->Object_DX[JminIni]) + RtVehSpdms *
          rtu_TOS_LC->Object_DX[JminIni]) + ToleranceBoxRightOffset;
        ObjDxRelFinal_RL = ((0.0F * jTargStop * rtu_TOS_LC->Object_DX[JminIni] *
                             rtu_TOS_LC->Object_DX[JminIni] *
                             rtu_TOS_LC->Object_DX[JminIni] + Interpol_zjiXKfGp
                             (0.0, 1.0, Error_idx_2, 1.0, Error_idx_2 + 20.0F,
                              0.7, Error_idx_2 + 40.0F, 0.0,
                              rtu_TOS_LC->Object_DX[JminIni]) * Jmin *
                             rtu_TOS_LC->Object_DX[JminIni] *
                             rtu_TOS_LC->Object_DX[JminIni]) +
                            distDesThresAccelFadeOut * rtu_TOS_LC->
                            Object_DX[JminIni]) + Error_idx_1;
        absx = fabsf(rtu_TOS_LC->Object_DY[JminIni] - ObjDxRelInitial_Rear);
        DeltaDistance_Y_R = fabsf(rtu_TOS_LC->Object_DY[JminIni] -
          ObjDxRelFinal_RL);
        if ((rtu_TOS_LC->Object_DY[JminIni] >= ObjDxRelInitial_Rear - RoadWidth /
             2.0F) && (rtu_TOS_LC->Object_DY[JminIni] <= RoadWidth / 2.0F +
                       ObjDxRelInitial_Rear) && (rtu_TOS_LC->Object_DX[JminIni] <=
             NearestObjDx_L)) {
          Update = true;
          NearestObjDx_L = rtu_TOS_LC->Object_DX[JminIni];
          NearestObjSpeed_L = ObjVxGnd;
          L_Oncoming[JminIni] = (ObjVxGnd < 0.0F);
        } else {
          if ((rtu_TOS_LC->Object_DY[JminIni] >= ObjDxRelFinal_RL - RoadWidth /
               2.0F) && (rtu_TOS_LC->Object_DY[JminIni] <= RoadWidth / 2.0F +
                         ObjDxRelFinal_RL) && (rtu_TOS_LC->Object_DX[JminIni] <=
               NearestObjDx_R)) {
            BigNumArbFail = true;
            NearestObjDx_R = rtu_TOS_LC->Object_DX[JminIni];
            velSubjNegTolerance = ObjVxGnd;
            R_Oncoming[JminIni] = (ObjVxGnd < 0.0F);
          }
        }
      } else {
        PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FL[JminIni] = 999.0;
        PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FR[JminIni] = 999.0;
        ObjDxRelInitial_Rear = rtu_TOS_LC->Object_DX[JminIni] + t_dy_idx_1;
        ObjDxRelFinal_RL = ((temp + 3.0F) * ObjVxGnd + ObjDxRelInitial_Rear) -
          (temp + 3.0F) * VehicleSpd_ms;
        ObjVxGnd = ((b_y + 3.0F) * ObjVxGnd + ObjDxRelInitial_Rear) - (b_y +
          3.0F) * VehicleSpd_ms;
        if (ObjDxRelInitial_Rear * ObjDxRelFinal_RL < 0.0F) {
          PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RL[JminIni] = 0.0;
        } else {
          PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RL[JminIni] = fmaxf
            (ObjDxRelInitial_Rear, ObjDxRelFinal_RL);
        }

        if (ObjDxRelInitial_Rear * ObjVxGnd < 0.0F) {
          PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RR[JminIni] = 0.0;
        } else {
          PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RR[JminIni] = fmaxf
            (ObjDxRelInitial_Rear, ObjVxGnd);
        }

        absx = fabsf(rtu_TOS_LC->Object_DY[JminIni] -
                     (((P_VSM_DPC_HWALineRearA3Factor * deltaVelCC *
                        rtu_TOS_LC->Object_DX[JminIni] * rtu_TOS_LC->
                        Object_DX[JminIni] * rtu_TOS_LC->Object_DX[JminIni] +
                        t_dy_idx_0 * t * rtu_TOS_LC->Object_DX[JminIni] *
                        rtu_TOS_LC->Object_DX[JminIni]) + RtVehSpdms *
                       rtu_TOS_LC->Object_DX[JminIni]) + ToleranceBoxRightOffset));
        DeltaDistance_Y_R = fabsf(rtu_TOS_LC->Object_DY[JminIni] -
          (((P_VSM_DPC_HWALineRearA3Factor * jTargStop * rtu_TOS_LC->
             Object_DX[JminIni] * rtu_TOS_LC->Object_DX[JminIni] *
             rtu_TOS_LC->Object_DX[JminIni] + t_dy_idx_0 * Jmin *
             rtu_TOS_LC->Object_DX[JminIni] * rtu_TOS_LC->Object_DX[JminIni]) +
            distDesThresAccelFadeOut * rtu_TOS_LC->Object_DX[JminIni]) +
           Error_idx_1));
      }
    } else {
      PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FL[JminIni] = 999.0;
      PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FR[JminIni] = 999.0;
      PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RL[JminIni] = -999.0;
      PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RR[JminIni] = -999.0;
      absx = 999.0;
      DeltaDistance_Y_R = 999.0;
    }

    if ((rtu_TOS_LC->Object_Fus_Type[JminIni] == 2) &&
        (rtu_TOS_LC->Object_MovingState[JminIni] == 3)) {
      PubIfDecisionPLAN_MDL_B.Y_Factor_L[JminIni] = Interpol_Un9SFRZd(0.0, 1.0,
        0.3F * RoadWidth, 1.0, 0.6F * RoadWidth, 0.0, 0.6F * RoadWidth + 1.0F,
        0.0, absx);
      PubIfDecisionPLAN_MDL_B.Y_Factor_R[JminIni] = Interpol_Un9SFRZd(0.0, 1.0,
        0.3F * RoadWidth, 1.0, 0.6F * RoadWidth, 0.0, 0.6F * RoadWidth + 1.0F,
        0.0, DeltaDistance_Y_R);
    } else {
      PubIfDecisionPLAN_MDL_B.Y_Factor_L[JminIni] = Interpol_Un9SFRZd(0.0, 1.0,
        0.5F * RoadWidth, 1.0, 0.5F * RoadWidth + 1.0F, 0.0, 0.5F * RoadWidth +
        2.0F, 0.0, absx);
      PubIfDecisionPLAN_MDL_B.Y_Factor_R[JminIni] = Interpol_Un9SFRZd(0.0, 1.0,
        0.5F * RoadWidth, 1.0, 0.5F * RoadWidth + 1.0F, 0.0, 0.5F * RoadWidth +
        2.0F, 0.0, DeltaDistance_Y_R);
    }

    tmpForInput_idx_0 = local_ismember_ubQD6XDC(1.0, L_Oncoming);
    distRelPlanStartReasonable = local_ismember_ubQD6XDC(1.0, R_Oncoming);
  }

  PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_L_Oncoming_flag = tmpForInput_idx_0;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_R_Oncoming_flag =
    distRelPlanStartReasonable;
  PubIfDecisionPLAN_MDL_B.NearestObjValid_L = Update;
  PubIfDecisionPLAN_MDL_B.NearestObjValid_R = BigNumArbFail;
  PubIfDecisionPLAN_MDL_B.NearestObjSpeed_L = NearestObjSpeed_L;
  PubIfDecisionPLAN_MDL_B.NearestObjSpeed_R = velSubjNegTolerance;
  PubIfDecisionPLAN_MDL_B.ObjVxGnd_1 = accelNegSum;
  PubIfDecisionPLAN_MDL_B.ObjDxRelFinal_FL_1 = ObjDxRelFinal_FL_1;

  /* End of MATLAB Function: '<S461>/DangerPlaus_Calculate_Radar' */
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* DataTypeConversion: '<S461>/Data Type Conversion' */
    PubIfDecisionPLAN_MDL_B.DataTypeConversion[i_2] = (real32_T)
      PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FL[i_2];
  }

  /* Lookup_n-D: '<S461>/SafeDistance' */
  PubIfDecisionPLAN_MDL_B.SafeDistance = look1_iflf_binlxpw
    (rtu_PLAN_VCAN_ESP->VehSpd, rtCP_SafeDistance_bp01Data,
     rtCP_SafeDistance_tableData, 4U);

  /* Gain: '<S461>/Gain6' */
  PubIfDecisionPLAN_MDL_B.Gain6 = 0.7F * PubIfDecisionPLAN_MDL_B.SafeDistance;

  /* Gain: '<S461>/Gain' */
  PubIfDecisionPLAN_MDL_B.Gain = 1.0F * PubIfDecisionPLAN_MDL_B.SafeDistance;

  /* Gain: '<S461>/Gain1' */
  PubIfDecisionPLAN_MDL_B.Gain1 = 1.3F * PubIfDecisionPLAN_MDL_B.SafeDistance;

  /* Gain: '<S461>/Gain2' */
  PubIfDecisionPLAN_MDL_B.Gain2 = 2.0F * PubIfDecisionPLAN_MDL_B.SafeDistance;

  /* SignalConversion generated from: '<S461>/Lookup Table Dynamic' incorporates:
   *  Constant: '<S461>/Constant1'
   *  Constant: '<S461>/Constant13'
   *  Constant: '<S461>/Constant17'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport2[0] =
    (-1.0F);
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport2[1] =
    0.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport2[2] =
    PubIfDecisionPLAN_MDL_B.Gain6;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport2[3] =
    PubIfDecisionPLAN_MDL_B.Gain;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport2[4] =
    PubIfDecisionPLAN_MDL_B.Gain1;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport2[5] =
    PubIfDecisionPLAN_MDL_B.Gain2;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport2[6] =
    50.0F;

  /* SignalConversion generated from: '<S461>/Lookup Table Dynamic' incorporates:
   *  Constant: '<S461>/Constant14'
   *  Constant: '<S461>/Constant18'
   *  Constant: '<S461>/Constant3'
   *  Constant: '<S461>/Constant4'
   *  Constant: '<S461>/Constant5'
   *  Constant: '<S461>/Constant6'
   *  Constant: '<S461>/Constant7'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport3[0] =
    1.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport3[1] =
    1.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport3[2] =
    0.8F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport3[3] =
    0.5F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport3[4] =
    0.3F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport3[5] =
    0.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport3[6] =
    0.0F;

  /* S-Function (sfix_look1_dyn): '<S461>/Lookup Table Dynamic' */
  /* Dynamic Look-Up Table Block: '<S461>/Lookup Table Dynamic'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  {
    int_T i1;
    const real32_T *u0 = &PubIfDecisionPLAN_MDL_B.DataTypeConversion[0];
    real32_T *y0 = &PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_X_Factor_FL[0];
    for (i1=0; i1 < 11; i1++) {
      LookUp_real32_T_real32_T( &(y0[i1]),
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport3
        [0], u0[i1],
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport2
        [0], 6U);
    }
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* DataTypeConversion: '<S461>/Data Type Conversion4' */
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_Y_Factor_L[i_2] = (real32_T)
      PubIfDecisionPLAN_MDL_B.Y_Factor_L[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S461>/Product' */
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_FL[i_2] =
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_X_Factor_FL[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_Y_Factor_L[i_2];
  }

  /* MinMax: '<S461>/MinMax2' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_FL[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    deltaVelCC = fmaxf(deltaVelCC,
                       PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_FL[JminIni
                       + 1]);
  }

  /* MinMax: '<S461>/MinMax2' */
  PubIfDecisionPLAN_MDL_B.MinMax2 = deltaVelCC;
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* DataTypeConversion: '<S461>/Data Type Conversion2' */
    PubIfDecisionPLAN_MDL_B.DataTypeConversion2[i_2] = (real32_T)
      PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RL[i_2];
  }

  /* Gain: '<S461>/Gain5' */
  PubIfDecisionPLAN_MDL_B.Gain5 = (-2.5F) * PubIfDecisionPLAN_MDL_B.SafeDistance;

  /* Gain: '<S461>/Gain4' */
  PubIfDecisionPLAN_MDL_B.Gain4 = (-1.6F) * PubIfDecisionPLAN_MDL_B.SafeDistance;

  /* Gain: '<S461>/Gain3' */
  PubIfDecisionPLAN_MDL_B.Gain3 = (-1.3F) * PubIfDecisionPLAN_MDL_B.SafeDistance;

  /* Gain: '<S461>/Gain7' */
  PubIfDecisionPLAN_MDL_B.Gain7 = (-1.0F) * PubIfDecisionPLAN_MDL_B.SafeDistance;

  /* SignalConversion generated from: '<S461>/Lookup Table Dynamic2' incorporates:
   *  Constant: '<S461>/Constant15'
   *  Constant: '<S461>/Constant19'
   *  Constant: '<S461>/Constant2'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2[0] = (
    -50.0F);
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2[1] =
    PubIfDecisionPLAN_MDL_B.Gain5;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2[2] =
    PubIfDecisionPLAN_MDL_B.Gain4;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2[3] =
    PubIfDecisionPLAN_MDL_B.Gain3;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2[4] =
    PubIfDecisionPLAN_MDL_B.Gain7;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2[5] =
    0.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2[6] =
    1.0F;

  /* SignalConversion generated from: '<S461>/Lookup Table Dynamic2' incorporates:
   *  Constant: '<S461>/Constant10'
   *  Constant: '<S461>/Constant11'
   *  Constant: '<S461>/Constant12'
   *  Constant: '<S461>/Constant16'
   *  Constant: '<S461>/Constant20'
   *  Constant: '<S461>/Constant8'
   *  Constant: '<S461>/Constant9'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport3[0] =
    0.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport3[1] =
    0.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport3[2] =
    0.3F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport3[3] =
    0.5F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport3[4] =
    0.8F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport3[5] =
    1.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport3[6] =
    1.0F;

  /* S-Function (sfix_look1_dyn): '<S461>/Lookup Table Dynamic2' */
  /* Dynamic Look-Up Table Block: '<S461>/Lookup Table Dynamic2'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  {
    int_T i1;
    const real32_T *u0 = &PubIfDecisionPLAN_MDL_B.DataTypeConversion2[0];
    real32_T *y0 = &PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_X_Factor_RL[0];
    for (i1=0; i1 < 11; i1++) {
      LookUp_real32_T_real32_T( &(y0[i1]),
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport3[
        0], u0[i1],
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2[
        0], 6U);
    }
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S461>/Product4' */
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_RL[i_2] =
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_X_Factor_RL[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_Y_Factor_L[i_2];
  }

  /* MinMax: '<S461>/MinMax4' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_RL[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    deltaVelCC = fmaxf(deltaVelCC,
                       PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_RL[JminIni
                       + 1]);
  }

  /* MinMax: '<S461>/MinMax4' */
  PubIfDecisionPLAN_MDL_B.MinMax4 = deltaVelCC;

  /* RelationalOperator: '<S477>/Compare' incorporates:
   *  Constant: '<S477>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare = (uint8_T)(rtu_LSM_ESS->ESSLeLineValid !=
    true);

  /* MinMax: '<S461>/Max1' */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.MinMax2,
                     PubIfDecisionPLAN_MDL_B.MinMax4);
  deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.Compare);

  /* MinMax: '<S461>/Max1' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_L = deltaVelCC;
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* DataTypeConversion: '<S461>/Data Type Conversion1' */
    PubIfDecisionPLAN_MDL_B.DataTypeConversion1_p[i_2] = (real32_T)
      PubIfDecisionPLAN_MDL_B.ObjDxRelCal_FR[i_2];
  }

  /* S-Function (sfix_look1_dyn): '<S461>/Lookup Table Dynamic1' */
  /* Dynamic Look-Up Table Block: '<S461>/Lookup Table Dynamic1'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  {
    int_T i1;
    const real32_T *u0 = &PubIfDecisionPLAN_MDL_B.DataTypeConversion1_p[0];
    real32_T *y0 = &PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_X_Factor_FR[0];
    for (i1=0; i1 < 11; i1++) {
      LookUp_real32_T_real32_T( &(y0[i1]),
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport3
        [0], u0[i1],
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamicInport2
        [0], 6U);
    }
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* DataTypeConversion: '<S461>/Data Type Conversion5' */
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_Y_Factor_R[i_2] = (real32_T)
      PubIfDecisionPLAN_MDL_B.Y_Factor_R[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S461>/Product1' */
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_FR[i_2] =
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_X_Factor_FR[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_Y_Factor_R[i_2];
  }

  /* MinMax: '<S461>/MinMax3' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_FR[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    deltaVelCC = fmaxf(deltaVelCC,
                       PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_FR[JminIni
                       + 1]);
  }

  /* MinMax: '<S461>/MinMax3' */
  PubIfDecisionPLAN_MDL_B.MinMax3 = deltaVelCC;
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* DataTypeConversion: '<S461>/Data Type Conversion3' */
    PubIfDecisionPLAN_MDL_B.DataTypeConversion3[i_2] = (real32_T)
      PubIfDecisionPLAN_MDL_B.ObjDxRelCal_RR[i_2];
  }

  /* S-Function (sfix_look1_dyn): '<S461>/Lookup Table Dynamic3' */
  /* Dynamic Look-Up Table Block: '<S461>/Lookup Table Dynamic3'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  {
    int_T i1;
    const real32_T *u0 = &PubIfDecisionPLAN_MDL_B.DataTypeConversion3[0];
    real32_T *y0 = &PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_X_Factor_RR[0];
    for (i1=0; i1 < 11; i1++) {
      LookUp_real32_T_real32_T( &(y0[i1]),
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport3[
        0], u0[i1],
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2[
        0], 6U);
    }
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S461>/Product5' */
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_RR[i_2] =
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_X_Factor_RR[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_Y_Factor_R[i_2];
  }

  /* MinMax: '<S461>/MinMax5' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_RR[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    deltaVelCC = fmaxf(deltaVelCC,
                       PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_RR[JminIni
                       + 1]);
  }

  /* MinMax: '<S461>/MinMax5' */
  PubIfDecisionPLAN_MDL_B.MinMax5 = deltaVelCC;

  /* RelationalOperator: '<S478>/Compare' incorporates:
   *  Constant: '<S478>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_f = (uint8_T)(rtu_LSM_ESS->ESSRiLineValid !=
    true);

  /* MinMax: '<S461>/Max2' */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.MinMax3,
                     PubIfDecisionPLAN_MDL_B.MinMax5);
  deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.Compare_f);

  /* MinMax: '<S461>/Max2' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_R = deltaVelCC;

  /* BusCreator generated from: '<Root>/PLAN_DPC_ESS' */
  rty_PLAN_DPC_ESS->PLAN_DPC_ESS_DangerPlaus_L =
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_L;
  rty_PLAN_DPC_ESS->PLAN_DPC_ESS_DangerPlaus_R =
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_DangerPlaus_R;
  rty_PLAN_DPC_ESS->PLAN_DPC_ESS_L_Oncoming_flag =
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_L_Oncoming_flag;
  rty_PLAN_DPC_ESS->PLAN_DPC_ESS_R_Oncoming_flag =
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ESS_R_Oncoming_flag;

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  PubIfDecisionPLAN_MDL_B.DataTypeConversion_l =
    rtu_VSM_LON_CTRL->ACC_SpdSetValueKmh;
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S460>/Unit Delay11' */
    PubIfDecisionPLAN_MDL_B.UnitDelay11[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay11_DSTATE[i_2];

    /* UnitDelay: '<S460>/Unit Delay12' */
    PubIfDecisionPLAN_MDL_B.UnitDelay12[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay12_DSTATE[i_2];

    /* UnitDelay: '<S460>/Unit Delay13' */
    PubIfDecisionPLAN_MDL_B.UnitDelay13[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay13_DSTATE[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* SignalConversion: '<S471>/Signal Copy' */
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_ObjID[i_2] = rtu_TOS_LC->Object_ID[i_2];
  }

  /* UnitDelay: '<S460>/Unit Delay4' */
  memcpy(&PubIfDecisionPLAN_MDL_B.UnitDelay4[0],
         &PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE[0], 11U * sizeof(real_T));
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S460>/Unit Delay' */
    PubIfDecisionPLAN_MDL_B.UnitDelay_er[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jw[i_2];

    /* UnitDelay: '<S460>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_B.UnitDelay1_h[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_c[i_2];

    /* UnitDelay: '<S460>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_B.UnitDelay2[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE[i_2];

    /* UnitDelay: '<S460>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_B.UnitDelay3[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE[i_2];

    /* UnitDelay: '<S460>/Unit Delay10' */
    PubIfDecisionPLAN_MDL_B.UnitDelay10[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay10_DSTATE[i_2];

    /* UnitDelay: '<S460>/Unit Delay8' */
    PubIfDecisionPLAN_MDL_B.UnitDelay8[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay8_DSTATE[i_2];

    /* UnitDelay: '<S460>/Unit Delay7' */
    PubIfDecisionPLAN_MDL_B.UnitDelay7[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay7_DSTATE[i_2];

    /* UnitDelay: '<S460>/Unit Delay5' */
    PubIfDecisionPLAN_MDL_B.UnitDelay5[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay5_DSTATE[i_2];

    /* UnitDelay: '<S460>/Unit Delay6' */
    PubIfDecisionPLAN_MDL_B.UnitDelay6[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay6_DSTATE[i_2];

    /* UnitDelay: '<S460>/Unit Delay9' */
    PubIfDecisionPLAN_MDL_B.UnitDelay9[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay9_DSTATE[i_2];
  }

  /* MATLAB Function: '<S460>/Lock' */
  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufID[i_2] =
      PubIfDecisionPLAN_MDL_B.UnitDelay10[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDx[i_2] =
      PubIfDecisionPLAN_MDL_B.UnitDelay8[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDy[i_2] =
      PubIfDecisionPLAN_MDL_B.UnitDelay7[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufVx[i_2] =
      PubIfDecisionPLAN_MDL_B.UnitDelay5[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCLe[i_2] =
      PubIfDecisionPLAN_MDL_B.UnitDelay6[i_2];
  }

  memcpy(&PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCRi[0],
         &PubIfDecisionPLAN_MDL_B.UnitDelay4[0], 11U * sizeof(real_T));
  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[i_2] =
      PubIfDecisionPLAN_MDL_B.UnitDelay9[i_2];
  }

  PubIfDecisionPLAN_MDL_B.bufferoverflow = false;
  for (JminIni = 0; JminIni < 11; JminIni++) {
    if (PubIfDecisionPLAN_MDL_B.UnitDelay11[JminIni] != 0) {
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufID[JminIni] = 0U;
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDx[JminIni] = 0.0F;
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDy[JminIni] = 0.0F;
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufVx[JminIni] = 0.0F;
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCLe[JminIni] = 0.0F;
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCRi[JminIni] = 0.0;
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni] = 0.0F;
    }
  }

  for (JminIni = 0; JminIni < 11; JminIni++) {
    if (PubIfDecisionPLAN_MDL_B.UnitDelay_er[JminIni] != 0) {
      tmpForInput_idx_0 = false;
      oldestbufIndex = 0;
      exitg1 = false;
      while ((!exitg1) && (oldestbufIndex < 11)) {
        if (PubIfDecisionPLAN_MDL_B.PLAN_DPC_ObjID[oldestbufIndex] ==
            PubIfDecisionPLAN_MDL_B.UnitDelay_er[JminIni]) {
          tmpForInput_idx_0 = true;
          exitg1 = true;
        } else {
          oldestbufIndex++;
        }
      }

      if (!tmpForInput_idx_0) {
        temp = 0.0F;
        PubIfDecisionPLAN_MDL_B.bufferoverflow = false;
        oldestbufIndex = 10;
        i_2 = 0;
        exitg1 = false;
        while ((!exitg1) && (i_2 < 11)) {
          if (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[i_2] > temp) {
            temp = PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[i_2];
            oldestbufIndex = i_2;
          }

          if (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufID[i_2] == 0) {
            PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufID[i_2] =
              PubIfDecisionPLAN_MDL_B.UnitDelay_er[JminIni];
            PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDx[i_2] =
              PubIfDecisionPLAN_MDL_B.UnitDelay1_h[JminIni];
            PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDy[i_2] =
              PubIfDecisionPLAN_MDL_B.UnitDelay2[JminIni];
            PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufVx[i_2] =
              PubIfDecisionPLAN_MDL_B.UnitDelay3[JminIni];
            PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCLe[i_2] =
              PubIfDecisionPLAN_MDL_B.UnitDelay12[JminIni];
            PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCRi[i_2] =
              PubIfDecisionPLAN_MDL_B.UnitDelay13[JminIni];
            tmpForInput_idx_0 = true;
            exitg1 = true;
          } else {
            i_2++;
          }
        }

        if (!tmpForInput_idx_0) {
          PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufID[oldestbufIndex] =
            PubIfDecisionPLAN_MDL_B.UnitDelay_er[JminIni];
          PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDx[oldestbufIndex] =
            PubIfDecisionPLAN_MDL_B.UnitDelay1_h[JminIni];
          PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDy[oldestbufIndex] =
            PubIfDecisionPLAN_MDL_B.UnitDelay2[JminIni];
          PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufVx[oldestbufIndex] =
            PubIfDecisionPLAN_MDL_B.UnitDelay3[JminIni];
          PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCLe[oldestbufIndex] =
            PubIfDecisionPLAN_MDL_B.UnitDelay12[JminIni];
          PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCRi[oldestbufIndex] =
            PubIfDecisionPLAN_MDL_B.UnitDelay13[JminIni];
          PubIfDecisionPLAN_MDL_B.bufferoverflow = true;
        }
      }
    }
  }

  for (JminIni = 0; JminIni < 11; JminIni++) {
    if (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufID[JminIni] != 0) {
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni] = fminf
        (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni] + 1.0F, 500.0F);
    }
  }

  /* End of MATLAB Function: '<S460>/Lock' */

  /* MinMax: '<S460>/Max' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCLe[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    deltaVelCC = fmaxf(deltaVelCC,
                       PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCLe[JminIni + 1]);
  }

  /* MinMax: '<S460>/Max' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_LockedDPCLe = deltaVelCC;
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* RelationalOperator: '<S490>/Compare' incorporates:
     *  Constant: '<S490>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_o[i_2] = (rtu_TOS_LC->Object_ID[i_2] !=
      ((uint8_T)0U));

    /* RelationalOperator: '<S491>/Compare' incorporates:
     *  Constant: '<S491>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_fg[i_2] = (rtu_TOS_LC->Object_Fus_Type[i_2]
      != ((uint8_T)2U));

    /* RelationalOperator: '<S494>/Compare' incorporates:
     *  Constant: '<S494>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_h[i_2] = (rtu_TOS_LC->Object_Fus_Type[i_2] ==
      ((uint8_T)2U));

    /* RelationalOperator: '<S492>/Compare' incorporates:
     *  Constant: '<S492>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_b[i_2] = (rtu_TOS_LC->Object_DX[i_2] >=
      rtP_P_PLAN_DPC_danqianleida_minDx);

    /* RelationalOperator: '<S493>/Compare' incorporates:
     *  Constant: '<S493>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_hv[i_2] = (rtu_TOS_LC->Object_DX[i_2] <=
      rtP_P_PLAN_DPC_danqianleida_maxDx);

    /* Logic: '<S488>/Logical Operator1' */
    PubIfDecisionPLAN_MDL_B.LogicalOperator1[i_2] =
      (PubIfDecisionPLAN_MDL_B.Compare_h[i_2] &&
       PubIfDecisionPLAN_MDL_B.Compare_b[i_2] &&
       PubIfDecisionPLAN_MDL_B.Compare_hv[i_2]);

    /* Switch: '<S488>/Switch' incorporates:
     *  Constant: '<S488>/Constant1'
     */
    if (rtP_P_PLAN_DPC_danqianleida_kaiguan) {
      /* Switch: '<S488>/Switch' */
      PubIfDecisionPLAN_MDL_B.Switch[i_2] =
        PubIfDecisionPLAN_MDL_B.LogicalOperator1[i_2];
    } else {
      /* Switch: '<S488>/Switch' incorporates:
       *  Constant: '<S488>/Constant2'
       */
      PubIfDecisionPLAN_MDL_B.Switch[i_2] = rtCP_Constant2_Value_d[i_2];
    }

    /* End of Switch: '<S488>/Switch' */

    /* Logic: '<S488>/Logical Operator' */
    PubIfDecisionPLAN_MDL_B.LogicalOperator[i_2] =
      (PubIfDecisionPLAN_MDL_B.Compare_fg[i_2] ||
       (PubIfDecisionPLAN_MDL_B.Switch[i_2] != 0.0));

    /* Logic: '<S488>/AND' incorporates:
     *  Constant: '<S488>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.AND[i_2] = (PubIfDecisionPLAN_MDL_B.Compare_o[i_2] &&
      (1.0 != 0.0) && PubIfDecisionPLAN_MDL_B.LogicalOperator[i_2]);
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S489>/Unit Delay' */
    PubIfDecisionPLAN_MDL_B.UnitDelay_kp[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pj[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S489>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_B.UnitDelay1_j[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_g[i_2];
  }

  /* MATLAB Function: '<S489>/MATLAB Function' incorporates:
   *  Constant: '<S489>/Constant'
   */
  PubIfDecisionPLAN_MDL_MATLABFunction_g(rtP_P_PLAN_DPC_ObjDxLPalpha,
    rtu_TOS_LC->Object_ID, PubIfDecisionPLAN_MDL_B.UnitDelay_kp,
    rtu_TOS_LC->Object_DX, PubIfDecisionPLAN_MDL_B.UnitDelay1_j,
    &PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5);
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S489>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_B.UnitDelay2_i[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_f[i_2];
  }

  /* MATLAB Function: '<S489>/MATLAB Function1' incorporates:
   *  Constant: '<S489>/Constant3'
   */
  PubIfDecisionPLAN_MDL_MATLABFunction_g(rtP_P_PLAN_DPC_ObjDyLPalpha,
    rtu_TOS_LC->Object_ID, PubIfDecisionPLAN_MDL_B.UnitDelay_kp,
    rtu_TOS_LC->Object_DY, PubIfDecisionPLAN_MDL_B.UnitDelay2_i,
    &PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n);
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S489>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_B.UnitDelay3_m[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_g[i_2];
  }

  /* MATLAB Function: '<S489>/MATLAB Function2' incorporates:
   *  Constant: '<S489>/Constant1'
   */
  PubIfDecisionPLAN_MDL_MATLABFunction_g(rtP_P_PLAN_DPC_ObjVxLPalpha,
    rtu_TOS_LC->Object_ID, PubIfDecisionPLAN_MDL_B.UnitDelay_kp,
    rtu_TOS_LC->Object_VX, PubIfDecisionPLAN_MDL_B.UnitDelay3_m,
    &PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l);

  /* RelationalOperator: '<S480>/Compare' incorporates:
   *  Constant: '<S480>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_op = (rtu_LSM_HWA->RoadWidth > 0.0F);

  /* Switch: '<S462>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.Compare_op) {
    /* Switch: '<S462>/Switch1' */
    PubIfDecisionPLAN_MDL_B.RoadWidth = rtu_LSM_HWA->RoadWidth;
  } else {
    /* Switch: '<S462>/Switch1' incorporates:
     *  Constant: '<S462>/Constant70'
     */
    PubIfDecisionPLAN_MDL_B.RoadWidth = 3.75F;
  }

  /* End of Switch: '<S462>/Switch1' */

  /* MATLAB Function: '<S462>/DangerFactorMatrixCalc_Left' incorporates:
   *  Constant: '<S462>/Constant61'
   *  Constant: '<S462>/Constant63'
   *  Constant: '<S462>/Constant64'
   */
  tmpForInput_idx_0 = false;
  temp = 999.0F;
  ToleranceBoxRightOffset = 999.0F;
  distRelPlanStartReasonable = false;
  deltaVelCC = -999.0F;
  t = -999.0F;
  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Le[i_2] = 999.0F;
    NearestObj_Oncoming[i_2] = 0;
  }

  RtVehSpdms = rtu_PLAN_VCAN_ESP->VehSpd / 3.6F;
  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_front_Dx_i[i_2] = 999.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_front_Vx_k[i_2] = 0.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_Rear_Dx_o[i_2] = -999.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_Rear_Vx_f[i_2] = 0.0F;
  }

  if (rtu_LSM_HWA->HWALeLineValid) {
    for (JminIni = 0; JminIni < (int32_T)11.0; JminIni++) {
      if (PubIfDecisionPLAN_MDL_B.AND[JminIni]) {
        if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] >= 0.0F)
        {
          PubIfDecisionPLAN_MDL_B.obj_front_Dx_i[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          PubIfDecisionPLAN_MDL_B.obj_front_Vx_k[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni] * 3.6F
            + 0.5F;
        } else {
          PubIfDecisionPLAN_MDL_B.obj_Rear_Dx_o[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          PubIfDecisionPLAN_MDL_B.obj_Rear_Vx_f[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni] * 3.6F
            + 0.5F;
        }
      }

      if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] >= 0.0F)
      {
        if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] <= 0.0F)
        {
          LineC2Factor = 1.0F;
        } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    > 0.0F) &&
                   (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    <= rtu_LSM_HWA->HWALeRange)) {
          LineC2Factor =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] * 0.0F /
            rtu_LSM_HWA->HWALeRange + 1.0F;
        } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    > rtu_LSM_HWA->HWALeRange) &&
                   (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    <= rtu_LSM_HWA->HWALeRange + 20.0F)) {
          LineC2Factor =
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] -
             rtu_LSM_HWA->HWALeRange) * -0.3F / ((rtu_LSM_HWA->HWALeRange +
            20.0F) - rtu_LSM_HWA->HWALeRange) + 1.0F;
        } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    > rtu_LSM_HWA->HWALeRange + 20.0F) &&
                   (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    <= rtu_LSM_HWA->HWALeRange + 40.0F)) {
          LineC2Factor =
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] -
             (rtu_LSM_HWA->HWALeRange + 20.0F)) * -0.7F /
            ((rtu_LSM_HWA->HWALeRange + 40.0F) - (rtu_LSM_HWA->HWALeRange +
              20.0F)) + 0.7F;
        } else {
          LineC2Factor = 0.0F;
        }

        LineC2Factor = ((0.0F * rtu_LSM_HWA->HWALeLineC3 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         + LineC2Factor * rtu_LSM_HWA->HWALeLineC2 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
                        + rtu_LSM_HWA->HWALeLineC1 *
                        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
          + rtu_LSM_HWA->HWALeLineC0;
        PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Le[JminIni] =
          PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] -
          LineC2Factor;
        if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] >=
             LineC2Factor - PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] <=
             PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F + LineC2Factor) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] <=
             temp)) {
          ToleranceBoxRightOffset = RtVehSpdms +
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni];
          tmpForInput_idx_0 = true;
          temp = PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          NearestObj_Oncoming[JminIni] = (int8_T)(ToleranceBoxRightOffset <
            -2.5F);
        }
      } else {
        LineC2Factor = ((rtP_P_PLAN_DPC_HWALineRearA3Factor *
                         rtu_LSM_HWA->HWALeLineC3 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         + rtP_P_PLAN_DPC_HWALineRearA2Factor *
                         rtu_LSM_HWA->HWALeLineC2 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
                        + rtu_LSM_HWA->HWALeLineC1 *
                        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
          + rtu_LSM_HWA->HWALeLineC0;
        PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Le[JminIni] =
          PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] -
          LineC2Factor;
        if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] >=
             LineC2Factor - PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] <=
             PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F + LineC2Factor) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] >=
             deltaVelCC)) {
          distRelPlanStartReasonable = true;
          deltaVelCC =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          t = RtVehSpdms +
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni];
        }
      }
    }

    Update = false;
    oldestbufIndex = 0;
    exitg1 = false;
    while ((!exitg1) && (oldestbufIndex < 11)) {
      absx = (real_T)NearestObj_Oncoming[oldestbufIndex] / 2.0;
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &i_0);
        absx = ldexp(1.0, i_0 - 53);
      }

      if (fabs((real_T)NearestObj_Oncoming[oldestbufIndex] - 1.0) < absx) {
        Update = true;
        exitg1 = true;
      } else {
        oldestbufIndex++;
      }
    }
  } else {
    for (i_2 = 0; i_2 < 11; i_2++) {
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Le[i_2] = 0.0F;
    }

    Update = false;
  }

  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_OncomingFlag_Le = Update;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjValid_L = tmpForInput_idx_0;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjDx_L = temp;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjSpeed_L =
    ToleranceBoxRightOffset;
  PubIfDecisionPLAN_MDL_B.Rear_NearesObjValid_p = distRelPlanStartReasonable;
  PubIfDecisionPLAN_MDL_B.Rear_NearestObjDx_a = deltaVelCC;
  PubIfDecisionPLAN_MDL_B.Rear_NearestObjSpeed_b = t;

  /* End of MATLAB Function: '<S462>/DangerFactorMatrixCalc_Left' */

  /* Outputs for Iterator SubSystem: '<S462>/Obj_front' */
  PubIfDecisionPLAN_MDL_Obj_front(PubIfDecisionPLAN_MDL_B.obj_front_Dx_i,
    PubIfDecisionPLAN_MDL_B.obj_front_Vx_k,
    PubIfDecisionPLAN_MDL_B.obj_Rear_Dx_o, PubIfDecisionPLAN_MDL_B.obj_Rear_Vx_f,
    &PubIfDecisionPLAN_MDL_B.Obj_front);

  /* End of Outputs for SubSystem: '<S462>/Obj_front' */
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Abs: '<S462>/Abs5' */
    PubIfDecisionPLAN_MDL_B.Abs5[i_2] = fabsf
      (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Le[i_2]);
  }

  /* Gain: '<S462>/Gain8' */
  PubIfDecisionPLAN_MDL_B.Gain8 = 0.3F * PubIfDecisionPLAN_MDL_B.RoadWidth;

  /* Gain: '<S462>/Gain9' */
  PubIfDecisionPLAN_MDL_B.Gain9 = 0.6F * PubIfDecisionPLAN_MDL_B.RoadWidth;

  /* Gain: '<S462>/Gain10' */
  PubIfDecisionPLAN_MDL_B.Gain10 = 0.6F * PubIfDecisionPLAN_MDL_B.RoadWidth;

  /* Sum: '<S462>/Add' incorporates:
   *  Constant: '<S462>/Constant3'
   */
  PubIfDecisionPLAN_MDL_B.Add = PubIfDecisionPLAN_MDL_B.Gain10 + 1.0F;

  /* SignalConversion generated from: '<S462>/Lookup Table Dynamic1' incorporates:
   *  Constant: '<S462>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport2[0] =
    0.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport2[1] =
    PubIfDecisionPLAN_MDL_B.Gain8;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport2[2] =
    PubIfDecisionPLAN_MDL_B.Gain9;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport2[3] =
    PubIfDecisionPLAN_MDL_B.Add;

  /* SignalConversion generated from: '<S462>/Lookup Table Dynamic1' incorporates:
   *  Constant: '<S462>/Constant20'
   *  Constant: '<S462>/Constant35'
   *  Constant: '<S462>/Constant36'
   *  Constant: '<S462>/Constant37'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport3[0] =
    1.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport3[1] =
    1.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport3[2] =
    0.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport3[3] =
    0.0F;

  /* S-Function (sfix_look1_dyn): '<S462>/Lookup Table Dynamic1' */
  /* Dynamic Look-Up Table Block: '<S462>/Lookup Table Dynamic1'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  {
    int_T i1;
    const real32_T *u0 = &PubIfDecisionPLAN_MDL_B.Abs5[0];
    real32_T *y0 = &PubIfDecisionPLAN_MDL_B.Factor_Dy[0];
    for (i1=0; i1 < 11; i1++) {
      LookUp_real32_T_real32_T( &(y0[i1]),
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport3[
        0], u0[i1],
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport2[
        0], 3U);
    }
  }

  /* MATLAB Function: '<S488>/MATLAB Function' */
  for (JminIni = 0; JminIni < 11; JminIni++) {
    PubIfDecisionPLAN_MDL_B.ObjStationaryFlag[JminIni] = 0.0;
    if (rtu_TOS_LC->Object_MovingState[JminIni] == 3) {
      PubIfDecisionPLAN_MDL_B.ObjStationaryFlag[JminIni] = 1.0;
    }
  }

  /* End of MATLAB Function: '<S488>/MATLAB Function' */
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Abs: '<S462>/Abs6' */
    PubIfDecisionPLAN_MDL_B.Abs6[i_2] = fabsf
      (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Le[i_2]);
  }

  /* Gain: '<S462>/Gain12' */
  PubIfDecisionPLAN_MDL_B.Gain12 = 0.5F * PubIfDecisionPLAN_MDL_B.RoadWidth;

  /* Gain: '<S462>/Gain13' */
  PubIfDecisionPLAN_MDL_B.Gain13 = 0.5F * PubIfDecisionPLAN_MDL_B.RoadWidth;

  /* Sum: '<S462>/Add2' incorporates:
   *  Constant: '<S462>/Constant19'
   */
  PubIfDecisionPLAN_MDL_B.Add2 = PubIfDecisionPLAN_MDL_B.Gain13 + 1.0F;

  /* Gain: '<S462>/Gain11' */
  PubIfDecisionPLAN_MDL_B.Gain11 = 0.5F * PubIfDecisionPLAN_MDL_B.RoadWidth;

  /* Sum: '<S462>/Add1' incorporates:
   *  Constant: '<S462>/Constant18'
   */
  PubIfDecisionPLAN_MDL_B.Add1_m = PubIfDecisionPLAN_MDL_B.Gain11 + 2.0F;

  /* SignalConversion generated from: '<S462>/Lookup Table Dynamic2' incorporates:
   *  Constant: '<S462>/Constant17'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2_k[0] =
    0.0F;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2_k[1] =
    PubIfDecisionPLAN_MDL_B.Gain12;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2_k[2] =
    PubIfDecisionPLAN_MDL_B.Add2;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2_k[3] =
    PubIfDecisionPLAN_MDL_B.Add1_m;

  /* S-Function (sfix_look1_dyn): '<S462>/Lookup Table Dynamic2' */
  /* Dynamic Look-Up Table Block: '<S462>/Lookup Table Dynamic2'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  {
    int_T i1;
    const real32_T *u0 = &PubIfDecisionPLAN_MDL_B.Abs6[0];
    real32_T *y0 = &PubIfDecisionPLAN_MDL_B.Factor_Dy_k[0];
    for (i1=0; i1 < 11; i1++) {
      LookUp_real32_T_real32_T( &(y0[i1]),
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport3[
        0], u0[i1],
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2_k
        [0], 3U);
    }
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Switch: '<S462>/Switch3' */
    if (PubIfDecisionPLAN_MDL_B.ObjStationaryFlag[i_2] != 0.0) {
      /* Switch: '<S462>/Switch3' */
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Le[i_2] =
        PubIfDecisionPLAN_MDL_B.Factor_Dy[i_2];
    } else {
      /* Switch: '<S462>/Switch3' */
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Le[i_2] =
        PubIfDecisionPLAN_MDL_B.Factor_Dy_k[i_2];
    }

    /* End of Switch: '<S462>/Switch3' */
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S462>/Product2' */
    PubIfDecisionPLAN_MDL_B.Product2_e[i_2] =
      PubIfDecisionPLAN_MDL_B.Obj_front.Assignment1[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Le[i_2];
  }

  /* MinMax: '<S462>/Max1' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.Product2_e[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.Product2_e[JminIni +
                       1]);
  }

  /* MinMax: '<S462>/Max1' */
  PubIfDecisionPLAN_MDL_B.Max1 = deltaVelCC;

  /* MinMax: '<S462>/Max2' */
  PubIfDecisionPLAN_MDL_B.DangerPlausF = PubIfDecisionPLAN_MDL_B.Max1;

  /* Switch: '<S462>/Switch2' */
  if (rtu_LSM_HWA->HWALeLineValid) {
    /* Switch: '<S462>/Switch2' */
    PubIfDecisionPLAN_MDL_B.DPC_F = PubIfDecisionPLAN_MDL_B.DangerPlausF;
  } else {
    /* Switch: '<S462>/Switch2' incorporates:
     *  Constant: '<S462>/Constant60'
     */
    PubIfDecisionPLAN_MDL_B.DPC_F = 1.0F;
  }

  /* End of Switch: '<S462>/Switch2' */
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S462>/Product3' */
    PubIfDecisionPLAN_MDL_B.Product3[i_2] =
      PubIfDecisionPLAN_MDL_B.Obj_front.Assignment[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Le[i_2];
  }

  /* MinMax: '<S462>/Max3' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.Product3[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.Product3[JminIni + 1]);
  }

  /* MinMax: '<S462>/Max3' */
  PubIfDecisionPLAN_MDL_B.Max3 = deltaVelCC;

  /* MinMax: '<S462>/Max5' */
  PubIfDecisionPLAN_MDL_B.DangerPlausR = PubIfDecisionPLAN_MDL_B.Max3;

  /* Switch: '<S462>/Switch4' */
  if (rtu_LSM_HWA->HWALeLineValid) {
    /* Switch: '<S462>/Switch4' */
    PubIfDecisionPLAN_MDL_B.DPC_R = PubIfDecisionPLAN_MDL_B.DangerPlausR;
  } else {
    /* Switch: '<S462>/Switch4' incorporates:
     *  Constant: '<S462>/Constant62'
     */
    PubIfDecisionPLAN_MDL_B.DPC_R = 1.0F;
  }

  /* End of Switch: '<S462>/Switch4' */

  /* MinMax: '<S462>/Max6' */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.DPC_F,
                     PubIfDecisionPLAN_MDL_B.DPC_R);

  /* MinMax: '<S462>/Max6' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DPCrealtimeLe = deltaVelCC;

  /* MinMax: '<S5>/Max' */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.PLAN_DPC_LockedDPCLe,
                     PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DPCrealtimeLe);

  /* MinMax: '<S5>/Max' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L = deltaVelCC;

  /* RelationalOperator: '<S457>/Compare' incorporates:
   *  Constant: '<S457>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_d = (rtu_VSM_HMI->HWASts == ((uint8_T)3U));

  /* RelationalOperator: '<S458>/Compare' incorporates:
   *  Constant: '<S458>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_fa = (rtu_VSM_HMI->HWASts == ((uint8_T)5U));

  /* RelationalOperator: '<S459>/Compare' incorporates:
   *  Constant: '<S459>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_i = (rtu_VSM_HMI->HWASts == ((uint8_T)6U));

  /* Logic: '<S190>/OR2' */
  PubIfDecisionPLAN_MDL_B.OR2 = (PubIfDecisionPLAN_MDL_B.Compare_d ||
    PubIfDecisionPLAN_MDL_B.Compare_fa || PubIfDecisionPLAN_MDL_B.Compare_i);

  /* Logic: '<S186>/NOT4' */
  PubIfDecisionPLAN_MDL_B.NOT4 = !rtu_VSM_UOM_LC->User_LeTurnLmpOn;

  /* Logic: '<S186>/NOT5' */
  PubIfDecisionPLAN_MDL_B.NOT5 = !rtu_VSM_UOM_LC->User_RiTurnLmpOn;

  /* Logic: '<S186>/AND6' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_NoTurnLamp =
    (PubIfDecisionPLAN_MDL_B.NOT4 && PubIfDecisionPLAN_MDL_B.NOT5);

  /* Abs: '<S186>/Abs4' */
  PubIfDecisionPLAN_MDL_B.Abs4 = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S275>/Compare' incorporates:
   *  Constant: '<S275>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_dyDiff =
    (PubIfDecisionPLAN_MDL_B.Abs4 < 0.4F);

  /* RelationalOperator: '<S186>/Relational Operator3' incorporates:
   *  Constant: '<S186>/Constant5'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_IPVehSpd = (rtu_PLAN_VCAN_ESP->VehSpd
    >= rtP_P_PLAN_ALC_vMinPreLC_Noh);

  /* UnitDelay: '<S283>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_au =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_m;

  /* MinMax: '<S460>/Max1' */
  absx = PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCRi[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    absx = fmax(absx, PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCRi[JminIni + 1]);
  }

  /* MinMax: '<S460>/Max1' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_LockedDPCRi = absx;

  /* MATLAB Function: '<S462>/DangerFactorMatrixCalc_Left1' incorporates:
   *  Constant: '<S462>/Constant22'
   *  Constant: '<S462>/Constant26'
   *  Constant: '<S462>/Constant27'
   */
  tmpForInput_idx_0 = false;
  temp = 999.0F;
  ToleranceBoxRightOffset = 999.0F;
  distRelPlanStartReasonable = false;
  deltaVelCC = -999.0F;
  t = -999.0F;
  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Ri[i_2] = 999.0F;
    NearestObj_Oncoming[i_2] = 0;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_front_Dx_l[i_2] = 999.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_front_Vx_g[i_2] = 0.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_Rear_Dx_h[i_2] = -999.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_Rear_Vx_g[i_2] = 0.0F;
  }

  if (rtu_LSM_HWA->HWARiLineValid) {
    for (JminIni = 0; JminIni < (int32_T)11.0; JminIni++) {
      if (PubIfDecisionPLAN_MDL_B.AND[JminIni]) {
        if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] >= 0.0F)
        {
          PubIfDecisionPLAN_MDL_B.obj_front_Dx_l[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          PubIfDecisionPLAN_MDL_B.obj_front_Vx_g[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni] * 3.6F
            + 0.5F;
        } else {
          PubIfDecisionPLAN_MDL_B.obj_Rear_Dx_h[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          PubIfDecisionPLAN_MDL_B.obj_Rear_Vx_g[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni] * 3.6F
            + 0.5F;
        }
      }

      if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] >= 0.0F)
      {
        if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] <= 0.0F)
        {
          LineC2Factor = 1.0F;
        } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    > 0.0F) &&
                   (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    <= rtu_LSM_HWA->HWARiRange)) {
          LineC2Factor =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] * 0.0F /
            rtu_LSM_HWA->HWARiRange + 1.0F;
        } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    > rtu_LSM_HWA->HWARiRange) &&
                   (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    <= rtu_LSM_HWA->HWARiRange + 20.0F)) {
          LineC2Factor =
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] -
             rtu_LSM_HWA->HWARiRange) * -0.3F / ((rtu_LSM_HWA->HWARiRange +
            20.0F) - rtu_LSM_HWA->HWARiRange) + 1.0F;
        } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    > rtu_LSM_HWA->HWARiRange + 20.0F) &&
                   (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    <= rtu_LSM_HWA->HWARiRange + 40.0F)) {
          LineC2Factor =
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] -
             (rtu_LSM_HWA->HWARiRange + 20.0F)) * -0.7F /
            ((rtu_LSM_HWA->HWARiRange + 40.0F) - (rtu_LSM_HWA->HWARiRange +
              20.0F)) + 0.7F;
        } else {
          LineC2Factor = 0.0F;
        }

        LineC2Factor = ((0.0F * rtu_LSM_HWA->HWARiLineC3 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         + LineC2Factor * rtu_LSM_HWA->HWARiLineC2 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
                        + rtu_LSM_HWA->HWARiLineC1 *
                        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
          + rtu_LSM_HWA->HWARiLineC0;
        PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Ri[JminIni] =
          PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] -
          LineC2Factor;
        if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] >=
             LineC2Factor - PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] <=
             PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F + LineC2Factor) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] <=
             temp)) {
          ToleranceBoxRightOffset = RtVehSpdms +
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni];
          tmpForInput_idx_0 = true;
          temp = PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          NearestObj_Oncoming[JminIni] = (int8_T)(ToleranceBoxRightOffset <
            -2.5F);
        }
      } else {
        LineC2Factor = ((rtP_P_PLAN_DPC_HWALineRearA3Factor *
                         rtu_LSM_HWA->HWARiLineC3 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         + rtP_P_PLAN_DPC_HWALineRearA2Factor *
                         rtu_LSM_HWA->HWARiLineC2 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
                        + rtu_LSM_HWA->HWARiLineC1 *
                        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
          + rtu_LSM_HWA->HWARiLineC0;
        PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Ri[JminIni] =
          PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] -
          LineC2Factor;
        if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] >=
             LineC2Factor - PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] <=
             PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F + LineC2Factor) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] >=
             deltaVelCC)) {
          distRelPlanStartReasonable = true;
          deltaVelCC =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          t = RtVehSpdms +
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni];
        }
      }
    }

    Update = false;
    oldestbufIndex = 0;
    exitg1 = false;
    while ((!exitg1) && (oldestbufIndex < 11)) {
      absx = (real_T)NearestObj_Oncoming[oldestbufIndex] / 2.0;
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &i_1);
        absx = ldexp(1.0, i_1 - 53);
      }

      if (fabs((real_T)NearestObj_Oncoming[oldestbufIndex] - 1.0) < absx) {
        Update = true;
        exitg1 = true;
      } else {
        oldestbufIndex++;
      }
    }
  } else {
    for (i_2 = 0; i_2 < 11; i_2++) {
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Ri[i_2] = 0.0F;
    }

    Update = false;
  }

  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_OncomingFlag_Ri = Update;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjValid_R = tmpForInput_idx_0;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjDx_R = temp;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjSpeed_R =
    ToleranceBoxRightOffset;
  PubIfDecisionPLAN_MDL_B.Rear_NearesObjValid = distRelPlanStartReasonable;
  PubIfDecisionPLAN_MDL_B.Rear_NearestObjDx = deltaVelCC;
  PubIfDecisionPLAN_MDL_B.Rear_NearestObjSpeed = t;

  /* End of MATLAB Function: '<S462>/DangerFactorMatrixCalc_Left1' */

  /* Outputs for Iterator SubSystem: '<S462>/Obj_front1' */
  PubIfDecisionPLAN_MDL_Obj_front(PubIfDecisionPLAN_MDL_B.obj_front_Dx_l,
    PubIfDecisionPLAN_MDL_B.obj_front_Vx_g,
    PubIfDecisionPLAN_MDL_B.obj_Rear_Dx_h, PubIfDecisionPLAN_MDL_B.obj_Rear_Vx_g,
    &PubIfDecisionPLAN_MDL_B.Obj_front1);

  /* End of Outputs for SubSystem: '<S462>/Obj_front1' */
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Abs: '<S462>/Abs1' */
    PubIfDecisionPLAN_MDL_B.Abs1[i_2] = fabsf
      (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Ri[i_2]);
  }

  /* S-Function (sfix_look1_dyn): '<S462>/Lookup Table Dynamic3' */
  /* Dynamic Look-Up Table Block: '<S462>/Lookup Table Dynamic3'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  {
    int_T i1;
    const real32_T *u0 = &PubIfDecisionPLAN_MDL_B.Abs1[0];
    real32_T *y0 = &PubIfDecisionPLAN_MDL_B.Factor_Dy_j[0];
    for (i1=0; i1 < 11; i1++) {
      LookUp_real32_T_real32_T( &(y0[i1]),
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport3[
        0], u0[i1],
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport2[
        0], 3U);
    }
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Abs: '<S462>/Abs2' */
    PubIfDecisionPLAN_MDL_B.Abs2[i_2] = fabsf
      (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Ri[i_2]);
  }

  /* S-Function (sfix_look1_dyn): '<S462>/Lookup Table Dynamic4' */
  /* Dynamic Look-Up Table Block: '<S462>/Lookup Table Dynamic4'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  {
    int_T i1;
    const real32_T *u0 = &PubIfDecisionPLAN_MDL_B.Abs2[0];
    real32_T *y0 = &PubIfDecisionPLAN_MDL_B.Factor_Dy_a[0];
    for (i1=0; i1 < 11; i1++) {
      LookUp_real32_T_real32_T( &(y0[i1]),
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic1Inport3[
        0], u0[i1],
        &PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtLookupTableDynamic2Inport2_k
        [0], 3U);
    }
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Switch: '<S462>/Switch6' */
    if (PubIfDecisionPLAN_MDL_B.ObjStationaryFlag[i_2] != 0.0) {
      /* Switch: '<S462>/Switch6' */
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Ri[i_2] =
        PubIfDecisionPLAN_MDL_B.Factor_Dy_j[i_2];
    } else {
      /* Switch: '<S462>/Switch6' */
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Ri[i_2] =
        PubIfDecisionPLAN_MDL_B.Factor_Dy_a[i_2];
    }

    /* End of Switch: '<S462>/Switch6' */
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S462>/Product12' */
    PubIfDecisionPLAN_MDL_B.Product12[i_2] =
      PubIfDecisionPLAN_MDL_B.Obj_front1.Assignment1[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Ri[i_2];
  }

  /* MinMax: '<S462>/Max4' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.Product12[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.Product12[JminIni + 1]);
  }

  /* MinMax: '<S462>/Max4' */
  PubIfDecisionPLAN_MDL_B.Max4 = deltaVelCC;

  /* MinMax: '<S462>/Max7' */
  PubIfDecisionPLAN_MDL_B.DangerPlausF_c = PubIfDecisionPLAN_MDL_B.Max4;

  /* Switch: '<S462>/Switch5' */
  if (rtu_LSM_HWA->HWARiLineValid) {
    /* Switch: '<S462>/Switch5' */
    PubIfDecisionPLAN_MDL_B.DPC_F_j = PubIfDecisionPLAN_MDL_B.DangerPlausF_c;
  } else {
    /* Switch: '<S462>/Switch5' incorporates:
     *  Constant: '<S462>/Constant21'
     */
    PubIfDecisionPLAN_MDL_B.DPC_F_j = 1.0F;
  }

  /* End of Switch: '<S462>/Switch5' */
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S462>/Product13' */
    PubIfDecisionPLAN_MDL_B.Product13[i_2] =
      PubIfDecisionPLAN_MDL_B.Obj_front1.Assignment[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Ri[i_2];
  }

  /* MinMax: '<S462>/Max8' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.Product13[0];
  for (JminIni = 0; JminIni < 10; JminIni++) {
    deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.Product13[JminIni + 1]);
  }

  /* MinMax: '<S462>/Max8' */
  PubIfDecisionPLAN_MDL_B.Max8 = deltaVelCC;

  /* MinMax: '<S462>/Max9' */
  PubIfDecisionPLAN_MDL_B.DangerPlausR_l = PubIfDecisionPLAN_MDL_B.Max8;

  /* Switch: '<S462>/Switch7' */
  if (rtu_LSM_HWA->HWARiLineValid) {
    /* Switch: '<S462>/Switch7' */
    PubIfDecisionPLAN_MDL_B.DPC_R_h = PubIfDecisionPLAN_MDL_B.DangerPlausR_l;
  } else {
    /* Switch: '<S462>/Switch7' incorporates:
     *  Constant: '<S462>/Constant23'
     */
    PubIfDecisionPLAN_MDL_B.DPC_R_h = 1.0F;
  }

  /* End of Switch: '<S462>/Switch7' */

  /* MinMax: '<S462>/Max10' */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.DPC_F_j,
                     PubIfDecisionPLAN_MDL_B.DPC_R_h);

  /* MinMax: '<S462>/Max10' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DPCrealtimeRi = deltaVelCC;

  /* MinMax: '<S5>/Max1' */
  absx = fmax(PubIfDecisionPLAN_MDL_B.PLAN_DPC_LockedDPCRi,
              PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DPCrealtimeRi);

  /* MinMax: '<S5>/Max1' */
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R = (real32_T)absx;

  /* RelationalOperator: '<S186>/Relational Operator4' incorporates:
   *  Constant: '<S186>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.RelationalOperator4 =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R <=
     rtP_P_PLAN_ALC_DynamicDPCthreshold);

  /* Switch: '<S283>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator4) {
    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S283>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_m = ((uint16_T)1U);
  } else {
    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S283>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_m = ((uint16_T)0U);
  }

  /* End of Switch: '<S283>/Switch' */

  /* Sum: '<S283>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_au + PubIfDecisionPLAN_MDL_B.Switch_m);

  /* Switch: '<S283>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator4) {
    /* Switch: '<S283>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_l = PubIfDecisionPLAN_MDL_B.Sum;
  } else {
    /* Switch: '<S283>/Switch1' incorporates:
     *  Constant: '<S283>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_l = ((uint16_T)0U);
  }

  /* End of Switch: '<S283>/Switch1' */

  /* Saturate: '<S283>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_l;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S283>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1 = u0;
  } else {
    /* Saturate: '<S283>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1 = u1;
  }

  /* End of Saturate: '<S283>/Saturation1' */

  /* RelationalOperator: '<S277>/Compare' incorporates:
   *  Constant: '<S277>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_DPC =
    (PubIfDecisionPLAN_MDL_B.Saturation1 > ((uint16_T)50U));

  /* RelationalOperator: '<S274>/Compare' incorporates:
   *  Constant: '<S274>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_LineValid =
    (rtu_LSM_HWA->HWARiLineValid == true);

  /* UnitDelay: '<S4>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_l1 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_o;

  /* RelationalOperator: '<S276>/Compare' incorporates:
   *  Constant: '<S276>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_of = (PubIfDecisionPLAN_MDL_B.UnitDelay2_l1 <=
    ((uint8_T)100U));

  /* Logic: '<S186>/AND4' */
  tmpForInput[0] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_NoTurnLamp;
  tmpForInput[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_dyDiff;
  tmpForInput[2] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_IPVehSpd;
  tmpForInput[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_DPC;
  tmpForInput[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_LineValid;
  tmpForInput[5] = PubIfDecisionPLAN_MDL_B.Compare_of;
  tmpForInput[6] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcRi_LciMrc;
  tmpForInput_idx_0 = tmpForInput[0];
  for (JminIni = 0; JminIni < 6; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput[JminIni + 1]);
  }

  /* Logic: '<S186>/AND4' */
  PubIfDecisionPLAN_MDL_B.LcMrcRi = tmpForInput_idx_0;

  /* UnitDelay: '<S4>/Unit Delay7' */
  PubIfDecisionPLAN_MDL_B.UnitDelay7_m =
    PubIfDecisionPLAN_MDL_DW.UnitDelay7_DSTATE_f;

  /* RelationalOperator: '<S238>/Compare' incorporates:
   *  Constant: '<S238>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_l = (PubIfDecisionPLAN_MDL_B.UnitDelay7_m >
    ((uint8_T)1U));

  /* Logic: '<S185>/NOT' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_NoLcCancelFlag =
    !PubIfDecisionPLAN_MDL_B.Compare_l;

  /* UnitDelay: '<S4>/Unit Delay5' */
  PubIfDecisionPLAN_MDL_B.UnitDelay5_o =
    PubIfDecisionPLAN_MDL_DW.UnitDelay5_DSTATE_h;

  /* RelationalOperator: '<S246>/Compare' incorporates:
   *  Constant: '<S246>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_p = (PubIfDecisionPLAN_MDL_B.UnitDelay5_o >
    ((uint8_T)1U));

  /* Logic: '<S185>/NOT1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_NoLcFinishFlag =
    !PubIfDecisionPLAN_MDL_B.Compare_p;

  /* Abs: '<S185>/Abs1' */
  PubIfDecisionPLAN_MDL_B.Abs1_i = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S255>/Compare' incorporates:
   *  Constant: '<S255>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_dyDiff =
    (PubIfDecisionPLAN_MDL_B.Abs1_i < 0.4F);

  /* UnitDelay: '<S265>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_c =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_n;

  /* RelationalOperator: '<S271>/Compare' incorporates:
   *  Constant: '<S271>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_m = (rtu_VSM_UOM_LC->User_LC_DrvLCswt ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S272>/Compare' incorporates:
   *  Constant: '<S272>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ou = (rtu_VSM_UOM_LC->User_LC_DrvLCswt ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S273>/Compare' incorporates:
   *  Constant: '<S273>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mt = (rtu_VSM_UOM_LC->User_LC_DrvLCswt ==
    ((uint8_T)3U));

  /* Switch: '<S270>/Switch9' */
  if (PubIfDecisionPLAN_MDL_B.Compare_mt) {
    /* Switch: '<S270>/Switch9' incorporates:
     *  Constant: '<S270>/P0DeltaSpd_kph5'
     */
    PubIfDecisionPLAN_MDL_B.Switch9_h = rtP_P_PLAN_ALC_DPCthresholdLcDrvLv3;
  } else {
    /* Switch: '<S270>/Switch9' incorporates:
     *  Constant: '<S270>/P0DeltaSpd_kph4'
     */
    PubIfDecisionPLAN_MDL_B.Switch9_h = rtP_P_PLAN_ALC_DPCthresholdLcDrvLv2;
  }

  /* End of Switch: '<S270>/Switch9' */

  /* Switch: '<S270>/Switch2' */
  if (PubIfDecisionPLAN_MDL_B.Compare_ou) {
    /* Switch: '<S270>/Switch2' incorporates:
     *  Constant: '<S270>/P0DeltaSpd_kph4'
     */
    PubIfDecisionPLAN_MDL_B.Switch2_n = rtP_P_PLAN_ALC_DPCthresholdLcDrvLv2;
  } else {
    /* Switch: '<S270>/Switch2' */
    PubIfDecisionPLAN_MDL_B.Switch2_n = PubIfDecisionPLAN_MDL_B.Switch9_h;
  }

  /* End of Switch: '<S270>/Switch2' */

  /* Switch: '<S270>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.Compare_m) {
    /* Switch: '<S270>/Switch1' incorporates:
     *  Constant: '<S270>/P0DeltaSpd_kph3'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_j = rtP_P_PLAN_ALC_DPCthresholdLcDrvLv1;
  } else {
    /* Switch: '<S270>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_j = PubIfDecisionPLAN_MDL_B.Switch2_n;
  }

  /* End of Switch: '<S270>/Switch1' */

  /* RelationalOperator: '<S185>/Relational Operator' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L <=
     PubIfDecisionPLAN_MDL_B.Switch1_j);

  /* Switch: '<S265>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator) {
    /* Switch: '<S265>/Switch' incorporates:
     *  Constant: '<S265>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_d = ((uint16_T)1U);
  } else {
    /* Switch: '<S265>/Switch' incorporates:
     *  Constant: '<S265>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_d = ((uint16_T)0U);
  }

  /* End of Switch: '<S265>/Switch' */

  /* Sum: '<S265>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_p = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_c + PubIfDecisionPLAN_MDL_B.Switch_d);

  /* Switch: '<S265>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator) {
    /* Switch: '<S265>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_dt = PubIfDecisionPLAN_MDL_B.Sum_p;
  } else {
    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S265>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_dt = ((uint16_T)0U);
  }

  /* End of Switch: '<S265>/Switch1' */

  /* Saturate: '<S265>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_dt;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S265>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_f = u0;
  } else {
    /* Saturate: '<S265>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_f = u1;
  }

  /* End of Saturate: '<S265>/Saturation1' */

  /* Constant: '<S244>/Constant' */
  PubIfDecisionPLAN_MDL_B.Constant_a =
    rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntDrv;

  /* RelationalOperator: '<S244>/Compare' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_DPC =
    (PubIfDecisionPLAN_MDL_B.Saturation1_f > PubIfDecisionPLAN_MDL_B.Constant_a);

  /* RelationalOperator: '<S259>/Compare' incorporates:
   *  Constant: '<S259>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_LineValid =
    (rtu_LSM_HWA->HWALeLineValid != false);

  /* UnitDelay: '<S262>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_ow =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_i;

  /* Switch: '<S262>/Switch' */
  if (rtu_VSM_UOM_LC->User_LeTurnLmpOn) {
    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S262>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_mv = ((uint16_T)1U);
  } else {
    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S262>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_mv = ((uint16_T)0U);
  }

  /* End of Switch: '<S262>/Switch' */

  /* Sum: '<S262>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_g = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_ow + PubIfDecisionPLAN_MDL_B.Switch_mv);

  /* Switch: '<S262>/Switch1' */
  if (rtu_VSM_UOM_LC->User_LeTurnLmpOn) {
    /* Switch: '<S262>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_c = PubIfDecisionPLAN_MDL_B.Sum_g;
  } else {
    /* Switch: '<S262>/Switch1' incorporates:
     *  Constant: '<S262>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_c = ((uint16_T)0U);
  }

  /* End of Switch: '<S262>/Switch1' */

  /* Saturate: '<S262>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_c;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S262>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_c = u0;
  } else {
    /* Saturate: '<S262>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_c = u1;
  }

  /* End of Saturate: '<S262>/Saturation1' */

  /* RelationalOperator: '<S257>/Compare' incorporates:
   *  Constant: '<S257>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_j = (PubIfDecisionPLAN_MDL_B.Saturation1_c <
    ((uint16_T)515U));

  /* RelationalOperator: '<S253>/Compare' incorporates:
   *  Constant: '<S253>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_pj = (PubIfDecisionPLAN_MDL_B.Saturation1_c >
    ((uint16_T)15U));

  /* UnitDelay: '<S264>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_ov =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_mv;

  /* UnitDelay: '<S4>/Unit Delay8' */
  PubIfDecisionPLAN_MDL_B.UnitDelay8_i =
    PubIfDecisionPLAN_MDL_DW.UnitDelay8_DSTATE_k;

  /* RelationalOperator: '<S250>/Compare' incorporates:
   *  Constant: '<S250>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_dh = (PubIfDecisionPLAN_MDL_B.UnitDelay8_i !=
    ((uint8_T)1U));

  /* UnitDelay: '<S185>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_ia =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_mc;

  /* RelationalOperator: '<S251>/Compare' incorporates:
   *  Constant: '<S251>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_i4 = (PubIfDecisionPLAN_MDL_B.UnitDelay_ia ==
    ((uint8_T)1U));

  /* Logic: '<S185>/AND11' */
  PubIfDecisionPLAN_MDL_B.AND11 = ((!PubIfDecisionPLAN_MDL_B.Compare_dh) ||
    (!PubIfDecisionPLAN_MDL_B.Compare_i4));

  /* Switch: '<S264>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND11) {
    /* Switch: '<S264>/Switch' incorporates:
     *  Constant: '<S264>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_pj = ((uint16_T)1U);
  } else {
    /* Switch: '<S264>/Switch' incorporates:
     *  Constant: '<S264>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_pj = ((uint16_T)0U);
  }

  /* End of Switch: '<S264>/Switch' */

  /* Sum: '<S264>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_l = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_ov + PubIfDecisionPLAN_MDL_B.Switch_pj);

  /* Switch: '<S264>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.AND11) {
    /* Switch: '<S264>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_f = PubIfDecisionPLAN_MDL_B.Sum_l;
  } else {
    /* Switch: '<S264>/Switch1' incorporates:
     *  Constant: '<S264>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_f = ((uint16_T)0U);
  }

  /* End of Switch: '<S264>/Switch1' */

  /* Saturate: '<S264>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_f;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S264>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_n = u0;
  } else {
    /* Saturate: '<S264>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_n = u1;
  }

  /* End of Saturate: '<S264>/Saturation1' */

  /* RelationalOperator: '<S185>/Relational Operator3' */
  PubIfDecisionPLAN_MDL_B.LciValid = (PubIfDecisionPLAN_MDL_B.Saturation1_c <=
    PubIfDecisionPLAN_MDL_B.Saturation1_n);

  /* Abs: '<S185>/Abs2' */
  PubIfDecisionPLAN_MDL_B.Abs2_f = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S232>/Compare' incorporates:
   *  Constant: '<S232>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_a = (PubIfDecisionPLAN_MDL_B.Abs2_f <=
    rtP_P_PLAN_ALC_LcDrv_DyDiffThreshold);

  /* RelationalOperator: '<S233>/Compare' incorporates:
   *  Constant: '<S233>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ie = (rtu_VSM_UOM_LC->User_LC_DrvLCswt !=
    ((uint8_T)0U));

  /* Gain: '<S185>/Gain2' */
  PubIfDecisionPLAN_MDL_B.Gain2_k = 1.03F * rtu_PLAN_VCAN_ESP->VehSpd;

  /* Sum: '<S185>/Add2' incorporates:
   *  Constant: '<S185>/Constant6'
   */
  PubIfDecisionPLAN_MDL_B.Add2_b = PubIfDecisionPLAN_MDL_B.Gain2_k + 1.3F;

  /* Rounding: '<S185>/Round' */
  PubIfDecisionPLAN_MDL_B.Round = roundf(PubIfDecisionPLAN_MDL_B.Add2_b);

  /* Constant: '<S243>/Constant' */
  PubIfDecisionPLAN_MDL_B.Constant = rtP_P_PLAN_ALC_vMinPreLC_Drv;

  /* RelationalOperator: '<S243>/Compare' */
  PubIfDecisionPLAN_MDL_B.Compare_fe = (PubIfDecisionPLAN_MDL_B.Round >=
    PubIfDecisionPLAN_MDL_B.Constant);

  /* RelationalOperator: '<S252>/Compare' incorporates:
   *  Constant: '<S252>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_fv = (PubIfDecisionPLAN_MDL_B.Round <= 125.0F);

  /* Chart: '<S185>/SigValueHold1' */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c121_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c121_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c121_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_Through;
    PubIfDecisionPLAN_MDL_B.HoldValue1_g = PubIfDecisionPLAN_MDL_B.Compare_a;
    PubIfDecisionPLAN_MDL_B.HoldValue2_l = PubIfDecisionPLAN_MDL_B.Compare_ie;
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_IPVehSpd =
      PubIfDecisionPLAN_MDL_B.Compare_fe;
    PubIfDecisionPLAN_MDL_B.HoldValue4_g = PubIfDecisionPLAN_MDL_B.Compare_fv;
  } else if (PubIfDecisionPLAN_MDL_DW.is_c121_PubIfDecisionPLAN_MDL == 1) {
    if (!rtu_VSM_UOM_LC->User_LeTurnLmpOn) {
      PubIfDecisionPLAN_MDL_DW.is_c121_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_Through;
      PubIfDecisionPLAN_MDL_B.HoldValue1_g = PubIfDecisionPLAN_MDL_B.Compare_a;
      PubIfDecisionPLAN_MDL_B.HoldValue2_l = PubIfDecisionPLAN_MDL_B.Compare_ie;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_IPVehSpd =
        PubIfDecisionPLAN_MDL_B.Compare_fe;
      PubIfDecisionPLAN_MDL_B.HoldValue4_g = PubIfDecisionPLAN_MDL_B.Compare_fv;
    }
  } else {
    /* case IN_Through: */
    if (rtu_VSM_UOM_LC->User_LeTurnLmpOn) {
      PubIfDecisionPLAN_MDL_DW.is_c121_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_Hold;
      PubIfDecisionPLAN_MDL_B.HoldValue1_g = PubIfDecisionPLAN_MDL_B.Compare_a;
      PubIfDecisionPLAN_MDL_B.HoldValue2_l = PubIfDecisionPLAN_MDL_B.Compare_ie;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_IPVehSpd =
        PubIfDecisionPLAN_MDL_B.Compare_fe;
      PubIfDecisionPLAN_MDL_B.HoldValue4_g = PubIfDecisionPLAN_MDL_B.Compare_fv;
    } else {
      PubIfDecisionPLAN_MDL_B.HoldValue1_g = PubIfDecisionPLAN_MDL_B.Compare_a;
      PubIfDecisionPLAN_MDL_B.HoldValue2_l = PubIfDecisionPLAN_MDL_B.Compare_ie;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_IPVehSpd =
        PubIfDecisionPLAN_MDL_B.Compare_fe;
      PubIfDecisionPLAN_MDL_B.HoldValue4_g = PubIfDecisionPLAN_MDL_B.Compare_fv;
    }
  }

  /* End of Chart: '<S185>/SigValueHold1' */

  /* Logic: '<S185>/AND3' */
  tmpForInput[0] = PubIfDecisionPLAN_MDL_B.Compare_j;
  tmpForInput[1] = PubIfDecisionPLAN_MDL_B.Compare_pj;
  tmpForInput[2] = PubIfDecisionPLAN_MDL_B.LciValid;
  tmpForInput[3] = PubIfDecisionPLAN_MDL_B.HoldValue1_g;
  tmpForInput[4] = PubIfDecisionPLAN_MDL_B.HoldValue2_l;
  tmpForInput[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_IPVehSpd;
  tmpForInput[6] = PubIfDecisionPLAN_MDL_B.HoldValue4_g;
  tmpForInput_idx_0 = tmpForInput[0];
  for (JminIni = 0; JminIni < 6; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput[JminIni + 1]);
  }

  /* Logic: '<S185>/AND3' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_LciDrv = tmpForInput_idx_0;

  /* Logic: '<S185>/AND4' */
  tmpForInput[0] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_NoLcCancelFlag;
  tmpForInput[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_NoLcFinishFlag;
  tmpForInput[2] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_dyDiff;
  tmpForInput[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_DPC;
  tmpForInput[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_LineValid;
  tmpForInput[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_LciDrv;
  tmpForInput[6] = rtu_LSM_HWA->LeLineLcAvailable;
  tmpForInput_idx_0 = tmpForInput[0];
  for (JminIni = 0; JminIni < 6; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput[JminIni + 1]);
  }

  /* Logic: '<S185>/AND4' */
  PubIfDecisionPLAN_MDL_B.LcDrvLe = tmpForInput_idx_0;

  /* UnitDelay: '<S4>/Unit Delay4' */
  PubIfDecisionPLAN_MDL_B.UnitDelay4_a =
    PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE_h;

  /* RelationalOperator: '<S236>/Compare' incorporates:
   *  Constant: '<S236>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_jx = (PubIfDecisionPLAN_MDL_B.UnitDelay4_a >
    ((uint8_T)1U));

  /* Logic: '<S185>/NOT4' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_NoLcCancelFlag =
    !PubIfDecisionPLAN_MDL_B.Compare_jx;

  /* UnitDelay: '<S4>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_B.UnitDelay3_o =
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_a;

  /* RelationalOperator: '<S237>/Compare' incorporates:
   *  Constant: '<S237>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_k = (PubIfDecisionPLAN_MDL_B.UnitDelay3_o >
    ((uint8_T)1U));

  /* Logic: '<S185>/NOT5' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_NoLcFinishFlag =
    !PubIfDecisionPLAN_MDL_B.Compare_k;

  /* Abs: '<S185>/Abs4' */
  PubIfDecisionPLAN_MDL_B.Abs4_i = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S254>/Compare' incorporates:
   *  Constant: '<S254>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_dyDiff =
    (PubIfDecisionPLAN_MDL_B.Abs4_i < 0.4F);

  /* UnitDelay: '<S266>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_i1 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_h;

  /* RelationalOperator: '<S185>/Relational Operator1' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator1 =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R <=
     PubIfDecisionPLAN_MDL_B.Switch1_j);

  /* Switch: '<S266>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator1) {
    /* Switch: '<S266>/Switch' incorporates:
     *  Constant: '<S266>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_c = ((uint16_T)1U);
  } else {
    /* Switch: '<S266>/Switch' incorporates:
     *  Constant: '<S266>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_c = ((uint16_T)0U);
  }

  /* End of Switch: '<S266>/Switch' */

  /* Sum: '<S266>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_b = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_i1 + PubIfDecisionPLAN_MDL_B.Switch_c);

  /* Switch: '<S266>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator1) {
    /* Switch: '<S266>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_n = PubIfDecisionPLAN_MDL_B.Sum_b;
  } else {
    /* Switch: '<S266>/Switch1' incorporates:
     *  Constant: '<S266>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_n = ((uint16_T)0U);
  }

  /* End of Switch: '<S266>/Switch1' */

  /* Saturate: '<S266>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_n;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S266>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_o = u0;
  } else {
    /* Saturate: '<S266>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_o = u1;
  }

  /* End of Saturate: '<S266>/Saturation1' */

  /* Constant: '<S245>/Constant' */
  PubIfDecisionPLAN_MDL_B.Constant_k =
    rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntDrv;

  /* RelationalOperator: '<S245>/Compare' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_DPC =
    (PubIfDecisionPLAN_MDL_B.Saturation1_o > PubIfDecisionPLAN_MDL_B.Constant_k);

  /* RelationalOperator: '<S260>/Compare' incorporates:
   *  Constant: '<S260>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_LineValid =
    (rtu_LSM_HWA->HWARiLineValid != false);

  /* UnitDelay: '<S261>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_e =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g4;

  /* Switch: '<S261>/Switch' */
  if (rtu_VSM_UOM_LC->User_RiTurnLmpOn) {
    /* Switch: '<S261>/Switch' incorporates:
     *  Constant: '<S261>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_gt = ((uint16_T)1U);
  } else {
    /* Switch: '<S261>/Switch' incorporates:
     *  Constant: '<S261>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_gt = ((uint16_T)0U);
  }

  /* End of Switch: '<S261>/Switch' */

  /* Sum: '<S261>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_lz = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_e + PubIfDecisionPLAN_MDL_B.Switch_gt);

  /* Switch: '<S261>/Switch1' */
  if (rtu_VSM_UOM_LC->User_RiTurnLmpOn) {
    /* Switch: '<S261>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_ok = PubIfDecisionPLAN_MDL_B.Sum_lz;
  } else {
    /* Switch: '<S261>/Switch1' incorporates:
     *  Constant: '<S261>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_ok = ((uint16_T)0U);
  }

  /* End of Switch: '<S261>/Switch1' */

  /* Saturate: '<S261>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_ok;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S261>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_nr = u0;
  } else {
    /* Saturate: '<S261>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_nr = u1;
  }

  /* End of Saturate: '<S261>/Saturation1' */

  /* RelationalOperator: '<S249>/Compare' incorporates:
   *  Constant: '<S249>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ib = (PubIfDecisionPLAN_MDL_B.Saturation1_nr <
    ((uint16_T)515U));

  /* RelationalOperator: '<S248>/Compare' incorporates:
   *  Constant: '<S248>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_fw = (PubIfDecisionPLAN_MDL_B.Saturation1_nr >
    ((uint16_T)15U));

  /* UnitDelay: '<S263>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_ky =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_ad;

  /* RelationalOperator: '<S240>/Compare' incorporates:
   *  Constant: '<S240>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ms = (PubIfDecisionPLAN_MDL_B.UnitDelay8_i !=
    ((uint8_T)1U));

  /* UnitDelay: '<S185>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_l =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_f0;

  /* RelationalOperator: '<S242>/Compare' incorporates:
   *  Constant: '<S242>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_j1 = (PubIfDecisionPLAN_MDL_B.UnitDelay1_l ==
    ((uint8_T)1U));

  /* Logic: '<S185>/AND14' */
  PubIfDecisionPLAN_MDL_B.AND14 = ((!PubIfDecisionPLAN_MDL_B.Compare_ms) ||
    (!PubIfDecisionPLAN_MDL_B.Compare_j1));

  /* Switch: '<S263>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND14) {
    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S263>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_k = ((uint16_T)1U);
  } else {
    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S263>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_k = ((uint16_T)0U);
  }

  /* End of Switch: '<S263>/Switch' */

  /* Sum: '<S263>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_c = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_ky + PubIfDecisionPLAN_MDL_B.Switch_k);

  /* Switch: '<S263>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.AND14) {
    /* Switch: '<S263>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_p = PubIfDecisionPLAN_MDL_B.Sum_c;
  } else {
    /* Switch: '<S263>/Switch1' incorporates:
     *  Constant: '<S263>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_p = ((uint16_T)0U);
  }

  /* End of Switch: '<S263>/Switch1' */

  /* Saturate: '<S263>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_p;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S263>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_ft = u0;
  } else {
    /* Saturate: '<S263>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_ft = u1;
  }

  /* End of Saturate: '<S263>/Saturation1' */

  /* RelationalOperator: '<S185>/Relational Operator2' */
  PubIfDecisionPLAN_MDL_B.LciValid_j = (PubIfDecisionPLAN_MDL_B.Saturation1_nr <=
    PubIfDecisionPLAN_MDL_B.Saturation1_ft);

  /* Abs: '<S185>/Abs5' */
  PubIfDecisionPLAN_MDL_B.Abs5_f = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S241>/Compare' incorporates:
   *  Constant: '<S241>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bx = (PubIfDecisionPLAN_MDL_B.Abs5_f <=
    rtP_P_PLAN_ALC_LcDrv_DyDiffThreshold);

  /* RelationalOperator: '<S258>/Compare' incorporates:
   *  Constant: '<S258>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_j2 = (rtu_VSM_UOM_LC->User_LC_DrvLCswt !=
    ((uint8_T)0U));

  /* Constant: '<S247>/Constant' */
  PubIfDecisionPLAN_MDL_B.Constant_g = rtP_P_PLAN_ALC_vMinPreLC_Drv;

  /* RelationalOperator: '<S247>/Compare' */
  PubIfDecisionPLAN_MDL_B.Compare_ji = (PubIfDecisionPLAN_MDL_B.Round >=
    PubIfDecisionPLAN_MDL_B.Constant_g);

  /* RelationalOperator: '<S235>/Compare' incorporates:
   *  Constant: '<S235>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_e = (PubIfDecisionPLAN_MDL_B.Round <= 125.0F);

  /* Chart: '<S185>/SigValueHold3' */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c122_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c122_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c122_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_Through;
    PubIfDecisionPLAN_MDL_B.HoldValue1 = PubIfDecisionPLAN_MDL_B.Compare_bx;
    PubIfDecisionPLAN_MDL_B.HoldValue2 = PubIfDecisionPLAN_MDL_B.Compare_j2;
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_IPVehSpd =
      PubIfDecisionPLAN_MDL_B.Compare_ji;
    PubIfDecisionPLAN_MDL_B.HoldValue4 = PubIfDecisionPLAN_MDL_B.Compare_e;
  } else if (PubIfDecisionPLAN_MDL_DW.is_c122_PubIfDecisionPLAN_MDL == 1) {
    if (!rtu_VSM_UOM_LC->User_RiTurnLmpOn) {
      PubIfDecisionPLAN_MDL_DW.is_c122_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_Through;
      PubIfDecisionPLAN_MDL_B.HoldValue1 = PubIfDecisionPLAN_MDL_B.Compare_bx;
      PubIfDecisionPLAN_MDL_B.HoldValue2 = PubIfDecisionPLAN_MDL_B.Compare_j2;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_IPVehSpd =
        PubIfDecisionPLAN_MDL_B.Compare_ji;
      PubIfDecisionPLAN_MDL_B.HoldValue4 = PubIfDecisionPLAN_MDL_B.Compare_e;
    }
  } else {
    /* case IN_Through: */
    if (rtu_VSM_UOM_LC->User_RiTurnLmpOn) {
      PubIfDecisionPLAN_MDL_DW.is_c122_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_Hold;
      PubIfDecisionPLAN_MDL_B.HoldValue1 = PubIfDecisionPLAN_MDL_B.Compare_bx;
      PubIfDecisionPLAN_MDL_B.HoldValue2 = PubIfDecisionPLAN_MDL_B.Compare_j2;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_IPVehSpd =
        PubIfDecisionPLAN_MDL_B.Compare_ji;
      PubIfDecisionPLAN_MDL_B.HoldValue4 = PubIfDecisionPLAN_MDL_B.Compare_e;
    } else {
      PubIfDecisionPLAN_MDL_B.HoldValue1 = PubIfDecisionPLAN_MDL_B.Compare_bx;
      PubIfDecisionPLAN_MDL_B.HoldValue2 = PubIfDecisionPLAN_MDL_B.Compare_j2;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_IPVehSpd =
        PubIfDecisionPLAN_MDL_B.Compare_ji;
      PubIfDecisionPLAN_MDL_B.HoldValue4 = PubIfDecisionPLAN_MDL_B.Compare_e;
    }
  }

  /* End of Chart: '<S185>/SigValueHold3' */

  /* Logic: '<S185>/AND10' */
  tmpForInput[0] = PubIfDecisionPLAN_MDL_B.Compare_ib;
  tmpForInput[1] = PubIfDecisionPLAN_MDL_B.Compare_fw;
  tmpForInput[2] = PubIfDecisionPLAN_MDL_B.LciValid_j;
  tmpForInput[3] = PubIfDecisionPLAN_MDL_B.HoldValue1;
  tmpForInput[4] = PubIfDecisionPLAN_MDL_B.HoldValue2;
  tmpForInput[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_IPVehSpd;
  tmpForInput[6] = PubIfDecisionPLAN_MDL_B.HoldValue4;
  tmpForInput_idx_0 = tmpForInput[0];
  for (JminIni = 0; JminIni < 6; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput[JminIni + 1]);
  }

  /* Logic: '<S185>/AND10' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_LciDrv = tmpForInput_idx_0;

  /* Logic: '<S185>/AND6' */
  tmpForInput[0] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_NoLcCancelFlag;
  tmpForInput[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_NoLcFinishFlag;
  tmpForInput[2] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_dyDiff;
  tmpForInput[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_DPC;
  tmpForInput[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_LineValid;
  tmpForInput[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_LciDrv;
  tmpForInput[6] = rtu_LSM_HWA->RiLineLcAvailable;
  tmpForInput_idx_0 = tmpForInput[0];
  for (JminIni = 0; JminIni < 6; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput[JminIni + 1]);
  }

  /* Logic: '<S185>/AND6' */
  PubIfDecisionPLAN_MDL_B.LcDrvRi = tmpForInput_idx_0;

  /* Logic: '<S187>/NOT2' */
  PubIfDecisionPLAN_MDL_B.NOT2 = !rtu_VSM_UOM_LC->User_LeTurnLmpOn;

  /* Logic: '<S187>/NOT3' */
  PubIfDecisionPLAN_MDL_B.NOT3 = !rtu_VSM_UOM_LC->User_RiTurnLmpOn;

  /* Logic: '<S187>/AND' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_NoTurnLamp =
    (PubIfDecisionPLAN_MDL_B.NOT2 && PubIfDecisionPLAN_MDL_B.NOT3);

  /* Abs: '<S187>/Abs1' */
  PubIfDecisionPLAN_MDL_B.Abs1_b = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S297>/Compare' incorporates:
   *  Constant: '<S297>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_dyDiff =
    (PubIfDecisionPLAN_MDL_B.Abs1_b < 0.4F);

  /* RelationalOperator: '<S187>/Relational Operator2' incorporates:
   *  Constant: '<S187>/Constant4'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_IPVehSpd = (rtu_PLAN_VCAN_ESP->VehSpd
    >= rtP_P_PLAN_ALC_vMinPreLC_Noh);

  /* UnitDelay: '<S302>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_ee =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_lp;

  /* RelationalOperator: '<S187>/Relational Operator' incorporates:
   *  Constant: '<S187>/Constant3'
   */
  PubIfDecisionPLAN_MDL_B.RelationalOperator_a =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L <=
     rtP_P_PLAN_ALC_DynamicDPCthreshold);

  /* Switch: '<S302>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator_a) {
    /* Switch: '<S302>/Switch' incorporates:
     *  Constant: '<S302>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_co = ((uint16_T)1U);
  } else {
    /* Switch: '<S302>/Switch' incorporates:
     *  Constant: '<S302>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_co = ((uint16_T)0U);
  }

  /* End of Switch: '<S302>/Switch' */

  /* Sum: '<S302>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_go = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_ee + PubIfDecisionPLAN_MDL_B.Switch_co);

  /* Switch: '<S302>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator_a) {
    /* Switch: '<S302>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_b0 = PubIfDecisionPLAN_MDL_B.Sum_go;
  } else {
    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S302>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_b0 = ((uint16_T)0U);
  }

  /* End of Switch: '<S302>/Switch1' */

  /* Saturate: '<S302>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_b0;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S302>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_a = u0;
  } else {
    /* Saturate: '<S302>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_a = u1;
  }

  /* End of Saturate: '<S302>/Saturation1' */

  /* Constant: '<S294>/Constant' */
  PubIfDecisionPLAN_MDL_B.Constant_a4 =
    rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntNoh;

  /* RelationalOperator: '<S294>/Compare' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_DPC =
    (PubIfDecisionPLAN_MDL_B.Saturation1_a > PubIfDecisionPLAN_MDL_B.Constant_a4);

  /* RelationalOperator: '<S299>/Compare' incorporates:
   *  Constant: '<S299>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_LineValid =
    (rtu_LSM_HWA->HWALeLineValid != false);

  /* UnitDelay: '<S4>/Unit Delay15' */
  PubIfDecisionPLAN_MDL_B.UnitDelay15 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay15_DSTATE;

  /* RelationalOperator: '<S289>/Compare' incorporates:
   *  Constant: '<S289>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_g = (PubIfDecisionPLAN_MDL_B.UnitDelay15 <=
    ((uint8_T)125U));

  /* SignalConversion: '<S4>/Signal Copy' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LSMPilotTurnSts = *rtu_LSM_PilotTurnSwSts;

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/Constant8'
   */
  if (rtP_P_PLAN_ALC_NOHLcSwt != 0) {
    /* Switch: '<S4>/Switch' */
    PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts =
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LSMPilotTurnSts;
  } else {
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/Constant9'
     */
    PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts = rtP_P_PLAN_ALC_NOHTurnSts;
  }

  /* End of Switch: '<S4>/Switch' */

  /* RelationalOperator: '<S296>/Compare' incorporates:
   *  Constant: '<S296>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_gx = (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts
    == ((uint8_T)1U));

  /* RelationalOperator: '<S288>/Compare' incorporates:
   *  Constant: '<S288>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_g2 = (rtu_VSM_HMI->NOH_Sts == ((uint8_T)3U));

  /* Logic: '<S187>/AND1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_LciNoh =
    (PubIfDecisionPLAN_MDL_B.Compare_gx && PubIfDecisionPLAN_MDL_B.Compare_g2);

  /* Logic: '<S187>/AND3' */
  tmpForInput_0[0] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_NoTurnLamp;
  tmpForInput_0[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_dyDiff;
  tmpForInput_0[2] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_IPVehSpd;
  tmpForInput_0[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_DPC;
  tmpForInput_0[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_LineValid;
  tmpForInput_0[5] = PubIfDecisionPLAN_MDL_B.Compare_g;
  tmpForInput_0[6] = rtu_LSM_HWA->LeLineLcAvailable;
  tmpForInput_0[7] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_LciNoh;
  tmpForInput_idx_0 = tmpForInput_0[0];
  for (JminIni = 0; JminIni < 7; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput_0[JminIni + 1]);
  }

  /* Logic: '<S187>/AND3' */
  PubIfDecisionPLAN_MDL_B.LcNohLe = tmpForInput_idx_0;

  /* Logic: '<S187>/NOT4' */
  PubIfDecisionPLAN_MDL_B.NOT4_k = !rtu_VSM_UOM_LC->User_LeTurnLmpOn;

  /* Logic: '<S187>/NOT5' */
  PubIfDecisionPLAN_MDL_B.NOT5_g = !rtu_VSM_UOM_LC->User_RiTurnLmpOn;

  /* Logic: '<S187>/AND6' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_NoTurnLamp =
    (PubIfDecisionPLAN_MDL_B.NOT4_k && PubIfDecisionPLAN_MDL_B.NOT5_g);

  /* Abs: '<S187>/Abs4' */
  PubIfDecisionPLAN_MDL_B.Abs4_e = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S291>/Compare' incorporates:
   *  Constant: '<S291>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_dyDiff =
    (PubIfDecisionPLAN_MDL_B.Abs4_e < 0.4F);

  /* RelationalOperator: '<S187>/Relational Operator3' incorporates:
   *  Constant: '<S187>/Constant5'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_IPVehSpd = (rtu_PLAN_VCAN_ESP->VehSpd
    >= rtP_P_PLAN_ALC_vMinPreLC_Drv);

  /* UnitDelay: '<S301>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_b3 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pu;

  /* RelationalOperator: '<S187>/Relational Operator1' incorporates:
   *  Constant: '<S187>/Constant6'
   */
  PubIfDecisionPLAN_MDL_B.RelationalOperator1_o =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R <=
     rtP_P_PLAN_ALC_DynamicDPCthreshold);

  /* Switch: '<S301>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator1_o) {
    /* Switch: '<S301>/Switch' incorporates:
     *  Constant: '<S301>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_hg = ((uint16_T)1U);
  } else {
    /* Switch: '<S301>/Switch' incorporates:
     *  Constant: '<S301>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_hg = ((uint16_T)0U);
  }

  /* End of Switch: '<S301>/Switch' */

  /* Sum: '<S301>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_j = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_b3 + PubIfDecisionPLAN_MDL_B.Switch_hg);

  /* Switch: '<S301>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator1_o) {
    /* Switch: '<S301>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_oa = PubIfDecisionPLAN_MDL_B.Sum_j;
  } else {
    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S301>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_oa = ((uint16_T)0U);
  }

  /* End of Switch: '<S301>/Switch1' */

  /* Saturate: '<S301>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_oa;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S301>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_m = u0;
  } else {
    /* Saturate: '<S301>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_m = u1;
  }

  /* End of Saturate: '<S301>/Saturation1' */

  /* Constant: '<S293>/Constant' */
  PubIfDecisionPLAN_MDL_B.Constant_kx =
    rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntNoh;

  /* RelationalOperator: '<S293>/Compare' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_DPC =
    (PubIfDecisionPLAN_MDL_B.Saturation1_m > PubIfDecisionPLAN_MDL_B.Constant_kx);

  /* UnitDelay: '<S304>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_b =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_ot;

  /* RelationalOperator: '<S300>/Compare' incorporates:
   *  Constant: '<S300>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mk = (rtu_LSM_HWA->HWARiLineValid != false);

  /* UnitDelay: '<S304>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_bb =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_m;

  /* If: '<S304>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_b && PubIfDecisionPLAN_MDL_B.Compare_mk)
  {
    /* Outputs for IfAction SubSystem: '<S304>/If Action Subsystem' incorporates:
     *  ActionPort: '<S305>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem
      (PubIfDecisionPLAN_MDL_B.UnitDelay1_bb, &PubIfDecisionPLAN_MDL_B.Merge_b,
       &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_o);

    /* End of Outputs for SubSystem: '<S304>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S304>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S306>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_b);

    /* End of Outputs for SubSystem: '<S304>/If Action Subsystem1' */
  }

  /* End of If: '<S304>/If' */

  /* Product: '<S304>/Product' incorporates:
   *  Constant: '<S304>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_i = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_b *
    0.02F;

  /* RelationalOperator: '<S295>/Compare' incorporates:
   *  Constant: '<S295>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_LineValid =
    (PubIfDecisionPLAN_MDL_B.Product_i > 0.1F);

  /* UnitDelay: '<S4>/Unit Delay9' */
  PubIfDecisionPLAN_MDL_B.UnitDelay9_e =
    PubIfDecisionPLAN_MDL_DW.UnitDelay9_DSTATE_e;

  /* RelationalOperator: '<S298>/Compare' incorporates:
   *  Constant: '<S298>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_iv = (PubIfDecisionPLAN_MDL_B.UnitDelay9_e <=
    ((uint8_T)125U));

  /* RelationalOperator: '<S292>/Compare' incorporates:
   *  Constant: '<S292>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_l1 = (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts
    == ((uint8_T)2U));

  /* RelationalOperator: '<S290>/Compare' incorporates:
   *  Constant: '<S290>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_n = (rtu_VSM_HMI->NOH_Sts == ((uint8_T)3U));

  /* Logic: '<S187>/AND2' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_LciNoh =
    (PubIfDecisionPLAN_MDL_B.Compare_l1 && PubIfDecisionPLAN_MDL_B.Compare_n);

  /* Logic: '<S187>/AND4' */
  tmpForInput_0[0] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_NoTurnLamp;
  tmpForInput_0[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_dyDiff;
  tmpForInput_0[2] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_IPVehSpd;
  tmpForInput_0[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_DPC;
  tmpForInput_0[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_LineValid;
  tmpForInput_0[5] = PubIfDecisionPLAN_MDL_B.Compare_iv;
  tmpForInput_0[6] = rtu_LSM_HWA->RiLineLcAvailable;
  tmpForInput_0[7] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_LciNoh;
  tmpForInput_idx_0 = tmpForInput_0[0];
  for (JminIni = 0; JminIni < 7; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput_0[JminIni + 1]);
  }

  /* Logic: '<S187>/AND4' */
  PubIfDecisionPLAN_MDL_B.LcNohRi = tmpForInput_idx_0;

  /* RelationalOperator: '<S319>/Compare' incorporates:
   *  Constant: '<S319>/Constant'
   */
  PLAN_ALC_LcOverTkLe_ALCSwtOn = (rtu_VSM_UOM_LC->User_LC_ALCswt != ((uint8_T)0U));

  /* Logic: '<S188>/NOT' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_LaneAvailable =
    !rtu_LSM_HWA->MLeLane;

  /* RelationalOperator: '<S328>/Compare' incorporates:
   *  Constant: '<S328>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_nj = (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts
    == ((uint8_T)7U));

  /* RelationalOperator: '<S311>/Compare' incorporates:
   *  Constant: '<S311>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_jk = (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts
    == ((uint8_T)0U));

  /* Logic: '<S188>/OR2' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_PilotLaneAvailable =
    (PubIfDecisionPLAN_MDL_B.Compare_nj || PubIfDecisionPLAN_MDL_B.Compare_jk);

  /* Logic: '<S188>/NOR' */
  PubIfDecisionPLAN_MDL_B.NOR = (rtu_VSM_UOM_LC->User_LeTurnLmpOn ||
    rtu_VSM_UOM_LC->User_RiTurnLmpOn);

  /* Logic: '<S188>/NOT2' */
  PubIfDecisionPLAN_MDL_B.NOT2_e = !PubIfDecisionPLAN_MDL_B.NOR;

  /* Logic: '<S188>/AND1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_NoTurnLampReq =
    PubIfDecisionPLAN_MDL_B.NOT2_e;

  /* UnitDelay: '<S4>/Unit Delay10' */
  PubIfDecisionPLAN_MDL_B.UnitDelay10_a =
    PubIfDecisionPLAN_MDL_DW.UnitDelay10_DSTATE_f;

  /* RelationalOperator: '<S315>/Compare' incorporates:
   *  Constant: '<S315>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_iw = (PubIfDecisionPLAN_MDL_B.UnitDelay10_a >
    ((uint8_T)1U));

  /* UnitDelay: '<S4>/Unit Delay11' */
  PubIfDecisionPLAN_MDL_B.UnitDelay11_a =
    PubIfDecisionPLAN_MDL_DW.UnitDelay11_DSTATE_i;

  /* RelationalOperator: '<S317>/Compare' incorporates:
   *  Constant: '<S317>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bm = (PubIfDecisionPLAN_MDL_B.UnitDelay11_a >
    ((uint8_T)1U));

  /* Logic: '<S188>/OR' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_NoLcFinishFlag =
    ((!PubIfDecisionPLAN_MDL_B.Compare_iw) &&
     (!PubIfDecisionPLAN_MDL_B.Compare_bm));

  /* Abs: '<S188>/Abs1' */
  PubIfDecisionPLAN_MDL_B.Abs1_h = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S326>/Compare' incorporates:
   *  Constant: '<S326>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_dyDiff =
    (PubIfDecisionPLAN_MDL_B.Abs1_h < 0.4F);

  /* RelationalOperator: '<S316>/Compare' incorporates:
   *  Constant: '<S316>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ds = (rtu_PLAN_VCAN_ESP->VehSpd <= 120.0F);

  /* RelationalOperator: '<S314>/Compare' incorporates:
   *  Constant: '<S314>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_lo = (rtu_PLAN_VCAN_ESP->VehSpd >=
    rtP_P_PLAN_ALC_vMinPreLC_OverTk);

  /* Logic: '<S188>/AND7' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_IPVehSpd =
    (PubIfDecisionPLAN_MDL_B.Compare_ds && PubIfDecisionPLAN_MDL_B.Compare_lo);

  /* UnitDelay: '<S334>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_gx =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pv;

  /* RelationalOperator: '<S350>/Compare' incorporates:
   *  Constant: '<S350>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_pi = (rtu_VSM_UOM_LC->User_LC_ALCswt ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S351>/Compare' incorporates:
   *  Constant: '<S351>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_pa = (rtu_VSM_UOM_LC->User_LC_ALCswt ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S352>/Compare' incorporates:
   *  Constant: '<S352>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_do = (rtu_VSM_UOM_LC->User_LC_ALCswt ==
    ((uint8_T)3U));

  /* Switch: '<S339>/Switch9' */
  if (PubIfDecisionPLAN_MDL_B.Compare_do) {
    /* Switch: '<S339>/Switch9' incorporates:
     *  Constant: '<S339>/P0DeltaSpd_kph5'
     */
    PubIfDecisionPLAN_MDL_B.Switch9 = 0.0;
  } else {
    /* Switch: '<S339>/Switch9' incorporates:
     *  Constant: '<S339>/P0DeltaSpd_kph4'
     */
    PubIfDecisionPLAN_MDL_B.Switch9 = 0.05;
  }

  /* End of Switch: '<S339>/Switch9' */

  /* Switch: '<S339>/Switch2' */
  if (PubIfDecisionPLAN_MDL_B.Compare_pa) {
    /* Switch: '<S339>/Switch2' incorporates:
     *  Constant: '<S339>/P0DeltaSpd_kph4'
     */
    PubIfDecisionPLAN_MDL_B.Switch2 = 0.05;
  } else {
    /* Switch: '<S339>/Switch2' */
    PubIfDecisionPLAN_MDL_B.Switch2 = PubIfDecisionPLAN_MDL_B.Switch9;
  }

  /* End of Switch: '<S339>/Switch2' */

  /* Switch: '<S339>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.Compare_pi) {
    /* Switch: '<S339>/Switch1' incorporates:
     *  Constant: '<S339>/P0DeltaSpd_kph3'
     */
    PubIfDecisionPLAN_MDL_B.Switch1 = 0.1;
  } else {
    /* Switch: '<S339>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1 = PubIfDecisionPLAN_MDL_B.Switch2;
  }

  /* End of Switch: '<S339>/Switch1' */

  /* RelationalOperator: '<S188>/Relational Operator3' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator3 =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L <=
     PubIfDecisionPLAN_MDL_B.Switch1);

  /* Switch: '<S334>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator3) {
    /* Switch: '<S334>/Switch' incorporates:
     *  Constant: '<S334>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_b = ((uint16_T)1U);
  } else {
    /* Switch: '<S334>/Switch' incorporates:
     *  Constant: '<S334>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_b = ((uint16_T)0U);
  }

  /* End of Switch: '<S334>/Switch' */

  /* Sum: '<S334>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_g4 = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_gx + PubIfDecisionPLAN_MDL_B.Switch_b);

  /* Switch: '<S334>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator3) {
    /* Switch: '<S334>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_fb = PubIfDecisionPLAN_MDL_B.Sum_g4;
  } else {
    /* Switch: '<S334>/Switch1' incorporates:
     *  Constant: '<S334>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_fb = ((uint16_T)0U);
  }

  /* End of Switch: '<S334>/Switch1' */

  /* Saturate: '<S334>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_fb;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S334>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_j = u0;
  } else {
    /* Saturate: '<S334>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_j = u1;
  }

  /* End of Saturate: '<S334>/Saturation1' */

  /* Constant: '<S321>/Constant' */
  PubIfDecisionPLAN_MDL_B.Constant_b =
    rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntOverTk;

  /* RelationalOperator: '<S321>/Compare' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_DPC =
    (PubIfDecisionPLAN_MDL_B.Saturation1_j > PubIfDecisionPLAN_MDL_B.Constant_b);

  /* MATLAB Function: '<S462>/DangerFactorMatrixCalc_Left2' incorporates:
   *  Constant: '<S462>/Constant24'
   *  Constant: '<S462>/Constant25'
   *  Constant: '<S462>/Constant28'
   */
  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PreDyRel[i_2] = 999.0F;
  }

  tmpForInput_idx_0 = false;
  temp = 999.0F;
  ToleranceBoxRightOffset = 999.0F;
  distRelPlanStartReasonable = false;
  deltaVelCC = -999.0F;
  t = -999.0F;
  for (i_2 = 0; i_2 < 11; i_2++) {
    NearestObj_Oncoming[i_2] = 0;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_front_Dx[i_2] = 999.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_front_Vx[i_2] = 0.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_Rear_Dx[i_2] = -999.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.obj_Rear_Vx[i_2] = 0.0F;
  }

  if (rtu_LSM_HWA->HWALineValid) {
    for (JminIni = 0; JminIni < (int32_T)11.0; JminIni++) {
      if (PubIfDecisionPLAN_MDL_B.AND[JminIni]) {
        if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] >= 0.0F)
        {
          PubIfDecisionPLAN_MDL_B.obj_front_Dx[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          PubIfDecisionPLAN_MDL_B.obj_front_Vx[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni] * 3.6F
            + 0.5F;
        } else {
          PubIfDecisionPLAN_MDL_B.obj_Rear_Dx[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          PubIfDecisionPLAN_MDL_B.obj_Rear_Vx[JminIni] =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni] * 3.6F
            + 0.5F;
        }
      }

      if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] >= 0.0F)
      {
        if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] <= 0.0F)
        {
          LineC2Factor = 1.0F;
        } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    > 0.0F) &&
                   (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    <= rtu_LSM_HWA->HWARange)) {
          LineC2Factor =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] * 0.0F /
            rtu_LSM_HWA->HWARange + 1.0F;
        } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    > rtu_LSM_HWA->HWARange) &&
                   (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    <= rtu_LSM_HWA->HWARange + 20.0F)) {
          LineC2Factor =
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] -
             rtu_LSM_HWA->HWARange) * -0.3F / ((rtu_LSM_HWA->HWARange + 20.0F) -
            rtu_LSM_HWA->HWARange) + 1.0F;
        } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    > rtu_LSM_HWA->HWARange + 20.0F) &&
                   (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                    <= rtu_LSM_HWA->HWARange + 40.0F)) {
          LineC2Factor =
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] -
             (rtu_LSM_HWA->HWARange + 20.0F)) * -0.7F / ((rtu_LSM_HWA->HWARange
            + 40.0F) - (rtu_LSM_HWA->HWARange + 20.0F)) + 0.7F;
        } else {
          LineC2Factor = 0.0F;
        }

        LineC2Factor = ((0.0F * rtu_LSM_HWA->HWALineC3 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         + LineC2Factor * rtu_LSM_HWA->HWALineC2 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
                        + rtu_LSM_HWA->HWALineC1 *
                        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
          + rtu_LSM_HWA->HWALineC0;
        PubIfDecisionPLAN_MDL_B.PreDyRel[JminIni] =
          PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] -
          LineC2Factor;
        if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] >=
             LineC2Factor - PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] <=
             PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F + LineC2Factor) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] <=
             temp)) {
          ToleranceBoxRightOffset = RtVehSpdms +
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni];
          tmpForInput_idx_0 = true;
          temp = PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          NearestObj_Oncoming[JminIni] = (int8_T)(ToleranceBoxRightOffset <
            -2.5F);
        }
      } else {
        LineC2Factor = ((rtP_P_PLAN_DPC_HWALineRearA3Factor *
                         rtu_LSM_HWA->HWALineC3 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         + rtP_P_PLAN_DPC_HWALineRearA2Factor *
                         rtu_LSM_HWA->HWALineC2 *
                         PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni]
                         * PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
                        + rtu_LSM_HWA->HWALineC1 *
                        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni])
          + rtu_LSM_HWA->HWALineC0;
        PubIfDecisionPLAN_MDL_B.PreDyRel[JminIni] =
          PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] -
          LineC2Factor;
        if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] >=
             LineC2Factor - PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[JminIni] <=
             PubIfDecisionPLAN_MDL_B.RoadWidth / 2.0F + LineC2Factor) &&
            (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni] >=
             deltaVelCC)) {
          distRelPlanStartReasonable = true;
          deltaVelCC =
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[JminIni];
          t = RtVehSpdms +
            PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[JminIni];
        }
      }
    }

    Update = false;
    oldestbufIndex = 0;
    exitg1 = false;
    while ((!exitg1) && (oldestbufIndex < 11)) {
      absx = (real_T)NearestObj_Oncoming[oldestbufIndex] / 2.0;
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &kAcol);
        absx = ldexp(1.0, kAcol - 53);
      }

      if (fabs((real_T)NearestObj_Oncoming[oldestbufIndex] - 1.0) < absx) {
        Update = true;
        exitg1 = true;
      } else {
        oldestbufIndex++;
      }
    }
  } else {
    for (i_2 = 0; i_2 < 11; i_2++) {
      PubIfDecisionPLAN_MDL_B.PreDyRel[i_2] = 0.0F;
    }

    Update = false;
  }

  PubIfDecisionPLAN_MDL_B.Oncoming_flag = Update;
  PubIfDecisionPLAN_MDL_B.NearestObjValid = tmpForInput_idx_0;
  PubIfDecisionPLAN_MDL_B.NearestObjDx = temp;
  PubIfDecisionPLAN_MDL_B.NearestObjSpeed = ToleranceBoxRightOffset;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_RearObjValid = distRelPlanStartReasonable;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_RearObjDx = deltaVelCC;
  PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_RearObjSpeed = t;

  /* End of MATLAB Function: '<S462>/DangerFactorMatrixCalc_Left2' */

  /* RelationalOperator: '<S325>/Compare' incorporates:
   *  Constant: '<S325>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ge =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_RearObjValid != false);

  /* Abs: '<S188>/Abs' */
  PubIfDecisionPLAN_MDL_B.Abs = fabsf
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_RearObjDx);

  /* Sum: '<S188>/Subtract' */
  PubIfDecisionPLAN_MDL_B.Subtract =
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_RearObjSpeed -
    rtu_PLAN_VCAN_ESP->VehSpd;

  /* Abs: '<S188>/Abs2' */
  PubIfDecisionPLAN_MDL_B.Abs2_fu = fabsf(PubIfDecisionPLAN_MDL_B.Subtract);

  /* Product: '<S188>/Divide' */
  PubIfDecisionPLAN_MDL_B.Divide = PubIfDecisionPLAN_MDL_B.Abs /
    PubIfDecisionPLAN_MDL_B.Abs2_fu;

  /* RelationalOperator: '<S329>/Compare' incorporates:
   *  Constant: '<S329>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_br = (PubIfDecisionPLAN_MDL_B.Divide >=
    rtP_P_PLAN_ALC_LcOverTkRearVehTTClimit);

  /* RelationalOperator: '<S318>/Compare' incorporates:
   *  Constant: '<S318>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_pib = (PubIfDecisionPLAN_MDL_B.Subtract > 0.0F);

  /* RelationalOperator: '<S320>/Compare' incorporates:
   *  Constant: '<S320>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_f2 =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_RearObjDx < 0.0F);

  /* Logic: '<S188>/AND8' */
  PubIfDecisionPLAN_MDL_B.AND8 = (PubIfDecisionPLAN_MDL_B.Compare_ge &&
    PubIfDecisionPLAN_MDL_B.Compare_br && PubIfDecisionPLAN_MDL_B.Compare_pib &&
    PubIfDecisionPLAN_MDL_B.Compare_f2);

  /* Logic: '<S188>/NOT6' */
  PubIfDecisionPLAN_MDL_B.NOT6 = !PubIfDecisionPLAN_MDL_B.AND8;

  /* UnitDelay: '<S342>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_e =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_a;

  /* RelationalOperator: '<S330>/Compare' incorporates:
   *  Constant: '<S330>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_pw = (rtu_LSM_HWA->HWALeLineValid != false);

  /* UnitDelay: '<S342>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_m =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_c0;

  /* If: '<S342>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_e && PubIfDecisionPLAN_MDL_B.Compare_pw)
  {
    /* Outputs for IfAction SubSystem: '<S342>/If Action Subsystem' incorporates:
     *  ActionPort: '<S375>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem(PubIfDecisionPLAN_MDL_B.UnitDelay1_m,
      &PubIfDecisionPLAN_MDL_B.Merge_e,
      &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_oz);

    /* End of Outputs for SubSystem: '<S342>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S342>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S376>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_e);

    /* End of Outputs for SubSystem: '<S342>/If Action Subsystem1' */
  }

  /* End of If: '<S342>/If' */

  /* Product: '<S342>/Product' incorporates:
   *  Constant: '<S342>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_ig = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_e
    * 0.02F;

  /* RelationalOperator: '<S308>/Compare' incorporates:
   *  Constant: '<S308>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_LineValid =
    (PubIfDecisionPLAN_MDL_B.Product_ig > 0.1F);

  /* UnitDelay: '<S4>/Unit Delay14' */
  PubIfDecisionPLAN_MDL_B.UnitDelay14 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay14_DSTATE;

  /* UnitDelay: '<S4>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_px =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_i4;

  /* Logic: '<S337>/OR2' */
  PubIfDecisionPLAN_MDL_B.OR2_e = ((PubIfDecisionPLAN_MDL_B.UnitDelay14 != 0) ||
    (PubIfDecisionPLAN_MDL_B.UnitDelay1_px != 0));

  /* UnitDelay: '<S4>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_l =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_i1;

  /* RelationalOperator: '<S346>/Compare' incorporates:
   *  Constant: '<S346>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_jr = (PubIfDecisionPLAN_MDL_B.UnitDelay_l ==
    ((uint8_T)4U));

  /* Logic: '<S337>/AND' */
  PubIfDecisionPLAN_MDL_B.AND_p = (PubIfDecisionPLAN_MDL_B.NOR &&
    PubIfDecisionPLAN_MDL_B.OR2_e && PubIfDecisionPLAN_MDL_B.Compare_jr);

  /* UnitDelay: '<S4>/Unit Delay6' */
  PubIfDecisionPLAN_MDL_B.UnitDelay6_j =
    PubIfDecisionPLAN_MDL_DW.UnitDelay6_DSTATE_k;

  /* RelationalOperator: '<S345>/Compare' incorporates:
   *  Constant: '<S345>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_p1 = (PubIfDecisionPLAN_MDL_B.UnitDelay6_j ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S348>/Compare' incorporates:
   *  Constant: '<S348>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_jrr = (PubIfDecisionPLAN_MDL_B.UnitDelay6_j ==
    ((uint8_T)3U));

  /* Logic: '<S337>/OR' */
  PubIfDecisionPLAN_MDL_B.OR = (PubIfDecisionPLAN_MDL_B.Compare_p1 ||
    PubIfDecisionPLAN_MDL_B.Compare_jrr);

  /* Logic: '<S337>/AND1' */
  PubIfDecisionPLAN_MDL_B.AND1 = ((rtu_VSM_UOM_LC->User_LC_DrvOverride != 0) &&
    PubIfDecisionPLAN_MDL_B.OR);

  /* Logic: '<S337>/OR1' */
  PubIfDecisionPLAN_MDL_B.OR1 = (PubIfDecisionPLAN_MDL_B.AND_p ||
    PubIfDecisionPLAN_MDL_B.AND1);

  /* UnitDelay: '<S337>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay = PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE;

  /* RelationalOperator: '<S347>/Compare' incorporates:
   *  Constant: '<S347>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_h2 = (PubIfDecisionPLAN_MDL_B.UnitDelay >
    rtP_P_PLAN_ALC_OveTkrSupDist);

  /* Chart: '<S337>/Chart' */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c123_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c123_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c123_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_off;
    PubIfDecisionPLAN_MDL_B.Sts = false;
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_OveTkrSupDist = 0.0F;
  } else if (PubIfDecisionPLAN_MDL_DW.is_c123_PubIfDecisionPLAN_MDL == 1) {
    if (PubIfDecisionPLAN_MDL_B.OR1) {
      PubIfDecisionPLAN_MDL_DW.is_c123_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_on;
      PubIfDecisionPLAN_MDL_B.Sts = true;
    } else {
      PubIfDecisionPLAN_MDL_B.Sts = false;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_OveTkrSupDist = 0.0F;
    }
  } else {
    /* case IN_on: */
    if (PubIfDecisionPLAN_MDL_B.Compare_h2) {
      PubIfDecisionPLAN_MDL_DW.is_c123_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_off;
      PubIfDecisionPLAN_MDL_B.Sts = false;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_OveTkrSupDist = 0.0F;
    } else {
      PubIfDecisionPLAN_MDL_B.Sts = true;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_OveTkrSupDist +=
        rtu_PLAN_VCAN_ESP->VehSpd / 3.6F * 0.02F;
    }
  }

  /* End of Chart: '<S337>/Chart' */

  /* Logic: '<S188>/NOT3' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_NotInDrvCancelArea =
    !PubIfDecisionPLAN_MDL_B.Sts;

  /* MATLAB Function: '<S340>/SLPDyCalc' */
  PubIfDecisionPLAN_MDL_B.dDyDiffRelLine = 0.0F;
  if (rtu_LSM_HWA->HWALineValid) {
    if (rtu_TOS_ACCP0->dxP0 <= 0.0F) {
      LineC2Factor = 1.0F;
    } else if ((rtu_TOS_ACCP0->dxP0 > 0.0F) && (rtu_TOS_ACCP0->dxP0 <=
                rtu_LSM_HWA->HWARange)) {
      LineC2Factor = rtu_TOS_ACCP0->dxP0 * 0.0F / rtu_LSM_HWA->HWARange + 1.0F;
    } else if ((rtu_TOS_ACCP0->dxP0 > rtu_LSM_HWA->HWARange) &&
               (rtu_TOS_ACCP0->dxP0 <= rtu_LSM_HWA->HWARange + 20.0F)) {
      LineC2Factor = (rtu_TOS_ACCP0->dxP0 - rtu_LSM_HWA->HWARange) * -0.3F /
        ((rtu_LSM_HWA->HWARange + 20.0F) - rtu_LSM_HWA->HWARange) + 1.0F;
    } else if ((rtu_TOS_ACCP0->dxP0 > rtu_LSM_HWA->HWARange + 20.0F) &&
               (rtu_TOS_ACCP0->dxP0 <= rtu_LSM_HWA->HWARange + 40.0F)) {
      LineC2Factor = (rtu_TOS_ACCP0->dxP0 - (rtu_LSM_HWA->HWARange + 20.0F)) *
        -0.7F / ((rtu_LSM_HWA->HWARange + 40.0F) - (rtu_LSM_HWA->HWARange +
                  20.0F)) + 0.7F;
    } else {
      LineC2Factor = 0.0F;
    }

    PubIfDecisionPLAN_MDL_B.dDyDiffRelLine = rtu_TOS_ACCP0->ObjDYP0 - (((0.0F *
      rtu_LSM_HWA->HWALineC3 * rtu_TOS_ACCP0->dxP0 * rtu_TOS_ACCP0->dxP0 *
      rtu_TOS_ACCP0->dxP0 + LineC2Factor * rtu_LSM_HWA->HWALineC2 *
      rtu_TOS_ACCP0->dxP0 * rtu_TOS_ACCP0->dxP0) + rtu_LSM_HWA->HWALineC1 *
      rtu_TOS_ACCP0->dxP0) + rtu_LSM_HWA->HWALineC0);
  }

  /* End of MATLAB Function: '<S340>/SLPDyCalc' */

  /* RelationalOperator: '<S354>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bc = (rtu_TOS_ACCP0->IDP0 != ((uint8_T)0U));

  /* UnitDelay: '<S340>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_n =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_d;

  /* UnitDelay: '<S340>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_d =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_b;

  /* MATLAB Function: '<S340>/MATLAB Function' */
  if (PubIfDecisionPLAN_MDL_B.Compare_bc) {
    if (PubIfDecisionPLAN_MDL_B.UnitDelay_n) {
      PubIfDecisionPLAN_MDL_B.result = (rtu_TOS_ACCP0->ACCTgtObjVy -
        PubIfDecisionPLAN_MDL_B.UnitDelay1_d) * 0.025F +
        PubIfDecisionPLAN_MDL_B.UnitDelay1_d;
    } else {
      PubIfDecisionPLAN_MDL_B.result = rtu_TOS_ACCP0->ACCTgtObjVy;
    }
  } else {
    PubIfDecisionPLAN_MDL_B.result = rtu_TOS_ACCP0->ACCTgtObjVy;
  }

  /* End of MATLAB Function: '<S340>/MATLAB Function' */

  /* Product: '<S340>/Product' incorporates:
   *  Constant: '<S340>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product = PubIfDecisionPLAN_MDL_B.result * 1.5;

  /* Sum: '<S340>/Add' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_PreP0Dy =
    PubIfDecisionPLAN_MDL_B.dDyDiffRelLine + PubIfDecisionPLAN_MDL_B.Product;

  /* RelationalOperator: '<S353>/Compare' incorporates:
   *  Constant: '<S353>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_fz = (rtu_LSM_HWA->RoadWidth > 3.0F);

  /* Switch: '<S340>/Switch2' */
  if (PubIfDecisionPLAN_MDL_B.Compare_fz) {
    /* Switch: '<S340>/Switch2' */
    PubIfDecisionPLAN_MDL_B.Switch2_a = rtu_LSM_HWA->RoadWidth;
  } else {
    /* Switch: '<S340>/Switch2' incorporates:
     *  Constant: '<S340>/Constant70'
     */
    PubIfDecisionPLAN_MDL_B.Switch2_a = 3.0F;
  }

  /* End of Switch: '<S340>/Switch2' */

  /* Product: '<S340>/Product1' incorporates:
   *  Constant: '<S340>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.Le = rtP_P_PLAN_ALC_OverTkCutOutDyRWFactor *
    PubIfDecisionPLAN_MDL_B.Switch2_a;

  /* RelationalOperator: '<S340>/Relational Operator2' */
  PubIfDecisionPLAN_MDL_B.LeftCutOut = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_PreP0Dy
    > PubIfDecisionPLAN_MDL_B.Le);

  /* RelationalOperator: '<S340>/Relational Operator' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator_c =
    (PubIfDecisionPLAN_MDL_B.dDyDiffRelLine > PubIfDecisionPLAN_MDL_B.Le);

  /* Logic: '<S340>/OR2' */
  PubIfDecisionPLAN_MDL_B.OR2_b = (PubIfDecisionPLAN_MDL_B.LeftCutOut ||
    PubIfDecisionPLAN_MDL_B.RelationalOperator_c);

  /* Product: '<S340>/Product2' incorporates:
   *  Constant: '<S340>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.Product2 = rtP_P_PLAN_ALC_OverTkCutOutDyRWFactor *
    PubIfDecisionPLAN_MDL_B.Switch2_a;

  /* Gain: '<S340>/Gain' */
  PubIfDecisionPLAN_MDL_B.Ri = (-1.0) * PubIfDecisionPLAN_MDL_B.Product2;

  /* RelationalOperator: '<S340>/Relational Operator3' */
  PubIfDecisionPLAN_MDL_B.RightCutOut =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_PreP0Dy < PubIfDecisionPLAN_MDL_B.Ri);

  /* RelationalOperator: '<S340>/Relational Operator1' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator1_h =
    (PubIfDecisionPLAN_MDL_B.dDyDiffRelLine < PubIfDecisionPLAN_MDL_B.Ri);

  /* Logic: '<S340>/OR3' */
  PubIfDecisionPLAN_MDL_B.OR3 = (PubIfDecisionPLAN_MDL_B.RightCutOut ||
    PubIfDecisionPLAN_MDL_B.RelationalOperator1_h);

  /* Logic: '<S188>/NOT4' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_P0NotCutOut =
    ((!PubIfDecisionPLAN_MDL_B.OR2_b) && (!PubIfDecisionPLAN_MDL_B.OR3));

  /* UnitDelay: '<S1>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_a =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g;

  /* RelationalOperator: '<S362>/Compare' incorporates:
   *  Constant: '<S362>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bz = (PubIfDecisionPLAN_MDL_B.UnitDelay_a <=
    4.0F);

  /* UnitDelay: '<S369>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_c0 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_ia;

  /* Chart: '<S341>/SigHold2' */
  PubIfDecisionPLAN_MDL_SigHold1
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjSpeed_L,
     PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjValid_L,
     &PubIfDecisionPLAN_MDL_B.sf_SigHold2, &PubIfDecisionPLAN_MDL_DW.sf_SigHold2);

  /* Gain: '<S341>/Gain2' */
  PubIfDecisionPLAN_MDL_B.Gain2_f = 3.6F *
    PubIfDecisionPLAN_MDL_B.sf_SigHold2.outData;

  /* Gain: '<S341>/Gain3' */
  PubIfDecisionPLAN_MDL_B.Gain3_g = 1.03F * PubIfDecisionPLAN_MDL_B.Gain2_f;

  /* Sum: '<S341>/Add3' incorporates:
   *  Constant: '<S341>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.Add3 = PubIfDecisionPLAN_MDL_B.Gain3_g + 1.3;

  /* Switch: '<S341>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.sf_SigHold2.outTrigger) {
    /* Switch: '<S341>/Switch' */
    PubIfDecisionPLAN_MDL_B.Switch_a = PubIfDecisionPLAN_MDL_B.Add3;
  } else {
    /* Switch: '<S341>/Switch' incorporates:
     *  Constant: '<S341>/Constant5'
     */
    PubIfDecisionPLAN_MDL_B.Switch_a = 255.0;
  }

  /* End of Switch: '<S341>/Switch' */

  /* MinMax: '<S341>/Min' */
  absx = fmin(PubIfDecisionPLAN_MDL_B.Switch_a,
              rtu_VSM_LON_CTRL->ACC_SpdSetValueKmh);

  /* MinMax: '<S341>/Min' */
  PubIfDecisionPLAN_MDL_B.Min = absx;

  /* Gain: '<S341>/Gain' */
  PubIfDecisionPLAN_MDL_B.Gain_l = 3.6F * rtu_TOS_ACCP0->vxRelP0;

  /* Sum: '<S341>/Add' */
  PubIfDecisionPLAN_MDL_B.Add_i = PubIfDecisionPLAN_MDL_B.Gain_l +
    rtu_PLAN_VCAN_ESP->VehSpd;

  /* Gain: '<S341>/Gain1' */
  PubIfDecisionPLAN_MDL_B.Gain1_d = 1.03F * PubIfDecisionPLAN_MDL_B.Add_i;

  /* Sum: '<S341>/Add1' incorporates:
   *  Constant: '<S341>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Add1 = PubIfDecisionPLAN_MDL_B.Gain1_d + 1.3;

  /* UnitDelay: '<S368>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_p =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_e;

  /* UnitDelay: '<S371>/Delay Input1' */
  PubIfDecisionPLAN_MDL_B.Uk1_c = PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_k;

  /* RelationalOperator: '<S371>/FixPt Relational Operator' */
  PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator = (rtu_TOS_ACCP0->IDP0 !=
    PubIfDecisionPLAN_MDL_B.Uk1_c);

  /* Logic: '<S341>/NOT' */
  PubIfDecisionPLAN_MDL_B.NOT = !PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator;

  /* RelationalOperator: '<S365>/Compare' incorporates:
   *  Constant: '<S365>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_oq = (rtu_TOS_ACCP0->IDP0 != ((uint8_T)0U));

  /* Logic: '<S341>/AND10' */
  PubIfDecisionPLAN_MDL_B.AND10 = (PubIfDecisionPLAN_MDL_B.NOT &&
    PubIfDecisionPLAN_MDL_B.Compare_oq);

  /* Switch: '<S368>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND10) {
    /* Switch: '<S368>/Switch' incorporates:
     *  Constant: '<S368>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_ku = ((uint16_T)1U);
  } else {
    /* Switch: '<S368>/Switch' incorporates:
     *  Constant: '<S368>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_ku = ((uint16_T)0U);
  }

  /* End of Switch: '<S368>/Switch' */

  /* Sum: '<S368>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_m = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_p + PubIfDecisionPLAN_MDL_B.Switch_ku);

  /* Switch: '<S368>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.AND10) {
    /* Switch: '<S368>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_m = PubIfDecisionPLAN_MDL_B.Sum_m;
  } else {
    /* Switch: '<S368>/Switch1' incorporates:
     *  Constant: '<S368>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_m = ((uint16_T)0U);
  }

  /* End of Switch: '<S368>/Switch1' */

  /* Saturate: '<S368>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_m;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S368>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_k = u0;
  } else {
    /* Saturate: '<S368>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_k = u1;
  }

  /* End of Saturate: '<S368>/Saturation1' */

  /* RelationalOperator: '<S361>/Compare' incorporates:
   *  Constant: '<S361>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_er = (PubIfDecisionPLAN_MDL_B.Saturation1_k >
    ((uint16_T)100U));

  /* Switch: '<S341>/Switch2' */
  if (PubIfDecisionPLAN_MDL_B.Compare_er) {
    /* Switch: '<S341>/Switch2' */
    PubIfDecisionPLAN_MDL_B.Switch2_f = PubIfDecisionPLAN_MDL_B.Add1;
  } else {
    /* Switch: '<S341>/Switch2' incorporates:
     *  Constant: '<S341>/Constant2'
     */
    PubIfDecisionPLAN_MDL_B.Switch2_f = 255.0;
  }

  /* End of Switch: '<S341>/Switch2' */

  /* MinMax: '<S341>/Min3' */
  absx = fmin(PubIfDecisionPLAN_MDL_B.Switch2_f,
              rtu_VSM_LON_CTRL->ACC_SpdSetValueKmh);

  /* MinMax: '<S341>/Min3' */
  PubIfDecisionPLAN_MDL_B.Min3 = absx;

  /* Sum: '<S341>/Subtract' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_CruiseSpdGainLe = PubIfDecisionPLAN_MDL_B.Min
    - PubIfDecisionPLAN_MDL_B.Min3;

  /* Switch: '<S339>/Switch5' */
  if (PubIfDecisionPLAN_MDL_B.Compare_do) {
    /* Switch: '<S339>/Switch5' incorporates:
     *  Constant: '<S339>/P0DeltaSpd_kph2'
     */
    PubIfDecisionPLAN_MDL_B.Switch5_a = rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv3;
  } else {
    /* Switch: '<S339>/Switch5' incorporates:
     *  Constant: '<S339>/P0DeltaSpd_kph1'
     */
    PubIfDecisionPLAN_MDL_B.Switch5_a = rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv2;
  }

  /* End of Switch: '<S339>/Switch5' */

  /* Switch: '<S339>/Switch4' */
  if (PubIfDecisionPLAN_MDL_B.Compare_pa) {
    /* Switch: '<S339>/Switch4' incorporates:
     *  Constant: '<S339>/P0DeltaSpd_kph1'
     */
    PubIfDecisionPLAN_MDL_B.Switch4 = rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv2;
  } else {
    /* Switch: '<S339>/Switch4' */
    PubIfDecisionPLAN_MDL_B.Switch4 = PubIfDecisionPLAN_MDL_B.Switch5_a;
  }

  /* End of Switch: '<S339>/Switch4' */

  /* Switch: '<S339>/Switch3' */
  if (PubIfDecisionPLAN_MDL_B.Compare_pi) {
    /* Switch: '<S339>/Switch3' incorporates:
     *  Constant: '<S339>/P0DeltaSpd_kph'
     */
    PubIfDecisionPLAN_MDL_B.Switch3 = rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv1;
  } else {
    /* Switch: '<S339>/Switch3' */
    PubIfDecisionPLAN_MDL_B.Switch3 = PubIfDecisionPLAN_MDL_B.Switch4;
  }

  /* End of Switch: '<S339>/Switch3' */

  /* RelationalOperator: '<S341>/Relational Operator' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator_aq =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_CruiseSpdGainLe >=
     PubIfDecisionPLAN_MDL_B.Switch3);

  /* Switch: '<S369>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator_aq) {
    /* Switch: '<S369>/Switch' incorporates:
     *  Constant: '<S369>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_j = ((uint16_T)1U);
  } else {
    /* Switch: '<S369>/Switch' incorporates:
     *  Constant: '<S369>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_j = ((uint16_T)0U);
  }

  /* End of Switch: '<S369>/Switch' */

  /* Sum: '<S369>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_n = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_c0 + PubIfDecisionPLAN_MDL_B.Switch_j);

  /* Switch: '<S369>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator_aq) {
    /* Switch: '<S369>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_i = PubIfDecisionPLAN_MDL_B.Sum_n;
  } else {
    /* Switch: '<S369>/Switch1' incorporates:
     *  Constant: '<S369>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_i = ((uint16_T)0U);
  }

  /* End of Switch: '<S369>/Switch1' */

  /* Saturate: '<S369>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_i;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S369>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_b = u0;
  } else {
    /* Saturate: '<S369>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_b = u1;
  }

  /* End of Saturate: '<S369>/Saturation1' */

  /* RelationalOperator: '<S363>/Compare' incorporates:
   *  Constant: '<S363>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_nh = (PubIfDecisionPLAN_MDL_B.Saturation1_b >
    ((uint16_T)25U));

  /* Logic: '<S341>/AND' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_OverTkTrigger =
    (PubIfDecisionPLAN_MDL_B.Compare_bz && PubIfDecisionPLAN_MDL_B.Compare_nh);

  /* Gain: '<S188>/Gain' */
  PubIfDecisionPLAN_MDL_B.Gain_o = 0.277777791F * rtu_PLAN_VCAN_ESP->VehSpd;

  /* Product: '<S188>/Product' incorporates:
   *  Constant: '<S188>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_e = PubIfDecisionPLAN_MDL_B.Gain_o *
    rtP_P_PLAN_ALC_PreCurvaturePreTime;

  /* MATLAB Function: '<S188>/MATLAB Function' */
  t = 2.0F * rtu_LSM_HWA->HWALineC2 * (real32_T)
    PubIfDecisionPLAN_MDL_B.Product_e + rtu_LSM_HWA->HWALineC1;
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_PreCurvature = 2.0F * fabsf
    (rtu_LSM_HWA->HWALineC2) / rt_powf_snf(t * t + 1.0F, 1.5F);

  /* Product: '<S188>/Product1' incorporates:
   *  Constant: '<S188>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.Product1 =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_PreCurvature *
    rtP_P_PLAN_ALC_PreCurvatureFactor;

  /* Saturate: '<S188>/Saturation' */
  temp = rtu_PLAN_VCAN_ESP->VehSpd;
  if (temp > 140.0F) {
    /* Saturate: '<S188>/Saturation' */
    PubIfDecisionPLAN_MDL_B.Saturation = 140.0F;
  } else if (temp < 10.0F) {
    /* Saturate: '<S188>/Saturation' */
    PubIfDecisionPLAN_MDL_B.Saturation = 10.0F;
  } else {
    /* Saturate: '<S188>/Saturation' */
    PubIfDecisionPLAN_MDL_B.Saturation = temp;
  }

  /* End of Saturate: '<S188>/Saturation' */

  /* Lookup_n-D: '<S188>/1-D Lookup Table' incorporates:
   *  Saturate: '<S188>/Saturation'
   */
  bpIdx = plook_u32ff_evenca(PubIfDecisionPLAN_MDL_B.Saturation,
    rtP_P_PLAN_ALC_LcCurvatureInhibitionValueBrkPoints[0],
    rtP_P_PLAN_ALC_LcCurvatureInhibitionValueBrkPoints[1] -
    rtP_P_PLAN_ALC_LcCurvatureInhibitionValueBrkPoints[0], 13U, &temp);

  /* Lookup_n-D: '<S188>/1-D Lookup Table' */
  PubIfDecisionPLAN_MDL_B.uDLookupTable = intrp1d_fu32fga_pw(bpIdx, temp,
    rtP_P_PLAN_ALC_LcCurvatureInhibitionValueTable, 13U);

  /* RelationalOperator: '<S188>/Relational Operator2' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator2 =
    (PubIfDecisionPLAN_MDL_B.Product1 <= PubIfDecisionPLAN_MDL_B.uDLookupTable);

  /* RelationalOperator: '<S333>/Compare' incorporates:
   *  Constant: '<S333>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_LineCurvatureValid =
    (PubIfDecisionPLAN_MDL_B.RelationalOperator2 != false);

  /* Logic: '<S188>/AND3' */
  tmpForInput_1[0] = PLAN_ALC_LcOverTkLe_ALCSwtOn;
  tmpForInput_1[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_LaneAvailable;
  tmpForInput_1[2] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_PilotLaneAvailable;
  tmpForInput_1[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_NoTurnLampReq;
  tmpForInput_1[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_NoLcFinishFlag;
  tmpForInput_1[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_dyDiff;
  tmpForInput_1[6] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_IPVehSpd;
  tmpForInput_1[7] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_DPC;
  tmpForInput_1[8] = PubIfDecisionPLAN_MDL_B.NOT6;
  tmpForInput_1[9] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_LineValid;
  tmpForInput_1[10] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_NotInDrvCancelArea;
  tmpForInput_1[11] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_P0NotCutOut;
  tmpForInput_1[12] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_OverTkTrigger;
  tmpForInput_1[13] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_LineCurvatureValid;
  tmpForInput_1[14] = rtu_LSM_HWA->LeLineLcAvailable;
  tmpForInput_idx_0 = tmpForInput_1[0];
  for (JminIni = 0; JminIni < 14; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput_1[JminIni + 1]);
  }

  /* Logic: '<S188>/AND3' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe = tmpForInput_idx_0;

  /* RelationalOperator: '<S327>/Compare' incorporates:
   *  Constant: '<S327>/Constant'
   */
  PLAN_ALC_LcOverTkRi_ALCSwtOn = (rtu_VSM_UOM_LC->User_LC_ALCswt != ((uint8_T)0U));

  /* RelationalOperator: '<S312>/Compare' incorporates:
   *  Constant: '<S312>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_LaneAvailable =
    (rtu_LSM_HWA->MLeLane != false);

  /* RelationalOperator: '<S313>/Compare' incorporates:
   *  Constant: '<S313>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ek = (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts
    == ((uint8_T)0U));

  /* RelationalOperator: '<S309>/Compare' incorporates:
   *  Constant: '<S309>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_nu = (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts
    == ((uint8_T)6U));

  /* Logic: '<S188>/OR3' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_PilotLaneAvailable =
    (PubIfDecisionPLAN_MDL_B.Compare_ek || PubIfDecisionPLAN_MDL_B.Compare_nu);

  /* Logic: '<S188>/AND6' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_NoTurnLampReq =
    PubIfDecisionPLAN_MDL_B.NOT2_e;

  /* Logic: '<S188>/OR1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_NoLcFinishFlag =
    ((!PubIfDecisionPLAN_MDL_B.Compare_iw) &&
     (!PubIfDecisionPLAN_MDL_B.Compare_bm));

  /* Abs: '<S188>/Abs4' */
  PubIfDecisionPLAN_MDL_B.Abs4_p = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S310>/Compare' incorporates:
   *  Constant: '<S310>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_dyDiff =
    (PubIfDecisionPLAN_MDL_B.Abs4_p < 0.4F);

  /* RelationalOperator: '<S324>/Compare' incorporates:
   *  Constant: '<S324>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_jz = (rtu_PLAN_VCAN_ESP->VehSpd <= 120.0F);

  /* RelationalOperator: '<S307>/Compare' incorporates:
   *  Constant: '<S307>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bl = (rtu_PLAN_VCAN_ESP->VehSpd >=
    rtP_P_PLAN_ALC_vMinPreLC_OverTk);

  /* Logic: '<S188>/AND' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_IPVehSpd =
    (PubIfDecisionPLAN_MDL_B.Compare_jz && PubIfDecisionPLAN_MDL_B.Compare_bl);

  /* UnitDelay: '<S335>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_ok =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_f;

  /* RelationalOperator: '<S188>/Relational Operator4' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator4_e =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R <=
     PubIfDecisionPLAN_MDL_B.Switch1);

  /* Switch: '<S335>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator4_e) {
    /* Switch: '<S335>/Switch' incorporates:
     *  Constant: '<S335>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_o = ((uint16_T)1U);
  } else {
    /* Switch: '<S335>/Switch' incorporates:
     *  Constant: '<S335>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_o = ((uint16_T)0U);
  }

  /* End of Switch: '<S335>/Switch' */

  /* Sum: '<S335>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_n2 = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_ok + PubIfDecisionPLAN_MDL_B.Switch_o);

  /* Switch: '<S335>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator4_e) {
    /* Switch: '<S335>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_fn = PubIfDecisionPLAN_MDL_B.Sum_n2;
  } else {
    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S335>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_fn = ((uint16_T)0U);
  }

  /* End of Switch: '<S335>/Switch1' */

  /* Saturate: '<S335>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_fn;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S335>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_l = u0;
  } else {
    /* Saturate: '<S335>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_l = u1;
  }

  /* End of Saturate: '<S335>/Saturation1' */

  /* Constant: '<S322>/Constant' */
  PubIfDecisionPLAN_MDL_B.Constant_f =
    rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntOverTk;

  /* RelationalOperator: '<S322>/Compare' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_DPC =
    (PubIfDecisionPLAN_MDL_B.Saturation1_l > PubIfDecisionPLAN_MDL_B.Constant_f);

  /* UnitDelay: '<S343>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_o =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_m;

  /* RelationalOperator: '<S332>/Compare' incorporates:
   *  Constant: '<S332>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mr = (rtu_LSM_HWA->HWARiLineValid != false);

  /* UnitDelay: '<S343>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_dj =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_f;

  /* If: '<S343>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_o && PubIfDecisionPLAN_MDL_B.Compare_mr)
  {
    /* Outputs for IfAction SubSystem: '<S343>/If Action Subsystem' incorporates:
     *  ActionPort: '<S377>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem
      (PubIfDecisionPLAN_MDL_B.UnitDelay1_dj, &PubIfDecisionPLAN_MDL_B.Merge_n,
       &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_g);

    /* End of Outputs for SubSystem: '<S343>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S343>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S378>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_n);

    /* End of Outputs for SubSystem: '<S343>/If Action Subsystem1' */
  }

  /* End of If: '<S343>/If' */

  /* Product: '<S343>/Product' incorporates:
   *  Constant: '<S343>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_m = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_n *
    0.02F;

  /* RelationalOperator: '<S323>/Compare' incorporates:
   *  Constant: '<S323>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_LineValid =
    (PubIfDecisionPLAN_MDL_B.Product_m > 0.1F);

  /* Logic: '<S188>/NOT1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_NotInDrvCancelArea =
    !PubIfDecisionPLAN_MDL_B.Sts;

  /* Logic: '<S188>/NOT5' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_P0NotCutOut =
    ((!PubIfDecisionPLAN_MDL_B.OR3) && (!PubIfDecisionPLAN_MDL_B.OR2_b));

  /* UnitDelay: '<S370>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_kx =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_eg;

  /* Chart: '<S341>/SigHold1' */
  PubIfDecisionPLAN_MDL_SigHold1
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjSpeed_R,
     PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_NearestObjValid_R,
     &PubIfDecisionPLAN_MDL_B.sf_SigHold1, &PubIfDecisionPLAN_MDL_DW.sf_SigHold1);

  /* Gain: '<S341>/Gain6' */
  PubIfDecisionPLAN_MDL_B.Gain6_p = 3.6F *
    PubIfDecisionPLAN_MDL_B.sf_SigHold1.outData;

  /* Gain: '<S341>/Gain7' */
  PubIfDecisionPLAN_MDL_B.Gain7_e = 1.03F * PubIfDecisionPLAN_MDL_B.Gain6_p;

  /* Sum: '<S341>/Add6' incorporates:
   *  Constant: '<S341>/Constant10'
   */
  PubIfDecisionPLAN_MDL_B.Add6 = PubIfDecisionPLAN_MDL_B.Gain7_e + 1.3;

  /* Switch: '<S341>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.sf_SigHold1.outTrigger) {
    /* Switch: '<S341>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_d = PubIfDecisionPLAN_MDL_B.Add6;
  } else {
    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S341>/Constant11'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_d = 255.0;
  }

  /* End of Switch: '<S341>/Switch1' */

  /* MinMax: '<S341>/Min1' */
  absx = fmin(PubIfDecisionPLAN_MDL_B.Switch1_d,
              rtu_VSM_LON_CTRL->ACC_SpdSetValueKmh);

  /* MinMax: '<S341>/Min1' */
  PubIfDecisionPLAN_MDL_B.Min1 = absx;

  /* Sum: '<S341>/Subtract1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_CruiseSpdGainRi =
    PubIfDecisionPLAN_MDL_B.Min1 - PubIfDecisionPLAN_MDL_B.Min3;

  /* RelationalOperator: '<S341>/Relational Operator1' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator1_l =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_CruiseSpdGainRi >=
     PubIfDecisionPLAN_MDL_B.Switch3);

  /* Switch: '<S370>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator1_l) {
    /* Switch: '<S370>/Switch' incorporates:
     *  Constant: '<S370>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_b1 = ((uint16_T)1U);
  } else {
    /* Switch: '<S370>/Switch' incorporates:
     *  Constant: '<S370>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_b1 = ((uint16_T)0U);
  }

  /* End of Switch: '<S370>/Switch' */

  /* Sum: '<S370>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_e = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_kx + PubIfDecisionPLAN_MDL_B.Switch_b1);

  /* Switch: '<S370>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.RelationalOperator1_l) {
    /* Switch: '<S370>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_jf = PubIfDecisionPLAN_MDL_B.Sum_e;
  } else {
    /* Switch: '<S370>/Switch1' incorporates:
     *  Constant: '<S370>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_jf = ((uint16_T)0U);
  }

  /* End of Switch: '<S370>/Switch1' */

  /* Saturate: '<S370>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_jf;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S370>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_e = u0;
  } else {
    /* Saturate: '<S370>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_e = u1;
  }

  /* End of Saturate: '<S370>/Saturation1' */

  /* RelationalOperator: '<S364>/Compare' incorporates:
   *  Constant: '<S364>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ns = (PubIfDecisionPLAN_MDL_B.Saturation1_e >
    ((uint16_T)25U));

  /* Logic: '<S341>/AND1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_OverTkTrigger =
    (PubIfDecisionPLAN_MDL_B.Compare_bz && PubIfDecisionPLAN_MDL_B.Compare_ns);

  /* RelationalOperator: '<S331>/Compare' incorporates:
   *  Constant: '<S331>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_LineCurvatureValid =
    (PubIfDecisionPLAN_MDL_B.RelationalOperator2 != false);

  /* Logic: '<S188>/AND4' */
  tmpForInput_1[0] = PLAN_ALC_LcOverTkRi_ALCSwtOn;
  tmpForInput_1[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_LaneAvailable;
  tmpForInput_1[2] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_PilotLaneAvailable;
  tmpForInput_1[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_NoTurnLampReq;
  tmpForInput_1[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_NoLcFinishFlag;
  tmpForInput_1[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_dyDiff;
  tmpForInput_1[6] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_IPVehSpd;
  tmpForInput_1[7] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_DPC;
  tmpForInput_1[8] = PubIfDecisionPLAN_MDL_B.NOT6;
  tmpForInput_1[9] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_LineValid;
  tmpForInput_1[10] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_NotInDrvCancelArea;
  tmpForInput_1[11] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_P0NotCutOut;
  tmpForInput_1[12] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_OverTkTrigger;
  tmpForInput_1[13] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_LineCurvatureValid;
  tmpForInput_1[14] = rtu_LSM_HWA->RiLineLcAvailable;
  tmpForInput_idx_0 = tmpForInput_1[0];
  for (JminIni = 0; JminIni < 14; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput_1[JminIni + 1]);
  }

  /* Logic: '<S188>/AND4' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi = tmpForInput_idx_0;

  /* Gain: '<S225>/Gain1' incorporates:
   *  Constant: '<S225>/Constant11'
   */
  PubIfDecisionPLAN_MDL_B.Gain1_j = 0.5F * P_Global_WheelTrack_m;

  /* UnitDelay: '<S226>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_m =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_d;

  /* MATLAB Function: '<S226>/MATLAB Function2' incorporates:
   *  Constant: '<S226>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.result_d = (rtu_PLAN_VCAN_ESP->VehSpd -
    PubIfDecisionPLAN_MDL_B.UnitDelay2_m) * (real32_T)0.1 +
    PubIfDecisionPLAN_MDL_B.UnitDelay2_m;

  /* Gain: '<S225>/Gain5' */
  PubIfDecisionPLAN_MDL_B.Gain5_f = 0.277777791F *
    PubIfDecisionPLAN_MDL_B.result_d;

  /* FunctionCaller: '<S225>/Function Caller' incorporates:
   *  Constant: '<S225>/Constant10'
   *  Constant: '<S225>/Constant12'
   */
  PubIfDecisionPLAN_MDL_PointPre(P_Global_WheelBase_m,
    PubIfDecisionPLAN_MDL_B.Gain1_j, *rtu_kapTraj,
    PubIfDecisionPLAN_MDL_B.Gain5_f, rtP_P_PLAN_ALC_FWheelPreTime,
    &PubIfDecisionPLAN_MDL_B.PLAN_PreWheelFLx,
    &PubIfDecisionPLAN_MDL_B.PLAN_PreWheelFLy);

  /* FunctionCaller: '<S225>/Function Caller2' */
  PubIfDecisionPLAN_MDL_FrenetCS(rtu_LSM_HWA->HWALineC0, rtu_LSM_HWA->HWALineC1,
    rtu_LSM_HWA->HWALineC2, PubIfDecisionPLAN_MDL_B.PLAN_PreWheelFLx,
    PubIfDecisionPLAN_MDL_B.PLAN_PreWheelFLy,
    &PubIfDecisionPLAN_MDL_B.FunctionCaller2);

  /* Abs: '<S225>/Abs2' */
  PubIfDecisionPLAN_MDL_B.Abs2_k = fabsf(PubIfDecisionPLAN_MDL_B.FunctionCaller2);

  /* Sum: '<S225>/Add1' incorporates:
   *  Constant: '<S225>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.Add1_g = rtP_P_PLAN_ALC_LcCancelRoadWidthOffset +
    rtu_LSM_HWA->RoadWidth;

  /* Gain: '<S225>/Gain3' */
  PubIfDecisionPLAN_MDL_B.Gain3_o = 0.5F * PubIfDecisionPLAN_MDL_B.Add1_g;

  /* RelationalOperator: '<S225>/Relational Operator2' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator2_i =
    (PubIfDecisionPLAN_MDL_B.Abs2_k > PubIfDecisionPLAN_MDL_B.Gain3_o);

  /* Gain: '<S225>/Gain2' incorporates:
   *  Constant: '<S225>/Constant11'
   */
  PubIfDecisionPLAN_MDL_B.Gain2_a = (-0.5F) * P_Global_WheelTrack_m;

  /* FunctionCaller: '<S225>/Function Caller3' incorporates:
   *  Constant: '<S225>/Constant10'
   *  Constant: '<S225>/Constant12'
   */
  PubIfDecisionPLAN_MDL_PointPre(P_Global_WheelBase_m,
    PubIfDecisionPLAN_MDL_B.Gain2_a, *rtu_kapTraj,
    PubIfDecisionPLAN_MDL_B.Gain5_f, rtP_P_PLAN_ALC_FWheelPreTime,
    &PubIfDecisionPLAN_MDL_B.PLAN_PreWheelFRx,
    &PubIfDecisionPLAN_MDL_B.PLAN_PreWheelFRy);

  /* FunctionCaller: '<S225>/Function Caller1' */
  PubIfDecisionPLAN_MDL_FrenetCS(rtu_LSM_HWA->HWALineC0, rtu_LSM_HWA->HWALineC1,
    rtu_LSM_HWA->HWALineC2, PubIfDecisionPLAN_MDL_B.PLAN_PreWheelFRx,
    PubIfDecisionPLAN_MDL_B.PLAN_PreWheelFRy,
    &PubIfDecisionPLAN_MDL_B.FunctionCaller1);

  /* Abs: '<S225>/Abs3' */
  PubIfDecisionPLAN_MDL_B.Abs3 = fabsf(PubIfDecisionPLAN_MDL_B.FunctionCaller1);

  /* RelationalOperator: '<S225>/Relational Operator3' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator3_j = (PubIfDecisionPLAN_MDL_B.Abs3 >
    PubIfDecisionPLAN_MDL_B.Gain3_o);

  /* Logic: '<S225>/AND' */
  PubIfDecisionPLAN_MDL_B.OutTarPath =
    (PubIfDecisionPLAN_MDL_B.RelationalOperator2_i &&
     PubIfDecisionPLAN_MDL_B.RelationalOperator3_j);

  /* RelationalOperator: '<S222>/Compare' incorporates:
   *  Constant: '<S222>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_n1 = (rtu_VSM_UOM_LC->User_RiTurnLmpOn !=
    false);

  /* Logic: '<S184>/AND9' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_DrvCmpl =
    (PubIfDecisionPLAN_MDL_B.OutTarPath && PubIfDecisionPLAN_MDL_B.Compare_n1);

  /* UnitDelay: '<S224>/Delay Input1' */
  PubIfDecisionPLAN_MDL_B.Uk1_ch =
    PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_kn;

  /* RelationalOperator: '<S224>/FixPt Relational Operator' */
  PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator_c = ((int32_T)
    rtu_VSM_UOM_LC->User_LeTurnLmpOn < (int32_T)PubIfDecisionPLAN_MDL_B.Uk1_ch);

  /* Logic: '<S184>/AND10' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_Drv =
    (PubIfDecisionPLAN_MDL_B.OutTarPath &&
     PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator_c);

  /* Sum: '<S225>/Add' incorporates:
   *  Constant: '<S225>/Constant'
   *  Constant: '<S225>/Constant2'
   */
  PubIfDecisionPLAN_MDL_B.Add_j = (rtP_P_PLAN_ALC_LcCancelRoadWidthOffsetForDPC
    + rtP_P_PLAN_ALC_LcCancelRoadWidthOffset) + rtu_LSM_HWA->RoadWidth;

  /* Gain: '<S225>/Gain8' */
  PubIfDecisionPLAN_MDL_B.Gain8_b = 0.5F * PubIfDecisionPLAN_MDL_B.Add_j;

  /* RelationalOperator: '<S225>/Relational Operator' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator_cn =
    (PubIfDecisionPLAN_MDL_B.Abs2_k > PubIfDecisionPLAN_MDL_B.Gain8_b);

  /* RelationalOperator: '<S225>/Relational Operator1' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator1_lf = (PubIfDecisionPLAN_MDL_B.Abs3
    > PubIfDecisionPLAN_MDL_B.Gain8_b);

  /* Logic: '<S225>/AND1' */
  PubIfDecisionPLAN_MDL_B.OutTarPath_m =
    (PubIfDecisionPLAN_MDL_B.RelationalOperator_cn &&
     PubIfDecisionPLAN_MDL_B.RelationalOperator1_lf);

  /* RelationalOperator: '<S213>/Compare' incorporates:
   *  Constant: '<S213>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ga =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R <
     rtP_P_PLAN_ALC_LcOverTkDPCthreshold);

  /* RelationalOperator: '<S214>/Compare' incorporates:
   *  Constant: '<S214>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_c =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L >
     rtP_P_PLAN_ALC_LcCancelDPCThreshold);

  /* Logic: '<S184>/AND' */
  PubIfDecisionPLAN_MDL_B.AND_n = (PubIfDecisionPLAN_MDL_B.Compare_c &&
    rtu_LSM_HWA->HWALeLineValid);

  /* Logic: '<S184>/OR' */
  PubIfDecisionPLAN_MDL_B.OR_h = (PubIfDecisionPLAN_MDL_B.Compare_ga &&
    PubIfDecisionPLAN_MDL_B.AND_n);

  /* Logic: '<S184>/AND20' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_DPC =
    (PubIfDecisionPLAN_MDL_B.OutTarPath_m && PubIfDecisionPLAN_MDL_B.OR_h);

  /* UnitDelay: '<S4>/Unit Delay16' */
  PubIfDecisionPLAN_MDL_B.UnitDelay16 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay16_DSTATE;

  /* Chart: '<S184>/Chart' */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c1_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c1_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c1_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_CC;
    PubIfDecisionPLAN_MDL_B.LeLcFinishValid = false;
    PubIfDecisionPLAN_MDL_B.RiLcFinishValid = false;
    PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = false;
  } else {
    switch (PubIfDecisionPLAN_MDL_DW.is_c1_PubIfDecisionPLAN_MDL) {
     case PubIfDecisionPLAN_MDL_IN_CC:
      if (PubIfDecisionPLAN_MDL_B.UnitDelay16 == 2) {
        PubIfDecisionPLAN_MDL_DW.is_c1_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_LeLc;
        PubIfDecisionPLAN_MDL_DW.is_LeLc = PubIfDecisionPLAN_MDL_IN_LeLc1;
        PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = true;
      } else if (PubIfDecisionPLAN_MDL_B.UnitDelay16 == 3) {
        PubIfDecisionPLAN_MDL_DW.is_c1_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_RiLc;
        PubIfDecisionPLAN_MDL_DW.is_RiLc = PubIfDecisionPLAN_MDL_IN_RiLc1;
        PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = true;
      } else {
        PubIfDecisionPLAN_MDL_B.LeLcFinishValid = false;
        PubIfDecisionPLAN_MDL_B.RiLcFinishValid = false;
        PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = false;
      }
      break;

     case PubIfDecisionPLAN_MDL_IN_LeLc:
      if (PubIfDecisionPLAN_MDL_B.UnitDelay16 != 2) {
        switch (PubIfDecisionPLAN_MDL_DW.is_LeLc) {
         case PubIfDecisionPLAN_MDL_IN_LeLc1:
          PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = false;
          PubIfDecisionPLAN_MDL_DW.is_LeLc = 0;
          break;

         case PubIfDecisionPLAN_MDL_IN_LeLc2:
          PubIfDecisionPLAN_MDL_B.LeLcFinishValid = false;
          PubIfDecisionPLAN_MDL_DW.is_LeLc = 0;
          break;

         default:
          PubIfDecisionPLAN_MDL_DW.is_LeLc = 0;
          break;
        }

        PubIfDecisionPLAN_MDL_DW.is_c1_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_CC;
        PubIfDecisionPLAN_MDL_B.LeLcFinishValid = false;
        PubIfDecisionPLAN_MDL_B.RiLcFinishValid = false;
        PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = false;
      } else if ((PubIfDecisionPLAN_MDL_DW.is_LeLc == 1) &&
                 rtu_LSM_HWA->LeLineCrossing) {
        PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = false;
        PubIfDecisionPLAN_MDL_DW.is_LeLc = PubIfDecisionPLAN_MDL_IN_LeLc2;
        PubIfDecisionPLAN_MDL_B.LeLcFinishValid = true;
      } else {
        /* case IN_LeLc2: */
      }
      break;

     default:
      /* case IN_RiLc: */
      if (PubIfDecisionPLAN_MDL_B.UnitDelay16 != 3) {
        switch (PubIfDecisionPLAN_MDL_DW.is_RiLc) {
         case PubIfDecisionPLAN_MDL_IN_RiLc1:
          PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = false;
          PubIfDecisionPLAN_MDL_DW.is_RiLc = 0;
          break;

         case PubIfDecisionPLAN_MDL_IN_RiLc2:
          PubIfDecisionPLAN_MDL_B.RiLcFinishValid = false;
          PubIfDecisionPLAN_MDL_DW.is_RiLc = 0;
          break;

         default:
          PubIfDecisionPLAN_MDL_DW.is_RiLc = 0;
          break;
        }

        PubIfDecisionPLAN_MDL_DW.is_c1_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_CC;
        PubIfDecisionPLAN_MDL_B.LeLcFinishValid = false;
        PubIfDecisionPLAN_MDL_B.RiLcFinishValid = false;
        PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = false;
      } else if ((PubIfDecisionPLAN_MDL_DW.is_RiLc == 1) &&
                 rtu_LSM_HWA->RiLineCrossing) {
        PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable = false;
        PubIfDecisionPLAN_MDL_DW.is_RiLc = PubIfDecisionPLAN_MDL_IN_RiLc2;
        PubIfDecisionPLAN_MDL_B.RiLcFinishValid = true;
      } else {
        /* case IN_RiLc2: */
      }
      break;
    }
  }

  /* End of Chart: '<S184>/Chart' */

  /* Logic: '<S184>/NOT4' */
  PubIfDecisionPLAN_MDL_B.NOT4_o = !rtu_LSM_HWA->HWALeLineValid;

  /* Logic: '<S184>/AND6' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_LineValid =
    (PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable &&
     PubIfDecisionPLAN_MDL_B.NOT4_o);

  /* Logic: '<S184>/AND4' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_Oncoming =
    (PubIfDecisionPLAN_MDL_B.OutTarPath &&
     PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_OncomingFlag_Le);

  /* RelationalOperator: '<S219>/Compare' incorporates:
   *  Constant: '<S219>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_fh = (PubIfDecisionPLAN_MDL_B.UnitDelay16 ==
    ((uint8_T)1U));

  /* UnitDelay: '<S4>/Unit Delay13' */
  PubIfDecisionPLAN_MDL_B.UnitDelay13_p =
    PubIfDecisionPLAN_MDL_DW.UnitDelay13_DSTATE_e;

  /* RelationalOperator: '<S212>/Compare' incorporates:
   *  Constant: '<S212>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_pjq = (PubIfDecisionPLAN_MDL_B.UnitDelay13_p ==
    ((uint8_T)4U));

  /* UnitDelay: '<S366>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_m =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_k;

  /* RelationalOperator: '<S359>/Compare' incorporates:
   *  Constant: '<S359>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ni =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_CruiseSpdGainLe < (-1.0));

  /* Switch: '<S366>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.Compare_ni) {
    /* Switch: '<S366>/Switch' incorporates:
     *  Constant: '<S366>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_e = ((uint16_T)1U);
  } else {
    /* Switch: '<S366>/Switch' incorporates:
     *  Constant: '<S366>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_e = ((uint16_T)0U);
  }

  /* End of Switch: '<S366>/Switch' */

  /* Sum: '<S366>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_bq = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_m + PubIfDecisionPLAN_MDL_B.Switch_e);

  /* Switch: '<S366>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.Compare_ni) {
    /* Switch: '<S366>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_a = PubIfDecisionPLAN_MDL_B.Sum_bq;
  } else {
    /* Switch: '<S366>/Switch1' incorporates:
     *  Constant: '<S366>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_a = ((uint16_T)0U);
  }

  /* End of Switch: '<S366>/Switch1' */

  /* Saturate: '<S366>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_a;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S366>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_b4 = u0;
  } else {
    /* Saturate: '<S366>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_b4 = u1;
  }

  /* End of Saturate: '<S366>/Saturation1' */

  /* RelationalOperator: '<S357>/Compare' incorporates:
   *  Constant: '<S357>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mre = (PubIfDecisionPLAN_MDL_B.Saturation1_b4 >
    ((uint16_T)50U));

  /* Logic: '<S184>/AND8' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_CancelOverTk =
    (PubIfDecisionPLAN_MDL_B.Compare_fh && PubIfDecisionPLAN_MDL_B.OutTarPath &&
     PubIfDecisionPLAN_MDL_B.Compare_pjq && PubIfDecisionPLAN_MDL_B.Compare_mre);

  /* Logic: '<S184>/NOT2' */
  PubIfDecisionPLAN_MDL_B.NOT2_h = !rtu_LSM_HWA->LeLineLcAvailable;

  /* Logic: '<S184>/AND15' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_LcAvailable =
    (PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable &&
     PubIfDecisionPLAN_MDL_B.OutTarPath && PubIfDecisionPLAN_MDL_B.NOT2_h);

  /* RelationalOperator: '<S211>/Compare' incorporates:
   *  Constant: '<S211>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_gen = (PubIfDecisionPLAN_MDL_B.OutTarPath ==
    false);

  /* UnitDelay: '<S184>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_iz =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g3;

  /* RelationalOperator: '<S210>/Compare' incorporates:
   *  Constant: '<S210>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_l3 = (PubIfDecisionPLAN_MDL_B.UnitDelay_iz ==
    true);

  /* Logic: '<S184>/AND19' incorporates:
   *  Constant: '<S184>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.test = (PubIfDecisionPLAN_MDL_B.Compare_gen &&
    PubIfDecisionPLAN_MDL_B.Compare_l3 && rtP_P_PLAN_LcCancelTestEnable);

  /* Logic: '<S184>/OR1' */
  tmpForInput_0[0] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_DrvCmpl;
  tmpForInput_0[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_Drv;
  tmpForInput_0[2] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_DPC;
  tmpForInput_0[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_LineValid;
  tmpForInput_0[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_Oncoming;
  tmpForInput_0[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_CancelOverTk;
  tmpForInput_0[6] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_LcAvailable;
  tmpForInput_0[7] = PubIfDecisionPLAN_MDL_B.test;
  tmpForInput_idx_0 = tmpForInput_0[0];
  for (JminIni = 0; JminIni < 7; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 || tmpForInput_0[JminIni + 1]);
  }

  /* Logic: '<S184>/OR1' */
  PubIfDecisionPLAN_MDL_B.LcCancelLe = tmpForInput_idx_0;

  /* RelationalOperator: '<S221>/Compare' incorporates:
   *  Constant: '<S221>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_hc = (rtu_VSM_UOM_LC->User_LeTurnLmpOn !=
    false);

  /* Logic: '<S184>/AND1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_DrvCmpl =
    (PubIfDecisionPLAN_MDL_B.OutTarPath && PubIfDecisionPLAN_MDL_B.Compare_hc);

  /* UnitDelay: '<S223>/Delay Input1' */
  PubIfDecisionPLAN_MDL_B.Uk1_n = PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_c;

  /* RelationalOperator: '<S223>/FixPt Relational Operator' */
  PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator_i = ((int32_T)
    rtu_VSM_UOM_LC->User_RiTurnLmpOn < (int32_T)PubIfDecisionPLAN_MDL_B.Uk1_n);

  /* Logic: '<S184>/AND2' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_Drv =
    (PubIfDecisionPLAN_MDL_B.OutTarPath &&
     PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator_i);

  /* RelationalOperator: '<S215>/Compare' incorporates:
   *  Constant: '<S215>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ok =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L <
     rtP_P_PLAN_ALC_LcOverTkDPCthreshold);

  /* RelationalOperator: '<S216>/Compare' incorporates:
   *  Constant: '<S216>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_gn =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R >
     rtP_P_PLAN_ALC_LcCancelDPCThreshold);

  /* Logic: '<S184>/AND12' */
  PubIfDecisionPLAN_MDL_B.AND12 = (PubIfDecisionPLAN_MDL_B.Compare_gn &&
    rtu_LSM_HWA->HWARiLineValid);

  /* Logic: '<S184>/OR3' */
  PubIfDecisionPLAN_MDL_B.OR3_j = (PubIfDecisionPLAN_MDL_B.Compare_ok &&
    PubIfDecisionPLAN_MDL_B.AND12);

  /* Logic: '<S184>/AND3' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_DPC =
    (PubIfDecisionPLAN_MDL_B.OutTarPath_m && PubIfDecisionPLAN_MDL_B.OR3_j);

  /* Logic: '<S184>/NOT1' */
  PubIfDecisionPLAN_MDL_B.NOT1 = !rtu_LSM_HWA->HWARiLineValid;

  /* Logic: '<S184>/AND5' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_LineValid =
    (PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable &&
     PubIfDecisionPLAN_MDL_B.NOT1);

  /* Logic: '<S184>/AND11' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_Oncoming =
    (PubIfDecisionPLAN_MDL_B.OutTarPath &&
     PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_OncomingFlag_Ri);

  /* UnitDelay: '<S367>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_az =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_cu;

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ow =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_CruiseSpdGainRi < (-1.0));

  /* Switch: '<S367>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.Compare_ow) {
    /* Switch: '<S367>/Switch' incorporates:
     *  Constant: '<S367>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_m0 = ((uint16_T)1U);
  } else {
    /* Switch: '<S367>/Switch' incorporates:
     *  Constant: '<S367>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_m0 = ((uint16_T)0U);
  }

  /* End of Switch: '<S367>/Switch' */

  /* Sum: '<S367>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_bv = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_az + PubIfDecisionPLAN_MDL_B.Switch_m0);

  /* Switch: '<S367>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.Compare_ow) {
    /* Switch: '<S367>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_k = PubIfDecisionPLAN_MDL_B.Sum_bv;
  } else {
    /* Switch: '<S367>/Switch1' incorporates:
     *  Constant: '<S367>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_k = ((uint16_T)0U);
  }

  /* End of Switch: '<S367>/Switch1' */

  /* Saturate: '<S367>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_k;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S367>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_g = u0;
  } else {
    /* Saturate: '<S367>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_g = u1;
  }

  /* End of Saturate: '<S367>/Saturation1' */

  /* RelationalOperator: '<S358>/Compare' incorporates:
   *  Constant: '<S358>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_gr = (PubIfDecisionPLAN_MDL_B.Saturation1_g >
    ((uint16_T)50U));

  /* RelationalOperator: '<S220>/Compare' incorporates:
   *  Constant: '<S220>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ew = (PubIfDecisionPLAN_MDL_B.UnitDelay16 ==
    ((uint8_T)1U));

  /* Logic: '<S184>/AND7' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_CancelOverTk =
    (PubIfDecisionPLAN_MDL_B.OutTarPath && PubIfDecisionPLAN_MDL_B.Compare_pjq &&
     PubIfDecisionPLAN_MDL_B.Compare_gr && PubIfDecisionPLAN_MDL_B.Compare_ew);

  /* Logic: '<S184>/NOT3' */
  PubIfDecisionPLAN_MDL_B.NOT3_e = !rtu_LSM_HWA->RiLineLcAvailable;

  /* Logic: '<S184>/AND17' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_LcAvailable =
    (PubIfDecisionPLAN_MDL_B.LaneInvalidCancelEnable &&
     PubIfDecisionPLAN_MDL_B.OutTarPath && PubIfDecisionPLAN_MDL_B.NOT3_e);

  /* RelationalOperator: '<S218>/Compare' incorporates:
   *  Constant: '<S218>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_kh = (PubIfDecisionPLAN_MDL_B.OutTarPath ==
    false);

  /* UnitDelay: '<S184>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_n =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_dv;

  /* RelationalOperator: '<S217>/Compare' incorporates:
   *  Constant: '<S217>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_dm = (PubIfDecisionPLAN_MDL_B.UnitDelay1_n ==
    true);

  /* Logic: '<S184>/AND21' incorporates:
   *  Constant: '<S184>/Constant2'
   */
  PubIfDecisionPLAN_MDL_B.test_b = (PubIfDecisionPLAN_MDL_B.Compare_kh &&
    PubIfDecisionPLAN_MDL_B.Compare_dm && rtP_P_PLAN_LcCancelTestEnable);

  /* Logic: '<S184>/OR2' */
  tmpForInput_0[0] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_DrvCmpl;
  tmpForInput_0[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_Drv;
  tmpForInput_0[2] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_DPC;
  tmpForInput_0[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_LineValid;
  tmpForInput_0[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_Oncoming;
  tmpForInput_0[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_CancelOverTk;
  tmpForInput_0[6] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_LcAvailable;
  tmpForInput_0[7] = PubIfDecisionPLAN_MDL_B.test_b;
  tmpForInput_idx_0 = tmpForInput_0[0];
  for (JminIni = 0; JminIni < 7; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 || tmpForInput_0[JminIni + 1]);
  }

  /* Logic: '<S184>/OR2' */
  PubIfDecisionPLAN_MDL_B.LcCancelRi = tmpForInput_idx_0;

  /* Abs: '<S184>/Abs2' */
  PubIfDecisionPLAN_MDL_B.Abs2_e = fabsf(rtu_LSM_HWA->HWALineC0);

  /* S-Function (sfix_udelay): '<S184>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_B.TappedDelay1[0] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[0];
  PubIfDecisionPLAN_MDL_B.TappedDelay1[1] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[1];
  PubIfDecisionPLAN_MDL_B.TappedDelay1[2] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[2];
  PubIfDecisionPLAN_MDL_B.TappedDelay1[3] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[3];
  PubIfDecisionPLAN_MDL_B.TappedDelay1[4] = PubIfDecisionPLAN_MDL_B.Abs2_e;

  /* Lookup_n-D: '<S184>/1-D Lookup Table1' */
  PubIfDecisionPLAN_MDL_B.uDLookupTable1 = look1_iflf_binlcapw
    (rtu_PLAN_VCAN_ESP->VehSpd, rtP_P_PLAN_ALC_LcFinishDyDiffBrkPoint,
     rtP_P_PLAN_ALC_LcFinishDyDiffTableValue, 3U);
  for (i_2 = 0; i_2 < 5; i_2++) {
    /* RelationalOperator: '<S184>/Relational Operator1' */
    PubIfDecisionPLAN_MDL_B.RelationalOperator1_p[i_2] =
      (PubIfDecisionPLAN_MDL_B.TappedDelay1[i_2] <=
       PubIfDecisionPLAN_MDL_B.uDLookupTable1);
  }

  /* Logic: '<S184>/Logical Operator1' */
  tmpForInput_idx_0 = PubIfDecisionPLAN_MDL_B.RelationalOperator1_p[0];
  tmpForInput_idx_0 = (tmpForInput_idx_0 &&
                       PubIfDecisionPLAN_MDL_B.RelationalOperator1_p[1]);
  tmpForInput_idx_0 = (tmpForInput_idx_0 &&
                       PubIfDecisionPLAN_MDL_B.RelationalOperator1_p[2]);
  tmpForInput_idx_0 = (tmpForInput_idx_0 &&
                       PubIfDecisionPLAN_MDL_B.RelationalOperator1_p[3]);
  tmpForInput_idx_0 = (tmpForInput_idx_0 &&
                       PubIfDecisionPLAN_MDL_B.RelationalOperator1_p[4]);

  /* Logic: '<S184>/Logical Operator1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcFinish = tmpForInput_idx_0;

  /* Logic: '<S184>/AND13' */
  PubIfDecisionPLAN_MDL_B.LcFinishLe =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcFinish &&
     PubIfDecisionPLAN_MDL_B.LeLcFinishValid);

  /* Logic: '<S184>/AND14' */
  PubIfDecisionPLAN_MDL_B.LcFinishRi =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcFinish &&
     PubIfDecisionPLAN_MDL_B.RiLcFinishValid);

  /* Chart: '<S4>/ALC_DECS' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant1'
   */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c115_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c115_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c115_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_ALC_OFF;
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts = 0U;
    PubIfDecisionPLAN_MDL_B.LcFinishCntLe = 0U;
    PubIfDecisionPLAN_MDL_B.LcFinishCntRi = 0U;
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 0U;
    PubIfDecisionPLAN_MDL_B.LcCntLe = 0U;
    PubIfDecisionPLAN_MDL_B.LcCntRi = 0U;
    PubIfDecisionPLAN_MDL_B.ALC_LampReq = 0U;
    PubIfDecisionPLAN_MDL_B.LcDelayCnt = 0U;
  } else if (PubIfDecisionPLAN_MDL_DW.is_c115_PubIfDecisionPLAN_MDL == 1) {
    if (PubIfDecisionPLAN_MDL_B.OR2) {
      PubIfDecisionPLAN_MDL_B.LcFinishCntRi = 0U;
      PubIfDecisionPLAN_MDL_B.LcFinishCntLe = 0U;
      PubIfDecisionPLAN_MDL_DW.is_c115_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_ALC_ON;
      PubIfDecisionPLAN_MDL_DW.is_ALC_ON = PubIfDecisionPLAN_MDL_IN_WaitLC;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts = 1U;
      PubIfDecisionPLAN_MDL_B.ALC_LampReq = 0U;
    } else {
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts = 0U;
      PubIfDecisionPLAN_MDL_B.LcFinishCntLe = 0U;
      PubIfDecisionPLAN_MDL_B.LcFinishCntRi = 0U;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 0U;
      PubIfDecisionPLAN_MDL_B.LcCntLe = 0U;
      PubIfDecisionPLAN_MDL_B.LcCntRi = 0U;
      PubIfDecisionPLAN_MDL_B.ALC_LampReq = 0U;
      PubIfDecisionPLAN_MDL_B.LcDelayCnt = 0U;
    }
  } else {
    /* case IN_ALC_ON: */
    if (!PubIfDecisionPLAN_MDL_B.OR2) {
      switch (PubIfDecisionPLAN_MDL_DW.is_ALC_ON) {
       case PubIfDecisionPLAN_MDL_IN_LeLC:
        PubIfDecisionPLAN_MDL_B.LcCntLe = 0U;
        PubIfDecisionPLAN_MDL_B.LcDelayCnt = 0U;
        PubIfDecisionPLAN_MDL_DW.is_ALC_ON = 0;
        break;

       case PubIfDecisionPLAN_MDL_IN_RiLC:
        PubIfDecisionPLAN_MDL_B.LcCntRi = 0U;
        PubIfDecisionPLAN_MDL_B.LcDelayCnt = 0U;
        PubIfDecisionPLAN_MDL_DW.is_ALC_ON = 0;
        break;

       case PubIfDecisionPLAN_MDL_IN_WaitLC:
        PubIfDecisionPLAN_MDL_B.LcFinishCntLe = 0U;
        PubIfDecisionPLAN_MDL_B.LcFinishCntRi = 0U;
        PubIfDecisionPLAN_MDL_B.LcCancelCntLe = 0U;
        PubIfDecisionPLAN_MDL_B.LcCancelCntRi = 0U;
        PubIfDecisionPLAN_MDL_DW.is_ALC_ON = 0;
        break;

       default:
        PubIfDecisionPLAN_MDL_DW.is_ALC_ON = 0;
        break;
      }

      PubIfDecisionPLAN_MDL_DW.is_c115_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_ALC_OFF;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts = 0U;
      PubIfDecisionPLAN_MDL_B.LcFinishCntLe = 0U;
      PubIfDecisionPLAN_MDL_B.LcFinishCntRi = 0U;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 0U;
      PubIfDecisionPLAN_MDL_B.LcCntLe = 0U;
      PubIfDecisionPLAN_MDL_B.LcCntRi = 0U;
      PubIfDecisionPLAN_MDL_B.ALC_LampReq = 0U;
      PubIfDecisionPLAN_MDL_B.LcDelayCnt = 0U;
    } else {
      guard1 = false;
      guard2 = false;
      guard3 = false;
      guard4 = false;
      switch (PubIfDecisionPLAN_MDL_DW.is_ALC_ON) {
       case PubIfDecisionPLAN_MDL_IN_LeLC:
        tmpForInput_idx_0 = (PubIfDecisionPLAN_MDL_B.LcFinishLe &&
                             (PubIfDecisionPLAN_MDL_B.LcCntLe > 10));
        if (tmpForInput_idx_0) {
          PubIfDecisionPLAN_MDL_B.LcFinishCntLe = 150U;
          guard3 = true;
        } else {
          tmpForInput_idx_0 = (PubIfDecisionPLAN_MDL_B.LcCancelLe ||
                               (PubIfDecisionPLAN_MDL_B.LcCntLe > 1000));
          if (tmpForInput_idx_0) {
            PubIfDecisionPLAN_MDL_B.LcCancelCntLe = 150U;
            guard3 = true;
          } else {
            if (PubIfDecisionPLAN_MDL_B.LcDelayCnt > 0) {
              JminIni = PubIfDecisionPLAN_MDL_B.LcDelayCnt;
              bpIdx = JminIni - 1U;
              if (bpIdx > (uint32_T)JminIni) {
                bpIdx = 0U;
              }

              i_0 = (int32_T)bpIdx;
              PubIfDecisionPLAN_MDL_B.LcDelayCnt = (uint8_T)i_0;
            }

            if ((PubIfDecisionPLAN_MDL_B.LcDelayCnt == 0) &&
                (PubIfDecisionPLAN_MDL_B.LcCntLe < 65000)) {
              bpIdx = PubIfDecisionPLAN_MDL_B.LcCntLe + 1U;
              if (bpIdx > 65535U) {
                bpIdx = 65535U;
              }

              PubIfDecisionPLAN_MDL_B.LcCntLe = (uint16_T)bpIdx;
            }

            if (PubIfDecisionPLAN_MDL_B.LcCntLe > 0) {
              PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts = 2U;
            }
          }
        }
        break;

       case PubIfDecisionPLAN_MDL_IN_RiLC:
        tmpForInput_idx_0 = (PubIfDecisionPLAN_MDL_B.LcFinishRi &&
                             (PubIfDecisionPLAN_MDL_B.LcCntRi > 10));
        if (tmpForInput_idx_0) {
          PubIfDecisionPLAN_MDL_B.LcFinishCntRi = 150U;
          guard4 = true;
        } else {
          tmpForInput_idx_0 = (PubIfDecisionPLAN_MDL_B.LcCancelRi ||
                               (PubIfDecisionPLAN_MDL_B.LcCntRi > 1000));
          if (tmpForInput_idx_0) {
            PubIfDecisionPLAN_MDL_B.LcCancelCntRi = 150U;
            guard4 = true;
          } else {
            if (PubIfDecisionPLAN_MDL_B.LcDelayCnt > 0) {
              JminIni = PubIfDecisionPLAN_MDL_B.LcDelayCnt;
              bpIdx = JminIni - 1U;
              if (bpIdx > (uint32_T)JminIni) {
                bpIdx = 0U;
              }

              i_0 = (int32_T)bpIdx;
              PubIfDecisionPLAN_MDL_B.LcDelayCnt = (uint8_T)i_0;
            }

            if ((PubIfDecisionPLAN_MDL_B.LcDelayCnt == 0) &&
                (PubIfDecisionPLAN_MDL_B.LcCntRi < 65000)) {
              bpIdx = PubIfDecisionPLAN_MDL_B.LcCntRi + 1U;
              if (bpIdx > 65535U) {
                bpIdx = 65535U;
              }

              PubIfDecisionPLAN_MDL_B.LcCntRi = (uint16_T)bpIdx;
            }

            if (PubIfDecisionPLAN_MDL_B.LcCntRi > 0) {
              PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts = 3U;
            }
          }
        }
        break;

       default:
        /* case IN_WaitLC: */
        if (PubIfDecisionPLAN_MDL_B.LcDrvLe) {
          PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 1U;
          guard1 = true;
        } else if (PubIfDecisionPLAN_MDL_B.LcDrvRi) {
          PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 1U;
          guard2 = true;
        } else if (PubIfDecisionPLAN_MDL_B.LcNohLe) {
          PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 2U;
          PubIfDecisionPLAN_MDL_B.ALC_LampReq = 1U;
          PubIfDecisionPLAN_MDL_B.LcDelayCnt = rtP_P_PLAN_ALC_LcDelayCntSetNoh;
          guard1 = true;
        } else if (PubIfDecisionPLAN_MDL_B.LcNohRi) {
          PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 2U;
          PubIfDecisionPLAN_MDL_B.ALC_LampReq = 2U;
          PubIfDecisionPLAN_MDL_B.LcDelayCnt = rtP_P_PLAN_ALC_LcDelayCntSetNoh;
          guard2 = true;
        } else if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe) {
          PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 4U;
          PubIfDecisionPLAN_MDL_B.ALC_LampReq = 1U;
          PubIfDecisionPLAN_MDL_B.LcDelayCnt =
            rtP_P_PLAN_ALC_LcDelayCntSetOverTk;
          guard1 = true;
        } else if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi) {
          PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 4U;
          PubIfDecisionPLAN_MDL_B.ALC_LampReq = 2U;
          PubIfDecisionPLAN_MDL_B.LcDelayCnt =
            rtP_P_PLAN_ALC_LcDelayCntSetOverTk;
          guard2 = true;
        } else if (PubIfDecisionPLAN_MDL_B.LcMrcRi) {
          PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 8U;
          PubIfDecisionPLAN_MDL_B.ALC_LampReq = 2U;
          PubIfDecisionPLAN_MDL_B.LcDelayCnt = 50U;
          PubIfDecisionPLAN_MDL_B.LcFinishCntRi = 150U;
          guard2 = true;
        } else {
          if (PubIfDecisionPLAN_MDL_B.LcFinishCntLe > 0) {
            JminIni = PubIfDecisionPLAN_MDL_B.LcFinishCntLe;
            bpIdx = JminIni - 1U;
            if (bpIdx > (uint32_T)JminIni) {
              bpIdx = 0U;
            }

            i_0 = (int32_T)bpIdx;
            PubIfDecisionPLAN_MDL_B.LcFinishCntLe = (uint8_T)i_0;
          }

          if (PubIfDecisionPLAN_MDL_B.LcCancelCntLe > 0) {
            JminIni = PubIfDecisionPLAN_MDL_B.LcCancelCntLe;
            bpIdx = JminIni - 1U;
            if (bpIdx > (uint32_T)JminIni) {
              bpIdx = 0U;
            }

            i_0 = (int32_T)bpIdx;
            PubIfDecisionPLAN_MDL_B.LcCancelCntLe = (uint8_T)i_0;
          }

          if (PubIfDecisionPLAN_MDL_B.LcFinishCntRi > 0) {
            JminIni = PubIfDecisionPLAN_MDL_B.LcFinishCntRi;
            bpIdx = JminIni - 1U;
            if (bpIdx > (uint32_T)JminIni) {
              bpIdx = 0U;
            }

            i_0 = (int32_T)bpIdx;
            PubIfDecisionPLAN_MDL_B.LcFinishCntRi = (uint8_T)i_0;
          }

          if (PubIfDecisionPLAN_MDL_B.LcCancelCntRi > 0) {
            JminIni = PubIfDecisionPLAN_MDL_B.LcCancelCntRi;
            bpIdx = JminIni - 1U;
            if (bpIdx > (uint32_T)JminIni) {
              bpIdx = 0U;
            }

            i_0 = (int32_T)bpIdx;
            PubIfDecisionPLAN_MDL_B.LcCancelCntRi = (uint8_T)i_0;
          }

          if ((PubIfDecisionPLAN_MDL_B.LcFinishCntLe == 0) &&
              (PubIfDecisionPLAN_MDL_B.LcCancelCntLe == 0) &&
              (PubIfDecisionPLAN_MDL_B.LcFinishCntRi == 0) &&
              (PubIfDecisionPLAN_MDL_B.LcCancelCntRi == 0)) {
            PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason = 0U;
          }
        }
        break;
      }

      if (guard4) {
        PubIfDecisionPLAN_MDL_B.LcCntRi = 0U;
        PubIfDecisionPLAN_MDL_B.LcDelayCnt = 0U;
        PubIfDecisionPLAN_MDL_DW.is_ALC_ON = PubIfDecisionPLAN_MDL_IN_WaitLC;
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts = 1U;
        PubIfDecisionPLAN_MDL_B.ALC_LampReq = 0U;
      }

      if (guard3) {
        PubIfDecisionPLAN_MDL_B.LcCntLe = 0U;
        PubIfDecisionPLAN_MDL_B.LcDelayCnt = 0U;
        PubIfDecisionPLAN_MDL_DW.is_ALC_ON = PubIfDecisionPLAN_MDL_IN_WaitLC;
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts = 1U;
        PubIfDecisionPLAN_MDL_B.ALC_LampReq = 0U;
      }

      if (guard2) {
        PubIfDecisionPLAN_MDL_B.LcFinishCntLe = 0U;
        PubIfDecisionPLAN_MDL_B.LcFinishCntRi = 0U;
        PubIfDecisionPLAN_MDL_B.LcCancelCntLe = 0U;
        PubIfDecisionPLAN_MDL_B.LcCancelCntRi = 0U;
        PubIfDecisionPLAN_MDL_DW.is_ALC_ON = PubIfDecisionPLAN_MDL_IN_RiLC;
        PubIfDecisionPLAN_MDL_B.LcCntRi = 0U;
      }

      if (guard1) {
        PubIfDecisionPLAN_MDL_B.LcFinishCntLe = 0U;
        PubIfDecisionPLAN_MDL_B.LcFinishCntRi = 0U;
        PubIfDecisionPLAN_MDL_B.LcCancelCntLe = 0U;
        PubIfDecisionPLAN_MDL_B.LcCancelCntRi = 0U;
        PubIfDecisionPLAN_MDL_DW.is_ALC_ON = PubIfDecisionPLAN_MDL_IN_LeLC;
        PubIfDecisionPLAN_MDL_B.LcCntLe = 0U;
      }
    }
  }

  /* End of Chart: '<S4>/ALC_DECS' */

  /* RelationalOperator: '<S198>/Compare' incorporates:
   *  Constant: '<S198>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_l0 =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason == ((uint8_T)4U));

  /* RelationalOperator: '<S193>/Compare' incorporates:
   *  Constant: '<S193>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_p0 = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)2U));

  /* Logic: '<S182>/AND7' */
  PubIfDecisionPLAN_MDL_B.AND7 = (PubIfDecisionPLAN_MDL_B.Compare_l0 &&
    PubIfDecisionPLAN_MDL_B.Compare_p0);

  /* Logic: '<S188>/AND10' */
  tmpForInput_2[0] = PLAN_ALC_LcOverTkLe_ALCSwtOn;
  tmpForInput_2[1] = rtu_LSM_HWA->LeLineLcAvailable;
  tmpForInput_2[2] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_LaneAvailable;
  tmpForInput_2[3] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_PilotLaneAvailable;
  tmpForInput_2[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_NoTurnLampReq;
  tmpForInput_2[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_NoLcFinishFlag;
  tmpForInput_2[6] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_dyDiff;
  tmpForInput_2[7] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_IPVehSpd;
  tmpForInput_2[8] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_LineValid;
  tmpForInput_2[9] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_NotInDrvCancelArea;
  tmpForInput_2[10] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_P0NotCutOut;
  tmpForInput_2[11] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_OverTkTrigger;
  tmpForInput_2[12] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkLe_LineCurvatureValid;
  tmpForInput_idx_0 = tmpForInput_2[0];
  for (JminIni = 0; JminIni < 12; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput_2[JminIni + 1]);
  }

  /* Logic: '<S188>/AND10' */
  PubIfDecisionPLAN_MDL_B.AND10_e = tmpForInput_idx_0;

  /* Logic: '<S188>/AND2' */
  PubIfDecisionPLAN_MDL_B.LcOverTkLeReady = (PubIfDecisionPLAN_MDL_B.AND10_e &&
    PubIfDecisionPLAN_MDL_B.NOT6);

  /* RelationalOperator: '<S202>/Compare' incorporates:
   *  Constant: '<S202>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ct = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)1U));

  /* Logic: '<S182>/AND4' */
  PubIfDecisionPLAN_MDL_B.AND4 = (PubIfDecisionPLAN_MDL_B.LcOverTkLeReady &&
    PubIfDecisionPLAN_MDL_B.Compare_ct);

  /* Logic: '<S182>/OR1' */
  PubIfDecisionPLAN_MDL_B.OR1_g = (PubIfDecisionPLAN_MDL_B.AND7 ||
    PubIfDecisionPLAN_MDL_B.AND4);

  /* RelationalOperator: '<S192>/Compare' incorporates:
   *  Constant: '<S192>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mh = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)3U));

  /* Logic: '<S182>/AND1' */
  PubIfDecisionPLAN_MDL_B.AND1_o = (PubIfDecisionPLAN_MDL_B.Compare_l0 &&
    PubIfDecisionPLAN_MDL_B.Compare_mh);

  /* Logic: '<S188>/AND9' */
  tmpForInput_2[0] = PLAN_ALC_LcOverTkRi_ALCSwtOn;
  tmpForInput_2[1] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_LaneAvailable;
  tmpForInput_2[2] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_PilotLaneAvailable;
  tmpForInput_2[3] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_NoTurnLampReq;
  tmpForInput_2[4] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_NoLcFinishFlag;
  tmpForInput_2[5] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_dyDiff;
  tmpForInput_2[6] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_IPVehSpd;
  tmpForInput_2[7] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_LineValid;
  tmpForInput_2[8] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_NotInDrvCancelArea;
  tmpForInput_2[9] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_P0NotCutOut;
  tmpForInput_2[10] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_OverTkTrigger;
  tmpForInput_2[11] =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcOverTkRi_LineCurvatureValid;
  tmpForInput_2[12] = rtu_LSM_HWA->RiLineLcAvailable;
  tmpForInput_idx_0 = tmpForInput_2[0];
  for (JminIni = 0; JminIni < 12; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput_2[JminIni + 1]);
  }

  /* Logic: '<S188>/AND9' */
  PubIfDecisionPLAN_MDL_B.AND9 = tmpForInput_idx_0;

  /* Logic: '<S188>/AND5' */
  PubIfDecisionPLAN_MDL_B.LcOverTkRiReady = (PubIfDecisionPLAN_MDL_B.AND9 &&
    PubIfDecisionPLAN_MDL_B.NOT6);

  /* RelationalOperator: '<S203>/Compare' incorporates:
   *  Constant: '<S203>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_kv = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)1U));

  /* Logic: '<S182>/AND6' */
  PubIfDecisionPLAN_MDL_B.AND6 = (PubIfDecisionPLAN_MDL_B.LcOverTkRiReady &&
    PubIfDecisionPLAN_MDL_B.Compare_kv);

  /* Logic: '<S182>/OR3' */
  PubIfDecisionPLAN_MDL_B.OR3_f = (PubIfDecisionPLAN_MDL_B.AND1_o ||
    PubIfDecisionPLAN_MDL_B.AND6);

  /* Switch: '<S182>/Switch2' */
  if (PubIfDecisionPLAN_MDL_B.OR3_f) {
    /* Switch: '<S182>/Switch2' */
    PubIfDecisionPLAN_MDL_B.Switch2_d =
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R;
  } else {
    /* Switch: '<S182>/Switch2' incorporates:
     *  Constant: '<S182>/Constant1'
     */
    PubIfDecisionPLAN_MDL_B.Switch2_d = 0.0F;
  }

  /* End of Switch: '<S182>/Switch2' */

  /* Switch: '<S182>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.OR1_g) {
    /* Switch: '<S182>/Switch' */
    PubIfDecisionPLAN_MDL_B.Switch_n =
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L;
  } else {
    /* Switch: '<S182>/Switch' */
    PubIfDecisionPLAN_MDL_B.Switch_n = PubIfDecisionPLAN_MDL_B.Switch2_d;
  }

  /* End of Switch: '<S182>/Switch' */

  /* Logic: '<S182>/OR' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_ALC_laneChangeEnable =
    (PubIfDecisionPLAN_MDL_B.OR1_g || PubIfDecisionPLAN_MDL_B.OR3_f);

  /* Switch: '<S182>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.LongCtrl_ALC_laneChangeEnable) {
    /* Switch: '<S182>/Switch1' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_ALC_dangerLevel =
      PubIfDecisionPLAN_MDL_B.Switch_n;
  } else {
    /* Switch: '<S182>/Switch1' incorporates:
     *  Constant: '<S182>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.LongCtrl_ALC_dangerLevel = 0.0F;
  }

  /* End of Switch: '<S182>/Switch1' */

  /* Gain: '<S182>/Gain2' */
  PubIfDecisionPLAN_MDL_B.Gain2_e = 1.03F * rtu_PLAN_VCAN_ESP->VehSpd;

  /* Sum: '<S182>/Add2' incorporates:
   *  Constant: '<S182>/Constant6'
   */
  PubIfDecisionPLAN_MDL_B.Add2_h = PubIfDecisionPLAN_MDL_B.Gain2_e + 1.3F;

  /* Rounding: '<S182>/Round' */
  PubIfDecisionPLAN_MDL_B.Round_e = roundf(PubIfDecisionPLAN_MDL_B.Add2_h);

  /* RelationalOperator: '<S195>/Compare' incorporates:
   *  Constant: '<S195>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_cr = (PubIfDecisionPLAN_MDL_B.Round_e <=
    100.0F);

  /* RelationalOperator: '<S205>/Compare' incorporates:
   *  Constant: '<S205>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_by = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S194>/Compare' incorporates:
   *  Constant: '<S194>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_h0 = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)3U));

  /* Logic: '<S182>/OR6' */
  PubIfDecisionPLAN_MDL_B.OR6 = (PubIfDecisionPLAN_MDL_B.Compare_by ||
    PubIfDecisionPLAN_MDL_B.Compare_h0);

  /* UnitDelay: '<S182>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_ob =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_nj;

  /* Logic: '<S182>/AND5' */
  PubIfDecisionPLAN_MDL_B.AND5 = (PubIfDecisionPLAN_MDL_B.Compare_cr &&
    PubIfDecisionPLAN_MDL_B.OR6 && PubIfDecisionPLAN_MDL_B.UnitDelay_ob);

  /* RelationalOperator: '<S196>/Compare' incorporates:
   *  Constant: '<S196>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_es = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S197>/Compare' incorporates:
   *  Constant: '<S197>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_hva = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)3U));

  /* Logic: '<S182>/OR2' */
  PubIfDecisionPLAN_MDL_B.OR2_j = ((!PubIfDecisionPLAN_MDL_B.Compare_es) &&
    (!PubIfDecisionPLAN_MDL_B.Compare_hva));

  /* Abs: '<S182>/Abs' */
  PubIfDecisionPLAN_MDL_B.Abs_k = fabsf(rtu_LSM_HWA->HWALineC0);

  /* Product: '<S182>/Product' incorporates:
   *  Constant: '<S182>/Constant5'
   */
  PubIfDecisionPLAN_MDL_B.Product_c = rtu_LSM_HWA->RoadWidth *
    rtP_P_PLAN_ALC_LcFinishDyDiffRwFactorForAP;

  /* RelationalOperator: '<S182>/Relational Operator' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator_o = (PubIfDecisionPLAN_MDL_B.Abs_k <
    PubIfDecisionPLAN_MDL_B.Product_c);

  /* Logic: '<S182>/OR5' */
  PubIfDecisionPLAN_MDL_B.OR5 = (PubIfDecisionPLAN_MDL_B.OR2_j ||
    PubIfDecisionPLAN_MDL_B.RelationalOperator_o);

  /* Chart: '<S182>/ALCHMISM' */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c116_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c116_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c116_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_CC;
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeIncSetSpdReq = 0U;
    PubIfDecisionPLAN_MDL_DW.LcCnt_n = 0U;
  } else if (PubIfDecisionPLAN_MDL_DW.is_c116_PubIfDecisionPLAN_MDL == 1) {
    if (PubIfDecisionPLAN_MDL_B.AND5) {
      PubIfDecisionPLAN_MDL_DW.is_c116_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_Lc;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeIncSetSpdReq = 1U;
      PubIfDecisionPLAN_MDL_DW.LcCnt_n = 0U;
    } else {
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeIncSetSpdReq = 0U;
      PubIfDecisionPLAN_MDL_DW.LcCnt_n = 0U;
    }
  } else {
    /* case IN_Lc: */
    tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.OR5 &&
                          (PubIfDecisionPLAN_MDL_DW.LcCnt_n > 10)) ||
                         (PubIfDecisionPLAN_MDL_DW.LcCnt_n > 1000));
    if (tmpForInput_idx_0) {
      PubIfDecisionPLAN_MDL_DW.is_c116_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_CC;
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeIncSetSpdReq = 0U;
      PubIfDecisionPLAN_MDL_DW.LcCnt_n = 0U;
    } else {
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeIncSetSpdReq = 1U;
      bpIdx = PubIfDecisionPLAN_MDL_DW.LcCnt_n + 1U;
      if (bpIdx > 65535U) {
        bpIdx = 65535U;
      }

      u0 = (uint16_T)bpIdx;
      if (u0 < 2000) {
        PubIfDecisionPLAN_MDL_DW.LcCnt_n = u0;
      } else {
        PubIfDecisionPLAN_MDL_DW.LcCnt_n = 2000U;
      }
    }
  }

  /* End of Chart: '<S182>/ALCHMISM' */

  /* Outputs for Atomic SubSystem: '<S8>/AP' */
  /* S-Function (sfix_look1_dyn): '<S10>/AcceUpperLimitNormalModeChar' incorporates:
   *  Constant: '<S10>/P_LongCtrl_ALaUpperCharNormal'
   *  Constant: '<S10>/P_LongCtrl_ALvAcceleUpperCharNormal'
   */
  /* Dynamic Look-Up Table Block: '<S10>/AcceUpperLimitNormalModeChar'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T( &(PubIfDecisionPLAN_MDL_B.AcceUpperLimitNormalMode),
    &rtP_P_LongCtrl_ALaUpperCharNormal[0], (*rtu_vxvRefMs),
    &rtP_P_LongCtrl_ALvAcceleUpperCharNormal[0], 14U);

  /* S-Function (sfix_look1_dyn): '<S10>/AcceUpperLimitSportModeChar' incorporates:
   *  Constant: '<S10>/P_LongCtrl_ALaUpperCharSport'
   *  Constant: '<S10>/P_LongCtrl_ALvAcceleUpperCharSport'
   */
  /* Dynamic Look-Up Table Block: '<S10>/AcceUpperLimitSportModeChar'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T( &(PubIfDecisionPLAN_MDL_B.AcceUpperLimitSportMode),
    &rtP_P_LongCtrl_ALaUpperCharSport[0], (*rtu_vxvRefMs),
    &rtP_P_LongCtrl_ALvAcceleUpperCharSport[0], 14U);

  /* S-Function (sfix_look1_dyn): '<S10>/AcceUpperLimitEcoModeChar' incorporates:
   *  Constant: '<S10>/P_LongCtrl_ALaUpperCharEco'
   *  Constant: '<S10>/P_LongCtrl_ALvAcceleUpperCharEco'
   */
  /* Dynamic Look-Up Table Block: '<S10>/AcceUpperLimitEcoModeChar'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T( &(PubIfDecisionPLAN_MDL_B.AcceUpperLimitEcoMode),
    &rtP_P_LongCtrl_ALaUpperCharEco[0], (*rtu_vxvRefMs),
    &rtP_P_LongCtrl_ALvAcceleUpperCharEco[0], 14U);

  /* S-Function (sfix_look1_dyn): '<S10>/AcceLowerLimitChar' incorporates:
   *  Constant: '<S10>/PALaLowerChar'
   *  Constant: '<S10>/P_LongCtrl_ALvAcceleLowerChar'
   */
  /* Dynamic Look-Up Table Block: '<S10>/AcceLowerLimitChar'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real32_T
   * Input2  Data Type:  Floating Point real32_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_T_real32_T( &(PubIfDecisionPLAN_MDL_B.AcceLowerLimit),
    &rtP_P_LongCtrl_ALaLowerChar[0], (*rtu_vxvRefMs),
    &rtP_P_LongCtrl_ALvAcceleLowerChar[0], 3U);

  /* SignalConversion: '<S9>/Signal Copy' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_DrivingMode =
    rtu_PLAN_VCAN_ESP->DrivingModDis;

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_it = (rtu_VSM_LON_CTRL->HWAAccControlSts ==
    ((uint8_T)3U));

  /* Switch: '<S27>/Switch3' */
  if (PubIfDecisionPLAN_MDL_B.Compare_it) {
    /* Switch: '<S27>/Switch3' incorporates:
     *  Constant: '<S27>/P_LongCtrl_CCaccelUpperCCSafeStop'
     */
    PubIfDecisionPLAN_MDL_B.Switch3_l = rtP_P_LongCtrl_CCaccelUpperCCSafeStop;
  } else {
    /* Switch: '<S27>/Switch3' incorporates:
     *  Constant: '<S27>/P_LongCtrl_CCaccelUpperCC'
     */
    PubIfDecisionPLAN_MDL_B.Switch3_l = rtP_P_LongCtrl_CCaccelUpperCC;
  }

  /* End of Switch: '<S27>/Switch3' */

  /* SignalConversion: '<S12>/Signal Copy' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_laneChangeIncSetSpdReq =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeIncSetSpdReq;

  /* SignalConversion: '<S12>/Signal Copy1' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_CCSpdSetValue =
    PubIfDecisionPLAN_MDL_B.DataTypeConversion_l;

  /* UnitDelay: '<S12>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_o =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gy;

  /* UnitDelay: '<S12>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_a1 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_gj;

  /* MATLAB Function: '<S12>/MATLAB Function' incorporates:
   *  Constant: '<S12>/Constant1'
   *  Constant: '<S12>/Constant2'
   */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay1_a1 > 0) {
    JminIni = PubIfDecisionPLAN_MDL_B.UnitDelay1_a1;
    bpIdx = JminIni - 1U;
    if (bpIdx > (uint32_T)JminIni) {
      bpIdx = 0U;
    }

    i_0 = (int32_T)bpIdx;
    i = (uint8_T)i_0;
  } else {
    i = PubIfDecisionPLAN_MDL_B.UnitDelay1_a1;
  }

  if ((PubIfDecisionPLAN_MDL_B.LongCtrl_laneChangeIncSetSpdReq == 1) &&
      rtP_P_LongCtrl_CCLCIncSetSpdEnable) {
    temp = roundf(rtP_P_LongCtrl_CCLCIncSetSpdAddCntStartValue);
    if (temp < 256.0F) {
      if (temp >= 0.0F) {
        i = (uint8_T)temp;
      } else {
        i = 0U;
      }
    } else {
      i = MAX_uint8_T;
    }
  }

  if (PubIfDecisionPLAN_MDL_B.LongCtrl_CCSpdSetValue !=
      PubIfDecisionPLAN_MDL_B.UnitDelay_o) {
    i = 0U;
  }

  PubIfDecisionPLAN_MDL_B.LongCtrl_spdSetValueDurLCAccel = (real32_T)i /
    rtP_P_LongCtrl_CCLCIncSetSpdAddCntStartValue *
    rtP_P_LongCtrl_CCLCIncSetSpdAdd +
    PubIfDecisionPLAN_MDL_B.LongCtrl_CCSpdSetValue;
  PubIfDecisionPLAN_MDL_B.Cnt_l = i;

  /* End of MATLAB Function: '<S12>/MATLAB Function' */
  absx = PubIfDecisionPLAN_MDL_B.LongCtrl_spdSetValueDurLCAccel;
  if (PubIfDecisionPLAN_MDL_B.Compare_it) {
    absx = 0.0;
  }

  /* Constant: '<S9>/Constant' */
  if (((uint8_T)0U) == ((uint8_T)0U)) {
    temp = (real32_T)absx;
  } else {
    PubIfDecisionPLAN_MDL_B.SpdSetValue = (real32_T)absx;

    /* Outputs for Function Call SubSystem: '<S26>/Mph2KphCalc' */
    /* Product: '<S36>/Product' incorporates:
     *  Constant: '<S36>/C_LongCtrl_Mph2Kph'
     */
    PubIfDecisionPLAN_MDL_B.ACC_SpdSetValueMph2Kph =
      PubIfDecisionPLAN_MDL_B.SpdSetValue * 1.609F;

    /* End of Outputs for SubSystem: '<S26>/Mph2KphCalc' */
    temp = PubIfDecisionPLAN_MDL_B.ACC_SpdSetValueMph2Kph;
  }

  /* End of Constant: '<S9>/Constant' */
  PubIfDecisionPLAN_MDL_B.CCSetSpd = temp;
  PubIfDecisionPLAN_MDL_B.VehicleSpd = rtu_PLAN_VCAN_ESP->VehSpd;

  /* Chart: '<S12>/AccelCCCalc' incorporates:
   *  SubSystem: '<S26>/CCDeltaVCalc'
   */
  /* Product: '<S35>/Product' incorporates:
   *  Constant: '<S35>/IPDisVehSpdFac'
   */
  PubIfDecisionPLAN_MDL_B.Product_gqi = PubIfDecisionPLAN_MDL_B.VehicleSpd *
    rtP_P_LongCtrl_CCcoefESPSpd2IPSpd1;

  /* Sum: '<S35>/Add' incorporates:
   *  Constant: '<S35>/IPDisVehSpdOffset'
   */
  PubIfDecisionPLAN_MDL_B.Add_jl = PubIfDecisionPLAN_MDL_B.Product_gqi +
    rtP_P_LongCtrl_CCcoefESPSpd2IPSpd2;

  /* Sum: '<S35>/Add1' */
  PubIfDecisionPLAN_MDL_B.CCDeltaV = PubIfDecisionPLAN_MDL_B.CCSetSpd -
    PubIfDecisionPLAN_MDL_B.Add_jl;

  /* Product: '<S35>/Product1' incorporates:
   *  Constant: '<S35>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.CCDeltaV_i = PubIfDecisionPLAN_MDL_B.CCDeltaV / 3.6F;
  deltaVelCC = PubIfDecisionPLAN_MDL_B.CCDeltaV_i;
  if (PubIfDecisionPLAN_MDL_B.CCDeltaV_i > 0.0F) {
    PubIfDecisionPLAN_MDL_B.deltaVelCC = PubIfDecisionPLAN_MDL_B.CCDeltaV_i;

    /* Outputs for Function Call SubSystem: '<S26>/CCAccelePos' */
    /* Lookup_n-D: '<S34>/1-D Lookup Table' */
    PubIfDecisionPLAN_MDL_B.uDLookupTable_e = look1_iflf_binlcpw
      (PubIfDecisionPLAN_MDL_B.deltaVelCC,
       rtP_P_LongCtrl_CCtAcceleTimePosCorrXAxis,
       rtP_P_LongCtrl_CCtAcceleTimePosCorrYAxis, 1U);

    /* Product: '<S34>/Product1' incorporates:
     *  Constant: '<S34>/P_LongCtrl_CCtAcceleTimePos'
     */
    PubIfDecisionPLAN_MDL_B.Product1_d = rtP_P_LongCtrl_CCtAcceleTimePos *
      PubIfDecisionPLAN_MDL_B.uDLookupTable_e;

    /* Product: '<S34>/Product' */
    PubIfDecisionPLAN_MDL_B.CCAccele_l = PubIfDecisionPLAN_MDL_B.deltaVelCC /
      PubIfDecisionPLAN_MDL_B.Product1_d;

    /* End of Outputs for SubSystem: '<S26>/CCAccelePos' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCRaw =
      PubIfDecisionPLAN_MDL_B.CCAccele_l;
  } else {
    PubIfDecisionPLAN_MDL_B.deltaVelCC_b = PubIfDecisionPLAN_MDL_B.CCDeltaV_i;

    /* Outputs for Function Call SubSystem: '<S26>/CCAcceleNeg' */
    /* Lookup_n-D: '<S33>/1-D Lookup Table' */
    PubIfDecisionPLAN_MDL_B.uDLookupTable_nm = look1_iflf_binlcpw
      (PubIfDecisionPLAN_MDL_B.deltaVelCC_b,
       rtP_P_LongCtrl_CCtAcceleTimeNegCorrXAxis,
       rtP_P_LongCtrl_CCtAcceleTimeNegCorrYAxis, 1U);

    /* Product: '<S33>/Product1' incorporates:
     *  Constant: '<S33>/P_LongCtrl_CCtAcceleTimeNeg'
     */
    PubIfDecisionPLAN_MDL_B.Product1_k = rtP_P_LongCtrl_CCtAcceleTimeNeg *
      PubIfDecisionPLAN_MDL_B.uDLookupTable_nm;

    /* Product: '<S33>/Product' */
    PubIfDecisionPLAN_MDL_B.CCAccele = PubIfDecisionPLAN_MDL_B.deltaVelCC_b /
      PubIfDecisionPLAN_MDL_B.Product1_k;

    /* End of Outputs for SubSystem: '<S26>/CCAcceleNeg' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCRaw =
      PubIfDecisionPLAN_MDL_B.CCAccele;
  }

  if (((temp < PubIfDecisionPLAN_MDL_DW.CCSetSpdK1) && (deltaVelCC <
        rtP_P_LongCtrl_CCResumeDelayDeltaVel)) || rtu_VSM_LON_CTRL->vSetBelowMin
      || PubIfDecisionPLAN_MDL_B.Compare_it) {
    PubIfDecisionPLAN_MDL_B.fastDecel = 1.0;
  } else {
    if ((deltaVelCC > -1.0F) && (!PubIfDecisionPLAN_MDL_B.Compare_it)) {
      PubIfDecisionPLAN_MDL_B.fastDecel = 0.0;
    }
  }

  PubIfDecisionPLAN_MDL_DW.CCSetSpdK1 = temp;

  /* UnitDelay: '<S39>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_en =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_fj;

  /* RelationalOperator: '<S37>/Compare' incorporates:
   *  Constant: '<S37>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_hu =
    (PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCRaw >
     rtP_P_LongCtrl_CCaccelMaxLCActive);

  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S14>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mqn = (rtu_VSM_LON_CTRL->HWAAccControlSts ==
    ((uint8_T)2U));

  /* Logic: '<S27>/Logical Operator2' */
  PubIfDecisionPLAN_MDL_B.LogicalOperator2 = (PubIfDecisionPLAN_MDL_B.Compare_hu
    && PubIfDecisionPLAN_MDL_B.Compare_mqn);

  /* UnitDelay: '<S39>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_jn =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_dg;

  /* If: '<S39>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_en &&
      PubIfDecisionPLAN_MDL_B.LogicalOperator2) {
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem
      (PubIfDecisionPLAN_MDL_B.UnitDelay1_jn, &PubIfDecisionPLAN_MDL_B.Merge_dw,
       &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_m);

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_dw);

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem1' */
  }

  /* End of If: '<S39>/If' */

  /* Product: '<S39>/Product' incorporates:
   *  Constant: '<S39>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_f = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_dw
    * 0.02F;

  /* Gain: '<S27>/Gain' */
  PubIfDecisionPLAN_MDL_B.Gain_fq = 50.0F * PubIfDecisionPLAN_MDL_B.Product_f;

  /* Product: '<S27>/Product8' incorporates:
   *  Constant: '<S27>/SSCaDtIsLaneChange'
   */
  PubIfDecisionPLAN_MDL_B.Product8_j = 0.05F * PubIfDecisionPLAN_MDL_B.Gain_fq;

  /* Switch: '<S27>/Switch2' */
  if (PubIfDecisionPLAN_MDL_B.LogicalOperator2) {
    /* Switch: '<S27>/Switch2' */
    PubIfDecisionPLAN_MDL_B.Switch2_i = PubIfDecisionPLAN_MDL_B.Product8_j;
  } else {
    /* Switch: '<S27>/Switch2' incorporates:
     *  Constant: '<S27>/tCycle1'
     */
    PubIfDecisionPLAN_MDL_B.Switch2_i = 0.0F;
  }

  /* End of Switch: '<S27>/Switch2' */

  /* Sum: '<S27>/Add' */
  PubIfDecisionPLAN_MDL_B.Add_c = PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCRaw -
    PubIfDecisionPLAN_MDL_B.Switch2_i;

  /* RelationalOperator: '<S38>/LowerRelop1' */
  PubIfDecisionPLAN_MDL_B.LowerRelop1 = (PubIfDecisionPLAN_MDL_B.Add_c >
    PubIfDecisionPLAN_MDL_B.Switch3_l);

  /* Switch: '<S27>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.fastDecel > 0.0) {
    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Switch_g = rtP_P_LongCtrl_CCaccelMinFastDecel;
  } else {
    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant1'
     */
    PubIfDecisionPLAN_MDL_B.Switch_g = rtP_P_LongCtrl_CCaccelMinNoFastDecel;
  }

  /* End of Switch: '<S27>/Switch' */

  /* Switch: '<S27>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.LogicalOperator2) {
    /* Switch: '<S27>/Switch1' incorporates:
     *  Constant: '<S27>/P_LongCtrl_CCaccelLowerIsLaneChange'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_o = rtP_P_LongCtrl_CCaccelLowerIsLaneChange;
  } else {
    /* Switch: '<S27>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_o = PubIfDecisionPLAN_MDL_B.Switch_g;
  }

  /* End of Switch: '<S27>/Switch1' */

  /* RelationalOperator: '<S38>/UpperRelop' */
  PubIfDecisionPLAN_MDL_B.UpperRelop = (PubIfDecisionPLAN_MDL_B.Add_c <
    PubIfDecisionPLAN_MDL_B.Switch1_o);

  /* Switch: '<S38>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.UpperRelop) {
    /* Switch: '<S38>/Switch' */
    PubIfDecisionPLAN_MDL_B.Switch_p = PubIfDecisionPLAN_MDL_B.Switch1_o;
  } else {
    /* Switch: '<S38>/Switch' */
    PubIfDecisionPLAN_MDL_B.Switch_p = PubIfDecisionPLAN_MDL_B.Add_c;
  }

  /* End of Switch: '<S38>/Switch' */

  /* Switch: '<S38>/Switch2' */
  if (PubIfDecisionPLAN_MDL_B.LowerRelop1) {
    /* Switch: '<S38>/Switch2' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC = PubIfDecisionPLAN_MDL_B.Switch3_l;
  } else {
    /* Switch: '<S38>/Switch2' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC = PubIfDecisionPLAN_MDL_B.Switch_p;
  }

  /* End of Switch: '<S38>/Switch2' */

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_fgo = (*rtu_LONC_VLC_InternalAcc < 0.0F);

  /* Switch: '<S30>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.Compare_fgo) {
    /* Switch: '<S30>/Switch' incorporates:
     *  Constant: '<S30>/P_LongCtrl_CCaccelCCNeg2PosJerk'
     */
    PubIfDecisionPLAN_MDL_B.accelCCJerk = rtP_P_LongCtrl_CCaccelCCNeg2PosJerk;
  } else {
    /* Switch: '<S30>/Switch' incorporates:
     *  Constant: '<S30>/P_LongCtrl_CCaccelCCPosJerk'
     */
    PubIfDecisionPLAN_MDL_B.accelCCJerk = rtP_P_LongCtrl_CCaccelCCPosJerk;
  }

  /* End of Switch: '<S30>/Switch' */

  /* Product: '<S31>/Product' incorporates:
   *  Constant: '<S9>/P_LongCtrltCycle1'
   */
  PubIfDecisionPLAN_MDL_B.Product_m4 = PubIfDecisionPLAN_MDL_B.accelCCJerk *
    rtP_P_LongCtrl_tCycle;

  /* Sum: '<S31>/Add' */
  PubIfDecisionPLAN_MDL_B.Add_o = *rtu_LONC_VLC_InternalAcc +
    PubIfDecisionPLAN_MDL_B.Product_m4;

  /* MinMax: '<S31>/MinMax' */
  temp = fminf(PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC,
               PubIfDecisionPLAN_MDL_B.Add_o);

  /* MinMax: '<S31>/MinMax' */
  PubIfDecisionPLAN_MDL_B.MinMax = temp;

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_kqi = (*rtu_LONC_VLC_InternalAcc > 0.0F);

  /* Switch: '<S30>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.Compare_kqi) {
    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S30>/P_LongCtrl_CCdecelCCJerk'
     */
    PubIfDecisionPLAN_MDL_B.decelCCJerk = rtP_P_LongCtrl_CCdecelCCJerk;
  } else {
    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S30>/P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc'
     */
    PubIfDecisionPLAN_MDL_B.decelCCJerk =
      rtP_P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc;
  }

  /* End of Switch: '<S30>/Switch1' */

  /* Product: '<S31>/Product1' incorporates:
   *  Constant: '<S9>/P_LongCtrltCycle1'
   */
  PubIfDecisionPLAN_MDL_B.Product1_e = PubIfDecisionPLAN_MDL_B.decelCCJerk *
    rtP_P_LongCtrl_tCycle;

  /* Sum: '<S31>/Add1' */
  PubIfDecisionPLAN_MDL_B.Add1_k = *rtu_LONC_VLC_InternalAcc +
    PubIfDecisionPLAN_MDL_B.Product1_e;

  /* MinMax: '<S31>/MinMax1' */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.MinMax,
                     PubIfDecisionPLAN_MDL_B.Add1_k);

  /* MinMax: '<S31>/MinMax1' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCCtrlAfterJerk = deltaVelCC;

  /* Chart: '<S12>/AcceleBandCC' */
  if (PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCCtrlAfterJerk > 0.0F) {
    PubIfDecisionPLAN_MDL_B.accelCCDes =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCCtrlAfterJerk;

    /* Outputs for Function Call SubSystem: '<S28>/CCPosAcceleBandCalc' */
    /* Sum: '<S43>/Add' incorporates:
     *  Constant: '<S43>/P_LongCtrl_CCaMinPosAcceleUpperBand'
     */
    PubIfDecisionPLAN_MDL_B.Add_hq = rtP_P_LongCtrl_CCaMinPosAcceleUpperBand +
      PubIfDecisionPLAN_MDL_B.accelCCDes;

    /* Sum: '<S43>/Add1' incorporates:
     *  Constant: '<S43>/P_LongCtrl_CCaMinPosAcceleLowerBand'
     */
    PubIfDecisionPLAN_MDL_B.Add1_oh = rtP_P_LongCtrl_CCaMinPosAcceleLowerBand +
      PubIfDecisionPLAN_MDL_B.accelCCDes;

    /* Product: '<S43>/Product' incorporates:
     *  Constant: '<S43>/P_LongCtrl_CCfacPosAcceleUpperBand'
     */
    PubIfDecisionPLAN_MDL_B.Product_ft = rtP_P_LongCtrl_CCfacPosAcceleUpperBand *
      PubIfDecisionPLAN_MDL_B.accelCCDes;

    /* MinMax: '<S43>/MinMax' */
    deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.Add_hq,
                       PubIfDecisionPLAN_MDL_B.Product_ft);

    /* MinMax: '<S43>/MinMax' */
    PubIfDecisionPLAN_MDL_B.upperBandCC_j = deltaVelCC;

    /* Product: '<S43>/Product1' incorporates:
     *  Constant: '<S43>/P_LongCtrl_CCfacPosAcceleLowerBand'
     */
    PubIfDecisionPLAN_MDL_B.Product1_cu = PubIfDecisionPLAN_MDL_B.accelCCDes *
      rtP_P_LongCtrl_CCfacPosAcceleLowerBand;

    /* MinMax: '<S43>/MinMax1' */
    temp = fminf(PubIfDecisionPLAN_MDL_B.Product1_cu,
                 PubIfDecisionPLAN_MDL_B.Add1_oh);

    /* MinMax: '<S43>/MinMax1' */
    PubIfDecisionPLAN_MDL_B.lowerBandCC_j = temp;

    /* End of Outputs for SubSystem: '<S28>/CCPosAcceleBandCalc' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandCC =
      PubIfDecisionPLAN_MDL_B.upperBandCC_j;
    PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandCC =
      PubIfDecisionPLAN_MDL_B.lowerBandCC_j;
  } else {
    PubIfDecisionPLAN_MDL_B.accelCCDes_o =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCCtrlAfterJerk;

    /* Outputs for Function Call SubSystem: '<S28>/CCNegAcceleBandCalc' */
    /* Sum: '<S42>/Add' incorporates:
     *  Constant: '<S42>/P_LongCtrl_CCaMinNegAcceleUpperBand'
     */
    PubIfDecisionPLAN_MDL_B.Add_b = rtP_P_LongCtrl_CCaMinNegAcceleUpperBand +
      PubIfDecisionPLAN_MDL_B.accelCCDes_o;

    /* Sum: '<S42>/Add1' incorporates:
     *  Constant: '<S42>/P_LongCtrl_CCaMinNegAcceleLowerBand'
     */
    PubIfDecisionPLAN_MDL_B.Add1_i = rtP_P_LongCtrl_CCaMinNegAcceleLowerBand +
      PubIfDecisionPLAN_MDL_B.accelCCDes_o;

    /* Product: '<S42>/Product' incorporates:
     *  Constant: '<S42>/P_LongCtrl_CCfacNegAcceleUpperBand'
     */
    PubIfDecisionPLAN_MDL_B.Product_mg = rtP_P_LongCtrl_CCfacNegAcceleUpperBand *
      PubIfDecisionPLAN_MDL_B.accelCCDes_o;

    /* MinMax: '<S42>/MinMax' */
    deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.Add_b,
                       PubIfDecisionPLAN_MDL_B.Product_mg);

    /* MinMax: '<S42>/MinMax' */
    PubIfDecisionPLAN_MDL_B.upperBandCC = deltaVelCC;

    /* Product: '<S42>/Product1' incorporates:
     *  Constant: '<S42>/P_LongCtrl_CCfacNegAcceleLowerBand'
     */
    PubIfDecisionPLAN_MDL_B.Product1_f = PubIfDecisionPLAN_MDL_B.accelCCDes_o *
      rtP_P_LongCtrl_CCfacNegAcceleLowerBand;

    /* MinMax: '<S42>/MinMax1' */
    temp = fminf(PubIfDecisionPLAN_MDL_B.Product1_f,
                 PubIfDecisionPLAN_MDL_B.Add1_i);

    /* MinMax: '<S42>/MinMax1' */
    PubIfDecisionPLAN_MDL_B.lowerBandCC = temp;

    /* End of Outputs for SubSystem: '<S28>/CCNegAcceleBandCalc' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandCC =
      PubIfDecisionPLAN_MDL_B.upperBandCC;
    PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandCC =
      PubIfDecisionPLAN_MDL_B.lowerBandCC;
  }

  /* End of Chart: '<S12>/AcceleBandCC' */
  for (i_2 = 0; i_2 < 10; i_2++) {
    /* SignalConversion: '<S108>/Signal Conversion1' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurMatrix[i_2] =
      rtu_EHRV2_ROAD_INFO_i_road_curvature_value_matrix[i_2];
  }

  /* Outputs for Iterator SubSystem: '<S108>/LP' incorporates:
   *  ForEach: '<S115>/For Each'
   */
  for (ForEach_itr_k = 0; ForEach_itr_k < 10; ForEach_itr_k++) {
    /* ForEachSliceSelector generated from: '<S115>/LongCtrl_IC_EHRV2_CurMatrix' */
    rtb_ImpSel_InsertedFor_LongCtrl_IC_EHRV2_CurMatrix_at_outport_0 =
      PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurMatrix[ForEach_itr_k];

    /* Abs: '<S115>/Abs1' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Abs1 = fabsf
      (rtb_ImpSel_InsertedFor_LongCtrl_IC_EHRV2_CurMatrix_at_outport_0);

    /* RelationalOperator: '<S122>/Compare' incorporates:
     *  Constant: '<S122>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Compare =
      (PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Abs1 >= 0.15F);

    /* S-Function (sfix_udelay): '<S115>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].TappedDelay2[0] =
      PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[0];
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].TappedDelay2[1] =
      PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[1];
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].TappedDelay2[2] =
      PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[2];

    /* MinMax: '<S115>/Max' */
    deltaVelCC = PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].TappedDelay2
      [0];

    /* MinMax: '<S115>/Min' */
    temp = PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].TappedDelay2[0];

    /* MinMax: '<S115>/Max' */
    deltaVelCC = fmaxf(deltaVelCC,
                       PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].
                       TappedDelay2[1]);

    /* MinMax: '<S115>/Min' */
    temp = fminf(temp, PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].
                 TappedDelay2[1]);

    /* MinMax: '<S115>/Max' */
    deltaVelCC = fmaxf(deltaVelCC,
                       PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].
                       TappedDelay2[2]);

    /* MinMax: '<S115>/Min' */
    temp = fminf(temp, PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].
                 TappedDelay2[2]);

    /* MinMax: '<S115>/Max' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Max = deltaVelCC;

    /* MinMax: '<S115>/Min' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Min = temp;

    /* Sum: '<S115>/Sum of Elements2' */
    deltaVelCC = PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].TappedDelay2
      [0];
    deltaVelCC += PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k]
      .TappedDelay2[1];
    deltaVelCC += PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k]
      .TappedDelay2[2];

    /* Sum: '<S115>/Sum of Elements2' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].SumofElements2 =
      deltaVelCC;

    /* Sum: '<S115>/Add' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Add =
      (PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].SumofElements2 -
       PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Max) -
      PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Min;

    /* UnitDelay: '<S115>/Unit Delay' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].UnitDelay =
      PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].UnitDelay_DSTATE;

    /* Sum: '<S115>/Add5' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Add5 =
      PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Add -
      PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].UnitDelay;

    /* Product: '<S115>/Product8' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Product8 =
      PubIfDecisionPLAN_MDL_ConstB.CoreSubsys.Product7 *
      PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Add5;

    /* Sum: '<S115>/Add6' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Add6 =
      PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Product8 +
      PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].UnitDelay;

    /* Switch: '<S115>/Switch' */
    if (PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Compare) {
      /* Switch: '<S115>/Switch' incorporates:
       *  Constant: '<S115>/Constant'
       */
      PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Switch = 0.0F;
    } else {
      /* Switch: '<S115>/Switch' */
      PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Switch =
        PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Add6;
    }

    /* End of Switch: '<S115>/Switch' */

    /* Abs: '<S115>/Abs' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Abs = fabsf
      (PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Switch);

    /* ForEachSliceAssignment generated from: '<S115>/LongCtrl_IC_EHRV2_CurMatrixLP' */
    PubIfDecisionPLAN_MDL_B.ImpAsg_InsertedFor_LongCtrl_IC_EHRV2_CurMatrixLP_at_inport_0
      [ForEach_itr_k] = PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Abs;
  }

  /* End of Outputs for SubSystem: '<S108>/LP' */
  for (i_2 = 0; i_2 < 10; i_2++) {
    /* Math: '<S108>/Math Function' */
    PubIfDecisionPLAN_MDL_B.MathFunction_h[i_2] =
      PubIfDecisionPLAN_MDL_B.ImpAsg_InsertedFor_LongCtrl_IC_EHRV2_CurMatrixLP_at_inport_0
      [i_2];

    /* Abs: '<S108>/Abs' incorporates:
     *  Math: '<S108>/Math Function'
     */
    PubIfDecisionPLAN_MDL_B.Abs_o[i_2] = fabsf
      (PubIfDecisionPLAN_MDL_B.MathFunction_h[i_2]);

    /* SignalConversion: '<S108>/Signal Conversion2' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurDisMatrix[i_2] =
      rtu_EHRV2_ROAD_INFO_i_road_curvature_distance_matrix[i_2];

    /* Math: '<S108>/Math Function1' */
    PubIfDecisionPLAN_MDL_B.MathFunction1_i[i_2] =
      PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurDisMatrix[i_2];
  }

  /* SignalConversion: '<S108>/Signal Conversion5' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurMatrixSize =
    *rtu_EHRV2_ROAD_INFO_i_road_curvature_matrix_size;

  /* Chart: '<S108>/Chart' incorporates:
   *  Abs: '<S108>/Abs'
   *  Gain: '<S121>/Gain2'
   *  Sum: '<S120>/Add'
   */
  if ((PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurMatrixSize > 0) &&
      (PubIfDecisionPLAN_MDL_minimum(PubIfDecisionPLAN_MDL_B.Abs_o) < 0.15)) {
    PubIfDecisionPLAN_MDL_B.velSubj_d = *rtu_vxvRefMs;

    /* Outputs for Function Call SubSystem: '<S114>/velDeltaCalc' */
    /* Outputs for Function Call SubSystem: '<S114>/velSubjLimChar' */
    for (JminIni = 0; JminIni < 10; JminIni++) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurMatrixLP[JminIni] =
        PubIfDecisionPLAN_MDL_B.Abs_o[JminIni];

      /* Lookup_n-D: '<S121>/1-D Lookup Table2' incorporates:
       *  Abs: '<S108>/Abs'
       */
      deltaVelCC = PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurMatrixLP[JminIni];
      PubIfDecisionPLAN_MDL_B.uDLookupTable2_b[JminIni] = look1_iflf_binlcpw
        (deltaVelCC, rtP_P_LongCtrl_ICCurvatureMapLimitSpdXAxis,
         rtP_P_LongCtrl_ICCurvatureMapLimitSpdYAxis, 9U);

      /* Gain: '<S121>/Gain2' incorporates:
       *  Lookup_n-D: '<S121>/1-D Lookup Table2'
       */
      PubIfDecisionPLAN_MDL_B.Gain2_a0[JminIni] = 0.277777791F *
        PubIfDecisionPLAN_MDL_B.uDLookupTable2_b[JminIni];
      PubIfDecisionPLAN_MDL_B.velSubjLimMap[JminIni] =
        PubIfDecisionPLAN_MDL_B.Gain2_a0[JminIni];

      /* Sum: '<S120>/Add' incorporates:
       *  Gain: '<S121>/Gain2'
       */
      PubIfDecisionPLAN_MDL_B.velDelta_c[JminIni] =
        PubIfDecisionPLAN_MDL_B.velSubjLimMap[JminIni] -
        PubIfDecisionPLAN_MDL_B.velSubj_d;
      velDelta[JminIni] = PubIfDecisionPLAN_MDL_B.velDelta_c[JminIni];
    }

    /* End of Outputs for SubSystem: '<S114>/velSubjLimChar' */
    /* End of Outputs for SubSystem: '<S114>/velDeltaCalc' */
    for (i_2 = 0; i_2 < 10; i_2++) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[i_2] = 16.0F;
    }

    for (i_2 = 0; i_2 < 10; i_2++) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCurvatureMap[i_2] = 500.0F;
    }

    i = 1U;
    while ((i <= PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurMatrixSize) &&
           (fabsf(PubIfDecisionPLAN_MDL_B.Abs_o[i - 1]) < 0.15)) {
      if (velDelta[i - 1] > 0.0F) {
        PubIfDecisionPLAN_MDL_B.velDelta_b = velDelta[i - 1];
        PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix_g =
          PubIfDecisionPLAN_MDL_B.velDelta_b /
          rtP_P_LongCtrl_ICtAcceleTimePosCurvatureMap;
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[i - 1] =
          PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix_g;
      } else {
        PubIfDecisionPLAN_MDL_B.velDelta_gu = velDelta[i - 1];
        PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix_k =
          PubIfDecisionPLAN_MDL_B.velDelta_gu /
          rtP_P_LongCtrl_ICtAcceleTimeNegCurvatureMap;
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[i - 1] =
          PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix_k;
        PubIfDecisionPLAN_MDL_B.velDelta_k = velDelta[i - 1];
        PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix =
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[i - 1];
        PubIfDecisionPLAN_MDL_B.Abs_i = fabsf
          (PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix);
        deltaVelCC = PubIfDecisionPLAN_MDL_B.velDelta_k;
        PubIfDecisionPLAN_MDL_B.MathFunction_f = deltaVelCC * deltaVelCC;
        PubIfDecisionPLAN_MDL_B.Product1_p = PubIfDecisionPLAN_MDL_B.Abs_i *
          2.0F;
        PubIfDecisionPLAN_MDL_B.distDesCurvatureMap =
          PubIfDecisionPLAN_MDL_B.MathFunction_f /
          PubIfDecisionPLAN_MDL_B.Product1_p;
        PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCurvatureMap[i - 1] =
          PubIfDecisionPLAN_MDL_B.distDesCurvatureMap;
        if (PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCurvatureMap[i - 1] >
            PubIfDecisionPLAN_MDL_B.MathFunction1_i[i - 1]) {
          PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurDisMatrix_d =
            PubIfDecisionPLAN_MDL_B.MathFunction1_i[i - 1];
          PubIfDecisionPLAN_MDL_B.velDelta_i = velDelta[i - 1];
          deltaVelCC = PubIfDecisionPLAN_MDL_B.velDelta_i;
          PubIfDecisionPLAN_MDL_B.MathFunction_m = deltaVelCC * deltaVelCC;
          deltaVelCC = fmaxf
            (PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurDisMatrix_d, 10.0F);
          PubIfDecisionPLAN_MDL_B.MinMax_b = deltaVelCC;
          PubIfDecisionPLAN_MDL_B.Product_cq = PubIfDecisionPLAN_MDL_B.MinMax_b *
            2.0F;
          PubIfDecisionPLAN_MDL_B.Product1_cq =
            PubIfDecisionPLAN_MDL_B.MathFunction_m /
            PubIfDecisionPLAN_MDL_B.Product_cq;
          PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix_i =
            PubIfDecisionPLAN_MDL_B.Product1_cq * (-1.0F);
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[i - 1] =
            PubIfDecisionPLAN_MDL_B.accelICCurvatureMapMatrix_i;
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[i - 1] =
            fmaxf(-3.5F,
                  PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[i -
                  1]);
        } else {
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[i - 1] =
            0.5F;
        }
      }

      i_0 = (int32_T)(i + 1U);
      if ((uint32_T)i_0 > 255U) {
        i_0 = 255;
      }

      i = (uint8_T)i_0;
    }
  } else {
    for (i_2 = 0; i_2 < 10; i_2++) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[i_2] = 16.0F;
    }
  }

  temp = PubIfDecisionPLAN_MDL_minimum
    (PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix);
  if (temp > 0.0F) {
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelDesCurvatureMap =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelICCurvatureMapMatrix[0];
  } else {
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelDesCurvatureMap = temp;
  }

  if (!rtP_P_LongCtrl_IC_EHRV2Enable) {
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelDesCurvatureMap = 16.0F;
  }

  /* End of Chart: '<S108>/Chart' */

  /* DataTypeConversion: '<S109>/Data Type Conversion1' incorporates:
   *  Constant: '<S109>/P_LongCtrl_ICCurveDecelEnable'
   */
  PubIfDecisionPLAN_MDL_B.DataTypeConversion1 =
    rtP_P_LongCtrl_ICCurveDecelEnable;

  /* MATLAB Function: '<S111>/CalcEgoVehMove' incorporates:
   *  Constant: '<S9>/P_LongCtrltCycle6'
   */
  if (*rtu_kapTraj == 0.0F) {
    PubIfDecisionPLAN_MDL_B.dDeltaX = *rtu_vxvRefMs * rtP_P_LongCtrl_tCycle;
    PubIfDecisionPLAN_MDL_B.dDeltaY = 0.0F;
    PubIfDecisionPLAN_MDL_B.CosOfPsi = 1.0F;
    deltaVelCC = 0.0F;
  } else {
    temp = *rtu_kapTraj * *rtu_vxvRefMs * rtP_P_LongCtrl_tCycle;
    deltaVelCC = sinf(temp);
    PubIfDecisionPLAN_MDL_B.CosOfPsi = temp;
    PubIfDecisionPLAN_MDL_B.CosOfPsi = cosf(PubIfDecisionPLAN_MDL_B.CosOfPsi);
    PubIfDecisionPLAN_MDL_B.dDeltaX = deltaVelCC / *rtu_kapTraj;
    PubIfDecisionPLAN_MDL_B.dDeltaY = sinf(temp / 2.0F) * sinf(temp / 2.0F) *
      2.0F / *rtu_kapTraj;
  }

  PubIfDecisionPLAN_MDL_B.SinOfPsi = deltaVelCC;

  /* End of MATLAB Function: '<S111>/CalcEgoVehMove' */

  /* UnitDelay: '<S111>/Unit Delay22' */
  PubIfDecisionPLAN_MDL_B.UnitDelay22[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay22_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay21' */
  PubIfDecisionPLAN_MDL_B.UnitDelay21[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay21_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay20' */
  PubIfDecisionPLAN_MDL_B.UnitDelay20[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay20_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay19' */
  PubIfDecisionPLAN_MDL_B.UnitDelay19[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay19_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay63' */
  PubIfDecisionPLAN_MDL_B.UnitDelay63[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay63_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay62' */
  PubIfDecisionPLAN_MDL_B.UnitDelay62[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay62_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay22' */
  PubIfDecisionPLAN_MDL_B.UnitDelay22[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay22_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay21' */
  PubIfDecisionPLAN_MDL_B.UnitDelay21[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay21_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay20' */
  PubIfDecisionPLAN_MDL_B.UnitDelay20[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay20_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay19' */
  PubIfDecisionPLAN_MDL_B.UnitDelay19[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay19_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay63' */
  PubIfDecisionPLAN_MDL_B.UnitDelay63[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay63_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay62' */
  PubIfDecisionPLAN_MDL_B.UnitDelay62[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay62_DSTATE[1];

  /* Sum: '<S144>/Sum of Elements' */
  deltaVelCC = -0.0F;
  for (i_2 = 0; i_2 < 25; i_2++) {
    /* S-Function (sfix_udelay): '<S144>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_B.TappedDelay[i_2] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay_X[i_2];

    /* Sum: '<S144>/Sum of Elements' */
    deltaVelCC += PubIfDecisionPLAN_MDL_B.TappedDelay[i_2];

    /* S-Function (sfix_udelay): '<S144>/Tapped Delay1' */
    PubIfDecisionPLAN_MDL_B.TappedDelay1_g[i_2] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_m[i_2];
  }

  /* Sum: '<S144>/Sum of Elements' */
  PubIfDecisionPLAN_MDL_B.SumofElements = deltaVelCC;

  /* Gain: '<S144>/Gain' */
  PubIfDecisionPLAN_MDL_B.Gain_a = 0.04F * PubIfDecisionPLAN_MDL_B.SumofElements;

  /* Sum: '<S144>/Sum of Elements1' */
  deltaVelCC = -0.0F;
  for (i_1 = 0; i_1 < 25; i_1++) {
    i_2 = i_1;
    deltaVelCC += PubIfDecisionPLAN_MDL_B.TappedDelay1_g[i_2];
  }

  /* Sum: '<S144>/Sum of Elements1' */
  PubIfDecisionPLAN_MDL_B.SumofElements1 = deltaVelCC;

  /* Gain: '<S144>/Gain1' */
  PubIfDecisionPLAN_MDL_B.Gain1_l = 0.04F *
    PubIfDecisionPLAN_MDL_B.SumofElements1;

  /* S-Function (sfix_udelay): '<S143>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_B.TappedDelay1_n[0] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[0];
  PubIfDecisionPLAN_MDL_B.TappedDelay1_n[1] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[1];
  PubIfDecisionPLAN_MDL_B.TappedDelay1_n[2] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[2];

  /* MinMax: '<S143>/Max1' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.TappedDelay1_n[0];

  /* MinMax: '<S143>/Min1' */
  temp = PubIfDecisionPLAN_MDL_B.TappedDelay1_n[0];

  /* MinMax: '<S143>/Max1' */
  deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.TappedDelay1_n[1]);

  /* MinMax: '<S143>/Min1' */
  temp = fminf(temp, PubIfDecisionPLAN_MDL_B.TappedDelay1_n[1]);

  /* MinMax: '<S143>/Max1' */
  deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.TappedDelay1_n[2]);

  /* MinMax: '<S143>/Min1' */
  temp = fminf(temp, PubIfDecisionPLAN_MDL_B.TappedDelay1_n[2]);

  /* MinMax: '<S143>/Max1' */
  PubIfDecisionPLAN_MDL_B.Max1_p = deltaVelCC;

  /* MinMax: '<S143>/Min1' */
  PubIfDecisionPLAN_MDL_B.Min1_h = temp;

  /* Sum: '<S143>/Sum of Elements1' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.TappedDelay1_n[0];

  /* S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_B.TappedDelay2[0] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[0];

  /* Sum: '<S143>/Sum of Elements1' */
  deltaVelCC += PubIfDecisionPLAN_MDL_B.TappedDelay1_n[1];

  /* S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_B.TappedDelay2[1] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[1];

  /* Sum: '<S143>/Sum of Elements1' */
  deltaVelCC += PubIfDecisionPLAN_MDL_B.TappedDelay1_n[2];

  /* S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_B.TappedDelay2[2] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[2];

  /* Sum: '<S143>/Sum of Elements1' */
  PubIfDecisionPLAN_MDL_B.SumofElements1_c = deltaVelCC;

  /* Sum: '<S143>/Add1' */
  PubIfDecisionPLAN_MDL_B.Add1_n = (PubIfDecisionPLAN_MDL_B.SumofElements1_c -
    PubIfDecisionPLAN_MDL_B.Max1_p) - PubIfDecisionPLAN_MDL_B.Min1_h;

  /* MinMax: '<S143>/Max' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.TappedDelay2[0];

  /* MinMax: '<S143>/Min' */
  temp = PubIfDecisionPLAN_MDL_B.TappedDelay2[0];

  /* MinMax: '<S143>/Max' */
  deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.TappedDelay2[1]);

  /* MinMax: '<S143>/Min' */
  temp = fminf(temp, PubIfDecisionPLAN_MDL_B.TappedDelay2[1]);

  /* MinMax: '<S143>/Max' */
  deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.TappedDelay2[2]);

  /* MinMax: '<S143>/Min' */
  temp = fminf(temp, PubIfDecisionPLAN_MDL_B.TappedDelay2[2]);

  /* MinMax: '<S143>/Max' */
  PubIfDecisionPLAN_MDL_B.Max = deltaVelCC;

  /* MinMax: '<S143>/Min' */
  PubIfDecisionPLAN_MDL_B.Min_o = temp;

  /* Sum: '<S143>/Sum of Elements2' */
  deltaVelCC = PubIfDecisionPLAN_MDL_B.TappedDelay2[0];
  deltaVelCC += PubIfDecisionPLAN_MDL_B.TappedDelay2[1];
  deltaVelCC += PubIfDecisionPLAN_MDL_B.TappedDelay2[2];

  /* Sum: '<S143>/Sum of Elements2' */
  PubIfDecisionPLAN_MDL_B.SumofElements2 = deltaVelCC;

  /* Sum: '<S143>/Add' */
  PubIfDecisionPLAN_MDL_B.Add_oz = (PubIfDecisionPLAN_MDL_B.SumofElements2 -
    PubIfDecisionPLAN_MDL_B.Max) - PubIfDecisionPLAN_MDL_B.Min_o;

  /* SignalConversion generated from: '<S142>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/LineFilter'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport5[0] =
    rtu_RFM_LINE_L1->bIsLineExist;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport5[1] =
    rtu_RFM_LINE_R1->bIsLineExist;

  /* SignalConversion generated from: '<S142>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/LineFilter'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport6[0] =
    rtu_RFM_LINE_L1->dC3V;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport6[1] =
    rtu_RFM_LINE_R1->dC3V;

  /* SignalConversion generated from: '<S142>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/LineFilter'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport7[0] =
    rtu_RFM_LINE_L1->dC2V;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport7[1] =
    rtu_RFM_LINE_R1->dC2V;

  /* SignalConversion generated from: '<S142>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/LineFilter'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport8[0] =
    rtu_RFM_LINE_L1->dC1V;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport8[1] =
    rtu_RFM_LINE_R1->dC1V;

  /* SignalConversion generated from: '<S142>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/LineFilter'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport9[0] =
    rtu_RFM_LINE_L1->dC0V;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport9[1] =
    rtu_RFM_LINE_R1->dC0V;

  /* SignalConversion generated from: '<S142>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/LineFilter'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport18[0] =
    PubIfDecisionPLAN_MDL_B.Gain_a;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport18[1] =
    PubIfDecisionPLAN_MDL_B.Gain1_l;

  /* SignalConversion generated from: '<S142>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/LineFilter'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport19[0] =
    PubIfDecisionPLAN_MDL_B.Add1_n;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport19[1] =
    PubIfDecisionPLAN_MDL_B.Add_oz;

  /* MATLAB Function: '<S111>/LineFilter' incorporates:
   *  Constant: '<S111>/Constant'
   *  Constant: '<S9>/P_LongCtrltCycle6'
   */
  PubIfDecisionPLAN_MDL_B.Line_std[0] = 0.0F;
  PubIfDecisionPLAN_MDL_B.Line_std[1] = 0.0F;
  LaneConf[0] = PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport5[0];
  PubIfDecisionPLAN_MDL_B.A3[0] =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport6[0];
  PubIfDecisionPLAN_MDL_B.A2[0] =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport7[0];
  PubIfDecisionPLAN_MDL_B.A1[0] =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport8[0];
  PubIfDecisionPLAN_MDL_B.A0[0] =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport9[0];
  LaneConf[1] = PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport5[1];
  PubIfDecisionPLAN_MDL_B.A3[1] =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport6[1];
  PubIfDecisionPLAN_MDL_B.A2[1] =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport7[1];
  PubIfDecisionPLAN_MDL_B.A1[1] =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport8[1];
  PubIfDecisionPLAN_MDL_B.A0[1] =
    PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport9[1];
  for (kAcol = 0; kAcol < 2; kAcol++) {
    if (LaneConf[kAcol] == 2) {
      temp = fmaxf(15.0F, 3.0F * *rtu_vxvRefMs);
      xi[0] = 0.05F * temp;
      xi[1] = 0.6F * temp;
      xi[2] = 0.8F * temp;
      xi[3] = temp;
      accelNegSum = xi[0];
      RoadWidth = rt_powf_snf(accelNegSum, 3.0F);
      t_dy_idx_0 = accelNegSum * accelNegSum;
      ToleranceBoxRightOffset = accelNegSum - PubIfDecisionPLAN_MDL_B.dDeltaX;
      distDesThresAccelFadeOut = rt_powf_snf(ToleranceBoxRightOffset, 3.0F);
      P_VSM_DPC_HWALineRearA3Factor = ToleranceBoxRightOffset *
        ToleranceBoxRightOffset;
      deltaVelCC = ToleranceBoxRightOffset;
      accelNegSum = xi[1];
      P_Global_DxvFrontBumper_m_0 = rt_powf_snf(accelNegSum, 3.0F);
      t_dy_idx_1 = accelNegSum * accelNegSum;
      ToleranceBoxRightOffset = accelNegSum - PubIfDecisionPLAN_MDL_B.dDeltaX;
      Error_idx_1 = rt_powf_snf(ToleranceBoxRightOffset, 3.0F);
      VehicleSpd_ms = ToleranceBoxRightOffset * ToleranceBoxRightOffset;
      t = ToleranceBoxRightOffset;
      accelNegSum = xi[2];
      b_y = rt_powf_snf(accelNegSum, 3.0F);
      NearestObjDx_L = accelNegSum * accelNegSum;
      ToleranceBoxRightOffset = accelNegSum - PubIfDecisionPLAN_MDL_B.dDeltaX;
      Error_idx_2 = rt_powf_snf(ToleranceBoxRightOffset, 3.0F);
      NearestObjSpeed_L = ToleranceBoxRightOffset * ToleranceBoxRightOffset;
      RtVehSpdms = ToleranceBoxRightOffset;
      accelNegSum = xi[3];
      NearestObjDx_R = rt_powf_snf(accelNegSum, 3.0F);
      velSubjNegTolerance = accelNegSum * accelNegSum;
      ToleranceBoxRightOffset = accelNegSum - PubIfDecisionPLAN_MDL_B.dDeltaX;
      accelNegSum = rt_powf_snf(ToleranceBoxRightOffset, 3.0F);
      ObjDxRelFinal_FL_1 = ToleranceBoxRightOffset * ToleranceBoxRightOffset;
      temp = PubIfDecisionPLAN_MDL_B.A3[kAcol];
      LineC2Factor = PubIfDecisionPLAN_MDL_B.A2[kAcol];
      jTargStop = PubIfDecisionPLAN_MDL_B.A1[kAcol];
      Jmin = PubIfDecisionPLAN_MDL_B.A0[kAcol];
      ObjVxGnd = PubIfDecisionPLAN_MDL_B.UnitDelay22[kAcol];
      ObjDxRelInitial_Rear = PubIfDecisionPLAN_MDL_B.UnitDelay21[kAcol];
      ObjDxRelFinal_RL = PubIfDecisionPLAN_MDL_B.UnitDelay20[kAcol];
      ObjDxRelFinal_FR = PubIfDecisionPLAN_MDL_B.UnitDelay19[kAcol];
      Error = distDesThresAccelFadeOut;
      Error = (((temp * Error + LineC2Factor * P_VSM_DPC_HWALineRearA3Factor) +
                jTargStop * deltaVelCC) + Jmin) - (((ObjVxGnd * RoadWidth +
        ObjDxRelInitial_Rear * t_dy_idx_0) + ObjDxRelFinal_RL * xi[0]) +
        ObjDxRelFinal_FR);
      distDesThresAccelFadeOut = Error;
      Error = Error_idx_1;
      Error = (((temp * Error + LineC2Factor * VehicleSpd_ms) + jTargStop * t) +
               Jmin) - (((ObjVxGnd * P_Global_DxvFrontBumper_m_0 +
                          ObjDxRelInitial_Rear * t_dy_idx_1) + ObjDxRelFinal_RL *
                         xi[1]) + ObjDxRelFinal_FR);
      Error_idx_1 = Error;
      Error = Error_idx_2;
      Error = (((temp * Error + LineC2Factor * NearestObjSpeed_L) + jTargStop *
                RtVehSpdms) + Jmin) - (((ObjVxGnd * b_y + ObjDxRelInitial_Rear *
        NearestObjDx_L) + ObjDxRelFinal_RL * xi[2]) + ObjDxRelFinal_FR);
      Error_idx_2 = Error;
      Error = accelNegSum;
      Error = (((temp * Error + LineC2Factor * ObjDxRelFinal_FL_1) + jTargStop *
                ToleranceBoxRightOffset) + Jmin) - (((ObjVxGnd * NearestObjDx_R
        + ObjDxRelInitial_Rear * velSubjNegTolerance) + ObjDxRelFinal_RL * xi[3])
        + ObjDxRelFinal_FR);
      accelNegSum = Error;
      temp = distDesThresAccelFadeOut;
      temp += Error_idx_1;
      temp += Error_idx_2;
      temp += accelNegSum;
      temp /= 4.0F;
      xi[0] = fabsf(distDesThresAccelFadeOut - temp);
      xi[1] = fabsf(Error_idx_1 - temp);
      xi[2] = fabsf(Error_idx_2 - temp);
      xi[3] = fabsf(accelNegSum - temp);
      deltaVelCC = 1.29246971E-26F;
      accelNegSum = xi[0];
      if (accelNegSum > 1.29246971E-26F) {
        temp = 1.0F;
        deltaVelCC = accelNegSum;
      } else {
        t = accelNegSum / 1.29246971E-26F;
        temp = t * t;
      }

      accelNegSum = xi[1];
      if (accelNegSum > deltaVelCC) {
        t = deltaVelCC / accelNegSum;
        temp = temp * t * t + 1.0F;
        deltaVelCC = accelNegSum;
      } else {
        t = accelNegSum / deltaVelCC;
        temp += t * t;
      }

      accelNegSum = xi[2];
      if (accelNegSum > deltaVelCC) {
        t = deltaVelCC / accelNegSum;
        temp = temp * t * t + 1.0F;
        deltaVelCC = accelNegSum;
      } else {
        t = accelNegSum / deltaVelCC;
        temp += t * t;
      }

      accelNegSum = xi[3];
      if (accelNegSum > deltaVelCC) {
        t = deltaVelCC / accelNegSum;
        temp = temp * t * t + 1.0F;
        deltaVelCC = accelNegSum;
      } else {
        t = accelNegSum / deltaVelCC;
        temp += t * t;
      }

      temp = deltaVelCC * sqrtf(temp);
      temp /= 1.73205078F;
      PubIfDecisionPLAN_MDL_B.Line_std[kAcol] = temp;
      if ((PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport19[kAcol]
           < rtP_P_LongCtrl_LaneAvailStd) ||
          ((PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport19[kAcol]
            < rtP_P_LongCtrl_LaneAvailStdMax) &&
           (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport18[kAcol]
            < rtP_P_LongCtrl_LaneAvailStdAverage))) {
        PubIfDecisionPLAN_MDL_B.Avail_time[kAcol] = fminf
          (PubIfDecisionPLAN_MDL_B.UnitDelay63[kAcol] + rtP_P_LongCtrl_tCycle,
           150.0F);
        PubIfDecisionPLAN_MDL_B.Avail_dis[kAcol] = fminf(rtP_P_LongCtrl_tCycle *
          *rtu_vxvRefMs + PubIfDecisionPLAN_MDL_B.UnitDelay62[kAcol], 150.0F);
      } else {
        PubIfDecisionPLAN_MDL_B.Avail_time[kAcol] = 0.0F;
        PubIfDecisionPLAN_MDL_B.Avail_dis[kAcol] = 0.0F;
      }
    } else {
      PubIfDecisionPLAN_MDL_B.Avail_time[kAcol] = 0.0F;
      PubIfDecisionPLAN_MDL_B.Avail_dis[kAcol] = 0.0F;
    }
  }

  /* SignalConversion: '<S111>/Signal Conversion' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_L1_Avail_time =
    PubIfDecisionPLAN_MDL_B.Avail_time[0];

  /* RelationalOperator: '<S136>/Compare' incorporates:
   *  Constant: '<S136>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_esu =
    (PubIfDecisionPLAN_MDL_B.LongCtrl_L1_Avail_time >=
     rtP_P_LongCtrl_LaneAvailTime);

  /* SignalConversion: '<S111>/Signal Conversion2' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_L1_Avail_dis =
    PubIfDecisionPLAN_MDL_B.Avail_dis[0];

  /* RelationalOperator: '<S138>/Compare' incorporates:
   *  Constant: '<S138>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ge4 =
    (PubIfDecisionPLAN_MDL_B.LongCtrl_L1_Avail_dis >=
     rtP_P_LongCtrl_LaneAvailDis);

  /* Logic: '<S111>/Logical Operator' */
  PubIfDecisionPLAN_MDL_B.LogicalOperator_d =
    (PubIfDecisionPLAN_MDL_B.Compare_esu && PubIfDecisionPLAN_MDL_B.Compare_ge4);

  /* SignalConversion: '<S111>/Signal Conversion3' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_R1_Avail_dis =
    PubIfDecisionPLAN_MDL_B.Avail_dis[1];

  /* RelationalOperator: '<S139>/Compare' incorporates:
   *  Constant: '<S139>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_dq =
    (PubIfDecisionPLAN_MDL_B.LongCtrl_R1_Avail_dis >=
     rtP_P_LongCtrl_LaneAvailDis);

  /* SignalConversion: '<S111>/Signal Conversion1' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_R1_Avail_time =
    PubIfDecisionPLAN_MDL_B.Avail_time[1];

  /* RelationalOperator: '<S137>/Compare' incorporates:
   *  Constant: '<S137>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_gb =
    (PubIfDecisionPLAN_MDL_B.LongCtrl_R1_Avail_time >=
     rtP_P_LongCtrl_LaneAvailTime);

  /* Logic: '<S111>/Logical Operator1' */
  PubIfDecisionPLAN_MDL_B.LogicalOperator1_o =
    (PubIfDecisionPLAN_MDL_B.Compare_dq && PubIfDecisionPLAN_MDL_B.Compare_gb);

  /* UnitDelay: '<S140>/Delay Input1' */
  PubIfDecisionPLAN_MDL_B.Uk1 = PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE;

  /* RelationalOperator: '<S140>/FixPt Relational Operator' */
  PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator_ix = (*rtu_RFM_UpdateCnt !=
    PubIfDecisionPLAN_MDL_B.Uk1);

  /* UnitDelay: '<S111>/Unit Delay42' */
  PubIfDecisionPLAN_MDL_B.UnitDelay42[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay42_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay43' */
  PubIfDecisionPLAN_MDL_B.UnitDelay43[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay43_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay48' */
  PubIfDecisionPLAN_MDL_B.UnitDelay48[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay48_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay47' */
  PubIfDecisionPLAN_MDL_B.UnitDelay47[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay47_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay46' */
  PubIfDecisionPLAN_MDL_B.UnitDelay46[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay46_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay45' */
  PubIfDecisionPLAN_MDL_B.UnitDelay45[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay45_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay44' */
  PubIfDecisionPLAN_MDL_B.UnitDelay44[0] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay44_DSTATE[0];

  /* UnitDelay: '<S111>/Unit Delay42' */
  PubIfDecisionPLAN_MDL_B.UnitDelay42[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay42_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay43' */
  PubIfDecisionPLAN_MDL_B.UnitDelay43[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay43_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay48' */
  PubIfDecisionPLAN_MDL_B.UnitDelay48[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay48_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay47' */
  PubIfDecisionPLAN_MDL_B.UnitDelay47[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay47_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay46' */
  PubIfDecisionPLAN_MDL_B.UnitDelay46[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay46_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay45' */
  PubIfDecisionPLAN_MDL_B.UnitDelay45[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay45_DSTATE[1];

  /* UnitDelay: '<S111>/Unit Delay44' */
  PubIfDecisionPLAN_MDL_B.UnitDelay44[1] =
    PubIfDecisionPLAN_MDL_DW.UnitDelay44_DSTATE[1];

  /* SignalConversion generated from: '<S141>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/KeepLane'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport5_p[0] =
    PubIfDecisionPLAN_MDL_B.LogicalOperator_d;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport5_p[1] =
    PubIfDecisionPLAN_MDL_B.LogicalOperator1_o;

  /* SignalConversion generated from: '<S141>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/KeepLane'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport6_n[0] =
    rtu_RFM_LINE_L1->dC3V;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport6_n[1] =
    rtu_RFM_LINE_R1->dC3V;

  /* SignalConversion generated from: '<S141>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/KeepLane'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport7_h[0] =
    rtu_RFM_LINE_L1->dC2V;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport7_h[1] =
    rtu_RFM_LINE_R1->dC2V;

  /* SignalConversion generated from: '<S141>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/KeepLane'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport8_e[0] =
    rtu_RFM_LINE_L1->dC1V;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport8_e[1] =
    rtu_RFM_LINE_R1->dC1V;

  /* SignalConversion generated from: '<S141>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/KeepLane'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport9_c[0] =
    rtu_RFM_LINE_L1->dC0V;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport9_c[1] =
    rtu_RFM_LINE_R1->dC0V;

  /* SignalConversion generated from: '<S141>/ SFunction ' incorporates:
   *  MATLAB Function: '<S111>/KeepLane'
   */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport10[0] =
    rtu_RFM_LINE_L1->dDisFront;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport10[1] =
    rtu_RFM_LINE_R1->dDisFront;

  /* MATLAB Function: '<S111>/KeepLane' incorporates:
   *  Constant: '<S111>/Constant4'
   *  Constant: '<S9>/P_LongCtrltCycle6'
   */
  for (JminIni = 0; JminIni < 2; JminIni++) {
    if (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport5_p[JminIni]
        && PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator_ix) {
      PubIfDecisionPLAN_MDL_B.LineValid[JminIni] = true;
      PubIfDecisionPLAN_MDL_B.A3_f[JminIni] =
        PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport6_n[JminIni];
      PubIfDecisionPLAN_MDL_B.A2_n[JminIni] =
        PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport7_h[JminIni];
      PubIfDecisionPLAN_MDL_B.A1_h[JminIni] =
        PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport8_e[JminIni];
      PubIfDecisionPLAN_MDL_B.A0_o[JminIni] =
        PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport9_c[JminIni];
      PubIfDecisionPLAN_MDL_B.dDisFront[JminIni] =
        PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtSFunctionInport10[JminIni];
      PubIfDecisionPLAN_MDL_B.tLost[JminIni] = 0.0F;
      PubIfDecisionPLAN_MDL_B.KeepLineSts[JminIni] = 0U;
    } else {
      PubIfDecisionPLAN_MDL_B.tLost[JminIni] = fminf
        (PubIfDecisionPLAN_MDL_B.UnitDelay44[JminIni] + rtP_P_LongCtrl_tCycle,
         10.0F);
      if (PubIfDecisionPLAN_MDL_B.UnitDelay42[JminIni] &&
          (PubIfDecisionPLAN_MDL_B.tLost[JminIni] < rtP_P_LongCtrl_KeepLaneTime))
      {
        xi[1] = 0.25F * PubIfDecisionPLAN_MDL_B.UnitDelay45[JminIni];
        xi[2] = 0.5F * PubIfDecisionPLAN_MDL_B.UnitDelay45[JminIni];
        xi[3] = PubIfDecisionPLAN_MDL_B.UnitDelay45[JminIni];
        temp = PubIfDecisionPLAN_MDL_B.UnitDelay43[JminIni];
        LineC2Factor = PubIfDecisionPLAN_MDL_B.UnitDelay48[JminIni];
        jTargStop = PubIfDecisionPLAN_MDL_B.UnitDelay47[JminIni];
        Jmin = PubIfDecisionPLAN_MDL_B.UnitDelay46[JminIni];
        ToleranceBoxRightOffset = 0.0F - PubIfDecisionPLAN_MDL_B.dDeltaX;
        distDesThresAccelFadeOut = (((temp * 0.0F + LineC2Factor * 0.0F) +
          jTargStop * 0.0F) + Jmin) - PubIfDecisionPLAN_MDL_B.dDeltaY;
        accelNegSum = ToleranceBoxRightOffset * PubIfDecisionPLAN_MDL_B.CosOfPsi
          + distDesThresAccelFadeOut * PubIfDecisionPLAN_MDL_B.SinOfPsi;
        ToleranceBoxRightOffset = -ToleranceBoxRightOffset *
          PubIfDecisionPLAN_MDL_B.SinOfPsi + distDesThresAccelFadeOut *
          PubIfDecisionPLAN_MDL_B.CosOfPsi;
        xi[0] = accelNegSum;
        deltaVelCC = ToleranceBoxRightOffset;
        accelNegSum = xi[1];
        distDesThresAccelFadeOut = rt_powf_snf(accelNegSum, 3.0F);
        Error_idx_1 = accelNegSum * accelNegSum;
        ToleranceBoxRightOffset = accelNegSum - PubIfDecisionPLAN_MDL_B.dDeltaX;
        distDesThresAccelFadeOut = (((temp * distDesThresAccelFadeOut +
          LineC2Factor * Error_idx_1) + jTargStop * accelNegSum) + Jmin) -
          PubIfDecisionPLAN_MDL_B.dDeltaY;
        accelNegSum = ToleranceBoxRightOffset * PubIfDecisionPLAN_MDL_B.CosOfPsi
          + distDesThresAccelFadeOut * PubIfDecisionPLAN_MDL_B.SinOfPsi;
        ToleranceBoxRightOffset = -ToleranceBoxRightOffset *
          PubIfDecisionPLAN_MDL_B.SinOfPsi + distDesThresAccelFadeOut *
          PubIfDecisionPLAN_MDL_B.CosOfPsi;
        xi[1] = accelNegSum;
        t = ToleranceBoxRightOffset;
        accelNegSum = xi[2];
        distDesThresAccelFadeOut = rt_powf_snf(accelNegSum, 3.0F);
        Error_idx_1 = accelNegSum * accelNegSum;
        ToleranceBoxRightOffset = accelNegSum - PubIfDecisionPLAN_MDL_B.dDeltaX;
        distDesThresAccelFadeOut = (((temp * distDesThresAccelFadeOut +
          LineC2Factor * Error_idx_1) + jTargStop * accelNegSum) + Jmin) -
          PubIfDecisionPLAN_MDL_B.dDeltaY;
        accelNegSum = ToleranceBoxRightOffset * PubIfDecisionPLAN_MDL_B.CosOfPsi
          + distDesThresAccelFadeOut * PubIfDecisionPLAN_MDL_B.SinOfPsi;
        ToleranceBoxRightOffset = -ToleranceBoxRightOffset *
          PubIfDecisionPLAN_MDL_B.SinOfPsi + distDesThresAccelFadeOut *
          PubIfDecisionPLAN_MDL_B.CosOfPsi;
        xi[2] = accelNegSum;
        RtVehSpdms = ToleranceBoxRightOffset;
        accelNegSum = xi[3];
        distDesThresAccelFadeOut = rt_powf_snf(accelNegSum, 3.0F);
        Error_idx_1 = accelNegSum * accelNegSum;
        ToleranceBoxRightOffset = accelNegSum - PubIfDecisionPLAN_MDL_B.dDeltaX;
        distDesThresAccelFadeOut = (((temp * distDesThresAccelFadeOut +
          LineC2Factor * Error_idx_1) + jTargStop * accelNegSum) + Jmin) -
          PubIfDecisionPLAN_MDL_B.dDeltaY;
        accelNegSum = ToleranceBoxRightOffset * PubIfDecisionPLAN_MDL_B.CosOfPsi
          + distDesThresAccelFadeOut * PubIfDecisionPLAN_MDL_B.SinOfPsi;
        ToleranceBoxRightOffset = -ToleranceBoxRightOffset *
          PubIfDecisionPLAN_MDL_B.SinOfPsi + distDesThresAccelFadeOut *
          PubIfDecisionPLAN_MDL_B.CosOfPsi;
        xi[3] = accelNegSum;
        temp = rt_powf_snf(xi[0], 3.0F);
        LineC2Factor = rt_powf_snf(xi[1], 3.0F);
        jTargStop = rt_powf_snf(xi[2], 3.0F);
        Jmin = rt_powf_snf(xi[3], 3.0F);
        MatrixA[0] = temp;
        MatrixA[4] = xi[0] * xi[0];
        MatrixA[8] = xi[0];
        MatrixA[12] = 1.0F;
        MatrixA[1] = LineC2Factor;
        MatrixA[5] = xi[1] * xi[1];
        MatrixA[9] = xi[1];
        MatrixA[13] = 1.0F;
        MatrixA[2] = jTargStop;
        MatrixA[6] = xi[2] * xi[2];
        MatrixA[10] = xi[2];
        MatrixA[14] = 1.0F;
        MatrixA[3] = Jmin;
        MatrixA[7] = xi[3] * xi[3];
        MatrixA[11] = xi[3];
        MatrixA[15] = 1.0F;
        memcpy(&A[0], &MatrixA[0], sizeof(real32_T) << 4U);
        xzgetrf_qoSwvruO(A, ipiv, &kAcol);
        temp = A[0];
        tmpForInput_idx_0 = false;
        temp *= A[5];
        if (ipiv[0] > 1) {
          tmpForInput_idx_0 = true;
        }

        temp *= A[10];
        if (ipiv[1] > 2) {
          tmpForInput_idx_0 = !tmpForInput_idx_0;
        }

        temp *= A[15];
        if (ipiv[2] > 3) {
          tmpForInput_idx_0 = !tmpForInput_idx_0;
        }

        if (tmpForInput_idx_0) {
          temp = -temp;
        }

        if (temp == 0.0F) {
          NearestObjDx_R = 0.0F;
          Jmin = 0.0F;
          ToleranceBoxRightOffset = 0.0F;
          temp = 0.0F;
        } else {
          xzgetrf_qoSwvruO(MatrixA, ipiv, &kAcol);
          xi[0] = deltaVelCC;
          xi[1] = t;
          xi[2] = RtVehSpdms;
          xi[3] = ToleranceBoxRightOffset;
          if (ipiv[0] != 1) {
            temp = xi[0];
            xi[0] = xi[ipiv[0] - 1];
            xi[ipiv[0] - 1] = temp;
          }

          if (ipiv[1] != 2) {
            temp = xi[1];
            xi[1] = xi[ipiv[1] - 1];
            xi[ipiv[1] - 1] = temp;
          }

          if (ipiv[2] != 3) {
            temp = xi[2];
            xi[2] = xi[ipiv[2] - 1];
            xi[ipiv[2] - 1] = temp;
          }

          if (xi[0] != 0.0F) {
            for (i_0 = 1; i_0 + 1 < 5; i_0++) {
              xi[i_0] -= xi[0] * MatrixA[i_0];
            }
          }

          if (xi[1] != 0.0F) {
            for (i_0 = 2; i_0 + 1 < 5; i_0++) {
              xi[i_0] -= MatrixA[i_0 + 4] * xi[1];
            }
          }

          if (xi[2] != 0.0F) {
            for (i_0 = 3; i_0 + 1 < 5; i_0++) {
              xi[i_0] -= MatrixA[i_0 + 8] * xi[2];
            }
          }

          if (xi[3] != 0.0F) {
            xi[3] /= MatrixA[15];
            for (i_0 = 0; i_0 < 3; i_0++) {
              xi[i_0] -= MatrixA[i_0 + 12] * xi[3];
            }
          }

          if (xi[2] != 0.0F) {
            xi[2] /= MatrixA[10];
            for (i_0 = 0; i_0 < 2; i_0++) {
              xi[i_0] -= MatrixA[i_0 + 8] * xi[2];
            }
          }

          if (xi[1] != 0.0F) {
            xi[1] /= MatrixA[5];
            xi[0] -= xi[1] * MatrixA[4];
          }

          if (xi[0] != 0.0F) {
            xi[0] /= MatrixA[0];
          }

          NearestObjDx_R = xi[0];
          Jmin = xi[1];
          ToleranceBoxRightOffset = xi[2];
          temp = xi[3];
        }

        PubIfDecisionPLAN_MDL_B.A3_f[JminIni] = NearestObjDx_R;
        PubIfDecisionPLAN_MDL_B.A2_n[JminIni] = Jmin;
        PubIfDecisionPLAN_MDL_B.A1_h[JminIni] = ToleranceBoxRightOffset;
        PubIfDecisionPLAN_MDL_B.A0_o[JminIni] = temp;
        PubIfDecisionPLAN_MDL_B.LineValid[JminIni] = true;
        PubIfDecisionPLAN_MDL_B.dDisFront[JminIni] =
          PubIfDecisionPLAN_MDL_B.UnitDelay45[JminIni] - *rtu_vxvRefMs *
          rtP_P_LongCtrl_tCycle;
        if (PubIfDecisionPLAN_MDL_B.dDisFront[JminIni] <
            rtP_P_LongCtrl_KeepLaneSurDis) {
          PubIfDecisionPLAN_MDL_B.LineValid[JminIni] = false;
          PubIfDecisionPLAN_MDL_B.KeepLineSts[JminIni] = 1U;
        } else {
          PubIfDecisionPLAN_MDL_B.KeepLineSts[JminIni] = 2U;
        }
      } else {
        PubIfDecisionPLAN_MDL_B.LineValid[JminIni] = false;
        PubIfDecisionPLAN_MDL_B.A3_f[JminIni] = 0.0F;
        PubIfDecisionPLAN_MDL_B.A2_n[JminIni] = 0.0F;
        PubIfDecisionPLAN_MDL_B.A1_h[JminIni] = 0.0F;
        PubIfDecisionPLAN_MDL_B.A0_o[JminIni] = 0.0F;
        PubIfDecisionPLAN_MDL_B.dDisFront[JminIni] = 0.0F;
        PubIfDecisionPLAN_MDL_B.KeepLineSts[JminIni] = 3U;
      }
    }
  }

  /* Memory: '<S109>/Memory' */
  PubIfDecisionPLAN_MDL_B.Memory = PubIfDecisionPLAN_MDL_DW.Memory_PreviousInput;

  /* RelationalOperator: '<S123>/Compare' incorporates:
   *  Constant: '<S123>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_az = (PubIfDecisionPLAN_MDL_B.Memory <=
    rtP_P_LongCtrl_ICaccelThresEnableLine);

  /* Logic: '<S109>/Logical Operator2' */
  PubIfDecisionPLAN_MDL_B.LogicalOperator2_p =
    (PubIfDecisionPLAN_MDL_B.LineValid[0] || PubIfDecisionPLAN_MDL_B.Compare_az);

  /* Logic: '<S109>/Logical Operator3' */
  PubIfDecisionPLAN_MDL_B.LogicalOperator3 = (PubIfDecisionPLAN_MDL_B.Compare_az
    || PubIfDecisionPLAN_MDL_B.LineValid[1]);

  /* Sum: '<S109>/Add' */
  PubIfDecisionPLAN_MDL_B.Add_oa = (uint8_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.LogicalOperator2_p +
    PubIfDecisionPLAN_MDL_B.LogicalOperator3);

  /* RelationalOperator: '<S124>/Compare' incorporates:
   *  Constant: '<S124>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bl3 = (PubIfDecisionPLAN_MDL_B.Add_oa >
    ((uint8_T)0U));

  /* SignalConversion: '<S111>/Signal Conversion4' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_L1_Line_std =
    PubIfDecisionPLAN_MDL_B.Line_std[0];

  /* SignalConversion: '<S111>/Signal Conversion5' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_R1_Line_std =
    PubIfDecisionPLAN_MDL_B.Line_std[1];

  /* MinMax: '<S109>/Max' */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.LongCtrl_L1_Line_std,
                     PubIfDecisionPLAN_MDL_B.LongCtrl_R1_Line_std);

  /* MinMax: '<S109>/Max' */
  PubIfDecisionPLAN_MDL_B.Max_m = deltaVelCC;

  /* Product: '<S109>/Product' */
  PubIfDecisionPLAN_MDL_B.Product_fc = (real32_T)
    PubIfDecisionPLAN_MDL_B.Compare_bl3 * PubIfDecisionPLAN_MDL_B.Max_m;

  /* If: '<S109>/If' */
  if (PubIfDecisionPLAN_MDL_B.DataTypeConversion1 > 0.0) {
    rtAction = 0;

    /* Outputs for IfAction SubSystem: '<S109>/If Action Subsystem' incorporates:
     *  ActionPort: '<S125>/Action Port'
     */
    /* SignalConversion generated from: '<S125>/Vector Concatenate' incorporates:
     *  Constant: '<S125>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.VectorConcatenate[0] = 0.0F;

    /* SignalConversion generated from: '<S125>/Vector Concatenate' */
    PubIfDecisionPLAN_MDL_B.VectorConcatenate[1] = PubIfDecisionPLAN_MDL_B.A3_f
      [0];

    /* SignalConversion generated from: '<S125>/Vector Concatenate1' incorporates:
     *  Constant: '<S125>/Constant1'
     */
    PubIfDecisionPLAN_MDL_B.VectorConcatenate1[0] = 0.0F;

    /* SignalConversion generated from: '<S125>/Vector Concatenate1' */
    PubIfDecisionPLAN_MDL_B.VectorConcatenate1[1] =
      PubIfDecisionPLAN_MDL_B.A3_f[1];

    /* Outputs for Iterator SubSystem: '<S125>/For Each Subsystem' incorporates:
     *  ForEach: '<S129>/For Each'
     */
    for (ForEach_itr_p = 0; ForEach_itr_p < 2; ForEach_itr_p++) {
      /* ForEachSliceSelector generated from: '<S129>/L1dC3V' */
      rtb_ImpSel_InsertedFor_L1dC3V_at_outport_0 =
        PubIfDecisionPLAN_MDL_B.VectorConcatenate[ForEach_itr_p];

      /* ForEachSliceSelector generated from: '<S129>/R1dC3V' */
      rtb_ImpSel_InsertedFor_R1dC3V_at_outport_0 =
        PubIfDecisionPLAN_MDL_B.VectorConcatenate1[ForEach_itr_p];

      /* Chart: '<S129>/CurvatureChar' */
      if (PubIfDecisionPLAN_MDL_B.LogicalOperator2_p &&
          PubIfDecisionPLAN_MDL_B.LogicalOperator3) {
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC2V =
          PubIfDecisionPLAN_MDL_B.A2_n[0];
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC3V =
          rtb_ImpSel_InsertedFor_L1dC3V_at_outport_0;
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC2V =
          PubIfDecisionPLAN_MDL_B.A2_n[1];
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC3V =
          rtb_ImpSel_InsertedFor_R1dC3V_at_outport_0;
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dDisFront =
          PubIfDecisionPLAN_MDL_B.dDisFront[0];
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dDisFront =
          PubIfDecisionPLAN_MDL_B.dDisFront[1];
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].velSubj =
          *rtu_vxvRefMs;

        /* Outputs for Function Call SubSystem: '<S131>/Curvature1Calc' */
        /* Lookup_n-D: '<S132>/1-D Lookup Table1' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].uDLookupTable1 =
          look1_binlcpw(PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                        velSubj, rtCP_uDLookupTable1_bp01Data,
                        rtCP_uDLookupTable1_tableData, 1U);

        /* Product: '<S132>/Product' incorporates:
         *  Constant: '<S132>/Constant1'
         */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product_j =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC2V * 2.0F;

        /* Product: '<S132>/Product1' incorporates:
         *  Constant: '<S132>/Constant2'
         */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product1_l =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC3V * 6.0F;

        /* MinMax: '<S132>/MinMax' */
        absx = fmin(PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                    GetL1dDisFront,
                    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                    uDLookupTable1);

        /* MinMax: '<S132>/MinMax' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax_n = absx;

        /* Product: '<S132>/Product2' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product2_j =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product1_l *
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax_n;

        /* Sum: '<S132>/Add1' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add1_n =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product_j +
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product2_j;

        /* Product: '<S132>/Product3' incorporates:
         *  Constant: '<S132>/Constant8'
         */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product3_g =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC2V * 2.0F;

        /* Product: '<S132>/Product4' incorporates:
         *  Constant: '<S132>/Constant9'
         */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product4_a =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC3V * 6.0F;

        /* MinMax: '<S132>/MinMax1' */
        absx = fmin(PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                    uDLookupTable1,
                    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                    GetR1dDisFront);

        /* MinMax: '<S132>/MinMax1' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax1 = absx;

        /* Product: '<S132>/Product5' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product5_b =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product4_a *
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax1;

        /* Sum: '<S132>/Add3' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add3_c =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product3_g +
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product5_b;

        /* Sum: '<S132>/Add4' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add4 =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add1_n +
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add3_c;

        /* Product: '<S132>/Product6' incorporates:
         *  Constant: '<S132>/Constant11'
         */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product6 =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add4 * 0.5F;

        /* End of Outputs for SubSystem: '<S131>/Curvature1Calc' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].CurvatureIFC =
          (real32_T)PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product6;
      } else if (PubIfDecisionPLAN_MDL_B.LogicalOperator2_p &&
                 (!PubIfDecisionPLAN_MDL_B.LogicalOperator3)) {
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC2V_c =
          PubIfDecisionPLAN_MDL_B.A2_n[0];
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC3V_j =
          rtb_ImpSel_InsertedFor_L1dC3V_at_outport_0;
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dDisFront_f =
          PubIfDecisionPLAN_MDL_B.dDisFront[0];
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].velSubj_a =
          *rtu_vxvRefMs;

        /* Outputs for Function Call SubSystem: '<S131>/Curvature2Calc' */
        /* Lookup_n-D: '<S133>/1-D Lookup Table2' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].uDLookupTable2_c =
          look1_binlcpw(PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                        velSubj_a, rtCP_uDLookupTable2_bp01Data,
                        rtCP_uDLookupTable2_tableData, 1U);

        /* Product: '<S133>/Product' incorporates:
         *  Constant: '<S133>/Constant1'
         */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC2V_c * 2.0F;

        /* Product: '<S133>/Product1' incorporates:
         *  Constant: '<S133>/Constant2'
         */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product1 =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetL1dC3V_j * 6.0F;

        /* MinMax: '<S133>/MinMax' */
        absx = fmin(PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                    GetL1dDisFront_f,
                    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                    uDLookupTable2_c);

        /* MinMax: '<S133>/MinMax' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax_a = absx;

        /* Product: '<S133>/Product2' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product2 =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product1 *
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax_a;

        /* Sum: '<S133>/Add1' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add1 =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product +
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product2;

        /* End of Outputs for SubSystem: '<S131>/Curvature2Calc' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].CurvatureIFC =
          (real32_T)PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add1;
      } else if ((!PubIfDecisionPLAN_MDL_B.LogicalOperator2_p) &&
                 PubIfDecisionPLAN_MDL_B.LogicalOperator3) {
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC2V_b =
          PubIfDecisionPLAN_MDL_B.A2_n[1];
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC3V_n =
          rtb_ImpSel_InsertedFor_R1dC3V_at_outport_0;
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dDisFront_c =
          PubIfDecisionPLAN_MDL_B.dDisFront[1];
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].velSubj_f =
          *rtu_vxvRefMs;

        /* Outputs for Function Call SubSystem: '<S131>/Curvature3Calc' */
        /* Lookup_n-D: '<S134>/1-D Lookup Table2' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].uDLookupTable2 =
          look1_binlcpw(PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                        velSubj_f, rtCP_uDLookupTable2_bp01Data_h,
                        rtCP_uDLookupTable2_tableData_p, 1U);

        /* Product: '<S134>/Product3' incorporates:
         *  Constant: '<S134>/Constant8'
         */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product3 =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC2V_b * 2.0F;

        /* Product: '<S134>/Product4' incorporates:
         *  Constant: '<S134>/Constant9'
         */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product4 =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].GetR1dC3V_n * 6.0F;

        /* MinMax: '<S134>/MinMax' */
        absx = fmin(PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                    GetR1dDisFront_c,
                    PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].
                    uDLookupTable2);

        /* MinMax: '<S134>/MinMax' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax = absx;

        /* Product: '<S134>/Product5' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product5 =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product4 *
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].MinMax;

        /* Sum: '<S134>/Add3' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add3 =
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product3 +
          PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Product5;

        /* End of Outputs for SubSystem: '<S131>/Curvature3Calc' */
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].CurvatureIFC =
          (real32_T)PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].Add3;
      } else {
        PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].CurvatureIFC = 0.0F;
      }

      /* End of Chart: '<S129>/CurvatureChar' */

      /* ForEachSliceAssignment generated from: '<S129>/Curvature' */
      PubIfDecisionPLAN_MDL_B.ImpAsg_InsertedFor_Curvature_at_inport_0[ForEach_itr_p]
        = PubIfDecisionPLAN_MDL_B.CoreSubsys_e[ForEach_itr_p].CurvatureIFC;
    }

    /* End of Outputs for SubSystem: '<S125>/For Each Subsystem' */

    /* Abs: '<S125>/Abs' */
    PubIfDecisionPLAN_MDL_B.Abs_a[0] = fabsf
      (PubIfDecisionPLAN_MDL_B.ImpAsg_InsertedFor_Curvature_at_inport_0[0]);
    PubIfDecisionPLAN_MDL_B.Abs_a[1] = fabsf
      (PubIfDecisionPLAN_MDL_B.ImpAsg_InsertedFor_Curvature_at_inport_0[1]);

    /* SignalConversion: '<S128>/Signal Conversion' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_curvatureNoC3 =
      PubIfDecisionPLAN_MDL_B.Abs_a[0];

    /* SignalConversion: '<S128>/Signal Conversion1' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_curvatureWithC3 =
      PubIfDecisionPLAN_MDL_B.Abs_a[1];

    /* Lookup_n-D: '<S128>/2-D Lookup Table1' incorporates:
     *  SignalConversion: '<S128>/Signal Conversion'
     *  SignalConversion: '<S128>/Signal Conversion1'
     */
    PubIfDecisionPLAN_MDL_B.LongCtrl_coefCurvatureNoC3 = look2_iflf_binlcpw
      (PubIfDecisionPLAN_MDL_B.LongCtrl_curvatureNoC3,
       PubIfDecisionPLAN_MDL_B.LongCtrl_curvatureWithC3,
       rtP_P_LongCtrl_ICcoefCurvatureCharX1,
       rtP_P_LongCtrl_ICcoefCurvatureCharX2, rtP_P_LongCtrl_ICcoefCurvatureCharY,
       rtCP_uDLookupTable1_maxIndex, 4U);

    /* Sum: '<S128>/Add' incorporates:
     *  Constant: '<S128>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.LongCtrl_coefCurvatureWithC3 = 1.0F -
      PubIfDecisionPLAN_MDL_B.LongCtrl_coefCurvatureNoC3;

    /* Product: '<S128>/Product' */
    PubIfDecisionPLAN_MDL_B.Product_h =
      PubIfDecisionPLAN_MDL_B.LongCtrl_curvatureNoC3 *
      PubIfDecisionPLAN_MDL_B.LongCtrl_coefCurvatureNoC3;

    /* Product: '<S128>/Product1' */
    PubIfDecisionPLAN_MDL_B.Product1_mz =
      PubIfDecisionPLAN_MDL_B.LongCtrl_coefCurvatureWithC3 *
      PubIfDecisionPLAN_MDL_B.LongCtrl_curvatureWithC3;

    /* Sum: '<S128>/Add1' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_curvatureForCurveDecelRaw =
      PubIfDecisionPLAN_MDL_B.Product_h + PubIfDecisionPLAN_MDL_B.Product1_mz;

    /* Lookup_n-D: '<S130>/1-D Lookup Table' incorporates:
     *  Product: '<S109>/Product'
     */
    PubIfDecisionPLAN_MDL_B.uDLookupTable_l = look1_iflf_binlxpw
      (PubIfDecisionPLAN_MDL_B.Product_fc, rtCP_uDLookupTable_bp01Data_l,
       rtCP_uDLookupTable_tableData_c, 5U);

    /* S-Function (sfix_udelay): '<S130>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_B.TappedDelay2_p[0] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[0];
    PubIfDecisionPLAN_MDL_B.TappedDelay2_p[1] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[1];
    PubIfDecisionPLAN_MDL_B.TappedDelay2_p[2] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[2];

    /* MinMax: '<S130>/Max' */
    deltaVelCC = PubIfDecisionPLAN_MDL_B.TappedDelay2_p[0];

    /* MinMax: '<S130>/Min' */
    temp = PubIfDecisionPLAN_MDL_B.TappedDelay2_p[0];

    /* MinMax: '<S130>/Max' */
    deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.TappedDelay2_p[1]);

    /* MinMax: '<S130>/Min' */
    temp = fminf(temp, PubIfDecisionPLAN_MDL_B.TappedDelay2_p[1]);

    /* MinMax: '<S130>/Max' */
    deltaVelCC = fmaxf(deltaVelCC, PubIfDecisionPLAN_MDL_B.TappedDelay2_p[2]);

    /* MinMax: '<S130>/Min' */
    temp = fminf(temp, PubIfDecisionPLAN_MDL_B.TappedDelay2_p[2]);

    /* MinMax: '<S130>/Max' */
    PubIfDecisionPLAN_MDL_B.Max_d = deltaVelCC;

    /* MinMax: '<S130>/Min' */
    PubIfDecisionPLAN_MDL_B.Min_h = temp;

    /* Sum: '<S130>/Sum of Elements2' */
    deltaVelCC = PubIfDecisionPLAN_MDL_B.TappedDelay2_p[0];
    deltaVelCC += PubIfDecisionPLAN_MDL_B.TappedDelay2_p[1];
    deltaVelCC += PubIfDecisionPLAN_MDL_B.TappedDelay2_p[2];

    /* Sum: '<S130>/Sum of Elements2' */
    PubIfDecisionPLAN_MDL_B.SumofElements2_i = deltaVelCC;

    /* Sum: '<S130>/Add' */
    PubIfDecisionPLAN_MDL_B.Add_m = (PubIfDecisionPLAN_MDL_B.SumofElements2_i -
      PubIfDecisionPLAN_MDL_B.Max_d) - PubIfDecisionPLAN_MDL_B.Min_h;

    /* UnitDelay: '<S130>/Unit Delay' */
    PubIfDecisionPLAN_MDL_B.UnitDelay_b =
      PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gk;

    /* Sum: '<S130>/Add5' */
    PubIfDecisionPLAN_MDL_B.Add5_c = PubIfDecisionPLAN_MDL_B.Add_m -
      PubIfDecisionPLAN_MDL_B.UnitDelay_b;

    /* Product: '<S130>/Product7' incorporates:
     *  Constant: '<S130>/Constant12'
     */
    PubIfDecisionPLAN_MDL_B.Product7_e = 0.02F /
      PubIfDecisionPLAN_MDL_B.uDLookupTable_l;

    /* Product: '<S130>/Product8' */
    PubIfDecisionPLAN_MDL_B.Product8_f = PubIfDecisionPLAN_MDL_B.Product7_e *
      PubIfDecisionPLAN_MDL_B.Add5_c;

    /* Sum: '<S130>/Add6' */
    PubIfDecisionPLAN_MDL_B.Add6_n = PubIfDecisionPLAN_MDL_B.Product8_f +
      PubIfDecisionPLAN_MDL_B.UnitDelay_b;

    /* Merge: '<S109>/Merge' incorporates:
     *  SignalConversion generated from: '<S125>/Curvature'
     */
    PubIfDecisionPLAN_MDL_B.Merge = PubIfDecisionPLAN_MDL_B.Add6_n;

    /* End of Outputs for SubSystem: '<S109>/If Action Subsystem' */
  } else {
    rtAction = 1;

    /* Outputs for IfAction SubSystem: '<S109>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S126>/Action Port'
     */
    /* Merge: '<S109>/Merge' incorporates:
     *  Constant: '<S126>/Constant17'
     *  SignalConversion generated from: '<S126>/Curvature'
     */
    PubIfDecisionPLAN_MDL_B.Merge = 0.0F;

    /* End of Outputs for SubSystem: '<S109>/If Action Subsystem1' */
  }

  PubIfDecisionPLAN_MDL_DW.If_ActiveSubsystem = rtAction;

  /* End of If: '<S109>/If' */

  /* Abs: '<S109>/Abs1' */
  PubIfDecisionPLAN_MDL_B.Abs1_m = fabsf(PubIfDecisionPLAN_MDL_B.Merge);

  /* UnitDelay: '<S127>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_k =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_a;

  /* Sum: '<S127>/Add5' */
  PubIfDecisionPLAN_MDL_B.Add5 = PubIfDecisionPLAN_MDL_B.Abs1_m -
    PubIfDecisionPLAN_MDL_B.UnitDelay_k;

  /* Product: '<S127>/Product8' */
  PubIfDecisionPLAN_MDL_B.Product8_b = PubIfDecisionPLAN_MDL_ConstB.Product7_o *
    PubIfDecisionPLAN_MDL_B.Add5;

  /* Sum: '<S127>/Add6' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_CurvatureOfRoad =
    PubIfDecisionPLAN_MDL_B.Product8_b + PubIfDecisionPLAN_MDL_B.UnitDelay_k;

  /* MinMax: '<S106>/MinMax5' incorporates:
   *  Constant: '<S106>/Constant7'
   */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.LongCtrl_CurvatureOfRoad, 0.0001F);

  /* MinMax: '<S106>/MinMax5' */
  PubIfDecisionPLAN_MDL_B.MinMax5_f = deltaVelCC;

  /* Lookup_n-D: '<S106>/1-D Lookup Table2' incorporates:
   *  MinMax: '<S106>/MinMax5'
   */
  PubIfDecisionPLAN_MDL_B.uDLookupTable2 = look1_iflf_binlcpw
    (PubIfDecisionPLAN_MDL_B.MinMax5_f, rtP_P_LongCtrl_ICCurvatureLimitSpdXAxis,
     rtP_P_LongCtrl_ICCurvatureLimitSpdYAxis, 9U);

  /* Gain: '<S106>/Gain2' */
  PubIfDecisionPLAN_MDL_B.Gain2_d = 0.277777791F *
    PubIfDecisionPLAN_MDL_B.uDLookupTable2;

  /* Sum: '<S106>/Add' */
  PubIfDecisionPLAN_MDL_B.Add_l = PubIfDecisionPLAN_MDL_B.Gain2_d -
    *rtu_vxvRefMs;

  /* Product: '<S106>/Divide' incorporates:
   *  Constant: '<S106>/Constant2'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelCurvature =
    PubIfDecisionPLAN_MDL_B.Add_l / rtP_P_LongCtrl_ICtDecel;

  /* UnitDelay: '<S113>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_h =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_p;

  /* Sum: '<S113>/Add5' */
  PubIfDecisionPLAN_MDL_B.Add5_h = *rtu_kapTraj -
    PubIfDecisionPLAN_MDL_B.UnitDelay_h;

  /* Product: '<S113>/Product8' */
  PubIfDecisionPLAN_MDL_B.Product8_g = PubIfDecisionPLAN_MDL_ConstB.Product7 *
    PubIfDecisionPLAN_MDL_B.Add5_h;

  /* Sum: '<S113>/Add6' */
  PubIfDecisionPLAN_MDL_B.Add6_l = PubIfDecisionPLAN_MDL_B.Product8_g +
    PubIfDecisionPLAN_MDL_B.UnitDelay_h;

  /* Gain: '<S107>/Gain' */
  PubIfDecisionPLAN_MDL_B.Gain_i = 1.2F * PubIfDecisionPLAN_MDL_B.Add6_l;

  /* Abs: '<S107>/Abs' */
  PubIfDecisionPLAN_MDL_B.Abs_o5 = fabsf(PubIfDecisionPLAN_MDL_B.Gain_i);

  /* MinMax: '<S107>/MinMax3' incorporates:
   *  Constant: '<S107>/Constant1'
   */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.Abs_o5, 0.0001F);

  /* MinMax: '<S107>/MinMax3' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_kapFilt = deltaVelCC;

  /* Lookup_n-D: '<S107>/1-D Lookup Table3' incorporates:
   *  MinMax: '<S107>/MinMax3'
   */
  PubIfDecisionPLAN_MDL_B.uDLookupTable3 = look1_iflf_binlcpw
    (PubIfDecisionPLAN_MDL_B.LongCtrl_kapFilt, rtP_P_LongCtrl_ICKapLimitSpdXAxis,
     rtP_P_LongCtrl_ICKapLimitSpdYAxis, 9U);

  /* Gain: '<S107>/Gain4' */
  PubIfDecisionPLAN_MDL_B.Gain4_a = 0.277777791F *
    PubIfDecisionPLAN_MDL_B.uDLookupTable3;

  /* Sum: '<S107>/Add1' */
  PubIfDecisionPLAN_MDL_B.Add1_b = PubIfDecisionPLAN_MDL_B.Gain4_a -
    *rtu_vxvRefMs;

  /* Product: '<S107>/Divide1' incorporates:
   *  Constant: '<S107>/Constant2'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelKapRun = PubIfDecisionPLAN_MDL_B.Add1_b /
    rtP_P_LongCtrl_ICtDecel;

  /* Lookup_n-D: '<S107>/1-D Lookup Table' */
  PubIfDecisionPLAN_MDL_B.uDLookupTable_p = look1_iflf_binlcpw(*rtu_vxvRefMs,
    rtCP_uDLookupTable_bp01Data_i, rtCP_uDLookupTable_tableData_b, 2U);

  /* Lookup_n-D: '<S107>/1-D Lookup Table1' incorporates:
   *  MinMax: '<S107>/MinMax3'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelKapStartupRaw = look1_iflf_binlcpw
    (PubIfDecisionPLAN_MDL_B.LongCtrl_kapFilt,
     rtP_P_LongCtrl_ICKapLimitAccelXAxis, rtP_P_LongCtrl_ICKapLimitAccelYAxis,
     9U);

  /* MinMax: '<S107>/MinMax1' */
  deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.uDLookupTable_p,
                     PubIfDecisionPLAN_MDL_B.LongCtrl_accelKapStartupRaw);

  /* MinMax: '<S107>/MinMax1' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelKapStartup = deltaVelCC;

  /* MinMax: '<S107>/MinMax4' */
  temp = fminf(PubIfDecisionPLAN_MDL_B.LongCtrl_accelKapRun,
               PubIfDecisionPLAN_MDL_B.LongCtrl_accelKapStartup);

  /* MinMax: '<S107>/MinMax4' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_accelKap = temp;

  /* MATLAB Function: '<S104>/MATLAB Function' */
  if ((PubIfDecisionPLAN_MDL_B.LongCtrl_accelKap <=
       PubIfDecisionPLAN_MDL_B.LongCtrl_accelDesCurvatureMap) &&
      (PubIfDecisionPLAN_MDL_B.LongCtrl_accelKap <=
       PubIfDecisionPLAN_MDL_B.LongCtrl_accelCurvature)) {
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelKap;
    PubIfDecisionPLAN_MDL_B.IC_state = 2U;
  } else {
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC = fminf
      (PubIfDecisionPLAN_MDL_B.LongCtrl_accelDesCurvatureMap,
       PubIfDecisionPLAN_MDL_B.LongCtrl_accelCurvature);
    PubIfDecisionPLAN_MDL_B.IC_state = 1U;
  }

  /* End of MATLAB Function: '<S104>/MATLAB Function' */

  /* Sum: '<S105>/Sum1' incorporates:
   *  Constant: '<S105>/P_LongCtrl_ICdeltaAccelUpperBand'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandIC =
    rtP_P_LongCtrl_ICdeltaAccelUpperBand +
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC;

  /* Sum: '<S105>/Sum2' incorporates:
   *  Constant: '<S105>/P_LongCtrl_ICdeltaAccelLowerBand'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandIC =
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC -
    rtP_P_LongCtrl_ICdeltaAccelLowerBand;

  /* Lookup_n-D: '<S110>/1-D Lookup Table' */
  PubIfDecisionPLAN_MDL_B.uDLookupTable_i = look1_iflf_binlcpw
    (PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC,
     rtP_P_LongCtrl_ICupperJerkICCharXAxis,
     rtP_P_LongCtrl_ICupperJerkICCharYAxis, 3U);

  /* Switch: '<S110>/Switch1' */
  if (*rtu_LONC_VLC_InternalAcc > 0.0F) {
    /* Switch: '<S110>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_o5 = PubIfDecisionPLAN_MDL_B.uDLookupTable_i;
  } else {
    /* Switch: '<S110>/Switch1' incorporates:
     *  Constant: '<S110>/Constant2'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_o5 =
      rtP_P_LongCtrl_ICUpperJerkNegVLCInternalAcc;
  }

  /* End of Switch: '<S110>/Switch1' */

  /* Saturate: '<S110>/Saturation' */
  if (PubIfDecisionPLAN_MDL_B.uDLookupTable_i > 10.0F) {
    /* Saturate: '<S110>/Saturation' */
    PubIfDecisionPLAN_MDL_B.Saturation_g = 10.0F;
  } else if (PubIfDecisionPLAN_MDL_B.uDLookupTable_i <
             rtP_P_LongCtrl_ICKapUpperJerkMin) {
    /* Saturate: '<S110>/Saturation' */
    PubIfDecisionPLAN_MDL_B.Saturation_g = rtP_P_LongCtrl_ICKapUpperJerkMin;
  } else {
    /* Saturate: '<S110>/Saturation' */
    PubIfDecisionPLAN_MDL_B.Saturation_g =
      PubIfDecisionPLAN_MDL_B.uDLookupTable_i;
  }

  /* End of Saturate: '<S110>/Saturation' */

  /* Switch: '<S110>/Switch2' */
  if (*rtu_LONC_VLC_InternalAcc > 0.0F) {
    /* Switch: '<S110>/Switch2' */
    PubIfDecisionPLAN_MDL_B.Switch2_m = PubIfDecisionPLAN_MDL_B.Saturation_g;
  } else {
    /* Switch: '<S110>/Switch2' incorporates:
     *  Constant: '<S110>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch2_m =
      rtP_P_LongCtrl_ICUpperJerkNegVLCInternalAcc;
  }

  /* End of Switch: '<S110>/Switch2' */

  /* MultiPortSwitch: '<S110>/Multiport Switch' */
  if (PubIfDecisionPLAN_MDL_B.IC_state == 1) {
    /* MultiPortSwitch: '<S110>/Multiport Switch' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkIC =
      PubIfDecisionPLAN_MDL_B.Switch1_o5;
  } else {
    /* MultiPortSwitch: '<S110>/Multiport Switch' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkIC =
      PubIfDecisionPLAN_MDL_B.Switch2_m;
  }

  /* End of MultiPortSwitch: '<S110>/Multiport Switch' */

  /* Lookup_n-D: '<S110>/1-D Lookup Table1' */
  PubIfDecisionPLAN_MDL_B.uDLookupTable1_c = look1_iflf_binlcpw
    (PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC,
     rtP_P_LongCtrl_IClowerJerkICCharXAxis,
     rtP_P_LongCtrl_IClowerJerkICCharYAxis, 2U);

  /* Switch: '<S110>/Switch' */
  if (*rtu_LONC_VLC_InternalAcc > 0.0F) {
    /* Switch: '<S110>/Switch' incorporates:
     *  Constant: '<S110>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Switch_f =
      rtP_P_LongCtrl_IClowerJerkPosVLCInternalAccMin;
  } else {
    /* Switch: '<S110>/Switch' incorporates:
     *  Constant: '<S110>/Constant1'
     */
    PubIfDecisionPLAN_MDL_B.Switch_f =
      rtP_P_LongCtrl_IClowerJerkPosVLCInternalAccMax;
  }

  /* End of Switch: '<S110>/Switch' */

  /* MinMax: '<S110>/Min' */
  temp = fminf(PubIfDecisionPLAN_MDL_B.uDLookupTable1_c,
               PubIfDecisionPLAN_MDL_B.Switch_f);

  /* MinMax: '<S110>/Min' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkIC = temp;
  PubIfDecisionPLAN_MDL_B.velOffRampLimit = *rtu_LSM_PilotSPL;
  PubIfDecisionPLAN_MDL_B.vehicleSpd = rtu_PLAN_VCAN_ESP->VehSpd;

  /* Chart: '<S18>/ORD' incorporates:
   *  SubSystem: '<S146>/velDeltaCalc'
   */
  /* Product: '<S151>/Product' incorporates:
   *  Constant: '<S151>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_p = PubIfDecisionPLAN_MDL_B.vehicleSpd * 1.03F;

  /* Sum: '<S151>/Add1' incorporates:
   *  Constant: '<S151>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.Add1_l = PubIfDecisionPLAN_MDL_B.Product_p + 1.3F;

  /* Sum: '<S151>/Add' */
  PubIfDecisionPLAN_MDL_B.Add_dg = (real32_T)
    PubIfDecisionPLAN_MDL_B.velOffRampLimit - PubIfDecisionPLAN_MDL_B.Add1_l;

  /* Product: '<S151>/Product1' incorporates:
   *  Constant: '<S151>/Constant2'
   */
  PubIfDecisionPLAN_MDL_B.velDelta_g = PubIfDecisionPLAN_MDL_B.Add_dg / 3.6F;
  deltaVelCC = PubIfDecisionPLAN_MDL_B.Add1_l;
  tmpForInput_idx_0 = ((*rtu_LSM_PilotSPL < 255) && (*rtu_LSM_PilotSPLDist <
    2000) && (PubIfDecisionPLAN_MDL_B.velDelta_g <
              rtP_P_LongCtrl_ORDvelDeltaEnableThres) && (*rtu_LSM_PilotSPL > 1) &&
                       rtP_P_LongCtrl_ORDdecelEnable);
  if (tmpForInput_idx_0) {
    if (PubIfDecisionPLAN_MDL_B.velDelta_g > 0.0F) {
      PubIfDecisionPLAN_MDL_B.velDelta = PubIfDecisionPLAN_MDL_B.velDelta_g;

      /* Outputs for Function Call SubSystem: '<S146>/accelOffRampPosCalc' */
      /* Product: '<S149>/Product' incorporates:
       *  Constant: '<S149>/Constant'
       */
      PubIfDecisionPLAN_MDL_B.accelOffRamp_ov = PubIfDecisionPLAN_MDL_B.velDelta
        / rtP_P_LongCtrl_ORDtAcceleTimePos;

      /* End of Outputs for SubSystem: '<S146>/accelOffRampPosCalc' */
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD =
        PubIfDecisionPLAN_MDL_B.accelOffRamp_ov;
    } else {
      PubIfDecisionPLAN_MDL_B.velDelta_l = PubIfDecisionPLAN_MDL_B.velDelta_g;

      /* Outputs for Function Call SubSystem: '<S146>/accelOffRampNegCalc' */
      /* Product: '<S148>/Product' incorporates:
       *  Constant: '<S148>/Constant'
       */
      PubIfDecisionPLAN_MDL_B.accelOffRamp_h =
        PubIfDecisionPLAN_MDL_B.velDelta_l / rtP_P_LongCtrl_ORDtAcceleTimeNeg;

      /* End of Outputs for SubSystem: '<S146>/accelOffRampNegCalc' */
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD =
        PubIfDecisionPLAN_MDL_B.accelOffRamp_h;
      PubIfDecisionPLAN_MDL_B.StartVel_m = deltaVelCC;
      PubIfDecisionPLAN_MDL_B.EndVel_b = *rtu_LSM_PilotSPL;
      PubIfDecisionPLAN_MDL_B.accelOffRamp =
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD;

      /* Outputs for Function Call SubSystem: '<S146>/distDesOffRampCalc' */
      /* Abs: '<S150>/Abs' */
      PubIfDecisionPLAN_MDL_B.Abs_l = fabsf(PubIfDecisionPLAN_MDL_B.accelOffRamp);

      /* Product: '<S150>/Product5' incorporates:
       *  Constant: '<S150>/Constant3'
       */
      PubIfDecisionPLAN_MDL_B.Product5 = PubIfDecisionPLAN_MDL_B.StartVel_m /
        3.6F;

      /* Product: '<S150>/Product3' */
      PubIfDecisionPLAN_MDL_B.Product3_i = PubIfDecisionPLAN_MDL_B.Product5 *
        PubIfDecisionPLAN_MDL_B.Product5;

      /* Product: '<S150>/Product6' incorporates:
       *  Constant: '<S150>/Constant4'
       */
      PubIfDecisionPLAN_MDL_B.Product6 = (real32_T)
        PubIfDecisionPLAN_MDL_B.EndVel_b / 3.6F;

      /* Product: '<S150>/Product4' */
      PubIfDecisionPLAN_MDL_B.Product4_h = PubIfDecisionPLAN_MDL_B.Product6 *
        PubIfDecisionPLAN_MDL_B.Product6;

      /* Sum: '<S150>/Add' */
      PubIfDecisionPLAN_MDL_B.Add_p = PubIfDecisionPLAN_MDL_B.Product4_h -
        PubIfDecisionPLAN_MDL_B.Product3_i;

      /* Abs: '<S150>/Abs1' */
      PubIfDecisionPLAN_MDL_B.Abs1_c = fabsf(PubIfDecisionPLAN_MDL_B.Add_p);

      /* Product: '<S150>/Product1' incorporates:
       *  Constant: '<S150>/Constant'
       */
      PubIfDecisionPLAN_MDL_B.Product1_m = PubIfDecisionPLAN_MDL_B.Abs_l * 2.0F;

      /* Product: '<S150>/Product' */
      PubIfDecisionPLAN_MDL_B.distDesOffRamp = PubIfDecisionPLAN_MDL_B.Abs1_c /
        PubIfDecisionPLAN_MDL_B.Product1_m;

      /* End of Outputs for SubSystem: '<S146>/distDesOffRampCalc' */
      temp = PubIfDecisionPLAN_MDL_B.distDesOffRamp;
      if (PubIfDecisionPLAN_MDL_B.distDesOffRamp > *rtu_LSM_PilotSPLDist) {
        PubIfDecisionPLAN_MDL_B.distRamp2Cur = *rtu_LSM_PilotSPLDist;
        PubIfDecisionPLAN_MDL_B.StartVel = deltaVelCC;
        PubIfDecisionPLAN_MDL_B.EndVel = *rtu_LSM_PilotSPL;

        /* Outputs for Function Call SubSystem: '<S146>/accelOffRampDistExceed' */
        /* Product: '<S147>/Product5' incorporates:
         *  Constant: '<S147>/Constant3'
         */
        PubIfDecisionPLAN_MDL_B.Product5_j = PubIfDecisionPLAN_MDL_B.StartVel /
          3.6F;

        /* Product: '<S147>/Product3' */
        PubIfDecisionPLAN_MDL_B.Product3_p = PubIfDecisionPLAN_MDL_B.Product5_j *
          PubIfDecisionPLAN_MDL_B.Product5_j;

        /* Product: '<S147>/Product6' incorporates:
         *  Constant: '<S147>/Constant4'
         */
        PubIfDecisionPLAN_MDL_B.Product6_a = (real32_T)
          PubIfDecisionPLAN_MDL_B.EndVel / 3.6F;

        /* Product: '<S147>/Product4' */
        PubIfDecisionPLAN_MDL_B.Product4_n = PubIfDecisionPLAN_MDL_B.Product6_a *
          PubIfDecisionPLAN_MDL_B.Product6_a;

        /* Sum: '<S147>/Add' */
        PubIfDecisionPLAN_MDL_B.Add_f = PubIfDecisionPLAN_MDL_B.Product4_n -
          PubIfDecisionPLAN_MDL_B.Product3_p;

        /* MinMax: '<S147>/MinMax' incorporates:
         *  Constant: '<S147>/Constant2'
         */
        deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.distRamp2Cur, 10.0F);

        /* MinMax: '<S147>/MinMax' */
        PubIfDecisionPLAN_MDL_B.MinMax_i = deltaVelCC;

        /* Product: '<S147>/Product' incorporates:
         *  Constant: '<S147>/Constant'
         */
        PubIfDecisionPLAN_MDL_B.Product_ew = PubIfDecisionPLAN_MDL_B.MinMax_i *
          2.0F;

        /* Product: '<S147>/Product1' */
        PubIfDecisionPLAN_MDL_B.accelOffRamp_o = PubIfDecisionPLAN_MDL_B.Add_f /
          PubIfDecisionPLAN_MDL_B.Product_ew;

        /* End of Outputs for SubSystem: '<S146>/accelOffRampDistExceed' */
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD =
          PubIfDecisionPLAN_MDL_B.accelOffRamp_o;
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD = fmaxf(-3.5F,
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD);
      }

      tmpForInput_idx_0 = ((temp + 30.0F > *rtu_LSM_PilotSPLDist) ||
                           PubIfDecisionPLAN_MDL_DW.offRampDecelStart);
      if (tmpForInput_idx_0) {
        PubIfDecisionPLAN_MDL_DW.offRampDecelStart = true;
      } else {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD = 16.0F;
      }
    }
  } else {
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD = 16.0F;
    PubIfDecisionPLAN_MDL_DW.offRampDecelStart = false;
  }

  /* Sum: '<S145>/Add' incorporates:
   *  Constant: '<S145>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.upperBandORD =
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD +
    rtP_P_LongCtrl_ORDaccelDevUpperBand;

  /* Sum: '<S145>/Add1' incorporates:
   *  Constant: '<S145>/Constant1'
   */
  PubIfDecisionPLAN_MDL_B.lowerBandORD =
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD -
    rtP_P_LongCtrl_ORDaccelDevLowerBand;

  /* S-Function (sfix_udelay): '<S20>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_B.TappedDelay2_d[0] = rtu_VSM_LON_CTRL->ACCSts;
  PubIfDecisionPLAN_MDL_B.TappedDelay2_d[1] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h0;

  /* Memory: '<S20>/Memory5' */
  PubIfDecisionPLAN_MDL_B.Memory5 =
    PubIfDecisionPLAN_MDL_DW.Memory5_PreviousInput;

  /* MATLAB Function: '<S20>/MATLAB Function' */
  temp = PubIfDecisionPLAN_MDL_B.Memory5;
  if ((PubIfDecisionPLAN_MDL_B.TappedDelay2_d[0] == 7) &&
      ((PubIfDecisionPLAN_MDL_B.TappedDelay2_d[1] == 6) ||
       (PubIfDecisionPLAN_MDL_B.TappedDelay2_d[1] == 9))) {
    temp = 76.0F;
  }

  if (temp > 0.0F) {
    PubIfDecisionPLAN_MDL_B.ACCModeSts = 6U;
    PubIfDecisionPLAN_MDL_B.CounterK1 = fmaxf(0.0F, temp - 1.0F);
  } else {
    PubIfDecisionPLAN_MDL_B.ACCModeSts = PubIfDecisionPLAN_MDL_B.TappedDelay2_d
      [0];
    PubIfDecisionPLAN_MDL_B.CounterK1 = 0.0F;
  }

  /* End of MATLAB Function: '<S20>/MATLAB Function' */

  /* S-Function (sfix_udelay): '<S22>/Tapped Delay' */
  PubIfDecisionPLAN_MDL_B.TappedDelay_o[0] = PubIfDecisionPLAN_MDL_B.ACCModeSts;
  PubIfDecisionPLAN_MDL_B.TappedDelay_o[1] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay_X_b;

  /* S-Function (sfix_udelay): '<S22>/Tapped Delay1' */
  memcpy(&PubIfDecisionPLAN_MDL_B.VlcInternalAccK20[0],
         &PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_i[0], 19U * sizeof(real32_T));

  /* Chart: '<S22>/Chart' incorporates:
   *  Constant: '<S9>/P_LongCtrltCycle'
   */
  if ((PubIfDecisionPLAN_MDL_B.TappedDelay_o[0] == 3) &&
      (PubIfDecisionPLAN_MDL_B.TappedDelay_o[1] != 3)) {
    PubIfDecisionPLAN_MDL_DW.tNoneActive2Active = 0.4F;
  } else {
    PubIfDecisionPLAN_MDL_DW.tNoneActive2Active = fmaxf(0.0F,
      PubIfDecisionPLAN_MDL_DW.tNoneActive2Active - rtP_P_LongCtrl_tCycle);
  }

  if (PubIfDecisionPLAN_MDL_B.TappedDelay_o[0] != 3) {
    PubIfDecisionPLAN_MDL_DW.tNoneActive2Active = 0.0F;
  }

  PubIfDecisionPLAN_MDL_B.LongCtrl_VlcInternalAccK20 = (0.4F -
    PubIfDecisionPLAN_MDL_DW.tNoneActive2Active) *
    PubIfDecisionPLAN_MDL_B.VlcInternalAccK20[0] / 0.4F +
    PubIfDecisionPLAN_MDL_DW.tNoneActive2Active / 0.4F * *rtu_axvRefMs2;

  /* End of Chart: '<S22>/Chart' */

  /* UnitDelay: '<S9>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_bq =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_hu;

  /* UnitDelay: '<S178>/Delay Input1' */
  PubIfDecisionPLAN_MDL_B.Uk1_m = PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_o;

  /* RelationalOperator: '<S178>/FixPt Relational Operator' */
  PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator_o = (*rtu_TOS_UpdateCnt !=
    PubIfDecisionPLAN_MDL_B.Uk1_m);

  /* Outputs for Enabled SubSystem: '<S9>/FollowCtrl' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator_o) {
    /* Lookup_n-D: '<S47>/1-D Lookup Table' incorporates:
     *  Switch: '<S182>/Switch1'
     */
    PubIfDecisionPLAN_MDL_B.LongCtrl_AccelSupreReq = look1_iflf_binlxpw
      (PubIfDecisionPLAN_MDL_B.LongCtrl_ALC_dangerLevel,
       rtP_P_LongCtrl_ALCAccLimitByDangerXAxis,
       rtP_P_LongCtrl_ALCAccLimitByDangerYAxis, 4U);

    /* S-Function (sfix_udelay): '<S48>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_B.TappedDelay_i[0] = rtu_TOS_ACCP0->IDP0;
    PubIfDecisionPLAN_MDL_B.TappedDelay_i[1] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay_X_o;

    /* S-Function (sfix_udelay): '<S49>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_B.TappedDelay_a[0] = rtu_TOS_ACCP0->IDP0;
    PubIfDecisionPLAN_MDL_B.TappedDelay_a[1] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay_X_m;

    /* S-Function (sfix_udelay): '<S49>/Tapped Delay1' */
    PubIfDecisionPLAN_MDL_B.TappedDelay1_o[0] = rtu_TOS_ACCP2->IDP2;
    PubIfDecisionPLAN_MDL_B.TappedDelay1_o[1] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_d;

    /* S-Function (sfix_udelay): '<S49>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_B.TappedDelay2_j[0] = rtu_TOS_ACCP3->IDP3;
    PubIfDecisionPLAN_MDL_B.TappedDelay2_j[1] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_n;

    /* Chart: '<S49>/accelTargAbsFilter' */
    if (PubIfDecisionPLAN_MDL_B.TappedDelay_a[0] != 0) {
      temp = rtu_TOS_ACCP0->axAbsGroundP0;
      if (PubIfDecisionPLAN_MDL_B.TappedDelay_a[0] ==
          PubIfDecisionPLAN_MDL_B.TappedDelay_a[1]) {
        temp = PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP0K1;
      } else if (PubIfDecisionPLAN_MDL_B.TappedDelay_a[0] ==
                 PubIfDecisionPLAN_MDL_B.TappedDelay1_o[1]) {
        temp = PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP2K1;
      } else {
        if (PubIfDecisionPLAN_MDL_B.TappedDelay_a[0] ==
            PubIfDecisionPLAN_MDL_B.TappedDelay2_j[1]) {
          temp = PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP3K1;
        }
      }

      deltaVelCC = 0.5F;
      t = rtu_TOS_ACCP0->axAbsGroundP0 - temp;
      if (t < 0.0F) {
        PubIfDecisionPLAN_MDL_B.diffAccelCur2K1P0 = t;

        /* Outputs for Function Call SubSystem: '<S63>/tFiltP0Calc' */
        /* Lookup_n-D: '<S64>/1-D Lookup Table' */
        PubIfDecisionPLAN_MDL_B.tFiltP0 = look1_iflf_binlcpw
          (PubIfDecisionPLAN_MDL_B.diffAccelCur2K1P0,
           rtP_P_LongCtrl_FollowTFiltP0XAxis, rtP_P_LongCtrl_FollowTFiltP0YAxis,
           1U);

        /* End of Outputs for SubSystem: '<S63>/tFiltP0Calc' */
        deltaVelCC = PubIfDecisionPLAN_MDL_B.tFiltP0;
      }

      PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt =
        (rtu_TOS_ACCP0->axAbsGroundP0 - temp) * 0.05F / deltaVelCC + temp;
    } else {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt = 0.0F;
    }

    if (PubIfDecisionPLAN_MDL_B.TappedDelay1_o[0] != 0) {
      temp = (rtu_TOS_ACCP2->axAbsGroundP2 -
              PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP2K1) * 0.05F / 0.5F +
        PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP2K1;
    } else {
      temp = 0.0F;
    }

    if (PubIfDecisionPLAN_MDL_B.TappedDelay2_j[0] != 0) {
      deltaVelCC = (rtu_TOS_ACCP3->axAbsGroundP3 -
                    PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP3K1) * 0.05F /
        0.5F + PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP3K1;
    } else {
      deltaVelCC = 0.0F;
    }

    PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP0K1 =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt;
    PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP2K1 = temp;
    PubIfDecisionPLAN_MDL_DW.accelTargAbsFiltP3K1 = deltaVelCC;

    /* End of Chart: '<S49>/accelTargAbsFilter' */

    /* Chart: '<S48>/AccelTargAbsEnableJudge' incorporates:
     *  Constant: '<S48>/P_LongCtrl_FollowaccelTargAbsEnableNegJerk'
     *  Constant: '<S48>/P_LongCtrl_FollowaccelTargAbsEnableNegMax'
     *  Constant: '<S48>/P_LongCtrl_FollowaccelTargAbsEnablePosJerk'
     *  Constant: '<S48>/P_LongCtrl_FollowaccelTargAbsEnableRangeMax'
     *  Constant: '<S48>/P_LongCtrl_FollowaccelTargAbsExitNegMin'
     *  Constant: '<S48>/P_LongCtrl_FollowdistTargRelEnableAccelTargAbsThres'
     *  Constant: '<S9>/FollowtCycle'
     */
    if (PubIfDecisionPLAN_MDL_B.TappedDelay_i[0] !=
        PubIfDecisionPLAN_MDL_B.TappedDelay_i[1]) {
      PubIfDecisionPLAN_MDL_DW.accelTargAbsK1 =
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt;
    }

    tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt <
                          rtP_P_LongCtrl_FollowaccelTargAbsEnableNegMax) ||
                         ((rtu_TOS_ACCP0->rangeP0 <
      rtP_P_LongCtrl_FollowdistTargRelEnableAccelTargAbsThres) &&
                          (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt <
      rtP_P_LongCtrl_FollowaccelTargAbsEnableRangeMax)));
    PubIfDecisionPLAN_MDL_DW.accelTargAbsEnableNegFlag = (tmpForInput_idx_0 ||
      PubIfDecisionPLAN_MDL_DW.accelTargAbsEnableNegFlag);
    tmpForInput_idx_0 = (PubIfDecisionPLAN_MDL_DW.accelTargAbsEnableNegFlag &&
                         (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt <
                          rtP_P_LongCtrl_FollowaccelTargAbsExitNegMin));
    if (tmpForInput_idx_0) {
      if (PubIfDecisionPLAN_MDL_DW.accelTargAbsK1 >=
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable = fmaxf
          (rtP_P_LongCtrl_FollowaccelTargAbsEnableNegJerk * 0.05F +
           PubIfDecisionPLAN_MDL_DW.accelTargAbsK1,
           PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt);
      } else {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable = fminf
          (rtP_P_LongCtrl_FollowaccelTargAbsEnablePosJerk * 0.05F +
           PubIfDecisionPLAN_MDL_DW.accelTargAbsK1,
           PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt);
      }
    }

    tmpForInput_idx_0 = (PubIfDecisionPLAN_MDL_DW.accelTargAbsEnableNegFlag &&
                         (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt >
                          rtP_P_LongCtrl_FollowaccelTargAbsExitNegMin));
    if (tmpForInput_idx_0) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable = fminf
        (rtP_P_LongCtrl_FollowaccelTargAbsEnablePosJerk * 0.05F +
         PubIfDecisionPLAN_MDL_DW.accelTargAbsK1, 0.0F);
      PubIfDecisionPLAN_MDL_DW.accelTargAbsEnableNegFlag =
        ((!(PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable == 0.0F)) &&
         PubIfDecisionPLAN_MDL_DW.accelTargAbsEnableNegFlag);
    }

    PubIfDecisionPLAN_MDL_DW.accelTargAbsK1 =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable;

    /* End of Chart: '<S48>/AccelTargAbsEnableJudge' */

    /* SignalConversion: '<S47>/Signal Copy' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_laneChangeEnable =
      PubIfDecisionPLAN_MDL_B.LongCtrl_ALC_laneChangeEnable;

    /* SignalConversion: '<S47>/Signal Copy1' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_dangerLevel =
      PubIfDecisionPLAN_MDL_B.LongCtrl_ALC_dangerLevel;

    /* Chart: '<S47>/AccelSupression' incorporates:
     *  Constant: '<S47>/Constant'
     *  Constant: '<S47>/Constant2'
     *  Constant: '<S47>/Constant3'
     *  Constant: '<S47>/Constant4'
     */
    if (PubIfDecisionPLAN_MDL_DW.is_active_c63_PubIfDecisionPLAN_MDL == 0U) {
      PubIfDecisionPLAN_MDL_DW.is_active_c63_PubIfDecisionPLAN_MDL = 1U;
      PubIfDecisionPLAN_MDL_DW.is_c63_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_NoAutoLaneChange;
      PubIfDecisionPLAN_MDL_B.LongCtrl_distAccelSupressionEnter =
        rtu_TOS_ACCP0->vxRelP0 * rtu_TOS_ACCP0->vxRelP0 / (fmaxf(0.1F,
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable -
        rtP_P_LongCtrl_FollowaccelMinAccelSupressionEnter) * 2.0F) +
        *rtu_vxvRefMs * 0.4F;
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelSupressionEnable = false;
    } else if (PubIfDecisionPLAN_MDL_DW.is_c63_PubIfDecisionPLAN_MDL == 1) {
      tmpForInput_idx_0 = ((!PubIfDecisionPLAN_MDL_B.LongCtrl_laneChangeEnable) ||
                           (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable <=
                            -2.0F) || (rtu_TOS_ACCP0->rangeP0 <=
        PubIfDecisionPLAN_MDL_B.LongCtrl_distAccelSupressionExit) ||
                           (PubIfDecisionPLAN_MDL_B.LongCtrl_dangerLevel >
                            rtP_P_LongCtrl_DangerLevelExitThrd));
      if (tmpForInput_idx_0) {
        PubIfDecisionPLAN_MDL_DW.is_c63_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_NoAutoLaneChange;
        PubIfDecisionPLAN_MDL_B.LongCtrl_distAccelSupressionEnter =
          rtu_TOS_ACCP0->vxRelP0 * rtu_TOS_ACCP0->vxRelP0 / (fmaxf(0.1F,
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable -
          rtP_P_LongCtrl_FollowaccelMinAccelSupressionEnter) * 2.0F) +
          *rtu_vxvRefMs * 0.4F;
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelSupressionEnable = false;
      } else {
        PubIfDecisionPLAN_MDL_B.LongCtrl_distAccelSupressionExit =
          rtu_TOS_ACCP0->vxRelP0 * rtu_TOS_ACCP0->vxRelP0 / (fmaxf(0.1F,
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable -
          rtP_P_LongCtrl_FollowaccelMinAccelSupressionExit) * 2.0F) +
          *rtu_vxvRefMs * 0.4F;
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelSupressionEnable = true;
      }
    } else {
      /* case IN_NoAutoLaneChange: */
      tmpForInput_idx_0 = (PubIfDecisionPLAN_MDL_B.LongCtrl_laneChangeEnable &&
                           (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable >
                            -2.0F) && (rtu_TOS_ACCP0->rangeP0 >
        PubIfDecisionPLAN_MDL_B.LongCtrl_distAccelSupressionEnter) &&
                           (PubIfDecisionPLAN_MDL_B.LongCtrl_dangerLevel <=
                            rtP_P_LongCtrl_DangerLevelEnterThrd));
      if (tmpForInput_idx_0) {
        PubIfDecisionPLAN_MDL_DW.is_c63_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_AutoLaneChange;
        PubIfDecisionPLAN_MDL_B.LongCtrl_distAccelSupressionExit =
          rtu_TOS_ACCP0->vxRelP0 * rtu_TOS_ACCP0->vxRelP0 / (fmaxf(0.1F,
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable -
          rtP_P_LongCtrl_FollowaccelMinAccelSupressionExit) * 2.0F) +
          *rtu_vxvRefMs * 0.4F;
      } else {
        PubIfDecisionPLAN_MDL_B.LongCtrl_distAccelSupressionEnter =
          rtu_TOS_ACCP0->vxRelP0 * rtu_TOS_ACCP0->vxRelP0 / (fmaxf(0.1F,
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable -
          rtP_P_LongCtrl_FollowaccelMinAccelSupressionEnter) * 2.0F) +
          *rtu_vxvRefMs * 0.4F;
      }
    }

    /* End of Chart: '<S47>/AccelSupression' */

    /* Sum: '<S59>/Subtract3' */
    PubIfDecisionPLAN_MDL_B.Subtract3 = rtu_TOS_ACCP0->vxRelP0 + *rtu_vxvRefMs;

    /* MinMax: '<S59>/MinMax' incorporates:
     *  Constant: '<S59>/Constant2'
     */
    deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.Subtract3, 0.0F);

    /* MinMax: '<S59>/MinMax' */
    PubIfDecisionPLAN_MDL_B.MinMax_j = deltaVelCC;

    /* MATLAB Function: '<S59>/VelTarAbsTerminateCalc' */
    for (JminIni = 0; JminIni < 20; JminIni++) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[JminIni] = fmaxf
        (0.0F, ((((real32_T)JminIni + 1.0F) + 0.5F) - 1.0F) *
         PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable +
         PubIfDecisionPLAN_MDL_B.MinMax_j);
      if (PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[JminIni] <
          0.1) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[JminIni] = 0.0F;
      }
    }

    /* End of MATLAB Function: '<S59>/VelTarAbsTerminateCalc' */

    /* Lookup_n-D: '<S52>/DesireDistance3' */
    bpIdx = plook_u32u8ff_binc(rtu_VSM_LON_CTRL->ACC_TimeGapSet,
      rtCP_DesireDistance3_bp01Data, 3U, &temp);
    fractions[0U] = temp;
    bpIndices[0U] = bpIdx;
    for (JminIni = 0; JminIni < 20; JminIni++) {
      deltaVelCC =
        PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[JminIni];
      bpIdx = plook_u32ff_binc(deltaVelCC, rtP_P_LongCtrl_FollowdistDesX2Axis,
        5U, &temp);
      fractions[1U] = temp;
      bpIndices[1U] = bpIdx;
      PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlan[JminIni] = intrp2d_fu32fl_pw
        (bpIndices, fractions, rtP_P_LongCtrl_FollowdistDesYAxis, 4U);
    }

    /* End of Lookup_n-D: '<S52>/DesireDistance3' */

    /* Gain: '<S52>/Gain9' */
    PubIfDecisionPLAN_MDL_B.Gain9_e = 3.6F * rtu_TOS_ACCP0->vxRelP0;

    /* Constant: '<S52>/Constant36' */
    PubIfDecisionPLAN_MDL_B.MatrixConcatenate1[0] =
      rtP_P_LongCtrl_FollowDistDesCompensionVelRelThresMin;

    /* Constant: '<S52>/Constant37' */
    PubIfDecisionPLAN_MDL_B.MatrixConcatenate1[1] =
      rtP_P_LongCtrl_FollowDistDesCompensionVelRelThresMax;

    /* Sum: '<S52>/Subtract1' */
    PubIfDecisionPLAN_MDL_B.Subtract1_k = rtu_TOS_ACCP0->vxRelP0 + *rtu_vxvRefMs;

    /* Lookup_n-D: '<S52>/DesireDistance1' incorporates:
     *  Sum: '<S52>/Subtract1'
     */
    PubIfDecisionPLAN_MDL_B.DesireDistance1 = look2_iu8fbfflftf_binlcpw
      (rtu_VSM_LON_CTRL->ACC_TimeGapSet, PubIfDecisionPLAN_MDL_B.Subtract1_k,
       rtCP_DesireDistance1_bp01Data, rtP_P_LongCtrl_FollowdistDesX2Axis,
       rtP_P_LongCtrl_FollowdistDesYAxis, rtCP_DesireDistance1_maxIndex, 4U);

    /* Sum: '<S52>/Subtract2' */
    PubIfDecisionPLAN_MDL_B.MatrixConcatenate2[0] =
      PubIfDecisionPLAN_MDL_B.DesireDistance1 - rtu_TOS_ACCP0->rangeP0;

    /* Lookup_n-D: '<S52>/1-D Lookup Table' */
    PubIfDecisionPLAN_MDL_B.MatrixConcatenate2[1] = look1_iflf_binlcpw
      (*rtu_vxvRefMs, rtP_P_LongCtrl_FollowdistDesCompensionXAxis,
       rtP_P_LongCtrl_FollowdistDesCompensionYAxis, 1U);

    /* S-Function (sfix_look1_dyn): '<S52>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S52>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real32_T_real32_T( &(PubIfDecisionPLAN_MDL_B.LookupTableDynamic),
      &PubIfDecisionPLAN_MDL_B.MatrixConcatenate2[0],
      PubIfDecisionPLAN_MDL_B.Gain9_e,
      &PubIfDecisionPLAN_MDL_B.MatrixConcatenate1[0], 1U);

    /* Sum: '<S52>/Subtract5' */
    PubIfDecisionPLAN_MDL_B.Subtract5 = rtu_TOS_ACCP0->rangeP0 +
      PubIfDecisionPLAN_MDL_B.LookupTableDynamic;
    for (i_2 = 0; i_2 < 20; i_2++) {
      /* MinMax: '<S52>/Min' incorporates:
       *  Lookup_n-D: '<S52>/DesireDistance3'
       */
      temp = fminf(PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlan[i_2],
                   PubIfDecisionPLAN_MDL_B.Subtract5);

      /* MinMax: '<S52>/Min' */
      PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[i_2] = temp;
    }

    /* Lookup_n-D: '<S53>/1-D Lookup Table' */
    PubIfDecisionPLAN_MDL_B.uDLookupTable_a = look1_iflf_binlcpw(*rtu_vxvRefMs,
      rtCP_uDLookupTable_bp01Data_b, rtCP_uDLookupTable_tableData_n, 1U);

    /* MATLAB Function: '<S53>/DistRelPlanTerminateCalc2' incorporates:
     *  MinMax: '<S52>/Min'
     */
    temp = PubIfDecisionPLAN_MDL_B.uDLookupTable_a;
    if (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable < 0.0F) {
      deltaVelCC = -PubIfDecisionPLAN_MDL_B.MinMax_j / fminf(-0.01F,
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable);
    } else {
      deltaVelCC = 100.0F;
    }

    jTargStop = truncf(deltaVelCC + 0.5F);
    if ((jTargStop >= 0.0F) && (jTargStop <= 19.0F)) {
      Jmin = 0.5F * PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable *
        (deltaVelCC * deltaVelCC) + PubIfDecisionPLAN_MDL_B.MinMax_j *
        deltaVelCC;
    } else {
      Jmin = 0.0F;
    }

    for (JminIni = 0; JminIni < 20; JminIni++) {
      if (*rtu_vxvRefMs < 5.0F) {
        t = *rtu_vxvRefMs -
          PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[JminIni];
        t = t * t / 6.0F;
      } else {
        t = 0.0F;
      }

      temp = fmaxf(temp, t);
      if ((real_T)JminIni + 1.0 <= jTargStop) {
        PubIfDecisionPLAN_MDL_B.Dterminate[JminIni] = fmaxf(temp, (((real32_T)
          ((((real_T)JminIni + 1.0) + 0.5) - 1.0) *
          PubIfDecisionPLAN_MDL_B.MinMax_j + rtu_TOS_ACCP0->rangeP0) + (real32_T)
          ((((real_T)JminIni + 1.0) + 0.5) - 1.0) * (real32_T)((((real_T)JminIni
          + 1.0) + 0.5) - 1.0) * (0.5F *
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable)) -
          PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[JminIni]);
      } else {
        PubIfDecisionPLAN_MDL_B.Dterminate[JminIni] = fmaxf(temp,
          (rtu_TOS_ACCP0->rangeP0 + Jmin) -
          PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[JminIni]);
      }
    }

    PubIfDecisionPLAN_MDL_B.tTargStop = deltaVelCC;
    PubIfDecisionPLAN_MDL_B.distTargPlan = Jmin;

    /* End of MATLAB Function: '<S53>/DistRelPlanTerminateCalc2' */

    /* S-Function (sfix_udelay): '<S58>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_B.TappedDelay_e[0] = rtu_TOS_ACCP0->IDP0;
    PubIfDecisionPLAN_MDL_B.TappedDelay_e[1] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay_X_j;

    /* Product: '<S101>/Product1' incorporates:
     *  Constant: '<S101>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Product1_j = rtu_TOS_ACCP0->rangeP0 * 0.7F;

    /* MinMax: '<S101>/MinMax1' incorporates:
     *  Constant: '<S101>/Constant2'
     */
    temp = fminf(PubIfDecisionPLAN_MDL_B.Product1_j, 4.0F);

    /* MinMax: '<S101>/MinMax1' */
    PubIfDecisionPLAN_MDL_B.MinMax1 = temp;

    /* Sum: '<S101>/Add' */
    PubIfDecisionPLAN_MDL_B.Add_a = rtu_TOS_ACCP0->rangeP0 -
      PubIfDecisionPLAN_MDL_B.MinMax1;

    /* MinMax: '<S101>/MinMax' incorporates:
     *  Constant: '<S101>/Constant1'
     */
    deltaVelCC = fmaxf(0.1F, *rtu_vxvRefMs);

    /* MinMax: '<S101>/MinMax' */
    PubIfDecisionPLAN_MDL_B.MinMax_k = deltaVelCC;

    /* Product: '<S101>/Product' */
    PubIfDecisionPLAN_MDL_B.Product_m2 = PubIfDecisionPLAN_MDL_B.Add_a /
      PubIfDecisionPLAN_MDL_B.MinMax_k;

    /* Lookup_n-D: '<S58>/1-D Lookup Table1' incorporates:
     *  Product: '<S101>/Product'
     */
    PubIfDecisionPLAN_MDL_B.uDLookupTable1_g = look1_iflf_binlcpw
      (PubIfDecisionPLAN_MDL_B.Product_m2, rtP_P_LongCtrl_FollowWdCoefXAxis,
       rtP_P_LongCtrl_FollowWdCoefYAxis, 2U);

    /* Lookup_n-D: '<S52>/DesireDistance2' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur = look2_iu8fbfflftf_binlcpw
      (rtu_VSM_LON_CTRL->ACC_TimeGapSet, *rtu_vxvRefMs,
       rtCP_DesireDistance2_bp01Data, rtP_P_LongCtrl_FollowdistDesX2Axis,
       rtP_P_LongCtrl_FollowdistDesYAxis, rtCP_DesireDistance2_maxIndex, 4U);

    /* MATLAB Function: '<S58>/CoefCalc' */
    if ((rtu_TOS_ACCP0->vxRelP0 < -0.2) && (rtu_TOS_ACCP0->rangeP0 <
         PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur * 0.9F) && (*rtu_vxvRefMs <
         5.0F)) {
      temp = rtP_P_LongCtrl_FollowcoefDistEnlargeDecToStop;
      deltaVelCC = rtP_P_LongCtrl_FollowcoefVelEnlargeDecToStop;
    } else if ((PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur <
                rtu_TOS_ACCP0->rangeP0) && (*rtu_vxvRefMs < 5.0F) &&
               (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt > 0.5F)) {
      if (*rtu_vxvRefMs < 0.0F) {
        temp = 5.0F;
        deltaVelCC = 5.0F;
      } else {
        temp = -*rtu_vxvRefMs + 5.0F;
        deltaVelCC = -*rtu_vxvRefMs + 5.0F;
      }
    } else {
      temp = 1.0F;
      deltaVelCC = 1.0F;
    }

    t = rtu_TOS_ACCP0->rangeP0 / PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur;
    if ((t > 1.5F) && (*rtu_vxvRefMs > 5.0F)) {
      if (*rtu_vxvRefMs > 10.0F) {
        RtVehSpdms = 0.5F;
      } else {
        RtVehSpdms = (*rtu_vxvRefMs - 5.0F) * -0.1F + 1.0F;
      }

      if (t > 2.0F) {
        temp = 0.3F;
        deltaVelCC = 0.3F;
      } else {
        temp = (t - 1.5F) * -1.4F + 1.0F;
        deltaVelCC = (t - 1.5F) * -1.4F + 1.0F;
      }

      temp *= RtVehSpdms;
      deltaVelCC *= RtVehSpdms;
    }

    if ((rtu_TOS_ACCP0->vxRelP0 > 2.0F) && (*rtu_vxvRefMs > 5.0F)) {
      if (rtu_TOS_ACCP0->vxRelP0 > 5.0F) {
        RtVehSpdms = 0.3F;
      } else {
        RtVehSpdms = (rtu_TOS_ACCP0->vxRelP0 - 1.0F) * -0.175F + 1.0F;
      }

      temp *= RtVehSpdms;
      deltaVelCC *= RtVehSpdms;
    }

    PubIfDecisionPLAN_MDL_B.coefDistEnlarge = temp;
    PubIfDecisionPLAN_MDL_B.coefVelEnlarge = deltaVelCC;

    /* End of MATLAB Function: '<S58>/CoefCalc' */

    /* Product: '<S58>/Product2' */
    PubIfDecisionPLAN_MDL_B.Product2_l =
      PubIfDecisionPLAN_MDL_B.uDLookupTable1_g *
      PubIfDecisionPLAN_MDL_B.coefDistEnlarge;

    /* Lookup_n-D: '<S58>/1-D Lookup Table3' */
    PubIfDecisionPLAN_MDL_B.uDLookupTable3_e = look1_iflf_binlcpw
      (rtu_TOS_ACCP0->vxRelP0, rtP_P_LongCtrl_FollowWvCoefXAxis,
       rtP_P_LongCtrl_FollowWvCoefYAxis, 3U);

    /* Product: '<S58>/Product1' */
    PubIfDecisionPLAN_MDL_B.Product1_ew =
      PubIfDecisionPLAN_MDL_B.uDLookupTable3_e *
      PubIfDecisionPLAN_MDL_B.coefVelEnlarge;

    /* Gain: '<S57>/Gain' */
    PubIfDecisionPLAN_MDL_B.Gain_ld = (-1.0F) * rtu_TOS_ACCP0->vxRelP0;

    /* MinMax: '<S57>/MinMax' incorporates:
     *  Constant: '<S57>/Constant'
     */
    deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.Gain_ld, 0.01F);

    /* MinMax: '<S57>/MinMax' */
    PubIfDecisionPLAN_MDL_B.MinMax_jj = deltaVelCC;

    /* Product: '<S57>/Product1' */
    PubIfDecisionPLAN_MDL_B.Product1_h = rtu_TOS_ACCP0->rangeP0 /
      PubIfDecisionPLAN_MDL_B.MinMax_jj;

    /* Lookup_n-D: '<S58>/velSubjNegToleranceAdd' */
    PubIfDecisionPLAN_MDL_B.velSubjNegToleranceAdd = look2_iflf_binlcpw
      (rtu_TOS_ACCP0->rangeP0, rtu_TOS_ACCP0->vxRelP0,
       rtP_P_LongCtrl_FollowVelSubjNegToleranceAddX1Axis,
       rtP_P_LongCtrl_FollowVelSubjNegToleranceAddX2Axis,
       rtP_P_LongCtrl_FollowVelSubjNegToleranceAddYAxis,
       rtCP_velSubjNegToleranceAdd_maxIndex, 2U);

    /* S-Function (sfix_udelay): '<S58>/Tapped Delay1' */
    PubIfDecisionPLAN_MDL_B.TappedDelay1_e[0] =
      PubIfDecisionPLAN_MDL_B.ACCModeSts;
    PubIfDecisionPLAN_MDL_B.TappedDelay1_e[1] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_h;

    /* UnitDelay: '<S58>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_B.UnitDelay2_j =
      PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_dz;

    /* UnitDelay: '<S58>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_B.UnitDelay1_p =
      PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_h;

    /* UnitDelay: '<S58>/Unit Delay' */
    PubIfDecisionPLAN_MDL_B.UnitDelay_g =
      PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gc;

    /* MATLAB Function: '<S58>/spdPlanning' incorporates:
     *  Constant: '<S9>/FollowtCycle'
     *  MinMax: '<S52>/Min'
     */
    Jmin = PubIfDecisionPLAN_MDL_B.distTargPlan;
    Error_idx_2 = PubIfDecisionPLAN_MDL_B.LongCtrl_VlcInternalAccK20;
    RoadWidth = PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable;
    deltaVelCC = PubIfDecisionPLAN_MDL_B.MinMax_j;
    t_dy_idx_0 = rtu_TOS_ACCP0->rangeP0;
    P_VSM_DPC_HWALineRearA3Factor = PubIfDecisionPLAN_MDL_B.Product2_l;
    P_Global_DxvFrontBumper_m_0 = PubIfDecisionPLAN_MDL_B.Product1_ew;
    t_dy_idx_1 = PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur;
    LineC2Factor = rtu_TOS_ACCP0->vxRelP0;
    VehicleSpd_ms = rtu_TOS_ACCP0->rangeP0;
    b_y = PubIfDecisionPLAN_MDL_B.Product1_h;
    NearestObjDx_L = PubIfDecisionPLAN_MDL_B.velSubjNegToleranceAdd;
    NearestObjSpeed_L = 0.05F;
    ToleranceBoxRightOffset = PubIfDecisionPLAN_MDL_B.UnitDelay2_j;
    t = PubIfDecisionPLAN_MDL_B.UnitDelay_g;
    distDesThresAccelFadeOut = rtP_P_LongCtrl_FollowRateJDirStep;
    Error_idx_1 = rtP_P_LongCtrl_FollowRateJConditionStep;
    RtVehSpdms = rtP_P_LongCtrl_FollowVelTargetAbsSmoothNum;
    memset(&PubIfDecisionPLAN_MDL_B.distRelPlan[0], 0, 800U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.velRelPlan[0], 0, 800U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.velSubjPre[0], 0, 800U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.LongCtrl_J[0], 0, 20U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.LongCtrl_coefJEnlarge[0], 0, 20U * sizeof
           (real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.LongCtrl_JadtA[0], 0, 20U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.LongCtrl_JadtADist[0], 0, 20U * sizeof
           (real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.LongCtrl_asum[0], 0, 20U * sizeof(real32_T));
    memset(&adetsum[0], 0, 20U * sizeof(real32_T));
    memset(&dsum[0], 0, 20U * sizeof(real32_T));
    memset(&vsum[0], 0, 20U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan[0], 0, 800U * sizeof
           (real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.dtAccelSubjPlanTemp[0], 0, 800U * sizeof
           (real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.C0[0], 0, 20U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.C1[0], 0, 20U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.C2[0], 0, 20U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.C3[0], 0, 20U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.C4[0], 0, 20U * sizeof(real32_T));
    memset(&PubIfDecisionPLAN_MDL_B.C5[0], 0, 20U * sizeof(real32_T));
    memset(&distDesPlanExpand[0], 0, 40U * sizeof(real32_T));
    memset(&vTerminateExpand[0], 0, 40U * sizeof(real32_T));
    jTargStop = truncf(2.0F * PubIfDecisionPLAN_MDL_B.tTargStop);
    tmpForInput_idx_0 = true;
    distRelPlanStartReasonable = true;
    temp = PubIfDecisionPLAN_MDL_B.UnitDelay1_p;
    Update = true;
    BigNumArbFail = true;
    if (*rtu_vxvRefMs <= 0.0F) {
      Error_idx_2 = 0.0F;
    }

    for (JminIni = 0; JminIni < 20; JminIni++) {
      if (PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[JminIni] <
          1.0F) {
        NearestObjDx_R = 0.0F;
      } else if
          (PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[JminIni] >
           4.0F) {
        NearestObjDx_R = 1.0F;
      } else {
        NearestObjDx_R =
          (PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[JminIni] -
           1.0F) * 0.333333343F;
      }

      C[0] = 0.0F;
      C[1] = *rtu_vxvRefMs;
      C[2] = Error_idx_2;
      C[3] = PubIfDecisionPLAN_MDL_B.Dterminate[JminIni];
      C[4] = PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[JminIni];
      C[5] = NearestObjDx_R * RoadWidth;
      for (i_0 = 0; i_0 < 6; i_0++) {
        n[6 * i_0] = n_0[i_0];
        n[6 * i_0 + 1] = o[i_0];
        n[6 * i_0 + 2] = p[i_0];
      }

      n[3] = 1.0F;
      n[9] = (real32_T)JminIni + 0.5F;
      n[15] = q[JminIni];
      n[21] = r[JminIni];
      n[27] = s[JminIni];
      n[33] = t_0[JminIni];
      n[4] = 0.0F;
      n[10] = 1.0F;
      n[16] = 2.0F * (real32_T)JminIni + 1.0F;
      n[22] = u[JminIni];
      n[28] = v[JminIni];
      n[34] = w[JminIni];
      n[5] = 0.0F;
      n[11] = 0.0F;
      n[17] = 2.0F;
      n[23] = 6.0F * (real32_T)JminIni + 3.0F;
      n[29] = x[JminIni];
      n[35] = y[JminIni];
      mldivide_eM7gRv4h(n, C);
      PubIfDecisionPLAN_MDL_B.C0[JminIni] = C[0];
      PubIfDecisionPLAN_MDL_B.C1[JminIni] = C[1];
      PubIfDecisionPLAN_MDL_B.C2[JminIni] = C[2];
      PubIfDecisionPLAN_MDL_B.C3[JminIni] = C[3];
      PubIfDecisionPLAN_MDL_B.C4[JminIni] = C[4];
      PubIfDecisionPLAN_MDL_B.C5[JminIni] = C[5];
      memset(&a[0], 0, 800U * sizeof(real32_T));
      memset(&adet[0], 0, 800U * sizeof(real32_T));
      NearestObjDx_R = (((real32_T)JminIni + 1.0F) - 0.5F) * 2.0F;
      kAcol = 0;
      exitg1 = false;
      while ((!exitg1) && (kAcol <= (int32_T)NearestObjDx_R - 1)) {
        if (mod_1AYEMF5H((real32_T)kAcol + 1.0F) == 0.0F) {
          distDesPlanExpand[kAcol] =
            (PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[(int32_T)
             (((real32_T)kAcol + 1.0F) * 0.5F + 1.0F) - 1] +
             PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[(int32_T)
             (((real32_T)kAcol + 1.0F) * 0.5F) - 1]) * 0.5F;
          vTerminateExpand[kAcol] =
            (PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[(int32_T)
             (((real32_T)kAcol + 1.0F) * 0.5F + 1.0F) - 1] +
             PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[(int32_T)
             (((real32_T)kAcol + 1.0F) * 0.5F) - 1]) * 0.5F;
        } else {
          distDesPlanExpand[kAcol] =
            PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[(int32_T)
            ((((real32_T)kAcol + 1.0F) + 1.0F) * 0.5F) - 1];
          vTerminateExpand[kAcol] =
            PubIfDecisionPLAN_MDL_B.LongCtrl_velTargAbsPlanTerminate[(int32_T)
            ((((real32_T)kAcol + 1.0F) + 1.0F) * 0.5F) - 1];
        }

        if ((real32_T)kAcol + 1.0F <= jTargStop) {
          PubIfDecisionPLAN_MDL_B.distRelPlan[JminIni + 20 * kAcol] = (((0.5F *
            (real32_T)kAcol + 0.5F) * deltaVelCC + t_dy_idx_0) + (0.5F *
            (real32_T)kAcol + 0.5F) * (0.5F * RoadWidth) * (0.5F * (real32_T)
            kAcol + 0.5F)) - ((((((0.5F * (real32_T)kAcol + 0.5F) *
            PubIfDecisionPLAN_MDL_B.C1[JminIni] +
            PubIfDecisionPLAN_MDL_B.C0[JminIni]) +
            PubIfDecisionPLAN_MDL_B.C2[JminIni] * g[kAcol]) +
                                PubIfDecisionPLAN_MDL_B.C3[JminIni] * h[kAcol])
                               + PubIfDecisionPLAN_MDL_B.C4[JminIni] * k[kAcol])
                              + PubIfDecisionPLAN_MDL_B.C5[JminIni] * l[kAcol]);
          PubIfDecisionPLAN_MDL_B.velRelPlan[JminIni + 20 * kAcol] = ((0.5F *
            (real32_T)kAcol + 0.5F) * RoadWidth + deltaVelCC) - (((((0.5F *
            (real32_T)kAcol + 0.5F) * (2.0F * PubIfDecisionPLAN_MDL_B.C2[JminIni])
            + PubIfDecisionPLAN_MDL_B.C1[JminIni]) + 3.0F *
            PubIfDecisionPLAN_MDL_B.C3[JminIni] * g[kAcol]) + 4.0F *
            PubIfDecisionPLAN_MDL_B.C4[JminIni] * h[kAcol]) + 5.0F *
            PubIfDecisionPLAN_MDL_B.C5[JminIni] * k[kAcol]);
        } else {
          PubIfDecisionPLAN_MDL_B.distRelPlan[JminIni + 20 * kAcol] =
            (t_dy_idx_0 + Jmin) - ((((((0.5F * (real32_T)kAcol + 0.5F) *
            PubIfDecisionPLAN_MDL_B.C1[JminIni] +
            PubIfDecisionPLAN_MDL_B.C0[JminIni]) +
            PubIfDecisionPLAN_MDL_B.C2[JminIni] * g[kAcol]) +
            PubIfDecisionPLAN_MDL_B.C3[JminIni] * h[kAcol]) +
            PubIfDecisionPLAN_MDL_B.C4[JminIni] * k[kAcol]) +
            PubIfDecisionPLAN_MDL_B.C5[JminIni] * l[kAcol]);
          PubIfDecisionPLAN_MDL_B.velRelPlan[JminIni + 20 * kAcol] = -(((((0.5F *
            (real32_T)kAcol + 0.5F) * (2.0F * PubIfDecisionPLAN_MDL_B.C2[JminIni])
            + PubIfDecisionPLAN_MDL_B.C1[JminIni]) + 3.0F *
            PubIfDecisionPLAN_MDL_B.C3[JminIni] * g[kAcol]) + 4.0F *
            PubIfDecisionPLAN_MDL_B.C4[JminIni] * h[kAcol]) + 5.0F *
            PubIfDecisionPLAN_MDL_B.C5[JminIni] * k[kAcol]);
        }

        PubIfDecisionPLAN_MDL_B.velSubjPre[JminIni + 20 * kAcol] = ((((0.5F *
          (real32_T)kAcol + 0.5F) * (2.0F * PubIfDecisionPLAN_MDL_B.C2[JminIni])
          + PubIfDecisionPLAN_MDL_B.C1[JminIni]) + 3.0F *
          PubIfDecisionPLAN_MDL_B.C3[JminIni] * g[kAcol]) + 4.0F *
          PubIfDecisionPLAN_MDL_B.C4[JminIni] * h[kAcol]) + 5.0F *
          PubIfDecisionPLAN_MDL_B.C5[JminIni] * k[kAcol];
        a[JminIni + 20 * kAcol] = (((0.5F * (real32_T)kAcol + 0.5F) * (6.0F *
          PubIfDecisionPLAN_MDL_B.C3[JminIni]) + 2.0F *
          PubIfDecisionPLAN_MDL_B.C2[JminIni]) + 12.0F *
          PubIfDecisionPLAN_MDL_B.C4[JminIni] * g[kAcol]) + 20.0F *
          PubIfDecisionPLAN_MDL_B.C5[JminIni] * h[kAcol];
        adet[JminIni + 20 * kAcol] = ((0.5F * (real32_T)kAcol + 0.5F) * (24.0F *
          PubIfDecisionPLAN_MDL_B.C4[JminIni]) + 6.0F *
          PubIfDecisionPLAN_MDL_B.C3[JminIni]) + 60.0F *
          PubIfDecisionPLAN_MDL_B.C5[JminIni] * g[kAcol];
        velSubjNegTolerance = -0.3F;
        if (((PubIfDecisionPLAN_MDL_B.TappedDelay1_e[0] == 3) &&
             (PubIfDecisionPLAN_MDL_B.TappedDelay1_e[1] == 5)) || (temp > 0.001))
        {
          temp += NearestObjSpeed_L;
        }

        if ((temp >= 10.0F) || (PubIfDecisionPLAN_MDL_B.TappedDelay1_e[0] != 3))
        {
          temp = 0.0F;
        }

        if ((*rtu_vxvRefMs < 8.3) && (JminIni + 1 < 6) && (deltaVelCC > 0.5F) &&
            (temp > 0.001)) {
          velSubjNegTolerance = NearestObjDx_L + -0.3F;
        }

        if ((PubIfDecisionPLAN_MDL_B.velSubjPre[20 * kAcol + JminIni] <
             velSubjNegTolerance) || (JminIni + 1 == 1)) {
          PubIfDecisionPLAN_MDL_B.LongCtrl_J[JminIni] = -1.0F;
          exitg1 = true;
        } else {
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan[JminIni + 20 * kAcol] =
            a[20 * kAcol + JminIni];
          PubIfDecisionPLAN_MDL_B.dtAccelSubjPlanTemp[JminIni + 20 * kAcol] =
            adet[20 * kAcol + JminIni];
          PubIfDecisionPLAN_MDL_B.LongCtrl_asum[JminIni] += a[20 * kAcol +
            JminIni] * a[20 * kAcol + JminIni];
          adetsum[JminIni] += adet[20 * kAcol + JminIni] * adet[20 * kAcol +
            JminIni];
          velSubjNegTolerance = PubIfDecisionPLAN_MDL_B.distRelPlan[20 * kAcol +
            JminIni] - distDesPlanExpand[kAcol];
          dsum[JminIni] += velSubjNegTolerance * velSubjNegTolerance;
          velSubjNegTolerance = PubIfDecisionPLAN_MDL_B.velSubjPre[20 * kAcol +
            JminIni] - vTerminateExpand[kAcol];
          vsum[JminIni] += velSubjNegTolerance * velSubjNegTolerance;
          PubIfDecisionPLAN_MDL_B.LongCtrl_JadtA[JminIni] =
            PubIfDecisionPLAN_MDL_B.LongCtrl_asum[JminIni] + adetsum[JminIni];
          PubIfDecisionPLAN_MDL_B.LongCtrl_JadtADist[JminIni] =
            (PubIfDecisionPLAN_MDL_B.LongCtrl_asum[JminIni] + adetsum[JminIni])
            + P_VSM_DPC_HWALineRearA3Factor * dsum[JminIni];
          kAcol++;
        }
      }

      if (!(PubIfDecisionPLAN_MDL_B.LongCtrl_J[JminIni] == -1.0F)) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_J[JminIni] =
          ((PubIfDecisionPLAN_MDL_B.LongCtrl_asum[JminIni] + adetsum[JminIni]) +
           P_VSM_DPC_HWALineRearA3Factor * dsum[JminIni]) +
          P_Global_DxvFrontBumper_m_0 * vsum[JminIni];
        if (PubIfDecisionPLAN_MDL_B.TappedDelay_e[0] ==
            PubIfDecisionPLAN_MDL_B.TappedDelay_e[1]) {
          velSubjNegTolerance = fabsf(a[JminIni] - ToleranceBoxRightOffset);
          NearestObjDx_R = fabsf(a[JminIni] - Error_idx_2);
        } else {
          velSubjNegTolerance = 0.0F;
          NearestObjDx_R = 0.0F;
        }

        if ((*rtu_vxvRefMs > 3.0F) && (fabsf(t_dy_idx_1 - t_dy_idx_0) < 5.5F) &&
            (fabsf(LineC2Factor) < 2.2)) {
          if (velSubjNegTolerance > 1.0F) {
            velSubjNegTolerance = 3.0F;
          } else {
            velSubjNegTolerance = 2.0F * velSubjNegTolerance + 1.0F;
          }

          PubIfDecisionPLAN_MDL_B.LongCtrl_coefJEnlarge[JminIni] =
            velSubjNegTolerance;
          if (NearestObjDx_R > 1.0F) {
            NearestObjDx_R = 3.0F;
          } else {
            NearestObjDx_R = 2.0F * NearestObjDx_R + 1.0F;
          }

          PubIfDecisionPLAN_MDL_B.LongCtrl_coefJEnlarge[JminIni] *=
            NearestObjDx_R;
          if (JminIni + 1 < 2) {
            NearestObjDx_R = 2.0F;
          } else if (JminIni + 1 > 4) {
            NearestObjDx_R = 1.0F;
          } else {
            NearestObjDx_R = (((real32_T)JminIni + 1.0F) - 2.0F) * -0.5F + 2.0F;
          }

          PubIfDecisionPLAN_MDL_B.LongCtrl_coefJEnlarge[JminIni] *=
            NearestObjDx_R;
          PubIfDecisionPLAN_MDL_B.LongCtrl_J[JminIni] *=
            PubIfDecisionPLAN_MDL_B.LongCtrl_coefJEnlarge[JminIni];
        }

        if ((*rtu_vxvRefMs < 3.0F) && (LineC2Factor > 1.5F) && (a[JminIni] > 0.2)
            && (PubIfDecisionPLAN_MDL_B.TappedDelay_e[0] ==
                PubIfDecisionPLAN_MDL_B.TappedDelay_e[1])) {
          for (i_0 = 0; i_0 < 40; i_0++) {
            a_0[i_0] = a[20 * i_0 + JminIni];
          }

          NearestObjDx_R = valueMax_xItBCuOH(a_0, (real32_T)JminIni + 1.0F);
          if (NearestObjDx_R < 1.4F) {
            NearestObjDx_R = 1.0F;
          } else if (NearestObjDx_R > 1.8F) {
            NearestObjDx_R = 2.0F;
          } else {
            NearestObjDx_R = (NearestObjDx_R - 1.4F) * 2.50000024F + 1.0F;
          }

          PubIfDecisionPLAN_MDL_B.LongCtrl_J[JminIni] *= NearestObjDx_R;
        }

        if ((b_y > 3.0F) && (*rtu_vxvRefMs > 3.0F) && (a[JminIni] < -0.2) &&
            (PubIfDecisionPLAN_MDL_B.TappedDelay_e[0] ==
             PubIfDecisionPLAN_MDL_B.TappedDelay_e[1]) && ((LineC2Factor < -1.0F)
             && (JminIni + 1 <= 4))) {
          if (LineC2Factor < -3.0F) {
            velSubjNegTolerance = 8.0F;
          } else {
            velSubjNegTolerance = (LineC2Factor - -3.0F) * -2.33333325F + 8.0F;
          }

          accelNegSum = 0.0F;
          NearestObjDx_R = (((real32_T)JminIni + 1.0F) - 0.5F) * 2.0F;
          kAcol = 1;
          oldestbufIndex = 0;
          exitg1 = false;
          while ((!exitg1) && (oldestbufIndex <= (int32_T)NearestObjDx_R - 1)) {
            kAcol = oldestbufIndex + 1;
            if (a[20 * oldestbufIndex + JminIni] < 0.0F) {
              accelNegSum += a[20 * oldestbufIndex + JminIni];
              oldestbufIndex++;
            } else {
              exitg1 = true;
            }
          }

          if (((real32_T)JminIni + 1.0F) - 0.5F < b_y - 0.45F) {
            NearestObjDx_R = accelNegSum / fmaxf(1.0F, (real32_T)kAcol - 1.0F) -
              (LineC2Factor * LineC2Factor / (fmaxf(velSubjNegTolerance,
                 VehicleSpd_ms - 0.5F *
                 PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[JminIni]) *
                2.0F) - 0.5F);
          } else {
            NearestObjDx_R = 0.0F;
          }

          if (NearestObjDx_R < -2.0F) {
            NearestObjDx_R = 3.0F;
          } else if (NearestObjDx_R > 0.0F) {
            NearestObjDx_R = 1.0F;
          } else {
            NearestObjDx_R = -(NearestObjDx_R - -2.0F) + 3.0F;
          }

          PubIfDecisionPLAN_MDL_B.LongCtrl_J[JminIni] *= NearestObjDx_R;
        }
      }
    }

    JminIni = 2;
    kAcol = 0;
    exitg1 = false;
    while ((!exitg1) && (kAcol < 19)) {
      if (PubIfDecisionPLAN_MDL_B.LongCtrl_J[kAcol + 1] == -1.0F) {
        kAcol++;
      } else {
        JminIni = kAcol + 2;
        exitg1 = true;
      }
    }

    Jmin = PubIfDecisionPLAN_MDL_B.LongCtrl_J[JminIni - 1];
    jTargStop = (real32_T)JminIni;
    for (kAcol = 0; kAcol < 18; kAcol++) {
      if ((PubIfDecisionPLAN_MDL_B.LongCtrl_J[kAcol + 2] < Jmin) &&
          (PubIfDecisionPLAN_MDL_B.LongCtrl_J[kAcol + 2] > 0.0F)) {
        Jmin = PubIfDecisionPLAN_MDL_B.LongCtrl_J[kAcol + 2];
        jTargStop = (real32_T)kAcol + 3.0F;
        JminIni = kAcol + 3;
      }
    }

    Jmin = fabsf((Jmin - PubIfDecisionPLAN_MDL_B.LongCtrl_J[(int32_T)t - 1]) /
                 Jmin);
    if ((PubIfDecisionPLAN_MDL_B.TappedDelay_e[0] ==
         PubIfDecisionPLAN_MDL_B.TappedDelay_e[1]) && (!(Jmin >
          distDesThresAccelFadeOut))) {
      if (Jmin > Error_idx_1) {
        if ((jTargStop != t) && (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan
             [(int32_T)jTargStop - 1] + 0.5F < ToleranceBoxRightOffset) &&
            (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan[(int32_T)jTargStop -
             1] < -0.2)) {
          i_2 = (int32_T)t;
          for (i_0 = 0; i_0 < 40; i_0++) {
            vTerminateExpand[i_0] = PubIfDecisionPLAN_MDL_B.distRelPlan[(20 *
              i_0 + i_2) - 1];
          }

          Jmin = valueMin_cV8T4AKr(vTerminateExpand, t);
          if (Jmin > 5.0F) {
            Jmin = (t - 0.5F) * 2.0F;
            kAcol = 0;
            exitg1 = false;
            while ((!exitg1) && (kAcol <= (int32_T)Jmin - 1)) {
              if (PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[(int32_T)
                  jTargStop - 1] < 10.0F) {
                distDesThresAccelFadeOut = 0.7F;
              } else if (PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr
                         [(int32_T)jTargStop - 1] > 30.0F) {
                distDesThresAccelFadeOut = 0.6F;
              } else {
                distDesThresAccelFadeOut =
                  (PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[(int32_T)
                   jTargStop - 1] - 10.0F) * -0.00499999803F + 0.7F;
              }

              if (PubIfDecisionPLAN_MDL_B.distRelPlan[(((int32_T)((real32_T)
                     kAcol + 1.0F) - 1) * 20 + (int32_T)t) - 1] <
                  distDesPlanExpand[(int32_T)((real32_T)kAcol + 1.0F) - 1] *
                  distDesThresAccelFadeOut) {
                tmpForInput_idx_0 = false;
                exitg1 = true;
              } else {
                kAcol++;
              }
            }

            if (tmpForInput_idx_0) {
              jTargStop = t;
            }
          }
        }

        if ((jTargStop != t) && (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan
             [(int32_T)jTargStop - 1] > ToleranceBoxRightOffset + 0.5F) &&
            (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan[(int32_T)jTargStop -
             1] < -0.2) && (LineC2Factor < -1.0F)) {
          i_2 = (int32_T)jTargStop;
          for (i_0 = 0; i_0 < 40; i_0++) {
            vTerminateExpand[i_0] = PubIfDecisionPLAN_MDL_B.velRelPlan[(20 * i_0
              + i_2) - 1];
          }

          LineC2Factor = valueMax_xItBCuOH(vTerminateExpand, jTargStop);
          i_2 = (int32_T)t;
          for (i_0 = 0; i_0 < 40; i_0++) {
            vTerminateExpand[i_0] = PubIfDecisionPLAN_MDL_B.velRelPlan[(20 * i_0
              + i_2) - 1];
          }

          Jmin = valueMax_xItBCuOH(vTerminateExpand, t);
          if (Jmin < LineC2Factor * 0.8F) {
            jTargStop = t;
          }
        }

        if ((jTargStop != t) && (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan
             [(int32_T)jTargStop - 1] + 0.5F < ToleranceBoxRightOffset) &&
            (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan[(int32_T)jTargStop -
             1] > 0.2) && (*rtu_vxvRefMs < 3.0F)) {
          i_2 = (int32_T)t;
          for (i_0 = 0; i_0 < 40; i_0++) {
            vTerminateExpand[i_0] = PubIfDecisionPLAN_MDL_B.velRelPlan[(20 * i_0
              + i_2) - 1];
          }

          LineC2Factor = valueMin_cV8T4AKr(vTerminateExpand, t);
          if (LineC2Factor > -0.5F) {
            jTargStop = t;
          }
        }

        if ((jTargStop != t) && (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan
             [(int32_T)jTargStop - 1] > ToleranceBoxRightOffset + 0.5F) &&
            (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan[(int32_T)jTargStop -
             1] > 0.2) && (*rtu_vxvRefMs < 3.0F)) {
          ToleranceBoxRightOffset = (t - 0.5F) * 2.0F;
          kAcol = 0;
          exitg1 = false;
          while ((!exitg1) && (kAcol <= (int32_T)ToleranceBoxRightOffset - 1)) {
            if (PubIfDecisionPLAN_MDL_B.distRelPlan[(((int32_T)((real32_T)kAcol
                   + 1.0F) - 1) * 20 + (int32_T)t) - 1] > distDesPlanExpand
                [(int32_T)((real32_T)kAcol + 1.0F) - 1] + 4.0F) {
              distRelPlanStartReasonable = false;
              exitg1 = true;
            } else {
              kAcol++;
            }
          }

          if (distRelPlanStartReasonable) {
            jTargStop = t;
          }
        }
      } else {
        jTargStop = t;
      }
    }

    if ((jTargStop == t) && (jTargStop != JminIni) && (deltaVelCC < RtVehSpdms))
    {
      if (jTargStop > JminIni) {
        PubIfDecisionPLAN_MDL_DW.cntSmallNumRawArb++;
        PubIfDecisionPLAN_MDL_DW.cntBigNumRawArb = 0.0F;
      } else {
        PubIfDecisionPLAN_MDL_DW.cntBigNumRawArb++;
        PubIfDecisionPLAN_MDL_DW.cntSmallNumRawArb = 0.0F;
      }

      if (PubIfDecisionPLAN_MDL_DW.cntSmallNumRawArb >= 3.0F) {
        kAcol = (int32_T)((jTargStop - 1.0F) + (1.0F - (real32_T)JminIni));
        oldestbufIndex = 0;
        exitg1 = false;
        while ((!exitg1) && (oldestbufIndex <= kAcol - 1)) {
          deltaVelCC = (real32_T)JminIni + (real32_T)oldestbufIndex;
          if (PubIfDecisionPLAN_MDL_B.LongCtrl_J[(int32_T)deltaVelCC - 1] !=
              -1.0F) {
            deltaVelCC = PubIfDecisionPLAN_MDL_B.LongCtrl_J[(int32_T)deltaVelCC
              - 1] - PubIfDecisionPLAN_MDL_B.LongCtrl_J[(int32_T)jTargStop - 1];
            if (deltaVelCC <= 0.0F) {
              Update = false;
              oldestbufIndex++;
            } else if (deltaVelCC / PubIfDecisionPLAN_MDL_B.LongCtrl_J[(int32_T)
                       jTargStop - 1] < 0.1) {
              Update = false;
              oldestbufIndex++;
            } else {
              Update = true;
              exitg1 = true;
            }
          } else {
            oldestbufIndex++;
          }
        }

        if (!Update) {
          jTargStop--;
        }

        PubIfDecisionPLAN_MDL_DW.cntSmallNumRawArb = 0.0F;
      }

      if (PubIfDecisionPLAN_MDL_DW.cntBigNumRawArb >= 3.0F) {
        JminIni = (int32_T)((1.0F - (jTargStop + 1.0F)) + (real32_T)JminIni);
        kAcol = 0;
        exitg1 = false;
        while ((!exitg1) && (kAcol <= JminIni - 1)) {
          deltaVelCC = (jTargStop + 1.0F) + (real32_T)kAcol;
          if (PubIfDecisionPLAN_MDL_B.LongCtrl_J[(int32_T)deltaVelCC - 1] !=
              -1.0F) {
            deltaVelCC = PubIfDecisionPLAN_MDL_B.LongCtrl_J[(int32_T)deltaVelCC
              - 1] - PubIfDecisionPLAN_MDL_B.LongCtrl_J[(int32_T)jTargStop - 1];
            if (deltaVelCC <= 0.0F) {
              BigNumArbFail = false;
              kAcol++;
            } else if (deltaVelCC / PubIfDecisionPLAN_MDL_B.LongCtrl_J[(int32_T)
                       jTargStop - 1] < 0.1) {
              BigNumArbFail = false;
              kAcol++;
            } else {
              BigNumArbFail = true;
              exitg1 = true;
            }
          } else {
            kAcol++;
          }
        }

        if (!BigNumArbFail) {
          jTargStop++;
        }

        PubIfDecisionPLAN_MDL_DW.cntBigNumRawArb = 0.0F;
      }
    } else {
      PubIfDecisionPLAN_MDL_DW.cntBigNumRawArb = 0.0F;
      PubIfDecisionPLAN_MDL_DW.cntSmallNumRawArb = 0.0F;
    }

    tmp[0] = (PubIfDecisionPLAN_MDL_B.TappedDelay_e[0] == 0);
    tmp[1] = (PubIfDecisionPLAN_MDL_B.TappedDelay_e[1] == 0);
    if (ifWhileCond_5kpBgavU(tmp)) {
      Jmin = 255.0F;
      for (i_2 = 0; i_2 < 40; i_2++) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlanOpt[i_2] = 16.0F;
      }

      deltaVelCC = 255.0F;
      for (i_2 = 0; i_2 < 40; i_2++) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanOpt[i_2] = 255.0F;
      }

      for (i_2 = 0; i_2 < 40; i_2++) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_velPlanRelOpt[i_2] = 255.0F;
      }

      for (i_2 = 0; i_2 < 40; i_2++) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanOpt[i_2] = 255.0F;
      }
    } else {
      i_2 = (int32_T)jTargStop;
      for (i_0 = 0; i_0 < 40; i_0++) {
        vTerminateExpand[i_0] = PubIfDecisionPLAN_MDL_B.distRelPlan[(20 * i_0 +
          i_2) - 1];
      }

      Jmin = valueMin_cV8T4AKr(vTerminateExpand, jTargStop);
      i_2 = (int32_T)jTargStop;
      for (i_0 = 0; i_0 < 40; i_0++) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlanOpt[i_0] =
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlan[(20 * i_0 + i_2) - 1];
      }

      i_2 = (int32_T)jTargStop;
      for (i_0 = 0; i_0 < 40; i_0++) {
        vTerminateExpand[i_0] = PubIfDecisionPLAN_MDL_B.distRelPlan[(20 * i_0 +
          i_2) - 1];
      }

      deltaVelCC = NumMin_uz5e5ZqN(vTerminateExpand, jTargStop);
      deltaVelCC = PubIfDecisionPLAN_MDL_B.LongCtrl_distDesPlanCorr[(int32_T)
        deltaVelCC - 1];
      i_2 = (int32_T)jTargStop;
      for (i_0 = 0; i_0 < 40; i_0++) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanOpt[i_0] =
          PubIfDecisionPLAN_MDL_B.distRelPlan[(20 * i_0 + i_2) - 1];
      }

      i_2 = (int32_T)jTargStop;
      for (i_0 = 0; i_0 < 40; i_0++) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_velPlanRelOpt[i_0] =
          PubIfDecisionPLAN_MDL_B.velRelPlan[(20 * i_0 + i_2) - 1];
      }

      i_2 = (int32_T)jTargStop;
      for (i_0 = 0; i_0 < 40; i_0++) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanOpt[i_0] =
          PubIfDecisionPLAN_MDL_B.velSubjPre[(20 * i_0 + i_2) - 1];
      }
    }

    PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanMin = Jmin;
    PubIfDecisionPLAN_MDL_B.LongCtrl_distRelDesDistRelPlanNumMin = deltaVelCC;
    PubIfDecisionPLAN_MDL_B.tOverride2Active = temp;
    PubIfDecisionPLAN_MDL_B.LongCtrl_num = jTargStop;

    /* End of MATLAB Function: '<S58>/spdPlanning' */

    /* SignalConversion: '<S58>/Signal Conversion' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesRaw =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlanOpt[0];

    /* MATLAB Function: '<S58>/AccelCorr' */
    LineC2Factor = 0.0F;
    if ((rtu_TOS_ACCP0->rangeP0 > PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur) &&
        (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesRaw > 0.2)) {
      for (kAcol = 0; kAcol < 40; kAcol++) {
        if (kAcol + 1 == 1) {
          i_0 = (int32_T)PubIfDecisionPLAN_MDL_B.LongCtrl_num;
          LineC2Factor = PubIfDecisionPLAN_MDL_B.velRelPlan[i_0 - 1];
        }

        if (PubIfDecisionPLAN_MDL_B.velRelPlan[kAcol] < LineC2Factor) {
          LineC2Factor = PubIfDecisionPLAN_MDL_B.velRelPlan[kAcol];
        }
      }

      if (LineC2Factor < -5.0F) {
        PubIfDecisionPLAN_MDL_B.coefAccelCorr = 0.95F;
      } else if (LineC2Factor > -0.5F) {
        PubIfDecisionPLAN_MDL_B.coefAccelCorr = 1.0F;
      } else {
        PubIfDecisionPLAN_MDL_B.coefAccelCorr = (LineC2Factor - -5.0F) *
          0.0111111142F + 0.95F;
      }
    } else {
      PubIfDecisionPLAN_MDL_B.coefAccelCorr = 1.0F;
    }

    /* End of MATLAB Function: '<S58>/AccelCorr' */

    /* Product: '<S58>/Product' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesCorr =
      PubIfDecisionPLAN_MDL_B.coefAccelCorr *
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesRaw;

    /* PermuteDimensions: '<S16>/Permute Dimensions1' */
    memcpy(&PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanTerminate[0],
           &PubIfDecisionPLAN_MDL_B.Dterminate[0], 20U * sizeof(real32_T));

    /* S-Function (sfix_udelay): '<S55>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_B.TappedDelay_ia[0] = rtu_TOS_ACCP0->IDP0;
    PubIfDecisionPLAN_MDL_B.TappedDelay_ia[1] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay_X_by;

    /* UnitDelay: '<S16>/Unit Delay' */
    PubIfDecisionPLAN_MDL_B.UnitDelay_i =
      PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_l;

    /* MATLAB Function: '<S55>/PlausibilityCheck' incorporates:
     *  PermuteDimensions: '<S16>/Permute Dimensions1'
     */
    temp = 255.0F;
    if ((*rtu_vxvRefMs > rtP_P_LongCtrl_FollowvelSubjThresEnablePlauCheck) &&
        (PubIfDecisionPLAN_MDL_B.MinMax_j - *rtu_vxvRefMs <
         rtP_P_LongCtrl_FollowvelRelThresEnablePlauCheck) && (*rtu_vxvRefMs <
         rtP_P_LongCtrl_FollowvelSubjMaxEnablePlauCheck) &&
        (rtu_TOS_ACCP0->rangeP0 <
         rtP_P_LongCtrl_FollowdistRelThresEnablePlauCheck)) {
      t = PubIfDecisionPLAN_MDL_B.MinMax_j - *rtu_vxvRefMs;
      temp = -(t * t) / (fmaxf(0.1F,
        PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanTerminate[(int32_T)
        PubIfDecisionPLAN_MDL_B.LongCtrl_num - 1] -
        rtP_P_LongCtrl_FollowdistRelDevCalcDistConst) * 2.0F);
    }

    if ((temp < PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesCorr) &&
        (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesCorr < -0.3)) {
      if ((PubIfDecisionPLAN_MDL_B.UnitDelay_i <
           PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesCorr) &&
          (PubIfDecisionPLAN_MDL_B.TappedDelay_ia[0] ==
           PubIfDecisionPLAN_MDL_B.TappedDelay_ia[1]) &&
          (PubIfDecisionPLAN_MDL_B.TappedDelay_ia[1] != 0)) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_followAccel_Plau =
          PubIfDecisionPLAN_MDL_B.UnitDelay_i *
          rtP_P_LongCtrl_FollowcoefAccelFadeOutPlauCheck;
        PubIfDecisionPLAN_MDL_B.PlauCheckEnable = true;
      } else {
        PubIfDecisionPLAN_MDL_B.LongCtrl_followAccel_Plau =
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesCorr;
        PubIfDecisionPLAN_MDL_B.PlauCheckEnable = false;
      }
    } else {
      PubIfDecisionPLAN_MDL_B.LongCtrl_followAccel_Plau =
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesCorr;
      PubIfDecisionPLAN_MDL_B.PlauCheckEnable = false;
    }

    /* End of MATLAB Function: '<S55>/PlausibilityCheck' */

    /* Chart: '<S55>/StandstillOverride' */
    distRelPlanStartReasonable = ((PubIfDecisionPLAN_MDL_B.MinMax_j <
      rtP_P_LongCtrl_FollowvelTargAbsMaxJudgeStationaryTarget) &&
      (rtu_TOS_ACCP0->rangeP0 <
       rtP_P_LongCtrl_FollowdistRelMaxJudgeStationaryTarget));
    tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_DW.ACCModeK1 == 5) &&
                         (PubIfDecisionPLAN_MDL_B.ACCModeSts == 3));
    if (tmpForInput_idx_0) {
      PubIfDecisionPLAN_MDL_DW.ACCModeStateFullFill = true;
    } else {
      tmpForInput_idx_0 = (((PubIfDecisionPLAN_MDL_DW.ACCModeK1 == 3) &&
                            (PubIfDecisionPLAN_MDL_B.ACCModeSts != 3)) ||
                           (!distRelPlanStartReasonable));
      PubIfDecisionPLAN_MDL_DW.ACCModeStateFullFill = ((!tmpForInput_idx_0) &&
        PubIfDecisionPLAN_MDL_DW.ACCModeStateFullFill);
    }

    tmpForInput_idx_0 = (PubIfDecisionPLAN_MDL_DW.ACCModeStateFullFill &&
                         distRelPlanStartReasonable);
    if (tmpForInput_idx_0) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_standstillOverrideCondition = true;
      if (PubIfDecisionPLAN_MDL_B.LongCtrl_followAccel_Plau < 0.5F) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_coefStandstillOverride =
          rtP_P_LongCtrl_FollowcoefAccelStandstillOverride;
      }
    } else {
      PubIfDecisionPLAN_MDL_B.LongCtrl_coefStandstillOverride = 1.0F;
      PubIfDecisionPLAN_MDL_B.LongCtrl_standstillOverrideCondition = false;
    }

    PubIfDecisionPLAN_MDL_DW.ACCModeK1 = PubIfDecisionPLAN_MDL_B.ACCModeSts;

    /* End of Chart: '<S55>/StandstillOverride' */

    /* Switch: '<S86>/Switch' */
    if (PubIfDecisionPLAN_MDL_B.LongCtrl_standstillOverrideCondition) {
      /* Switch: '<S86>/Switch' incorporates:
       *  Constant: '<S86>/Constant'
       */
      PubIfDecisionPLAN_MDL_B.Switch_ne = (-0.2F);
    } else {
      /* Switch: '<S86>/Switch' incorporates:
       *  Constant: '<S86>/Constant1'
       */
      PubIfDecisionPLAN_MDL_B.Switch_ne = 10.0F;
    }

    /* End of Switch: '<S86>/Switch' */

    /* MinMax: '<S86>/MinMax' */
    temp = fminf(PubIfDecisionPLAN_MDL_B.Switch_ne,
                 PubIfDecisionPLAN_MDL_B.LongCtrl_followAccel_Plau);

    /* MinMax: '<S86>/MinMax' */
    PubIfDecisionPLAN_MDL_B.MinMax_e = temp;

    /* RelationalOperator: '<S88>/Compare' incorporates:
     *  Constant: '<S88>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_byw = (rtu_TOS_ACCP0->vxRelP0 <
      rtP_P_LongCtrl_FollowQuickDecelVelTargRelThres);

    /* Sum: '<S87>/Add' incorporates:
     *  Constant: '<S87>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Add_h = PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur
      + rtP_P_LongCtrl_FollowQuickDecelDiffDistRel2DesThres;

    /* RelationalOperator: '<S87>/Relational Operator' */
    PubIfDecisionPLAN_MDL_B.RelationalOperator_i = (rtu_TOS_ACCP0->rangeP0 <
      PubIfDecisionPLAN_MDL_B.Add_h);

    /* RelationalOperator: '<S89>/Compare' incorporates:
     *  Constant: '<S89>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_jic = (*rtu_vxvRefMs >
      rtP_P_LongCtrl_FollowQuickDecelVelSubjThres);

    /* RelationalOperator: '<S90>/Compare' incorporates:
     *  Constant: '<S90>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_nu0 =
      (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsEnable <
       rtP_P_LongCtrl_FollowQuickAccelTargAbsEnableThres);

    /* Logic: '<S87>/Logical Operator' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_quickDecel =
      (PubIfDecisionPLAN_MDL_B.Compare_byw &&
       PubIfDecisionPLAN_MDL_B.RelationalOperator_i &&
       PubIfDecisionPLAN_MDL_B.Compare_jic &&
       PubIfDecisionPLAN_MDL_B.Compare_nu0);

    /* Switch: '<S86>/Switch1' */
    if (PubIfDecisionPLAN_MDL_B.LongCtrl_quickDecel) {
      /* Switch: '<S86>/Switch1' incorporates:
       *  Constant: '<S86>/Constant4'
       */
      PubIfDecisionPLAN_MDL_B.Switch1_e =
        rtP_P_LongCtrl_FollowQuickDecelAccelDesMax;
    } else {
      /* Switch: '<S86>/Switch1' incorporates:
       *  Constant: '<S86>/Constant3'
       */
      PubIfDecisionPLAN_MDL_B.Switch1_e = 10.0F;
    }

    /* End of Switch: '<S86>/Switch1' */

    /* MinMax: '<S86>/MinMax2' */
    temp = fminf(PubIfDecisionPLAN_MDL_B.MinMax_e,
                 PubIfDecisionPLAN_MDL_B.Switch1_e);

    /* MinMax: '<S86>/MinMax2' */
    PubIfDecisionPLAN_MDL_B.MinMax2_i = temp;

    /* Product: '<S86>/Product' */
    PubIfDecisionPLAN_MDL_B.Product_ap = PubIfDecisionPLAN_MDL_B.MinMax2_i *
      PubIfDecisionPLAN_MDL_B.LongCtrl_coefStandstillOverride;

    /* MinMax: '<S86>/MinMax1' incorporates:
     *  Constant: '<S86>/Constant2'
     */
    deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.Product_ap, -10.0F);

    /* MinMax: '<S86>/MinMax1' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_FollowAcceleStandstillOverride = deltaVelCC;

    /* Lookup_n-D: '<S69>/1-D Lookup Table1' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowDesThresEnableStop =
      look1_iflf_binlcpw(rtu_TOS_ACCP0->rangeP0,
                         rtP_P_LongCtrl_FollowaccelFollowDesThresEnableStopXAxis,
                         rtP_P_LongCtrl_FollowaccelFollowDesThresEnableStopYAxis,
                         1U);

    /* Sum: '<S69>/Add' incorporates:
     *  Constant: '<S69>/P_LongCtrl_FollowdistDesStopMin'
     */
    PubIfDecisionPLAN_MDL_B.Add_e = rtP_P_LongCtrl_FollowdistDesStopMin -
      rtu_TOS_ACCP0->rangeP0;

    /* Lookup_n-D: '<S69>/1-D Lookup Table' incorporates:
     *  Sum: '<S69>/Add'
     */
    PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjThresEnableStopAdd =
      look1_iflf_binlcpw(PubIfDecisionPLAN_MDL_B.Add_e,
                         rtP_P_LongCtrl_FollowvelSubjThresEnableStopAddXAxis,
                         rtP_P_LongCtrl_FollowvelSubjThresEnableStopAddYAxis, 1U);

    /* Lookup_n-D: '<S70>/P_LongCtrl_velSubjThresForceStopChar' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjThresForceStop = look1_iflf_binlcpw(*
      rtu_axvRoadSlopeMs2, rtP_P_LongCtrl_FollowVelSubjThresForceStopXAxis,
      rtP_P_LongCtrl_FollowVelSubjThresForceStopYAxis, 1U);

    /* SignalConversion generated from: '<S69>/Vector Concatenate' */
    PubIfDecisionPLAN_MDL_B.VectorConcatenate_e[0] =
      PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjThresForceStop;

    /* Sum: '<S69>/Add1' incorporates:
     *  Constant: '<S69>/P_LongCtrl_FollowvelSubjThresEnableStop'
     */
    PubIfDecisionPLAN_MDL_B.Add1_o = rtP_P_LongCtrl_FollowvelSubjThresEnableStop
      + PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjThresEnableStopAdd;

    /* SignalConversion generated from: '<S69>/Vector Concatenate' */
    PubIfDecisionPLAN_MDL_B.VectorConcatenate_e[1] =
      PubIfDecisionPLAN_MDL_B.Add1_o;

    /* S-Function (sfix_look1_dyn): '<S69>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S69>/Constant'
     */
    /* Dynamic Look-Up Table Block: '<S69>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real32_T_real32_T( &(PubIfDecisionPLAN_MDL_B.LookupTableDynamic_k),
      &PubIfDecisionPLAN_MDL_B.VectorConcatenate_e[0],
      PubIfDecisionPLAN_MDL_B.Add_e,
      &rtP_P_LongCtrl_FollowDistDiff2VelSubjThresEnableStop[0], 1U);

    /* Constant: '<S69>/P_LongCtrl_FollowvelSubjThresEnableStop1' */
    PubIfDecisionPLAN_MDL_B.P_LongCtrl_FollowvelSubjThresEnableStop1 =
      rtP_P_LongCtrl_FollowVelSubjForceStopEnable;

    /* Switch: '<S69>/Switch' */
    if (PubIfDecisionPLAN_MDL_B.P_LongCtrl_FollowvelSubjThresEnableStop1 > 0.0F)
    {
      /* Switch: '<S69>/Switch' */
      PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjThresForceStopStationaryTarget =
        PubIfDecisionPLAN_MDL_B.LookupTableDynamic_k;
    } else {
      /* Switch: '<S69>/Switch' */
      PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjThresForceStopStationaryTarget =
        PubIfDecisionPLAN_MDL_B.Add1_o;
    }

    /* End of Switch: '<S69>/Switch' */

    /* Lookup_n-D: '<S70>/P_LongCtrl_jerkForceStopChar' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_jerkForceStop = look1_iflf_binlcpw
      (*rtu_axvRoadSlopeMs2, rtP_P_LongCtrl_FollowjerkForceStopCharXAxis,
       rtP_P_LongCtrl_FollowjerkForceStopCharYAxis, 2U);

    /* Lookup_n-D: '<S70>/P_LongCtrl_FollowaccelForceStopMinChar' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelForceMin = look1_iflf_binlcpw
      (*rtu_axvRoadSlopeMs2, rtP_P_LongCtrl_FollowaccelForceStopMinCharXAxis,
       rtP_P_LongCtrl_FollowaccelForceStopMinCharYAxis, 1U);

    /* Chart: '<S67>/DecelToStopCtrl' incorporates:
     *  Constant: '<S67>/P_LongCtrl_AddVelAccelChange'
     *  Constant: '<S67>/P_LongCtrl_AddVelAccelThrd'
     *  Constant: '<S67>/P_LongCtrl_AddVelDistDesThrd'
     *  Constant: '<S67>/P_LongCtrl_AddVelEnable'
     *  Constant: '<S67>/P_LongCtrl_AddVelRefMsThrd'
     *  Constant: '<S67>/P_LongCtrl_FollowaccelStopMax'
     *  Constant: '<S67>/P_LongCtrl_FollowaccelTargThresEnableStop'
     *  Constant: '<S67>/P_LongCtrl_FollowaccelTargThresForceStop'
     *  Constant: '<S67>/P_LongCtrl_FollowdistThresEnableStop'
     *  Constant: '<S67>/P_LongCtrl_FollowvelSubjThresEnableStop'
     *  Constant: '<S67>/P_LongCtrl_FollowvelTarAbsThresForceStop'
     */
    tmpForInput_idx_0 = ((rtu_TOS_ACCP0->rangeP0 <
                          rtP_P_LongCtrl_FollowdistThresEnableStop) &&
                         (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt <
                          rtP_P_LongCtrl_FollowaccelTargThresEnableStop) &&
                         (*rtu_vxvRefMs <
                          rtP_P_LongCtrl_FollowvelSubjThresEnableStop +
                          PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjThresEnableStopAdd)
                         &&
                         (PubIfDecisionPLAN_MDL_B.LongCtrl_FollowAcceleStandstillOverride
                          <
                          PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowDesThresEnableStop)
                         && (!PubIfDecisionPLAN_MDL_B.UnitDelay_bq));
    if (tmpForInput_idx_0) {
      tmpForInput_idx_0 =
        ((PubIfDecisionPLAN_MDL_B.LongCtrl_FollowAcceleStandstillOverride >
          rtP_P_LongCtrl_AddVelAccelThrd) && (rtu_TOS_ACCP0->rangeP0 >
          PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur +
          rtP_P_LongCtrl_AddVelDistDesThrd) && (*rtu_vxvRefMs <
          rtP_P_LongCtrl_AddVelRefMsThrd) && rtP_P_LongCtrl_AddVelEnable);
      if (tmpForInput_idx_0) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterDecelToStop =
          rtP_P_LongCtrl_AddVelAccelChange;
        PubIfDecisionPLAN_MDL_DW.counter = 0.0F;
        PubIfDecisionPLAN_MDL_DW.accelForce = 0.0F;
        PubIfDecisionPLAN_MDL_B.LongCtrl_ForceStop = false;
      } else {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterDecelToStop = fminf
          (PubIfDecisionPLAN_MDL_B.LongCtrl_FollowAcceleStandstillOverride,
           rtP_P_LongCtrl_FollowaccelStopMax);
        temp = PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur +
          rtP_P_LongCtrl_FollowDistDesAddForceStop;
        tmpForInput_idx_0 = (((*rtu_vxvRefMs <
          PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjThresForceStop) &&
                              (rtu_TOS_ACCP0->rangeP0 < temp) &&
                              (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt
          < rtP_P_LongCtrl_FollowaccelTargThresForceStop)) ||
                             (((PubIfDecisionPLAN_MDL_B.MinMax_j <
          rtP_P_LongCtrl_FollowvelTarAbsThresForceStop) ||
          (rtu_TOS_ACCP0->ObjMovingStateP0 == 4) ||
          (rtu_TOS_ACCP0->ObjMovingStateP0 == 3)) && (*rtu_vxvRefMs <
          PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjThresForceStopStationaryTarget)
                              && (rtu_TOS_ACCP0->rangeP0 < temp)));
        if (tmpForInput_idx_0) {
          PubIfDecisionPLAN_MDL_B.LongCtrl_ForceStop = true;
          tmpForInput_idx_0 = (((PubIfDecisionPLAN_MDL_DW.ACCModeStsK1_n == 3) &&
                                ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 6) ||
            (PubIfDecisionPLAN_MDL_B.ACCModeSts == 9))) ||
                               PubIfDecisionPLAN_MDL_DW.accelForceClear);
          if (tmpForInput_idx_0) {
            if (PubIfDecisionPLAN_MDL_DW.accelForce < 0.0F) {
              tmpForInput_idx_0 = (((PubIfDecisionPLAN_MDL_DW.ACCModeStsK1_n ==
                6) || (PubIfDecisionPLAN_MDL_DW.ACCModeStsK1_n == 9)) &&
                                   (PubIfDecisionPLAN_MDL_B.ACCModeSts != 6) &&
                                   (PubIfDecisionPLAN_MDL_B.ACCModeSts != 9));
              if (tmpForInput_idx_0) {
                PubIfDecisionPLAN_MDL_DW.counter = 0.0F;
                PubIfDecisionPLAN_MDL_DW.accelForce = 0.0F;
              } else {
                PubIfDecisionPLAN_MDL_DW.counter = fmaxf(0.0F,
                  PubIfDecisionPLAN_MDL_DW.counter - 1.0F);
                PubIfDecisionPLAN_MDL_DW.accelForce = fmaxf
                  (PubIfDecisionPLAN_MDL_B.LongCtrl_accelForceMin,
                   PubIfDecisionPLAN_MDL_B.LongCtrl_jerkForceStop *
                   PubIfDecisionPLAN_MDL_DW.counter);
                PubIfDecisionPLAN_MDL_DW.accelForceClear = true;
              }
            } else {
              PubIfDecisionPLAN_MDL_DW.accelForceClear = false;
            }
          } else {
            tmpForInput_idx_0 = ((!PubIfDecisionPLAN_MDL_DW.accelForceClear) &&
                                 ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 6) ||
                                  (PubIfDecisionPLAN_MDL_B.ACCModeSts == 9)));
            if (tmpForInput_idx_0) {
              PubIfDecisionPLAN_MDL_DW.counter = 0.0F;
              PubIfDecisionPLAN_MDL_DW.accelForce = 0.0F;
            } else {
              PubIfDecisionPLAN_MDL_DW.counter = fminf(300.0F,
                PubIfDecisionPLAN_MDL_DW.counter + 1.0F);
              PubIfDecisionPLAN_MDL_DW.accelForce = fmaxf
                (PubIfDecisionPLAN_MDL_B.LongCtrl_accelForceMin,
                 PubIfDecisionPLAN_MDL_B.LongCtrl_jerkForceStop *
                 PubIfDecisionPLAN_MDL_DW.counter);
            }
          }
        } else {
          PubIfDecisionPLAN_MDL_DW.counter = 0.0F;
          PubIfDecisionPLAN_MDL_DW.accelForce = 0.0F;
          PubIfDecisionPLAN_MDL_B.LongCtrl_ForceStop = false;
        }

        PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterDecelToStop +=
          PubIfDecisionPLAN_MDL_DW.accelForce;
      }
    } else {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterDecelToStop =
        PubIfDecisionPLAN_MDL_B.LongCtrl_FollowAcceleStandstillOverride;
      PubIfDecisionPLAN_MDL_DW.counter = 0.0F;
      PubIfDecisionPLAN_MDL_DW.accelForce = 0.0F;
      PubIfDecisionPLAN_MDL_B.LongCtrl_ForceStop = false;
    }

    PubIfDecisionPLAN_MDL_DW.ACCModeStsK1_n = PubIfDecisionPLAN_MDL_B.ACCModeSts;

    /* End of Chart: '<S67>/DecelToStopCtrl' */

    /* MinMax: '<S47>/MinMax' */
    deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.LongCtrl_AccelSupreReq,
                       PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterDecelToStop);

    /* MinMax: '<S47>/MinMax' */
    PubIfDecisionPLAN_MDL_B.MinMax_jp = deltaVelCC;

    /* Switch: '<S47>/Switch' */
    if (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSupressionEnable) {
      /* Switch: '<S47>/Switch' */
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterLaneChangeSupress =
        PubIfDecisionPLAN_MDL_B.MinMax_jp;
    } else {
      /* Switch: '<S47>/Switch' */
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterLaneChangeSupress =
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterDecelToStop;
    }

    /* End of Switch: '<S47>/Switch' */

    /* MATLAB Function: '<S47>/DecelJudge' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_tStartDecel = 100.0F;
    if (rtu_TOS_ACCP0->IDP0 != 0) {
      JminIni = 0;
      exitg1 = false;
      while ((!exitg1) && (JminIni < 40)) {
        if (PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlanOpt[JminIni] <
            rtP_P_LongCtrl_FollowaccelSupressionAccelThres) {
          PubIfDecisionPLAN_MDL_B.LongCtrl_tStartDecel = (((real32_T)JminIni +
            1.0F) - 1.0F) * 0.5F;
          exitg1 = true;
        } else {
          JminIni++;
        }
      }
    }

    /* End of MATLAB Function: '<S47>/DecelJudge' */

    /* Lookup_n-D: '<S73>/1-D Lookup Table' */
    PubIfDecisionPLAN_MDL_B.uDLookupTable_m = look1_iflf_binlcpw
      (*rtu_LONC_VLC_InternalAcc,
       rtP_P_LongCtrl_FollowAccelCharNegVlcAcc2CoefEnlargeAccelJerkXAxis,
       rtP_P_LongCtrl_FollowCoefCharCoefEnlargeAccelJerkYAxis, 1U);

    /* RelationalOperator: '<S95>/Compare' incorporates:
     *  Constant: '<S95>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_le =
      (PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterLaneChangeSupress < 0.5F);

    /* RelationalOperator: '<S96>/Compare' incorporates:
     *  Constant: '<S96>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_kw =
      (PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterLaneChangeSupress >
       0.15F);

    /* RelationalOperator: '<S93>/Compare' incorporates:
     *  Constant: '<S93>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_at = (*rtu_vxvRefMs <= 2.0F);

    /* RelationalOperator: '<S94>/Compare' incorporates:
     *  Constant: '<S94>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_lr1 = (*rtu_axvRoadSlopeMs2 > 0.8F);

    /* Logic: '<S56>/Logical Operator' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_slopeStartupAssist =
      (PubIfDecisionPLAN_MDL_B.Compare_le && PubIfDecisionPLAN_MDL_B.Compare_kw &&
       PubIfDecisionPLAN_MDL_B.Compare_at && PubIfDecisionPLAN_MDL_B.Compare_lr1);

    /* Lookup_n-D: '<S56>/1-D Lookup Table' */
    PubIfDecisionPLAN_MDL_B.uDLookupTable_ln = look1_iflf_binlcpw
      (*rtu_axvRoadSlopeMs2, rtP_P_LongCtrl_FollowAccelAddSlopeAssistXAxis,
       rtP_P_LongCtrl_FollowAccelAddSlopeAssistYAxis, 1U);

    /* Chart: '<S56>/Chart' incorporates:
     *  Constant: '<S56>/Constant'
     */
    if (PubIfDecisionPLAN_MDL_B.LongCtrl_slopeStartupAssist) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowSlopeAssist = fminf
        (PubIfDecisionPLAN_MDL_B.uDLookupTable_ln,
         PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowSlopeAssist +
         rtP_P_LongCtrl_FollowAccelSlopeAssistStep);
    } else {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowSlopeAssist = fmaxf(0.0F,
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowSlopeAssist -
        rtP_P_LongCtrl_FollowAccelSlopeAssistStep * 3.0F);
    }

    /* End of Chart: '<S56>/Chart' */

    /* Sum: '<S56>/Add' */
    PubIfDecisionPLAN_MDL_B.Add_g =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterLaneChangeSupress +
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowSlopeAssist;

    /* Chart: '<S56>/Chart1' incorporates:
     *  Constant: '<S9>/FollowtCycle'
     */
    tmpForInput_idx_0 = ((((PubIfDecisionPLAN_MDL_DW.ACCModeStsK1 == 6) ||
      (PubIfDecisionPLAN_MDL_DW.ACCModeStsK1 == 9)) &&
                          (PubIfDecisionPLAN_MDL_B.ACCModeSts == 3)) ||
                         ((PubIfDecisionPLAN_MDL_DW.ACCModeStsK1 == 5) &&
                          (PubIfDecisionPLAN_MDL_B.ACCModeSts == 3) &&
                          (*rtu_vxvRefMs < 1.0F)));
    if (tmpForInput_idx_0) {
      PubIfDecisionPLAN_MDL_DW.tStartUpEnable =
        rtP_P_LongCtrl_FollowtStartUpAssistEnableMax;
    } else {
      PubIfDecisionPLAN_MDL_DW.tStartUpEnable = fmaxf(0.0F,
        PubIfDecisionPLAN_MDL_DW.tStartUpEnable - 0.05F);
    }

    tmpForInput_idx_0 =
      ((PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterLaneChangeSupress >
        rtP_P_LongCtrl_FollowAccelDesThresStartUpAssistEnable) &&
       (PubIfDecisionPLAN_MDL_B.MinMax_j >
        rtP_P_LongCtrl_FollowVelTargAbsThresStartUpAssistEnable) &&
       rtP_P_LongCtrl_FollowStartUpAssist);
    if (tmpForInput_idx_0) {
      tmpForInput_idx_0 = ((*rtu_vxvRefMs <
                            rtP_P_LongCtrl_FollowVelSubjThresStartUpAssistEnable)
                           && ((rtu_TOS_ACCP0->vxRelP0 > 0.0F) ||
        (rtu_TOS_ACCP0->rangeP0 > PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur)) &&
                           (PubIfDecisionPLAN_MDL_DW.tStartUpEnable > 0.0F));
      if (tmpForInput_idx_0) {
        PubIfDecisionPLAN_MDL_B.velTargRel = rtu_TOS_ACCP0->vxRelP0;

        /* Outputs for Function Call SubSystem: '<S92>/coefVelTargRel2AccelCalc' */
        /* Lookup_n-D: '<S98>/1-D Lookup Table' */
        PubIfDecisionPLAN_MDL_B.uDLookupTable_j = look1_iflf_binlcpw
          (PubIfDecisionPLAN_MDL_B.velTargRel,
           rtP_P_LongCtrl_FollowVelCharCoefEnlargeAccelStartUpAssistXAxis,
           rtP_P_LongCtrl_FollowCoefCharVelCoefEnlargeAccelStartUpAssistYAxis,
           1U);

        /* End of Outputs for SubSystem: '<S92>/coefVelTargRel2AccelCalc' */
        temp = PubIfDecisionPLAN_MDL_B.uDLookupTable_j;
        PubIfDecisionPLAN_MDL_B.distTargRel_b = rtu_TOS_ACCP0->rangeP0;
        PubIfDecisionPLAN_MDL_B.distDesCur =
          PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur;

        /* Outputs for Function Call SubSystem: '<S92>/coefDistTargRel2AccelCalc' */
        /* Sum: '<S97>/Add' */
        PubIfDecisionPLAN_MDL_B.Add_gl = PubIfDecisionPLAN_MDL_B.distTargRel_b -
          PubIfDecisionPLAN_MDL_B.distDesCur;

        /* Lookup_n-D: '<S97>/1-D Lookup Table' incorporates:
         *  Sum: '<S97>/Add'
         */
        PubIfDecisionPLAN_MDL_B.uDLookupTable_h = look1_iflf_binlcpw
          (PubIfDecisionPLAN_MDL_B.Add_gl,
           rtP_P_LongCtrl_FollowDistDiffCharCoefEnlargeAccelStartUpAssistXAxis,
           rtP_P_LongCtrl_FollowCoefCharDistCoefEnlargeAccelStartUpAssistYAxis,
           1U);

        /* End of Outputs for SubSystem: '<S92>/coefDistTargRel2AccelCalc' */
        PubIfDecisionPLAN_MDL_B.LongCtrl_coefVelDist2AccelStartUp = fminf(2.0F,
          temp * PubIfDecisionPLAN_MDL_B.uDLookupTable_h);
      } else if (PubIfDecisionPLAN_MDL_B.LongCtrl_coefVelDist2AccelStartUp >
                 1.0F) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_coefVelDist2AccelStartUp = fmaxf(1.0F,
          PubIfDecisionPLAN_MDL_B.LongCtrl_coefVelDist2AccelStartUp *
          rtP_P_LongCtrl_FollowCoefStartUpAssistFadeOut);
      } else {
        PubIfDecisionPLAN_MDL_B.LongCtrl_coefVelDist2AccelStartUp = 1.0F;
      }
    } else {
      PubIfDecisionPLAN_MDL_B.LongCtrl_coefVelDist2AccelStartUp = 1.0F;
    }

    PubIfDecisionPLAN_MDL_DW.ACCModeStsK1 = PubIfDecisionPLAN_MDL_B.ACCModeSts;

    /* End of Chart: '<S56>/Chart1' */

    /* Product: '<S56>/Product' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollow = PubIfDecisionPLAN_MDL_B.Add_g
      * PubIfDecisionPLAN_MDL_B.LongCtrl_coefVelDist2AccelStartUp;

    /* UnitDelay: '<S75>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_B.UnitDelay1_kk =
      PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_hq;

    /* RelationalOperator: '<S83>/Compare' incorporates:
     *  Constant: '<S83>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_dj = (PubIfDecisionPLAN_MDL_B.UnitDelay1_kk ==
      ((uint8_T)0U));

    /* RelationalOperator: '<S75>/Relational Operator' */
    PubIfDecisionPLAN_MDL_B.RelationalOperator_if =
      (PubIfDecisionPLAN_MDL_B.UnitDelay1_kk != rtu_TOS_ACCP0->IDP0);

    /* Logic: '<S75>/Logical Operator' */
    PubIfDecisionPLAN_MDL_B.LogicalOperator_b =
      (PubIfDecisionPLAN_MDL_B.Compare_dj ||
       PubIfDecisionPLAN_MDL_B.RelationalOperator_if);

    /* UnitDelay: '<S75>/Unit Delay' */
    PubIfDecisionPLAN_MDL_B.UnitDelay_oa =
      PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_c;

    /* Sum: '<S75>/Add' */
    PubIfDecisionPLAN_MDL_B.Add_pr =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollow -
      PubIfDecisionPLAN_MDL_B.UnitDelay_oa;

    /* Product: '<S75>/Product1' incorporates:
     *  Constant: '<S75>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Product1_n = 0.3F * PubIfDecisionPLAN_MDL_B.Add_pr;

    /* Sum: '<S75>/Add1' */
    PubIfDecisionPLAN_MDL_B.Add1_e = PubIfDecisionPLAN_MDL_B.Product1_n +
      PubIfDecisionPLAN_MDL_B.UnitDelay_oa;

    /* Switch: '<S75>/Switch' */
    if (PubIfDecisionPLAN_MDL_B.LogicalOperator_b) {
      /* Switch: '<S75>/Switch' */
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowFilt =
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollow;
    } else {
      /* Switch: '<S75>/Switch' */
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowFilt =
        PubIfDecisionPLAN_MDL_B.Add1_e;
    }

    /* End of Switch: '<S75>/Switch' */

    /* RelationalOperator: '<S77>/Compare' incorporates:
     *  Constant: '<S77>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_ozz =
      (PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowFilt <= 0.0F);

    /* Lookup_n-D: '<S73>/1-D Lookup Table1' */
    PubIfDecisionPLAN_MDL_B.uDLookupTable1_m = look1_iflf_binlcpw(*rtu_vxvRefMs,
      rtP_P_LongCtrl_FollowVelCharAccelJerkXAxis,
      rtP_P_LongCtrl_FollowJerkCharAccelJerkYAxis, 6U);

    /* Switch: '<S73>/Switch' */
    if (PubIfDecisionPLAN_MDL_B.Compare_ozz) {
      /* Switch: '<S73>/Switch' incorporates:
       *  Constant: '<S73>/Constant'
       */
      PubIfDecisionPLAN_MDL_B.Switch_h =
        rtP_P_LongCtrl_FollowAccelJerkNegFollowAccel;
    } else {
      /* Switch: '<S73>/Switch' */
      PubIfDecisionPLAN_MDL_B.Switch_h =
        PubIfDecisionPLAN_MDL_B.uDLookupTable1_m;
    }

    /* End of Switch: '<S73>/Switch' */

    /* Product: '<S73>/Product' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkFollow =
      PubIfDecisionPLAN_MDL_B.uDLookupTable_m * PubIfDecisionPLAN_MDL_B.Switch_h;

    /* Product: '<S72>/Product1' incorporates:
     *  Constant: '<S9>/FollowtCycle'
     */
    PubIfDecisionPLAN_MDL_B.Product1_a = 0.05F *
      PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkFollow;

    /* Sum: '<S72>/Add1' */
    PubIfDecisionPLAN_MDL_B.Add1_bh = *rtu_LONC_VLC_InternalAcc +
      PubIfDecisionPLAN_MDL_B.Product1_a;

    /* Lookup_n-D: '<S74>/1-D Lookup Table' */
    PubIfDecisionPLAN_MDL_B.uDLookupTable_g = look1_iflf_binlcpw
      (*rtu_axvRoadSlopeMs2, rtP_P_LongCtrl_FollowDecelJerkForceSlopeXAxis,
       rtP_P_LongCtrl_FollowDecelJerkForceSlopeYAxis, 1U);

    /* Lookup_n-D: '<S74>/DecelFollowJerkChar' incorporates:
     *  Product: '<S101>/Product'
     */
    PubIfDecisionPLAN_MDL_B.decelFollowJerk = look1_iflf_binlcpw
      (PubIfDecisionPLAN_MDL_B.Product_m2,
       rtP_P_LongCtrl_FollowdecelJerkCharXAxis,
       rtP_P_LongCtrl_FollowdecelJerkCharYAxis, 5U);

    /* RelationalOperator: '<S74>/Relational Operator' incorporates:
     *  Constant: '<S74>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.RelationalOperator_ie =
      (PubIfDecisionPLAN_MDL_B.LongCtrl_accelTargAbsFilt <
       rtP_P_LongCtrl_accelTargAbsThrd);

    /* Lookup_n-D: '<S74>/DecelFollowJerkTTCCorrChar' incorporates:
     *  Product: '<S57>/Product1'
     */
    PubIfDecisionPLAN_MDL_B.DecelFollowJerkTTCCorrChar = look1_iflf_binlcpw
      (PubIfDecisionPLAN_MDL_B.Product1_h,
       rtP_P_LongCtrl_FollowttcCorrDecelJerkXAxis,
       rtP_P_LongCtrl_FollowttcCorrDecelJerkYAxis, 3U);

    /* Sum: '<S74>/Add' */
    PubIfDecisionPLAN_MDL_B.Add_o3 = PubIfDecisionPLAN_MDL_B.Product1_h -
      PubIfDecisionPLAN_MDL_B.Product_m2;

    /* Lookup_n-D: '<S74>/1-D Lookup Table1' incorporates:
     *  Sum: '<S74>/Add'
     */
    PubIfDecisionPLAN_MDL_B.uDLookupTable1_o = look1_iflf_binlcpw
      (PubIfDecisionPLAN_MDL_B.Add_o3,
       rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrXAxis,
       rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrYAxis, 1U);

    /* RelationalOperator: '<S80>/Compare' incorporates:
     *  Constant: '<S80>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_hz = (PubIfDecisionPLAN_MDL_B.Product1_h >=
      rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableTTCThres);

    /* RelationalOperator: '<S79>/Compare' incorporates:
     *  Constant: '<S79>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_lg = (*rtu_vxvRefMs >=
      rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableVelSubjThres);

    /* Logic: '<S74>/Logical Operator' */
    PubIfDecisionPLAN_MDL_B.LogicalOperator_c =
      (PubIfDecisionPLAN_MDL_B.Compare_hz && PubIfDecisionPLAN_MDL_B.Compare_lg);

    /* Switch: '<S74>/Switch2' */
    if (PubIfDecisionPLAN_MDL_B.LogicalOperator_c) {
      /* Switch: '<S74>/Switch2' */
      PubIfDecisionPLAN_MDL_B.Switch2_no =
        PubIfDecisionPLAN_MDL_B.uDLookupTable1_o;
    } else {
      /* Switch: '<S74>/Switch2' incorporates:
       *  Constant: '<S74>/Constant'
       */
      PubIfDecisionPLAN_MDL_B.Switch2_no = 1.0F;
    }

    /* End of Switch: '<S74>/Switch2' */

    /* Product: '<S74>/Product1' */
    PubIfDecisionPLAN_MDL_B.Product1_hc =
      PubIfDecisionPLAN_MDL_B.DecelFollowJerkTTCCorrChar *
      PubIfDecisionPLAN_MDL_B.Switch2_no;

    /* Switch: '<S74>/Switch3' */
    if (PubIfDecisionPLAN_MDL_B.RelationalOperator_ie) {
      /* Switch: '<S74>/Switch3' incorporates:
       *  Constant: '<S74>/Constant4'
       */
      PubIfDecisionPLAN_MDL_B.Switch3_k = 1.0F;
    } else {
      /* Switch: '<S74>/Switch3' */
      PubIfDecisionPLAN_MDL_B.Switch3_k = PubIfDecisionPLAN_MDL_B.Product1_hc;
    }

    /* End of Switch: '<S74>/Switch3' */

    /* Lookup_n-D: '<S74>/1-D Lookup Table2' */
    PubIfDecisionPLAN_MDL_B.uDLookupTable2_e = look1_iflf_binlcpw
      (*rtu_LONC_VLC_InternalAcc, rtCP_uDLookupTable2_bp01Data_h1,
       rtCP_uDLookupTable2_tableData_o, 1U);

    /* MinMax: '<S74>/MinMax2' */
    deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.Switch3_k,
                       PubIfDecisionPLAN_MDL_B.uDLookupTable2_e);

    /* MinMax: '<S74>/MinMax2' */
    PubIfDecisionPLAN_MDL_B.MinMax2_f = deltaVelCC;

    /* RelationalOperator: '<S78>/Compare' incorporates:
     *  Constant: '<S78>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Compare_od = (*rtu_vxvRefMs > 0.6F);

    /* Switch: '<S74>/Switch' */
    if (PubIfDecisionPLAN_MDL_B.Compare_od) {
      /* Switch: '<S74>/Switch' */
      PubIfDecisionPLAN_MDL_B.Switch_nv = PubIfDecisionPLAN_MDL_B.MinMax2_f;
    } else {
      /* Switch: '<S74>/Switch' incorporates:
       *  Constant: '<S74>/Constant2'
       */
      PubIfDecisionPLAN_MDL_B.Switch_nv = 1.0F;
    }

    /* End of Switch: '<S74>/Switch' */

    /* Product: '<S74>/Product' */
    PubIfDecisionPLAN_MDL_B.Product_pu = PubIfDecisionPLAN_MDL_B.decelFollowJerk
      * PubIfDecisionPLAN_MDL_B.Switch_nv;

    /* Switch: '<S74>/Switch1' */
    if (PubIfDecisionPLAN_MDL_B.LongCtrl_ForceStop) {
      /* Switch: '<S74>/Switch1' */
      PubIfDecisionPLAN_MDL_B.Switch1_b =
        PubIfDecisionPLAN_MDL_B.uDLookupTable_g;
    } else {
      /* Switch: '<S74>/Switch1' */
      PubIfDecisionPLAN_MDL_B.Switch1_b = PubIfDecisionPLAN_MDL_B.Product_pu;
    }

    /* End of Switch: '<S74>/Switch1' */

    /* Chart: '<S74>/OverrideJerk' incorporates:
     *  Constant: '<S74>/Constant1'
     *  Constant: '<S9>/FollowtCycle'
     */
    if (PubIfDecisionPLAN_MDL_B.ACCModeSts == 5) {
      PubIfDecisionPLAN_MDL_B.VlcInternalAccK1 = *rtu_LONC_VLC_InternalAcc;

      /* Outputs for Function Call SubSystem: '<S81>/lowerJerkOverrideCalc' */
      /* Lookup_n-D: '<S82>/1-D Lookup Table' */
      PubIfDecisionPLAN_MDL_B.uDLookupTable_l0 = look1_iflf_binlcpw
        (PubIfDecisionPLAN_MDL_B.VlcInternalAccK1, rtCP_uDLookupTable_bp01Data,
         rtCP_uDLookupTable_tableData, 3U);

      /* End of Outputs for SubSystem: '<S81>/lowerJerkOverrideCalc' */
      PubIfDecisionPLAN_MDL_B.lowerJerkOverride =
        PubIfDecisionPLAN_MDL_B.uDLookupTable_l0;
    } else if (*rtu_LONC_VLC_InternalAcc > 0.0F) {
      PubIfDecisionPLAN_MDL_B.lowerJerkOverride = fminf(0.0F, 3.0F * 0.05F +
        PubIfDecisionPLAN_MDL_B.lowerJerkOverride);
    } else {
      PubIfDecisionPLAN_MDL_B.lowerJerkOverride = 0.0F;
    }

    tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.ACCModeSts != 3) &&
                         (PubIfDecisionPLAN_MDL_B.ACCModeSts != 4) &&
                         (PubIfDecisionPLAN_MDL_B.ACCModeSts != 5) &&
                         (PubIfDecisionPLAN_MDL_B.ACCModeSts != 6) &&
                         (PubIfDecisionPLAN_MDL_B.ACCModeSts != 9));
    if (tmpForInput_idx_0) {
      PubIfDecisionPLAN_MDL_B.lowerJerkOverride = 0.0F;
    }

    /* End of Chart: '<S74>/OverrideJerk' */

    /* MinMax: '<S74>/MinMax1' */
    temp = fminf(PubIfDecisionPLAN_MDL_B.Switch1_b,
                 PubIfDecisionPLAN_MDL_B.lowerJerkOverride);

    /* MinMax: '<S74>/MinMax1' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkFollow = temp;

    /* Product: '<S72>/Product' incorporates:
     *  Constant: '<S9>/FollowtCycle'
     */
    PubIfDecisionPLAN_MDL_B.Product_m2c =
      PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkFollow * 0.05F;

    /* Sum: '<S72>/Add2' */
    PubIfDecisionPLAN_MDL_B.Add2_p = *rtu_LONC_VLC_InternalAcc +
      PubIfDecisionPLAN_MDL_B.Product_m2c;

    /* MinMax: '<S72>/MinMax' */
    deltaVelCC = fmaxf(PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowFilt,
                       PubIfDecisionPLAN_MDL_B.Add2_p);

    /* MinMax: '<S72>/MinMax' */
    PubIfDecisionPLAN_MDL_B.MinMax_m = deltaVelCC;

    /* MinMax: '<S72>/MinMax1' */
    temp = fminf(PubIfDecisionPLAN_MDL_B.MinMax_m,
                 PubIfDecisionPLAN_MDL_B.Add1_bh);

    /* MinMax: '<S72>/MinMax1' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterJerk = temp;

    /* Sum: '<S76>/Add' incorporates:
     *  Constant: '<S76>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandFollow = 0.2F +
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowFilt;

    /* Sum: '<S76>/Add1' incorporates:
     *  Constant: '<S76>/Constant1'
     */
    PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandFollow =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowFilt - 0.2F;

    /* UnitDelay: '<S50>/Output' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_Follow_Counter =
      PubIfDecisionPLAN_MDL_DW.Output_DSTATE_j;

    /* Sum: '<S65>/FixPt Sum1' incorporates:
     *  Constant: '<S65>/FixPt Constant'
     */
    PubIfDecisionPLAN_MDL_B.FixPtSum1_i = (uint8_T)((uint32_T)
      PubIfDecisionPLAN_MDL_B.LongCtrl_Follow_Counter + ((uint8_T)1U));

    /* Switch: '<S66>/FixPt Switch' */
    if (PubIfDecisionPLAN_MDL_B.FixPtSum1_i > ((uint8_T)15U)) {
      /* Switch: '<S66>/FixPt Switch' incorporates:
       *  Constant: '<S66>/Constant'
       */
      PubIfDecisionPLAN_MDL_B.FixPtSwitch_b = ((uint8_T)0U);
    } else {
      /* Switch: '<S66>/FixPt Switch' */
      PubIfDecisionPLAN_MDL_B.FixPtSwitch_b =
        PubIfDecisionPLAN_MDL_B.FixPtSum1_i;
    }

    /* End of Switch: '<S66>/FixPt Switch' */
  }

  /* End of Outputs for SubSystem: '<S9>/FollowCtrl' */

  /* Chart: '<S11>/Arbitrate' incorporates:
   *  Constant: '<S145>/Constant2'
   *  Constant: '<S145>/Constant3'
   */
  PubIfDecisionPLAN_MDL_B.velPlanEffect = 0U;
  if ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 3) ||
      (PubIfDecisionPLAN_MDL_B.ACCModeSts == 4) ||
      (PubIfDecisionPLAN_MDL_B.ACCModeSts == 5) ||
      (PubIfDecisionPLAN_MDL_B.ACCModeSts == 6) ||
      (PubIfDecisionPLAN_MDL_B.ACCModeSts == 9)) {
    if (rtu_TOS_ACCP0->targetExistP0) {
      if (PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollow <
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC) {
        if (PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollow <
            PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC) {
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollow;
          PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandFollow;
          PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandFollow;
          PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkFollow;
          PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkFollow;
          PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag = 4.0;
        } else {
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC;
          PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandIC;
          PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandIC;
          PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkIC;
          PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb =
            PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkIC;
          PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag = 2.0;
        }
      } else if (PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC <
                 PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandCC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandCC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkCC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkCC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag = 1.0;
      } else {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandIC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandIC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkIC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkIC;
        PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag = 2.0;
      }
    } else if (PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC <
               PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandCC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandCC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkCC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkCC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag = 1.0;
    } else {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandIC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandIC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkIC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkIC;
      PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag = 2.0;
    }

    if (!(PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb <
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD)) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelORD;
      PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb =
        PubIfDecisionPLAN_MDL_B.upperBandORD;
      PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb =
        PubIfDecisionPLAN_MDL_B.lowerBandORD;
      PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb =
        rtP_P_LongCtrl_ORDupperJerk;
      PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb =
        rtP_P_LongCtrl_ORDlowerJerk;
      PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag = 3.0;
    }

    if (PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag == 1.0) {
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb =
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelCCCtrlAfterJerk;
      PubIfDecisionPLAN_MDL_B.velPlanEffect = 1U;
    } else {
      if (PubIfDecisionPLAN_MDL_B.LongCtrl_ArbFlag == 4.0) {
        PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb =
          PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterJerk;
        PubIfDecisionPLAN_MDL_B.velPlanEffect = 2U;
      }
    }
  } else {
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb = 0.0F;
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb = 0.0F;
    PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb = 0.0F;
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb = 0.0F;
    PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb = 0.0F;
  }

  /* End of Chart: '<S11>/Arbitrate' */

  /* RelationalOperator: '<S15>/Compare' incorporates:
   *  Constant: '<S15>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_jb = (rtu_VSM_LON_CTRL->HWAAccControlSts ==
    ((uint8_T)5U));

  /* Chart: '<S10>/AL' */
  if (PubIfDecisionPLAN_MDL_B.LongCtrl_DrivingMode == 0) {
    temp = PubIfDecisionPLAN_MDL_B.AcceUpperLimitNormalMode;
  } else if (PubIfDecisionPLAN_MDL_B.LongCtrl_DrivingMode == 1) {
    temp = PubIfDecisionPLAN_MDL_B.AcceUpperLimitSportMode;
  } else if (PubIfDecisionPLAN_MDL_B.LongCtrl_DrivingMode == 6) {
    temp = PubIfDecisionPLAN_MDL_B.AcceUpperLimitEcoMode;
  } else {
    temp = PubIfDecisionPLAN_MDL_B.AcceUpperLimitNormalMode;
  }

  if (PubIfDecisionPLAN_MDL_B.Compare_jb) {
    temp = fminf(0.0F, temp);
  }

  PubIfDecisionPLAN_MDL_B.LongCtrl_accelAL = fmaxf
    (PubIfDecisionPLAN_MDL_B.AcceLowerLimit, fminf
     (PubIfDecisionPLAN_MDL_B.LongCtrl_accelArb, temp));
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandAL = fmaxf
    (PubIfDecisionPLAN_MDL_B.LongCtrl_accelAL, fminf
     (PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandArb, temp));
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandAL = fmaxf
    (PubIfDecisionPLAN_MDL_B.AcceLowerLimit, fminf
     (PubIfDecisionPLAN_MDL_B.LongCtrl_accelAL,
      PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandArb));
  PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkAL =
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkArb;
  PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkAL =
    PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkArb;

  /* End of Chart: '<S10>/AL' */

  /* Chart: '<S32>/Chart' incorporates:
   *  Constant: '<S32>/Constant'
   *  Constant: '<S32>/Constant1'
   *  Constant: '<S32>/Constant10'
   *  Constant: '<S32>/Constant11'
   *  Constant: '<S32>/Constant12'
   *  Constant: '<S32>/Constant13'
   *  Constant: '<S32>/Constant14'
   *  Constant: '<S32>/Constant15'
   *  Constant: '<S32>/Constant16'
   *  Constant: '<S32>/Constant2'
   *  Constant: '<S32>/Constant3'
   *  Constant: '<S32>/Constant4'
   *  Constant: '<S32>/Constant5'
   *  Constant: '<S32>/Constant6'
   *  Constant: '<S32>/Constant7'
   *  Constant: '<S32>/Constant8'
   *  Constant: '<S32>/Constant9'
   */
  i = 1U;
  temp = roundf(rtP_P_LongCtrl_CCtTotVelPlan / rtP_P_LongCtrl_CCtStepVelPlan);
  if (temp < 256.0F) {
    if (temp >= 0.0F) {
      iMax = (uint8_T)temp;
    } else {
      iMax = 0U;
    }
  } else {
    iMax = MAX_uint8_T;
  }

  temp = *rtu_vxvRefMs;
  deltaVelCC = *rtu_LONC_VLC_InternalAcc;
  for (i_2 = 0; i_2 < 8; i_2++) {
    PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanCC[i_2] = 0.0F;
  }

  while (i <= iMax) {
    if (PubIfDecisionPLAN_MDL_B.LongCtrl_DrivingMode == 0) {
      PubIfDecisionPLAN_MDL_DW.accelMaxAL = fmaxf
        (rtP_P_LongCtrl_CCaccelMinNormAL, temp * rtP_P_LongCtrl_CCkNorm +
         rtP_P_LongCtrl_CCbNorm);
    }

    if (PubIfDecisionPLAN_MDL_B.LongCtrl_DrivingMode == 1) {
      PubIfDecisionPLAN_MDL_DW.accelMaxAL = fmaxf
        (rtP_P_LongCtrl_CCaccelMinSportAL, temp * rtP_P_LongCtrl_CCkSport +
         rtP_P_LongCtrl_CCbSport);
    }

    if (PubIfDecisionPLAN_MDL_B.LongCtrl_DrivingMode == 6) {
      PubIfDecisionPLAN_MDL_DW.accelMaxAL = fmaxf(rtP_P_LongCtrl_CCaccelMinECOAL,
        temp * rtP_P_LongCtrl_CCkECO + rtP_P_LongCtrl_CCbECO);
    }

    if (PubIfDecisionPLAN_MDL_B.fastDecel == 1.0) {
      t = rtP_P_LongCtrl_CCaccelMinFastDecel;
    } else {
      t = rtP_P_LongCtrl_CCaccelMinNoFastDecel;
    }

    tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC >= deltaVelCC)
                         && (deltaVelCC <= 0.0F));
    if (tmpForInput_idx_0) {
      t = fminf(fminf(PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC,
                      PubIfDecisionPLAN_MDL_DW.accelMaxAL),
                rtP_P_LongCtrl_CCtStepVelPlan *
                rtP_P_LongCtrl_CCaccelCCNeg2PosJerk + deltaVelCC);
    } else {
      tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC >=
                            deltaVelCC) && (deltaVelCC >= 0.0F));
      if (tmpForInput_idx_0) {
        t = fminf(fminf(PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC,
                        PubIfDecisionPLAN_MDL_DW.accelMaxAL),
                  rtP_P_LongCtrl_CCtStepVelPlan *
                  rtP_P_LongCtrl_CCaccelCCPosJerk + deltaVelCC);
      } else {
        tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC <=
                              deltaVelCC) && (deltaVelCC >= 0.0F));
        if (tmpForInput_idx_0) {
          t = fmaxf(fmaxf(PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC, t),
                    rtP_P_LongCtrl_CCtStepVelPlan * rtP_P_LongCtrl_CCdecelCCJerk
                    + deltaVelCC);
        } else {
          t = fmaxf(fmaxf(PubIfDecisionPLAN_MDL_B.LongCtrl_accelCC, t),
                    rtP_P_LongCtrl_CCtStepVelPlan *
                    rtP_P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc + deltaVelCC);
        }
      }
    }

    temp += (t + deltaVelCC) / 2.0F * rtP_P_LongCtrl_CCtStepVelPlan;
    deltaVelCC = t;
    PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanCC[i - 1] = temp;
    i_0 = (int32_T)(i + 1U);
    if ((uint32_T)i_0 > 255U) {
      i_0 = 255;
    }

    i = (uint8_T)i_0;
  }

  /* End of Chart: '<S32>/Chart' */
  for (i_2 = 0; i_2 < 8; i_2++) {
    /* SignalConversion: '<S25>/Signal Conversion' */
    PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanFollow[i_2] =
      PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanOpt[i_2];
  }

  /* MultiPortSwitch: '<S25>/Multiport Switch' */
  switch (PubIfDecisionPLAN_MDL_B.velPlanEffect) {
   case 0:
    /* MultiPortSwitch: '<S25>/Multiport Switch' incorporates:
     *  Constant: '<S25>/Constant'
     */
    for (i_2 = 0; i_2 < 8; i_2++) {
      PubIfDecisionPLAN_MDL_B.MultiportSwitch[i_2] = 255.0F;
    }
    break;

   case 1:
    /* MultiPortSwitch: '<S25>/Multiport Switch' */
    for (i_2 = 0; i_2 < 8; i_2++) {
      PubIfDecisionPLAN_MDL_B.MultiportSwitch[i_2] =
        PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanCC[i_2];
    }
    break;

   default:
    /* MultiPortSwitch: '<S25>/Multiport Switch' incorporates:
     *  SignalConversion: '<S25>/Signal Conversion'
     */
    for (i_2 = 0; i_2 < 8; i_2++) {
      PubIfDecisionPLAN_MDL_B.MultiportSwitch[i_2] =
        PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanFollow[i_2];
    }
    break;
  }

  /* End of MultiPortSwitch: '<S25>/Multiport Switch' */
  for (i_2 = 0; i_2 < 8; i_2++) {
    /* SignalConversion: '<S25>/Signal Conversion1' incorporates:
     *  MultiPortSwitch: '<S25>/Multiport Switch'
     */
    PubIfDecisionPLAN_MDL_B.LongCtrl_velSubjPlanArb[i_2] =
      PubIfDecisionPLAN_MDL_B.MultiportSwitch[i_2];
  }

  /* SignalConversion: '<S108>/Signal Conversion' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_Cur =
    *rtu_EHRV2_ROAD_INFO_i_road_curvature;

  /* SignalConversion: '<S108>/Signal Conversion3' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurFar =
    *rtu_EHRV2_ROAD_INFO_i_road_curvature_far;

  /* SignalConversion: '<S108>/Signal Conversion4' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurFarDis =
    *rtu_EHRV2_ROAD_INFO_i_road_curvature_far_distance;

  /* SignalConversion: '<S111>/Signal Conversion6' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_L1_KeepLineSts =
    PubIfDecisionPLAN_MDL_B.KeepLineSts[0];

  /* SignalConversion: '<S111>/Signal Conversion7' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_R1_KeepLineSts =
    PubIfDecisionPLAN_MDL_B.KeepLineSts[1];

  /* RelationalOperator: '<S157>/Compare' incorporates:
   *  Constant: '<S157>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_lk = (rtu_TOS_ACCP0->targetExistP0 == true);

  /* RelationalOperator: '<S158>/Compare' incorporates:
   *  Constant: '<S158>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ity =
    (PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollow <
     rtP_P_LongCtrl_SJaccelFollowThresEnableBrkPrefer);

  /* MinMax: '<S152>/MinMax' */
  temp = PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlanOpt[0];
  for (JminIni = 0; JminIni < 39; JminIni++) {
    temp = fminf(temp, PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjPlanOpt[JminIni
                 + 1]);
  }

  /* MinMax: '<S152>/MinMax' */
  PubIfDecisionPLAN_MDL_B.MinMax_c = temp;

  /* RelationalOperator: '<S159>/Compare' incorporates:
   *  Constant: '<S159>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_cy = (PubIfDecisionPLAN_MDL_B.MinMax_c <
    rtP_P_LongCtrl_SJaccelSubjPlanOptThresEnableBrkPrefer);

  /* RelationalOperator: '<S160>/Compare' incorporates:
   *  Constant: '<S160>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_oy = (*rtu_LONC_VLC_InternalAcc <
    rtP_P_LongCtrl_SJVlcInternalAccThresEnableBrkPrefer);

  /* RelationalOperator: '<S161>/Compare' incorporates:
   *  Constant: '<S161>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_iq = (*rtu_axvRoadSlopeMs2 <
    rtP_P_LongCtrl_SJaxvRoadSlopeThresEnableBrkPrefer);

  /* RelationalOperator: '<S162>/Compare' incorporates:
   *  Constant: '<S162>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_oz = (*rtu_axvRefMs2 >
    rtP_P_LongCtrl_SJaccelSubjThresEnableBrkPrefer);

  /* RelationalOperator: '<S163>/Compare' incorporates:
   *  Constant: '<S163>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_a3 = (PubIfDecisionPLAN_MDL_B.Product1_h <
    rtP_P_LongCtrl_SJttcThresEnableBrkPrefer);

  /* RelationalOperator: '<S164>/Compare' incorporates:
   *  Constant: '<S164>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ku = (PubIfDecisionPLAN_MDL_B.ACCModeSts ==
    ((uint8_T)3U));

  /* RelationalOperator: '<S165>/Compare' incorporates:
   *  Constant: '<S165>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_dd = (*rtu_vxvRefMs >
    rtP_P_LongCtrl_SJvelSubjThresEnableBrkPrefer);

  /* Logic: '<S152>/Logical Operator' */
  PubIfDecisionPLAN_MDL_B.BrakePrefer = (PubIfDecisionPLAN_MDL_B.Compare_ku &&
    PubIfDecisionPLAN_MDL_B.Compare_lk && PubIfDecisionPLAN_MDL_B.Compare_ity &&
    PubIfDecisionPLAN_MDL_B.Compare_cy && PubIfDecisionPLAN_MDL_B.Compare_oy &&
    PubIfDecisionPLAN_MDL_B.Compare_iq && PubIfDecisionPLAN_MDL_B.Compare_oz &&
    PubIfDecisionPLAN_MDL_B.Compare_a3 && PubIfDecisionPLAN_MDL_B.Compare_dd);

  /* Logic: '<S152>/Logical Operator1' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_BrakePrefer =
    (PubIfDecisionPLAN_MDL_B.BrakePrefer || PubIfDecisionPLAN_MDL_B.Compare_jb);

  /* Lookup_n-D: '<S153>/1-D Lookup Table' */
  PubIfDecisionPLAN_MDL_B.uDLookupTable_n = look1_iflf_binlcpw
    (*rtu_axvRoadSlopeMs2, rtP_P_LongCtrl_distThreDecToStopXAxis,
     rtP_P_LongCtrl_distThreDecToStopYAxis, 2U);

  /* Gain: '<S155>/Gain' */
  PubIfDecisionPLAN_MDL_B.Gain_d = 0.277777791F *
    PubIfDecisionPLAN_MDL_B.DataTypeConversion_l;

  /* Chart: '<S155>/DriveOff_Judge' */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c59_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c59_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_Initialize;
    PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled_j = 3U;
  } else {
    switch (PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL) {
     case PubIfDecisionPLAN_MDL_IN_DriveOff_DisEnough:
      tmpForInput_idx_0 = ((*rtu_vxvRefMs >=
                            rtP_P_LongCtrl_FollowDrvOffStandstillVelThres) ||
                           (PubIfDecisionPLAN_MDL_B.Gain_d <=
                            rtP_P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions)
                           || ((PubIfDecisionPLAN_MDL_B.ACCModeSts != 5) &&
        rtu_TOS_ACCP0->targetExistP0 &&
        (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify <=
         PubIfDecisionPLAN_MDL_DW.DesiredDistGap -
         rtP_P_LongCtrl_FollowDrvOffDistExitNoOverride)) ||
                           ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 5) &&
                            rtu_TOS_ACCP0->targetExistP0 &&
                            (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify <=
        PubIfDecisionPLAN_MDL_DW.DesiredDistGap -
        rtP_P_LongCtrl_FollowDrvOffDistExitOverride)));
      if (tmpForInput_idx_0) {
        tmpForInput_idx_0 = ((*rtu_vxvRefMs <
                              rtP_P_LongCtrl_FollowDrvOffStandstillVelThres) &&
                             (PubIfDecisionPLAN_MDL_B.Gain_d >
                              rtP_P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions)
                             && rtu_TOS_ACCP0->targetExistP0 &&
                             (((rtu_TOS_ACCP0->vxRelP0 >
          rtP_P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff) &&
          (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify >
           rtP_P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff)) ||
                              ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 5) &&
          (rtu_TOS_ACCP0->vxRelP0 >
           rtP_P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff -
           rtP_P_LongCtrl_FollowDrvOffVelCorrVelFullFillOverride) &&
          (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify >
           rtP_P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff -
           rtP_P_LongCtrl_FollowDrvOffDistCorrVelFullFillOverride))));
        if (tmpForInput_idx_0) {
          PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL =
            PubIfDecisionPLAN_MDL_IN_DriveOff_Follow;
          PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled_j = 2U;
        } else {
          PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL =
            PubIfDecisionPLAN_MDL_IN_DriveOff_Judge_TargetExist;
          PubIfDecisionPLAN_MDL_DW.DesiredDistGap =
            PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur +
            rtP_P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff;
          PubIfDecisionPLAN_MDL_DW.dxSensObj_modify = rtu_TOS_ACCP0->rangeP0;
        }
      } else {
        PubIfDecisionPLAN_MDL_DW.DesiredDistGap =
          PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur +
          rtP_P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff;
        PubIfDecisionPLAN_MDL_DW.dxSensObj_modify = rtu_TOS_ACCP0->rangeP0;
      }
      break;

     case PubIfDecisionPLAN_MDL_IN_DriveOff_Follow:
      tmpForInput_idx_0 = ((*rtu_vxvRefMs >=
                            rtP_P_LongCtrl_FollowDrvOffStandstillVelThres) ||
                           (PubIfDecisionPLAN_MDL_B.Gain_d <=
                            rtP_P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions)
                           || (!rtu_TOS_ACCP0->targetExistP0) ||
                           (rtu_TOS_ACCP0->targetExistP0 &&
                            (((PubIfDecisionPLAN_MDL_B.ACCModeSts != 5) &&
        ((rtu_TOS_ACCP0->vxRelP0 <=
          rtP_P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff -
          rtP_P_LongCtrl_FollowDrvOffVelExitVelCorrNoOverride) ||
         (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify <=
          rtP_P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff -
          rtP_P_LongCtrl_FollowDrvOffVelExitDistCorrNoOverride))) ||
        ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 5) && ((rtu_TOS_ACCP0->vxRelP0 <=
        rtP_P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff -
        rtP_P_LongCtrl_FollowDrvOffVelExitVelCorrOverride) ||
        (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify <=
         rtP_P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff -
         rtP_P_LongCtrl_FollowDrvOffVelExitDistCorrOverride))))));
      if (tmpForInput_idx_0) {
        tmpForInput_idx_0 = ((*rtu_vxvRefMs <
                              rtP_P_LongCtrl_FollowDrvOffStandstillVelThres) &&
                             (PubIfDecisionPLAN_MDL_B.Gain_d >
                              rtP_P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions)
                             && ((!rtu_TOS_ACCP0->targetExistP0) ||
          (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify >
           PubIfDecisionPLAN_MDL_DW.DesiredDistGap) ||
          ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 5) &&
           rtu_TOS_ACCP0->targetExistP0 &&
           (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify >
            PubIfDecisionPLAN_MDL_DW.DesiredDistGap -
            rtP_P_LongCtrl_FollowDrvOffDistCorrDistFullFillOverride))));
        if (tmpForInput_idx_0) {
          PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL =
            PubIfDecisionPLAN_MDL_IN_DriveOff_DisEnough;
          PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled_j = 1U;
        } else {
          PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL =
            PubIfDecisionPLAN_MDL_IN_DriveOff_Judge_TargetExist;
          PubIfDecisionPLAN_MDL_DW.DesiredDistGap =
            PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur +
            rtP_P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff;
          PubIfDecisionPLAN_MDL_DW.dxSensObj_modify = rtu_TOS_ACCP0->rangeP0;
        }
      } else {
        PubIfDecisionPLAN_MDL_DW.DesiredDistGap =
          PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur +
          rtP_P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff;
        PubIfDecisionPLAN_MDL_DW.dxSensObj_modify = rtu_TOS_ACCP0->rangeP0;
      }
      break;

     case PubIfDecisionPLAN_MDL_IN_DriveOff_Judge_TargetExist:
      tmpForInput_idx_0 = ((*rtu_vxvRefMs <
                            rtP_P_LongCtrl_FollowDrvOffStandstillVelThres) &&
                           (PubIfDecisionPLAN_MDL_B.Gain_d >
                            rtP_P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions)
                           && rtu_TOS_ACCP0->targetExistP0 &&
                           (rtu_TOS_ACCP0->ObjTypeP0 != 6) &&
                           (((rtu_TOS_ACCP0->vxRelP0 >
        rtP_P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff) &&
        (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify >
         rtP_P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff)) ||
                            ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 5) &&
        (rtu_TOS_ACCP0->vxRelP0 > rtP_P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff
         - rtP_P_LongCtrl_FollowDrvOffVelCorrVelFullFillOverride) &&
        (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify >
         rtP_P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff -
         rtP_P_LongCtrl_FollowDrvOffDistCorrVelFullFillOverride))));
      if (tmpForInput_idx_0) {
        PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_DriveOff_Follow;
        PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled_j = 2U;
      } else {
        tmpForInput_idx_0 = ((*rtu_vxvRefMs <
                              rtP_P_LongCtrl_FollowDrvOffStandstillVelThres) &&
                             (PubIfDecisionPLAN_MDL_B.Gain_d >
                              rtP_P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions)
                             && ((!rtu_TOS_ACCP0->targetExistP0) ||
          (rtu_TOS_ACCP0->targetExistP0 && (rtu_TOS_ACCP0->ObjTypeP0 != 6) &&
           (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify >
            PubIfDecisionPLAN_MDL_DW.DesiredDistGap)) ||
          ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 5) &&
           rtu_TOS_ACCP0->targetExistP0 &&
           (PubIfDecisionPLAN_MDL_DW.dxSensObj_modify >
            PubIfDecisionPLAN_MDL_DW.DesiredDistGap -
            rtP_P_LongCtrl_FollowDrvOffDistCorrDistFullFillOverride))));
        if (tmpForInput_idx_0) {
          PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL =
            PubIfDecisionPLAN_MDL_IN_DriveOff_DisEnough;
          PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled_j = 1U;
        } else {
          PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled_j = 0U;
          PubIfDecisionPLAN_MDL_DW.DesiredDistGap =
            PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur +
            rtP_P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff;
          PubIfDecisionPLAN_MDL_DW.dxSensObj_modify = rtu_TOS_ACCP0->rangeP0;
        }
      }
      break;

     default:
      /* case IN_Initialize: */
      PubIfDecisionPLAN_MDL_DW.is_c59_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_DriveOff_Judge_TargetExist;
      PubIfDecisionPLAN_MDL_DW.DesiredDistGap =
        PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur +
        rtP_P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff;
      PubIfDecisionPLAN_MDL_DW.dxSensObj_modify = rtu_TOS_ACCP0->rangeP0;
      break;
    }
  }

  /* End of Chart: '<S155>/DriveOff_Judge' */

  /* RelationalOperator: '<S171>/Compare' incorporates:
   *  Constant: '<S171>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ek0 = (PubIfDecisionPLAN_MDL_B.Compare_it ==
    false);

  /* Switch: '<S155>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.Compare_ek0) {
    /* Switch: '<S155>/Switch' */
    PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled =
      PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled_j;
  } else {
    /* Switch: '<S155>/Switch' incorporates:
     *  Constant: '<S155>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled = ((uint8_T)0U);
  }

  /* End of Switch: '<S155>/Switch' */

  /* RelationalOperator: '<S172>/Compare' incorporates:
   *  Constant: '<S172>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.LongCtrl_DriveOffConditonFulfilled =
    (PubIfDecisionPLAN_MDL_B.DriveOffConditonFulfilled > ((uint8_T)0U));

  /* Chart: '<S153>/DeceleToStop' */
  tmpForInput_idx_0 = (((PubIfDecisionPLAN_MDL_B.ACCModeSts == 3) ||
                        (PubIfDecisionPLAN_MDL_B.ACCModeSts == 4)) &&
                       rtu_TOS_ACCP0->targetExistP0);
  if (tmpForInput_idx_0) {
    PubIfDecisionPLAN_MDL_B.velSubj = *rtu_vxvRefMs;
    PubIfDecisionPLAN_MDL_B.velTargetRel = rtu_TOS_ACCP0->vxRelP0;

    /* Outputs for Function Call SubSystem: '<S166>/VxTargetCalc' */
    /* Sum: '<S168>/Add' */
    PubIfDecisionPLAN_MDL_B.velTargetAbs = PubIfDecisionPLAN_MDL_B.velSubj +
      PubIfDecisionPLAN_MDL_B.velTargetRel;

    /* End of Outputs for SubSystem: '<S166>/VxTargetCalc' */
    temp = PubIfDecisionPLAN_MDL_B.velTargetAbs;
    PubIfDecisionPLAN_MDL_B.distTargRel = rtu_TOS_ACCP0->rangeP0;

    /* Outputs for Function Call SubSystem: '<S166>/DresCalc' */
    /* Sum: '<S167>/Add' incorporates:
     *  Constant: '<S167>/P_LongCtrl_SJdStop'
     */
    PubIfDecisionPLAN_MDL_B.distRes = PubIfDecisionPLAN_MDL_B.distTargRel -
      rtP_P_LongCtrl_SJdStop;

    /* End of Outputs for SubSystem: '<S166>/DresCalc' */
    tmpForInput_idx_0 = ((temp < rtP_P_LongCtrl_velTargetThreDecleToStop) &&
                         (*rtu_vxvRefMs < rtP_P_LongCtrl_velSubjThreDecToStop) &&
                         (PubIfDecisionPLAN_MDL_B.distRes <
                          PubIfDecisionPLAN_MDL_B.uDLookupTable_n));
    PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop = (tmpForInput_idx_0 ||
      PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop);
    PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop = ((!(*rtu_LONC_VLC_InternalAcc
      > 0.0F)) && PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop);
  } else {
    tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 6) ||
                         (PubIfDecisionPLAN_MDL_B.ACCModeSts == 9));
    PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop = tmpForInput_idx_0;
  }

  PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop =
    ((!PubIfDecisionPLAN_MDL_B.LongCtrl_DriveOffConditonFulfilled) &&
     PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop);
  tmpForInput_idx_0 = ((*rtu_vxvRefMs < 3.0F) &&
                       PubIfDecisionPLAN_MDL_B.Compare_it);
  PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop = (tmpForInput_idx_0 ||
    PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop);

  /* End of Chart: '<S153>/DeceleToStop' */

  /* SignalConversion generated from: '<S154>/ACC_DisplayBar1' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[0] =
    rtu_TOS_ACCP0->rangeP0;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[1] =
    rtu_TOS_ACCP2->rangeP2;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[2] =
    rtu_TOS_ACCP3->rangeP3;

  /* SignalConversion generated from: '<S154>/ACC_DisplayBar1' */
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport6[0] =
    rtu_TOS_ACCP0->targetExistP0;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport6[1] =
    rtu_TOS_ACCP2->targetExistP2;
  PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport6[2] =
    rtu_TOS_ACCP3->targetExistP3;

  /* Outputs for Iterator SubSystem: '<S154>/ACC_DisplayBar1' incorporates:
   *  ForEach: '<S169>/For Each'
   */
  for (ForEach_itr = 0; ForEach_itr < 3; ForEach_itr++) {
    /* UnitDelay: '<S169>/Unit Delay34' */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].UnitDelay34 =
      PubIfDecisionPLAN_MDL_DW.CoreSubsys_es[ForEach_itr].UnitDelay34_DSTATE;

    /* MATLAB Function: '<S169>/ACC_DisplayBar' incorporates:
     *  Constant: '<S154>/Constant18'
     *  ForEachSliceSelector generated from: '<S169>/TargetExist'
     */
    PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar =
      PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].UnitDelay34;
    for (i_0 = 0; i_0 < 12; i_0++) {
      ScaleDis[i_0] = rtCP_Constant18_Value[i_0] *
        PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur;
      upScaleDis[i_0] = (rtCP_Constant18_Value[i_0] + 0.05F) *
        PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur;
      lowScaleDis[i_0] = (rtCP_Constant18_Value[i_0] - 0.05F) *
        PubIfDecisionPLAN_MDL_B.LongCtrl_distDesCur;
    }

    if ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 0) ||
        (PubIfDecisionPLAN_MDL_B.ACCModeSts == 7)) {
      PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 0U;
    } else if
        (!PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport6[ForEach_itr])
    {
      PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 0U;
    } else {
      switch (PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].UnitDelay34) {
       case 0:
        if (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[ForEach_itr]
            > ScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 7]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 4U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > ScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 3]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 3U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > ScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet - 1]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 2U;
        } else {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 1U;
        }
        break;

       case 1:
        if (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[ForEach_itr]
            > upScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 7]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 4U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > upScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 3]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 3U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > upScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet - 1]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 2U;
        } else {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 1U;
        }
        break;

       case 2:
        if (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[ForEach_itr]
            > upScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 7]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 4U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > upScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 3]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 3U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > lowScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet - 1]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 2U;
        } else {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 1U;
        }
        break;

       case 3:
        if (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[ForEach_itr]
            > upScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 7]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 4U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > lowScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 3]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 3U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > lowScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet - 1]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 2U;
        } else {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 1U;
        }
        break;

       case 4:
        if (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[ForEach_itr]
            > lowScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 7]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 4U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > lowScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet + 3]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 3U;
        } else if
            (PubIfDecisionPLAN_MDL_B.TmpSignalConversionAtACC_DisplayBar1Inport4[
             ForEach_itr] > lowScaleDis[rtu_VSM_LON_CTRL->ACC_TimeGapSet - 1]) {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 2U;
        } else {
          PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar = 1U;
        }
        break;
      }
    }

    /* End of MATLAB Function: '<S169>/ACC_DisplayBar' */

    /* ForEachSliceAssignment generated from: '<S169>/Signal_ACC_TgtObjBarDisp' */
    PubIfDecisionPLAN_MDL_B.ImpAsg_InsertedFor_Signal_ACC_TgtObjBarDisp_at_inport_0
      [ForEach_itr] = PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].
      DisplayBar;
  }

  /* End of Outputs for SubSystem: '<S154>/ACC_DisplayBar1' */

  /* SignalConversion: '<S154>/Signal Conversion' */
  PubIfDecisionPLAN_MDL_B.LongCtrl_TgtObjBarDisp =
    PubIfDecisionPLAN_MDL_B.ImpAsg_InsertedFor_Signal_ACC_TgtObjBarDisp_at_inport_0
    [0];

  /* SignalConversion: '<S154>/Signal Conversion1' */
  PubIfDecisionPLAN_MDL_B.SignalConversion1 =
    PubIfDecisionPLAN_MDL_B.ImpAsg_InsertedFor_Signal_ACC_TgtObjBarDisp_at_inport_0
    [1];

  /* SignalConversion: '<S154>/Signal Conversion2' */
  PubIfDecisionPLAN_MDL_B.SignalConversion2 =
    PubIfDecisionPLAN_MDL_B.ImpAsg_InsertedFor_Signal_ACC_TgtObjBarDisp_at_inport_0
    [2];

  /* Product: '<S156>/Divide' incorporates:
   *  Constant: '<S156>/Constant'
   *  Constant: '<S9>/P_LongCtrltCycle2'
   */
  PubIfDecisionPLAN_MDL_B.Divide_k = rtP_P_LongCtrl_WaitTime /
    rtP_P_LongCtrl_tCycle;

  /* Chart: '<S156>/Chart' */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c4_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c4_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c4_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_TorCtrlOff;
    PubIfDecisionPLAN_MDL_B.Cnt = 1.0;
    PubIfDecisionPLAN_MDL_B.TorCtrlReq = 0.0;
  } else {
    switch (PubIfDecisionPLAN_MDL_DW.is_c4_PubIfDecisionPLAN_MDL) {
     case PubIfDecisionPLAN_MDL_IN_TorCtrlOff:
      PubIfDecisionPLAN_MDL_B.TorCtrlReq = 0.0;
      if (PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanMin <
          rtP_P_LongCtrl_FollowcoefDistRelThresActiveTOR *
          PubIfDecisionPLAN_MDL_B.LongCtrl_distRelDesDistRelPlanNumMin) {
        PubIfDecisionPLAN_MDL_DW.is_c4_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_TorCtrlOnCounter;
        PubIfDecisionPLAN_MDL_B.Cnt = 1.0;
        PubIfDecisionPLAN_MDL_B.TorCtrlReq = 0.0;
      }
      break;

     case PubIfDecisionPLAN_MDL_IN_TorCtrlOn:
      PubIfDecisionPLAN_MDL_B.TorCtrlReq = 1.0;
      if (PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanMin >
          rtP_P_LongCtrl_FollowcoefDistRelThresActiveTOR *
          PubIfDecisionPLAN_MDL_B.LongCtrl_distRelDesDistRelPlanNumMin) {
        PubIfDecisionPLAN_MDL_DW.is_c4_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_TorCtrlOff;
        PubIfDecisionPLAN_MDL_B.Cnt = 1.0;
        PubIfDecisionPLAN_MDL_B.TorCtrlReq = 0.0;
      }
      break;

     default:
      /* case IN_TorCtrlOnCounter: */
      PubIfDecisionPLAN_MDL_B.TorCtrlReq = 0.0;
      if (PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanMin >
          rtP_P_LongCtrl_FollowcoefDistRelThresActiveTOR *
          PubIfDecisionPLAN_MDL_B.LongCtrl_distRelDesDistRelPlanNumMin) {
        PubIfDecisionPLAN_MDL_DW.is_c4_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_TorCtrlOff;
        PubIfDecisionPLAN_MDL_B.Cnt = 1.0;
        PubIfDecisionPLAN_MDL_B.TorCtrlReq = 0.0;
      } else {
        tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.LongCtrl_distRelPlanMin <
                              rtP_P_LongCtrl_FollowcoefDistRelThresActiveTOR *
                              PubIfDecisionPLAN_MDL_B.LongCtrl_distRelDesDistRelPlanNumMin)
                             && (PubIfDecisionPLAN_MDL_B.Cnt >
          PubIfDecisionPLAN_MDL_B.Divide_k));
        if (tmpForInput_idx_0) {
          PubIfDecisionPLAN_MDL_DW.is_c4_PubIfDecisionPLAN_MDL =
            PubIfDecisionPLAN_MDL_IN_TorCtrlOn;
          PubIfDecisionPLAN_MDL_B.Cnt = 1.0;
          PubIfDecisionPLAN_MDL_B.TorCtrlReq = 1.0;
        } else {
          PubIfDecisionPLAN_MDL_B.Cnt++;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S156>/Chart' */

  /* MinMax: '<S175>/MinMax' incorporates:
   *  Constant: '<S175>/Constant'
   */
  deltaVelCC = fmaxf(*rtu_vxvRefMs, 0.1F);

  /* MinMax: '<S175>/MinMax' */
  PubIfDecisionPLAN_MDL_B.MinMax_p = deltaVelCC;

  /* Product: '<S175>/Product' */
  PubIfDecisionPLAN_MDL_B.Product_m0 = rtu_TOS_ACCP0->rangeP0 /
    PubIfDecisionPLAN_MDL_B.MinMax_p;

  /* Chart: '<S156>/TakeOver' */
  tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.ACCModeSts == 3) &&
                       rtu_TOS_ACCP0->targetExistP0 &&
                       (((PubIfDecisionPLAN_MDL_B.Product_m0 <
    rtP_P_LongCtrl_FollowgapThresActiveTOR) &&
    (PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollow <
     rtP_P_LongCtrl_FollowaccelThresActiveTOR)) ||
                        ((PubIfDecisionPLAN_MDL_B.TorCtrlReq == 1.0) &&
    (rtu_TOS_ACCP0->vxRelP0 < rtP_P_LongCtrl_FollowvelTargRelThresActiveTOR))));
  PubIfDecisionPLAN_MDL_B.LongCtrl_tor = tmpForInput_idx_0;

  /* End of Outputs for SubSystem: '<S8>/AP' */

  /* BusCreator: '<S8>/Bus Creator1' incorporates:
   *  Constant: '<S8>/IntelligentCurveActive'
   */
  PubIfDecisionPLAN_MDL_B.BusCreator1.tor = PubIfDecisionPLAN_MDL_B.LongCtrl_tor;
  PubIfDecisionPLAN_MDL_B.BusCreator1.ACC_TgtObjBarDisp =
    PubIfDecisionPLAN_MDL_B.LongCtrl_TgtObjBarDisp;
  PubIfDecisionPLAN_MDL_B.BusCreator1.ACC_LeTgtObjBarDisp =
    PubIfDecisionPLAN_MDL_B.SignalConversion1;
  PubIfDecisionPLAN_MDL_B.BusCreator1.ACC_RiTgtObjBarDisp =
    PubIfDecisionPLAN_MDL_B.SignalConversion2;
  PubIfDecisionPLAN_MDL_B.BusCreator1.IntelligentCurveActive = false;

  /* SignalConversion generated from: '<Root>/PLAN_HMI_BUS' */
  *rty_PLAN_HMI_BUS_tor = PubIfDecisionPLAN_MDL_B.BusCreator1.tor;

  /* SignalConversion generated from: '<Root>/PLAN_HMI_BUS' */
  *rty_PLAN_HMI_BUS_ACC_TgtObjBarDisp =
    PubIfDecisionPLAN_MDL_B.BusCreator1.ACC_TgtObjBarDisp;

  /* SignalConversion generated from: '<Root>/PLAN_HMI_BUS' */
  *rty_PLAN_HMI_BUS_ACC_LeTgtObjBarDisp =
    PubIfDecisionPLAN_MDL_B.BusCreator1.ACC_LeTgtObjBarDisp;

  /* SignalConversion generated from: '<Root>/PLAN_HMI_BUS' */
  *rty_PLAN_HMI_BUS_ACC_RiTgtObjBarDisp =
    PubIfDecisionPLAN_MDL_B.BusCreator1.ACC_RiTgtObjBarDisp;

  /* SignalConversion generated from: '<Root>/PLAN_HMI_BUS' */
  *rty_PLAN_HMI_BUS_IntelligentCurveActive =
    PubIfDecisionPLAN_MDL_B.BusCreator1.IntelligentCurveActive;

  /* BusCreator: '<S8>/Bus Creator' */
  rty_PLAN_ACCPLAN->ACC_axvCvAim = PubIfDecisionPLAN_MDL_B.LongCtrl_accelAL;
  rty_PLAN_ACCPLAN->ACC_axv_ComfortBandLowerValue =
    PubIfDecisionPLAN_MDL_B.LongCtrl_lowerBandAL;
  rty_PLAN_ACCPLAN->ACC_axv_ComfortBandUpperValue =
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperBandAL;
  rty_PLAN_ACCPLAN->ACC_DecelerateJerk =
    PubIfDecisionPLAN_MDL_B.LongCtrl_lowerJerkAL;
  rty_PLAN_ACCPLAN->ACC_AccelerateJerk =
    PubIfDecisionPLAN_MDL_B.LongCtrl_upperJerkAL;
  rty_PLAN_ACCPLAN->ACC_BrakePrefer =
    PubIfDecisionPLAN_MDL_B.LongCtrl_BrakePrefer;

  /* Logic: '<S4>/AND' */
  PubIfDecisionPLAN_MDL_B.AND_e = (rtu_LSM_HWA->HWALeLineValid &&
    rtu_LSM_HWA->LeLineLcAvailable);

  /* Logic: '<S4>/AND1' */
  PubIfDecisionPLAN_MDL_B.AND1_a = (rtu_LSM_HWA->HWARiLineValid &&
    rtu_LSM_HWA->RiLineLcAvailable);

  /* RelationalOperator: '<S384>/Compare' incorporates:
   *  Constant: '<S384>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bd = (rtu_VSM_HMI->HWASts == ((uint8_T)3U));

  /* Logic: '<S189>/NOT' */
  PubIfDecisionPLAN_MDL_B.NOT_d =
    !PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_LciDrv;

  /* UnitDelay: '<S421>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_oc =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_e;

  /* UnitDelay: '<S421>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_jx =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_he;

  /* If: '<S421>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_oc && rtu_VSM_UOM_LC->User_LeTurnLmpOn)
  {
    /* Outputs for IfAction SubSystem: '<S421>/If Action Subsystem' incorporates:
     *  ActionPort: '<S455>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem
      (PubIfDecisionPLAN_MDL_B.UnitDelay1_jx, &PubIfDecisionPLAN_MDL_B.Merge_d,
       &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_oj);

    /* End of Outputs for SubSystem: '<S421>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S421>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S456>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_d);

    /* End of Outputs for SubSystem: '<S421>/If Action Subsystem1' */
  }

  /* End of If: '<S421>/If' */

  /* Product: '<S421>/Product' incorporates:
   *  Constant: '<S421>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_a = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_d *
    0.02F;

  /* RelationalOperator: '<S411>/Compare' incorporates:
   *  Constant: '<S411>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_im = (PubIfDecisionPLAN_MDL_B.Product_a >=
    0.34F);

  /* RelationalOperator: '<S406>/Compare' incorporates:
   *  Constant: '<S406>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_j1z = (PubIfDecisionPLAN_MDL_B.LcFinishCntLe >
    ((uint8_T)130U));

  /* Logic: '<S189>/AND' */
  PubIfDecisionPLAN_MDL_B.AND_j = (PubIfDecisionPLAN_MDL_B.Compare_bd &&
    PubIfDecisionPLAN_MDL_B.NOT_d && PubIfDecisionPLAN_MDL_B.Compare_im &&
    PubIfDecisionPLAN_MDL_B.Compare_j1z);

  /* Logic: '<S189>/NOT1' */
  PubIfDecisionPLAN_MDL_B.NOT1_o =
    !PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_LciDrv;

  /* UnitDelay: '<S420>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_n =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_mr;

  /* UnitDelay: '<S420>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_c =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_o;

  /* If: '<S420>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_n && rtu_VSM_UOM_LC->User_RiTurnLmpOn)
  {
    /* Outputs for IfAction SubSystem: '<S420>/If Action Subsystem' incorporates:
     *  ActionPort: '<S453>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem(PubIfDecisionPLAN_MDL_B.UnitDelay1_c,
      &PubIfDecisionPLAN_MDL_B.Merge_h,
      &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_e);

    /* End of Outputs for SubSystem: '<S420>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S420>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S454>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_h);

    /* End of Outputs for SubSystem: '<S420>/If Action Subsystem1' */
  }

  /* End of If: '<S420>/If' */

  /* Product: '<S420>/Product' incorporates:
   *  Constant: '<S420>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_l = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_h *
    0.02F;

  /* RelationalOperator: '<S407>/Compare' incorporates:
   *  Constant: '<S407>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_du = (PubIfDecisionPLAN_MDL_B.Product_l >=
    0.34F);

  /* RelationalOperator: '<S382>/Compare' incorporates:
   *  Constant: '<S382>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ewp = (PubIfDecisionPLAN_MDL_B.LcFinishCntRi >
    ((uint8_T)130U));

  /* Logic: '<S189>/AND1' */
  PubIfDecisionPLAN_MDL_B.AND1_i = (PubIfDecisionPLAN_MDL_B.Compare_bd &&
    PubIfDecisionPLAN_MDL_B.NOT1_o && PubIfDecisionPLAN_MDL_B.Compare_du &&
    PubIfDecisionPLAN_MDL_B.Compare_ewp);

  /* Logic: '<S189>/OR' */
  PubIfDecisionPLAN_MDL_B.OR_a = (PubIfDecisionPLAN_MDL_B.AND_j ||
    PubIfDecisionPLAN_MDL_B.AND1_i);

  /* RelationalOperator: '<S408>/Compare' incorporates:
   *  Constant: '<S408>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_k0 = (PubIfDecisionPLAN_MDL_B.LcCancelCntLe >
    ((uint8_T)130U));

  /* RelationalOperator: '<S410>/Compare' incorporates:
   *  Constant: '<S410>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_nss = (PubIfDecisionPLAN_MDL_B.LcCancelCntRi >
    ((uint8_T)130U));

  /* Logic: '<S189>/OR1' */
  PubIfDecisionPLAN_MDL_B.OR1_k = (PubIfDecisionPLAN_MDL_B.Compare_k0 ||
    PubIfDecisionPLAN_MDL_B.Compare_nss);

  /* RelationalOperator: '<S387>/Compare' incorporates:
   *  Constant: '<S387>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_lr = (rtu_VSM_HMI->HWASts == ((uint8_T)3U));

  /* Logic: '<S189>/AND7' */
  PubIfDecisionPLAN_MDL_B.AND7_d = (PubIfDecisionPLAN_MDL_B.OR1_k &&
    PubIfDecisionPLAN_MDL_B.Compare_lr);

  /* Logic: '<S185>/AND9' */
  tmpForInput_idx_0 = PubIfDecisionPLAN_MDL_B.Compare_pj;
  Update = PubIfDecisionPLAN_MDL_B.LciValid;
  BigNumArbFail = PubIfDecisionPLAN_MDL_B.HoldValue2_l;
  distRelPlanStartReasonable = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_IPVehSpd;
  tmpForInput_idx_4 = PubIfDecisionPLAN_MDL_B.HoldValue4_g;
  tmpForInput_idx_0 = (tmpForInput_idx_0 && Update);
  tmpForInput_idx_0 = (tmpForInput_idx_0 && BigNumArbFail);
  tmpForInput_idx_0 = (tmpForInput_idx_0 && distRelPlanStartReasonable);
  tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput_idx_4);

  /* Logic: '<S185>/AND9' */
  PubIfDecisionPLAN_MDL_B.AND9_i = tmpForInput_idx_0;

  /* Logic: '<S185>/NOT6' */
  PubIfDecisionPLAN_MDL_B.NOT6_b = !PubIfDecisionPLAN_MDL_B.Compare_j;

  /* RelationalOperator: '<S239>/Compare' incorporates:
   *  Constant: '<S239>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_i3 = (PubIfDecisionPLAN_MDL_B.Saturation1_c <
    ((uint16_T)1000U));

  /* Logic: '<S185>/AND2' */
  PubIfDecisionPLAN_MDL_B.AND2 = (PubIfDecisionPLAN_MDL_B.AND9_i &&
    PubIfDecisionPLAN_MDL_B.NOT6_b && PubIfDecisionPLAN_MDL_B.Compare_i3);

  /* Logic: '<S185>/AND7' */
  tmpForInput_idx_0 = PubIfDecisionPLAN_MDL_B.Compare_fw;
  Update = PubIfDecisionPLAN_MDL_B.LciValid_j;
  BigNumArbFail = PubIfDecisionPLAN_MDL_B.HoldValue2;
  distRelPlanStartReasonable = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_IPVehSpd;
  tmpForInput_idx_4 = PubIfDecisionPLAN_MDL_B.HoldValue4;
  tmpForInput_idx_0 = (tmpForInput_idx_0 && Update);
  tmpForInput_idx_0 = (tmpForInput_idx_0 && BigNumArbFail);
  tmpForInput_idx_0 = (tmpForInput_idx_0 && distRelPlanStartReasonable);
  tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput_idx_4);

  /* Logic: '<S185>/AND7' */
  PubIfDecisionPLAN_MDL_B.AND7_m = tmpForInput_idx_0;

  /* Logic: '<S185>/NOT2' */
  PubIfDecisionPLAN_MDL_B.NOT2_eg = !PubIfDecisionPLAN_MDL_B.Compare_ib;

  /* RelationalOperator: '<S234>/Compare' incorporates:
   *  Constant: '<S234>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_pv = (PubIfDecisionPLAN_MDL_B.Saturation1_nr <
    ((uint16_T)1000U));

  /* Logic: '<S185>/AND1' */
  PubIfDecisionPLAN_MDL_B.AND1_o2 = (PubIfDecisionPLAN_MDL_B.AND7_m &&
    PubIfDecisionPLAN_MDL_B.NOT2_eg && PubIfDecisionPLAN_MDL_B.Compare_pv);

  /* Logic: '<S185>/OR' */
  PubIfDecisionPLAN_MDL_B.LciDrvTimeOut = (PubIfDecisionPLAN_MDL_B.AND2 ||
    PubIfDecisionPLAN_MDL_B.AND1_o2);

  /* Logic: '<S189>/AND8' */
  PubIfDecisionPLAN_MDL_B.AND8_m = (PubIfDecisionPLAN_MDL_B.Compare_lr &&
    PubIfDecisionPLAN_MDL_B.LciDrvTimeOut);

  /* Logic: '<S185>/AND8' */
  PubIfDecisionPLAN_MDL_B.AND8_b = (PubIfDecisionPLAN_MDL_B.Compare_j &&
    PubIfDecisionPLAN_MDL_B.Compare_pj && PubIfDecisionPLAN_MDL_B.LciValid &&
    PubIfDecisionPLAN_MDL_B.HoldValue2_l);

  /* Logic: '<S185>/NOT7' */
  PubIfDecisionPLAN_MDL_B.NOT7 =
    !PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_IPVehSpd;

  /* Logic: '<S185>/AND5' */
  PubIfDecisionPLAN_MDL_B.AND5_b = (PubIfDecisionPLAN_MDL_B.AND8_b &&
    PubIfDecisionPLAN_MDL_B.NOT7);

  /* Logic: '<S185>/AND13' */
  PubIfDecisionPLAN_MDL_B.AND13 = (PubIfDecisionPLAN_MDL_B.Compare_ib &&
    PubIfDecisionPLAN_MDL_B.Compare_fw && PubIfDecisionPLAN_MDL_B.LciValid_j &&
    PubIfDecisionPLAN_MDL_B.HoldValue2);

  /* Logic: '<S185>/NOT3' */
  PubIfDecisionPLAN_MDL_B.NOT3_eu =
    !PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_IPVehSpd;

  /* Logic: '<S185>/AND12' */
  PubIfDecisionPLAN_MDL_B.AND12_n = (PubIfDecisionPLAN_MDL_B.AND13 &&
    PubIfDecisionPLAN_MDL_B.NOT3_eu);

  /* Logic: '<S185>/OR1' */
  PubIfDecisionPLAN_MDL_B.LciDrvSpdLow = (PubIfDecisionPLAN_MDL_B.AND5_b ||
    PubIfDecisionPLAN_MDL_B.AND12_n);

  /* Logic: '<S189>/AND9' */
  PubIfDecisionPLAN_MDL_B.AND9_h = (PubIfDecisionPLAN_MDL_B.Compare_lr &&
    PubIfDecisionPLAN_MDL_B.LciDrvSpdLow);

  /* RelationalOperator: '<S399>/Compare' incorporates:
   *  Constant: '<S399>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bj = (PubIfDecisionPLAN_MDL_B.ALC_LampReq ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S401>/Compare' incorporates:
   *  Constant: '<S401>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mm =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason == ((uint8_T)4U));

  /* Logic: '<S189>/AND13' */
  PubIfDecisionPLAN_MDL_B.AND13_i = (PubIfDecisionPLAN_MDL_B.Compare_bj &&
    PubIfDecisionPLAN_MDL_B.Compare_mm);

  /* UnitDelay: '<S413>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_go =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_j;

  /* Switch: '<S413>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND13_i) {
    /* Switch: '<S413>/Switch' incorporates:
     *  Constant: '<S413>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_oi = ((uint16_T)1U);
  } else {
    /* Switch: '<S413>/Switch' incorporates:
     *  Constant: '<S413>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_oi = ((uint16_T)0U);
  }

  /* End of Switch: '<S413>/Switch' */

  /* Sum: '<S413>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_l5 = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_go + PubIfDecisionPLAN_MDL_B.Switch_oi);

  /* Switch: '<S413>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.AND13_i) {
    /* Switch: '<S413>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_cj = PubIfDecisionPLAN_MDL_B.Sum_l5;
  } else {
    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S413>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_cj = ((uint16_T)0U);
  }

  /* End of Switch: '<S413>/Switch1' */

  /* Saturate: '<S413>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_cj;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S413>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_mg = u0;
  } else {
    /* Saturate: '<S413>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_mg = u1;
  }

  /* End of Saturate: '<S413>/Saturation1' */

  /* RelationalOperator: '<S402>/Compare' incorporates:
   *  Constant: '<S402>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_msh = (PubIfDecisionPLAN_MDL_B.Saturation1_mg <=
    ((uint16_T)150U));

  /* Logic: '<S189>/AND11' */
  PubIfDecisionPLAN_MDL_B.AND11_j = (PubIfDecisionPLAN_MDL_B.AND13_i &&
    PubIfDecisionPLAN_MDL_B.Compare_msh);

  /* RelationalOperator: '<S400>/Compare' incorporates:
   *  Constant: '<S400>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mf = (PubIfDecisionPLAN_MDL_B.ALC_LampReq ==
    ((uint8_T)2U));

  /* Logic: '<S189>/AND10' */
  PubIfDecisionPLAN_MDL_B.AND10_g = (PubIfDecisionPLAN_MDL_B.Compare_mf &&
    PubIfDecisionPLAN_MDL_B.Compare_mm);

  /* UnitDelay: '<S412>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_mo =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_hk;

  /* Switch: '<S412>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND10_g) {
    /* Switch: '<S412>/Switch' incorporates:
     *  Constant: '<S412>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch_l = ((uint16_T)1U);
  } else {
    /* Switch: '<S412>/Switch' incorporates:
     *  Constant: '<S412>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch_l = ((uint16_T)0U);
  }

  /* End of Switch: '<S412>/Switch' */

  /* Sum: '<S412>/Sum' */
  PubIfDecisionPLAN_MDL_B.Sum_bd = (uint16_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.UnitDelay_mo + PubIfDecisionPLAN_MDL_B.Switch_l);

  /* Switch: '<S412>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.AND10_g) {
    /* Switch: '<S412>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_au = PubIfDecisionPLAN_MDL_B.Sum_bd;
  } else {
    /* Switch: '<S412>/Switch1' incorporates:
     *  Constant: '<S412>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_au = ((uint16_T)0U);
  }

  /* End of Switch: '<S412>/Switch1' */

  /* Saturate: '<S412>/Saturation1' */
  u0 = PubIfDecisionPLAN_MDL_B.Switch1_au;
  u1 = ((uint16_T)65000U);
  if (u0 < u1) {
    /* Saturate: '<S412>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_kr = u0;
  } else {
    /* Saturate: '<S412>/Saturation1' */
    PubIfDecisionPLAN_MDL_B.Saturation1_kr = u1;
  }

  /* End of Saturate: '<S412>/Saturation1' */

  /* RelationalOperator: '<S403>/Compare' incorporates:
   *  Constant: '<S403>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_gp = (PubIfDecisionPLAN_MDL_B.Saturation1_kr <=
    ((uint16_T)150U));

  /* Logic: '<S189>/AND12' */
  PubIfDecisionPLAN_MDL_B.AND12_l = (PubIfDecisionPLAN_MDL_B.AND10_g &&
    PubIfDecisionPLAN_MDL_B.Compare_gp);

  /* Logic: '<S185>/AND16' */
  PubIfDecisionPLAN_MDL_B.AND16 = (PubIfDecisionPLAN_MDL_B.Compare_ib &&
    PubIfDecisionPLAN_MDL_B.Compare_fw && PubIfDecisionPLAN_MDL_B.LciValid_j &&
    PubIfDecisionPLAN_MDL_B.HoldValue2);

  /* Logic: '<S185>/NOT8' */
  PubIfDecisionPLAN_MDL_B.NOT8 = !PubIfDecisionPLAN_MDL_B.HoldValue4;

  /* Logic: '<S185>/AND15' */
  PubIfDecisionPLAN_MDL_B.AND15 = (PubIfDecisionPLAN_MDL_B.AND16 &&
    PubIfDecisionPLAN_MDL_B.NOT8);

  /* Logic: '<S185>/AND18' */
  PubIfDecisionPLAN_MDL_B.AND18 = (PubIfDecisionPLAN_MDL_B.Compare_j &&
    PubIfDecisionPLAN_MDL_B.Compare_pj && PubIfDecisionPLAN_MDL_B.LciValid &&
    PubIfDecisionPLAN_MDL_B.HoldValue2_l);

  /* Logic: '<S185>/NOT9' */
  PubIfDecisionPLAN_MDL_B.NOT9 = !PubIfDecisionPLAN_MDL_B.HoldValue4_g;

  /* Logic: '<S185>/AND17' */
  PubIfDecisionPLAN_MDL_B.AND17 = (PubIfDecisionPLAN_MDL_B.AND18 &&
    PubIfDecisionPLAN_MDL_B.NOT9);

  /* Logic: '<S185>/OR2' */
  PubIfDecisionPLAN_MDL_B.LciDrvSpdHigh = (PubIfDecisionPLAN_MDL_B.AND15 ||
    PubIfDecisionPLAN_MDL_B.AND17);

  /* Logic: '<S189>/AND16' */
  PubIfDecisionPLAN_MDL_B.AND16_e = (PubIfDecisionPLAN_MDL_B.Compare_lr &&
    PubIfDecisionPLAN_MDL_B.LciDrvSpdHigh);

  /* Switch: '<S189>/Switch10' */
  if (PubIfDecisionPLAN_MDL_B.AND16_e) {
    /* Switch: '<S189>/Switch10' incorporates:
     *  Constant: '<S189>/Constant14'
     */
    PubIfDecisionPLAN_MDL_B.Switch10 = 7.0;
  } else {
    /* Switch: '<S189>/Switch10' incorporates:
     *  Constant: '<S189>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch10 = 0.0;
  }

  /* End of Switch: '<S189>/Switch10' */

  /* Switch: '<S189>/Switch9' */
  if (PubIfDecisionPLAN_MDL_B.AND12_l) {
    /* Switch: '<S189>/Switch9' incorporates:
     *  Constant: '<S189>/Constant12'
     */
    PubIfDecisionPLAN_MDL_B.Switch9_g = 6.0;
  } else {
    /* Switch: '<S189>/Switch9' */
    PubIfDecisionPLAN_MDL_B.Switch9_g = PubIfDecisionPLAN_MDL_B.Switch10;
  }

  /* End of Switch: '<S189>/Switch9' */

  /* Switch: '<S189>/Switch8' */
  if (PubIfDecisionPLAN_MDL_B.AND11_j) {
    /* Switch: '<S189>/Switch8' incorporates:
     *  Constant: '<S189>/Constant13'
     */
    PubIfDecisionPLAN_MDL_B.Switch8 = 5.0;
  } else {
    /* Switch: '<S189>/Switch8' */
    PubIfDecisionPLAN_MDL_B.Switch8 = PubIfDecisionPLAN_MDL_B.Switch9_g;
  }

  /* End of Switch: '<S189>/Switch8' */

  /* Switch: '<S189>/Switch5' */
  if (PubIfDecisionPLAN_MDL_B.AND9_h) {
    /* Switch: '<S189>/Switch5' incorporates:
     *  Constant: '<S189>/Constant2'
     */
    PubIfDecisionPLAN_MDL_B.Switch5 = 4.0;
  } else {
    /* Switch: '<S189>/Switch5' */
    PubIfDecisionPLAN_MDL_B.Switch5 = PubIfDecisionPLAN_MDL_B.Switch8;
  }

  /* End of Switch: '<S189>/Switch5' */

  /* Switch: '<S189>/Switch2' */
  if (PubIfDecisionPLAN_MDL_B.AND8_m) {
    /* Switch: '<S189>/Switch2' incorporates:
     *  Constant: '<S189>/Constant8'
     */
    PubIfDecisionPLAN_MDL_B.Switch2_p = 3.0;
  } else {
    /* Switch: '<S189>/Switch2' */
    PubIfDecisionPLAN_MDL_B.Switch2_p = PubIfDecisionPLAN_MDL_B.Switch5;
  }

  /* End of Switch: '<S189>/Switch2' */

  /* Switch: '<S189>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND7_d) {
    /* Switch: '<S189>/Switch' incorporates:
     *  Constant: '<S189>/Constant7'
     */
    PubIfDecisionPLAN_MDL_B.Switch_ao = 2.0;
  } else {
    /* Switch: '<S189>/Switch' */
    PubIfDecisionPLAN_MDL_B.Switch_ao = PubIfDecisionPLAN_MDL_B.Switch2_p;
  }

  /* End of Switch: '<S189>/Switch' */

  /* Switch: '<S189>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.OR_a) {
    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S189>/Constant5'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_jb = ((uint8_T)1U);
  } else {
    absx = floor(PubIfDecisionPLAN_MDL_B.Switch_ao);
    if (rtIsNaN(absx) || rtIsInf(absx)) {
      absx = 0.0;
    } else {
      absx = fmod(absx, 256.0);
    }

    /* Switch: '<S189>/Switch1' */
    PubIfDecisionPLAN_MDL_B.Switch1_jb = (uint8_T)(absx < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-absx : (int32_T)(uint8_T)absx);
  }

  /* End of Switch: '<S189>/Switch1' */

  /* RelationalOperator: '<S388>/Compare' incorporates:
   *  Constant: '<S388>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_jl = (PubIfDecisionPLAN_MDL_B.Switch1_jb ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S397>/Compare' incorporates:
   *  Constant: '<S397>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_hy = (PubIfDecisionPLAN_MDL_B.Switch1_jb ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S398>/Compare' incorporates:
   *  Constant: '<S398>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_dc = (PubIfDecisionPLAN_MDL_B.Switch1_jb ==
    ((uint8_T)3U));

  /* Logic: '<S189>/OR8' */
  PubIfDecisionPLAN_MDL_B.OR8 = (PubIfDecisionPLAN_MDL_B.Compare_jl ||
    PubIfDecisionPLAN_MDL_B.Compare_hy || PubIfDecisionPLAN_MDL_B.Compare_dc);

  /* Logic: '<S189>/AND6' incorporates:
   *  Constant: '<S189>/Constant11'
   */
  PubIfDecisionPLAN_MDL_B.AND6_a = ((rtP_P_PLAN_ALC_TurnLmpType != 0) &&
    PubIfDecisionPLAN_MDL_B.OR8);

  /* RelationalOperator: '<S385>/Compare' incorporates:
   *  Constant: '<S385>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_lb = (PubIfDecisionPLAN_MDL_B.ALC_LampReq ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S392>/Compare' incorporates:
   *  Constant: '<S392>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_g4 = (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts
    == ((uint8_T)4U));

  /* RelationalOperator: '<S395>/Compare' incorporates:
   *  Constant: '<S395>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_crd =
    (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts == ((uint8_T)1U));

  /* Logic: '<S189>/AND20' */
  PubIfDecisionPLAN_MDL_B.AND20 = (PubIfDecisionPLAN_MDL_B.AND_e &&
    PubIfDecisionPLAN_MDL_B.Compare_crd);

  /* Logic: '<S189>/OR6' */
  PubIfDecisionPLAN_MDL_B.OR6_h = (PubIfDecisionPLAN_MDL_B.Compare_g4 ||
    PubIfDecisionPLAN_MDL_B.AND20);

  /* RelationalOperator: '<S405>/Compare' incorporates:
   *  Constant: '<S405>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_h0m = (rtu_VSM_HMI->NOH_Sts == ((uint8_T)3U));

  /* Logic: '<S189>/AND14' */
  PubIfDecisionPLAN_MDL_B.AND14_d = (PubIfDecisionPLAN_MDL_B.OR6_h &&
    PubIfDecisionPLAN_MDL_B.Compare_h0m);

  /* Logic: '<S189>/OR3' */
  PubIfDecisionPLAN_MDL_B.OR3_m = (PubIfDecisionPLAN_MDL_B.Compare_lb ||
    PubIfDecisionPLAN_MDL_B.AND14_d);

  /* Logic: '<S189>/AND19' */
  PubIfDecisionPLAN_MDL_B.AND19 = ((!rtu_VSM_UOM_LC->User_RiTurnLmpOn) &&
    (!rtu_VSM_UOM_LC->User_LeTurnLmpOn));

  /* Logic: '<S189>/AND17' */
  PubIfDecisionPLAN_MDL_B.AND17_j = (PubIfDecisionPLAN_MDL_B.OR3_m &&
    PubIfDecisionPLAN_MDL_B.AND19);

  /* RelationalOperator: '<S391>/Compare' incorporates:
   *  Constant: '<S391>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bcn = (PubIfDecisionPLAN_MDL_B.ALC_LampReq ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S394>/Compare' incorporates:
   *  Constant: '<S394>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mo = (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts
    == ((uint8_T)5U));

  /* RelationalOperator: '<S396>/Compare' incorporates:
   *  Constant: '<S396>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_n1f =
    (PubIfDecisionPLAN_MDL_B.LSM_PilotTurnSts == ((uint8_T)2U));

  /* Logic: '<S189>/AND21' */
  PubIfDecisionPLAN_MDL_B.AND21 = (PubIfDecisionPLAN_MDL_B.AND1_a &&
    PubIfDecisionPLAN_MDL_B.Compare_n1f);

  /* Logic: '<S189>/OR7' */
  PubIfDecisionPLAN_MDL_B.OR7 = (PubIfDecisionPLAN_MDL_B.Compare_mo ||
    PubIfDecisionPLAN_MDL_B.AND21);

  /* Logic: '<S189>/AND15' */
  PubIfDecisionPLAN_MDL_B.AND15_g = (PubIfDecisionPLAN_MDL_B.OR7 &&
    PubIfDecisionPLAN_MDL_B.Compare_h0m);

  /* Logic: '<S189>/OR4' */
  PubIfDecisionPLAN_MDL_B.OR4 = (PubIfDecisionPLAN_MDL_B.Compare_bcn ||
    PubIfDecisionPLAN_MDL_B.AND15_g);

  /* Logic: '<S189>/AND18' */
  PubIfDecisionPLAN_MDL_B.AND18_d = (PubIfDecisionPLAN_MDL_B.OR4 &&
    PubIfDecisionPLAN_MDL_B.AND19);

  /* Switch: '<S189>/Switch4' */
  if (PubIfDecisionPLAN_MDL_B.AND18_d) {
    /* Switch: '<S189>/Switch4' incorporates:
     *  Constant: '<S189>/Constant6'
     */
    PubIfDecisionPLAN_MDL_B.Switch4_a = ((uint8_T)2U);
  } else {
    /* Switch: '<S189>/Switch4' incorporates:
     *  Constant: '<S189>/Constant9'
     */
    PubIfDecisionPLAN_MDL_B.Switch4_a = ((uint8_T)0U);
  }

  /* End of Switch: '<S189>/Switch4' */

  /* Switch: '<S189>/Switch3' */
  if (PubIfDecisionPLAN_MDL_B.AND17_j) {
    /* Switch: '<S189>/Switch3' incorporates:
     *  Constant: '<S189>/Constant1'
     */
    PubIfDecisionPLAN_MDL_B.Switch3_p = ((uint8_T)1U);
  } else {
    /* Switch: '<S189>/Switch3' */
    PubIfDecisionPLAN_MDL_B.Switch3_p = PubIfDecisionPLAN_MDL_B.Switch4_a;
  }

  /* End of Switch: '<S189>/Switch3' */

  /* Switch: '<S189>/Switch6' */
  if (PubIfDecisionPLAN_MDL_B.AND6_a) {
    /* Switch: '<S189>/Switch6' incorporates:
     *  Constant: '<S189>/Constant10'
     */
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LampReq = ((uint8_T)3U);
  } else {
    /* Switch: '<S189>/Switch6' */
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LampReq = PubIfDecisionPLAN_MDL_B.Switch3_p;
  }

  /* End of Switch: '<S189>/Switch6' */

  /* LookupNDDirect: '<S189>/Direct Lookup Table (n-D)' incorporates:
   *  Switch: '<S189>/Switch1'
   *
   * About '<S189>/Direct Lookup Table (n-D)':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  i = PubIfDecisionPLAN_MDL_B.Switch1_jb;
  if (i >= 4) {
    i = 4U;
  }

  JminIni = i;

  /* LookupNDDirect: '<S189>/Direct Lookup Table (n-D)'
   *
   * About '<S189>/Direct Lookup Table (n-D)':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  PubIfDecisionPLAN_MDL_B.DirectLookupTablenD =
    rtCP_DirectLookupTablenD_table[JminIni];

  /* Switch: '<S189>/Switch7' incorporates:
   *  Constant: '<S189>/Constant'
   */
  if (rtP_P_PLAN_ALC_TurnLmpType != 0) {
    /* Switch: '<S189>/Switch7' */
    PubIfDecisionPLAN_MDL_B.Switch7_i =
      PubIfDecisionPLAN_MDL_B.DirectLookupTablenD;
  } else {
    /* Switch: '<S189>/Switch7' */
    PubIfDecisionPLAN_MDL_B.Switch7_i = PubIfDecisionPLAN_MDL_B.Switch1_jb;
  }

  /* End of Switch: '<S189>/Switch7' */

  /* RelationalOperator: '<S409>/Compare' incorporates:
   *  Constant: '<S409>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_fn = (rtu_VSM_HMI->HWASts == ((uint8_T)5U));

  /* UnitDelay: '<S189>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_cc =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jg;

  /* Logic: '<S189>/AND2' */
  PubIfDecisionPLAN_MDL_B.AND2_d = (PubIfDecisionPLAN_MDL_B.Compare_fn &&
    PubIfDecisionPLAN_MDL_B.UnitDelay_cc);

  /* RelationalOperator: '<S383>/Compare' incorporates:
   *  Constant: '<S383>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_n0 = (rtu_VSM_HMI->HWASts == ((uint8_T)6U));

  /* Logic: '<S189>/AND3' */
  PubIfDecisionPLAN_MDL_B.AND3 = (PubIfDecisionPLAN_MDL_B.Compare_n0 &&
    PubIfDecisionPLAN_MDL_B.UnitDelay_cc);

  /* RelationalOperator: '<S389>/Compare' incorporates:
   *  Constant: '<S389>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_db = (rtu_VSM_HMI->HWASts == ((uint8_T)5U));

  /* RelationalOperator: '<S390>/Compare' incorporates:
   *  Constant: '<S390>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_gi = (rtu_VSM_HMI->HWASts == ((uint8_T)6U));

  /* Logic: '<S189>/OR2' */
  PubIfDecisionPLAN_MDL_B.OR2_i = ((!PubIfDecisionPLAN_MDL_B.Compare_db) &&
    (!PubIfDecisionPLAN_MDL_B.Compare_gi));

  /* Abs: '<S189>/Abs' */
  PubIfDecisionPLAN_MDL_B.Abs_e = fabsf(rtu_LSM_HWA->HWALineC0);

  /* Product: '<S189>/Product' incorporates:
   *  Constant: '<S189>/Constant4'
   */
  PubIfDecisionPLAN_MDL_B.Product_cc = rtu_LSM_HWA->RoadWidth *
    rtP_P_PLAN_ALC_LcFinishDyDiffRwFactorForHMI;

  /* RelationalOperator: '<S189>/Relational Operator' */
  PubIfDecisionPLAN_MDL_B.RelationalOperator_f = (PubIfDecisionPLAN_MDL_B.Abs_e <
    PubIfDecisionPLAN_MDL_B.Product_cc);

  /* Logic: '<S189>/OR5' */
  PubIfDecisionPLAN_MDL_B.OR5_e = (PubIfDecisionPLAN_MDL_B.OR2_i ||
    PubIfDecisionPLAN_MDL_B.RelationalOperator_f);

  /* Chart: '<S189>/ALCHMISM' */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c130_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c130_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c130_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_CC;
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange = 0U;
    PubIfDecisionPLAN_MDL_DW.LcCnt = 0U;
  } else {
    switch (PubIfDecisionPLAN_MDL_DW.is_c130_PubIfDecisionPLAN_MDL) {
     case PubIfDecisionPLAN_MDL_IN_CC:
      if (PubIfDecisionPLAN_MDL_B.AND2_d) {
        PubIfDecisionPLAN_MDL_DW.is_c130_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_Left;
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange = 1U;
        PubIfDecisionPLAN_MDL_DW.LcCnt = 0U;
      } else if (PubIfDecisionPLAN_MDL_B.AND3) {
        PubIfDecisionPLAN_MDL_DW.is_c130_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_Right;
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange = 2U;
        PubIfDecisionPLAN_MDL_DW.LcCnt = 0U;
      } else {
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange = 0U;
        PubIfDecisionPLAN_MDL_DW.LcCnt = 0U;
      }
      break;

     case PubIfDecisionPLAN_MDL_IN_Left:
      tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.OR5_e &&
                            (PubIfDecisionPLAN_MDL_DW.LcCnt > 10)) ||
                           (PubIfDecisionPLAN_MDL_DW.LcCnt > 1000));
      if (tmpForInput_idx_0) {
        PubIfDecisionPLAN_MDL_DW.is_c130_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_CC;
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange = 0U;
        PubIfDecisionPLAN_MDL_DW.LcCnt = 0U;
      } else {
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange = 1U;
        bpIdx = PubIfDecisionPLAN_MDL_DW.LcCnt + 1U;
        if (bpIdx > 65535U) {
          bpIdx = 65535U;
        }

        u0 = (uint16_T)bpIdx;
        if (u0 < 2000) {
          PubIfDecisionPLAN_MDL_DW.LcCnt = u0;
        } else {
          PubIfDecisionPLAN_MDL_DW.LcCnt = 2000U;
        }
      }
      break;

     default:
      /* case IN_Right: */
      tmpForInput_idx_0 = ((PubIfDecisionPLAN_MDL_B.OR5_e &&
                            (PubIfDecisionPLAN_MDL_DW.LcCnt > 10)) ||
                           (PubIfDecisionPLAN_MDL_DW.LcCnt > 1000));
      if (tmpForInput_idx_0) {
        PubIfDecisionPLAN_MDL_DW.is_c130_PubIfDecisionPLAN_MDL =
          PubIfDecisionPLAN_MDL_IN_CC;
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange = 0U;
        PubIfDecisionPLAN_MDL_DW.LcCnt = 0U;
      } else {
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange = 2U;
        bpIdx = PubIfDecisionPLAN_MDL_DW.LcCnt + 1U;
        if (bpIdx > 65535U) {
          bpIdx = 65535U;
        }

        u0 = (uint16_T)bpIdx;
        if (u0 < 2000) {
          PubIfDecisionPLAN_MDL_DW.LcCnt = u0;
        } else {
          PubIfDecisionPLAN_MDL_DW.LcCnt = 2000U;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S189>/ALCHMISM' */

  /* RelationalOperator: '<S429>/Compare' incorporates:
   *  Constant: '<S429>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_fx =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L >
     rtP_P_PLAN_ALC_DynamicDPCthreshold);

  /* Logic: '<S415>/OR4' */
  PubIfDecisionPLAN_MDL_B.OR4_i = (PubIfDecisionPLAN_MDL_B.Compare_fx &&
    rtu_LSM_HWA->HWALeLineValid);

  /* UnitDelay: '<S431>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_ib =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_px;

  /* Logic: '<S415>/NOT2' */
  PubIfDecisionPLAN_MDL_B.NOT2_g = !rtu_LSM_HWA->HWALeLineValid;

  /* UnitDelay: '<S431>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_i =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_a;

  /* If: '<S431>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_ib && PubIfDecisionPLAN_MDL_B.NOT2_g) {
    /* Outputs for IfAction SubSystem: '<S431>/If Action Subsystem' incorporates:
     *  ActionPort: '<S433>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem(PubIfDecisionPLAN_MDL_B.UnitDelay1_i,
      &PubIfDecisionPLAN_MDL_B.Merge_k,
      &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_n);

    /* End of Outputs for SubSystem: '<S431>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S431>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S434>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_k);

    /* End of Outputs for SubSystem: '<S431>/If Action Subsystem1' */
  }

  /* End of If: '<S431>/If' */

  /* Product: '<S431>/Product' incorporates:
   *  Constant: '<S431>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_if = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_k
    * 0.02F;

  /* RelationalOperator: '<S428>/Compare' incorporates:
   *  Constant: '<S428>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_k2 = (PubIfDecisionPLAN_MDL_B.Product_if >
    rtP_P_PLAN_ALC_LcDrvHMILineValidFtime);

  /* UnitDelay: '<S432>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_f =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_me;

  /* Logic: '<S415>/NOT1' */
  PubIfDecisionPLAN_MDL_B.NOT1_ov = !rtu_LSM_HWA->LeLineLcAvailable;

  /* UnitDelay: '<S432>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_k =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_l;

  /* If: '<S432>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_f && PubIfDecisionPLAN_MDL_B.NOT1_ov) {
    /* Outputs for IfAction SubSystem: '<S432>/If Action Subsystem' incorporates:
     *  ActionPort: '<S435>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem(PubIfDecisionPLAN_MDL_B.UnitDelay1_k,
      &PubIfDecisionPLAN_MDL_B.Merge_m,
      &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_gh);

    /* End of Outputs for SubSystem: '<S432>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S432>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S436>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_m);

    /* End of Outputs for SubSystem: '<S432>/If Action Subsystem1' */
  }

  /* End of If: '<S432>/If' */

  /* Product: '<S432>/Product' incorporates:
   *  Constant: '<S432>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_g = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_m *
    0.02F;

  /* RelationalOperator: '<S430>/Compare' incorporates:
   *  Constant: '<S430>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_a0 = (PubIfDecisionPLAN_MDL_B.Product_g >
    rtP_P_PLAN_ALC_LcDrvHMILineValidFtime);

  /* Logic: '<S415>/OR2' */
  PubIfDecisionPLAN_MDL_B.LcNotSatisfied = (PubIfDecisionPLAN_MDL_B.OR4_i ||
    PubIfDecisionPLAN_MDL_B.Compare_k2 || PubIfDecisionPLAN_MDL_B.Compare_a0 ||
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_OncomingFlag_Le);

  /* Logic: '<S415>/AND4' */
  PubIfDecisionPLAN_MDL_B.AND4_g = (PubIfDecisionPLAN_MDL_B.LcNotSatisfied &&
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_LciDrv);

  /* Switch: '<S415>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvLe_LciDrv) {
    /* Switch: '<S415>/Switch1' incorporates:
     *  Constant: '<S415>/Constant8'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_h = rtP_P_PLAN_ALC_LciDrvExistDefaultDisp;
  } else {
    /* Switch: '<S415>/Switch1' incorporates:
     *  Constant: '<S415>/Constant9'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_h = ((uint8_T)0U);
  }

  /* End of Switch: '<S415>/Switch1' */

  /* Switch: '<S415>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND4_g) {
    /* Switch: '<S415>/Switch' incorporates:
     *  Constant: '<S415>/Constant7'
     */
    PubIfDecisionPLAN_MDL_B.LcDrvSatisfiedStsLe = ((uint8_T)1U);
  } else {
    /* Switch: '<S415>/Switch' */
    PubIfDecisionPLAN_MDL_B.LcDrvSatisfiedStsLe =
      PubIfDecisionPLAN_MDL_B.Switch1_h;
  }

  /* End of Switch: '<S415>/Switch' */

  /* RelationalOperator: '<S438>/Compare' incorporates:
   *  Constant: '<S438>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_bd4 =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R >
     rtP_P_PLAN_ALC_DynamicDPCthreshold);

  /* Logic: '<S416>/OR4' */
  PubIfDecisionPLAN_MDL_B.OR4_b = (PubIfDecisionPLAN_MDL_B.Compare_bd4 &&
    rtu_LSM_HWA->HWARiLineValid);

  /* UnitDelay: '<S440>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_p =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_c;

  /* Logic: '<S416>/NOT2' */
  PubIfDecisionPLAN_MDL_B.NOT2_l = !rtu_LSM_HWA->HWARiLineValid;

  /* UnitDelay: '<S440>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_dn =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_im;

  /* If: '<S440>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_p && PubIfDecisionPLAN_MDL_B.NOT2_l) {
    /* Outputs for IfAction SubSystem: '<S440>/If Action Subsystem' incorporates:
     *  ActionPort: '<S442>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem
      (PubIfDecisionPLAN_MDL_B.UnitDelay1_dn, &PubIfDecisionPLAN_MDL_B.Merge_p,
       &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_d);

    /* End of Outputs for SubSystem: '<S440>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S440>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S443>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_p);

    /* End of Outputs for SubSystem: '<S440>/If Action Subsystem1' */
  }

  /* End of If: '<S440>/If' */

  /* Product: '<S440>/Product' incorporates:
   *  Constant: '<S440>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_ex = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_p
    * 0.02F;

  /* RelationalOperator: '<S437>/Compare' incorporates:
   *  Constant: '<S437>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ja = (PubIfDecisionPLAN_MDL_B.Product_ex >
    rtP_P_PLAN_ALC_LcDrvHMILineValidFtime);

  /* UnitDelay: '<S441>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_iq =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_g;

  /* Logic: '<S416>/NOT1' */
  PubIfDecisionPLAN_MDL_B.NOT1_g = !rtu_LSM_HWA->RiLineLcAvailable;

  /* UnitDelay: '<S441>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_j1 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ia;

  /* If: '<S441>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_iq && PubIfDecisionPLAN_MDL_B.NOT1_g) {
    /* Outputs for IfAction SubSystem: '<S441>/If Action Subsystem' incorporates:
     *  ActionPort: '<S444>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem
      (PubIfDecisionPLAN_MDL_B.UnitDelay1_j1, &PubIfDecisionPLAN_MDL_B.Merge_mg,
       &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_di);

    /* End of Outputs for SubSystem: '<S441>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S441>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S445>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_mg);

    /* End of Outputs for SubSystem: '<S441>/If Action Subsystem1' */
  }

  /* End of If: '<S441>/If' */

  /* Product: '<S441>/Product' incorporates:
   *  Constant: '<S441>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_eu = (real32_T)
    PubIfDecisionPLAN_MDL_B.Merge_mg * 0.02F;

  /* RelationalOperator: '<S439>/Compare' incorporates:
   *  Constant: '<S439>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_oe = (PubIfDecisionPLAN_MDL_B.Product_eu >
    rtP_P_PLAN_ALC_LcDrvHMILineValidFtime);

  /* Logic: '<S416>/OR2' */
  PubIfDecisionPLAN_MDL_B.LcNotSatisfied_n = (PubIfDecisionPLAN_MDL_B.OR4_b ||
    PubIfDecisionPLAN_MDL_B.Compare_ja || PubIfDecisionPLAN_MDL_B.Compare_oe ||
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_OncomingFlag_Ri);

  /* Logic: '<S416>/AND4' */
  PubIfDecisionPLAN_MDL_B.AND4_l = (PubIfDecisionPLAN_MDL_B.LcNotSatisfied_n &&
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_LciDrv);

  /* Switch: '<S416>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcDrvRi_LciDrv) {
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S416>/Constant8'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_b5 = rtP_P_PLAN_ALC_LciDrvExistDefaultDisp;
  } else {
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S416>/Constant9'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_b5 = ((uint8_T)0U);
  }

  /* End of Switch: '<S416>/Switch1' */

  /* Switch: '<S416>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND4_l) {
    /* Switch: '<S416>/Switch' incorporates:
     *  Constant: '<S416>/Constant7'
     */
    PubIfDecisionPLAN_MDL_B.LcDrvSatisfiedStsRi = ((uint8_T)1U);
  } else {
    /* Switch: '<S416>/Switch' */
    PubIfDecisionPLAN_MDL_B.LcDrvSatisfiedStsRi =
      PubIfDecisionPLAN_MDL_B.Switch1_b5;
  }

  /* End of Switch: '<S416>/Switch' */

  /* RelationalOperator: '<S446>/Compare' incorporates:
   *  Constant: '<S446>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_pm =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L >
     rtP_P_PLAN_ALC_DynamicDPCthreshold);

  /* Logic: '<S417>/OR4' */
  PubIfDecisionPLAN_MDL_B.LcNotSatisfied_a = (PubIfDecisionPLAN_MDL_B.Compare_pm
    && rtu_LSM_HWA->HWALeLineValid);

  /* Logic: '<S417>/AND4' */
  PubIfDecisionPLAN_MDL_B.AND4_k = (PubIfDecisionPLAN_MDL_B.LcNotSatisfied_a &&
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_LciNoh);

  /* Switch: '<S417>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_LciNoh) {
    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S417>/Constant8'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_g = rtP_P_PLAN_ALC_LciDrvExistDefaultDisp;
  } else {
    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S417>/Constant9'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_g = ((uint8_T)0U);
  }

  /* End of Switch: '<S417>/Switch1' */

  /* Switch: '<S417>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND4_k) {
    /* Switch: '<S417>/Switch' incorporates:
     *  Constant: '<S417>/Constant7'
     */
    PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsLe = ((uint8_T)1U);
  } else {
    /* Switch: '<S417>/Switch' */
    PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsLe =
      PubIfDecisionPLAN_MDL_B.Switch1_g;
  }

  /* End of Switch: '<S417>/Switch' */

  /* RelationalOperator: '<S447>/Compare' incorporates:
   *  Constant: '<S447>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_io =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R >
     rtP_P_PLAN_ALC_DynamicDPCthreshold);

  /* Logic: '<S418>/OR4' */
  PubIfDecisionPLAN_MDL_B.LcNotSatisfied_d = (PubIfDecisionPLAN_MDL_B.Compare_io
    && rtu_LSM_HWA->HWARiLineValid);

  /* Logic: '<S418>/AND4' */
  PubIfDecisionPLAN_MDL_B.AND4_gc = (PubIfDecisionPLAN_MDL_B.LcNotSatisfied_d &&
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_LciNoh);

  /* Switch: '<S418>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_LciNoh) {
    /* Switch: '<S418>/Switch1' incorporates:
     *  Constant: '<S418>/Constant8'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_il = rtP_P_PLAN_ALC_LciDrvExistDefaultDisp;
  } else {
    /* Switch: '<S418>/Switch1' incorporates:
     *  Constant: '<S418>/Constant9'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_il = ((uint8_T)0U);
  }

  /* End of Switch: '<S418>/Switch1' */

  /* Switch: '<S418>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND4_gc) {
    /* Switch: '<S418>/Switch' incorporates:
     *  Constant: '<S418>/Constant7'
     */
    PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsRi = ((uint8_T)1U);
  } else {
    /* Switch: '<S418>/Switch' */
    PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsRi =
      PubIfDecisionPLAN_MDL_B.Switch1_il;
  }

  /* End of Switch: '<S418>/Switch' */

  /* RelationalOperator: '<S449>/Compare' incorporates:
   *  Constant: '<S449>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_my =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R >
     rtP_P_PLAN_ALC_DynamicDPCthreshold);

  /* Logic: '<S419>/OR4' */
  PubIfDecisionPLAN_MDL_B.OR4_e = (PubIfDecisionPLAN_MDL_B.Compare_my &&
    rtu_LSM_HWA->HWARiLineValid);

  /* UnitDelay: '<S450>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_pf =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_i;

  /* Logic: '<S419>/NOT2' */
  PubIfDecisionPLAN_MDL_B.NOT2_hh = !rtu_LSM_HWA->HWARiLineValid;

  /* UnitDelay: '<S450>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_a =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_gs;

  /* If: '<S450>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_pf && PubIfDecisionPLAN_MDL_B.NOT2_hh)
  {
    /* Outputs for IfAction SubSystem: '<S450>/If Action Subsystem' incorporates:
     *  ActionPort: '<S451>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem(PubIfDecisionPLAN_MDL_B.UnitDelay1_a,
      &PubIfDecisionPLAN_MDL_B.Merge_a,
      &PubIfDecisionPLAN_MDL_B.IfActionSubsystem_j);

    /* End of Outputs for SubSystem: '<S450>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S450>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S452>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_a);

    /* End of Outputs for SubSystem: '<S450>/If Action Subsystem1' */
  }

  /* End of If: '<S450>/If' */

  /* Product: '<S450>/Product' incorporates:
   *  Constant: '<S450>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_n = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_a *
    0.02F;

  /* RelationalOperator: '<S448>/Compare' incorporates:
   *  Constant: '<S448>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_oa = (PubIfDecisionPLAN_MDL_B.Product_n >
    rtP_P_PLAN_ALC_LcDrvHMILineValidFtime);

  /* Logic: '<S419>/OR2' */
  PubIfDecisionPLAN_MDL_B.LcNotSatisfied_m = (PubIfDecisionPLAN_MDL_B.OR4_e ||
    PubIfDecisionPLAN_MDL_B.Compare_oa);

  /* Logic: '<S419>/AND4' */
  PubIfDecisionPLAN_MDL_B.AND4_ls = (PubIfDecisionPLAN_MDL_B.LcNotSatisfied_m &&
    PubIfDecisionPLAN_MDL_B.LcMrcRi);

  /* Switch: '<S419>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.LcMrcRi) {
    /* Switch: '<S419>/Switch1' incorporates:
     *  Constant: '<S419>/Constant8'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_gr = rtP_P_PLAN_ALC_LciDrvExistDefaultDisp;
  } else {
    /* Switch: '<S419>/Switch1' incorporates:
     *  Constant: '<S419>/Constant9'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_gr = ((uint8_T)0U);
  }

  /* End of Switch: '<S419>/Switch1' */

  /* Switch: '<S419>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.AND4_ls) {
    /* Switch: '<S419>/Switch' incorporates:
     *  Constant: '<S419>/Constant7'
     */
    PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsRi_d = ((uint8_T)1U);
  } else {
    /* Switch: '<S419>/Switch' */
    PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsRi_d =
      PubIfDecisionPLAN_MDL_B.Switch1_gr;
  }

  /* End of Switch: '<S419>/Switch' */

  /* RelationalOperator: '<S381>/Compare' incorporates:
   *  Constant: '<S381>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ev = (PubIfDecisionPLAN_MDL_B.ALC_LampReq ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S386>/Compare' incorporates:
   *  Constant: '<S386>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mq =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason == ((uint8_T)4U));

  /* Logic: '<S189>/AND4' */
  PubIfDecisionPLAN_MDL_B.AND4_gp = (PubIfDecisionPLAN_MDL_B.Compare_ev &&
    PubIfDecisionPLAN_MDL_B.Compare_mq);

  /* RelationalOperator: '<S404>/Compare' incorporates:
   *  Constant: '<S404>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_cg = (PubIfDecisionPLAN_MDL_B.ALC_LampReq ==
    ((uint8_T)2U));

  /* Logic: '<S189>/AND5' */
  PubIfDecisionPLAN_MDL_B.AND5_h = (PubIfDecisionPLAN_MDL_B.Compare_cg &&
    PubIfDecisionPLAN_MDL_B.Compare_mq);

  /* Logic: '<S414>/OR2' */
  PubIfDecisionPLAN_MDL_B.OR2_jb =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_DPC ||
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_LineValid ||
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_Oncoming);

  /* Logic: '<S414>/AND4' */
  PubIfDecisionPLAN_MDL_B.AND4_p = ((PubIfDecisionPLAN_MDL_B.LcCancelCntLe != 0)
    && PubIfDecisionPLAN_MDL_B.OR2_jb);

  /* UnitDelay: '<S425>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_h0 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jd;

  /* RelationalOperator: '<S423>/Compare' incorporates:
   *  Constant: '<S423>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_d2 = (rtu_VSM_HMI->HWASts != ((uint8_T)3U));

  /* RelationalOperator: '<S422>/Compare' incorporates:
   *  Constant: '<S414>/Constant6'
   *  Constant: '<S422>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_mj =
    (rtP_P_PLAN_ALC_LcCancelLaneChangeReqDspTimeCnt == ((uint16_T)0U));

  /* Logic: '<S414>/AND6' */
  PubIfDecisionPLAN_MDL_B.AND6_p = (PubIfDecisionPLAN_MDL_B.Compare_d2 &&
    PubIfDecisionPLAN_MDL_B.Compare_mj);

  /* UnitDelay: '<S425>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_mp =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_do;

  /* UnitDelay: '<S425>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_g =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ob;

  /* UnitDelay: '<S425>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_B.UnitDelay3_d =
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_dc;

  /* MATLAB Function: '<S425>/MATLAB Function' incorporates:
   *  Constant: '<S425>/Constant'
   */
  PubIfDecisionPLAN_MDL_MATLABFunction(PubIfDecisionPLAN_MDL_B.AND4_p,
    PubIfDecisionPLAN_MDL_B.UnitDelay_h0, PubIfDecisionPLAN_MDL_B.AND6_p,
    rtP_P_PLAN_ALC_LcCancelLaneChangeReqDspTimeCnt,
    PubIfDecisionPLAN_MDL_B.UnitDelay2_mp, PubIfDecisionPLAN_MDL_B.UnitDelay1_g,
    PubIfDecisionPLAN_MDL_B.UnitDelay3_d,
    &PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_n);

  /* Logic: '<S414>/OR4' */
  PubIfDecisionPLAN_MDL_B.OR4_i5 =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_DPC ||
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_LineValid ||
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_Oncoming);

  /* Logic: '<S414>/AND5' */
  PubIfDecisionPLAN_MDL_B.AND5_k = ((PubIfDecisionPLAN_MDL_B.LcCancelCntRi != 0)
    && PubIfDecisionPLAN_MDL_B.OR4_i5);

  /* UnitDelay: '<S424>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_kq =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_o;

  /* UnitDelay: '<S424>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_le =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_b;

  /* UnitDelay: '<S424>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_f =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ar;

  /* UnitDelay: '<S424>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_B.UnitDelay3_o5 =
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_f;

  /* MATLAB Function: '<S424>/MATLAB Function' incorporates:
   *  Constant: '<S424>/Constant'
   */
  PubIfDecisionPLAN_MDL_MATLABFunction(PubIfDecisionPLAN_MDL_B.AND5_k,
    PubIfDecisionPLAN_MDL_B.UnitDelay_kq, PubIfDecisionPLAN_MDL_B.AND6_p,
    rtP_P_PLAN_ALC_LcCancelLaneChangeReqDspTimeCnt,
    PubIfDecisionPLAN_MDL_B.UnitDelay2_le, PubIfDecisionPLAN_MDL_B.UnitDelay1_f,
    PubIfDecisionPLAN_MDL_B.UnitDelay3_o5,
    &PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g);

  /* Chart: '<S189>/Chart1' */
  tmpForInput_idx_0 = ((rtu_VSM_HMI->HWASts == 3) &&
                       ((PubIfDecisionPLAN_MDL_B.LcDrvSatisfiedStsLe == 1) ||
                        (PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsLe == 1) ||
                        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_n.Out));
  if (tmpForInput_idx_0) {
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeReq = 3U;
  } else {
    tmpForInput_idx_0 = (((rtu_VSM_HMI->HWASts == 3) &&
                          ((PubIfDecisionPLAN_MDL_B.LcDrvSatisfiedStsLe == 2) ||
      (PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsLe == 2) ||
      PubIfDecisionPLAN_MDL_B.AND4_gp)) || ((rtu_VSM_HMI->HWASts == 5) &&
      (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange == 1)));
    if (tmpForInput_idx_0) {
      PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeReq = 1U;
    } else {
      tmpForInput_idx_0 = ((rtu_VSM_HMI->HWASts == 3) &&
                           ((PubIfDecisionPLAN_MDL_B.LcDrvSatisfiedStsRi == 1) ||
                            (PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsRi == 1) ||
                            (PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsRi_d == 1)
                            || PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g.Out));
      if (tmpForInput_idx_0) {
        PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeReq = 4U;
      } else {
        tmpForInput_idx_0 = (((rtu_VSM_HMI->HWASts == 3) &&
                              ((PubIfDecisionPLAN_MDL_B.LcDrvSatisfiedStsRi == 2)
          || (PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsRi == 2) ||
          (PubIfDecisionPLAN_MDL_B.LcNohSatisfiedStsRi_d == 2) ||
          PubIfDecisionPLAN_MDL_B.AND5_h)) || ((rtu_VSM_HMI->HWASts == 6) &&
          (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChange == 2)));
        if (tmpForInput_idx_0) {
          PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeReq = 2U;
        } else {
          PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeReq = 0U;
        }
      }
    }
  }

  /* End of Chart: '<S189>/Chart1' */

  /* DataTypeConversion: '<S189>/Data Type Conversion' */
  PubIfDecisionPLAN_MDL_B.HMILaneChangeReq =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LaneChangeReq;

  /* RelationalOperator: '<S206>/Compare' incorporates:
   *  Constant: '<S206>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_pe = (PubIfDecisionPLAN_MDL_B.LcCancelCntLe >
    ((uint8_T)0U));

  /* RelationalOperator: '<S207>/Compare' incorporates:
   *  Constant: '<S207>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_e4 = (PubIfDecisionPLAN_MDL_B.LcCancelCntRi >
    ((uint8_T)0U));

  /* Switch: '<S183>/Switch' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_DrvCmpl) {
    /* Switch: '<S183>/Switch' incorporates:
     *  Constant: '<S183>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.Switch_i = ((uint16_T)1U);
  } else {
    /* Switch: '<S183>/Switch' incorporates:
     *  Constant: '<S183>/Constant5'
     */
    PubIfDecisionPLAN_MDL_B.Switch_i = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch' */

  /* Switch: '<S183>/Switch1' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_Drv) {
    /* Switch: '<S183>/Switch1' incorporates:
     *  Constant: '<S183>/Constant1'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_fl = ((uint16_T)2U);
  } else {
    /* Switch: '<S183>/Switch1' incorporates:
     *  Constant: '<S183>/Constant5'
     */
    PubIfDecisionPLAN_MDL_B.Switch1_fl = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch1' */

  /* Switch: '<S183>/Switch2' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_DPC) {
    /* Switch: '<S183>/Switch2' incorporates:
     *  Constant: '<S183>/Constant2'
     */
    PubIfDecisionPLAN_MDL_B.Switch2_j = ((uint16_T)4U);
  } else {
    /* Switch: '<S183>/Switch2' incorporates:
     *  Constant: '<S183>/Constant5'
     */
    PubIfDecisionPLAN_MDL_B.Switch2_j = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch2' */

  /* Switch: '<S183>/Switch3' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_LineValid) {
    /* Switch: '<S183>/Switch3' incorporates:
     *  Constant: '<S183>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch3_n = ((uint16_T)8U);
  } else {
    /* Switch: '<S183>/Switch3' incorporates:
     *  Constant: '<S183>/Constant5'
     */
    PubIfDecisionPLAN_MDL_B.Switch3_n = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch3' */

  /* Switch: '<S183>/Switch4' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_CancelOverTk) {
    /* Switch: '<S183>/Switch4' incorporates:
     *  Constant: '<S183>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch4_h = ((uint16_T)16U);
  } else {
    /* Switch: '<S183>/Switch4' incorporates:
     *  Constant: '<S183>/Constant5'
     */
    PubIfDecisionPLAN_MDL_B.Switch4_h = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch4' */

  /* Switch: '<S183>/Switch10' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_Oncoming) {
    /* Switch: '<S183>/Switch10' incorporates:
     *  Constant: '<S183>/Constant12'
     */
    PubIfDecisionPLAN_MDL_B.Switch10_b = ((uint16_T)32U);
  } else {
    /* Switch: '<S183>/Switch10' incorporates:
     *  Constant: '<S183>/Constant5'
     */
    PubIfDecisionPLAN_MDL_B.Switch10_b = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch10' */

  /* Switch: '<S183>/Switch11' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelLe_LcAvailable) {
    /* Switch: '<S183>/Switch11' incorporates:
     *  Constant: '<S183>/Constant13'
     */
    PubIfDecisionPLAN_MDL_B.Switch11 = ((uint16_T)64U);
  } else {
    /* Switch: '<S183>/Switch11' incorporates:
     *  Constant: '<S183>/Constant5'
     */
    PubIfDecisionPLAN_MDL_B.Switch11 = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch11' */

  /* Sum: '<S183>/Add' */
  PubIfDecisionPLAN_MDL_B.Add_de = (uint16_T)((uint32_T)(uint16_T)((uint32_T)
    (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
    ((uint32_T)PubIfDecisionPLAN_MDL_B.Switch_i +
     PubIfDecisionPLAN_MDL_B.Switch1_fl) + PubIfDecisionPLAN_MDL_B.Switch2_j) +
    PubIfDecisionPLAN_MDL_B.Switch3_n) + PubIfDecisionPLAN_MDL_B.Switch4_h) +
    PubIfDecisionPLAN_MDL_B.Switch10_b) + PubIfDecisionPLAN_MDL_B.Switch11);

  /* Switch: '<S183>/Switch5' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_DrvCmpl) {
    /* Switch: '<S183>/Switch5' incorporates:
     *  Constant: '<S183>/Constant6'
     */
    PubIfDecisionPLAN_MDL_B.Switch5_m = ((uint16_T)1U);
  } else {
    /* Switch: '<S183>/Switch5' incorporates:
     *  Constant: '<S183>/Constant15'
     */
    PubIfDecisionPLAN_MDL_B.Switch5_m = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch5' */

  /* Switch: '<S183>/Switch6' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_Drv) {
    /* Switch: '<S183>/Switch6' incorporates:
     *  Constant: '<S183>/Constant7'
     */
    PubIfDecisionPLAN_MDL_B.Switch6 = ((uint16_T)2U);
  } else {
    /* Switch: '<S183>/Switch6' incorporates:
     *  Constant: '<S183>/Constant15'
     */
    PubIfDecisionPLAN_MDL_B.Switch6 = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch6' */

  /* Switch: '<S183>/Switch9' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_DPC) {
    /* Switch: '<S183>/Switch9' incorporates:
     *  Constant: '<S183>/Constant10'
     */
    PubIfDecisionPLAN_MDL_B.Switch9_m = ((uint16_T)4U);
  } else {
    /* Switch: '<S183>/Switch9' incorporates:
     *  Constant: '<S183>/Constant15'
     */
    PubIfDecisionPLAN_MDL_B.Switch9_m = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch9' */

  /* Switch: '<S183>/Switch12' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_LineValid) {
    /* Switch: '<S183>/Switch12' incorporates:
     *  Constant: '<S183>/Constant11'
     */
    PubIfDecisionPLAN_MDL_B.Switch12 = ((uint16_T)8U);
  } else {
    /* Switch: '<S183>/Switch12' incorporates:
     *  Constant: '<S183>/Constant15'
     */
    PubIfDecisionPLAN_MDL_B.Switch12 = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch12' */

  /* Switch: '<S183>/Switch13' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_CancelOverTk) {
    /* Switch: '<S183>/Switch13' incorporates:
     *  Constant: '<S183>/Constant14'
     */
    PubIfDecisionPLAN_MDL_B.Switch13 = ((uint16_T)16U);
  } else {
    /* Switch: '<S183>/Switch13' incorporates:
     *  Constant: '<S183>/Constant15'
     */
    PubIfDecisionPLAN_MDL_B.Switch13 = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch13' */

  /* Switch: '<S183>/Switch7' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_Oncoming) {
    /* Switch: '<S183>/Switch7' incorporates:
     *  Constant: '<S183>/Constant8'
     */
    PubIfDecisionPLAN_MDL_B.Switch7 = ((uint16_T)32U);
  } else {
    /* Switch: '<S183>/Switch7' incorporates:
     *  Constant: '<S183>/Constant15'
     */
    PubIfDecisionPLAN_MDL_B.Switch7 = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch7' */

  /* Switch: '<S183>/Switch8' */
  if (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelRi_LcAvailable) {
    /* Switch: '<S183>/Switch8' incorporates:
     *  Constant: '<S183>/Constant9'
     */
    PubIfDecisionPLAN_MDL_B.Switch8_n = ((uint16_T)64U);
  } else {
    /* Switch: '<S183>/Switch8' incorporates:
     *  Constant: '<S183>/Constant15'
     */
    PubIfDecisionPLAN_MDL_B.Switch8_n = ((uint16_T)0U);
  }

  /* End of Switch: '<S183>/Switch8' */

  /* Sum: '<S183>/Add1' */
  PubIfDecisionPLAN_MDL_B.Add1_f = (uint16_T)((uint32_T)(uint16_T)((uint32_T)
    (uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)((uint32_T)(uint16_T)
    ((uint32_T)PubIfDecisionPLAN_MDL_B.Switch5_m +
     PubIfDecisionPLAN_MDL_B.Switch6) + PubIfDecisionPLAN_MDL_B.Switch9_m) +
    PubIfDecisionPLAN_MDL_B.Switch12) + PubIfDecisionPLAN_MDL_B.Switch13) +
    PubIfDecisionPLAN_MDL_B.Switch7) + PubIfDecisionPLAN_MDL_B.Switch8_n);

  /* Chart: '<S183>/SigValueHold1' */
  if (PubIfDecisionPLAN_MDL_DW.is_active_c118_PubIfDecisionPLAN_MDL == 0U) {
    PubIfDecisionPLAN_MDL_DW.is_active_c118_PubIfDecisionPLAN_MDL = 1U;
    PubIfDecisionPLAN_MDL_DW.is_c118_PubIfDecisionPLAN_MDL =
      PubIfDecisionPLAN_MDL_IN_Through;
    PubIfDecisionPLAN_MDL_B.HoldValue = 0U;
  } else if (PubIfDecisionPLAN_MDL_DW.is_c118_PubIfDecisionPLAN_MDL == 1) {
    tmpForInput_idx_0 = ((!PubIfDecisionPLAN_MDL_B.Compare_pe) &&
                         (!PubIfDecisionPLAN_MDL_B.Compare_e4) &&
                         (PubIfDecisionPLAN_MDL_DW.Cnt > 100));
    if (tmpForInput_idx_0) {
      PubIfDecisionPLAN_MDL_DW.is_c118_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_Through;
      PubIfDecisionPLAN_MDL_B.HoldValue = 0U;
    } else {
      bpIdx = PubIfDecisionPLAN_MDL_DW.Cnt + 1U;
      if (bpIdx > 65535U) {
        bpIdx = 65535U;
      }

      u0 = (uint16_T)bpIdx;
      if (u0 < 2000) {
        PubIfDecisionPLAN_MDL_DW.Cnt = u0;
      } else {
        PubIfDecisionPLAN_MDL_DW.Cnt = 2000U;
      }
    }
  } else {
    /* case IN_Through: */
    guard1 = false;
    if (PubIfDecisionPLAN_MDL_B.Compare_pe) {
      PubIfDecisionPLAN_MDL_B.HoldValue = PubIfDecisionPLAN_MDL_B.Add_de;
      guard1 = true;
    } else if (PubIfDecisionPLAN_MDL_B.Compare_e4) {
      PubIfDecisionPLAN_MDL_B.HoldValue = PubIfDecisionPLAN_MDL_B.Add1_f;
      guard1 = true;
    } else {
      PubIfDecisionPLAN_MDL_B.HoldValue = 0U;
    }

    if (guard1) {
      PubIfDecisionPLAN_MDL_DW.is_c118_PubIfDecisionPLAN_MDL =
        PubIfDecisionPLAN_MDL_IN_Hold;
      PubIfDecisionPLAN_MDL_DW.Cnt = 0U;
    }
  }

  /* End of Chart: '<S183>/SigValueHold1' */

  /* BusAssignment: '<S4>/Bus Assignment' incorporates:
   *  Constant: '<S4>/Constant10'
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S4>/Constant3'
   *  Constant: '<S4>/Constant6'
   */
  *rty_PLAN_ALC_DECS = PubIfDecisionPLAN_MDL_rtZPLAN_ALC_DECS_BUS;
  rty_PLAN_ALC_DECS->PLAN_ALC_sts = PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts;
  rty_PLAN_ALC_DECS->PLAN_ALC_LcDecsLe = ((uint8_T)255U);
  rty_PLAN_ALC_DECS->PLAN_ALC_LcDecsRi = ((uint8_T)255U);
  rty_PLAN_ALC_DECS->PLAN_ALC_TurnLightReq =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LampReq;
  rty_PLAN_ALC_DECS->PLAN_ALC_stsReason = PubIfDecisionPLAN_MDL_B.Switch7_i;
  rty_PLAN_ALC_DECS->PLAN_ALC_LcReason =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason;
  rty_PLAN_ALC_DECS->PLAN_ALC_LcFeReason =
    PubIfDecisionPLAN_MDL_B.HMILaneChangeReq;
  rty_PLAN_ALC_DECS->PLAN_ALC_LcCancelReason = PubIfDecisionPLAN_MDL_B.HoldValue;
  rty_PLAN_ALC_DECS->PLAN_ALC_DangerObjIndex = 0U;

  /* RelationalOperator: '<S201>/Compare' incorporates:
   *  Constant: '<S201>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_o0 = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)1U));

  /* Logic: '<S187>/AND7' */
  PubIfDecisionPLAN_MDL_B.LcNohRiMerge =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_NoTurnLamp &&
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_IPVehSpd &&
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_LineValid &&
     rtu_LSM_HWA->RiLineLcAvailable &&
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohRi_LciNoh);

  /* RelationalOperator: '<S199>/Compare' incorporates:
   *  Constant: '<S199>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_lt =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L > 0.3F);

  /* Logic: '<S182>/AND2' */
  PubIfDecisionPLAN_MDL_B.AND2_b = (PubIfDecisionPLAN_MDL_B.Compare_o0 &&
    PubIfDecisionPLAN_MDL_B.LcNohRiMerge && PubIfDecisionPLAN_MDL_B.Compare_lt);

  /* Logic: '<S187>/AND5' */
  PubIfDecisionPLAN_MDL_B.LcNohLeMerge =
    (PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_NoTurnLamp &&
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_IPVehSpd &&
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_LineValid &&
     rtu_LSM_HWA->LeLineLcAvailable &&
     PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcNohLe_LciNoh);

  /* RelationalOperator: '<S200>/Compare' incorporates:
   *  Constant: '<S200>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ip =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_R > 0.3F);

  /* Logic: '<S182>/AND3' */
  PubIfDecisionPLAN_MDL_B.AND3_o = (PubIfDecisionPLAN_MDL_B.Compare_o0 &&
    PubIfDecisionPLAN_MDL_B.LcNohLeMerge && PubIfDecisionPLAN_MDL_B.Compare_ip);

  /* RelationalOperator: '<S204>/Compare' incorporates:
   *  Constant: '<S204>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_kq = (PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts ==
    ((uint8_T)1U));

  /* Switch: '<S182>/Switch4' */
  if (PubIfDecisionPLAN_MDL_B.AND3_o) {
    /* Switch: '<S182>/Switch4' incorporates:
     *  Constant: '<S182>/Constant3'
     */
    PubIfDecisionPLAN_MDL_B.Switch4_i = 1;
  } else {
    /* Switch: '<S182>/Switch4' incorporates:
     *  Constant: '<S182>/Constant4'
     */
    PubIfDecisionPLAN_MDL_B.Switch4_i = 0;
  }

  /* End of Switch: '<S182>/Switch4' */

  /* Switch: '<S182>/Switch3' */
  if (PubIfDecisionPLAN_MDL_B.AND2_b) {
    /* Switch: '<S182>/Switch3' incorporates:
     *  Constant: '<S182>/Constant2'
     */
    PubIfDecisionPLAN_MDL_B.Switch3_a = (-1);
  } else {
    /* Switch: '<S182>/Switch3' */
    PubIfDecisionPLAN_MDL_B.Switch3_a = PubIfDecisionPLAN_MDL_B.Switch4_i;
  }

  /* End of Switch: '<S182>/Switch3' */

  /* SignalConversion: '<S183>/Signal Copy1' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcCancelReason =
    PubIfDecisionPLAN_MDL_B.HoldValue;

  /* UnitDelay: '<S4>/Unit Delay12' */
  PubIfDecisionPLAN_MDL_B.UnitDelay12_o =
    PubIfDecisionPLAN_MDL_DW.UnitDelay12_DSTATE_f;

  /* RelationalOperator: '<S256>/Compare' incorporates:
   *  Constant: '<S256>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_nx = (PubIfDecisionPLAN_MDL_B.UnitDelay12_o ==
    ((uint8_T)4U));

  /* Logic: '<S185>/AND' */
  PubIfDecisionPLAN_MDL_B.AND_a = (PubIfDecisionPLAN_MDL_B.Compare_l &&
    PubIfDecisionPLAN_MDL_B.Compare_nx);

  /* Constant: '<S270>/LCDeltaTmeGap' */
  PubIfDecisionPLAN_MDL_B.LCDeltaTmeGap = rtP_P_PLAN_ALC_LCDeltaTmeGap;

  /* Logic: '<S186>/NOT2' */
  PubIfDecisionPLAN_MDL_B.NOT2_d = !rtu_VSM_UOM_LC->User_LeTurnLmpOn;

  /* Logic: '<S186>/NOT3' */
  PubIfDecisionPLAN_MDL_B.NOT3_k = !rtu_VSM_UOM_LC->User_RiTurnLmpOn;

  /* Logic: '<S186>/AND' */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcLe_NoTurnLamp =
    (PubIfDecisionPLAN_MDL_B.NOT2_d && PubIfDecisionPLAN_MDL_B.NOT3_k);

  /* Abs: '<S186>/Abs1' */
  PubIfDecisionPLAN_MDL_B.Abs1_j = fabsf(rtu_LSM_HWA->preDyDiff);

  /* RelationalOperator: '<S280>/Compare' incorporates:
   *  Constant: '<S280>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_nd = (PubIfDecisionPLAN_MDL_B.Abs1_j < 0.4F);

  /* RelationalOperator: '<S186>/Relational Operator2' incorporates:
   *  Constant: '<S186>/Constant4'
   */
  PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcLe_IPVehSpd = (rtu_PLAN_VCAN_ESP->VehSpd
    >= rtP_P_PLAN_ALC_vMinPreLC_Noh);

  /* UnitDelay: '<S285>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_B.UnitDelay2_br =
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_k;

  /* RelationalOperator: '<S186>/Relational Operator' incorporates:
   *  Constant: '<S186>/Constant3'
   */
  PubIfDecisionPLAN_MDL_B.RelationalOperator_g =
    (PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DangerPlaus_L <=
     rtP_P_PLAN_ALC_DynamicDPCthreshold);

  /* UnitDelay: '<S285>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_B.UnitDelay1_o =
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_d;

  /* If: '<S285>/If' */
  if (PubIfDecisionPLAN_MDL_B.UnitDelay2_br &&
      PubIfDecisionPLAN_MDL_B.RelationalOperator_g) {
    /* Outputs for IfAction SubSystem: '<S285>/If Action Subsystem' incorporates:
     *  ActionPort: '<S286>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem(PubIfDecisionPLAN_MDL_B.UnitDelay1_o,
      &PubIfDecisionPLAN_MDL_B.Merge_g,
      &PubIfDecisionPLAN_MDL_B.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S285>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S285>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S287>/Action Port'
     */
    PubIfDecisionPLAN_MDL_IfActionSubsystem1(&PubIfDecisionPLAN_MDL_B.Merge_g);

    /* End of Outputs for SubSystem: '<S285>/If Action Subsystem1' */
  }

  /* End of If: '<S285>/If' */

  /* Product: '<S285>/Product' incorporates:
   *  Constant: '<S285>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Product_j = (real32_T)PubIfDecisionPLAN_MDL_B.Merge_g *
    0.02F;

  /* RelationalOperator: '<S279>/Compare' incorporates:
   *  Constant: '<S279>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_jh = (PubIfDecisionPLAN_MDL_B.Product_j > 2.0F);

  /* RelationalOperator: '<S282>/Compare' incorporates:
   *  Constant: '<S282>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_ml = (rtu_LSM_HWA->HWALeLineValid != false);

  /* Logic: '<S186>/AND3' */
  tmpForInput_3[0] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcLe_NoTurnLamp;
  tmpForInput_3[1] = PubIfDecisionPLAN_MDL_B.Compare_nd;
  tmpForInput_3[2] = PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcMrcLe_IPVehSpd;
  tmpForInput_3[3] = PubIfDecisionPLAN_MDL_B.Compare_jh;
  tmpForInput_3[4] = PubIfDecisionPLAN_MDL_B.Compare_ml;
  tmpForInput_3[5] = PubIfDecisionPLAN_MDL_ConstB.Compare;
  tmpForInput_idx_0 = tmpForInput_3[0];
  for (JminIni = 0; JminIni < 5; JminIni++) {
    tmpForInput_idx_0 = (tmpForInput_idx_0 && tmpForInput_3[JminIni + 1]);
  }

  /* Logic: '<S186>/AND3' */
  PubIfDecisionPLAN_MDL_B.LcNohLe_f = tmpForInput_idx_0;

  /* UnitDelay: '<S349>/Unit Delay' */
  PubIfDecisionPLAN_MDL_B.UnitDelay_lv =
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_b;

  /* RelationalOperator: '<S349>/Relational Operator' incorporates:
   *  Constant: '<S349>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.RelationalOperator_ak = (((uint8_T)3U) ==
    PubIfDecisionPLAN_MDL_B.UnitDelay_lv);

  /* Logic: '<S349>/AND' */
  PubIfDecisionPLAN_MDL_B.JumpHappened_b =
    (PubIfDecisionPLAN_MDL_B.RelationalOperator_ak &&
     PubIfDecisionPLAN_MDL_ConstB.RelationalOperator1);

  /* Constant: '<S339>/LCDeltaTmeGap' */
  PubIfDecisionPLAN_MDL_B.LCDeltaTmeGap_c = rtP_P_PLAN_ALC_LCDeltaTmeGap;

  /* RelationalOperator: '<S393>/Compare' incorporates:
   *  Constant: '<S393>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_nr = (rtu_VSM_HMI->HWASts == ((uint8_T)3U));

  /* RelationalOperator: '<S468>/Compare' incorporates:
   *  Constant: '<S468>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_g3 = (rtu_VSM_HMI->HWASts == ((uint8_T)3U));

  /* UnitDelay: '<S460>/Unit Delay14' */
  PubIfDecisionPLAN_MDL_B.UnitDelay14_h =
    PubIfDecisionPLAN_MDL_DW.UnitDelay14_DSTATE_m;

  /* RelationalOperator: '<S469>/Compare' incorporates:
   *  Constant: '<S469>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_lp = (PubIfDecisionPLAN_MDL_B.UnitDelay14_h ==
    ((uint8_T)5U));

  /* RelationalOperator: '<S470>/Compare' incorporates:
   *  Constant: '<S470>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_nhh = (PubIfDecisionPLAN_MDL_B.UnitDelay14_h ==
    ((uint8_T)6U));

  /* Logic: '<S460>/OR2' */
  PubIfDecisionPLAN_MDL_B.OR2_k = (PubIfDecisionPLAN_MDL_B.Compare_lp ||
    PubIfDecisionPLAN_MDL_B.Compare_nhh);

  /* Logic: '<S460>/OR3' */
  PubIfDecisionPLAN_MDL_B.OR3_l = (PubIfDecisionPLAN_MDL_B.Compare_g3 &&
    PubIfDecisionPLAN_MDL_B.OR2_k);

  /* RelationalOperator: '<S465>/Compare' incorporates:
   *  Constant: '<S465>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_h0q = (PubIfDecisionPLAN_MDL_B.UnitDelay14_h ==
    ((uint8_T)3U));

  /* RelationalOperator: '<S466>/Compare' incorporates:
   *  Constant: '<S466>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_jy = (rtu_VSM_HMI->HWASts == ((uint8_T)5U));

  /* RelationalOperator: '<S467>/Compare' incorporates:
   *  Constant: '<S467>/Constant'
   */
  PubIfDecisionPLAN_MDL_B.Compare_j4 = (rtu_VSM_HMI->HWASts == ((uint8_T)6U));

  /* Logic: '<S460>/OR' */
  PubIfDecisionPLAN_MDL_B.OR_d = (PubIfDecisionPLAN_MDL_B.Compare_jy ||
    PubIfDecisionPLAN_MDL_B.Compare_j4);

  /* Logic: '<S460>/OR1' */
  PubIfDecisionPLAN_MDL_B.OR1_i = (PubIfDecisionPLAN_MDL_B.Compare_h0q &&
    PubIfDecisionPLAN_MDL_B.OR_d);

  /* Logic: '<S460>/OR4' */
  PubIfDecisionPLAN_MDL_B.OR4_o = (PubIfDecisionPLAN_MDL_B.OR3_l ||
    PubIfDecisionPLAN_MDL_B.OR1_i);
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S471>/Unit Delay' */
    PubIfDecisionPLAN_MDL_B.UnitDelay_j[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gm[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S471>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_B.UnitDelay1_b[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_i[i_2];
  }

  /* MATLAB Function: '<S471>/MATLAB Function' incorporates:
   *  Constant: '<S471>/Constant'
   */
  PubIfDecisionPLAN_MDL_MATLABFunction_f(0.3, rtu_TOS_LC->Object_ID,
    PubIfDecisionPLAN_MDL_B.UnitDelay_j, rtu_TOS_LC->Object_DX,
    PubIfDecisionPLAN_MDL_B.UnitDelay1_b,
    &PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f);
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S471>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_B.UnitDelay2_l[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_p[i_2];
  }

  /* MATLAB Function: '<S471>/MATLAB Function1' incorporates:
   *  Constant: '<S471>/Constant3'
   */
  PubIfDecisionPLAN_MDL_MATLABFunction_f(0.1, rtu_TOS_LC->Object_ID,
    PubIfDecisionPLAN_MDL_B.UnitDelay_j, rtu_TOS_LC->Object_DY,
    PubIfDecisionPLAN_MDL_B.UnitDelay2_l,
    &PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1);

  /* MATLAB Function: '<S471>/MATLAB Function3' */
  for (JminIni = 0; JminIni < 11; JminIni++) {
    if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] > 0.0F) {
      if (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] <= 0.0F) {
        LineC2Factor = 1.0F;
      } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] >
                  0.0F) &&
                 (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] <=
                  rtu_LSM_HWA->HWARange)) {
        LineC2Factor =
          PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] * 0.0F /
          rtu_LSM_HWA->HWARange + 1.0F;
      } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] >
                  rtu_LSM_HWA->HWARange) &&
                 (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] <=
                  rtu_LSM_HWA->HWARange + 20.0F)) {
        LineC2Factor =
          (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] -
           rtu_LSM_HWA->HWARange) * -0.3F / ((rtu_LSM_HWA->HWARange + 20.0F) -
          rtu_LSM_HWA->HWARange) + 1.0F;
      } else if ((PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] >
                  rtu_LSM_HWA->HWARange + 20.0F) &&
                 (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] <=
                  rtu_LSM_HWA->HWARange + 40.0F)) {
        LineC2Factor =
          (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] -
           (rtu_LSM_HWA->HWARange + 20.0F)) * -0.7F / ((rtu_LSM_HWA->HWARange +
          40.0F) - (rtu_LSM_HWA->HWARange + 20.0F)) + 0.7F;
      } else {
        LineC2Factor = 0.0F;
      }

      PubIfDecisionPLAN_MDL_B.SLObjDy[JminIni] =
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1.result[JminIni] - (((0.0F *
        rtu_LSM_HWA->HWALineC3 *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] +
        LineC2Factor * rtu_LSM_HWA->HWALineC2 *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni]) +
        rtu_LSM_HWA->HWALineC1 *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni]) +
        rtu_LSM_HWA->HWALineC0);
    } else {
      PubIfDecisionPLAN_MDL_B.SLObjDy[JminIni] =
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1.result[JminIni] - (((0.0F *
        rtu_LSM_HWA->HWALineC3 *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] + 0.2F *
        rtu_LSM_HWA->HWALineC2 *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni] *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni]) +
        rtu_LSM_HWA->HWALineC1 *
        PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[JminIni]) +
        rtu_LSM_HWA->HWALineC0);
    }
  }

  /* End of MATLAB Function: '<S471>/MATLAB Function3' */
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S471>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_B.UnitDelay3_mg[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_d[i_2];
  }

  /* MATLAB Function: '<S471>/MATLAB Function2' incorporates:
   *  Constant: '<S471>/Constant1'
   */
  PubIfDecisionPLAN_MDL_MATLABFunction_f(0.1, rtu_TOS_LC->Object_ID,
    PubIfDecisionPLAN_MDL_B.UnitDelay_j, rtu_TOS_LC->Object_VX,
    PubIfDecisionPLAN_MDL_B.UnitDelay3_mg,
    &PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_e);

  /* MATLAB Function: '<S460>/BufRelease1' incorporates:
   *  Constant: '<S460>/Constant'
   *  Constant: '<S460>/Constant1'
   */
  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.PLAN_LostBufRemoveMark[i_2] = 0U;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.LostBufBreakLockObjID[i_2] = 0U;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.LostBufBreakLockCond[i_2] = 0U;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.ToleranceBoxFront[i_2] = 0.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.ToleranceBoxRear[i_2] = 0.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.ToleranceBoxLeft[i_2] = 0.0F;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    PubIfDecisionPLAN_MDL_B.ToleranceBoxRight[i_2] = 0.0F;
  }

  temp = (P_Global_DxvFrontBumper_m - P_Global_DxvRearBumper_m) * 0.5F;
  for (JminIni = 0; JminIni < 11; JminIni++) {
    guard1 = false;
    if (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufID[JminIni] != 0) {
      if (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni] * 0.02F >
          fmaxf(PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCLe[JminIni], (real32_T)
                PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCRi[JminIni]) * 8.0F) {
        PubIfDecisionPLAN_MDL_B.PLAN_LostBufRemoveMark[JminIni] = 1U;
        PubIfDecisionPLAN_MDL_B.LostBufBreakLockCond[JminIni] = 1U;
      } else {
        if (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufVx[JminIni] >= 0.0F) {
          deltaVelCC = fmaxf(0.02F *
                             PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni],
                             0.0F) + 3.0F;
          t = fmaxf(0.02F * fminf
                    (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni],
                     100.0F) * PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufVx[JminIni],
                    0.0F) + 3.0F;
          RtVehSpdms = fminf(0.02F *
                             PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni],
                             0.8F) + 1.8F;
          ToleranceBoxRightOffset = fminf(0.02F *
            PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni], 0.8F) +
            1.8F;
        } else {
          deltaVelCC = fmaxf(0.02F * fminf
                             (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni],
                              100.0F) *
                             PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufVx[JminIni],
                             0.0F) + 3.0F;
          t = fmaxf(0.02F *
                    PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni],
                    0.0F) + 3.0F;
          RtVehSpdms = fminf(0.02F *
                             PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni],
                             0.8F) + 1.8F;
          ToleranceBoxRightOffset = fminf(0.02F *
            PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni], 0.8F) +
            1.8F;
        }

        LineC2Factor = PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufVx[JminIni] *
          0.02F * PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni] +
          PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDx[JminIni];
        PubIfDecisionPLAN_MDL_B.ToleranceBoxFront[JminIni] = LineC2Factor +
          deltaVelCC;
        PubIfDecisionPLAN_MDL_B.ToleranceBoxRear[JminIni] = LineC2Factor - t;
        PubIfDecisionPLAN_MDL_B.ToleranceBoxLeft[JminIni] =
          PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDy[JminIni] + RtVehSpdms;
        PubIfDecisionPLAN_MDL_B.ToleranceBoxRight[JminIni] =
          PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDy[JminIni] -
          ToleranceBoxRightOffset;
        if ((PubIfDecisionPLAN_MDL_B.ToleranceBoxFront[JminIni] > temp) &&
            (PubIfDecisionPLAN_MDL_B.ToleranceBoxFront[JminIni] <
             P_Global_DxvFrontBumper_m + 7.0F)) {
          PubIfDecisionPLAN_MDL_B.ToleranceBoxFront[JminIni] =
            P_Global_DxvFrontBumper_m + 7.0F;
        }

        if ((PubIfDecisionPLAN_MDL_B.ToleranceBoxRear[JminIni] > temp) &&
            (PubIfDecisionPLAN_MDL_B.ToleranceBoxRear[JminIni] <
             P_Global_DxvFrontBumper_m + 7.0F)) {
          PubIfDecisionPLAN_MDL_B.ToleranceBoxRear[JminIni] = temp;
        }

        if ((PubIfDecisionPLAN_MDL_B.ToleranceBoxFront[JminIni] >
             -(P_Global_DxvRearBumper_m + 7.0F)) &&
            (PubIfDecisionPLAN_MDL_B.ToleranceBoxFront[JminIni] < temp)) {
          PubIfDecisionPLAN_MDL_B.ToleranceBoxFront[JminIni] = temp;
        }

        if ((PubIfDecisionPLAN_MDL_B.ToleranceBoxRear[JminIni] >
             -(P_Global_DxvRearBumper_m + 7.0F)) &&
            (PubIfDecisionPLAN_MDL_B.ToleranceBoxRear[JminIni] < temp)) {
          PubIfDecisionPLAN_MDL_B.ToleranceBoxRear[JminIni] =
            -(P_Global_DxvRearBumper_m + 7.0F);
        }

        oldestbufIndex = 0;
        do {
          exitg2 = 0;
          if (oldestbufIndex < 11) {
            if ((PubIfDecisionPLAN_MDL_B.PLAN_DPC_ObjID[oldestbufIndex] ==
                 PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufID[JminIni]) &&
                (PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[JminIni] <=
                 20.0F) && (rtu_TOS_LC->Object_Fus_Type[oldestbufIndex] != 0)) {
              PubIfDecisionPLAN_MDL_B.PLAN_LostBufRemoveMark[JminIni] = 1U;
              PubIfDecisionPLAN_MDL_B.LostBufBreakLockObjID[JminIni] =
                PubIfDecisionPLAN_MDL_B.PLAN_DPC_ObjID[oldestbufIndex];
              PubIfDecisionPLAN_MDL_B.LostBufBreakLockCond[JminIni] = 2U;
              guard1 = true;
              exitg2 = 1;
            } else if ((PubIfDecisionPLAN_MDL_B.PLAN_DPC_ObjID[oldestbufIndex]
                        != 0) &&
                       (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[oldestbufIndex]
                        <= PubIfDecisionPLAN_MDL_B.ToleranceBoxFront[JminIni]) &&
                       (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[oldestbufIndex]
                        >= PubIfDecisionPLAN_MDL_B.ToleranceBoxRear[JminIni]) &&
                       (PubIfDecisionPLAN_MDL_B.SLObjDy[oldestbufIndex] <=
                        PubIfDecisionPLAN_MDL_B.ToleranceBoxLeft[JminIni]) &&
                       (PubIfDecisionPLAN_MDL_B.SLObjDy[oldestbufIndex] >=
                        PubIfDecisionPLAN_MDL_B.ToleranceBoxRight[JminIni]) &&
                       (rtu_TOS_LC->Object_Fus_Type[oldestbufIndex] != 0)) {
              PubIfDecisionPLAN_MDL_B.PLAN_LostBufRemoveMark[JminIni] = 1U;
              PubIfDecisionPLAN_MDL_B.LostBufBreakLockObjID[JminIni] =
                PubIfDecisionPLAN_MDL_B.PLAN_DPC_ObjID[oldestbufIndex];
              PubIfDecisionPLAN_MDL_B.LostBufBreakLockCond[JminIni] = 3U;
              guard1 = true;
              exitg2 = 1;
            } else {
              oldestbufIndex++;
            }
          } else {
            guard1 = true;
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (PubIfDecisionPLAN_MDL_B.OR4_o) {
        for (i_2 = 0; i_2 < 11; i_2++) {
          PubIfDecisionPLAN_MDL_B.PLAN_LostBufRemoveMark[i_2] = 1U;
        }

        for (i_2 = 0; i_2 < 11; i_2++) {
          PubIfDecisionPLAN_MDL_B.LostBufBreakLockCond[i_2] = 4U;
        }
      }
    }
  }

  /* End of MATLAB Function: '<S460>/BufRelease1' */

  /* DataTypeConversion: '<S461>/Data Type Conversion6' */
  PubIfDecisionPLAN_MDL_B.DataTypeConversion6 =
    PubIfDecisionPLAN_MDL_B.NearestObjSpeed_L;

  /* DataTypeConversion: '<S461>/Data Type Conversion7' */
  PubIfDecisionPLAN_MDL_B.DataTypeConversion7 =
    PubIfDecisionPLAN_MDL_B.NearestObjSpeed_R;

  /* DataTypeConversion: '<S462>/Data Type Conversion1' */
  PubIfDecisionPLAN_MDL_B.DataTypeConversion1_h =
    PubIfDecisionPLAN_MDL_B.Rear_NearesObjValid;

  /* DataTypeConversion: '<S462>/Data Type Conversion2' */
  PubIfDecisionPLAN_MDL_B.DataTypeConversion2_k =
    PubIfDecisionPLAN_MDL_B.Rear_NearesObjValid_p;

  /* Outputs for Iterator SubSystem: '<S462>/For Iterator Subsystem2' */
  PubIfDecisionPLAN_MDL_ForIteratorSubsystem2
    (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result,
     PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result,
     &PubIfDecisionPLAN_MDL_B.ForIteratorSubsystem2);

  /* End of Outputs for SubSystem: '<S462>/For Iterator Subsystem2' */

  /* Outputs for Iterator SubSystem: '<S462>/For Iterator Subsystem4' */
  PubIfDecisionPLAN_MDL_ForIteratorSubsystem2
    (PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result,
     PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result,
     &PubIfDecisionPLAN_MDL_B.ForIteratorSubsystem4);

  /* End of Outputs for SubSystem: '<S462>/For Iterator Subsystem4' */
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S462>/Product1' */
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DPCMatrix_Le[i_2] =
      PubIfDecisionPLAN_MDL_B.ForIteratorSubsystem2.Assignment[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Le[i_2];
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Product: '<S462>/Product14' */
    PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DPCMatrix_Ri[i_2] =
      PubIfDecisionPLAN_MDL_B.ForIteratorSubsystem4.Assignment[i_2] *
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_PreDyRel_Dy_Ri[i_2];
  }

  /* SignalConversion: '<S462>/Signal Copy' */
  PubIfDecisionPLAN_MDL_B.RearObjSpdGnd =
    PubIfDecisionPLAN_MDL_B.Rear_NearestObjSpeed_b;

  /* SignalConversion: '<S462>/Signal Copy1' */
  PubIfDecisionPLAN_MDL_B.RearObjDx =
    PubIfDecisionPLAN_MDL_B.Rear_NearestObjDx_a;

  /* SignalConversion: '<S462>/Signal Copy2' */
  PubIfDecisionPLAN_MDL_B.RearObjValid =
    PubIfDecisionPLAN_MDL_B.DataTypeConversion2_k;

  /* SignalConversion: '<S462>/Signal Copy3' */
  PubIfDecisionPLAN_MDL_B.RearObjSpdGnd_k =
    PubIfDecisionPLAN_MDL_B.Rear_NearestObjSpeed;

  /* SignalConversion: '<S462>/Signal Copy4' */
  PubIfDecisionPLAN_MDL_B.RearObjDx_e =
    PubIfDecisionPLAN_MDL_B.Rear_NearestObjDx;

  /* SignalConversion: '<S462>/Signal Copy5' */
  PubIfDecisionPLAN_MDL_B.RearObjValid_a =
    PubIfDecisionPLAN_MDL_B.DataTypeConversion1_h;
  for (i_2 = 0; i_2 < 11; i_2++) {
    /* Saturate: '<S489>/Saturation' */
    temp = rtu_TOS_LC->Object_AX[i_2];
    if (temp > 4.0F) {
      temp = 4.0F;
    } else {
      if (temp < (-4.0F)) {
        temp = (-4.0F);
      }
    }

    /* Saturate: '<S489>/Saturation' */
    PubIfDecisionPLAN_MDL_B.Saturation_e[i_2] = temp;
  }

  for (i_2 = 0; i_2 < 11; i_2++) {
    /* UnitDelay: '<S489>/Unit Delay4' */
    PubIfDecisionPLAN_MDL_B.UnitDelay4_m[i_2] =
      PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE_k[i_2];
  }

  /* MATLAB Function: '<S489>/MATLAB Function3' incorporates:
   *  Constant: '<S489>/Constant2'
   */
  PubIfDecisionPLAN_MDL_MATLABFunction_g(rtP_P_PLAN_DPC_ObjAxLPalpha,
    rtu_TOS_LC->Object_ID, PubIfDecisionPLAN_MDL_B.UnitDelay_kp,
    PubIfDecisionPLAN_MDL_B.Saturation_e, PubIfDecisionPLAN_MDL_B.UnitDelay4_m,
    &PubIfDecisionPLAN_MDL_B.sf_MATLABFunction3_k);

  /* UnitDelay: '<S2>/Output' */
  PubIfDecisionPLAN_MDL_B.PLAN_UpdateCnt =
    PubIfDecisionPLAN_MDL_DW.Output_DSTATE;

  /* Sum: '<S6>/FixPt Sum1' incorporates:
   *  Constant: '<S6>/FixPt Constant'
   */
  PubIfDecisionPLAN_MDL_B.FixPtSum1 = (uint8_T)((uint32_T)
    PubIfDecisionPLAN_MDL_B.PLAN_UpdateCnt + ((uint8_T)1U));

  /* Switch: '<S7>/FixPt Switch' */
  if (PubIfDecisionPLAN_MDL_B.FixPtSum1 > ((uint8_T)255U)) {
    /* Switch: '<S7>/FixPt Switch' incorporates:
     *  Constant: '<S7>/Constant'
     */
    PubIfDecisionPLAN_MDL_B.FixPtSwitch = ((uint8_T)0U);
  } else {
    /* Switch: '<S7>/FixPt Switch' */
    PubIfDecisionPLAN_MDL_B.FixPtSwitch = PubIfDecisionPLAN_MDL_B.FixPtSum1;
  }

  /* End of Switch: '<S7>/FixPt Switch' */

  /* SignalConversion generated from: '<Root>/PLAN_DriverOffConditionFulfilled' */
  *rty_PLAN_DriverOffConditionFulfilled =
    PubIfDecisionPLAN_MDL_B.LongCtrl_DriveOffConditonFulfilled;

  /* SignalConversion generated from: '<Root>/PLAN_Longctrl_DecelToStopReq' */
  *rty_PLAN_Longctrl_DecelToStopReq =
    PubIfDecisionPLAN_MDL_B.LongCtrl_DecleToStop;
}

/* Update for referenced model: 'PubIfDecisionPLAN_MDL' */
void PubIfDecisionPLAN_MDL_Update(const TOS_LC_BUS *rtu_TOS_LC, const
  TOS_ACCP0_BUS *rtu_TOS_ACCP0, const TOS_ACCP2_BUS *rtu_TOS_ACCP2, const
  TOS_ACCP3_BUS *rtu_TOS_ACCP3, const uint32_T *rtu_TOS_UpdateCnt, const
  VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL, const VSM_HMI_BUS *rtu_VSM_HMI, const
  real32_T *rtu_LONC_VLC_InternalAcc, const VSM_UOM_LC_BUS *rtu_VSM_UOM_LC,
  const uint32_T *rtu_RFM_UpdateCnt)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_k;
  int32_T i;
  real32_T rtb_ImpSel_InsertedFor_LongCtrl_IC_EHRV2_CurMatrix_at_outport_0;

  /* Update for UnitDelay: '<S463>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE =
    PubIfDecisionPLAN_MDL_B.RoadWidth_l;

  /* Update for UnitDelay: '<S460>/Unit Delay11' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay11_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_LostBufRemoveMark[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay11' */

  /* Update for UnitDelay: '<S460>/Unit Delay12' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay12_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DPCMatrix_Le[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay12' */

  /* Update for UnitDelay: '<S460>/Unit Delay13' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay13_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_HWA_DPCMatrix_Ri[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay13' */

  /* Update for UnitDelay: '<S460>/Unit Delay' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jw[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_DPC_ObjID[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay' */

  /* Update for UnitDelay: '<S460>/Unit Delay1' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_c[i] =
      PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay1' */

  /* Update for UnitDelay: '<S460>/Unit Delay2' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.SLObjDy[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay2' */

  /* Update for UnitDelay: '<S460>/Unit Delay3' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_e.result[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay3' */

  /* Update for UnitDelay: '<S460>/Unit Delay10' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay10_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufID[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay10' */

  /* Update for UnitDelay: '<S460>/Unit Delay8' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay8_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDx[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay8' */

  /* Update for UnitDelay: '<S460>/Unit Delay7' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay7_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDy[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay7' */

  /* Update for UnitDelay: '<S460>/Unit Delay5' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay5_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufVx[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay5' */

  /* Update for UnitDelay: '<S460>/Unit Delay6' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay6_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCLe[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay6' */

  /* Update for UnitDelay: '<S460>/Unit Delay4' */
  memcpy(&PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE[0],
         &PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufDPCRi[0], 11U * sizeof(real_T));

  /* Update for UnitDelay: '<S460>/Unit Delay9' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay9_DSTATE[i] =
      PubIfDecisionPLAN_MDL_B.PLAN_ObjLostBufLostAge[i];
  }

  /* End of Update for UnitDelay: '<S460>/Unit Delay9' */

  /* Update for UnitDelay: '<S489>/Unit Delay' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pj[i] = rtu_TOS_LC->Object_ID[i];
  }

  /* End of Update for UnitDelay: '<S489>/Unit Delay' */

  /* Update for UnitDelay: '<S489>/Unit Delay1' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_g[i] =
      PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g5.result[i];
  }

  /* End of Update for UnitDelay: '<S489>/Unit Delay1' */

  /* Update for UnitDelay: '<S489>/Unit Delay2' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_f[i] =
      PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1_n.result[i];
  }

  /* End of Update for UnitDelay: '<S489>/Unit Delay2' */

  /* Update for UnitDelay: '<S489>/Unit Delay3' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_g[i] =
      PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_l.result[i];
  }

  /* End of Update for UnitDelay: '<S489>/Unit Delay3' */

  /* Update for UnitDelay: '<S283>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_m =
    PubIfDecisionPLAN_MDL_B.Saturation1;

  /* Update for UnitDelay: '<S4>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_o =
    PubIfDecisionPLAN_MDL_B.LcFinishCntRi;

  /* Update for UnitDelay: '<S4>/Unit Delay7' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay7_DSTATE_f =
    PubIfDecisionPLAN_MDL_B.LcCancelCntRi;

  /* Update for UnitDelay: '<S4>/Unit Delay5' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay5_DSTATE_h =
    PubIfDecisionPLAN_MDL_B.LcFinishCntRi;

  /* Update for UnitDelay: '<S265>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_n =
    PubIfDecisionPLAN_MDL_B.Saturation1_f;

  /* Update for UnitDelay: '<S262>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_i =
    PubIfDecisionPLAN_MDL_B.Saturation1_c;

  /* Update for UnitDelay: '<S264>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_mv =
    PubIfDecisionPLAN_MDL_B.Saturation1_n;

  /* Update for UnitDelay: '<S4>/Unit Delay8' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay8_DSTATE_k =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts;

  /* Update for UnitDelay: '<S185>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_mc =
    PubIfDecisionPLAN_MDL_B.UnitDelay8_i;

  /* Update for UnitDelay: '<S4>/Unit Delay4' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE_h =
    PubIfDecisionPLAN_MDL_B.LcCancelCntLe;

  /* Update for UnitDelay: '<S4>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_a =
    PubIfDecisionPLAN_MDL_B.LcFinishCntLe;

  /* Update for UnitDelay: '<S266>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_h =
    PubIfDecisionPLAN_MDL_B.Saturation1_o;

  /* Update for UnitDelay: '<S261>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g4 =
    PubIfDecisionPLAN_MDL_B.Saturation1_nr;

  /* Update for UnitDelay: '<S263>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_ad =
    PubIfDecisionPLAN_MDL_B.Saturation1_ft;

  /* Update for UnitDelay: '<S185>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_f0 =
    PubIfDecisionPLAN_MDL_B.UnitDelay8_i;

  /* Update for UnitDelay: '<S302>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_lp =
    PubIfDecisionPLAN_MDL_B.Saturation1_a;

  /* Update for UnitDelay: '<S4>/Unit Delay15' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay15_DSTATE =
    PubIfDecisionPLAN_MDL_B.LcFinishCntLe;

  /* Update for UnitDelay: '<S301>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pu =
    PubIfDecisionPLAN_MDL_B.Saturation1_m;

  /* Update for UnitDelay: '<S304>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_ot =
    PubIfDecisionPLAN_MDL_B.Compare_mk;

  /* Update for UnitDelay: '<S304>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_m = PubIfDecisionPLAN_MDL_B.Merge_b;

  /* Update for UnitDelay: '<S4>/Unit Delay9' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay9_DSTATE_e =
    PubIfDecisionPLAN_MDL_B.LcFinishCntRi;

  /* Update for UnitDelay: '<S4>/Unit Delay10' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay10_DSTATE_f =
    PubIfDecisionPLAN_MDL_B.LcFinishCntLe;

  /* Update for UnitDelay: '<S4>/Unit Delay11' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay11_DSTATE_i =
    PubIfDecisionPLAN_MDL_B.LcFinishCntRi;

  /* Update for UnitDelay: '<S334>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_pv =
    PubIfDecisionPLAN_MDL_B.Saturation1_j;

  /* Update for UnitDelay: '<S342>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_a =
    PubIfDecisionPLAN_MDL_B.Compare_pw;

  /* Update for UnitDelay: '<S342>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_c0 =
    PubIfDecisionPLAN_MDL_B.Merge_e;

  /* Update for UnitDelay: '<S4>/Unit Delay14' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay14_DSTATE =
    PubIfDecisionPLAN_MDL_B.LcCancelCntRi;

  /* Update for UnitDelay: '<S4>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_i4 =
    PubIfDecisionPLAN_MDL_B.LcCancelCntLe;

  /* Update for UnitDelay: '<S4>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_i1 =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason;

  /* Update for UnitDelay: '<S4>/Unit Delay6' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay6_DSTATE_k =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts;

  /* Update for UnitDelay: '<S337>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_OveTkrSupDist;

  /* Update for UnitDelay: '<S340>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_d =
    PubIfDecisionPLAN_MDL_B.Compare_bc;

  /* Update for UnitDelay: '<S340>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_b = PubIfDecisionPLAN_MDL_B.result;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g =
    PubIfDecisionPLAN_MDL_B.LongCtrl_tStartDecel;

  /* Update for UnitDelay: '<S369>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_ia =
    PubIfDecisionPLAN_MDL_B.Saturation1_b;

  /* Update for UnitDelay: '<S368>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_e =
    PubIfDecisionPLAN_MDL_B.Saturation1_k;

  /* Update for UnitDelay: '<S371>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_k = rtu_TOS_ACCP0->IDP0;

  /* Update for UnitDelay: '<S335>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_f =
    PubIfDecisionPLAN_MDL_B.Saturation1_l;

  /* Update for UnitDelay: '<S343>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_m =
    PubIfDecisionPLAN_MDL_B.Compare_mr;

  /* Update for UnitDelay: '<S343>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_f = PubIfDecisionPLAN_MDL_B.Merge_n;

  /* Update for UnitDelay: '<S370>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_eg =
    PubIfDecisionPLAN_MDL_B.Saturation1_e;

  /* Update for UnitDelay: '<S226>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_d =
    PubIfDecisionPLAN_MDL_B.result_d;

  /* Update for UnitDelay: '<S224>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_kn =
    rtu_VSM_UOM_LC->User_LeTurnLmpOn;

  /* Update for UnitDelay: '<S4>/Unit Delay16' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay16_DSTATE =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_sts;

  /* Update for UnitDelay: '<S4>/Unit Delay13' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay13_DSTATE_e =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason;

  /* Update for UnitDelay: '<S366>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_k =
    PubIfDecisionPLAN_MDL_B.Saturation1_b4;

  /* Update for UnitDelay: '<S184>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_g3 =
    PubIfDecisionPLAN_MDL_B.OutTarPath;

  /* Update for UnitDelay: '<S223>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_c =
    rtu_VSM_UOM_LC->User_RiTurnLmpOn;

  /* Update for UnitDelay: '<S367>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_cu =
    PubIfDecisionPLAN_MDL_B.Saturation1_g;

  /* Update for UnitDelay: '<S184>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_dv =
    PubIfDecisionPLAN_MDL_B.OutTarPath;

  /* Update for S-Function (sfix_udelay): '<S184>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[0] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[1];
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[1] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[2];
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[2] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[3];
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X[3] = PubIfDecisionPLAN_MDL_B.Abs2_e;

  /* Update for UnitDelay: '<S182>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_nj =
    PubIfDecisionPLAN_MDL_B.Compare_kq;

  /* Update for Atomic SubSystem: '<S8>/AP' */
  /* Update for UnitDelay: '<S12>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gy =
    PubIfDecisionPLAN_MDL_B.LongCtrl_CCSpdSetValue;

  /* Update for UnitDelay: '<S12>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_gj = PubIfDecisionPLAN_MDL_B.Cnt_l;

  /* Update for UnitDelay: '<S39>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_fj =
    PubIfDecisionPLAN_MDL_B.LogicalOperator2;

  /* Update for UnitDelay: '<S39>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_dg =
    PubIfDecisionPLAN_MDL_B.Merge_dw;

  /* Update for Iterator SubSystem: '<S108>/LP' */
  for (ForEach_itr_k = 0; ForEach_itr_k < 10; ForEach_itr_k++) {
    /* Update for ForEachSliceSelector generated from: '<S115>/LongCtrl_IC_EHRV2_CurMatrix' */
    rtb_ImpSel_InsertedFor_LongCtrl_IC_EHRV2_CurMatrix_at_outport_0 =
      PubIfDecisionPLAN_MDL_B.LongCtrl_IC_EHRV2_CurMatrix[ForEach_itr_k];

    /* Update for S-Function (sfix_udelay): '<S115>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[0] =
      PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[1];
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[1] =
      PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[2];
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].TappedDelay2_X[2] =
      rtb_ImpSel_InsertedFor_LongCtrl_IC_EHRV2_CurMatrix_at_outport_0;

    /* Update for UnitDelay: '<S115>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.CoreSubsys[ForEach_itr_k].UnitDelay_DSTATE =
      PubIfDecisionPLAN_MDL_B.CoreSubsys[ForEach_itr_k].Switch;
  }

  /* End of Update for SubSystem: '<S108>/LP' */

  /* Update for UnitDelay: '<S111>/Unit Delay22' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay22_DSTATE[0] = PubIfDecisionPLAN_MDL_B.A3[0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay22_DSTATE[1] = PubIfDecisionPLAN_MDL_B.A3[1];

  /* Update for UnitDelay: '<S111>/Unit Delay21' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay21_DSTATE[0] = PubIfDecisionPLAN_MDL_B.A2[0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay21_DSTATE[1] = PubIfDecisionPLAN_MDL_B.A2[1];

  /* Update for UnitDelay: '<S111>/Unit Delay20' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay20_DSTATE[0] = PubIfDecisionPLAN_MDL_B.A1[0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay20_DSTATE[1] = PubIfDecisionPLAN_MDL_B.A1[1];

  /* Update for UnitDelay: '<S111>/Unit Delay19' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay19_DSTATE[0] = PubIfDecisionPLAN_MDL_B.A0[0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay19_DSTATE[1] = PubIfDecisionPLAN_MDL_B.A0[1];

  /* Update for UnitDelay: '<S111>/Unit Delay63' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay63_DSTATE[0] =
    PubIfDecisionPLAN_MDL_B.Avail_time[0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay63_DSTATE[1] =
    PubIfDecisionPLAN_MDL_B.Avail_time[1];

  /* Update for UnitDelay: '<S111>/Unit Delay62' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay62_DSTATE[0] =
    PubIfDecisionPLAN_MDL_B.Avail_dis[0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay62_DSTATE[1] =
    PubIfDecisionPLAN_MDL_B.Avail_dis[1];

  /* Update for S-Function (sfix_udelay): '<S144>/Tapped Delay' */
  for (i = 0; i < 24; i++) {
    PubIfDecisionPLAN_MDL_DW.TappedDelay_X[i] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay_X[i + 1];
  }

  PubIfDecisionPLAN_MDL_DW.TappedDelay_X[24] = PubIfDecisionPLAN_MDL_B.Line_std
    [0];

  /* End of Update for S-Function (sfix_udelay): '<S144>/Tapped Delay' */

  /* Update for S-Function (sfix_udelay): '<S144>/Tapped Delay1' */
  for (i = 0; i < 24; i++) {
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_m[i] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_m[i + 1];
  }

  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_m[24] =
    PubIfDecisionPLAN_MDL_B.Line_std[1];

  /* End of Update for S-Function (sfix_udelay): '<S144>/Tapped Delay1' */

  /* Update for S-Function (sfix_udelay): '<S143>/Tapped Delay1' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[0] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[1];
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[1] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[2];
  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_a[2] =
    PubIfDecisionPLAN_MDL_B.Line_std[0];

  /* Update for S-Function (sfix_udelay): '<S143>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[0] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[1];
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[1] =
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[2];
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X[2] = PubIfDecisionPLAN_MDL_B.Line_std
    [1];

  /* Update for UnitDelay: '<S140>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE = *rtu_RFM_UpdateCnt;

  /* Update for UnitDelay: '<S111>/Unit Delay42' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay42_DSTATE[0] =
    PubIfDecisionPLAN_MDL_B.LineValid[0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay42_DSTATE[1] =
    PubIfDecisionPLAN_MDL_B.LineValid[1];

  /* Update for UnitDelay: '<S111>/Unit Delay43' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay43_DSTATE[0] = PubIfDecisionPLAN_MDL_B.A3_f
    [0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay43_DSTATE[1] = PubIfDecisionPLAN_MDL_B.A3_f
    [1];

  /* Update for UnitDelay: '<S111>/Unit Delay48' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay48_DSTATE[0] = PubIfDecisionPLAN_MDL_B.A2_n
    [0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay48_DSTATE[1] = PubIfDecisionPLAN_MDL_B.A2_n
    [1];

  /* Update for UnitDelay: '<S111>/Unit Delay47' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay47_DSTATE[0] = PubIfDecisionPLAN_MDL_B.A1_h
    [0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay47_DSTATE[1] = PubIfDecisionPLAN_MDL_B.A1_h
    [1];

  /* Update for UnitDelay: '<S111>/Unit Delay46' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay46_DSTATE[0] = PubIfDecisionPLAN_MDL_B.A0_o
    [0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay46_DSTATE[1] = PubIfDecisionPLAN_MDL_B.A0_o
    [1];

  /* Update for UnitDelay: '<S111>/Unit Delay45' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay45_DSTATE[0] =
    PubIfDecisionPLAN_MDL_B.dDisFront[0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay45_DSTATE[1] =
    PubIfDecisionPLAN_MDL_B.dDisFront[1];

  /* Update for UnitDelay: '<S111>/Unit Delay44' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay44_DSTATE[0] =
    PubIfDecisionPLAN_MDL_B.tLost[0];
  PubIfDecisionPLAN_MDL_DW.UnitDelay44_DSTATE[1] =
    PubIfDecisionPLAN_MDL_B.tLost[1];

  /* Update for Memory: '<S109>/Memory' */
  PubIfDecisionPLAN_MDL_DW.Memory_PreviousInput =
    PubIfDecisionPLAN_MDL_B.LongCtrl_accelIC;

  /* Update for If: '<S109>/If' */
  if (PubIfDecisionPLAN_MDL_DW.If_ActiveSubsystem == 0) {
    /* Update for IfAction SubSystem: '<S109>/If Action Subsystem' incorporates:
     *  ActionPort: '<S125>/Action Port'
     */
    /* Update for S-Function (sfix_udelay): '<S130>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[0] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[1];
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[1] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[2];
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h[2] =
      PubIfDecisionPLAN_MDL_B.LongCtrl_curvatureForCurveDecelRaw;

    /* Update for UnitDelay: '<S130>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gk =
      PubIfDecisionPLAN_MDL_B.Add6_n;

    /* End of Update for SubSystem: '<S109>/If Action Subsystem' */
  }

  /* End of Update for If: '<S109>/If' */

  /* Update for UnitDelay: '<S127>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_a =
    PubIfDecisionPLAN_MDL_B.LongCtrl_CurvatureOfRoad;

  /* Update for UnitDelay: '<S113>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_p = PubIfDecisionPLAN_MDL_B.Add6_l;

  /* Update for S-Function (sfix_udelay): '<S20>/Tapped Delay2' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_h0 = rtu_VSM_LON_CTRL->ACCSts;

  /* Update for Memory: '<S20>/Memory5' */
  PubIfDecisionPLAN_MDL_DW.Memory5_PreviousInput =
    PubIfDecisionPLAN_MDL_B.CounterK1;

  /* Update for S-Function (sfix_udelay): '<S22>/Tapped Delay' */
  PubIfDecisionPLAN_MDL_DW.TappedDelay_X_b = PubIfDecisionPLAN_MDL_B.ACCModeSts;

  /* Update for S-Function (sfix_udelay): '<S22>/Tapped Delay1' */
  for (i = 0; i < 18; i++) {
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_i[i] =
      PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_i[i + 1];
  }

  PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_i[18] = *rtu_LONC_VLC_InternalAcc;

  /* End of Update for S-Function (sfix_udelay): '<S22>/Tapped Delay1' */

  /* Update for UnitDelay: '<S9>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_hu =
    PubIfDecisionPLAN_MDL_B.LongCtrl_DriveOffConditonFulfilled;

  /* Update for UnitDelay: '<S178>/Delay Input1' */
  PubIfDecisionPLAN_MDL_DW.DelayInput1_DSTATE_o = *rtu_TOS_UpdateCnt;

  /* Update for Enabled SubSystem: '<S9>/FollowCtrl' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (PubIfDecisionPLAN_MDL_B.FixPtRelationalOperator_o) {
    /* Update for S-Function (sfix_udelay): '<S48>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay_X_o = rtu_TOS_ACCP0->IDP0;

    /* Update for S-Function (sfix_udelay): '<S49>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay_X_m = rtu_TOS_ACCP0->IDP0;

    /* Update for S-Function (sfix_udelay): '<S49>/Tapped Delay1' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_d = rtu_TOS_ACCP2->IDP2;

    /* Update for S-Function (sfix_udelay): '<S49>/Tapped Delay2' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay2_X_n = rtu_TOS_ACCP3->IDP3;

    /* Update for S-Function (sfix_udelay): '<S58>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay_X_j = rtu_TOS_ACCP0->IDP0;

    /* Update for S-Function (sfix_udelay): '<S58>/Tapped Delay1' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay1_X_h =
      PubIfDecisionPLAN_MDL_B.ACCModeSts;

    /* Update for UnitDelay: '<S58>/Unit Delay2' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_dz =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelSubjDesRaw;

    /* Update for UnitDelay: '<S58>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_h =
      PubIfDecisionPLAN_MDL_B.tOverride2Active;

    /* Update for UnitDelay: '<S58>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gc =
      PubIfDecisionPLAN_MDL_B.LongCtrl_num;

    /* Update for S-Function (sfix_udelay): '<S55>/Tapped Delay' */
    PubIfDecisionPLAN_MDL_DW.TappedDelay_X_by = rtu_TOS_ACCP0->IDP0;

    /* Update for UnitDelay: '<S16>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_l =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowAfterDecelToStop;

    /* Update for UnitDelay: '<S75>/Unit Delay1' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_hq = rtu_TOS_ACCP0->IDP0;

    /* Update for UnitDelay: '<S75>/Unit Delay' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_c =
      PubIfDecisionPLAN_MDL_B.LongCtrl_accelFollowFilt;

    /* Update for UnitDelay: '<S50>/Output' */
    PubIfDecisionPLAN_MDL_DW.Output_DSTATE_j =
      PubIfDecisionPLAN_MDL_B.FixPtSwitch_b;
  }

  /* End of Update for SubSystem: '<S9>/FollowCtrl' */

  /* Update for Iterator SubSystem: '<S154>/ACC_DisplayBar1' */
  for (ForEach_itr = 0; ForEach_itr < 3; ForEach_itr++) {
    /* Update for UnitDelay: '<S169>/Unit Delay34' */
    PubIfDecisionPLAN_MDL_DW.CoreSubsys_es[ForEach_itr].UnitDelay34_DSTATE =
      PubIfDecisionPLAN_MDL_B.CoreSubsys_es[ForEach_itr].DisplayBar;
  }

  /* End of Update for SubSystem: '<S154>/ACC_DisplayBar1' */
  /* End of Update for SubSystem: '<S8>/AP' */

  /* Update for UnitDelay: '<S421>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_e =
    rtu_VSM_UOM_LC->User_LeTurnLmpOn;

  /* Update for UnitDelay: '<S421>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_he =
    PubIfDecisionPLAN_MDL_B.Merge_d;

  /* Update for UnitDelay: '<S420>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_mr =
    rtu_VSM_UOM_LC->User_RiTurnLmpOn;

  /* Update for UnitDelay: '<S420>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_o = PubIfDecisionPLAN_MDL_B.Merge_h;

  /* Update for UnitDelay: '<S413>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_j =
    PubIfDecisionPLAN_MDL_B.Saturation1_mg;

  /* Update for UnitDelay: '<S412>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_hk =
    PubIfDecisionPLAN_MDL_B.Saturation1_kr;

  /* Update for UnitDelay: '<S189>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jg =
    PubIfDecisionPLAN_MDL_B.Compare_nr;

  /* Update for UnitDelay: '<S431>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_px = PubIfDecisionPLAN_MDL_B.NOT2_g;

  /* Update for UnitDelay: '<S431>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_a = PubIfDecisionPLAN_MDL_B.Merge_k;

  /* Update for UnitDelay: '<S432>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_me =
    PubIfDecisionPLAN_MDL_B.NOT1_ov;

  /* Update for UnitDelay: '<S432>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_l = PubIfDecisionPLAN_MDL_B.Merge_m;

  /* Update for UnitDelay: '<S440>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_c = PubIfDecisionPLAN_MDL_B.NOT2_l;

  /* Update for UnitDelay: '<S440>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_im =
    PubIfDecisionPLAN_MDL_B.Merge_p;

  /* Update for UnitDelay: '<S441>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_g = PubIfDecisionPLAN_MDL_B.NOT1_g;

  /* Update for UnitDelay: '<S441>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ia =
    PubIfDecisionPLAN_MDL_B.Merge_mg;

  /* Update for UnitDelay: '<S450>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_i = PubIfDecisionPLAN_MDL_B.NOT2_hh;

  /* Update for UnitDelay: '<S450>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_gs =
    PubIfDecisionPLAN_MDL_B.Merge_a;

  /* Update for UnitDelay: '<S425>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_jd = PubIfDecisionPLAN_MDL_B.AND4_p;

  /* Update for UnitDelay: '<S425>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_do =
    PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_n.Out;

  /* Update for UnitDelay: '<S425>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ob =
    PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_n.Counter;

  /* Update for UnitDelay: '<S425>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_dc =
    PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_n.Traggerhappend;

  /* Update for UnitDelay: '<S424>/Unit Delay' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_o = PubIfDecisionPLAN_MDL_B.AND5_k;

  /* Update for UnitDelay: '<S424>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_b =
    PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g.Out;

  /* Update for UnitDelay: '<S424>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_ar =
    PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g.Counter;

  /* Update for UnitDelay: '<S424>/Unit Delay3' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_f =
    PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_g.Traggerhappend;

  /* Update for UnitDelay: '<S4>/Unit Delay12' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay12_DSTATE_f =
    PubIfDecisionPLAN_MDL_B.PLAN_ALC_LcReason;

  /* Update for UnitDelay: '<S285>/Unit Delay2' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_k =
    PubIfDecisionPLAN_MDL_B.RelationalOperator_g;

  /* Update for UnitDelay: '<S285>/Unit Delay1' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_d = PubIfDecisionPLAN_MDL_B.Merge_g;

  /* Update for UnitDelay: '<S349>/Unit Delay' incorporates:
   *  Constant: '<S4>/Constant4'
   */
  PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_b = ((uint8_T)0U);

  /* Update for UnitDelay: '<S460>/Unit Delay14' */
  PubIfDecisionPLAN_MDL_DW.UnitDelay14_DSTATE_m = rtu_VSM_HMI->HWASts;

  /* Update for UnitDelay: '<S471>/Unit Delay' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay_DSTATE_gm[i] = rtu_TOS_LC->Object_ID[i];
  }

  /* End of Update for UnitDelay: '<S471>/Unit Delay' */

  /* Update for UnitDelay: '<S471>/Unit Delay1' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay1_DSTATE_i[i] =
      PubIfDecisionPLAN_MDL_B.sf_MATLABFunction_f.result[i];
  }

  /* End of Update for UnitDelay: '<S471>/Unit Delay1' */

  /* Update for UnitDelay: '<S471>/Unit Delay2' */
  for (i = 0; i < 11; i++) {
    PubIfDecisionPLAN_MDL_DW.UnitDelay2_DSTATE_p[i] =
      PubIfDecisionPLAN_MDL_B.sf_MATLABFunction1.result[i];
  }

  /* End of Update for UnitDelay: '<S471>/Unit Delay2' */
  for (i = 0; i < 11; i++) {
    /* Update for UnitDelay: '<S471>/Unit Delay3' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay3_DSTATE_d[i] =
      PubIfDecisionPLAN_MDL_B.sf_MATLABFunction2_e.result[i];

    /* Update for UnitDelay: '<S489>/Unit Delay4' */
    PubIfDecisionPLAN_MDL_DW.UnitDelay4_DSTATE_k[i] =
      PubIfDecisionPLAN_MDL_B.sf_MATLABFunction3_k.result[i];
  }

  /* Update for UnitDelay: '<S2>/Output' */
  PubIfDecisionPLAN_MDL_DW.Output_DSTATE = PubIfDecisionPLAN_MDL_B.FixPtSwitch;
}

/* Model initialize function */
void PubIfDecisionPLAN_MDL_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_PubIfDecisionPLAN_MDL_T *const PubIfDecisionPLAN_MDL_M =
    &(PubIfDecisionPLAN_MDL_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)PubIfDecisionPLAN_MDL_M, 0,
                sizeof(RT_MODEL_PubIfDecisionPLAN_MDL_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(PubIfDecisionPLAN_MDL_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &PubIfDecisionPLAN_MDL_B), 0,
                sizeof(B_PubIfDecisionPLAN_MDL_c_T));

  /* exported global signals */
  PLAN_ALC_LcOverTkLe_ALCSwtOn = false;
  PLAN_ALC_LcOverTkRi_ALCSwtOn = false;

  /* states (dwork) */
  (void) memset((void *)&PubIfDecisionPLAN_MDL_DW, 0,
                sizeof(DW_PubIfDecisionPLAN_MDL_f_T));
}
