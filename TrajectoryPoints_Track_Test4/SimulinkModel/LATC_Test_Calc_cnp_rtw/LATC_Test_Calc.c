/*
 * LATC_Test_Calc.c
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 3.98
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Mar  1 14:24:20 2022
 *
 * Target selection: cnp.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LATC_Test_Calc.h"
#include "LATC_Test_Calc_private.h"

/* Exported block parameters */
real_T P_Global_SteerAngleOffsetFilterTime = 8.0;
                                /* Variable: P_Global_SteerAngleOffsetFilterTime
                                 * Referenced by: '<S104>/FilterTime1'
                                 */

/* Block signals (default storage) */
B_LATC_Test_Calc_T LATC_Test_Calc_B;

/* Block states (default storage) */
DW_LATC_Test_Calc_T LATC_Test_Calc_DW;

/* Real-time model */
static RT_MODEL_LATC_Test_Calc_T LATC_Test_Calc_M_;
RT_MODEL_LATC_Test_Calc_T *const LATC_Test_Calc_M = &LATC_Test_Calc_M_;
static void rate_scheduler(void);
real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (LATC_Test_Calc_M->Timing.TaskCounters.TID[1])++;
  if ((LATC_Test_Calc_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.02s, 0.0s] */
    LATC_Test_Calc_M->Timing.TaskCounters.TID[1] = 0;
  }

  LATC_Test_Calc_M->Timing.sampleHits[1] =
    (LATC_Test_Calc_M->Timing.TaskCounters.TID[1] == 0) ? 1 : 0;
}

/*
 * Output and update for action system:
 *    '<S70>/Switch Case Action Subsystem'
 *    '<S70>/Switch Case Action Subsystem1'
 *    '<S70>/Switch Case Action Subsystem2'
 *    '<S70>/Switch Case Action Subsystem3'
 *    '<S71>/Switch Case Action Subsystem'
 *    '<S71>/Switch Case Action Subsystem1'
 *    '<S71>/Switch Case Action Subsystem2'
 *    '<S71>/Switch Case Action Subsystem3'
 *    '<S72>/Switch Case Action Subsystem'
 *    '<S72>/Switch Case Action Subsystem1'
 *    ...
 */
void LATC__SwitchCaseActionSubsystem(real_T rtu_In1, real_T *rty_Out1)
{
  /* Inport: '<S83>/In1' */
  *rty_Out1 = rtu_In1;
}

/* Model output function */
static void LATC_Test_Calc_output(void)
{
  real_T rtb_TappedDelay4[10];
  real_T t_dDeltaXTemp;
  int32_T i;
  int32_T rtb_ErrWheel_FR;
  real32_T CenterLinePointX[300];
  real32_T CenterLinePointY[300];
  real32_T LeftLinePointX[300];
  real32_T LeftLinePointY[300];
  real32_T RightLinePointX[300];
  real32_T RightLinePointY[300];
  real32_T rtb_CenterLinePointYY[101];
  real32_T LaneCenterPointX[100];
  real32_T LaneCenterPointY[100];
  real32_T LaneLeftPointX[100];
  real32_T LaneLeftPointY[100];
  real32_T LaneRightPointX[100];
  real32_T LaneRightPointY[100];
  real32_T StraightLaneCenter1_PointX[100];
  real32_T StraightLaneCenter2_PointX[100];
  real32_T StraightLaneCenter2_PointY[100];
  real32_T StraightLaneLeft1_PointX[100];
  real32_T StraightLaneLeft1_PointY[100];
  real32_T StraightLaneLeft2_PointX[100];
  real32_T StraightLaneLeft2_PointX_0[100];
  real32_T StraightLaneLeft2_PointY[100];
  real32_T StraightLaneRight1_PointX[100];
  real32_T StraightLaneRight1_PointY[100];
  real32_T StraightLaneRight2_PointX[100];
  real32_T StraightLaneRight2_PointY[100];
  real32_T rtb_TappedDelay8[5];

  /* S-Function (fcgen): '<Root>/Function-Call Generator 20ms2' incorporates:
   *  SubSystem: '<Root>/InputSignal1'
   */
  /* Outputs for Atomic SubSystem: '<S1>/CANapeIO_Veh icleRX_AD2' */
  /* S-Function (cnpenvin): '<S4>/S-Function' */

  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S5>/S-Function' */

  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S6>/S-Function' */

  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S7>/S-Function' */

  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S8>/S-Function' */

  /* Level2 S-Function Block: '<S8>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S9>/S-Function' */

  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S10>/S-Function' */

  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S11>/S-Function' */

  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S12>/S-Function' */

  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S13>/S-Function' */

  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S14>/S-Function' */

  /* Level2 S-Function Block: '<S14>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S15>/S-Function' */

  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S16>/S-Function' */

  /* Level2 S-Function Block: '<S16>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S17>/S-Function' */

  /* Level2 S-Function Block: '<S17>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S18>/S-Function' */

  /* Level2 S-Function Block: '<S18>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S19>/S-Function' */

  /* Level2 S-Function Block: '<S19>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[26];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S20>/S-Function' */

  /* Level2 S-Function Block: '<S20>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[27];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S21>/S-Function' */

  /* Level2 S-Function Block: '<S21>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[28];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S22>/S-Function' */

  /* Level2 S-Function Block: '<S22>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[29];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S23>/S-Function' */

  /* Level2 S-Function Block: '<S23>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[30];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S24>/S-Function' */

  /* Level2 S-Function Block: '<S24>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[31];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S25>/S-Function' */

  /* Level2 S-Function Block: '<S25>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[32];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S26>/S-Function' */

  /* Level2 S-Function Block: '<S26>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[33];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S27>/S-Function' */

  /* Level2 S-Function Block: '<S27>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[34];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S28>/S-Function' */

  /* Level2 S-Function Block: '<S28>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[35];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S29>/S-Function' */

  /* Level2 S-Function Block: '<S29>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[36];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S30>/S-Function' */

  /* Level2 S-Function Block: '<S30>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[37];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S31>/S-Function' */

  /* Level2 S-Function Block: '<S31>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[38];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S32>/S-Function' */

  /* Level2 S-Function Block: '<S32>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[39];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S33>/S-Function' */

  /* Level2 S-Function Block: '<S33>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[40];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S34>/S-Function' */

  /* Level2 S-Function Block: '<S34>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[41];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S35>/S-Function' */

  /* Level2 S-Function Block: '<S35>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[42];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S36>/S-Function' */

  /* Level2 S-Function Block: '<S36>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[43];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S37>/S-Function' */

  /* Level2 S-Function Block: '<S37>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[44];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S38>/S-Function' */

  /* Level2 S-Function Block: '<S38>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[45];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S39>/S-Function' */

  /* Level2 S-Function Block: '<S39>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[46];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S40>/S-Function' */

  /* Level2 S-Function Block: '<S40>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[47];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S41>/S-Function' */

  /* Level2 S-Function Block: '<S41>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[48];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S42>/S-Function' */

  /* Level2 S-Function Block: '<S42>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[49];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S43>/S-Function' */

  /* Level2 S-Function Block: '<S43>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[50];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S44>/S-Function' */

  /* Level2 S-Function Block: '<S44>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[51];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S45>/S-Function' */

  /* Level2 S-Function Block: '<S45>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[52];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S46>/S-Function' */

  /* Level2 S-Function Block: '<S46>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[53];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S47>/S-Function' */

  /* Level2 S-Function Block: '<S47>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[54];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S48>/S-Function' */

  /* Level2 S-Function Block: '<S48>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[55];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S49>/S-Function' */

  /* Level2 S-Function Block: '<S49>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[56];
    sfcnOutputs(rts,0);
  }

  /* End of Outputs for SubSystem: '<S1>/CANapeIO_Veh icleRX_AD2' */
  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator 20ms2' */

  /* RateTransition generated from: '<Root>/Rate Transition1' */
  if (LATC_Test_Calc_M->Timing.TaskCounters.TID[1] == 0) {
    real_T PsiDtInF;
    real_T rtb_CosOfPsi;
    real_T t_Psi;
    real_T t_dDeltaYTemp;
    real_T tmp;
    int32_T l_CaseBrake;
    int32_T l_CaseDrive;
    int32_T rtb_ErrWheel_RL;
    int32_T rtb_ErrWheel_RR;
    real32_T rtb_vxwCorrFL;
    real32_T rtb_vxwCorrFR;
    real32_T t_dx;
    real32_T t_dy;
    real32_T t_vxwDiffAllowed;
    real32_T t_vxwDiffFLFR;
    real32_T t_vxwDiffFLRL;
    real32_T t_vxwDiffFLRR;
    real32_T t_vxwDiffFRRL;
    real32_T t_vxwDiffFRRR;
    real32_T t_vxwDiffRLRR;
    boolean_T rtb_Compare;
    LATC_Test_Calc_DW.RateTransition1_42_Buffer =
      LATC_Test_Calc_B.SFunction_o1_bf;
    LATC_Test_Calc_DW.RateTransition1_41_Buffer =
      LATC_Test_Calc_B.SFunction_o1_if;
    LATC_Test_Calc_DW.RateTransition1_40_Buffer =
      LATC_Test_Calc_B.SFunction_o1_nk;
    LATC_Test_Calc_DW.RateTransition1_34_Buffer =
      LATC_Test_Calc_B.SFunction_o1_pz;
    LATC_Test_Calc_DW.RateTransition1_33_Buffer =
      LATC_Test_Calc_B.SFunction_o1_c;
    LATC_Test_Calc_DW.RateTransition1_18_Buffer =
      LATC_Test_Calc_B.SFunction_o1_c0;
    LATC_Test_Calc_DW.RateTransition1_16_Buffer =
      LATC_Test_Calc_B.SFunction_o1_kr;
    LATC_Test_Calc_DW.RateTransition1_15_Buffer =
      LATC_Test_Calc_B.SFunction_o1_je;
    LATC_Test_Calc_DW.RateTransition1_13_Buffer =
      LATC_Test_Calc_B.SFunction_o1_gf;
    LATC_Test_Calc_DW.RateTransition1_12_Buffer =
      LATC_Test_Calc_B.SFunction_o1_jf;
    LATC_Test_Calc_DW.RateTransition1_10_Buffer =
      LATC_Test_Calc_B.SFunction_o1_di;
    LATC_Test_Calc_DW.RateTransition1_9_Buffer =
      LATC_Test_Calc_B.SFunction_o1_fj;
    LATC_Test_Calc_DW.RateTransition1_7_Buffer = LATC_Test_Calc_B.SFunction_o1_e;
    LATC_Test_Calc_DW.RateTransition1_3_Buffer = LATC_Test_Calc_B.SFunction_o1_h;

    /* RateTransition generated from: '<Root>/Rate Transition1' */
    LATC_Test_Calc_B.VehDynYawRate = LATC_Test_Calc_DW.RateTransition1_3_Buffer;
    LATC_Test_Calc_DW.RateTransition1_1_Buffer =
      LATC_Test_Calc_B.SFunction_o1_pw;

    /* RateTransition generated from: '<Root>/Rate Transition1' */
    LATC_Test_Calc_B.LongitudeAcc = LATC_Test_Calc_DW.RateTransition1_1_Buffer;

    /* S-Function (fcgen): '<Root>/Function-Call Generator 20ms1' incorporates:
     *  SubSystem: '<Root>/LFunc'
     */
    /* S-Function (cnpenvin): '<S51>/S-Function' */

    /* Level2 S-Function Block: '<S51>/S-Function' (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    /* S-Function (cnpenvin): '<S52>/S-Function' */

    /* Level2 S-Function Block: '<S52>/S-Function' (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];
      sfcnOutputs(rts,1);
    }

    /* S-Function (cnpenvin): '<S53>/S-Function' */

    /* Level2 S-Function Block: '<S53>/S-Function' (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];
      sfcnOutputs(rts,1);
    }

    /* S-Function (cnpenvin): '<S54>/S-Function' */

    /* Level2 S-Function Block: '<S54>/S-Function' (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];
      sfcnOutputs(rts,1);
    }

    /* S-Function (cnpenvin): '<S55>/S-Function' */

    /* Level2 S-Function Block: '<S55>/S-Function' (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];
      sfcnOutputs(rts,1);
    }

    /* S-Function (cnpenvin): '<S111>/S-Function' */

    /* Level2 S-Function Block: '<S111>/S-Function' (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
      sfcnOutputs(rts,1);
    }

    /* S-Function (cnpenvin): '<S112>/S-Function' */

    /* Level2 S-Function Block: '<S112>/S-Function' (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
      sfcnOutputs(rts,1);
    }

    /* S-Function (cnpenvin): '<S113>/S-Function' */

    /* Level2 S-Function Block: '<S113>/S-Function' (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S57>/CalcEgoVehMove' incorporates:
     *  Constant: '<S57>/Constant3'
     *  DataTypeConversion: '<S57>/Data Type Conversion'
     *  DataTypeConversion: '<S57>/Data Type Conversion2'
     */
    if (!LATC_Test_Calc_B.SFunction_o1_oq) {
      t_Psi = (real_T)LATC_Test_Calc_B.SFunction_o1_ox * 0.02;
      t_dDeltaXTemp = 0.0;
      rtb_CosOfPsi = 1.0;
      PsiDtInF = 0.0;
    } else {
      t_Psi = (real_T)LATC_Test_Calc_B.SFunction_o1_oq * (real_T)
        LATC_Test_Calc_B.SFunction_o1_ox * 0.02;
      PsiDtInF = sin(t_Psi);
      rtb_CosOfPsi = cos(t_Psi);
      t_dDeltaXTemp = PsiDtInF / (real_T)LATC_Test_Calc_B.SFunction_o1_oq;
      t_Psi = sin(t_Psi / 2.0);
      t_dDeltaYTemp = t_Psi * t_Psi * 2.0 / (real_T)
        LATC_Test_Calc_B.SFunction_o1_oq;
      t_Psi = t_dDeltaXTemp - 0.0 * t_dDeltaYTemp;
      t_dDeltaXTemp = 0.0 * t_dDeltaXTemp + t_dDeltaYTemp;
    }

    /* S-Function (cnpenvin): '<S56>/S-Function' */

    /* Level2 S-Function Block: '<S56>/S-Function' (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
      sfcnOutputs(rts,1);
    }

    /* MATLAB Function: '<S110>/Env' incorporates:
     *  MATLAB Function: '<S57>/CalcEgoVehMove'
     *  UnitDelay: '<S110>/Unit Delay'
     *  UnitDelay: '<S110>/Unit Delay1'
     *  UnitDelay: '<S110>/Unit Delay2'
     *  UnitDelay: '<S110>/Unit Delay3'
     *  UnitDelay: '<S110>/Unit Delay4'
     *  UnitDelay: '<S110>/Unit Delay5'
     */
    memset(&LeftLinePointX[0], 0, 300U * sizeof(real32_T));
    memset(&LeftLinePointY[0], 0, 300U * sizeof(real32_T));
    memset(&CenterLinePointX[0], 0, 300U * sizeof(real32_T));
    memset(&CenterLinePointY[0], 0, 300U * sizeof(real32_T));
    memset(&RightLinePointX[0], 0, 300U * sizeof(real32_T));
    memset(&RightLinePointY[0], 0, 300U * sizeof(real32_T));
    memset(&StraightLaneLeft1_PointX[0], 0, 100U * sizeof(real32_T));
    memset(&StraightLaneRight1_PointX[0], 0, 100U * sizeof(real32_T));
    memset(&StraightLaneCenter1_PointX[0], 0, 100U * sizeof(real32_T));
    memset(&StraightLaneLeft2_PointX[0], 0, 100U * sizeof(real32_T));
    memset(&StraightLaneRight2_PointX[0], 0, 100U * sizeof(real32_T));
    memset(&StraightLaneCenter2_PointX[0], 0, 100U * sizeof(real32_T));
    if (LATC_Test_Calc_B.SFunction_o1_mk) {
      switch ((int32_T)LATC_Test_Calc_B.SFunction_o1_mq) {
       case 1:
        if (LATC_Test_Calc_B.SFunction_o1_fp == 1.0F) {
          for (i = 0; i < 100; i++) {
            PsiDtInF = (((real_T)i + 1.0) - 1.0) * 3.1415926535897931 / 100.0;
            rtb_vxwCorrFL = LATC_Test_Calc_B.SFunction_o1_nx / 2.0F +
              LATC_Test_Calc_B.SFunction_o1_ay;
            t_dx = (real32_T)sin(PsiDtInF);
            LaneLeftPointX[i] = t_dx * rtb_vxwCorrFL +
              LATC_Test_Calc_B.SFunction_o1_l;
            t_dy = (real32_T)cos(PsiDtInF);
            LaneLeftPointY[i] = LATC_Test_Calc_B.SFunction_o1_ay - t_dy *
              rtb_vxwCorrFL;
            rtb_vxwCorrFL = LATC_Test_Calc_B.SFunction_o1_ay -
              LATC_Test_Calc_B.SFunction_o1_nx / 2.0F;
            LaneRightPointX[i] = t_dx * rtb_vxwCorrFL +
              LATC_Test_Calc_B.SFunction_o1_l;
            LaneRightPointY[i] = LATC_Test_Calc_B.SFunction_o1_ay - t_dy *
              rtb_vxwCorrFL;
            LaneCenterPointX[i] = t_dx * LATC_Test_Calc_B.SFunction_o1_ay +
              LATC_Test_Calc_B.SFunction_o1_l;
            LaneCenterPointY[i] = LATC_Test_Calc_B.SFunction_o1_ay - t_dy *
              LATC_Test_Calc_B.SFunction_o1_ay;
          }

          for (rtb_ErrWheel_FR = 0; rtb_ErrWheel_FR < 99; rtb_ErrWheel_FR++) {
            t_dx = ((real32_T)rtb_ErrWheel_FR + 1.0F) *
              (LATC_Test_Calc_B.SFunction_o1_l / 100.0F);
            StraightLaneLeft1_PointX[rtb_ErrWheel_FR + 1] = t_dx;
            StraightLaneRight1_PointX[rtb_ErrWheel_FR + 1] = t_dx;
            StraightLaneCenter1_PointX[rtb_ErrWheel_FR + 1] = t_dx;
            StraightLaneLeft2_PointX[rtb_ErrWheel_FR + 1] = t_dx;
            StraightLaneRight2_PointX[rtb_ErrWheel_FR + 1] = t_dx;
            StraightLaneCenter2_PointX[rtb_ErrWheel_FR + 1] = t_dx;
          }

          for (i = 0; i < 100; i++) {
            StraightLaneLeft2_PointX_0[i] = StraightLaneLeft2_PointX[99 - i];
          }

          memcpy(&StraightLaneLeft2_PointX[0], &StraightLaneLeft2_PointX_0[0],
                 100U * sizeof(real32_T));
          for (i = 0; i < 100; i++) {
            StraightLaneLeft1_PointY[i] = StraightLaneRight2_PointX[99 - i];
          }

          memcpy(&StraightLaneRight2_PointX[0], &StraightLaneLeft1_PointY[0],
                 100U * sizeof(real32_T));
          for (i = 0; i < 100; i++) {
            StraightLaneLeft2_PointX_0[i] = StraightLaneCenter2_PointX[99 - i];
          }

          for (i = 0; i < 100; i++) {
            StraightLaneCenter2_PointX[i] = StraightLaneLeft2_PointX_0[i];
            StraightLaneLeft1_PointY[i] = -(LATC_Test_Calc_B.SFunction_o1_nx /
              2.0F);
            StraightLaneRight1_PointY[i] = LATC_Test_Calc_B.SFunction_o1_nx /
              2.0F;
            StraightLaneLeft2_PointY[i] = 2.0F *
              LATC_Test_Calc_B.SFunction_o1_ay +
              LATC_Test_Calc_B.SFunction_o1_nx / 2.0F;
            StraightLaneRight2_PointY[i] = 2.0F *
              LATC_Test_Calc_B.SFunction_o1_ay -
              LATC_Test_Calc_B.SFunction_o1_nx / 2.0F;
            StraightLaneCenter2_PointY[i] = 2.0F *
              LATC_Test_Calc_B.SFunction_o1_ay;
          }
        } else {
          for (i = 0; i < 100; i++) {
            PsiDtInF = (100.0 - ((real_T)i + 1.0)) * 3.1415926535897931 / 100.0;
            rtb_vxwCorrFL = LATC_Test_Calc_B.SFunction_o1_ay -
              LATC_Test_Calc_B.SFunction_o1_nx / 2.0F;
            t_dx = (real32_T)sin(PsiDtInF);
            LaneLeftPointX[i] = t_dx * rtb_vxwCorrFL +
              LATC_Test_Calc_B.SFunction_o1_l;
            t_dy = (real32_T)cos(PsiDtInF);
            LaneLeftPointY[i] = -LATC_Test_Calc_B.SFunction_o1_ay - t_dy *
              rtb_vxwCorrFL;
            rtb_vxwCorrFL = LATC_Test_Calc_B.SFunction_o1_nx / 2.0F +
              LATC_Test_Calc_B.SFunction_o1_ay;
            LaneRightPointX[i] = t_dx * rtb_vxwCorrFL +
              LATC_Test_Calc_B.SFunction_o1_l;
            LaneRightPointY[i] = -LATC_Test_Calc_B.SFunction_o1_ay - t_dy *
              rtb_vxwCorrFL;
            LaneCenterPointX[i] = t_dx * LATC_Test_Calc_B.SFunction_o1_ay +
              LATC_Test_Calc_B.SFunction_o1_l;
            LaneCenterPointY[i] = -LATC_Test_Calc_B.SFunction_o1_ay - t_dy *
              LATC_Test_Calc_B.SFunction_o1_ay;
          }

          for (i = 0; i < 99; i++) {
            t_dx = ((real32_T)i + 1.0F) * (LATC_Test_Calc_B.SFunction_o1_l /
              100.0F);
            StraightLaneLeft1_PointX[i + 1] = t_dx;
            StraightLaneRight1_PointX[i + 1] = t_dx;
            StraightLaneCenter1_PointX[i + 1] = t_dx;
            StraightLaneLeft2_PointX[i + 1] = t_dx;
            StraightLaneRight2_PointX[i + 1] = t_dx;
            StraightLaneCenter2_PointX[i + 1] = t_dx;
          }

          for (i = 0; i < 100; i++) {
            StraightLaneLeft2_PointX_0[i] = StraightLaneLeft2_PointX[99 - i];
          }

          memcpy(&StraightLaneLeft2_PointX[0], &StraightLaneLeft2_PointX_0[0],
                 100U * sizeof(real32_T));
          for (i = 0; i < 100; i++) {
            StraightLaneLeft1_PointY[i] = StraightLaneRight2_PointX[99 - i];
          }

          memcpy(&StraightLaneRight2_PointX[0], &StraightLaneLeft1_PointY[0],
                 100U * sizeof(real32_T));
          for (i = 0; i < 100; i++) {
            StraightLaneLeft2_PointX_0[i] = StraightLaneCenter2_PointX[99 - i];
          }

          for (i = 0; i < 100; i++) {
            StraightLaneCenter2_PointX[i] = StraightLaneLeft2_PointX_0[i];
            StraightLaneLeft1_PointY[i] = -(LATC_Test_Calc_B.SFunction_o1_nx /
              2.0F);
            StraightLaneRight1_PointY[i] = LATC_Test_Calc_B.SFunction_o1_nx /
              2.0F;
            StraightLaneLeft2_PointY[i] = -2.0F *
              LATC_Test_Calc_B.SFunction_o1_ay +
              LATC_Test_Calc_B.SFunction_o1_nx / 2.0F;
            StraightLaneRight2_PointY[i] = -2.0F *
              LATC_Test_Calc_B.SFunction_o1_ay -
              LATC_Test_Calc_B.SFunction_o1_nx / 2.0F;
            StraightLaneCenter2_PointY[i] = -2.0F *
              LATC_Test_Calc_B.SFunction_o1_ay;
          }
        }

        for (i = 0; i < 100; i++) {
          LeftLinePointX[i] = StraightLaneLeft1_PointX[i];
          LeftLinePointX[i + 100] = LaneLeftPointX[i];
          LeftLinePointX[i + 200] = StraightLaneLeft2_PointX[i];
          LeftLinePointY[i] = StraightLaneLeft1_PointY[i];
          LeftLinePointY[i + 100] = LaneLeftPointY[i];
          LeftLinePointY[i + 200] = StraightLaneLeft2_PointY[i];
          CenterLinePointX[i] = StraightLaneCenter1_PointX[i];
          CenterLinePointX[i + 100] = LaneCenterPointX[i];
          CenterLinePointX[i + 200] = StraightLaneCenter2_PointX[i];
          CenterLinePointY[i] = 0.0F;
          CenterLinePointY[i + 100] = LaneCenterPointY[i];
          CenterLinePointY[i + 200] = StraightLaneCenter2_PointY[i];
          RightLinePointX[i] = StraightLaneRight1_PointX[i];
          RightLinePointX[i + 100] = LaneRightPointX[i];
          RightLinePointX[i + 200] = StraightLaneRight2_PointX[i];
          RightLinePointY[i] = StraightLaneRight1_PointY[i];
          RightLinePointY[i + 100] = LaneRightPointY[i];
          RightLinePointY[i + 200] = StraightLaneRight2_PointY[i];
        }
        break;

       case 2:
        if (LATC_Test_Calc_B.SFunction_o1_fp == 1.0F) {
          for (i = 0; i < 99; i++) {
            t_dx = ((real32_T)i + 1.0F) * 0.62F;
            StraightLaneLeft1_PointX[i + 1] = t_dx;
            t_dy = ((real32_T)i + 1.0F) * 0.5F;
            StraightLaneRight1_PointX[i + 1] = t_dy;
            StraightLaneCenter1_PointX[i + 1] = t_dy;
            StraightLaneLeft2_PointX[i + 1] = t_dx;
            StraightLaneRight2_PointX[i + 1] = t_dy;
            StraightLaneCenter2_PointX[i + 1] = t_dy;
          }

          for (i = 0; i < 100; i++) {
            StraightLaneLeft2_PointX_0[i] = StraightLaneLeft2_PointX[99 - i];
          }

          memcpy(&StraightLaneLeft2_PointX[0], &StraightLaneLeft2_PointX_0[0],
                 100U * sizeof(real32_T));
          for (i = 0; i < 100; i++) {
            StraightLaneLeft1_PointY[i] = StraightLaneRight2_PointX[99 - i];
          }

          memcpy(&StraightLaneRight2_PointX[0], &StraightLaneLeft1_PointY[0],
                 100U * sizeof(real32_T));
          for (i = 0; i < 100; i++) {
            StraightLaneLeft2_PointX_0[i] = StraightLaneCenter2_PointX[99 - i];
          }

          for (i = 0; i < 100; i++) {
            StraightLaneCenter2_PointX[i] = StraightLaneLeft2_PointX_0[i];
            StraightLaneLeft2_PointY[i] = 13.8F;
            StraightLaneRight2_PointY[i] = 10.2F;
            StraightLaneCenter2_PointY[i] = 12.0F;
            LaneRightPointX[i] = ((real32_T)i + 1.0F) * 0.156F + -1.8F;
            LaneRightPointY[i] = 62.0F;
            LaneLeftPointX[i] = ((real32_T)i + 1.0F) * 0.084F + 1.8F;
            LaneLeftPointY[i] = 50.0F;
            PsiDtInF = (((real_T)i + 1.0) - 1.0) * 3.1415926535897931 / 100.0;
            LaneCenterPointX[i] = (real32_T)(sin(PsiDtInF) * 6.0 + 50.0);
            LaneCenterPointY[i] = (real32_T)(6.0 - cos(PsiDtInF) * 6.0);
          }
        } else {
          for (i = 0; i < 99; i++) {
            t_dx = ((real32_T)i + 1.0F) * 0.5F;
            StraightLaneLeft1_PointX[i + 1] = t_dx;
            t_dy = ((real32_T)i + 1.0F) * 0.62F;
            StraightLaneRight1_PointX[i + 1] = t_dy;
            StraightLaneCenter1_PointX[i + 1] = t_dx;
            StraightLaneLeft2_PointX[i + 1] = t_dx;
            StraightLaneRight2_PointX[i + 1] = t_dy;
            StraightLaneCenter2_PointX[i + 1] = t_dx;
          }

          for (i = 0; i < 100; i++) {
            StraightLaneLeft2_PointX_0[i] = StraightLaneLeft2_PointX[99 - i];
          }

          memcpy(&StraightLaneLeft2_PointX[0], &StraightLaneLeft2_PointX_0[0],
                 100U * sizeof(real32_T));
          for (i = 0; i < 100; i++) {
            StraightLaneLeft1_PointY[i] = StraightLaneRight2_PointX[99 - i];
          }

          memcpy(&StraightLaneRight2_PointX[0], &StraightLaneLeft1_PointY[0],
                 100U * sizeof(real32_T));
          for (i = 0; i < 100; i++) {
            StraightLaneLeft2_PointX_0[i] = StraightLaneCenter2_PointX[99 - i];
          }

          for (i = 0; i < 100; i++) {
            StraightLaneCenter2_PointX[i] = StraightLaneLeft2_PointX_0[i];
            StraightLaneLeft2_PointY[i] = -10.2F;
            StraightLaneRight2_PointY[i] = -13.8F;
            StraightLaneCenter2_PointY[i] = -12.0F;
            LaneLeftPointX[i] = 1.8F - ((real32_T)i + 1.0F) * 0.156F;
            LaneLeftPointY[i] = 62.0F;
            LaneRightPointX[i] = -1.8F - ((real32_T)i + 1.0F) * 0.084F;
            LaneRightPointY[i] = 50.0F;
            LaneCenterPointX[i] = (real32_T)(sin((((real_T)i + 1.0) - 1.0) *
              3.1415926535897931 / 100.0) * 6.0 + 50.0);
            LaneCenterPointY[i] = (real32_T)(-6.0 - cos((100.0 - ((real_T)i +
              1.0)) * 3.1415926535897931 / 100.0) * 6.0);
          }
        }

        for (i = 0; i < 100; i++) {
          LeftLinePointX[i] = StraightLaneLeft1_PointX[i];
          LeftLinePointX[i + 100] = LaneRightPointY[i];
          LeftLinePointX[i + 200] = StraightLaneLeft2_PointX[i];
          LeftLinePointY[i] = -1.8F;
          LeftLinePointY[i + 100] = LaneRightPointX[i];
          LeftLinePointY[i + 200] = StraightLaneLeft2_PointY[i];
          CenterLinePointX[i] = StraightLaneCenter1_PointX[i];
          CenterLinePointX[i + 100] = LaneCenterPointX[i];
          CenterLinePointX[i + 200] = StraightLaneCenter2_PointX[i];
          CenterLinePointY[i] = 0.0F;
          CenterLinePointY[i + 100] = LaneCenterPointY[i];
          CenterLinePointY[i + 200] = StraightLaneCenter2_PointY[i];
          RightLinePointX[i] = StraightLaneRight1_PointX[i];
          RightLinePointX[i + 100] = LaneLeftPointY[i];
          RightLinePointX[i + 200] = StraightLaneRight2_PointX[i];
          RightLinePointY[i] = 1.8F;
          RightLinePointY[i + 100] = LaneLeftPointX[i];
          RightLinePointY[i + 200] = StraightLaneRight2_PointY[i];
        }
        break;
      }
    } else {
      for (i = 0; i < 300; i++) {
        t_dx = LATC_Test_Calc_DW.UnitDelay5_DSTATE[i] - (real32_T)t_Psi;
        t_dy = LATC_Test_Calc_DW.UnitDelay4_DSTATE[i] - (real32_T)t_dDeltaXTemp;
        LeftLinePointX[i] = t_dx * (real32_T)rtb_CosOfPsi + t_dy * (real32_T)
          PsiDtInF;
        LeftLinePointY[i] = -t_dx * (real32_T)PsiDtInF + t_dy * (real32_T)
          rtb_CosOfPsi;
        t_dx = LATC_Test_Calc_DW.UnitDelay3_DSTATE[i] - (real32_T)t_Psi;
        t_dy = LATC_Test_Calc_DW.UnitDelay2_DSTATE[i] - (real32_T)t_dDeltaXTemp;
        CenterLinePointX[i] = t_dx * (real32_T)rtb_CosOfPsi + t_dy * (real32_T)
          PsiDtInF;
        CenterLinePointY[i] = -t_dx * (real32_T)PsiDtInF + t_dy * (real32_T)
          rtb_CosOfPsi;
        t_dx = LATC_Test_Calc_DW.UnitDelay1_DSTATE[i] - (real32_T)t_Psi;
        t_dy = LATC_Test_Calc_DW.UnitDelay_DSTATE[i] - (real32_T)t_dDeltaXTemp;
        RightLinePointX[i] = t_dx * (real32_T)rtb_CosOfPsi + t_dy * (real32_T)
          PsiDtInF;
        RightLinePointY[i] = -t_dx * (real32_T)PsiDtInF + t_dy * (real32_T)
          rtb_CosOfPsi;
      }
    }

    /* End of MATLAB Function: '<S110>/Env' */
    for (rtb_ErrWheel_FR = 0; rtb_ErrWheel_FR < 101; rtb_ErrWheel_FR++) {
      /* MATLAB Function: '<S57>/MATLAB Function1' */
      rtb_CenterLinePointYY[rtb_ErrWheel_FR] = 0.0F;
      i = rtb_ErrWheel_FR * 3;
      if (i == 0) {
        i = 1;
      }

      rtb_CenterLinePointYY[rtb_ErrWheel_FR] = CenterLinePointY[i - 1];

      /* DataTypeConversion: '<S108>/Data Type Conversion' incorporates:
       *  MATLAB Function: '<S57>/MATLAB Function1'
       */
      LATC_Test_Calc_B.DataTypeConversion[rtb_ErrWheel_FR] = CenterLinePointX[i
        - 1];
    }

    /* S-Function (cnpenvout): '<S108>/S-Function' */

    /* Level2 S-Function Block: '<S108>/S-Function' (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
      sfcnOutputs(rts,1);
    }

    for (i = 0; i < 101; i++) {
      /* DataTypeConversion: '<S109>/Data Type Conversion' */
      LATC_Test_Calc_B.DataTypeConversion_g[i] = rtb_CenterLinePointYY[i];
    }

    /* S-Function (cnpenvout): '<S109>/S-Function' */

    /* Level2 S-Function Block: '<S109>/S-Function' (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
      sfcnOutputs(rts,1);
    }

    /* SwitchCase: '<S73>/Switch Case' incorporates:
     *  Constant: '<S73>/Constant'
     *  Constant: '<S73>/Constant1'
     *  Constant: '<S73>/Constant2'
     *  Constant: '<S73>/Constant3'
     */
    t_dDeltaXTemp = trunc(LATC_Test_Calc_DW.RateTransition1_16_Buffer);
    if (rtIsNaN(t_dDeltaXTemp) || rtIsInf(t_dDeltaXTemp)) {
      t_dDeltaXTemp = 0.0;
    } else {
      t_dDeltaXTemp = fmod(t_dDeltaXTemp, 4.294967296E+9);
    }

    switch (t_dDeltaXTemp < 0.0 ? -(int32_T)(uint32_T)-t_dDeltaXTemp : (int32_T)
            (uint32_T)t_dDeltaXTemp) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S73>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S95>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(3.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S73>/Switch Case Action Subsystem' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S73>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S96>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(1.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S73>/Switch Case Action Subsystem1' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S73>/Switch Case Action Subsystem2' incorporates:
       *  ActionPort: '<S97>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(-1.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S73>/Switch Case Action Subsystem2' */
      break;

     default:
      /* Outputs for IfAction SubSystem: '<S73>/Switch Case Action Subsystem3' incorporates:
       *  ActionPort: '<S98>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(0.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S73>/Switch Case Action Subsystem3' */
      break;
    }

    /* End of SwitchCase: '<S73>/Switch Case' */

    /* Gain: '<S63>/Gain3' incorporates:
     *  Product: '<S63>/Product4'
     */
    LATC_Test_Calc_B.Gain3 = LATC_Test_Calc_DW.RateTransition1_18_Buffer *
      t_dDeltaXTemp * 0.27777777777777779;

    /* SwitchCase: '<S72>/Switch Case' incorporates:
     *  Constant: '<S72>/Constant'
     *  Constant: '<S72>/Constant1'
     *  Constant: '<S72>/Constant2'
     *  Constant: '<S72>/Constant3'
     */
    t_dDeltaXTemp = trunc(LATC_Test_Calc_DW.RateTransition1_13_Buffer);
    if (rtIsNaN(t_dDeltaXTemp) || rtIsInf(t_dDeltaXTemp)) {
      t_dDeltaXTemp = 0.0;
    } else {
      t_dDeltaXTemp = fmod(t_dDeltaXTemp, 4.294967296E+9);
    }

    switch (t_dDeltaXTemp < 0.0 ? -(int32_T)(uint32_T)-t_dDeltaXTemp : (int32_T)
            (uint32_T)t_dDeltaXTemp) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S72>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S91>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(3.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S72>/Switch Case Action Subsystem' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S72>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S92>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(1.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S72>/Switch Case Action Subsystem1' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S72>/Switch Case Action Subsystem2' incorporates:
       *  ActionPort: '<S93>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(-1.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S72>/Switch Case Action Subsystem2' */
      break;

     default:
      /* Outputs for IfAction SubSystem: '<S72>/Switch Case Action Subsystem3' incorporates:
       *  ActionPort: '<S94>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(0.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S72>/Switch Case Action Subsystem3' */
      break;
    }

    /* End of SwitchCase: '<S72>/Switch Case' */

    /* Gain: '<S63>/Gain2' incorporates:
     *  Product: '<S63>/Product3'
     */
    LATC_Test_Calc_B.Gain2 = LATC_Test_Calc_DW.RateTransition1_15_Buffer *
      t_dDeltaXTemp * 0.27777777777777779;

    /* SwitchCase: '<S71>/Switch Case' incorporates:
     *  Constant: '<S71>/Constant'
     *  Constant: '<S71>/Constant1'
     *  Constant: '<S71>/Constant2'
     *  Constant: '<S71>/Constant3'
     */
    t_dDeltaXTemp = trunc(LATC_Test_Calc_DW.RateTransition1_10_Buffer);
    if (rtIsNaN(t_dDeltaXTemp) || rtIsInf(t_dDeltaXTemp)) {
      t_dDeltaXTemp = 0.0;
    } else {
      t_dDeltaXTemp = fmod(t_dDeltaXTemp, 4.294967296E+9);
    }

    switch (t_dDeltaXTemp < 0.0 ? -(int32_T)(uint32_T)-t_dDeltaXTemp : (int32_T)
            (uint32_T)t_dDeltaXTemp) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S71>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S87>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(3.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S71>/Switch Case Action Subsystem' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S71>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S88>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(1.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S71>/Switch Case Action Subsystem1' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S71>/Switch Case Action Subsystem2' incorporates:
       *  ActionPort: '<S89>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(-1.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S71>/Switch Case Action Subsystem2' */
      break;

     default:
      /* Outputs for IfAction SubSystem: '<S71>/Switch Case Action Subsystem3' incorporates:
       *  ActionPort: '<S90>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(0.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S71>/Switch Case Action Subsystem3' */
      break;
    }

    /* End of SwitchCase: '<S71>/Switch Case' */

    /* Gain: '<S63>/Gain1' incorporates:
     *  Product: '<S63>/Product2'
     */
    LATC_Test_Calc_B.Gain1 = LATC_Test_Calc_DW.RateTransition1_12_Buffer *
      t_dDeltaXTemp * 0.27777777777777779;

    /* SwitchCase: '<S70>/Switch Case' incorporates:
     *  Constant: '<S70>/Constant'
     *  Constant: '<S70>/Constant1'
     *  Constant: '<S70>/Constant2'
     *  Constant: '<S70>/Constant3'
     */
    t_dDeltaXTemp = trunc(LATC_Test_Calc_DW.RateTransition1_7_Buffer);
    if (rtIsNaN(t_dDeltaXTemp) || rtIsInf(t_dDeltaXTemp)) {
      t_dDeltaXTemp = 0.0;
    } else {
      t_dDeltaXTemp = fmod(t_dDeltaXTemp, 4.294967296E+9);
    }

    switch (t_dDeltaXTemp < 0.0 ? -(int32_T)(uint32_T)-t_dDeltaXTemp : (int32_T)
            (uint32_T)t_dDeltaXTemp) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S70>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S83>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(3.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S70>/Switch Case Action Subsystem' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S70>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S84>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(1.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S70>/Switch Case Action Subsystem1' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S70>/Switch Case Action Subsystem2' incorporates:
       *  ActionPort: '<S85>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(-1.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S70>/Switch Case Action Subsystem2' */
      break;

     default:
      /* Outputs for IfAction SubSystem: '<S70>/Switch Case Action Subsystem3' incorporates:
       *  ActionPort: '<S86>/Action Port'
       */
      LATC__SwitchCaseActionSubsystem(0.0, &t_dDeltaXTemp);

      /* End of Outputs for SubSystem: '<S70>/Switch Case Action Subsystem3' */
      break;
    }

    /* End of SwitchCase: '<S70>/Switch Case' */

    /* Gain: '<S63>/Gain' incorporates:
     *  Product: '<S63>/Product1'
     */
    LATC_Test_Calc_B.Gain = LATC_Test_Calc_DW.RateTransition1_9_Buffer *
      t_dDeltaXTemp * 0.27777777777777779;

    /* S-Function (sfix_udelay): '<S63>/Tapped Delay' */
    rtb_TappedDelay4[0] = LATC_Test_Calc_B.Gain;
    rtb_TappedDelay4[1] = LATC_Test_Calc_DW.TappedDelay_X[0];
    rtb_TappedDelay4[2] = LATC_Test_Calc_DW.TappedDelay_X[1];
    rtb_TappedDelay4[3] = LATC_Test_Calc_DW.TappedDelay_X[2];
    rtb_TappedDelay4[4] = LATC_Test_Calc_DW.TappedDelay_X[3];

    /* Sum: '<S63>/Sum of Elements' */
    t_dDeltaXTemp = -0.0;
    for (i = 0; i < 5; i++) {
      t_dDeltaXTemp += rtb_TappedDelay4[i];
    }

    /* S-Function (sfix_udelay): '<S63>/Tapped Delay1' */
    rtb_TappedDelay4[0] = LATC_Test_Calc_B.Gain1;
    rtb_TappedDelay4[1] = LATC_Test_Calc_DW.TappedDelay1_X[0];
    rtb_TappedDelay4[2] = LATC_Test_Calc_DW.TappedDelay1_X[1];
    rtb_TappedDelay4[3] = LATC_Test_Calc_DW.TappedDelay1_X[2];
    rtb_TappedDelay4[4] = LATC_Test_Calc_DW.TappedDelay1_X[3];

    /* Sum: '<S63>/Sum of Elements1' */
    t_Psi = -0.0;
    for (i = 0; i < 5; i++) {
      t_Psi += rtb_TappedDelay4[i];
    }

    /* S-Function (sfix_udelay): '<S63>/Tapped Delay2' */
    rtb_TappedDelay4[0] = LATC_Test_Calc_B.Gain2;
    rtb_TappedDelay4[1] = LATC_Test_Calc_DW.TappedDelay2_X[0];
    rtb_TappedDelay4[2] = LATC_Test_Calc_DW.TappedDelay2_X[1];
    rtb_TappedDelay4[3] = LATC_Test_Calc_DW.TappedDelay2_X[2];
    rtb_TappedDelay4[4] = LATC_Test_Calc_DW.TappedDelay2_X[3];

    /* Sum: '<S63>/Sum of Elements2' */
    t_dDeltaYTemp = -0.0;
    for (i = 0; i < 5; i++) {
      t_dDeltaYTemp += rtb_TappedDelay4[i];
    }

    /* S-Function (sfix_udelay): '<S63>/Tapped Delay3' */
    rtb_TappedDelay4[0] = LATC_Test_Calc_B.Gain3;
    rtb_TappedDelay4[1] = LATC_Test_Calc_DW.TappedDelay3_X[0];
    rtb_TappedDelay4[2] = LATC_Test_Calc_DW.TappedDelay3_X[1];
    rtb_TappedDelay4[3] = LATC_Test_Calc_DW.TappedDelay3_X[2];
    rtb_TappedDelay4[4] = LATC_Test_Calc_DW.TappedDelay3_X[3];

    /* Sum: '<S63>/Sum of Elements3' */
    tmp = -0.0;
    for (i = 0; i < 5; i++) {
      tmp += rtb_TappedDelay4[i];
    }

    /* S-Function (sfix_udelay): '<S61>/Tapped Delay' */
    rtb_TappedDelay4[0] = LATC_Test_Calc_B.VehDynYawRate;
    rtb_TappedDelay4[1] = LATC_Test_Calc_DW.TappedDelay_X_f[0];
    rtb_TappedDelay4[2] = LATC_Test_Calc_DW.TappedDelay_X_f[1];
    rtb_TappedDelay4[3] = LATC_Test_Calc_DW.TappedDelay_X_f[2];
    rtb_TappedDelay4[4] = LATC_Test_Calc_DW.TappedDelay_X_f[3];

    /* Sum: '<S61>/Sum of Elements' */
    PsiDtInF = -0.0;
    for (i = 0; i < 5; i++) {
      PsiDtInF += rtb_TappedDelay4[i];
    }

    /* Gain: '<S61>/Gain' incorporates:
     *  Sum: '<S61>/Sum of Elements'
     */
    PsiDtInF *= 0.2;

    /* Sum: '<S58>/Sum3' incorporates:
     *  Memory: '<S58>/Memory2'
     */
    rtb_CosOfPsi = PsiDtInF - LATC_Test_Calc_DW.Memory2_PreviousInput_h;

    /* MATLAB Function: '<S63>/VxwCorr' incorporates:
     *  Constant: '<S63>/Constant'
     *  Constant: '<S63>/Constant2'
     *  Constant: '<S63>/Constant3'
     *  Gain: '<S63>/Gain4'
     *  Gain: '<S63>/Gain5'
     *  Gain: '<S63>/Gain6'
     *  Gain: '<S63>/Gain7'
     *  Memory: '<S63>/Memory2'
     *  Sum: '<S63>/Sum of Elements'
     *  Sum: '<S63>/Sum of Elements1'
     *  Sum: '<S63>/Sum of Elements2'
     *  Sum: '<S63>/Sum of Elements3'
     */
    t_dx = 2.915F * (real32_T)rtb_CosOfPsi * (real32_T)sin
      (LATC_Test_Calc_DW.Memory2_PreviousInput_d);
    rtb_vxwCorrFR = (real32_T)cos(LATC_Test_Calc_DW.Memory2_PreviousInput_d);
    t_dy = 1.671F * (real32_T)rtb_CosOfPsi / 2.0F;
    rtb_vxwCorrFL = ((real32_T)(0.2 * t_dDeltaXTemp) - t_dx) / rtb_vxwCorrFR +
      t_dy;
    rtb_vxwCorrFR = ((real32_T)(0.2 * t_Psi) - t_dx) / rtb_vxwCorrFR - t_dy;
    t_dx = (real32_T)(0.2 * t_dDeltaYTemp) + t_dy;
    t_dy = (real32_T)(0.2 * tmp) - t_dy;

    /* MATLAB Function: '<S63>/calcVxwDiffAndModErr_v' */
    t_vxwDiffFLFR = fabsf(rtb_vxwCorrFL - rtb_vxwCorrFR);
    t_vxwDiffFLRL = fabsf(rtb_vxwCorrFL - t_dx);
    t_vxwDiffFLRR = fabsf(rtb_vxwCorrFL - t_dy);
    t_vxwDiffFRRL = fabsf(rtb_vxwCorrFR - t_dx);
    t_vxwDiffFRRR = fabsf(rtb_vxwCorrFR - t_dy);
    t_vxwDiffRLRR = fabsf(t_dx - t_dy);
    t_vxwDiffAllowed = (fmaxf(fmaxf(fmaxf(rtb_vxwCorrFL, rtb_vxwCorrFR), t_dx),
      t_dy) - fminf(fminf(fminf(rtb_vxwCorrFL, rtb_vxwCorrFR), t_dx), t_dy)) *
      0.6F;
    i = ((t_vxwDiffFLFR > t_vxwDiffAllowed) && (t_vxwDiffFLRL > t_vxwDiffAllowed)
         && (t_vxwDiffFLRR > t_vxwDiffAllowed));
    rtb_ErrWheel_FR = ((t_vxwDiffFLFR > t_vxwDiffAllowed) && (t_vxwDiffFRRL >
      t_vxwDiffAllowed) && (t_vxwDiffFRRR > t_vxwDiffAllowed));
    rtb_ErrWheel_RL = ((t_vxwDiffFLRL > t_vxwDiffAllowed) && (t_vxwDiffFRRL >
      t_vxwDiffAllowed) && (t_vxwDiffRLRR > t_vxwDiffAllowed));
    rtb_ErrWheel_RR = ((t_vxwDiffFLRR > t_vxwDiffAllowed) && (t_vxwDiffFRRR >
      t_vxwDiffAllowed) && (t_vxwDiffRLRR > t_vxwDiffAllowed));

    /* MATLAB Function: '<S63>/calcBrakeDriveState' incorporates:
     *  Memory: '<S63>/Memory31'
     *  Memory: '<S63>/Memory34'
     *  Memory: '<S63>/Memory35'
     *  Memory: '<S63>/Memory36'
     */
    l_CaseDrive = (((LATC_Test_Calc_DW.Memory31_PreviousInput > 0.5) &&
                    (LATC_Test_Calc_DW.Memory34_PreviousInput > 0.5F) &&
                    (LATC_Test_Calc_DW.Memory35_PreviousInput > 0.0F)) ||
                   ((LATC_Test_Calc_DW.Memory31_PreviousInput < -0.5) &&
                    (LATC_Test_Calc_DW.Memory34_PreviousInput < -0.5F) &&
                    (LATC_Test_Calc_DW.Memory35_PreviousInput < 0.0F)));
    l_CaseBrake = (((LATC_Test_Calc_DW.Memory31_PreviousInput < -0.5) &&
                    (LATC_Test_Calc_DW.Memory34_PreviousInput < -0.5F) &&
                    (LATC_Test_Calc_DW.Memory35_PreviousInput > 0.0F)) ||
                   ((LATC_Test_Calc_DW.Memory31_PreviousInput > 0.5) &&
                    (LATC_Test_Calc_DW.Memory34_PreviousInput > 0.5F) &&
                    (LATC_Test_Calc_DW.Memory35_PreviousInput < 0.0F)));
    t_vxwDiffFLFR = fabsf(LATC_Test_Calc_DW.Memory34_PreviousInput);
    if (l_CaseDrive == 1) {
      if (t_vxwDiffFLFR >= 0.5F) {
        t_vxwDiffRLRR = -((t_vxwDiffFLFR - 0.5F) * 0.00815F);
      } else {
        t_vxwDiffRLRR = -0.0F;
      }

      t_vxwDiffFLFR = 0.0F;
    } else {
      t_vxwDiffRLRR = 0.0F;
      if ((l_CaseBrake == 1) && (LATC_Test_Calc_DW.Memory36_PreviousInput == 0.0))
      {
        if (t_vxwDiffFLFR >= 0.5F) {
          t_vxwDiffFLFR = (t_vxwDiffFLFR - 0.5F) * 0.00815F;
        } else {
          t_vxwDiffFLFR = 0.0F;
        }
      } else {
        t_vxwDiffFLFR = 0.0F;
      }
    }

    /* MATLAB Function: '<S63>/detErrorBandMin' incorporates:
     *  Constant: '<S63>/Time26'
     *  MATLAB Function: '<S63>/calcBrakeDriveState'
     */
    t_vxwDiffAllowed = 128.0F;
    if (i == 0) {
      t_vxwDiffFLRR = (t_vxwDiffRLRR + 1.0F) * rtb_vxwCorrFL;
      t_vxwDiffAllowed = fminf(128.0F, t_vxwDiffFLRR);
      t_vxwDiffFLRL = t_vxwDiffFLRR;
    } else {
      t_vxwDiffFLRL = -128.0F;
    }

    if (rtb_ErrWheel_FR == 0) {
      t_vxwDiffFLRR = (t_vxwDiffRLRR + 1.0F) * rtb_vxwCorrFR;
      t_vxwDiffAllowed = fminf(t_vxwDiffAllowed, t_vxwDiffFLRR);
      t_vxwDiffFRRL = t_vxwDiffFLRR;
    } else {
      t_vxwDiffFRRL = -128.0F;
    }

    if (rtb_ErrWheel_RL == 0) {
      t_vxwDiffFLRR = (0.0F * t_vxwDiffRLRR + 1.0F) * t_dx;
      t_vxwDiffAllowed = fminf(t_vxwDiffAllowed, t_vxwDiffFLRR);
      t_vxwDiffFRRR = t_vxwDiffFLRR;
    } else {
      t_vxwDiffFRRR = -128.0F;
    }

    if (rtb_ErrWheel_RR == 0) {
      t_vxwDiffFLRR = (0.0F * t_vxwDiffRLRR + 1.0F) * t_dy;
      t_vxwDiffAllowed = fminf(t_vxwDiffAllowed, t_vxwDiffFLRR);
    } else {
      t_vxwDiffFLRR = -128.0F;
    }

    if (l_CaseBrake == 0) {
      t_vxwDiffFLRL = t_vxwDiffAllowed;
      t_vxwDiffFRRL = t_vxwDiffAllowed;
    }

    /* End of MATLAB Function: '<S63>/detErrorBandMin' */

    /* MATLAB Function: '<S63>/detErrorBandMax' incorporates:
     *  MATLAB Function: '<S63>/calcBrakeDriveState'
     */
    t_vxwDiffRLRR = -128.0F;
    if (i == 0) {
      t_vxwDiffAllowed = (t_vxwDiffFLFR + 1.0F) * rtb_vxwCorrFL;
      t_vxwDiffRLRR = fmaxf(-128.0F, t_vxwDiffAllowed);
      rtb_vxwCorrFL = t_vxwDiffAllowed;
    } else {
      rtb_vxwCorrFL = 128.0F;
    }

    if (rtb_ErrWheel_FR == 0) {
      t_vxwDiffAllowed = (t_vxwDiffFLFR + 1.0F) * rtb_vxwCorrFR;
      t_vxwDiffRLRR = fmaxf(t_vxwDiffRLRR, t_vxwDiffAllowed);
      rtb_vxwCorrFR = t_vxwDiffAllowed;
    } else {
      rtb_vxwCorrFR = 128.0F;
    }

    if (rtb_ErrWheel_RL == 0) {
      t_vxwDiffAllowed = (t_vxwDiffFLFR + 1.0F) * t_dx;
      t_vxwDiffRLRR = fmaxf(t_vxwDiffRLRR, t_vxwDiffAllowed);
      t_dx = t_vxwDiffAllowed;
    } else {
      t_dx = 128.0F;
    }

    if (rtb_ErrWheel_RR == 0) {
      t_vxwDiffAllowed = (t_vxwDiffFLFR + 1.0F) * t_dy;
      t_vxwDiffRLRR = fmaxf(t_vxwDiffRLRR, t_vxwDiffAllowed);
    } else {
      t_vxwDiffAllowed = 128.0F;
    }

    if (l_CaseBrake == 1) {
      rtb_vxwCorrFL = t_vxwDiffRLRR;
      rtb_vxwCorrFR = t_vxwDiffRLRR;
      t_dx = t_vxwDiffRLRR;
      t_vxwDiffAllowed = t_vxwDiffRLRR;
    }

    /* End of MATLAB Function: '<S63>/detErrorBandMax' */

    /* Gain: '<S63>/Gain17' incorporates:
     *  MinMax: '<S63>/MinMax3'
     *  MinMax: '<S63>/MinMax4'
     *  Sum: '<S63>/Sum6'
     */
    LATC_Test_Calc_B.vxvRefRaw = (fmaxf(fmaxf(fmaxf(t_vxwDiffFLRL, t_vxwDiffFRRL),
      t_vxwDiffFRRR), t_vxwDiffFLRR) + fminf(fminf(fminf(rtb_vxwCorrFL,
      rtb_vxwCorrFR), t_dx), t_vxwDiffAllowed)) * 0.5F;

    /* MATLAB Function: '<S63>/vsp_filtVxvRefRaw' incorporates:
     *  MATLAB Function: '<S63>/calcBrakeDriveState'
     *  Memory: '<S63>/Memory37'
     *  Memory: '<S63>/Memory38'
     *  Memory: '<S63>/Memory39'
     *  Step: '<S63>/Step'
     */
    t_dDeltaXTemp = 1.0;
    if (!(LATC_Test_Calc_M->Timing.t[1] < 0.1)) {
      if ((l_CaseDrive == 0) && (l_CaseBrake == 0)) {
        t_dDeltaXTemp = 0.25;
      }

      if ((LATC_Test_Calc_DW.Memory39_PreviousInput > 0.0) ||
          (LATC_Test_Calc_DW.Memory38_PreviousInput > 0.0)) {
        t_dDeltaXTemp = 0.125;
      }

      /* Gain: '<S63>/Gain17' incorporates:
       *  MATLAB Function: '<S63>/calcBrakeDriveState'
       *  Memory: '<S63>/Memory23'
       *  Memory: '<S63>/Memory38'
       *  Memory: '<S63>/Memory39'
       */
      LATC_Test_Calc_B.vxvRefRaw = (LATC_Test_Calc_B.vxvRefRaw -
        LATC_Test_Calc_DW.Memory23_PreviousInput) * (real32_T)t_dDeltaXTemp +
        LATC_Test_Calc_DW.Memory23_PreviousInput;
      t_dx = fabsf(LATC_Test_Calc_B.vxvRefRaw);
      t_dy = fabsf(LATC_Test_Calc_DW.Memory37_PreviousInput);
      if (((l_CaseBrake == 1) && (t_dx > t_dy)) || ((l_CaseDrive == 1) && (t_dx <
            t_dy))) {
        /* Gain: '<S63>/Gain17' */
        LATC_Test_Calc_B.vxvRefRaw = LATC_Test_Calc_DW.Memory37_PreviousInput;
      }

      /* Gain: '<S63>/Gain17' incorporates:
       *  MATLAB Function: '<S63>/calcBrakeDriveState'
       *  Memory: '<S63>/Memory23'
       *  Memory: '<S63>/Memory37'
       */
      LATC_Test_Calc_B.vxvRefRaw = fmaxf(fminf(LATC_Test_Calc_B.vxvRefRaw,
        LATC_Test_Calc_DW.Memory23_PreviousInput + 0.24F),
        LATC_Test_Calc_DW.Memory23_PreviousInput - 0.24F);
    }

    /* End of MATLAB Function: '<S63>/vsp_filtVxvRefRaw' */

    /* S-Function (sfix_udelay): '<S63>/Tapped Delay8' */
    rtb_TappedDelay8[0] = LATC_Test_Calc_B.vxvRefRaw;
    rtb_TappedDelay8[1] = LATC_Test_Calc_DW.TappedDelay8_X[0];
    rtb_TappedDelay8[2] = LATC_Test_Calc_DW.TappedDelay8_X[1];
    rtb_TappedDelay8[3] = LATC_Test_Calc_DW.TappedDelay8_X[2];
    rtb_TappedDelay8[4] = LATC_Test_Calc_DW.TappedDelay8_X[3];

    /* Sum: '<S63>/Sum of Elements4' */
    t_dy = -0.0F;
    for (i = 0; i < 5; i++) {
      t_dy += rtb_TappedDelay8[i];
    }

    /* Gain: '<S63>/Gain8' incorporates:
     *  Sum: '<S63>/Sum of Elements4'
     */
    t_dx = 0.2F * t_dy;

    /* Gain: '<S63>/Gain10' incorporates:
     *  Memory: '<S63>/Memory21'
     *  Sum: '<S63>/Sum7'
     */
    t_dy = (t_dx - LATC_Test_Calc_DW.Memory21_PreviousInput) * 50.0F;

    /* Sum: '<S63>/Sum9' incorporates:
     *  Gain: '<S63>/Gain11'
     *  Memory: '<S63>/Memory29'
     *  Sum: '<S63>/Sum8'
     */
    LATC_Test_Calc_DW.Memory29_PreviousInput += (t_dy -
      LATC_Test_Calc_DW.Memory29_PreviousInput) * 0.25F;

    /* Sum: '<S63>/Sum14' incorporates:
     *  Abs: '<S63>/Abs'
     *  Constant: '<S63>/Time27'
     *  Lookup_n-D: '<S63>/t_tauAxvRef'
     *  Memory: '<S63>/Memory22'
     *  Product: '<S63>/Product6'
     *  Product: '<S63>/Product7'
     *  Sum: '<S63>/Sum12'
     *  Sum: '<S63>/Sum13'
     */
    LATC_Test_Calc_DW.Memory22_PreviousInput += 0.02F / look1_iflf_binlxpw(fabsf
      (LATC_Test_Calc_DW.Memory29_PreviousInput -
       LATC_Test_Calc_DW.Memory22_PreviousInput),
      LATC_Test_Calc_ConstP.t_tauAxvRef_bp01Data,
      LATC_Test_Calc_ConstP.t_tauAxvRef_tableData, 2U) * (t_dy -
      LATC_Test_Calc_DW.Memory22_PreviousInput);

    /* RelationalOperator: '<S60>/Compare' incorporates:
     *  Constant: '<S60>/Constant'
     */
    rtb_Compare = (LATC_Test_Calc_DW.RateTransition1_34_Buffer == 1.0);

    /* MATLAB Function: '<S63>/vsp_calcNoCali_v' incorporates:
     *  Gain: '<S63>/Gain13'
     *  Memory: '<S63>/Memory33'
     *  Sum: '<S63>/Sum15'
     */
    t_dy = t_dx;
    if (fabs((((LATC_Test_Calc_B.Gain3 + LATC_Test_Calc_B.Gain2) +
               LATC_Test_Calc_B.Gain1) + LATC_Test_Calc_B.Gain) * 0.25) <=
        0.0039) {
      if (rtb_Compare) {
        t_dy = 0.0F;
        LATC_Test_Calc_DW.Memory33_PreviousInput = 0.0F;
      } else {
        LATC_Test_Calc_DW.Memory33_PreviousInput -= 0.1F *
          LATC_Test_Calc_DW.Memory33_PreviousInput;
      }
    } else {
      LATC_Test_Calc_DW.Memory33_PreviousInput =
        LATC_Test_Calc_DW.Memory22_PreviousInput;
    }

    /* End of MATLAB Function: '<S63>/vsp_calcNoCali_v' */

    /* Sum: '<S63>/Sum2' incorporates:
     *  Memory: '<S63>/Memory1'
     *  Product: '<S63>/Product5'
     */
    LATC_Test_Calc_DW.Memory35_PreviousInput = t_dy *
      LATC_Test_Calc_DW.Memory1_PreviousInput_m + t_dy;

    /* Product: '<S67>/Product5' incorporates:
     *  MATLAB Function: '<S74>/YOD_Ackman'
     */
    t_dy = LATC_Test_Calc_DW.Memory35_PreviousInput *
      LATC_Test_Calc_DW.Memory35_PreviousInput;

    /* Sum: '<S68>/Sum5' incorporates:
     *  Constant: '<S67>/AxSensorToRearAxis'
     *  Constant: '<S67>/K'
     *  Memory: '<S68>/Memory2'
     *  Product: '<S67>/Product3'
     *  Product: '<S67>/Product5'
     *  Product: '<S68>/Product1'
     *  Sum: '<S67>/Sum7'
     *  Sum: '<S68>/Sum4'
     */
    LATC_Test_Calc_DW.Memory2_PreviousInput_n += ((2.22 - t_dy * 0.002F) *
      rtb_CosOfPsi * rtb_CosOfPsi - LATC_Test_Calc_DW.Memory2_PreviousInput_n) *
      LATC_Test_Calc_ConstB.Product4_l;

    /* S-Function (sfix_udelay): '<S67>/Tapped Delay' */
    rtb_TappedDelay4[0] = LATC_Test_Calc_B.LongitudeAcc;
    rtb_TappedDelay4[1] = LATC_Test_Calc_DW.TappedDelay_X_l[0];
    rtb_TappedDelay4[2] = LATC_Test_Calc_DW.TappedDelay_X_l[1];
    rtb_TappedDelay4[3] = LATC_Test_Calc_DW.TappedDelay_X_l[2];
    rtb_TappedDelay4[4] = LATC_Test_Calc_DW.TappedDelay_X_l[3];

    /* Sum: '<S67>/Sum of Elements' */
    t_dDeltaXTemp = -0.0;
    for (i = 0; i < 5; i++) {
      t_dDeltaXTemp += rtb_TappedDelay4[i];
    }

    /* Sum: '<S67>/Sum1' incorporates:
     *  Gain: '<S67>/Gain16'
     *  Sum: '<S67>/Sum of Elements'
     */
    t_dDeltaXTemp = 0.2 * t_dDeltaXTemp +
      LATC_Test_Calc_DW.Memory2_PreviousInput_n;

    /* Product: '<S67>/Product1' incorporates:
     *  Constant: '<S67>/Constant'
     *  Lookup_n-D: '<S67>/t_FiltaxvRoadSlope'
     *  Sum: '<S63>/Sum2'
     */
    t_Psi = 0.02 / look1_iflf_binlxpw(LATC_Test_Calc_DW.Memory35_PreviousInput,
      LATC_Test_Calc_ConstP.t_FiltaxvRoadSlope_bp01Data,
      LATC_Test_Calc_ConstP.t_FiltaxvRoadSlope_tableData, 3U);

    /* Sum: '<S67>/Sum4' incorporates:
     *  Gain: '<S67>/Gain1'
     *  Memory: '<S67>/Memory'
     *  Memory: '<S67>/Memory1'
     *  Product: '<S67>/Product2'
     *  Sum: '<S67>/Sum'
     *  Sum: '<S67>/Sum2'
     *  Sum: '<S67>/Sum3'
     */
    LATC_Test_Calc_DW.Memory1_PreviousInput += ((t_dDeltaXTemp -
      (LATC_Test_Calc_DW.Memory35_PreviousInput -
       LATC_Test_Calc_DW.Memory_PreviousInput_c) * 50.0F) -
      LATC_Test_Calc_DW.Memory1_PreviousInput) * t_Psi;

    /* Sum: '<S67>/Sum6' incorporates:
     *  Memory: '<S67>/Memory2'
     *  Product: '<S67>/Product4'
     *  Sum: '<S67>/Sum5'
     */
    LATC_Test_Calc_DW.Memory2_PreviousInput_dn +=
      (LATC_Test_Calc_DW.Memory1_PreviousInput -
       LATC_Test_Calc_DW.Memory2_PreviousInput_dn) * t_Psi;

    /* Sum: '<S65>/Sum5' incorporates:
     *  Memory: '<S65>/Memory2'
     *  Product: '<S65>/Product1'
     *  Sum: '<S59>/Sum13'
     *  Sum: '<S65>/Sum4'
     */
    LATC_Test_Calc_DW.Memory2_PreviousInput += ((t_dDeltaXTemp -
      LATC_Test_Calc_DW.Memory2_PreviousInput_dn) -
      LATC_Test_Calc_DW.Memory2_PreviousInput) * LATC_Test_Calc_ConstB.Product4;

    /* Sum: '<S63>/Sum3' incorporates:
     *  Memory: '<S63>/Memory1'
     *  Product: '<S63>/Product8'
     */
    LATC_Test_Calc_DW.Memory34_PreviousInput =
      LATC_Test_Calc_DW.Memory1_PreviousInput_m *
      LATC_Test_Calc_DW.Memory33_PreviousInput +
      LATC_Test_Calc_DW.Memory33_PreviousInput;

    /* Gain: '<S58>/Gain1' incorporates:
     *  Memory: '<S58>/Memory'
     *  Sum: '<S58>/Sum'
     */
    t_dDeltaXTemp = (PsiDtInF - LATC_Test_Calc_DW.Memory_PreviousInput) * 50.0;

    /* Sum: '<S58>/Sum2' incorporates:
     *  Memory: '<S58>/Memory1'
     *  Product: '<S58>/FilterTime1'
     *  Sum: '<S58>/Sum1'
     */
    LATC_Test_Calc_DW.Memory1_PreviousInput_o += (t_dDeltaXTemp -
      LATC_Test_Calc_DW.Memory1_PreviousInput_o) *
      LATC_Test_Calc_ConstB.FilterTime;

    /* Outputs for Atomic SubSystem: '<S58>/PsiDtStandstillCalc' */
    /* MATLAB Function: '<S62>/MATLAB Function' incorporates:
     *  Gain: '<S58>/Gain13'
     *  Memory: '<S62>/Memory2'
     *  Memory: '<S62>/Memory3'
     */
    LATC_Test_Calc_DW.Memory2_PreviousInput_dk += (PsiDtInF -
      LATC_Test_Calc_DW.Memory2_PreviousInput_dk) * 0.04;
    if (rtb_Compare && (fabs(LATC_Test_Calc_DW.Memory2_PreviousInput_dk) < 0.08)
        && (fabs(t_dDeltaXTemp) < 0.1) && (fabs
         (LATC_Test_Calc_DW.Memory1_PreviousInput_o) < 0.01) && (fabs
         (0.017452006980802792 * LATC_Test_Calc_DW.RateTransition1_42_Buffer) <=
         1.5708)) {
      LATC_Test_Calc_DW.Memory3_PreviousInput += (PsiDtInF -
        LATC_Test_Calc_DW.Memory3_PreviousInput) * 0.004;
    }

    /* End of MATLAB Function: '<S62>/MATLAB Function' */
    /* End of Outputs for SubSystem: '<S58>/PsiDtStandstillCalc' */

    /* Sum: '<S63>/Sum11' incorporates:
     *  Gain: '<S63>/Gain12'
     *  Memory: '<S63>/Memory30'
     *  Sum: '<S63>/Sum10'
     */
    LATC_Test_Calc_DW.Memory31_PreviousInput =
      (LATC_Test_Calc_DW.Memory29_PreviousInput -
       LATC_Test_Calc_DW.Memory30_PreviousInput) * 0.05 +
      LATC_Test_Calc_DW.Memory30_PreviousInput;

    /* DataTypeConversion: '<S74>/Data Type Conversion' incorporates:
     *  Constant: '<S100>/Constant'
     *  RelationalOperator: '<S100>/Compare'
     */
    LATC_Test_Calc_B.DataTypeConversion_d =
      (LATC_Test_Calc_DW.RateTransition1_42_Buffer < 6.0);

    /* S-Function (sfix_udelay): '<S74>/Tapped Delay4' */
    rtb_TappedDelay4[0] = LATC_Test_Calc_B.DataTypeConversion_d;
    memcpy(&rtb_TappedDelay4[1], &LATC_Test_Calc_DW.TappedDelay4_X[0], 9U *
           sizeof(real_T));

    /* Sum: '<S74>/Sum of Elements5' */
    t_dDeltaXTemp = -0.0;
    for (i = 0; i < 10; i++) {
      t_dDeltaXTemp += rtb_TappedDelay4[i];
    }

    /* Product: '<S74>/FilterTime6' incorporates:
     *  Constant: '<S74>/Constant10'
     *  Gain: '<S74>/Gain9'
     *  Sum: '<S74>/Sum1'
     */
    t_Psi = (0.5 - LATC_Test_Calc_DW.RateTransition1_41_Buffer) * 2.0 *
      LATC_Test_Calc_DW.RateTransition1_40_Buffer;

    /* MATLAB Function: '<S74>/YOD_Ackman' incorporates:
     *  Constant: '<S74>/Constant4'
     *  Constant: '<S74>/Constant5'
     *  Constant: '<S74>/Constant6'
     *  Product: '<S74>/FilterTime2'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    if (LATC_Test_Calc_DW.Memory35_PreviousInput == 0.0F) {
      rtb_vxwCorrFL = 0.0F;
      t_dy = 1.0F;
    } else {
      t_dy = fminf((t_dy / 552.25F + 1.0F) * 2.915F /
                   LATC_Test_Calc_DW.Memory35_PreviousInput, 32767.0F);
      rtb_vxwCorrFL = (real32_T)(t_Psi / 15.5 / 57.3) / t_dy;
    }

    LATC_Test_Calc_DW.UnitDelay_DSTATE_k += (rtb_vxwCorrFL -
      LATC_Test_Calc_DW.UnitDelay_DSTATE_k) * 0.2F;

    /* Logic: '<S74>/Logical Operator' incorporates:
     *  Abs: '<S74>/Abs2'
     *  Constant: '<S101>/Constant'
     *  Constant: '<S102>/Constant'
     *  Constant: '<S103>/Constant'
     *  Constant: '<S99>/Constant'
     *  RelationalOperator: '<S101>/Compare'
     *  RelationalOperator: '<S102>/Compare'
     *  RelationalOperator: '<S103>/Compare'
     *  RelationalOperator: '<S99>/Compare'
     *  Sum: '<S74>/Sum of Elements5'
     */
    rtb_Compare = ((LATC_Test_Calc_DW.RateTransition1_33_Buffer == 1.0) &&
                   (t_dDeltaXTemp == 10.0) && (fabsf
      (LATC_Test_Calc_DW.Memory34_PreviousInput) <= 1.5F) &&
                   (LATC_Test_Calc_DW.Memory35_PreviousInput > 7.0F));

    /* Outputs for Enabled SubSystem: '<S74>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S104>/Enable'
     */
    if (rtb_Compare) {
      /* Sum: '<S104>/Sum7' incorporates:
       *  Constant: '<S104>/Constant2'
       *  Constant: '<S104>/Constant7'
       *  Constant: '<S104>/Constant8'
       *  Constant: '<S104>/FilterTime1'
       *  MATLAB Function: '<S74>/YOD_Ackman'
       *  Memory: '<S104>/Memory4'
       *  Product: '<S104>/FilterTime2'
       *  Product: '<S104>/Product2'
       *  Product: '<S104>/Product6'
       *  Sum: '<S104>/Sum6'
       *  Sum: '<S74>/Sum'
       */
      LATC_Test_Calc_B.Sum7 = (888.15 * t_dy *
        (LATC_Test_Calc_DW.UnitDelay_DSTATE_k - rtb_CosOfPsi) -
        LATC_Test_Calc_DW.Memory4_PreviousInput) * (0.02 /
        P_Global_SteerAngleOffsetFilterTime) +
        LATC_Test_Calc_DW.Memory4_PreviousInput;
    }

    /* End of Outputs for SubSystem: '<S74>/Enabled Subsystem' */

    /* MATLAB Function: '<S63>/transBrakeToDrive' incorporates:
     *  Memory: '<S63>/Memory25'
     *  Memory: '<S63>/Memory27'
     *  Memory: '<S63>/Memory28'
     */
    LATC_Test_Calc_DW.Memory38_PreviousInput = fmax
      (LATC_Test_Calc_DW.Memory27_PreviousInput - 0.02, 0.0);
    LATC_Test_Calc_DW.Memory36_PreviousInput = fmax
      (LATC_Test_Calc_DW.Memory25_PreviousInput - 0.02, 0.0);
    if (((LATC_Test_Calc_DW.Memory28_PreviousInput > -0.3) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput > -0.3) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput > 0.0F)) ||
        ((LATC_Test_Calc_DW.Memory28_PreviousInput < 0.3) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput < 0.3) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput < 0.0F))) {
      LATC_Test_Calc_DW.Memory26_PreviousInput = 0.0;
      LATC_Test_Calc_DW.Memory24_PreviousInput = 0.0;
    }

    if (((LATC_Test_Calc_DW.Memory28_PreviousInput < -0.7) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput < -0.7) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput > 0.0F)) ||
        ((LATC_Test_Calc_DW.Memory28_PreviousInput > 0.7) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput > 0.7) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput < 0.0F))) {
      LATC_Test_Calc_DW.Memory26_PreviousInput = 0.0;
      LATC_Test_Calc_DW.Memory24_PreviousInput = 0.0;
    }

    if (((LATC_Test_Calc_DW.Memory28_PreviousInput >= -0.3) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput < -0.3) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput > 0.0F)) ||
        ((LATC_Test_Calc_DW.Memory28_PreviousInput <= 0.3) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput > 0.3) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput < 0.0F))) {
      LATC_Test_Calc_DW.Memory26_PreviousInput += 0.02;
    }

    if (((LATC_Test_Calc_DW.Memory28_PreviousInput <= -0.7) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput > -0.7) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput > 0.0F)) ||
        ((LATC_Test_Calc_DW.Memory28_PreviousInput >= 0.7) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput < 0.7) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput < 0.0F))) {
      LATC_Test_Calc_DW.Memory24_PreviousInput += 0.02;
    }

    if (((LATC_Test_Calc_DW.Memory34_PreviousInput >= -0.7) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput <= -0.3) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput > 0.0F)) ||
        ((LATC_Test_Calc_DW.Memory34_PreviousInput <= 0.7) &&
         (LATC_Test_Calc_DW.Memory34_PreviousInput >= 0.3) &&
         (LATC_Test_Calc_DW.Memory35_PreviousInput < 0.0F))) {
      if (LATC_Test_Calc_DW.Memory26_PreviousInput > 0.0) {
        LATC_Test_Calc_DW.Memory26_PreviousInput = fmin
          (LATC_Test_Calc_DW.Memory26_PreviousInput + 0.02, 0.16);
      }

      if (LATC_Test_Calc_DW.Memory24_PreviousInput > 0.0) {
        LATC_Test_Calc_DW.Memory24_PreviousInput = fmin
          (LATC_Test_Calc_DW.Memory24_PreviousInput + 0.02, 0.16);
      }
    }

    if ((((LATC_Test_Calc_DW.Memory28_PreviousInput >= -0.7) &&
          (LATC_Test_Calc_DW.Memory34_PreviousInput < -0.7) &&
          (LATC_Test_Calc_DW.Memory35_PreviousInput > 0.0F)) ||
         ((LATC_Test_Calc_DW.Memory28_PreviousInput <= 0.7) &&
          (LATC_Test_Calc_DW.Memory34_PreviousInput > 0.7) &&
          (LATC_Test_Calc_DW.Memory35_PreviousInput < 0.0F))) &&
        (LATC_Test_Calc_DW.Memory26_PreviousInput > 0.0) &&
        (LATC_Test_Calc_DW.Memory26_PreviousInput < 0.16)) {
      LATC_Test_Calc_DW.Memory36_PreviousInput = 0.15;
    }

    if ((((LATC_Test_Calc_DW.Memory28_PreviousInput <= -0.3) &&
          (LATC_Test_Calc_DW.Memory34_PreviousInput > -0.3) &&
          (LATC_Test_Calc_DW.Memory35_PreviousInput > 0.0F)) ||
         ((LATC_Test_Calc_DW.Memory28_PreviousInput >= 0.3) &&
          (LATC_Test_Calc_DW.Memory34_PreviousInput < 0.3) &&
          (LATC_Test_Calc_DW.Memory35_PreviousInput < 0.0F))) &&
        (LATC_Test_Calc_DW.Memory24_PreviousInput > 0.0) &&
        (LATC_Test_Calc_DW.Memory24_PreviousInput < 0.16)) {
      LATC_Test_Calc_DW.Memory38_PreviousInput = 0.15;
    }

    /* End of MATLAB Function: '<S63>/transBrakeToDrive' */

    /* MATLAB Function: '<S58>/alpSumSlideCurveness' */
    t_dy = fabsf(LATC_Test_Calc_DW.Memory35_PreviousInput);
    if (t_dy < 0.01) {
      rtb_vxwCorrFL = 65535.0F;
    } else {
      rtb_vxwCorrFL = fminf(400.0F / t_dy, 65535.0F);
    }

    rtb_CosOfPsi = fabs(rtb_CosOfPsi);
    if (rtb_CosOfPsi < 0.003) {
      rtb_CosOfPsi = 0.0;
    }

    /* Update for UnitDelay: '<S110>/Unit Delay5' */
    memcpy(&LATC_Test_Calc_DW.UnitDelay5_DSTATE[0], &LeftLinePointX[0], 300U *
           sizeof(real32_T));

    /* Update for UnitDelay: '<S110>/Unit Delay4' */
    memcpy(&LATC_Test_Calc_DW.UnitDelay4_DSTATE[0], &LeftLinePointY[0], 300U *
           sizeof(real32_T));

    /* Update for UnitDelay: '<S110>/Unit Delay3' */
    memcpy(&LATC_Test_Calc_DW.UnitDelay3_DSTATE[0], &CenterLinePointX[0], 300U *
           sizeof(real32_T));

    /* Update for UnitDelay: '<S110>/Unit Delay2' */
    memcpy(&LATC_Test_Calc_DW.UnitDelay2_DSTATE[0], &CenterLinePointY[0], 300U *
           sizeof(real32_T));

    /* Update for UnitDelay: '<S110>/Unit Delay1' */
    memcpy(&LATC_Test_Calc_DW.UnitDelay1_DSTATE[0], &RightLinePointX[0], 300U *
           sizeof(real32_T));

    /* Update for UnitDelay: '<S110>/Unit Delay' */
    memcpy(&LATC_Test_Calc_DW.UnitDelay_DSTATE[0], &RightLinePointY[0], 300U *
           sizeof(real32_T));

    /* Update for Memory: '<S58>/Memory2' */
    LATC_Test_Calc_DW.Memory2_PreviousInput_h =
      LATC_Test_Calc_DW.Memory3_PreviousInput;

    /* Update for Memory: '<S63>/Memory2' incorporates:
     *  Constant: '<S74>/Constant11'
     *  Product: '<S74>/FilterTime3'
     *  Sum: '<S74>/Sum4'
     */
    LATC_Test_Calc_DW.Memory2_PreviousInput_d = (t_Psi - LATC_Test_Calc_B.Sum7) /
      15.5 / 57.3;

    /* Update for Memory: '<S63>/Memory37' */
    LATC_Test_Calc_DW.Memory37_PreviousInput =
      LATC_Test_Calc_DW.Memory35_PreviousInput;

    /* Update for Memory: '<S63>/Memory39' */
    LATC_Test_Calc_DW.Memory39_PreviousInput =
      LATC_Test_Calc_DW.Memory36_PreviousInput;

    /* Update for Memory: '<S63>/Memory23' */
    LATC_Test_Calc_DW.Memory23_PreviousInput = LATC_Test_Calc_B.vxvRefRaw;

    /* Update for Memory: '<S63>/Memory21' */
    LATC_Test_Calc_DW.Memory21_PreviousInput = t_dx;

    /* Update for Memory: '<S63>/Memory1' incorporates:
     *  Constant: '<S63>/Fak0125sVrefTol'
     */
    LATC_Test_Calc_DW.Memory1_PreviousInput_m = 0.0F;

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X[3] = LATC_Test_Calc_DW.TappedDelay_X[2];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay1' */
    LATC_Test_Calc_DW.TappedDelay1_X[3] = LATC_Test_Calc_DW.TappedDelay1_X[2];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay2' */
    LATC_Test_Calc_DW.TappedDelay2_X[3] = LATC_Test_Calc_DW.TappedDelay2_X[2];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay3' */
    LATC_Test_Calc_DW.TappedDelay3_X[3] = LATC_Test_Calc_DW.TappedDelay3_X[2];

    /* Update for S-Function (sfix_udelay): '<S61>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X_f[3] = LATC_Test_Calc_DW.TappedDelay_X_f[2];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay8' */
    LATC_Test_Calc_DW.TappedDelay8_X[3] = LATC_Test_Calc_DW.TappedDelay8_X[2];

    /* Update for S-Function (sfix_udelay): '<S67>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X_l[3] = LATC_Test_Calc_DW.TappedDelay_X_l[2];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X[2] = LATC_Test_Calc_DW.TappedDelay_X[1];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay1' */
    LATC_Test_Calc_DW.TappedDelay1_X[2] = LATC_Test_Calc_DW.TappedDelay1_X[1];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay2' */
    LATC_Test_Calc_DW.TappedDelay2_X[2] = LATC_Test_Calc_DW.TappedDelay2_X[1];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay3' */
    LATC_Test_Calc_DW.TappedDelay3_X[2] = LATC_Test_Calc_DW.TappedDelay3_X[1];

    /* Update for S-Function (sfix_udelay): '<S61>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X_f[2] = LATC_Test_Calc_DW.TappedDelay_X_f[1];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay8' */
    LATC_Test_Calc_DW.TappedDelay8_X[2] = LATC_Test_Calc_DW.TappedDelay8_X[1];

    /* Update for S-Function (sfix_udelay): '<S67>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X_l[2] = LATC_Test_Calc_DW.TappedDelay_X_l[1];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X[1] = LATC_Test_Calc_DW.TappedDelay_X[0];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay1' */
    LATC_Test_Calc_DW.TappedDelay1_X[1] = LATC_Test_Calc_DW.TappedDelay1_X[0];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay2' */
    LATC_Test_Calc_DW.TappedDelay2_X[1] = LATC_Test_Calc_DW.TappedDelay2_X[0];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay3' */
    LATC_Test_Calc_DW.TappedDelay3_X[1] = LATC_Test_Calc_DW.TappedDelay3_X[0];

    /* Update for S-Function (sfix_udelay): '<S61>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X_f[1] = LATC_Test_Calc_DW.TappedDelay_X_f[0];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay8' */
    LATC_Test_Calc_DW.TappedDelay8_X[1] = LATC_Test_Calc_DW.TappedDelay8_X[0];

    /* Update for S-Function (sfix_udelay): '<S67>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X_l[1] = LATC_Test_Calc_DW.TappedDelay_X_l[0];

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X[0] = LATC_Test_Calc_B.Gain;

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay1' */
    LATC_Test_Calc_DW.TappedDelay1_X[0] = LATC_Test_Calc_B.Gain1;

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay2' */
    LATC_Test_Calc_DW.TappedDelay2_X[0] = LATC_Test_Calc_B.Gain2;

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay3' */
    LATC_Test_Calc_DW.TappedDelay3_X[0] = LATC_Test_Calc_B.Gain3;

    /* Update for S-Function (sfix_udelay): '<S61>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X_f[0] = LATC_Test_Calc_B.VehDynYawRate;

    /* Update for S-Function (sfix_udelay): '<S63>/Tapped Delay8' */
    LATC_Test_Calc_DW.TappedDelay8_X[0] = LATC_Test_Calc_B.vxvRefRaw;

    /* Update for S-Function (sfix_udelay): '<S67>/Tapped Delay' */
    LATC_Test_Calc_DW.TappedDelay_X_l[0] = LATC_Test_Calc_B.LongitudeAcc;

    /* Update for Memory: '<S67>/Memory' */
    LATC_Test_Calc_DW.Memory_PreviousInput_c =
      LATC_Test_Calc_DW.Memory35_PreviousInput;

    /* MATLAB Function: '<S59>/MATLAB Function' incorporates:
     *  Constant: '<S59>/ErrorLimt'
     */
    if ((LATC_Test_Calc_DW.Memory34_PreviousInput == 0.0F) &&
        (LATC_Test_Calc_DW.Memory35_PreviousInput == 0.0F)) {
      /* Update for Memory: '<S59>/Memory3' */
      LATC_Test_Calc_DW.Memory3_PreviousInput_j = 0.0F;
    } else {
      if (fabsf((real32_T)LATC_Test_Calc_DW.Memory2_PreviousInput -
                LATC_Test_Calc_DW.Memory34_PreviousInput) < 0.15) {
        t_dy = ((real32_T)LATC_Test_Calc_DW.Memory2_PreviousInput +
                LATC_Test_Calc_DW.Memory34_PreviousInput) * 0.5F;
      } else {
        t_dy = LATC_Test_Calc_DW.Memory34_PreviousInput;
      }

      /* Update for Memory: '<S59>/Memory3' */
      LATC_Test_Calc_DW.Memory3_PreviousInput_j += (t_dy -
        LATC_Test_Calc_DW.Memory3_PreviousInput_j) * 0.25F;
    }

    /* End of MATLAB Function: '<S59>/MATLAB Function' */

    /* Update for Memory: '<S58>/Memory' */
    LATC_Test_Calc_DW.Memory_PreviousInput = PsiDtInF;

    /* Update for Memory: '<S58>/Memory4' incorporates:
     *  MATLAB Function: '<S58>/alpSumSlideCurveness'
     */
    LATC_Test_Calc_DW.Memory4_PreviousInput_n = fminf(((real32_T)rtb_CosOfPsi -
      LATC_Test_Calc_DW.Memory4_PreviousInput_n / rtb_vxwCorrFL) * 0.02F +
      LATC_Test_Calc_DW.Memory4_PreviousInput_n, 2.0F);

    /* Update for Memory: '<S63>/Memory30' */
    LATC_Test_Calc_DW.Memory30_PreviousInput =
      LATC_Test_Calc_DW.Memory31_PreviousInput;

    /* Update for Memory: '<S63>/Memory25' */
    LATC_Test_Calc_DW.Memory25_PreviousInput =
      LATC_Test_Calc_DW.Memory36_PreviousInput;

    /* Update for Memory: '<S63>/Memory27' */
    LATC_Test_Calc_DW.Memory27_PreviousInput =
      LATC_Test_Calc_DW.Memory38_PreviousInput;

    /* Update for Memory: '<S63>/Memory28' */
    LATC_Test_Calc_DW.Memory28_PreviousInput =
      LATC_Test_Calc_DW.Memory34_PreviousInput;

    /* Update for S-Function (sfix_udelay): '<S74>/Tapped Delay4' */
    for (i = 0; i < 8; i++) {
      LATC_Test_Calc_DW.TappedDelay4_X[8 - i] =
        LATC_Test_Calc_DW.TappedDelay4_X[7 - i];
    }

    LATC_Test_Calc_DW.TappedDelay4_X[0] = LATC_Test_Calc_B.DataTypeConversion_d;

    /* End of Update for S-Function (sfix_udelay): '<S74>/Tapped Delay4' */

    /* Update for Enabled SubSystem: '<S74>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S104>/Enable'
     */
    if (rtb_Compare) {
      /* Update for Memory: '<S104>/Memory4' */
      LATC_Test_Calc_DW.Memory4_PreviousInput = LATC_Test_Calc_B.Sum7;
    }

    /* End of Update for SubSystem: '<S74>/Enabled Subsystem' */
    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Generator 20ms1' */
  }

  /* End of RateTransition generated from: '<Root>/Rate Transition1' */
}

/* Model update function */
static void LATC_Test_Calc_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++LATC_Test_Calc_M->Timing.clockTick0)) {
    ++LATC_Test_Calc_M->Timing.clockTickH0;
  }

  LATC_Test_Calc_M->Timing.t[0] = LATC_Test_Calc_M->Timing.clockTick0 *
    LATC_Test_Calc_M->Timing.stepSize0 + LATC_Test_Calc_M->Timing.clockTickH0 *
    LATC_Test_Calc_M->Timing.stepSize0 * 4294967296.0;
  if (LATC_Test_Calc_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update absolute timer for sample time: [0.02s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++LATC_Test_Calc_M->Timing.clockTick1)) {
      ++LATC_Test_Calc_M->Timing.clockTickH1;
    }

    LATC_Test_Calc_M->Timing.t[1] = LATC_Test_Calc_M->Timing.clockTick1 *
      LATC_Test_Calc_M->Timing.stepSize1 + LATC_Test_Calc_M->Timing.clockTickH1 *
      LATC_Test_Calc_M->Timing.stepSize1 * 4294967296.0;
  }

  rate_scheduler();
}

/* Model initialize function */
static void LATC_Test_Calc_initialize(void)
{
  /* Start for S-Function (fcgen): '<Root>/Function-Call Generator 20ms2' incorporates:
   *  SubSystem: '<Root>/InputSignal1'
   */
  /* Start for Atomic SubSystem: '<S1>/CANapeIO_Veh icleRX_AD2' */
  /* Start for S-Function (cnpenvin): '<S4>/S-Function' */
  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S5>/S-Function' */
  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S8>/S-Function' */
  /* Level2 S-Function Block: '<S8>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S12>/S-Function' */
  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S14>/S-Function' */
  /* Level2 S-Function Block: '<S14>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S16>/S-Function' */
  /* Level2 S-Function Block: '<S16>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S17>/S-Function' */
  /* Level2 S-Function Block: '<S17>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S18>/S-Function' */
  /* Level2 S-Function Block: '<S18>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S19>/S-Function' */
  /* Level2 S-Function Block: '<S19>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S20>/S-Function' */
  /* Level2 S-Function Block: '<S20>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[27];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S21>/S-Function' */
  /* Level2 S-Function Block: '<S21>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[28];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S22>/S-Function' */
  /* Level2 S-Function Block: '<S22>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[29];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S23>/S-Function' */
  /* Level2 S-Function Block: '<S23>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[30];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S24>/S-Function' */
  /* Level2 S-Function Block: '<S24>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[31];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S25>/S-Function' */
  /* Level2 S-Function Block: '<S25>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[32];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S26>/S-Function' */
  /* Level2 S-Function Block: '<S26>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[33];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S27>/S-Function' */
  /* Level2 S-Function Block: '<S27>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[34];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S28>/S-Function' */
  /* Level2 S-Function Block: '<S28>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[35];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S29>/S-Function' */
  /* Level2 S-Function Block: '<S29>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[36];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S30>/S-Function' */
  /* Level2 S-Function Block: '<S30>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[37];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S31>/S-Function' */
  /* Level2 S-Function Block: '<S31>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[38];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S32>/S-Function' */
  /* Level2 S-Function Block: '<S32>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[39];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S33>/S-Function' */
  /* Level2 S-Function Block: '<S33>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[40];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S34>/S-Function' */
  /* Level2 S-Function Block: '<S34>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[41];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S35>/S-Function' */
  /* Level2 S-Function Block: '<S35>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[42];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S36>/S-Function' */
  /* Level2 S-Function Block: '<S36>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[43];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S37>/S-Function' */
  /* Level2 S-Function Block: '<S37>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[44];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S38>/S-Function' */
  /* Level2 S-Function Block: '<S38>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[45];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S39>/S-Function' */
  /* Level2 S-Function Block: '<S39>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[46];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S40>/S-Function' */
  /* Level2 S-Function Block: '<S40>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[47];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S41>/S-Function' */
  /* Level2 S-Function Block: '<S41>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[48];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S42>/S-Function' */
  /* Level2 S-Function Block: '<S42>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[49];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S43>/S-Function' */
  /* Level2 S-Function Block: '<S43>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[50];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S44>/S-Function' */
  /* Level2 S-Function Block: '<S44>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[51];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S45>/S-Function' */
  /* Level2 S-Function Block: '<S45>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[52];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S46>/S-Function' */
  /* Level2 S-Function Block: '<S46>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[53];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S47>/S-Function' */
  /* Level2 S-Function Block: '<S47>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[54];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S48>/S-Function' */
  /* Level2 S-Function Block: '<S48>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[55];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S49>/S-Function' */
  /* Level2 S-Function Block: '<S49>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[56];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S1>/CANapeIO_Veh icleRX_AD2' */
  /* End of Start for S-Function (fcgen): '<Root>/Function-Call Generator 20ms2' */

  /* Start for S-Function (fcgen): '<Root>/Function-Call Generator 20ms1' incorporates:
   *  SubSystem: '<Root>/LFunc'
   */
  /* Start for S-Function (cnpenvin): '<S51>/S-Function' */
  /* Level2 S-Function Block: '<S51>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S52>/S-Function' */
  /* Level2 S-Function Block: '<S52>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S53>/S-Function' */
  /* Level2 S-Function Block: '<S53>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S54>/S-Function' */
  /* Level2 S-Function Block: '<S54>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S55>/S-Function' */
  /* Level2 S-Function Block: '<S55>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S111>/S-Function' */
  /* Level2 S-Function Block: '<S111>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S112>/S-Function' */
  /* Level2 S-Function Block: '<S112>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S113>/S-Function' */
  /* Level2 S-Function Block: '<S113>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S56>/S-Function' */
  /* Level2 S-Function Block: '<S56>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S108>/S-Function' */
  /* Level2 S-Function Block: '<S108>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S109>/S-Function' */
  /* Level2 S-Function Block: '<S109>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for S-Function (fcgen): '<Root>/Function-Call Generator 20ms1' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator 20ms2' incorporates:
   *  SubSystem: '<Root>/InputSignal1'
   */
  /* SystemInitialize for S-Function (cnpenvin): '<S29>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_pw = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S27>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_pl = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S45>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_h = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S30>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_k1 = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S28>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_gt = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S46>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_o4 = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S21>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_e = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S23>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_pv = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S22>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_fj = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S24>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_di = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S26>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_ph = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S25>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_jf = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S34>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_gf = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S36>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_i = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S35>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_je = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S37>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_kr = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S39>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_fi = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S38>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_c0 = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S5>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_m = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S7>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_d = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S48>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_a = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S47>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_m2 = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S4>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1 = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S18>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_k = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S20>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_d4 = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S31>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_gq = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S44>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_oz = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S33>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_kz = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S6>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_n = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S19>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_gp = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S32>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_c = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S49>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_pz = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S40>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_nk = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S41>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_if = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S42>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_bf = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S43>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_fv = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S8>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_o = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S9>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_g = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S17>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_go = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S10>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_j = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S11>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_da = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S12>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_jg = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S13>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_p = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S14>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_b = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S15>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_gn = 0.0;

  /* SystemInitialize for S-Function (cnpenvin): '<S16>/S-Function' incorporates:
   *  Outport: '<S1>/VCAN'
   */
  LATC_Test_Calc_B.SFunction_o1_f = 0.0;

  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator 20ms2' */

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator 20ms1' incorporates:
   *  SubSystem: '<Root>/LFunc'
   */
  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay5' */
  memset(&LATC_Test_Calc_DW.UnitDelay5_DSTATE[0], 0, 300U * sizeof(real32_T));

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay4' */
  memset(&LATC_Test_Calc_DW.UnitDelay4_DSTATE[0], 0, 300U * sizeof(real32_T));

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay3' */
  memset(&LATC_Test_Calc_DW.UnitDelay3_DSTATE[0], 0, 300U * sizeof(real32_T));

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay2' */
  memset(&LATC_Test_Calc_DW.UnitDelay2_DSTATE[0], 0, 300U * sizeof(real32_T));

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay1' */
  memset(&LATC_Test_Calc_DW.UnitDelay1_DSTATE[0], 0, 300U * sizeof(real32_T));

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay' */
  memset(&LATC_Test_Calc_DW.UnitDelay_DSTATE[0], 0, 300U * sizeof(real32_T));

  /* InitializeConditions for Memory: '<S65>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S58>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_h = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_d = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory31' */
  LATC_Test_Calc_DW.Memory31_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory34' */
  LATC_Test_Calc_DW.Memory34_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S63>/Memory35' */
  LATC_Test_Calc_DW.Memory35_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S63>/Memory36' */
  LATC_Test_Calc_DW.Memory36_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory37' */
  LATC_Test_Calc_DW.Memory37_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S63>/Memory39' */
  LATC_Test_Calc_DW.Memory39_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory38' */
  LATC_Test_Calc_DW.Memory38_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory23' */
  LATC_Test_Calc_DW.Memory23_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S63>/Memory22' */
  LATC_Test_Calc_DW.Memory22_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S63>/Memory21' */
  LATC_Test_Calc_DW.Memory21_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S63>/Memory29' */
  LATC_Test_Calc_DW.Memory29_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S63>/Memory33' */
  LATC_Test_Calc_DW.Memory33_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S63>/Memory1' */
  LATC_Test_Calc_DW.Memory1_PreviousInput_m = 0.0F;

  /* InitializeConditions for Memory: '<S68>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_n = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X[0] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[0] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[0] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay3' */
  LATC_Test_Calc_DW.TappedDelay3_X[0] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S61>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X_f[0] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay8' */
  LATC_Test_Calc_DW.TappedDelay8_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S67>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X_l[0] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X[1] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[1] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[1] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay3' */
  LATC_Test_Calc_DW.TappedDelay3_X[1] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S61>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X_f[1] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay8' */
  LATC_Test_Calc_DW.TappedDelay8_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S67>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X_l[1] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X[2] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[2] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[2] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay3' */
  LATC_Test_Calc_DW.TappedDelay3_X[2] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S61>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X_f[2] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay8' */
  LATC_Test_Calc_DW.TappedDelay8_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S67>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X_l[2] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X[3] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[3] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[3] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay3' */
  LATC_Test_Calc_DW.TappedDelay3_X[3] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S61>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X_f[3] = 0.0;

  /* InitializeConditions for S-Function (sfix_udelay): '<S63>/Tapped Delay8' */
  LATC_Test_Calc_DW.TappedDelay8_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S67>/Tapped Delay' */
  LATC_Test_Calc_DW.TappedDelay_X_l[3] = 0.0;

  /* InitializeConditions for Memory: '<S67>/Memory' */
  LATC_Test_Calc_DW.Memory_PreviousInput_c = 0.0F;

  /* InitializeConditions for Memory: '<S67>/Memory1' */
  LATC_Test_Calc_DW.Memory1_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S67>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_dn = 0.0;

  /* InitializeConditions for Memory: '<S59>/Memory3' */
  LATC_Test_Calc_DW.Memory3_PreviousInput_j = 0.0F;

  /* InitializeConditions for Memory: '<S58>/Memory' */
  LATC_Test_Calc_DW.Memory_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S58>/Memory1' */
  LATC_Test_Calc_DW.Memory1_PreviousInput_o = 0.0;

  /* InitializeConditions for Memory: '<S58>/Memory4' */
  LATC_Test_Calc_DW.Memory4_PreviousInput_n = 0.0F;

  /* InitializeConditions for Memory: '<S63>/Memory30' */
  LATC_Test_Calc_DW.Memory30_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory24' */
  LATC_Test_Calc_DW.Memory24_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory25' */
  LATC_Test_Calc_DW.Memory25_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory26' */
  LATC_Test_Calc_DW.Memory26_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory27' */
  LATC_Test_Calc_DW.Memory27_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S63>/Memory28' */
  LATC_Test_Calc_DW.Memory28_PreviousInput = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S74>/Tapped Delay4' */
  memset(&LATC_Test_Calc_DW.TappedDelay4_X[0], 0, 9U * sizeof(real_T));

  /* InitializeConditions for UnitDelay: '<S74>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE_k = 0.0F;

  /* SystemInitialize for Atomic SubSystem: '<S58>/PsiDtStandstillCalc' */
  /* InitializeConditions for Memory: '<S62>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_dk = 0.0;

  /* InitializeConditions for Memory: '<S62>/Memory3' */
  LATC_Test_Calc_DW.Memory3_PreviousInput = 0.0;

  /* End of SystemInitialize for SubSystem: '<S58>/PsiDtStandstillCalc' */

  /* SystemInitialize for Enabled SubSystem: '<S74>/Enabled Subsystem' */
  /* InitializeConditions for Memory: '<S104>/Memory4' */
  LATC_Test_Calc_DW.Memory4_PreviousInput = 2.3;

  /* SystemInitialize for Sum: '<S104>/Sum7' incorporates:
   *  Outport: '<S104>/SteerAngleOffset_deg'
   */
  LATC_Test_Calc_B.Sum7 = 0.0;

  /* End of SystemInitialize for SubSystem: '<S74>/Enabled Subsystem' */
  /* End of SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Generator 20ms1' */
}

/* Model terminate function */
static void LATC_Test_Calc_terminate(void)
{
  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator 20ms2' incorporates:
   *  SubSystem: '<Root>/InputSignal1'
   */
  /* Terminate for Atomic SubSystem: '<S1>/CANapeIO_Veh icleRX_AD2' */
  /* Terminate for S-Function (cnpenvin): '<S4>/S-Function' */
  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S5>/S-Function' */
  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S8>/S-Function' */
  /* Level2 S-Function Block: '<S8>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S12>/S-Function' */
  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S14>/S-Function' */
  /* Level2 S-Function Block: '<S14>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S16>/S-Function' */
  /* Level2 S-Function Block: '<S16>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S17>/S-Function' */
  /* Level2 S-Function Block: '<S17>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S18>/S-Function' */
  /* Level2 S-Function Block: '<S18>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S19>/S-Function' */
  /* Level2 S-Function Block: '<S19>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S20>/S-Function' */
  /* Level2 S-Function Block: '<S20>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S21>/S-Function' */
  /* Level2 S-Function Block: '<S21>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S22>/S-Function' */
  /* Level2 S-Function Block: '<S22>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S23>/S-Function' */
  /* Level2 S-Function Block: '<S23>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S24>/S-Function' */
  /* Level2 S-Function Block: '<S24>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S25>/S-Function' */
  /* Level2 S-Function Block: '<S25>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S26>/S-Function' */
  /* Level2 S-Function Block: '<S26>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S27>/S-Function' */
  /* Level2 S-Function Block: '<S27>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[34];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S28>/S-Function' */
  /* Level2 S-Function Block: '<S28>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[35];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S29>/S-Function' */
  /* Level2 S-Function Block: '<S29>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[36];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S30>/S-Function' */
  /* Level2 S-Function Block: '<S30>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[37];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S31>/S-Function' */
  /* Level2 S-Function Block: '<S31>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[38];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S32>/S-Function' */
  /* Level2 S-Function Block: '<S32>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[39];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S33>/S-Function' */
  /* Level2 S-Function Block: '<S33>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[40];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S34>/S-Function' */
  /* Level2 S-Function Block: '<S34>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[41];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S35>/S-Function' */
  /* Level2 S-Function Block: '<S35>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[42];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S36>/S-Function' */
  /* Level2 S-Function Block: '<S36>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[43];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S37>/S-Function' */
  /* Level2 S-Function Block: '<S37>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[44];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S38>/S-Function' */
  /* Level2 S-Function Block: '<S38>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[45];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S39>/S-Function' */
  /* Level2 S-Function Block: '<S39>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[46];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S40>/S-Function' */
  /* Level2 S-Function Block: '<S40>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[47];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S41>/S-Function' */
  /* Level2 S-Function Block: '<S41>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[48];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S42>/S-Function' */
  /* Level2 S-Function Block: '<S42>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[49];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S43>/S-Function' */
  /* Level2 S-Function Block: '<S43>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[50];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S44>/S-Function' */
  /* Level2 S-Function Block: '<S44>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[51];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S45>/S-Function' */
  /* Level2 S-Function Block: '<S45>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[52];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S46>/S-Function' */
  /* Level2 S-Function Block: '<S46>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[53];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S47>/S-Function' */
  /* Level2 S-Function Block: '<S47>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[54];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S48>/S-Function' */
  /* Level2 S-Function Block: '<S48>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[55];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S49>/S-Function' */
  /* Level2 S-Function Block: '<S49>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[56];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S1>/CANapeIO_Veh icleRX_AD2' */
  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator 20ms2' */

  /* Terminate for S-Function (fcgen): '<Root>/Function-Call Generator 20ms1' incorporates:
   *  SubSystem: '<Root>/LFunc'
   */
  /* Terminate for S-Function (cnpenvin): '<S51>/S-Function' */
  /* Level2 S-Function Block: '<S51>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S52>/S-Function' */
  /* Level2 S-Function Block: '<S52>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S53>/S-Function' */
  /* Level2 S-Function Block: '<S53>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S54>/S-Function' */
  /* Level2 S-Function Block: '<S54>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S55>/S-Function' */
  /* Level2 S-Function Block: '<S55>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S111>/S-Function' */
  /* Level2 S-Function Block: '<S111>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S112>/S-Function' */
  /* Level2 S-Function Block: '<S112>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S113>/S-Function' */
  /* Level2 S-Function Block: '<S113>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S56>/S-Function' */
  /* Level2 S-Function Block: '<S56>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S108>/S-Function' */
  /* Level2 S-Function Block: '<S108>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S109>/S-Function' */
  /* Level2 S-Function Block: '<S109>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* End of Terminate for S-Function (fcgen): '<Root>/Function-Call Generator 20ms1' */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  LATC_Test_Calc_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  LATC_Test_Calc_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  LATC_Test_Calc_initialize();
}

void MdlTerminate(void)
{
  LATC_Test_Calc_terminate();
}

/* Registration function */
RT_MODEL_LATC_Test_Calc_T *LATC_Test_Calc(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)LATC_Test_Calc_M, 0,
                sizeof(RT_MODEL_LATC_Test_Calc_T));
  rtsiSetSolverName(&LATC_Test_Calc_M->solverInfo,"FixedStepDiscrete");
  LATC_Test_Calc_M->solverInfoPtr = (&LATC_Test_Calc_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = LATC_Test_Calc_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "LATC_Test_Calc_M points to
       static memory which is guaranteed to be non-NULL" */
    LATC_Test_Calc_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    LATC_Test_Calc_M->Timing.sampleTimes =
      (&LATC_Test_Calc_M->Timing.sampleTimesArray[0]);
    LATC_Test_Calc_M->Timing.offsetTimes =
      (&LATC_Test_Calc_M->Timing.offsetTimesArray[0]);

    /* task periods */
    LATC_Test_Calc_M->Timing.sampleTimes[0] = (0.01);
    LATC_Test_Calc_M->Timing.sampleTimes[1] = (0.02);

    /* task offsets */
    LATC_Test_Calc_M->Timing.offsetTimes[0] = (0.0);
    LATC_Test_Calc_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(LATC_Test_Calc_M, &LATC_Test_Calc_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = LATC_Test_Calc_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    LATC_Test_Calc_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(LATC_Test_Calc_M, -1);
  LATC_Test_Calc_M->Timing.stepSize0 = 0.01;
  LATC_Test_Calc_M->Timing.stepSize1 = 0.02;
  LATC_Test_Calc_M->solverInfoPtr = (&LATC_Test_Calc_M->solverInfo);
  LATC_Test_Calc_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&LATC_Test_Calc_M->solverInfo, 0.01);
  rtsiSetSolverMode(&LATC_Test_Calc_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  LATC_Test_Calc_M->blockIO = ((void *) &LATC_Test_Calc_B);
  (void) memset(((void *) &LATC_Test_Calc_B), 0,
                sizeof(B_LATC_Test_Calc_T));

  /* states (dwork) */
  LATC_Test_Calc_M->dwork = ((void *) &LATC_Test_Calc_DW);
  (void) memset((void *)&LATC_Test_Calc_DW, 0,
                sizeof(DW_LATC_Test_Calc_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &LATC_Test_Calc_M->NonInlinedSFcns.sfcnInfo;
    LATC_Test_Calc_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(LATC_Test_Calc_M)));
    LATC_Test_Calc_M->Sizes.numSampTimes = (2);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &LATC_Test_Calc_M->Sizes.numSampTimes);
    LATC_Test_Calc_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (LATC_Test_Calc_M)[0]);
    LATC_Test_Calc_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (LATC_Test_Calc_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,LATC_Test_Calc_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(LATC_Test_Calc_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(LATC_Test_Calc_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (LATC_Test_Calc_M));
    rtssSetStepSizePtr(sfcnInfo, &LATC_Test_Calc_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(LATC_Test_Calc_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &LATC_Test_Calc_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &LATC_Test_Calc_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &LATC_Test_Calc_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &LATC_Test_Calc_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &LATC_Test_Calc_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &LATC_Test_Calc_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &LATC_Test_Calc_M->solverInfoPtr);
  }

  LATC_Test_Calc_M->Sizes.numSFcns = (57);

  /* register each child */
  {
    (void) memset((void *)&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  57*sizeof(SimStruct));
    LATC_Test_Calc_M->childSfunctions =
      (&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 57; i++) {
        LATC_Test_Calc_M->childSfunctions[i] =
          (&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S51>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &LATC_Test_Calc_B.SFunction_o1_mk));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_f1));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_ap));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LFunc/Trigger_Init/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S52>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_ay));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_l3));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_ae));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LFunc/Trigger_Init1/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S53>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_nx));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_p4));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_hm));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LFunc/Trigger_Init2/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S54>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_l));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ni));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_cl));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LFunc/Trigger_Init3/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S55>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_fp));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_jj));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_j0));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LFunc/Trigger_Init4/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S111>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &LATC_Test_Calc_B.SFunction_o1_oq));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_mv));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_fc));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/LFunc/U_Road_Create/Trigger_Init1/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_m2);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S112>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &LATC_Test_Calc_B.SFunction_o1_hv));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_jb));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_oo));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/LFunc/U_Road_Create/Trigger_Init2/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_a);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S113>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &LATC_Test_Calc_B.SFunction_o1_ox));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_dg));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_m3));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/LFunc/U_Road_Create/Trigger_Init3/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ez);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S56>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_mq));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ik));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_gk));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LFunc/Trigger_Init5/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S108>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.iDims0;

          {
            int_T i1;
            const real_T *u0 = LATC_Test_Calc_B.DataTypeConversion;
            for (i1=0; i1 < 101; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 101;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 101);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LFunc/U_Road_Create/Output6/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S109>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.iDims0;

          {
            int_T i1;
            const real_T *u0 = LATC_Test_Calc_B.DataTypeConversion_g;
            for (i1=0; i1 < 101; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 101;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 101);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LFunc/U_Road_Create/Output7/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S4>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ABSActive/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S5>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_m));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_d));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ABSFailSts/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_m1);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S6>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_n));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_p));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/BTCActive/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S7>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_d));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_l));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EBDFailSts/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_nu);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S8>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_o));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_h));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_DrvInputTrqValue/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S9>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_g));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_h4));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_FailSts/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S10>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_j));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_a));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_lz));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATorqOvrlDlvd/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_o4);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S11>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_da));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_c));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_it));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATorqOvrlDlvdValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S12>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_jg));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_po));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_pt));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_av);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S13>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_p));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_i));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts1/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_lt);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S14>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[21]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_b));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_m));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_b0));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts3/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_dx);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S15>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[22]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_gn));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_o));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_lq));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts4/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S16>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[23]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[23]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[23]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_f));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_n));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts5/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_kh);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S17>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[24]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[24]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[24]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_go));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_if));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_SteerMod/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ih);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S18>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[25]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[25]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[25]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_k));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_dt));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ESPFailSts/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_a3);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S19>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[26]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[26]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[26]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_gp));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_g));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_a1));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ESP_MasterCylindBrakePress/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_f2);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S20>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[27]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[27]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[27]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_d4));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_lk));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ESP_MasterCylindBrakePressValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_le);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S21>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[28]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[28]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[28]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[28]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_e));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_lv));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_of));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FLWheelDriveDirection/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_pd);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S22>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[29]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[29]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[29]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[29]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[29]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_fj));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_o1));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FLWheelSpd/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S23>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[30]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[30]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[30]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[30]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[30]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_pv));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_k));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_c));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FLWheelSpdValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S24>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[31]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[31]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[31]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[31]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[31]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_di));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ao));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_bd));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FRWheelDriveDirection/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_gi);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S25>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[32]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[32]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[32]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[32]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[32]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_jf));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_pa));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FRWheelSpd/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_pn);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S26>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[33]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[33]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[33]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[33]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[33]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_ph));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_an));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_a1v));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FRWheelSpdValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_cc);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S27>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[34]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[34]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[34]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[34]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[34]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_pl));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_av));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_pp));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/LateralAcce/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_li);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S28>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[35];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn35.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn35.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn35.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[35]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[35]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[35]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[35]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[35]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[35]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[35]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn35.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn35.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn35.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn35.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_gt));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_cr));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_db));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/LateralAcceValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn35.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_pdc);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S29>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[36];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn36.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn36.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn36.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[36]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[36]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[36]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[36]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[36]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[36]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[36]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn36.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn36.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn36.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn36.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_pw));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_j));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_l0));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/LongitudeAcc/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn36.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ii);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S30>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[37];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn37.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn37.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn37.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[37]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[37]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[37]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[37]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[37]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[37]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[37]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn37.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn37.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn37.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn37.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_k1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ky));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_pk));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/LongitudeAccValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn37.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_i4);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S31>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[38];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn38.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn38.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn38.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[38]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[38]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[38]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[38]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[38]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[38]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[38]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn38.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn38.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn38.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn38.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_gq));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_it));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_jf));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/MSRActive/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn38.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_cx);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S32>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[39];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn39.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn39.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn39.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[39]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[39]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[39]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[39]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[39]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[39]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[39]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn39.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn39.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn39.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn39.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_c));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_e));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/NoBrakeForce/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn39.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_px);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S33>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[40];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn40.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn40.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn40.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[40]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[40]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[40]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[40]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[40]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[40]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[40]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn40.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn40.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn40.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn40.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_kz));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_b));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_g3));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/PTCActive/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn40.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_g1);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S34>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[41];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn41.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn41.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn41.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[41]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[41]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[41]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[41]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[41]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[41]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[41]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn41.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn41.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn41.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn41.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_gf));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_bf));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_hy));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RLWheelDriveDirection/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn41.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_fz);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S35>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[42];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn42.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn42.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn42.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[42]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[42]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[42]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[42]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[42]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[42]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[42]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn42.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn42.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn42.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn42.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_je));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ij));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_e2));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RLWheelSpd/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn42.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_e0);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S36>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[43];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn43.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn43.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn43.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[43]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[43]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[43]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[43]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[43]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[43]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[43]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn43.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn43.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn43.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn43.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_i));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_iu));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_io));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RLWheelSpdValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn43.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_nl);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S37>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[44];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn44.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn44.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn44.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[44]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[44]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[44]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[44]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[44]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[44]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[44]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn44.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn44.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn44.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn44.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_kr));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_di));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RRWheelDriveDirection/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn44.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_oo);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S38>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[45];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn45.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn45.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn45.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[45]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[45]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[45]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[45]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[45]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[45]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[45]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn45.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn45.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn45.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn45.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_c0));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ay));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_o1));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RRWheelSpd/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn45.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_kt);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S39>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[46];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn46.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn46.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn46.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[46]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[46]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[46]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[46]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[46]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[46]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[46]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn46.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn46.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn46.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn46.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_fi));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_bs));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_py));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RRWheelSpdValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn46.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_kf);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S40>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[47];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn47.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn47.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn47.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[47]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[47]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[47]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[47]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[47]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[47]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[47]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn47.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn47.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn47.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn47.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_nk));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_f));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_kt));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/SteerWheelAngle/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn47.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_pg);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S41>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[48];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn48.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn48.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn48.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[48]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[48]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[48]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[48]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[48]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[48]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[48]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn48.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn48.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn48.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn48.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_if));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ok));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_cb));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/SteerWheelAngleSign/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn48.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_k2);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S42>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[49];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn49.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn49.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn49.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[49]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[49]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[49]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[49]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[49]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[49]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[49]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn49.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn49.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn49.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn49.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_bf));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_b5));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_fn));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/SteerWheelSpd/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn49.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_h4);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S43>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[50];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn50.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn50.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn50.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[50]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[50]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[50]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[50]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[50]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[50]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[50]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn50.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn50.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn50.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn50.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_fv));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_hn));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_go));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/SteerWheelSpdSign/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn50.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ij);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S44>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[51];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn51.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn51.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn51.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[51]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[51]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[51]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[51]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[51]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[51]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[51]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn51.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn51.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn51.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn51.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_oz));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ge));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_de));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VDCActive/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn51.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_di);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S45>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[52];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn52.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn52.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn52.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[52]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[52]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[52]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[52]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[52]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[52]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[52]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn52.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn52.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn52.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn52.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_h));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ch));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_jl));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehDynYawRate/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn52.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_pw);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S46>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[53];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn53.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn53.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn53.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[53]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[53]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[53]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[53]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[53]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[53]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[53]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn53.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn53.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn53.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn53.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_o4));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_fs));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehDynYawRateValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn53.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_nk);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S47>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[54];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn54.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn54.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn54.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[54]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[54]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[54]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[54]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[54]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[54]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[54]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn54.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn54.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn54.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn54.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_m2));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ds));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_gg));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehicleSpd/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn54.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_bu);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S48>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[55];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn55.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn55.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn55.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[55]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[55]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[55]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[55]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[55]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[55]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[55]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn55.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn55.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn55.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn55.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_a));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_nu));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_f5));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehicleSpdValid/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn55.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ex);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S49>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[56];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn56.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn56.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn56.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[56]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[56]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[56]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[56]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[56]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[56]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[56]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn56.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn56.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn56.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn56.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_pz));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ed));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_ioq));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehicleStandstill/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn56.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_hm);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_p);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  LATC_Test_Calc_M->Sizes.numContStates = (0);/* Number of continuous states */
  LATC_Test_Calc_M->Sizes.numY = (0);  /* Number of model outputs */
  LATC_Test_Calc_M->Sizes.numU = (0);  /* Number of model inputs */
  LATC_Test_Calc_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  LATC_Test_Calc_M->Sizes.numSampTimes = (2);/* Number of sample times */
  LATC_Test_Calc_M->Sizes.numBlocks = (341);/* Number of blocks */
  LATC_Test_Calc_M->Sizes.numBlockIO = (206);/* Number of block outputs */
  return LATC_Test_Calc_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
