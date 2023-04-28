/*
 * LATC_Test_Calc_data.c
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

/* Invariant block signals (default storage) */
const ConstB_LATC_Test_Calc_T LATC_Test_Calc_ConstB = {
  0.39999999999999997,                 /* '<S65>/Product4' */
  0.39999999999999997,                 /* '<S68>/Product4' */
  0.04                                 /* '<S58>/FilterTime' */
};

/* Constant parameters (default storage) */
const ConstP_LATC_Test_Calc_T LATC_Test_Calc_ConstP = {
  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S51>/S-Function'
   */
  { 1.0, 12.0 },

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S51>/S-Function'
   */
  { 84.0, 114.0, 105.0, 103.0, 103.0, 101.0, 114.0, 95.0, 73.0, 110.0, 105.0,
    116.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  { 1.0, 7.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  { 98.0, 111.0, 111.0, 108.0, 101.0, 97.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_m
   * Referenced by: '<S52>/S-Function'
   */
  { 1.0, 1.0 },

  /* Computed Parameter: SFunction_P1_b
   * Referenced by: '<S52>/S-Function'
   */
  82.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
   */
  { 1.0, 5.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
   */
  { 102.0, 108.0, 111.0, 97.0, 116.0 },

  /* Computed Parameter: SFunction_P1_Size_e
   * Referenced by: '<S53>/S-Function'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: SFunction_P1_m
   * Referenced by: '<S53>/S-Function'
   */
  { 82.0, 111.0, 97.0, 100.0, 87.0, 105.0, 100.0, 116.0, 104.0 },

  /* Computed Parameter: SFunction_P1_Size_o
   * Referenced by: '<S54>/S-Function'
   */
  { 1.0, 18.0 },

  /* Computed Parameter: SFunction_P1_h
   * Referenced by: '<S54>/S-Function'
   */
  { 83.0, 116.0, 114.0, 97.0, 105.0, 103.0, 104.0, 116.0, 76.0, 105.0, 110.0,
    101.0, 76.0, 101.0, 110.0, 103.0, 116.0, 104.0 },

  /* Computed Parameter: SFunction_P1_Size_d
   * Referenced by: '<S55>/S-Function'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: SFunction_P1_e
   * Referenced by: '<S55>/S-Function'
   */
  { 68.0, 105.0, 114.0, 101.0, 99.0, 116.0, 105.0, 111.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_m2
   * Referenced by: '<S111>/S-Function'
   */
  { 1.0, 3.0 },

  /* Computed Parameter: SFunction_P1_k
   * Referenced by: '<S111>/S-Function'
   */
  { 75.0, 97.0, 112.0 },

  /* Computed Parameter: SFunction_P1_Size_a
   * Referenced by: '<S112>/S-Function'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: SFunction_P1_f
   * Referenced by: '<S112>/S-Function'
   */
  { 80.0, 115.0, 105.0, 68.0, 116.0 },

  /* Computed Parameter: SFunction_P1_Size_ez
   * Referenced by: '<S113>/S-Function'
   */
  { 1.0, 4.0 },

  /* Computed Parameter: SFunction_P1_bb
   * Referenced by: '<S113>/S-Function'
   */
  { 86.0, 69.0, 103.0, 111.0 },

  /* Computed Parameter: SFunction_P1_Size_k
   * Referenced by: '<S56>/S-Function'
   */
  { 1.0, 8.0 },

  /* Computed Parameter: SFunction_P1_hd
   * Referenced by: '<S56>/S-Function'
   */
  { 82.0, 111.0, 97.0, 100.0, 84.0, 121.0, 112.0, 101.0 },

  /* Computed Parameter: SFunction_P1_Size_j
   * Referenced by: '<S108>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_g
   * Referenced by: '<S108>/S-Function'
   */
  { 67.0, 101.0, 110.0, 116.0, 101.0, 114.0, 76.0, 105.0, 110.0, 101.0, 80.0,
    111.0, 105.0, 110.0, 116.0, 88.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   */
  { 1.0, 3.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   */
  { 49.0, 48.0, 49.0 },

  /* Computed Parameter: SFunction_P1_Size_b
   * Referenced by: '<S109>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_gz
   * Referenced by: '<S109>/S-Function'
   */
  { 67.0, 101.0, 110.0, 116.0, 101.0, 114.0, 76.0, 105.0, 110.0, 101.0, 80.0,
    111.0, 105.0, 110.0, 116.0, 89.0 },

  /* Computed Parameter: SFunction_P1_Size_c
   * Referenced by: '<S4>/S-Function'
   */
  { 1.0, 7.0 },

  /* Computed Parameter: SFunction_P1_c
   * Referenced by: '<S4>/S-Function'
   */
  { 65.0, 66.0, 83.0, 65.0, 99.0, 116.0, 118.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  49.0,

  /* Pooled Parameter (Expression: )
   * Referenced by:
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   */
  { 1.0, 6.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   */
  { 100.0, 111.0, 117.0, 98.0, 108.0, 101.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  { 1.0, 2.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  { 111.0, 110.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  { 1.0, 1.0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  48.0,

  /* Computed Parameter: SFunction_P1_Size_m1
   * Referenced by: '<S5>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1_kr
   * Referenced by: '<S5>/S-Function'
   */
  { 65.0, 66.0, 83.0, 70.0, 97.0, 105.0, 108.0, 83.0, 116.0, 115.0 },

  /* Computed Parameter: SFunction_P1_Size_n
   * Referenced by: '<S6>/S-Function'
   */
  { 1.0, 7.0 },

  /* Computed Parameter: SFunction_P1_kri
   * Referenced by: '<S6>/S-Function'
   */
  { 66.0, 84.0, 67.0, 65.0, 99.0, 116.0, 118.0 },

  /* Computed Parameter: SFunction_P1_Size_nu
   * Referenced by: '<S7>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1_p
   * Referenced by: '<S7>/S-Function'
   */
  { 69.0, 66.0, 68.0, 70.0, 97.0, 105.0, 108.0, 83.0, 116.0, 115.0 },

  /* Computed Parameter: SFunction_P1_Size_f
   * Referenced by: '<S8>/S-Function'
   */
  { 1.0, 32.0 },

  /* Computed Parameter: SFunction_P1_n
   * Referenced by: '<S8>/S-Function'
   */
  { 69.0, 80.0, 83.0, 95.0, 68.0, 114.0, 118.0, 73.0, 110.0, 112.0, 84.0, 114.0,
    113.0, 86.0, 97.0, 108.0, 95.0, 72.0, 105.0, 103.0, 104.0, 82.0, 101.0,
    115.0, 108.0, 111.0, 108.0, 117.0, 116.0, 105.0, 111.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_l
   * Referenced by: '<S9>/S-Function'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_P1_l
   * Referenced by: '<S9>/S-Function'
   */
  { 69.0, 80.0, 83.0, 95.0, 70.0, 97.0, 105.0, 108.0, 83.0, 116.0, 115.0 },

  /* Computed Parameter: SFunction_P1_Size_o4
   * Referenced by: '<S10>/S-Function'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: SFunction_P1_lh
   * Referenced by: '<S10>/S-Function'
   */
  { 69.0, 80.0, 83.0, 95.0, 76.0, 75.0, 65.0, 84.0, 111.0, 114.0, 113.0, 79.0,
    118.0, 114.0, 108.0, 68.0, 108.0, 118.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_i
   * Referenced by: '<S11>/S-Function'
   */
  { 1.0, 22.0 },

  /* Computed Parameter: SFunction_P1_ko
   * Referenced by: '<S11>/S-Function'
   */
  { 69.0, 80.0, 83.0, 95.0, 76.0, 75.0, 65.0, 84.0, 111.0, 114.0, 113.0, 79.0,
    118.0, 114.0, 108.0, 68.0, 108.0, 118.0, 100.0, 86.0, 108.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_av
   * Referenced by: '<S12>/S-Function'
   */
  { 1.0, 20.0 },

  /* Computed Parameter: SFunction_P1_ms
   * Referenced by: '<S12>/S-Function'
   */
  { 69.0, 80.0, 83.0, 95.0, 76.0, 75.0, 65.0, 84.0, 114.0, 113.0, 79.0, 118.0,
    108.0, 68.0, 108.0, 118.0, 100.0, 83.0, 116.0, 115.0 },

  /* Computed Parameter: SFunction_P1_Size_lt
   * Referenced by: '<S13>/S-Function'
   */
  { 1.0, 23.0 },

  /* Computed Parameter: SFunction_P1_i
   * Referenced by: '<S13>/S-Function'
   */
  { 72.0, 67.0, 85.0, 95.0, 65.0, 99.0, 99.0, 101.0, 108.0, 80.0, 101.0, 100.0,
    97.0, 108.0, 80.0, 111.0, 115.0, 110.0, 95.0, 68.0, 105.0, 97.0, 103.0 },

  /* Computed Parameter: SFunction_P1_Size_dx
   * Referenced by: '<S14>/S-Function'
   */
  { 1.0, 12.0 },

  /* Computed Parameter: SFunction_P1_lk
   * Referenced by: '<S14>/S-Function'
   */
  { 72.0, 67.0, 85.0, 95.0, 80.0, 84.0, 68.0, 114.0, 118.0, 77.0, 111.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_p
   * Referenced by: '<S15>/S-Function'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_P1_ir
   * Referenced by: '<S15>/S-Function'
   */
  { 84.0, 111.0, 116.0, 87.0, 104.0, 101.0, 101.0, 108.0, 84.0, 114.0, 113.0 },

  /* Computed Parameter: SFunction_P1_Size_kh
   * Referenced by: '<S16>/S-Function'
   */
  { 1.0, 15.0 },

  /* Computed Parameter: SFunction_P1_mn
   * Referenced by: '<S16>/S-Function'
   */
  { 77.0, 105.0, 110.0, 80.0, 115.0, 98.0, 108.0, 87.0, 104.0, 101.0, 101.0,
    108.0, 84.0, 114.0, 113.0 },

  /* Computed Parameter: SFunction_P1_Size_ih
   * Referenced by: '<S17>/S-Function'
   */
  { 1.0, 12.0 },

  /* Computed Parameter: SFunction_P1_l2
   * Referenced by: '<S17>/S-Function'
   */
  { 69.0, 80.0, 83.0, 95.0, 83.0, 116.0, 101.0, 101.0, 114.0, 77.0, 111.0, 100.0
  },

  /* Computed Parameter: SFunction_P1_Size_a3
   * Referenced by: '<S18>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1_j
   * Referenced by: '<S18>/S-Function'
   */
  { 69.0, 83.0, 80.0, 70.0, 97.0, 105.0, 108.0, 83.0, 116.0, 115.0 },

  /* Computed Parameter: SFunction_P1_Size_f2
   * Referenced by: '<S19>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P1_o
   * Referenced by: '<S19>/S-Function'
   */
  { 69.0, 83.0, 80.0, 95.0, 77.0, 97.0, 115.0, 116.0, 101.0, 114.0, 67.0, 121.0,
    108.0, 66.0, 114.0, 107.0, 80.0, 114.0, 101.0, 115.0, 115.0 },

  /* Computed Parameter: SFunction_P1_Size_le
   * Referenced by: '<S20>/S-Function'
   */
  { 1.0, 24.0 },

  /* Computed Parameter: SFunction_P1_ey
   * Referenced by: '<S20>/S-Function'
   */
  { 69.0, 83.0, 80.0, 95.0, 77.0, 97.0, 115.0, 116.0, 101.0, 114.0, 67.0, 121.0,
    108.0, 66.0, 114.0, 107.0, 80.0, 114.0, 101.0, 115.0, 115.0, 86.0, 108.0,
    100.0 },

  /* Computed Parameter: SFunction_P1_Size_pd
   * Referenced by: '<S21>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P1_p5
   * Referenced by: '<S21>/S-Function'
   */
  { 70.0, 76.0, 87.0, 104.0, 101.0, 101.0, 108.0, 68.0, 114.0, 105.0, 118.0,
    101.0, 68.0, 105.0, 114.0, 101.0, 99.0, 116.0, 105.0, 111.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_g
   * Referenced by: '<S22>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1_d
   * Referenced by: '<S22>/S-Function'
   */
  { 70.0, 76.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_h
   * Referenced by: '<S23>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_a
   * Referenced by: '<S23>/S-Function'
   */
  { 70.0, 76.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0, 86.0,
    108.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_gi
   * Referenced by: '<S24>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P1_fr
   * Referenced by: '<S24>/S-Function'
   */
  { 70.0, 82.0, 87.0, 104.0, 101.0, 101.0, 108.0, 68.0, 114.0, 105.0, 118.0,
    101.0, 68.0, 105.0, 114.0, 101.0, 99.0, 116.0, 105.0, 111.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_pn
   * Referenced by: '<S25>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1_mc
   * Referenced by: '<S25>/S-Function'
   */
  { 70.0, 82.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_cc
   * Referenced by: '<S26>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_hr
   * Referenced by: '<S26>/S-Function'
   */
  { 70.0, 82.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0, 86.0,
    108.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_li
   * Referenced by: '<S27>/S-Function'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_P1_fb
   * Referenced by: '<S27>/S-Function'
   */
  { 86.0, 101.0, 104.0, 76.0, 97.0, 116.0, 65.0, 99.0, 99.0, 101.0, 108.0 },

  /* Computed Parameter: SFunction_P1_Size_pdc
   * Referenced by: '<S28>/S-Function'
   */
  { 1.0, 14.0 },

  /* Computed Parameter: SFunction_P1_iru
   * Referenced by: '<S28>/S-Function'
   */
  { 86.0, 101.0, 104.0, 76.0, 97.0, 116.0, 65.0, 99.0, 99.0, 101.0, 108.0, 86.0,
    108.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_ii
   * Referenced by: '<S29>/S-Function'
   */
  { 1.0, 11.0 },

  /* Computed Parameter: SFunction_P1_au
   * Referenced by: '<S29>/S-Function'
   */
  { 86.0, 101.0, 104.0, 76.0, 103.0, 116.0, 65.0, 99.0, 99.0, 101.0, 108.0 },

  /* Computed Parameter: SFunction_P1_Size_i4
   * Referenced by: '<S30>/S-Function'
   */
  { 1.0, 14.0 },

  /* Computed Parameter: SFunction_P1_jj
   * Referenced by: '<S30>/S-Function'
   */
  { 86.0, 101.0, 104.0, 76.0, 103.0, 116.0, 65.0, 99.0, 99.0, 101.0, 108.0, 86.0,
    108.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_cx
   * Referenced by: '<S31>/S-Function'
   */
  { 1.0, 7.0 },

  /* Computed Parameter: SFunction_P1_ot
   * Referenced by: '<S31>/S-Function'
   */
  { 77.0, 83.0, 82.0, 65.0, 99.0, 116.0, 118.0 },

  /* Computed Parameter: SFunction_P1_Size_px
   * Referenced by: '<S32>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1_jb
   * Referenced by: '<S32>/S-Function'
   */
  { 78.0, 111.0, 66.0, 114.0, 107.0, 70.0, 111.0, 114.0, 99.0, 101.0 },

  /* Computed Parameter: SFunction_P1_Size_g1
   * Referenced by: '<S33>/S-Function'
   */
  { 1.0, 7.0 },

  /* Computed Parameter: SFunction_P1_f5
   * Referenced by: '<S33>/S-Function'
   */
  { 80.0, 84.0, 67.0, 65.0, 99.0, 116.0, 118.0 },

  /* Computed Parameter: SFunction_P1_Size_fz
   * Referenced by: '<S34>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P1_fl
   * Referenced by: '<S34>/S-Function'
   */
  { 82.0, 76.0, 87.0, 104.0, 101.0, 101.0, 108.0, 68.0, 114.0, 105.0, 118.0,
    101.0, 68.0, 105.0, 114.0, 101.0, 99.0, 116.0, 105.0, 111.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_e0
   * Referenced by: '<S35>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1_pr
   * Referenced by: '<S35>/S-Function'
   */
  { 82.0, 76.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_nl
   * Referenced by: '<S36>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_al
   * Referenced by: '<S36>/S-Function'
   */
  { 82.0, 76.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0, 86.0,
    108.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_oo
   * Referenced by: '<S37>/S-Function'
   */
  { 1.0, 21.0 },

  /* Computed Parameter: SFunction_P1_jv
   * Referenced by: '<S37>/S-Function'
   */
  { 82.0, 82.0, 87.0, 104.0, 101.0, 101.0, 108.0, 68.0, 114.0, 105.0, 118.0,
    101.0, 68.0, 105.0, 114.0, 101.0, 99.0, 116.0, 105.0, 111.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_kt
   * Referenced by: '<S38>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1_jo
   * Referenced by: '<S38>/S-Function'
   */
  { 82.0, 82.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_kf
   * Referenced by: '<S39>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_bk
   * Referenced by: '<S39>/S-Function'
   */
  { 82.0, 82.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0, 112.0, 100.0, 86.0,
    108.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_pg
   * Referenced by: '<S40>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_mt
   * Referenced by: '<S40>/S-Function'
   */
  { 83.0, 116.0, 101.0, 101.0, 114.0, 87.0, 104.0, 101.0, 101.0, 108.0, 65.0,
    110.0, 103.0 },

  /* Computed Parameter: SFunction_P1_Size_k2
   * Referenced by: '<S41>/S-Function'
   */
  { 1.0, 17.0 },

  /* Computed Parameter: SFunction_P1_an
   * Referenced by: '<S41>/S-Function'
   */
  { 83.0, 116.0, 101.0, 101.0, 114.0, 87.0, 104.0, 101.0, 101.0, 108.0, 65.0,
    110.0, 103.0, 83.0, 105.0, 103.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_h4
   * Referenced by: '<S42>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_o3
   * Referenced by: '<S42>/S-Function'
   */
  { 83.0, 116.0, 101.0, 101.0, 114.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0,
    112.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_ij
   * Referenced by: '<S43>/S-Function'
   */
  { 1.0, 17.0 },

  /* Computed Parameter: SFunction_P1_ml
   * Referenced by: '<S43>/S-Function'
   */
  { 83.0, 116.0, 101.0, 101.0, 114.0, 87.0, 104.0, 101.0, 101.0, 108.0, 83.0,
    112.0, 100.0, 83.0, 105.0, 103.0, 110.0 },

  /* Computed Parameter: SFunction_P1_Size_di
   * Referenced by: '<S44>/S-Function'
   */
  { 1.0, 7.0 },

  /* Computed Parameter: SFunction_P1_ds
   * Referenced by: '<S44>/S-Function'
   */
  { 86.0, 68.0, 67.0, 65.0, 99.0, 116.0, 118.0 },

  /* Computed Parameter: SFunction_P1_Size_pw
   * Referenced by: '<S45>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1_ca
   * Referenced by: '<S45>/S-Function'
   */
  { 86.0, 101.0, 104.0, 89.0, 97.0, 119.0, 82.0, 97.0, 116.0, 101.0 },

  /* Computed Parameter: SFunction_P1_Size_nk
   * Referenced by: '<S46>/S-Function'
   */
  { 1.0, 16.0 },

  /* Computed Parameter: SFunction_P1_in
   * Referenced by: '<S46>/S-Function'
   */
  { 86.0, 101.0, 104.0, 68.0, 121.0, 110.0, 89.0, 97.0, 119.0, 82.0, 97.0, 116.0,
    101.0, 86.0, 108.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_bu
   * Referenced by: '<S47>/S-Function'
   */
  { 1.0, 6.0 },

  /* Computed Parameter: SFunction_P1_lko
   * Referenced by: '<S47>/S-Function'
   */
  { 86.0, 101.0, 104.0, 83.0, 112.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_ex
   * Referenced by: '<S48>/S-Function'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: SFunction_P1_on
   * Referenced by: '<S48>/S-Function'
   */
  { 86.0, 101.0, 104.0, 83.0, 112.0, 100.0, 86.0, 108.0, 100.0 },

  /* Computed Parameter: SFunction_P1_Size_hm
   * Referenced by: '<S49>/S-Function'
   */
  { 1.0, 13.0 },

  /* Computed Parameter: SFunction_P1_c1
   * Referenced by: '<S49>/S-Function'
   */
  { 86.0, 101.0, 104.0, 83.0, 116.0, 97.0, 110.0, 100.0, 115.0, 116.0, 105.0,
    108.0, 108.0 },

  /* Computed Parameter: t_tauAxvRef_tableData
   * Referenced by: '<S63>/t_tauAxvRef'
   */
  { 0.2F, 0.1F, 0.1F },

  /* Computed Parameter: t_tauAxvRef_bp01Data
   * Referenced by: '<S63>/t_tauAxvRef'
   */
  { 0.0F, 1.0F, 2.0F },

  /* Computed Parameter: t_FiltaxvRoadSlope_tableData
   * Referenced by: '<S67>/t_FiltaxvRoadSlope'
   */
  { 1.0F, 1.0F, 1.5F, 1.5F },

  /* Computed Parameter: t_FiltaxvRoadSlope_bp01Data
   * Referenced by: '<S67>/t_FiltaxvRoadSlope'
   */
  { 0.0F, 41.7F, 55.6F, 80.0F }
};
