/*
 * LATC_Test_Calc_data.c
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 3.55
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri Dec 31 09:15:34 2021
 *
 * Target selection: cnp.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LATC_Test_Calc.h"
#include "LATC_Test_Calc_private.h"

/* Invariant block signals (default storage) */
const ConstB_LATC_Test_Calc_T LATC_Test_Calc_ConstB = {
  9.94718361F,                         /* '<S39>/Product4' */
  10.9471836F,                         /* '<S39>/Add' */
  0.0913476944F,                       /* '<S39>/Product2' */
  0.908652306F                         /* '<S39>/Add1' */
};

/* Block parameters (default storage) */
P_LATC_Test_Calc_T LATC_Test_Calc_P = {
  /* Variable: P_LCS_NoOverRideTime_TH_s
   * Referenced by: '<S36>/Constant'
   */
  1.0,

  /* Variable: P_LCS_OverRideTime_TH_s
   * Referenced by: '<S35>/Constant'
   */
  0.5,

  /* Variable: P_LCS_DetNoOverRide_DrvTrq_TH
   * Referenced by: '<S38>/Constant'
   */
  0.7F,

  /* Variable: P_LCS_DetOverRide_DrvTrq_TH
   * Referenced by: '<S37>/Constant'
   */
  1.0F
};

/* Constant parameters (default storage) */
const ConstP_LATC_Test_Calc_T LATC_Test_Calc_ConstP = {
  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S16>/S-Function'
   */
  { 1.0, 15.0 },

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S16>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 118.0, 120.0, 118.0, 82.0, 101.0,
    102.0, 77.0, 115.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S19>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S50>/S-Function'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S19>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S50>/S-Function'
   */
  49.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   */
  { 1.0, 5.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   */
  { 102.0, 108.0, 111.0, 97.0, 116.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   */
  { 1.0, 2.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   */
  { 111.0, 110.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S19>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S50>/S-Function'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S19>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S50>/S-Function'
   */
  48.0,

  /* Computed Parameter: SFunction_P1_Size_m
   * Referenced by: '<S13>/S-Function'
   */
  { 1.0, 20.0 },

  /* Computed Parameter: SFunction_P1_j
   * Referenced by: '<S13>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 83.0, 116.0, 101.0, 101.0, 114.0,
    87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_i
   * Referenced by: '<S14>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P1_l
   * Referenced by: '<S14>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 83.0, 116.0, 101.0, 101.0, 114.0,
    87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0, 83.0, 105.0, 103.0,
    110.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S6>/S-Function'
   *   '<S14>/S-Function'
   */
  { 1.0, 5.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S6>/S-Function'
   *   '<S14>/S-Function'
   */
  { 117.0, 105.0, 110.0, 116.0, 56.0 },

  /* Computed Parameter: SFunction_P1_Size_l
   * Referenced by: '<S11>/S-Function'
   */
  { 1.0, 20.0 },

  /* Computed Parameter: SFunction_P1_g
   * Referenced by: '<S11>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 83.0, 116.0, 101.0, 101.0, 114.0,
    87.0, 104.0, 101.0, 101.0, 108.0, 65.0, 110.0, 103.0 },

  /* Computed Parameter: SFunction_P1_Size_f
   * Referenced by: '<S1>/S-Function'
   */
  { 1.0, 26.0 },

  /* Computed Parameter: SFunction_P1_a
   * Referenced by: '<S1>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 83.0, 116.0, 101.0, 101.0, 114.0,
    87.0, 104.0, 101.0, 101.0, 108.0, 65.0, 110.0, 103.0, 108.0, 101.0, 83.0,
    105.0, 103.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_b
   * Referenced by: '<S15>/S-Function'
   */
  { 1.0, 25.0 },

  /* Computed Parameter: SFunction_P1_m
   * Referenced by: '<S15>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 83.0, 116.0, 101.0, 101.0, 114.0,
    65.0, 110.0, 103.0, 79.0, 102.0, 102.0, 115.0, 101.0, 116.0, 95.0, 100.0,
    101.0, 103.0 },

  /* Computed Parameter: SFunction_P1_Size_g
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 22.0 },

  /* Computed Parameter: SFunction_P1_jy
   * Referenced by: '<S6>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 84.0, 97.0, 114.0, 68.0, 97.0,
    110.0, 103.0, 101.0, 114.0, 108.0, 76.0, 101.0, 118.0, 101.0, 108.0 },

  /* Computed Parameter: SFunction_P1_Size_f0
   * Referenced by: '<S5>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_e
   * Referenced by: '<S5>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 48.0 },

  /* Computed Parameter: SFunction_P1_Size_h
   * Referenced by: '<S9>/S-Function'
   */
  { 1.0, 23.0 },

  /* Computed Parameter: SFunction_P1_o
   * Referenced by: '<S9>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 67.0, 117.0, 114.0, 114.0, 101.0,
    110.0, 116.0, 76.0, 97.0, 110.0, 101.0, 87.0, 105.0, 100.0, 116.0, 104.0 },

  /* Computed Parameter: SFunction_P1_Size_k
   * Referenced by: '<S3>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_p
   * Referenced by: '<S3>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_c
   * Referenced by: '<S4>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_oj
   * Referenced by: '<S4>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 49.0 },

  /* Computed Parameter: SFunction_P1_Size_n
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_pl
   * Referenced by: '<S2>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 51.0 },

  /* Computed Parameter: SFunction_P1_Size_a
   * Referenced by: '<S17>/S-Function'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: SFunction_P1_d
   * Referenced by: '<S17>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 86.0, 97.0, 108.0, 105.0, 100.0 },

  /* Computed Parameter: SFunction_P4_Size_f
   * Referenced by: '<S17>/S-Function'
   */
  { 1.0, 7.0 },

  /* Computed Parameter: SFunction_P4
   * Referenced by: '<S17>/S-Function'
   */
  { 98.0, 111.0, 111.0, 108.0, 101.0, 97.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_d
   * Referenced by: '<S8>/S-Function'
   */
  { 1.0, 31.0 },

  /* Computed Parameter: SFunction_P1_jh
   * Referenced by: '<S8>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 67.0, 117.0, 114.0, 114.0, 101.0, 110.0, 116.0, 83.0,
    116.0, 101.0, 101.0, 114.0, 65.0, 110.0, 103.0, 108.0, 101.0, 79.0, 102.0,
    102.0, 115.0, 101.0, 116.0, 95.0, 100.0, 101.0, 103.0 },

  /* Computed Parameter: SFunction_P1_Size_mn
   * Referenced by: '<S19>/S-Function'
   */
  { 1.0, 20.0 },

  /* Computed Parameter: SFunction_P1_gq
   * Referenced by: '<S19>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 84.0, 97.0, 114.0, 103.0, 101.0, 116.0, 65.0, 110.0,
    103.0, 108.0, 101.0, 95.0, 100.0, 101.0, 103.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_p
   * Referenced by: '<S7>/S-Function'
   */
  { 1.0, 14.0 },

  /* Computed Parameter: SFunction_P1_jr
   * Referenced by: '<S7>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 107.0, 97.0, 112.0, 84.0, 114.0,
    97.0, 106.0 },

  /* Computed Parameter: SFunction_P1_Size_o
   * Referenced by: '<S10>/S-Function'
   */
  { 1.0, 26.0 },

  /* Computed Parameter: SFunction_P1_o3
   * Referenced by: '<S10>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 69.0, 80.0, 83.0, 95.0, 76.0, 75.0,
    65.0, 84.0, 111.0, 114.0, 113.0, 79.0, 118.0, 114.0, 108.0, 68.0, 108.0,
    118.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_n1
   * Referenced by: '<S12>/S-Function'
   */
  { 1.0, 23.0 },

  /* Computed Parameter: SFunction_P1_pq
   * Referenced by: '<S12>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 69.0, 80.0, 83.0, 95.0, 68.0,
    114.0, 118.0, 73.0, 110.0, 112.0, 84.0, 114.0, 113.0, 86.0, 97.0, 108.0 },

  /* Computed Parameter: SFunction_P1_Size_pc
   * Referenced by: '<S24>/S-Function'
   */
  { 1.0, 23.0 },

  /* Computed Parameter: SFunction_P1_b
   * Referenced by: '<S24>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 84.0, 97.0, 114.0, 83.0, 116.0, 101.0, 101.0, 114.0,
    65.0, 110.0, 103.0, 108.0, 101.0, 83.0, 108.0, 111.0, 112.0, 101.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_ct
   * Referenced by: '<S25>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_m2
   * Referenced by: '<S25>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 102.0, 105.0, 110.0, 97.0, 108.0, 80.0, 114.0, 101.0,
    100.0, 105.0, 115.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_ij
   * Referenced by: '<S45>/S-Function'
   */
  { 1.0, 18.0 },

  /* Computed Parameter: SFunction_P1_c
   * Referenced by: '<S45>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 84.0, 97.0, 114.0, 83.0, 116.0, 101.0, 101.0, 114.0,
    65.0, 110.0, 103.0, 108.0, 101.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_iv
   * Referenced by: '<S46>/S-Function'
   */
  { 1.0, 25.0 },

  /* Computed Parameter: SFunction_P1_mb
   * Referenced by: '<S46>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 84.0, 97.0, 114.0, 83.0, 116.0, 101.0, 101.0, 114.0,
    65.0, 110.0, 103.0, 108.0, 101.0, 67.0, 97.0, 108.0, 99.0, 95.0, 78.0, 117.0,
    109.0 },

  /* Computed Parameter: SFunction_P1_Size_oq
   * Referenced by: '<S47>/S-Function'
   */
  { 1.0, 15.0 },

  /* Computed Parameter: SFunction_P1_bj
   * Referenced by: '<S47>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 68.0, 101.0, 108.0, 116.0, 97.0, 65.0, 110.0, 103.0,
    108.0, 101.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_e
   * Referenced by: '<S48>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P1_mx
   * Referenced by: '<S48>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 84.0, 97.0, 114.0, 83.0, 116.0, 101.0, 101.0, 114.0,
    65.0, 110.0, 103.0, 108.0, 101.0, 69.0, 110.0, 100.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_bf
   * Referenced by: '<S49>/S-Function'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: SFunction_P1_ay
   * Referenced by: '<S49>/S-Function'
   */
  { 77.0, 105.0, 110.0, 75.0, 49.0 },

  /* Computed Parameter: SFunction_P1_Size_oh
   * Referenced by: '<S50>/S-Function'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: SFunction_P1_po
   * Referenced by: '<S50>/S-Function'
   */
  { 77.0, 97.0, 120.0, 75.0, 49.0 },

  /* Computed Parameter: tDeltaEpsTable1_tableData
   * Referenced by: '<S28>/tDeltaEpsTable1'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.5F, 0.2F, 0.2F },

  /* Computed Parameter: tDeltaEpsTable1_bp01Data
   * Referenced by: '<S28>/tDeltaEpsTable1'
   */
  { 0.0F, 10.0F, 20.0F, 30.0F, 50.0F, 100.0F, 200.0F, 300.0F },

  /* Computed Parameter: LCS_LC_ELK_preDis_TB1_tableData
   * Referenced by: '<S18>/LCS_LC_ELK_preDis_TB1'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F,
    0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F,
    -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F,
    0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F,
    -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F,
    -0.1F, 0.2F, 0.2F, 0.2F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.35F, 0.35F, 0.35F,
    0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F,
    0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
    0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F,
    0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F,
    -0.5F, -0.55F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F,
    -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, 0.0F, -0.4F, -0.45F, -0.5F,
    -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F,
    -0.5F, -0.5F, -0.5F, -0.5F, 0.0F, -0.25F, -0.3F, -0.35F, -0.35F, -0.35F,
    -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F,
    -0.35F, -0.35F, -0.35F, -0.35F, 0.0F, -0.2F, -0.25F, -0.3F, -0.3F, -0.3F,
    -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F,
    -0.3F, -0.3F, 0.0F, -0.15F, -0.2F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F,
    -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F,
    -0.25F, -0.25F, 0.0F, -0.1F, -0.15F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F,
    -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F,
    0.0F, -0.1F, -0.15F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F,
    -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F },

  /* Computed Parameter: Q1_tableData
   * Referenced by: '<S28>/Q1'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Q1_bp01Data
   * Referenced by: '<S28>/Q1'
   */
  { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 60.0F, 80.0F,
    90.0F, 100.0F, 110.0F, 120.0F, 140.0F },

  /* Computed Parameter: LC_start_slope_maxIndex
   * Referenced by: '<S30>/LC_start_slope'
   */
  { 5U, 14U },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S32>/LC_Complete_slope'
   *   '<S32>/LC_Complete_slope1'
   */
  { 3U, 14U },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S20>/ELK Active'
   *   '<S20>/ESS AES Active'
   *   '<S20>/LC Cancel'
   *   '<S20>/LCK//IE TO LC_Eco'
   *   '<S20>/LCK//IE TO LC_Nomal'
   *   '<S20>/LCK//IE TO LC_Sport'
   *   '<S20>/LCK//IE TO LC_Sport1'
   *   '<S20>/LCKIE_Active'
   *   '<S20>/LKA Active'
   *   '<S20>/No Function 2 LCK'
   *   '<S28>/ESS AES Active'
   */
  { 18U, 11U },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S18>/2-D Lookup Table1'
   *   '<S18>/2-D Lookup Table2'
   *   '<S18>/LCS_LC_ELK_preDis_TB'
   *   '<S18>/LCS_LC_ELK_preDis_TB1'
   *   '<S18>/LCS_LC_ESSAES_preDis_TB'
   *   '<S18>/LCS_LC_ESSAES_preDis_TB1'
   *   '<S18>/LCS_LC_Emergent_preDis_TB'
   *   '<S18>/LC_Medium_preDis_Fac_TB'
   */
  { 18U, 15U },

  /* Computed Parameter: DirectLookupTablenD_table
   * Referenced by: '<S18>/Direct Lookup Table (n-D)'
   */
  { 4U, 4U, 4U, 1U, 4U, 5U, 6U, 2U, 3U, 7U, 8U }
};
