/*
 * PubIfControlLATC_MDL_private.h
 *
 * Code generation for model "PubIfControlLATC_MDL".
 *
 * Model version              : 3.732
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:23 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfControlLATC_MDL_private_h_
#define RTW_HEADER_PubIfControlLATC_MDL_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

extern const real32_T rtCP_pooled_5PXVjMvD6yHA[208];
extern const real32_T rtCP_pooled_vnBnspBbP5Hd[208];
extern const real32_T rtCP_pooled_yRgKBraCdQjy[16];
extern const real32_T rtCP_pooled_ScRJCZLsb2Xz[13];
extern const uint32_T rtCP_pooled_Bt2mKTDKKpvO[2];
extern const uint32_T rtCP_pooled_Oor47qYvvMlT[2];
extern const uint32_T rtCP_pooled_It74Q6X3eVYP[2];
extern const uint32_T rtCP_pooled_6XxsJjeU5CNl[2];
extern const uint32_T rtCP_pooled_9jh5Z9fQuhtG[2];

#define rtCP_Line_Plan_ayLimit14_tableData rtCP_pooled_5PXVjMvD6yHA/* Computed Parameter: rtCP_Line_Plan_ayLimit14_tableData
                                                                    * Referenced by: '<S64>/Line_Plan_ayLimit14'
                                                                    */
#define rtCP_Line_Plan_ayLimit15_tableData rtCP_pooled_vnBnspBbP5Hd/* Computed Parameter: rtCP_Line_Plan_ayLimit15_tableData
                                                                    * Referenced by: '<S64>/Line_Plan_ayLimit15'
                                                                    */
#define rtCP_Line_Plan_preDis_bp01Data rtCP_pooled_yRgKBraCdQjy  /* Expression: P_LCS_PLAN_VehicleSpd_TabX_Kph
                                                                  * Referenced by: '<S64>/Line_Plan_preDis'
                                                                  */
#define rtCP_PreDis_Fac_bp02Data       rtCP_pooled_ScRJCZLsb2Xz  /* Expression: P_LCS_PLAN_PreDisCurve_TabY_m
                                                                  * Referenced by: '<S64>/PreDis_Fac'
                                                                  */
#define rtCP_LC_start_slope_maxIndex   rtCP_pooled_Bt2mKTDKKpvO  /* Computed Parameter: rtCP_LC_start_slope_maxIndex
                                                                  * Referenced by: '<S55>/LC_start_slope'
                                                                  */
#define rtCP_LC_start_slope_maxIndex_c rtCP_pooled_Bt2mKTDKKpvO  /* Computed Parameter: rtCP_LC_start_slope_maxIndex_c
                                                                  * Referenced by: '<S69>/LC_start_slope'
                                                                  */
#define rtCP_LC_start_slope_maxIndex_e rtCP_pooled_Oor47qYvvMlT  /* Computed Parameter: rtCP_LC_start_slope_maxIndex_e
                                                                  * Referenced by: '<S71>/LC_start_slope'
                                                                  */
#define rtCP_LC_start_slope_maxIndex_p rtCP_pooled_Oor47qYvvMlT  /* Computed Parameter: rtCP_LC_start_slope_maxIndex_p
                                                                  * Referenced by: '<S74>/LC_start_slope'
                                                                  */
#define rtCP_Line_Plan_ayLimit11_maxIndex rtCP_pooled_It74Q6X3eVYP/* Computed Parameter: rtCP_Line_Plan_ayLimit11_maxIndex
                                                                   * Referenced by: '<S64>/Line_Plan_ayLimit11'
                                                                   */
#define rtCP_Line_Plan_ayLimit19_maxIndex rtCP_pooled_It74Q6X3eVYP/* Computed Parameter: rtCP_Line_Plan_ayLimit19_maxIndex
                                                                   * Referenced by: '<S64>/Line_Plan_ayLimit19'
                                                                   */
#define rtCP_Line_Plan_ayLimit10_maxIndex rtCP_pooled_It74Q6X3eVYP/* Computed Parameter: rtCP_Line_Plan_ayLimit10_maxIndex
                                                                   * Referenced by: '<S64>/Line_Plan_ayLimit10'
                                                                   */
#define rtCP_Line_Plan_ayLimit12_maxIndex rtCP_pooled_It74Q6X3eVYP/* Computed Parameter: rtCP_Line_Plan_ayLimit12_maxIndex
                                                                   * Referenced by: '<S64>/Line_Plan_ayLimit12'
                                                                   */
#define rtCP_Line_Plan_ayLimit13_maxIndex rtCP_pooled_It74Q6X3eVYP/* Computed Parameter: rtCP_Line_Plan_ayLimit13_maxIndex
                                                                   * Referenced by: '<S64>/Line_Plan_ayLimit13'
                                                                   */
#define rtCP_Line_Plan_ayLimit14_maxIndex rtCP_pooled_It74Q6X3eVYP/* Computed Parameter: rtCP_Line_Plan_ayLimit14_maxIndex
                                                                   * Referenced by: '<S64>/Line_Plan_ayLimit14'
                                                                   */
#define rtCP_Line_Plan_ayLimit15_maxIndex rtCP_pooled_It74Q6X3eVYP/* Computed Parameter: rtCP_Line_Plan_ayLimit15_maxIndex
                                                                   * Referenced by: '<S64>/Line_Plan_ayLimit15'
                                                                   */
#define rtCP_Line_Plan_ayLimit16_maxIndex rtCP_pooled_It74Q6X3eVYP/* Computed Parameter: rtCP_Line_Plan_ayLimit16_maxIndex
                                                                   * Referenced by: '<S64>/Line_Plan_ayLimit16'
                                                                   */
#define rtCP_Line_Plan_ayLimit17_maxIndex rtCP_pooled_It74Q6X3eVYP/* Computed Parameter: rtCP_Line_Plan_ayLimit17_maxIndex
                                                                   * Referenced by: '<S64>/Line_Plan_ayLimit17'
                                                                   */
#define rtCP_LCLKAELK_PreDis_maxIndex  rtCP_pooled_6XxsJjeU5CNl  /* Computed Parameter: rtCP_LCLKAELK_PreDis_maxIndex
                                                                  * Referenced by: '<S64>/LC//LKA//ELK_PreDis'
                                                                  */
#define rtCP_PreDis_Fac_maxIndex       rtCP_pooled_9jh5Z9fQuhtG  /* Computed Parameter: rtCP_PreDis_Fac_maxIndex
                                                                  * Referenced by: '<S64>/PreDis_Fac'
                                                                  */

/* Invariant block signals (default storage) */
extern const ConstB_PubIfControlLATC_MDL_h_T PubIfControlLATC_MDL_ConstB;

#endif                          /* RTW_HEADER_PubIfControlLATC_MDL_private_h_ */
