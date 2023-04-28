/*
 * LATC_Test_Calc_data.c
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 1.17
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Sun Oct 10 16:13:52 2021
 *
 * Target selection: cnp.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LATC_Test_Calc.h"
#include "LATC_Test_Calc_private.h"

/* Constant parameters (default storage) */
const ConstP_LATC_Test_Calc_T LATC_Test_Calc_ConstP = {
  /* Expression: [10 50 50 40 40 50 60 60 100 130;10 50 50 55 60 60 80 120 130 130;10 60 60 60 65 70 90 120 130 130;10 60 65 70 80 90 110 125 130 130;10 60 65 75 85 100 120 125 130 130;10 60 65 75 85 100 120 125 130 130;10 60 65 75 85 100 120 125 130 130;10 60 65 75 85 100 120 125 130 130]
   * Referenced by: '<Root>/2-D Lookup Table3'
   */
  { 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 50.0, 50.0, 60.0, 60.0, 60.0,
    60.0, 60.0, 60.0, 50.0, 50.0, 60.0, 65.0, 65.0, 65.0, 65.0, 65.0, 40.0, 55.0,
    60.0, 70.0, 75.0, 75.0, 75.0, 75.0, 40.0, 60.0, 65.0, 80.0, 85.0, 85.0, 85.0,
    85.0, 50.0, 60.0, 70.0, 90.0, 100.0, 100.0, 100.0, 100.0, 60.0, 80.0, 90.0,
    110.0, 120.0, 120.0, 120.0, 120.0, 60.0, 120.0, 120.0, 125.0, 125.0, 125.0,
    125.0, 125.0, 100.0, 130.0, 130.0, 130.0, 130.0, 130.0, 130.0, 130.0, 130.0,
    130.0, 130.0, 130.0, 130.0, 130.0, 130.0, 130.0 },

  /* Expression: [50 60 70 80 90 100 110 120]
   * Referenced by: '<Root>/2-D Lookup Table3'
   */
  { 50.0, 60.0, 70.0, 80.0, 90.0, 100.0, 110.0, 120.0 },

  /* Expression: [0 0.5 1 1.5 2 2.5 3 3.2 3.4 3.5]
   * Referenced by: '<Root>/2-D Lookup Table3'
   */
  { 0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.2, 3.4, 3.5 },

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S7>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S7>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 48.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   */
  { 1.0, 6.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   */
  { 100.0, 111.0, 117.0, 98.0, 108.0, 101.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
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
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
   */
  48.0,

  /* Computed Parameter: SFunction_P1_Size_f
   * Referenced by: '<S1>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_l
   * Referenced by: '<S1>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 49.0 },

  /* Computed Parameter: SFunction_P1_Size_h
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_n
   * Referenced by: '<S2>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 50.0 },

  /* Computed Parameter: SFunction_P1_Size_d
   * Referenced by: '<S3>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_j
   * Referenced by: '<S3>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 100.0, 101.0, 115.0, 76.0, 97.0,
    110.0, 101.0, 65.0, 51.0 },

  /* Computed Parameter: SFunction_P1_Size_fu
   * Referenced by: '<S4>/S-Function'
   */
  { 1.0, 15.0 },

  /* Computed Parameter: SFunction_P1_f
   * Referenced by: '<S4>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 118.0, 120.0, 118.0, 82.0, 101.0,
    102.0, 77.0, 115.0 },

  /* Computed Parameter: SFunction_P1_Size_n
   * Referenced by: '<S5>/S-Function'
   */
  { 1.0, 15.0 },

  /* Computed Parameter: SFunction_P1_fp
   * Referenced by: '<S5>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 112.0, 115.0, 105.0, 68.0, 116.0,
    79.0, 112.0, 116.0 },

  /* Computed Parameter: SFunction_P1_Size_da
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 22.0 },

  /* Computed Parameter: SFunction_P1_j0
   * Referenced by: '<S6>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 73.0, 78.0, 95.0, 84.0, 97.0, 114.0, 68.0, 97.0,
    110.0, 103.0, 101.0, 114.0, 108.0, 76.0, 101.0, 118.0, 101.0, 108.0 },

  /* Computed Parameter: SFunction_P1_Size_m
   * Referenced by: '<S9>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_m
   * Referenced by: '<S9>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 108.0, 97.0, 110.0,
    88.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S9>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   */
  { 1.0, 2.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S9>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   */
  { 52.0, 48.0 },

  /* Computed Parameter: SFunction_P1_Size_o
   * Referenced by: '<S10>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P1_k
   * Referenced by: '<S10>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 76.0, 97.0, 116.0, 101.0,
    114.0, 95.0, 101.0, 114.0, 114.0, 111.0, 114.0, 95.0, 114.0, 97.0, 116.0,
    101.0 },

  /* Computed Parameter: SFunction_P1_Size_j
   * Referenced by: '<S11>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P1_b
   * Referenced by: '<S11>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 104.0, 101.0, 97.0, 100.0,
    105.0, 110.0, 103.0, 95.0, 101.0, 114.0, 114.0, 111.0, 114.0 },

  /* Computed Parameter: SFunction_P1_Size_np
   * Referenced by: '<S12>/S-Function'
   */
  { 1.0, 26.0 },

  /* Computed Parameter: SFunction_P1_b5
   * Referenced by: '<S12>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 104.0, 101.0, 97.0, 100.0,
    105.0, 110.0, 103.0, 95.0, 101.0, 114.0, 114.0, 111.0, 114.0, 95.0, 114.0,
    97.0, 116.0, 101.0 },

  /* Computed Parameter: SFunction_P1_Size_a
   * Referenced by: '<S13>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_f1
   * Referenced by: '<S13>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 108.0, 97.0, 110.0,
    89.0 },

  /* Computed Parameter: SFunction_P1_Size_p
   * Referenced by: '<S14>/S-Function'
   */
  { 1.0, 17.0 },

  /* Computed Parameter: SFunction_P1_g
   * Referenced by: '<S14>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 108.0, 97.0, 110.0,
    84.0, 104.0, 101.0, 116.0, 97.0 },

  /* Computed Parameter: SFunction_P1_Size_e
   * Referenced by: '<S15>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_d
   * Referenced by: '<S15>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 108.0, 97.0, 110.0,
    73.0, 100.0, 101.0, 120.0 },

  /* Computed Parameter: SFunction_P1_Size_of
   * Referenced by: '<S16>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_kf
   * Referenced by: '<S16>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 114.0, 101.0, 118.0,
    105.0, 101.0, 119.0, 88.0 },

  /* Computed Parameter: SFunction_P1_Size_eq
   * Referenced by: '<S17>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_a
   * Referenced by: '<S17>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 114.0, 101.0, 118.0,
    105.0, 101.0, 119.0, 89.0 },

  /* Computed Parameter: SFunction_P1_Size_dp
   * Referenced by: '<S18>/S-Function'
   */
  { 1.0, 20.0 },

  /* Computed Parameter: SFunction_P1_mm
   * Referenced by: '<S18>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 80.0, 114.0, 101.0, 118.0,
    105.0, 101.0, 119.0, 84.0, 104.0, 101.0, 116.0, 97.0 },

  /* Computed Parameter: SFunction_P1_Size_dv
   * Referenced by: '<S19>/S-Function'
   */
  { 1.0, 17.0 },

  /* Computed Parameter: SFunction_P1_bu
   * Referenced by: '<S19>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 114.0, 101.0, 102.0, 95.0,
    99.0, 117.0, 114.0, 118.0, 101.0 },

  /* Computed Parameter: SFunction_P1_Size_eu
   * Referenced by: '<S20>/S-Function'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: SFunction_P1_nw
   * Referenced by: '<S20>/S-Function'
   */
  { 76.0, 67.0, 83.0, 95.0, 76.0, 67.0, 67.0, 95.0, 76.0, 97.0, 116.0, 101.0,
    114.0, 95.0, 101.0, 114.0, 114.0, 111.0, 114.0 },

  /* Computed Parameter: uDLookupTable3_maxIndex
   * Referenced by: '<Root>/2-D Lookup Table3'
   */
  { 7U, 9U },

  /* Computed Parameter: DirectLookupTablenD1_table
   * Referenced by: '<Root>/Direct Lookup Table (n-D)1'
   */
  { 1U, 1U, 1U, 2U, 1U, 1U, 1U, 2U, 2U, 1U, 1U }
};
