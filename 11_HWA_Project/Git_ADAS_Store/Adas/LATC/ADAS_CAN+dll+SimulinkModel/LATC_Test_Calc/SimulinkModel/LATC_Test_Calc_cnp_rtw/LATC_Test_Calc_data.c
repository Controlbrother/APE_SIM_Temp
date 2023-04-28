/*
 * LATC_Test_Calc_data.c
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 1.47
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Nov 23 10:42:24 2021
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
  0.0F                                 /* '<Root>/Saturation' */
};

/* Constant parameters (default storage) */
const ConstP_LATC_Test_Calc_T LATC_Test_Calc_ConstP = {
  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S11>/S-Function'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S11>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 86.0, 97.0, 108.0, 105.0, 100.0 },

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
   *   '<S21>/S-Function'
   *   '<S22>/S-Function'
   *   '<S23>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S26>/S-Function'
   *   '<S27>/S-Function'
   *   '<S28>/S-Function'
   *   '<S29>/S-Function'
   *   '<S30>/S-Function'
   *   '<S31>/S-Function'
   *   '<S32>/S-Function'
   *   '<S33>/S-Function'
   *   '<S34>/S-Function'
   *   '<S35>/S-Function'
   *   '<S36>/S-Function'
   *   '<S37>/S-Function'
   *   '<S38>/S-Function'
   *   '<S39>/S-Function'
   *   '<S48>/S-Function'
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
   *   '<S21>/S-Function'
   *   '<S22>/S-Function'
   *   '<S23>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S26>/S-Function'
   *   '<S27>/S-Function'
   *   '<S28>/S-Function'
   *   '<S29>/S-Function'
   *   '<S30>/S-Function'
   *   '<S31>/S-Function'
   *   '<S32>/S-Function'
   *   '<S33>/S-Function'
   *   '<S34>/S-Function'
   *   '<S35>/S-Function'
   *   '<S36>/S-Function'
   *   '<S37>/S-Function'
   *   '<S38>/S-Function'
   *   '<S39>/S-Function'
   *   '<S48>/S-Function'
   */
  49.0,

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
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   */
  { 1.0, 5.0 },

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
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
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
   *   '<S21>/S-Function'
   *   '<S22>/S-Function'
   *   '<S23>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S26>/S-Function'
   *   '<S27>/S-Function'
   *   '<S28>/S-Function'
   *   '<S29>/S-Function'
   *   '<S30>/S-Function'
   *   '<S31>/S-Function'
   *   '<S32>/S-Function'
   *   '<S33>/S-Function'
   *   '<S34>/S-Function'
   *   '<S35>/S-Function'
   *   '<S36>/S-Function'
   *   '<S37>/S-Function'
   *   '<S38>/S-Function'
   *   '<S39>/S-Function'
   *   '<S48>/S-Function'
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
   *   '<S21>/S-Function'
   *   '<S22>/S-Function'
   *   '<S23>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S26>/S-Function'
   *   '<S27>/S-Function'
   *   '<S28>/S-Function'
   *   '<S29>/S-Function'
   *   '<S30>/S-Function'
   *   '<S31>/S-Function'
   *   '<S32>/S-Function'
   *   '<S33>/S-Function'
   *   '<S34>/S-Function'
   *   '<S35>/S-Function'
   *   '<S36>/S-Function'
   *   '<S37>/S-Function'
   *   '<S38>/S-Function'
   *   '<S39>/S-Function'
   *   '<S48>/S-Function'
   */
  48.0,

  /* Computed Parameter: SFunction_P1_Size_j
   * Referenced by: '<S12>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P1_h
   * Referenced by: '<S12>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 67.0, 117.0, 114.0, 83.0, 116.0,
    101.0, 101.0, 114.0, 65.0, 110.0, 103.0, 108.0, 101.0, 95.0, 100.0, 101.0,
    103.0 },

  /* Computed Parameter: SFunction_P1_Size_jn
   * Referenced by: '<S14>/S-Function'
   */
  { 1.0, 15.0 },

  /* Computed Parameter: SFunction_P1_l
   * Referenced by: '<S14>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 118.0, 120.0, 118.0, 82.0, 101.0,
    102.0, 77.0, 115.0 },

  /* Computed Parameter: SFunction_P1_Size_n
   * Referenced by: '<S7>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P1_i
   * Referenced by: '<S7>/S-Function'
   */
  { 80.0, 95.0, 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 67.0, 117.0,
    114.0, 101.0, 70.0, 105.0, 108.0, 116.0, 101.0, 114.0, 84.0, 105.0, 109.0,
    101.0 },

  /* Computed Parameter: SFunction_P1_Size_c
   * Referenced by: '<S1>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_hr
   * Referenced by: '<S1>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 48.0 },

  /* Computed Parameter: SFunction_P1_Size_d
   * Referenced by: '<S8>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_p
   * Referenced by: '<S8>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 49.0 },

  /* Computed Parameter: SFunction_P1_Size_b
   * Referenced by: '<S9>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_m
   * Referenced by: '<S9>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_k
   * Referenced by: '<S10>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_d
   * Referenced by: '<S10>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 51.0 },

  /* Computed Parameter: SFunction_P1_Size_l
   * Referenced by: '<S15>/S-Function'
   */
  { 1.0, 15.0 },

  /* Computed Parameter: SFunction_P1_g
   * Referenced by: '<S15>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 112.0, 115.0, 105.0, 68.0, 116.0,
    79.0, 112.0, 116.0 },

  /* Computed Parameter: SFunction_P1_Size_da
   * Referenced by: '<S13>/S-Function'
   */
  { 1.0, 22.0 },

  /* Computed Parameter: SFunction_P1_j
   * Referenced by: '<S13>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 84.0, 97.0, 114.0, 68.0, 97.0,
    110.0, 103.0, 101.0, 114.0, 108.0, 76.0, 101.0, 118.0, 101.0, 108.0 },

  /* Computed Parameter: SFunction_P4_Size_m
   * Referenced by: '<S13>/S-Function'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: SFunction_P4
   * Referenced by: '<S13>/S-Function'
   */
  { 117.0, 105.0, 110.0, 116.0, 56.0 },

  /* Computed Parameter: SFunction_P1_Size_di
   * Referenced by: '<S5>/S-Function'
   */
  { 1.0, 22.0 },

  /* Computed Parameter: SFunction_P1_ds
   * Referenced by: '<S5>/S-Function'
   */
  { 80.0, 95.0, 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 77.0, 97.0,
    116.0, 114.0, 105.0, 120.0, 95.0, 113.0, 49.0, 95.0, 115.0, 116.0 },

  /* Computed Parameter: SFunction_P1_Size_p
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 22.0 },

  /* Computed Parameter: SFunction_P1_c
   * Referenced by: '<S6>/S-Function'
   */
  { 80.0, 95.0, 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 77.0, 97.0,
    116.0, 114.0, 105.0, 120.0, 95.0, 113.0, 50.0, 95.0, 115.0, 116.0 },

  /* Computed Parameter: SFunction_P1_Size_cx
   * Referenced by: '<S4>/S-Function'
   */
  { 1.0, 31.0 },

  /* Computed Parameter: SFunction_P1_o
   * Referenced by: '<S4>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 67.0, 117.0, 114.0, 114.0, 101.0, 110.0, 116.0, 83.0,
    116.0, 101.0, 101.0, 114.0, 65.0, 110.0, 103.0, 108.0, 101.0, 79.0, 102.0,
    102.0, 115.0, 101.0, 116.0, 95.0, 100.0, 101.0, 103.0 },

  /* Computed Parameter: SFunction_P1_Size_f
   * Referenced by: '<S21>/S-Function'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: SFunction_P1_ma
   * Referenced by: '<S21>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 70.0, 101.0, 101.0, 100.0,
    102.0, 111.0, 114.0, 119.0, 97.0, 114.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_p2
   * Referenced by: '<S22>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_gq
   * Referenced by: '<S22>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 108.0, 97.0, 110.0,
    89.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S22>/S-Function'
   *   '<S39>/S-Function'
   */
  { 1.0, 2.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S22>/S-Function'
   *   '<S39>/S-Function'
   */
  { 52.0, 48.0 },

  /* Computed Parameter: SFunction_P1_Size_b4
   * Referenced by: '<S23>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_mg
   * Referenced by: '<S23>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 108.0, 97.0, 110.0,
    73.0, 100.0, 101.0, 120.0 },

  /* Computed Parameter: SFunction_P1_Size_np
   * Referenced by: '<S24>/S-Function'
   */
  { 1.0, 18.0 },

  /* Computed Parameter: SFunction_P1_b
   * Referenced by: '<S24>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 82.0, 101.0, 113.0, 69.0, 80.0, 83.0, 84.0, 114.0,
    103.0, 65.0, 110.0, 103.0, 108.0, 101.0 },

  /* Computed Parameter: SFunction_P1_Size_na
   * Referenced by: '<S25>/S-Function'
   */
  { 1.0, 15.0 },

  /* Computed Parameter: SFunction_P1_lm
   * Referenced by: '<S25>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 78.0, 117.0, 109.0, 84.0,
    114.0, 97.0, 106.0 },

  /* Computed Parameter: SFunction_P1_Size_i
   * Referenced by: '<S26>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_e
   * Referenced by: '<S26>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 114.0, 101.0, 118.0,
    105.0, 101.0, 119.0, 88.0 },

  /* Computed Parameter: SFunction_P1_Size_ie
   * Referenced by: '<S27>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_bc
   * Referenced by: '<S27>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 114.0, 101.0, 118.0,
    105.0, 101.0, 119.0, 89.0 },

  /* Computed Parameter: SFunction_P1_Size_l0
   * Referenced by: '<S28>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P1_l2
   * Referenced by: '<S28>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 114.0, 101.0, 102.0, 95.0,
    99.0, 117.0, 114.0, 118.0, 101.0, 95.0, 70.0, 105.0, 108.0, 116.0, 101.0,
    114.0 },

  /* Computed Parameter: SFunction_P1_Size_bk
   * Referenced by: '<S29>/S-Function'
   */
  { 1.0, 20.0 },

  /* Computed Parameter: SFunction_P1_ec
   * Referenced by: '<S29>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 114.0, 101.0, 102.0, 95.0,
    99.0, 117.0, 114.0, 118.0, 101.0, 95.0, 65.0, 118.0 },

  /* Computed Parameter: SFunction_P1_Size_h
   * Referenced by: '<S30>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P1_a
   * Referenced by: '<S30>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 83.0, 116.0, 101.0, 101.0,
    114.0, 95.0, 65.0, 110.0, 103.0, 108.0, 101.0, 83.0, 108.0, 111.0, 112.0,
    101.0 },

  /* Computed Parameter: SFunction_P1_Size_it
   * Referenced by: '<S31>/S-Function'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: SFunction_P1_e1
   * Referenced by: '<S31>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 82.0, 101.0, 113.0, 69.0, 80.0, 83.0, 84.0, 114.0,
    103.0, 65.0, 110.0, 103.0, 108.0, 101.0, 49.0 },

  /* Computed Parameter: SFunction_P1_Size_ly
   * Referenced by: '<S32>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_f
   * Referenced by: '<S32>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 70.0, 101.0, 101.0, 100.0,
    98.0, 97.0, 99.0, 107.0 },

  /* Computed Parameter: SFunction_P1_Size_ke
   * Referenced by: '<S33>/S-Function'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: SFunction_P1_mz
   * Referenced by: '<S33>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 83.0, 116.0, 101.0, 101.0,
    114.0, 95.0, 76.0, 105.0, 109.0, 105.0, 116.0 },

  /* Computed Parameter: SFunction_P1_Size_o
   * Referenced by: '<S34>/S-Function'
   */
  { 1.0, 17.0 },

  /* Computed Parameter: SFunction_P1_co
   * Referenced by: '<S34>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 114.0, 101.0, 102.0, 95.0,
    99.0, 117.0, 114.0, 118.0, 101.0 },

  /* Computed Parameter: SFunction_P1_Size_ix
   * Referenced by: '<S35>/S-Function'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: SFunction_P1_mv
   * Referenced by: '<S35>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 76.0, 97.0, 116.0, 101.0,
    114.0, 95.0, 101.0, 114.0, 114.0, 111.0, 114.0 },

  /* Computed Parameter: SFunction_P1_Size_jv
   * Referenced by: '<S36>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P1_je
   * Referenced by: '<S36>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 76.0, 97.0, 116.0, 101.0,
    114.0, 95.0, 101.0, 114.0, 114.0, 111.0, 114.0, 95.0, 114.0, 97.0, 116.0,
    101.0 },

  /* Computed Parameter: SFunction_P1_Size_h3
   * Referenced by: '<S37>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P1_os
   * Referenced by: '<S37>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 104.0, 101.0, 97.0, 100.0,
    105.0, 110.0, 103.0, 95.0, 101.0, 114.0, 114.0, 111.0, 114.0 },

  /* Computed Parameter: SFunction_P1_Size_ky
   * Referenced by: '<S38>/S-Function'
   */
  { 1.0, 26.0 },

  /* Computed Parameter: SFunction_P1_gr
   * Referenced by: '<S38>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 104.0, 101.0, 97.0, 100.0,
    105.0, 110.0, 103.0, 95.0, 101.0, 114.0, 114.0, 111.0, 114.0, 95.0, 114.0,
    97.0, 116.0, 101.0 },

  /* Computed Parameter: SFunction_P1_Size_ph
   * Referenced by: '<S39>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_i2
   * Referenced by: '<S39>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 108.0, 97.0, 110.0,
    88.0 },

  /* Computed Parameter: SFunction_P1_Size_lc
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_bb
   * Referenced by: '<S2>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 97.0, 120.0, 118.0, 82.0, 101.0,
    102.0, 77.0, 115.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_pp
   * Referenced by: '<S3>/S-Function'
   */
  { 1.0, 14.0 },

  /* Computed Parameter: SFunction_P1_h5
   * Referenced by: '<S3>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 107.0, 97.0, 112.0, 84.0, 114.0,
    97.0, 106.0 },

  /* Computed Parameter: SFunction_P1_Size_e
   * Referenced by: '<S48>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P1_pa
   * Referenced by: '<S48>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 70.0, 105.0, 110.0, 97.0,
    108.0, 80.0, 114.0, 101.0, 118.0, 105.0, 101.0, 119.0, 84.0 },

  /* Computed Parameter: ActivePreviewT_TBL_tableData
   * Referenced by: '<S49>/ActivePreviewT_TBL'
   */
  { 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S52>/LC_start_slope'
   *   '<S49>/ActiveAyDtLimit_TBL'
   *   '<S49>/ActivePreviewT_TBL'
   */
  { 4U, 14U },

  /* Computed Parameter: uDLookupTable2_maxIndex
   * Referenced by: '<S44>/2-D Lookup Table2'
   */
  { 18U, 15U },

  /* Computed Parameter: DirectLookupTablenD1_table
   * Referenced by: '<S44>/Direct Lookup Table (n-D)1'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U }
};
