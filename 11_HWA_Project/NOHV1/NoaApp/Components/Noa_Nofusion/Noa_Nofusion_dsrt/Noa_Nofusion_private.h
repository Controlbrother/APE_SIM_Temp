/*
 * Noa_Nofusion_private.h
 *
 * Code generation for model "Noa_Nofusion".
 *
 * Model version              : 1.579
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:18:59 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Noa_Nofusion_private_h_
#define RTW_HEADER_Noa_Nofusion_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Noa_Nofusion.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */
extern const real32_T rtCP_pooled_Hws0ARFAI7dJ[240];
extern const real32_T rtCP_pooled_NKPar6xVaf7f[240];
extern const real32_T rtCP_pooled_VNwftIHu7Ru1[24];
extern const real32_T rtCP_pooled_9SZnXb1tjilb[24];
extern const real32_T rtCP_pooled_wkMdhk5Ywaq1[12];
extern const real32_T rtCP_pooled_MXWrJTZDuC5N[15];
extern const real32_T rtCP_pooled_OdqwwvjQTgnA[3];
extern const real32_T rtCP_pooled_LvdwhDXpSNJ8[3];
extern const real32_T rtCP_pooled_P4OmNxOWkoZw[4];
extern const real32_T rtCP_pooled_GnkntqSlfNkH[4];
extern const real32_T rtCP_pooled_G3JLsY5Y4KvX[4];
extern const real32_T rtCP_pooled_edKPezdtdddm[4];
extern const real32_T rtCP_pooled_ttFET3yzhfVj[4];
extern const real32_T rtCP_pooled_nPWSMm1CwJux[4];
extern const real32_T rtCP_pooled_B2iC8JNZuifj[6];
extern const real32_T rtCP_pooled_ptNqeEekMZPv[6];
extern const real32_T rtCP_pooled_eUs7jKrdnbTk[6];
extern const real32_T rtCP_pooled_ZNnAKVA5AF8E[5];
extern const real32_T rtCP_pooled_ZGcSklXnjT0i[5];
extern const real32_T rtCP_pooled_ttLXfkn9mdUX[24];
extern const real32_T rtCP_pooled_b185jh09PzIh[4];
extern const real32_T rtCP_pooled_CaRPRewba4pt[6];
extern const real32_T rtCP_pooled_vv91xKbMhYyv[4];
extern const real32_T rtCP_pooled_UlKQjsBwlqia[4];
extern const uint32_T rtCP_pooled_6ctZZI6rDglB[2];
extern const boolean_T rtCP_pooled_pOT6yKVgFUlc[240];
extern const boolean_T rtCP_pooled_DpqfeaQS1PpX[10];
extern const boolean_T rtCP_pooled_6TRjH08EWfeW[240];
extern const uint8_T rtCP_pooled_9Y3LS3kCPaNW[16];
extern const uint8_T rtCP_pooled_cyrCkbbudVvD[16];
extern const uint8_T rtCP_pooled_E799Wo1r5JOD[16];
extern const uint8_T rtCP_pooled_e6HU8n7YauPz;
extern const uint8_T rtCP_pooled_qcS3FDleGq0E[10];
extern const uint8_T rtCP_pooled_Wkq8Rhg6RRWO[15];
extern const uint8_T rtCP_pooled_ouMKW7C8F0Hj[240];

#define rtCP_Memory25_InitialCondition rtCP_pooled_Hws0ARFAI7dJ  /* Computed Parameter: rtCP_Memory25_InitialCondition
                                                                  * Referenced by: '<S206>/Memory25'
                                                                  */
#define rtCP_Memory26_InitialCondition rtCP_pooled_Hws0ARFAI7dJ  /* Computed Parameter: rtCP_Memory26_InitialCondition
                                                                  * Referenced by: '<S206>/Memory26'
                                                                  */
#define rtCP_Memory27_InitialCondition rtCP_pooled_NKPar6xVaf7f  /* Computed Parameter: rtCP_Memory27_InitialCondition
                                                                  * Referenced by: '<S206>/Memory27'
                                                                  */
#define rtCP_Memory28_InitialCondition rtCP_pooled_VNwftIHu7Ru1  /* Computed Parameter: rtCP_Memory28_InitialCondition
                                                                  * Referenced by: '<S206>/Memory28'
                                                                  */
#define rtCP_Memory29_InitialCondition rtCP_pooled_9SZnXb1tjilb  /* Computed Parameter: rtCP_Memory29_InitialCondition
                                                                  * Referenced by: '<S206>/Memory29'
                                                                  */
#define rtCP_Memory30_InitialCondition rtCP_pooled_9SZnXb1tjilb  /* Computed Parameter: rtCP_Memory30_InitialCondition
                                                                  * Referenced by: '<S206>/Memory30'
                                                                  */
#define rtCP_Constant3_Value_l         rtCP_pooled_wkMdhk5Ywaq1  /* Computed Parameter: rtCP_Constant3_Value_l
                                                                  * Referenced by: '<S179>/Constant3'
                                                                  */
#define rtCP_Constant3_Value_ng        rtCP_pooled_wkMdhk5Ywaq1  /* Computed Parameter: rtCP_Constant3_Value_ng
                                                                  * Referenced by: '<S220>/Constant3'
                                                                  */
#define rtCP_Constant2_Value_f         rtCP_pooled_MXWrJTZDuC5N  /* Expression: single(zeros(1,15))
                                                                  * Referenced by: '<S220>/Constant2'
                                                                  */
#define rtCP_Memory1_InitialCondition  rtCP_pooled_MXWrJTZDuC5N  /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S179>/Memory1'
                                                                  */
#define rtCP_Memory4_InitialCondition  rtCP_pooled_MXWrJTZDuC5N  /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S179>/Memory4'
                                                                  */
#define rtCP_dxMaxFollowPO_tableData   rtCP_pooled_OdqwwvjQTgnA  /* Computed Parameter: rtCP_dxMaxFollowPO_tableData
                                                                  * Referenced by: '<S179>/dxMaxFollowPO'
                                                                  */
#define rtCP_dxMaxFollowPO_bp01Data    rtCP_pooled_LvdwhDXpSNJ8  /* Computed Parameter: rtCP_dxMaxFollowPO_bp01Data
                                                                  * Referenced by: '<S179>/dxMaxFollowPO'
                                                                  */
#define rtCP_t_dyLaneWidthSteerAdapt_tableData rtCP_pooled_P4OmNxOWkoZw/* Computed Parameter: rtCP_t_dyLaneWidthSteerAdapt_tableData
                                                                      * Referenced by: '<S179>/t_dyLaneWidthSteerAdapt'
                                                                      */
#define rtCP_t_dyLaneWidthSteerAdapt_bp01Data rtCP_pooled_GnkntqSlfNkH/* Computed Parameter: rtCP_t_dyLaneWidthSteerAdapt_bp01Data
                                                                      * Referenced by: '<S179>/t_dyLaneWidthSteerAdapt'
                                                                      */
#define rtCP_dyLaneWidthMin_tableData  rtCP_pooled_G3JLsY5Y4KvX  /* Computed Parameter: rtCP_dyLaneWidthMin_tableData
                                                                  * Referenced by: '<S179>/dyLaneWidthMin'
                                                                  */
#define rtCP_dyLaneWidthMin_bp01Data   rtCP_pooled_edKPezdtdddm  /* Computed Parameter: rtCP_dyLaneWidthMin_bp01Data
                                                                  * Referenced by: '<S179>/dyLaneWidthMin'
                                                                  */
#define rtCP_Memory14_InitialCondition rtCP_pooled_MXWrJTZDuC5N  /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S179>/Memory14'
                                                                  */
#define rtCP_Memory13_InitialCondition rtCP_pooled_MXWrJTZDuC5N  /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S179>/Memory13'
                                                                  */
#define rtCP_Memory6_InitialCondition  rtCP_pooled_MXWrJTZDuC5N  /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S179>/Memory6'
                                                                  */
#define rtCP_Fac_tableData             rtCP_pooled_ttFET3yzhfVj  /* Computed Parameter: rtCP_Fac_tableData
                                                                  * Referenced by: '<S179>/Fac'
                                                                  */
#define rtCP_Fac_bp01Data              rtCP_pooled_nPWSMm1CwJux  /* Computed Parameter: rtCP_Fac_bp01Data
                                                                  * Referenced by: '<S179>/Fac'
                                                                  */
#define rtCP_DeltaDx_tableData         rtCP_pooled_B2iC8JNZuifj  /* Computed Parameter: rtCP_DeltaDx_tableData
                                                                  * Referenced by: '<S179>/DeltaDx'
                                                                  */
#define rtCP_DeltaDx_bp01Data          rtCP_pooled_ptNqeEekMZPv  /* Computed Parameter: rtCP_DeltaDx_bp01Data
                                                                  * Referenced by: '<S179>/DeltaDx'
                                                                  */
#define rtCP_DeltaDy_tableData         rtCP_pooled_eUs7jKrdnbTk  /* Computed Parameter: rtCP_DeltaDy_tableData
                                                                  * Referenced by: '<S179>/DeltaDy'
                                                                  */
#define rtCP_DeltaDy_bp01Data          rtCP_pooled_ptNqeEekMZPv  /* Computed Parameter: rtCP_DeltaDy_bp01Data
                                                                  * Referenced by: '<S179>/DeltaDy'
                                                                  */
#define rtCP_uDLookupTable1_tableData  rtCP_pooled_ZNnAKVA5AF8E  /* Computed Parameter: rtCP_uDLookupTable1_tableData
                                                                  * Referenced by: '<S179>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data   rtCP_pooled_ZGcSklXnjT0i  /* Computed Parameter: rtCP_uDLookupTable1_bp01Data
                                                                  * Referenced by: '<S179>/1-D Lookup Table1'
                                                                  */
#define rtCP_Memory32_InitialCondition rtCP_pooled_9SZnXb1tjilb  /* Computed Parameter: rtCP_Memory32_InitialCondition
                                                                  * Referenced by: '<S190>/Memory32'
                                                                  */
#define rtCP_Memory31_InitialCondition rtCP_pooled_9SZnXb1tjilb  /* Computed Parameter: rtCP_Memory31_InitialCondition
                                                                  * Referenced by: '<S190>/Memory31'
                                                                  */
#define rtCP_Memory1_InitialCondition_h rtCP_pooled_MXWrJTZDuC5N /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S220>/Memory1'
                                                                  */
#define rtCP_Memory4_InitialCondition_g rtCP_pooled_MXWrJTZDuC5N /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S220>/Memory4'
                                                                  */
#define rtCP_dxMaxFollowPO_tableData_a rtCP_pooled_OdqwwvjQTgnA  /* Computed Parameter: rtCP_dxMaxFollowPO_tableData_a
                                                                  * Referenced by: '<S220>/dxMaxFollowPO'
                                                                  */
#define rtCP_dxMaxFollowPO_bp01Data_h  rtCP_pooled_LvdwhDXpSNJ8  /* Computed Parameter: rtCP_dxMaxFollowPO_bp01Data_h
                                                                  * Referenced by: '<S220>/dxMaxFollowPO'
                                                                  */
#define rtCP_t_dyLaneWidthSteerAdapt_tableData_a rtCP_pooled_P4OmNxOWkoZw/* Computed Parameter: rtCP_t_dyLaneWidthSteerAdapt_tableData_a
                                                                      * Referenced by: '<S220>/t_dyLaneWidthSteerAdapt'
                                                                      */
#define rtCP_t_dyLaneWidthSteerAdapt_bp01Data_a rtCP_pooled_GnkntqSlfNkH/* Computed Parameter: rtCP_t_dyLaneWidthSteerAdapt_bp01Data_a
                                                                      * Referenced by: '<S220>/t_dyLaneWidthSteerAdapt'
                                                                      */
#define rtCP_dyLaneWidthMin_tableData_a rtCP_pooled_G3JLsY5Y4KvX /* Computed Parameter: rtCP_dyLaneWidthMin_tableData_a
                                                                  * Referenced by: '<S220>/dyLaneWidthMin'
                                                                  */
#define rtCP_dyLaneWidthMin_bp01Data_m rtCP_pooled_edKPezdtdddm  /* Computed Parameter: rtCP_dyLaneWidthMin_bp01Data_m
                                                                  * Referenced by: '<S220>/dyLaneWidthMin'
                                                                  */
#define rtCP_Memory14_InitialCondition_n rtCP_pooled_MXWrJTZDuC5N/* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S220>/Memory14'
                                                                  */
#define rtCP_Memory13_InitialCondition_a rtCP_pooled_MXWrJTZDuC5N/* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S220>/Memory13'
                                                                  */
#define rtCP_Memory6_InitialCondition_e rtCP_pooled_MXWrJTZDuC5N /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S220>/Memory6'
                                                                  */
#define rtCP_Fac_tableData_d           rtCP_pooled_ttFET3yzhfVj  /* Computed Parameter: rtCP_Fac_tableData_d
                                                                  * Referenced by: '<S220>/Fac'
                                                                  */
#define rtCP_Fac_bp01Data_a            rtCP_pooled_nPWSMm1CwJux  /* Computed Parameter: rtCP_Fac_bp01Data_a
                                                                  * Referenced by: '<S220>/Fac'
                                                                  */
#define rtCP_DeltaDx_tableData_o       rtCP_pooled_B2iC8JNZuifj  /* Computed Parameter: rtCP_DeltaDx_tableData_o
                                                                  * Referenced by: '<S220>/DeltaDx'
                                                                  */
#define rtCP_DeltaDx_bp01Data_c        rtCP_pooled_ptNqeEekMZPv  /* Computed Parameter: rtCP_DeltaDx_bp01Data_c
                                                                  * Referenced by: '<S220>/DeltaDx'
                                                                  */
#define rtCP_DeltaDy_tableData_e       rtCP_pooled_eUs7jKrdnbTk  /* Computed Parameter: rtCP_DeltaDy_tableData_e
                                                                  * Referenced by: '<S220>/DeltaDy'
                                                                  */
#define rtCP_DeltaDy_bp01Data_p        rtCP_pooled_ptNqeEekMZPv  /* Computed Parameter: rtCP_DeltaDy_bp01Data_p
                                                                  * Referenced by: '<S220>/DeltaDy'
                                                                  */
#define rtCP_uDLookupTable1_tableData_n rtCP_pooled_ZNnAKVA5AF8E /* Computed Parameter: rtCP_uDLookupTable1_tableData_n
                                                                  * Referenced by: '<S220>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data_c rtCP_pooled_ZGcSklXnjT0i  /* Computed Parameter: rtCP_uDLookupTable1_bp01Data_c
                                                                  * Referenced by: '<S220>/1-D Lookup Table1'
                                                                  */
#define rtCP_Memory32_InitialCondition_h rtCP_pooled_9SZnXb1tjilb/* Computed Parameter: rtCP_Memory32_InitialCondition_h
                                                                  * Referenced by: '<S230>/Memory32'
                                                                  */
#define rtCP_Memory31_InitialCondition_k rtCP_pooled_9SZnXb1tjilb/* Computed Parameter: rtCP_Memory31_InitialCondition_k
                                                                  * Referenced by: '<S230>/Memory31'
                                                                  */
#define rtCP_Memory2_InitialCondition  rtCP_pooled_MXWrJTZDuC5N  /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S220>/Memory2'
                                                                  */
#define rtCP_Memory2_InitialCondition_o rtCP_pooled_MXWrJTZDuC5N /* Expression: single(zeros(15,1))
                                                                  * Referenced by: '<S179>/Memory2'
                                                                  */
#define rtCP_DesireDistance_tableData  rtCP_pooled_ttLXfkn9mdUX  /* Computed Parameter: rtCP_DesireDistance_tableData
                                                                  * Referenced by: '<S220>/DesireDistance'
                                                                  */
#define rtCP_DesireDistance_bp01Data   rtCP_pooled_b185jh09PzIh  /* Computed Parameter: rtCP_DesireDistance_bp01Data
                                                                  * Referenced by: '<S220>/DesireDistance'
                                                                  */
#define rtCP_DesireDistance_bp02Data   rtCP_pooled_CaRPRewba4pt  /* Computed Parameter: rtCP_DesireDistance_bp02Data
                                                                  * Referenced by: '<S220>/DesireDistance'
                                                                  */
#define rtCP_DesireDistance_tableData_o rtCP_pooled_ttLXfkn9mdUX /* Computed Parameter: rtCP_DesireDistance_tableData_o
                                                                  * Referenced by: '<S179>/DesireDistance'
                                                                  */
#define rtCP_DesireDistance_bp01Data_j rtCP_pooled_b185jh09PzIh  /* Computed Parameter: rtCP_DesireDistance_bp01Data_j
                                                                  * Referenced by: '<S179>/DesireDistance'
                                                                  */
#define rtCP_DesireDistance_bp02Data_j rtCP_pooled_CaRPRewba4pt  /* Computed Parameter: rtCP_DesireDistance_bp02Data_j
                                                                  * Referenced by: '<S179>/DesireDistance'
                                                                  */
#define rtCP_uDLookupTable2_tableData  rtCP_pooled_vv91xKbMhYyv  /* Computed Parameter: rtCP_uDLookupTable2_tableData
                                                                  * Referenced by: '<S179>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_bp01Data   rtCP_pooled_UlKQjsBwlqia  /* Computed Parameter: rtCP_uDLookupTable2_bp01Data
                                                                  * Referenced by: '<S179>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_tableData_f rtCP_pooled_vv91xKbMhYyv /* Computed Parameter: rtCP_uDLookupTable2_tableData_f
                                                                  * Referenced by: '<S220>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_bp01Data_k rtCP_pooled_UlKQjsBwlqia  /* Computed Parameter: rtCP_uDLookupTable2_bp01Data_k
                                                                  * Referenced by: '<S220>/1-D Lookup Table2'
                                                                  */
#define rtCP_DesireDistance_maxIndex   rtCP_pooled_6ctZZI6rDglB  /* Computed Parameter: rtCP_DesireDistance_maxIndex
                                                                  * Referenced by: '<S220>/DesireDistance'
                                                                  */
#define rtCP_DesireDistance_maxIndex_i rtCP_pooled_6ctZZI6rDglB  /* Computed Parameter: rtCP_DesireDistance_maxIndex_i
                                                                  * Referenced by: '<S179>/DesireDistance'
                                                                  */
#define rtCP_Memory38_InitialCondition rtCP_pooled_pOT6yKVgFUlc  /* Computed Parameter: rtCP_Memory38_InitialCondition
                                                                  * Referenced by: '<S206>/Memory38'
                                                                  */
#define rtCP_Memory41_InitialCondition rtCP_pooled_DpqfeaQS1PpX  /* Computed Parameter: rtCP_Memory41_InitialCondition
                                                                  * Referenced by: '<S206>/Memory41'
                                                                  */
#define rtCP_Memory24_InitialCondition rtCP_pooled_6TRjH08EWfeW  /* Computed Parameter: rtCP_Memory24_InitialCondition
                                                                  * Referenced by: '<S206>/Memory24'
                                                                  */
#define rtCP_Constant2_Value_h         rtCP_pooled_9Y3LS3kCPaNW  /* Expression: [0x00 0x00;0x54 0x00;0x55 0x00;0xc8 0x00;0x00 0x00;0x00 0x00;0x00 0x00;0x00 0x00]
                                                                  * Referenced by: '<S6>/Constant2'
                                                                  */
#define rtCP_Constant3_Value_f         rtCP_pooled_cyrCkbbudVvD  /* Expression: [0x00 0x00;0x56 0x00; 0x57 0x00; 0x6d 0x00; 0x58 0x00; 0x59 0x00;0x00 0x00;0x00 0x00]
                                                                  * Referenced by: '<S6>/Constant3'
                                                                  */
#define rtCP_Constant4_Value_m         rtCP_pooled_E799Wo1r5JOD  /* Expression: [0x00 0x00;0x4f 0x00; 0x50 0x00;0x51 0x00;0x52 0x00;0x00 0x00;0x00 0x00;0x00 0x00]
                                                                  * Referenced by: '<S6>/Constant4'
                                                                  */
#define rtCP_Constant_Value_pr         rtCP_pooled_e6HU8n7YauPz  /* Computed Parameter: rtCP_Constant_Value_pr
                                                                  * Referenced by: '<S6>/Constant'
                                                                  */
#define rtCP_Memory36_InitialCondition rtCP_pooled_qcS3FDleGq0E  /* Computed Parameter: rtCP_Memory36_InitialCondition
                                                                  * Referenced by: '<S206>/Memory36'
                                                                  */
#define rtCP_Memory40_InitialCondition rtCP_pooled_Wkq8Rhg6RRWO  /* Computed Parameter: rtCP_Memory40_InitialCondition
                                                                  * Referenced by: '<S206>/Memory40'
                                                                  */
#define rtCP_Memory37_InitialCondition rtCP_pooled_qcS3FDleGq0E  /* Computed Parameter: rtCP_Memory37_InitialCondition
                                                                  * Referenced by: '<S206>/Memory37'
                                                                  */
#define rtCP_Memory42_InitialCondition rtCP_pooled_ouMKW7C8F0Hj  /* Computed Parameter: rtCP_Memory42_InitialCondition
                                                                  * Referenced by: '<S206>/Memory42'
                                                                  */

extern void Noa_Nofusion_CL(uint8_T rtu_RadarID, const uint8_T rtu_ID[6], const
  real32_T rtu_Dx[6], const real32_T rtu_Dy[6], const real32_T rtu_Vx[6], const
  real32_T rtu_Vy[6], const real32_T rtu_Ax[6], const uint8_T rtu_ObjIDK1[6],
  const uint8_T rtu_ObjAgeK1[6], B_CL_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_CheckSum8Bclc2(const uint8_T rtu_Data[64], const
  uint8_T rtu_DataID[16], B_CheckSum8Bclc2_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_MATLABFunction5(real32_T rtu_IFV2RearAxis, real32_T
  rtu_IFV2CenterAxis, real32_T rtu_A0, real32_T rtu_A1, real32_T rtu_A2,
  real32_T rtu_A3, real32_T rtu_Range_min, real32_T rtu_Range_max,
  B_MATLABFunction5_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_ACC_DisplayBar(uint8_T rtu_TimeGap, real32_T
  rtu_DesireDistance, uint8_T rtu_ACCmode, real32_T rtu_TargetRange, const
  real32_T rtu_Scale[12], boolean_T rtu_TargetExist, uint8_T rtu_DisplayBarK1,
  B_ACC_DisplayBar_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_Dyc(real32_T rtu_kapTrajFiltK1, real32_T rtu_vRef,
  real32_T rtu_kapTraj, real32_T rtu_alpSideSlipAngle, real32_T rtu_A2, real32_T
  rtu_A1, boolean_T rtu_LineValid, const real32_T rtu_ObjDx[15], const real32_T
  rtu_ObjDy[15], boolean_T rtu_TarLineValid, real32_T rtu_TarLineA2, real32_T
  rtu_TarLineA1, real32_T rtu_TarLineA0, B_Dyc_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_DycCutIn(const boolean_T rtu_ObjValid[15], const
  real32_T rtu_ObjDyc[15], const uint8_T rtu_ObjMoveSts[15], const uint8_T
  rtu_ObjCnt[15], const real32_T rtu_ObjDycHist[15], const real32_T
  rtu_ObjqDycHist[15], const real32_T rtu_dycFiltK1[15],
  B_DycCutIn_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_DycHistCalc(const boolean_T rtu_TrajHistBufferBTrajEnd
  [240], const uint8_T rtu_ObjTrajNumber[15], const uint8_T
  rtu_TrajCurrentIndex[10], const boolean_T rtu_TrajHistBufferBValid[240], const
  real32_T rtu_TrajHistBufferDxv[240], const real32_T rtu_TrajHistBufferDyv[240],
  const boolean_T rtu_ObjValid[15], real32_T rtu_dxC0, real32_T rtu_aP0,
  real32_T rtu_bP0, real32_T rtu_cP0, real32_T rtu_aP1, real32_T rtu_bP1,
  real32_T rtu_cP1, B_DycHistCalc_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_LostTargetCalc(const boolean_T rtu_ObjValid[15], const
  real32_T rtu_ObjDx[15], const real32_T rtu_ObjDy[15], real32_T rtu_DeltaDx,
  real32_T rtu_DeltaDy, uint8_T rtu_P0IDK1, real32_T rtu_P0VxK1, real32_T
  rtu_P0DxK1, real32_T rtu_P0DyK1, real32_T rtu_P0RangeK1, real32_T rtu_P0ArGK1,
  real32_T rtu_P0DycK1, real32_T rtu_P0VycK1, boolean_T rtu_P0CutIn_bK1,
  real32_T rtu_tTargetLostK1, B_LostTargetCalc_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_Lpb(real32_T rtu_vRef, real32_T
  rtu_alpSumSlideCurveness, const boolean_T rtu_ObjValid[15], const real32_T
  rtu_ObjDyc[15], const real32_T rtu_ObjDycHist[15], const real32_T
  rtu_ObjqDycHist[15], const real32_T rtu_ObjVyc[15], const real32_T
  rtu_ObjYawAngle[15], const real32_T rtu_ObjDylaneEdgeRight[15], const real32_T
  rtu_ObjDyEdgeWidthRight[15], const real32_T rtu_ObjDylaneEdgeLeft[15], const
  real32_T rtu_ObjDyEdgeWidthLeft[15], B_Lpb_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_P0TrajHistCalc01(real32_T rtu_vRef, real32_T rtu_tCycle,
  real32_T rtu_tSameHandle, boolean_T rtu_CutIn, real32_T rtu_P0Dx, real32_T
  rtu_P0Dy, real32_T rtu_EgoDDeltaX, real32_T rtu_EgoDDeltaY, real32_T
  rtu_EgoCosOfPsi, real32_T rtu_EgoSinOfPsi, boolean_T rtu_TarLineValid,
  real32_T rtu_TarLineA2, real32_T rtu_TarLineA1, real32_T rtu_TarLineA0,
  uint8_T rtu_P0TrajHistNumK1, const real32_T rtu_P0TrajHistDxvK1[24], const
  real32_T rtu_P0TrajHistDyvK1[24], B_P0TrajHistCalc01_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_P0TrajHistCalc1(uint8_T rtu_P0TrajHistNum1, const
  real32_T rtu_P0TrajHistDxv1[24], const real32_T rtu_P0TrajHistDyv1[24],
  B_P0TrajHistCalc1_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_Plaus(real32_T rtu_dxMaxFollow, const boolean_T
  rtu_ObjValid[15], const real32_T rtu_ObjDx[15], const real32_T rtu_ObjVx[15],
  const real32_T rtu_ObjOnLeft[15], const real32_T rtu_ObjOnRight[15], const
  real32_T rtu_ObjDycHist[15], const real32_T rtu_ObjqDycHist[15], const
  real32_T rtu_ObjLpb[15], const real32_T rtu_ObjLpbLeft[15], const real32_T
  rtu_ObjLpbRight[15], const real32_T rtu_ObjPlausK1[15], const real32_T
  rtu_ObjPlausLeftK1[15], const real32_T rtu_ObjPlausRightK1[15],
  B_Plaus_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_Spw(real32_T rtu_AlpSumSlideCurveness, real32_T
  rtu_kapCourseErr, const boolean_T rtu_ObjValid[15], const real32_T rtu_DycASI
  [15], const real32_T rtu_ObjDx[15], const real32_T rtu_ObjDyc[15], const
  real32_T rtu_ObjDycHist[15], const real32_T rtu_ObjqDycHist[15],
  B_Spw_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_Std(const real32_T rtu_u[5], B_Std_Noa_Nofusion_T
  *localB);
extern void Noa_Nofusion_TargetBrake(uint8_T rtu_ID, const real32_T rtu_VxG[15],
  const real32_T rtu_VyG[15], const uint8_T rtu_BrakeLightIndic[15],
  B_TargetBrake_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_TimeCalc(boolean_T rtu_SameTarget, uint8_T rtu_TargetID,
  real32_T rtu_tSameHandleTK1, B_TimeCalc_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_Trajectory_Init(DW_Trajectory_Noa_Nofusion_T *localDW);
extern void Noa_Nofusion_Trajectory_Update(B_Trajectory_Noa_Nofusion_T *localB,
  DW_Trajectory_Noa_Nofusion_T *localDW);
extern void Noa_Nofusion_Trajectory(real32_T rtu_Kap, real32_T rtu_VxvRef,
  real32_T rtu_AlpSideSlipAngle, const boolean_T rtu_ObjValid[15], const
  real32_T rtu_ObjDx[15], const real32_T rtu_ObjDy[15], const uint8_T
  rtu_ObjClass[15], const uint8_T rtu_ObjCntAlive[15],
  B_Trajectory_Noa_Nofusion_T *localB, DW_Trajectory_Noa_Nofusion_T *localDW);
extern void Noa_Nofusion_VycCalc(real32_T rtu_dxC0, real32_T rtu_aP0, real32_T
  rtu_bP0, real32_T rtu_aP1, real32_T rtu_bP1, const boolean_T rtu_ObjValid[15],
  const real32_T rtu_ObjDx[15], const real32_T rtu_ObjVxG[15], const real32_T
  rtu_ObjVyG[15], B_VycCalc_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_dyLaneWidthSteerAdapt(real32_T rtu_kap, real32_T
  rtu_dyAdapt, B_dyLaneWidthSteerAdapt_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_wCutInVy(const boolean_T rtu_ObjValid[15], const
  real32_T rtu_ObjDycCutIn[15], const real32_T rtu_ObjWidth[15], const real32_T
  rtu_ObjVyc[15], const real32_T rtu_ObjDx[15], const real32_T rtu_ObjDy[15],
  const uint8_T rtu_ObjCnt[15], const real32_T rtu_ObjDycFilt[15], const
  real32_T rtu_ObjwCutInVyK1[15], B_wCutInVy_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_wCutOutVy(real32_T rtu_vRef, real32_T rtu_kap, real32_T
  rtu_tDirIndLeft, real32_T rtu_tDirIndRight, const boolean_T rtu_ObjValid[15],
  const real32_T rtu_ObjDycCutIn[15], const real32_T rtu_ObjWidth[15], const
  real32_T rtu_ObjVyc[15], const real32_T rtu_ObjDx[15], const real32_T
  rtu_ObjDy[15], const real32_T rtu_ObjVx[15], const real32_T rtu_ObjVy[15],
  const real32_T rtu_ObjDyc[15], const boolean_T rtu_ObjDrive_b[15], const
  uint8_T rtu_ObjCnt[15], const real32_T rtu_ObjDycFilt[15], const real32_T
  rtu_ObjwCutoutVyK1[15], B_wCutOutVy_Noa_Nofusion_T *localB);
extern void Noa_Nofusion_ForEachSubsystem(int32_T NumIters, const
  SPI_EQ4_OBJ_ELEM_BUS rtu_EQ4_OBJ_ELEM[20], uint8_T rty_id[20], real32_T
  rty_confidence[20], uint8_T rty_classification[20], real32_T rty_width[20],
  real32_T rty_LongDis[20], real32_T rty_LatDis[20], real32_T rty_AbsLongAcc[20],
  real32_T rty_AbsLongVel[20], real32_T rty_AbsLatVel[20], uint8_T
  rty_BrakeLight[20], uint16_T rty_Age[20], uint8_T rty_motionSts[20], uint8_T
  rty_motionCategory[20], uint8_T rty_motionOrientation[20]);
extern void Noa_Nofusion_Subsystem3_Start(void);
extern void Noa_Nofusion_Subsystem3(void);
extern void Noa_Nofusion_UDP_Received_Start(void);
extern void Noa_Nofusion_UDP_Received(void);
extern void Noa_Nofusion_fla(real32_T rtu_A0, real32_T rtu_A1, real32_T rtu_A2,
  real32_T rtu_A3, real32_T rtu_Range_min, real32_T rtu_Range_max, real32_T
  *rty_a0, real32_T *rty_a1, real32_T *rty_a2, real32_T *rty_a3, real32_T
  *rty_Rmin, real32_T *rty_Rmax);

#endif                                 /* RTW_HEADER_Noa_Nofusion_private_h_ */
