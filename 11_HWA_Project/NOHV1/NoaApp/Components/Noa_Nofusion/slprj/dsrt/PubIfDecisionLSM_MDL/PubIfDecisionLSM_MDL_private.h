/*
 * PubIfDecisionLSM_MDL_private.h
 *
 * Code generation for model "PubIfDecisionLSM_MDL".
 *
 * Model version              : 1.1192
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:28 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfDecisionLSM_MDL_private_h_
#define RTW_HEADER_PubIfDecisionLSM_MDL_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "PubIfDecisionLSM_MDL.h"
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

extern const real_T rtCP_pooled_APUvZUpGgzGa[12];
extern const real_T rtCP_pooled_TA26mThuM60l[12];
extern const real32_T rtCP_pooled_Ezx19RCKME7u[16];
extern const real32_T rtCP_pooled_yRgKBraCdQjy[16];
extern const real32_T rtCP_pooled_eLYd44ZHRpmD[7];
extern const real32_T rtCP_pooled_5LewdQm0Kkh8[7];
extern const real32_T rtCP_pooled_AS8Uq6tYMQfg[52];
extern const real32_T rtCP_pooled_ghmmasbfVfdQ[4];
extern const real32_T rtCP_pooled_6ky5uNdGD9qs[13];
extern const real32_T rtCP_pooled_1JkV83xUUEIZ[36];
extern const real32_T rtCP_pooled_u9Joc4J6c6k8[4];
extern const real32_T rtCP_pooled_4CA6nFMwPIg1[9];
extern const real32_T rtCP_pooled_TWITLQktTYTn[7];
extern const real32_T rtCP_pooled_gtktrMwJe4hr[7];
extern const real32_T rtCP_pooled_lMv6JOJbq7P8[3];
extern const real32_T rtCP_pooled_vbEgOUqs6unj[3];
extern const real32_T rtCP_pooled_4SeNinhUfgTP[3];
extern const uint32_T rtCP_pooled_Fp1NnSPyCNxl[2];
extern const uint32_T rtCP_pooled_77V7dlw3TNER[2];

#define rtCP_Constant10_Value          rtCP_pooled_APUvZUpGgzGa  /* Expression: [0,0,0.2,0.5,0.8,1,1,1,1,0.3,0,0]
                                                                  * Referenced by: '<S49>/Constant10'
                                                                  */
#define rtCP_Constant11_Value          rtCP_pooled_TA26mThuM60l  /* Expression: [-1.2,-0.2,0,0.5,1,1.3,1.5,2.1,2.3,3.5,4,5]
                                                                  * Referenced by: '<S49>/Constant11'
                                                                  */
#define rtCP_Constant13_Value          rtCP_pooled_APUvZUpGgzGa  /* Expression: [0,0,0.2,0.5,0.8,1,1,1,1,0.3,0,0]
                                                                  * Referenced by: '<S49>/Constant13'
                                                                  */
#define rtCP_Constant14_Value          rtCP_pooled_TA26mThuM60l  /* Expression: [-1.2,-0.2,0,0.5,1,1.3,1.5,2.1,2.3,3.5,4,5]
                                                                  * Referenced by: '<S49>/Constant14'
                                                                  */
#define rtCP_Constant10_Value_o        rtCP_pooled_APUvZUpGgzGa  /* Expression: [0,0,0.2,0.5,0.8,1,1,1,1,0.3,0,0]
                                                                  * Referenced by: '<S50>/Constant10'
                                                                  */
#define rtCP_Constant11_Value_k        rtCP_pooled_TA26mThuM60l  /* Expression: [-1.2,-0.2,0,0.5,1,1.3,1.5,2.1,2.3,3.5,4,5]
                                                                  * Referenced by: '<S50>/Constant11'
                                                                  */
#define rtCP_Constant13_Value_e        rtCP_pooled_APUvZUpGgzGa  /* Expression: [0,0,0.2,0.5,0.8,1,1,1,1,0.3,0,0]
                                                                  * Referenced by: '<S50>/Constant13'
                                                                  */
#define rtCP_Constant14_Value_m        rtCP_pooled_TA26mThuM60l  /* Expression: [-1.2,-0.2,0,0.5,1,1.3,1.5,2.1,2.3,3.5,4,5]
                                                                  * Referenced by: '<S50>/Constant14'
                                                                  */
#define rtCP_preDisMinTable_tableData  rtCP_pooled_Ezx19RCKME7u  /* Computed Parameter: rtCP_preDisMinTable_tableData
                                                                  * Referenced by: '<S17>/preDisMinTable'
                                                                  */
#define rtCP_preDisMinTable_bp01Data   rtCP_pooled_yRgKBraCdQjy  /* Computed Parameter: rtCP_preDisMinTable_bp01Data
                                                                  * Referenced by: '<S17>/preDisMinTable'
                                                                  */
#define rtCP_uDLookupTable4_tableData  rtCP_pooled_eLYd44ZHRpmD  /* Computed Parameter: rtCP_uDLookupTable4_tableData
                                                                  * Referenced by: '<S50>/1-D Lookup Table4'
                                                                  */
#define rtCP_uDLookupTable4_bp01Data   rtCP_pooled_5LewdQm0Kkh8  /* Computed Parameter: rtCP_uDLookupTable4_bp01Data
                                                                  * Referenced by: '<S50>/1-D Lookup Table4'
                                                                  */
#define rtCP_uDLookupTable3_tableData  rtCP_pooled_eLYd44ZHRpmD  /* Computed Parameter: rtCP_uDLookupTable3_tableData
                                                                  * Referenced by: '<S50>/1-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable3_bp01Data   rtCP_pooled_5LewdQm0Kkh8  /* Computed Parameter: rtCP_uDLookupTable3_bp01Data
                                                                  * Referenced by: '<S50>/1-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable_tableData   rtCP_pooled_AS8Uq6tYMQfg  /* Computed Parameter: rtCP_uDLookupTable_tableData
                                                                  * Referenced by: '<S50>/2-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_ghmmasbfVfdQ  /* Computed Parameter: rtCP_uDLookupTable_bp01Data
                                                                  * Referenced by: '<S50>/2-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp02Data    rtCP_pooled_6ky5uNdGD9qs  /* Computed Parameter: rtCP_uDLookupTable_bp02Data
                                                                  * Referenced by: '<S50>/2-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable3_tableData_b rtCP_pooled_1JkV83xUUEIZ /* Computed Parameter: rtCP_uDLookupTable3_tableData_b
                                                                  * Referenced by: '<S50>/2-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable3_bp01Data_p rtCP_pooled_u9Joc4J6c6k8  /* Computed Parameter: rtCP_uDLookupTable3_bp01Data_p
                                                                  * Referenced by: '<S50>/2-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable3_bp02Data   rtCP_pooled_4CA6nFMwPIg1  /* Computed Parameter: rtCP_uDLookupTable3_bp02Data
                                                                  * Referenced by: '<S50>/2-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable5_tableData  rtCP_pooled_TWITLQktTYTn  /* Computed Parameter: rtCP_uDLookupTable5_tableData
                                                                  * Referenced by: '<S50>/1-D Lookup Table5'
                                                                  */
#define rtCP_uDLookupTable5_bp01Data   rtCP_pooled_gtktrMwJe4hr  /* Computed Parameter: rtCP_uDLookupTable5_bp01Data
                                                                  * Referenced by: '<S50>/1-D Lookup Table5'
                                                                  */
#define rtCP_uDLookupTable1_tableData  rtCP_pooled_AS8Uq6tYMQfg  /* Computed Parameter: rtCP_uDLookupTable1_tableData
                                                                  * Referenced by: '<S50>/2-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data   rtCP_pooled_ghmmasbfVfdQ  /* Computed Parameter: rtCP_uDLookupTable1_bp01Data
                                                                  * Referenced by: '<S50>/2-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp02Data   rtCP_pooled_6ky5uNdGD9qs  /* Computed Parameter: rtCP_uDLookupTable1_bp02Data
                                                                  * Referenced by: '<S50>/2-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable4_tableData_e rtCP_pooled_1JkV83xUUEIZ /* Computed Parameter: rtCP_uDLookupTable4_tableData_e
                                                                  * Referenced by: '<S50>/2-D Lookup Table4'
                                                                  */
#define rtCP_uDLookupTable4_bp01Data_n rtCP_pooled_u9Joc4J6c6k8  /* Computed Parameter: rtCP_uDLookupTable4_bp01Data_n
                                                                  * Referenced by: '<S50>/2-D Lookup Table4'
                                                                  */
#define rtCP_uDLookupTable4_bp02Data   rtCP_pooled_4CA6nFMwPIg1  /* Computed Parameter: rtCP_uDLookupTable4_bp02Data
                                                                  * Referenced by: '<S50>/2-D Lookup Table4'
                                                                  */
#define rtCP_uDLookupTable6_tableData  rtCP_pooled_TWITLQktTYTn  /* Computed Parameter: rtCP_uDLookupTable6_tableData
                                                                  * Referenced by: '<S50>/1-D Lookup Table6'
                                                                  */
#define rtCP_uDLookupTable6_bp01Data   rtCP_pooled_gtktrMwJe4hr  /* Computed Parameter: rtCP_uDLookupTable6_bp01Data
                                                                  * Referenced by: '<S50>/1-D Lookup Table6'
                                                                  */
#define rtCP_D1_tableData              rtCP_pooled_lMv6JOJbq7P8  /* Computed Parameter: rtCP_D1_tableData
                                                                  * Referenced by: '<S17>/D1'
                                                                  */
#define rtCP_D1_bp01Data               rtCP_pooled_vbEgOUqs6unj  /* Computed Parameter: rtCP_D1_bp01Data
                                                                  * Referenced by: '<S17>/D1'
                                                                  */
#define rtCP_D2_tableData              rtCP_pooled_4SeNinhUfgTP  /* Computed Parameter: rtCP_D2_tableData
                                                                  * Referenced by: '<S17>/D2'
                                                                  */
#define rtCP_D2_bp01Data               rtCP_pooled_vbEgOUqs6unj  /* Computed Parameter: rtCP_D2_bp01Data
                                                                  * Referenced by: '<S17>/D2'
                                                                  */
#define rtCP_uDLookupTable3_tableData_f rtCP_pooled_eLYd44ZHRpmD /* Computed Parameter: rtCP_uDLookupTable3_tableData_f
                                                                  * Referenced by: '<S49>/1-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable3_bp01Data_e rtCP_pooled_5LewdQm0Kkh8  /* Computed Parameter: rtCP_uDLookupTable3_bp01Data_e
                                                                  * Referenced by: '<S49>/1-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable1_tableData_m rtCP_pooled_eLYd44ZHRpmD /* Computed Parameter: rtCP_uDLookupTable1_tableData_m
                                                                  * Referenced by: '<S49>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data_k rtCP_pooled_5LewdQm0Kkh8  /* Computed Parameter: rtCP_uDLookupTable1_bp01Data_k
                                                                  * Referenced by: '<S49>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable2_tableData  rtCP_pooled_AS8Uq6tYMQfg  /* Computed Parameter: rtCP_uDLookupTable2_tableData
                                                                  * Referenced by: '<S49>/2-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_bp01Data   rtCP_pooled_ghmmasbfVfdQ  /* Computed Parameter: rtCP_uDLookupTable2_bp01Data
                                                                  * Referenced by: '<S49>/2-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_bp02Data   rtCP_pooled_6ky5uNdGD9qs  /* Computed Parameter: rtCP_uDLookupTable2_bp02Data
                                                                  * Referenced by: '<S49>/2-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable3_tableData_p rtCP_pooled_1JkV83xUUEIZ /* Computed Parameter: rtCP_uDLookupTable3_tableData_p
                                                                  * Referenced by: '<S49>/2-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable3_bp01Data_a rtCP_pooled_u9Joc4J6c6k8  /* Computed Parameter: rtCP_uDLookupTable3_bp01Data_a
                                                                  * Referenced by: '<S49>/2-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable3_bp02Data_o rtCP_pooled_4CA6nFMwPIg1  /* Computed Parameter: rtCP_uDLookupTable3_bp02Data_o
                                                                  * Referenced by: '<S49>/2-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable5_tableData_k rtCP_pooled_TWITLQktTYTn /* Computed Parameter: rtCP_uDLookupTable5_tableData_k
                                                                  * Referenced by: '<S49>/1-D Lookup Table5'
                                                                  */
#define rtCP_uDLookupTable5_bp01Data_l rtCP_pooled_gtktrMwJe4hr  /* Computed Parameter: rtCP_uDLookupTable5_bp01Data_l
                                                                  * Referenced by: '<S49>/1-D Lookup Table5'
                                                                  */
#define rtCP_uDLookupTable5_tableData_f rtCP_pooled_AS8Uq6tYMQfg /* Computed Parameter: rtCP_uDLookupTable5_tableData_f
                                                                  * Referenced by: '<S49>/2-D Lookup Table5'
                                                                  */
#define rtCP_uDLookupTable5_bp01Data_h rtCP_pooled_ghmmasbfVfdQ  /* Computed Parameter: rtCP_uDLookupTable5_bp01Data_h
                                                                  * Referenced by: '<S49>/2-D Lookup Table5'
                                                                  */
#define rtCP_uDLookupTable5_bp02Data   rtCP_pooled_6ky5uNdGD9qs  /* Computed Parameter: rtCP_uDLookupTable5_bp02Data
                                                                  * Referenced by: '<S49>/2-D Lookup Table5'
                                                                  */
#define rtCP_uDLookupTable4_tableData_b rtCP_pooled_1JkV83xUUEIZ /* Computed Parameter: rtCP_uDLookupTable4_tableData_b
                                                                  * Referenced by: '<S49>/2-D Lookup Table4'
                                                                  */
#define rtCP_uDLookupTable4_bp01Data_g rtCP_pooled_u9Joc4J6c6k8  /* Computed Parameter: rtCP_uDLookupTable4_bp01Data_g
                                                                  * Referenced by: '<S49>/2-D Lookup Table4'
                                                                  */
#define rtCP_uDLookupTable4_bp02Data_o rtCP_pooled_4CA6nFMwPIg1  /* Computed Parameter: rtCP_uDLookupTable4_bp02Data_o
                                                                  * Referenced by: '<S49>/2-D Lookup Table4'
                                                                  */
#define rtCP_uDLookupTable6_tableData_o rtCP_pooled_TWITLQktTYTn /* Computed Parameter: rtCP_uDLookupTable6_tableData_o
                                                                  * Referenced by: '<S49>/1-D Lookup Table6'
                                                                  */
#define rtCP_uDLookupTable6_bp01Data_f rtCP_pooled_gtktrMwJe4hr  /* Computed Parameter: rtCP_uDLookupTable6_bp01Data_f
                                                                  * Referenced by: '<S49>/1-D Lookup Table6'
                                                                  */
#define rtCP_uDLookupTable_maxIndex    rtCP_pooled_Fp1NnSPyCNxl  /* Computed Parameter: rtCP_uDLookupTable_maxIndex
                                                                  * Referenced by: '<S50>/2-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable3_maxIndex   rtCP_pooled_77V7dlw3TNER  /* Computed Parameter: rtCP_uDLookupTable3_maxIndex
                                                                  * Referenced by: '<S50>/2-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable1_maxIndex   rtCP_pooled_Fp1NnSPyCNxl  /* Computed Parameter: rtCP_uDLookupTable1_maxIndex
                                                                  * Referenced by: '<S50>/2-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable4_maxIndex   rtCP_pooled_77V7dlw3TNER  /* Computed Parameter: rtCP_uDLookupTable4_maxIndex
                                                                  * Referenced by: '<S50>/2-D Lookup Table4'
                                                                  */
#define rtCP_uDLookupTable2_maxIndex   rtCP_pooled_Fp1NnSPyCNxl  /* Computed Parameter: rtCP_uDLookupTable2_maxIndex
                                                                  * Referenced by: '<S49>/2-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable3_maxIndex_g rtCP_pooled_77V7dlw3TNER  /* Computed Parameter: rtCP_uDLookupTable3_maxIndex_g
                                                                  * Referenced by: '<S49>/2-D Lookup Table3'
                                                                  */
#define rtCP_uDLookupTable5_maxIndex   rtCP_pooled_Fp1NnSPyCNxl  /* Computed Parameter: rtCP_uDLookupTable5_maxIndex
                                                                  * Referenced by: '<S49>/2-D Lookup Table5'
                                                                  */
#define rtCP_uDLookupTable4_maxIndex_l rtCP_pooled_77V7dlw3TNER  /* Computed Parameter: rtCP_uDLookupTable4_maxIndex_l
                                                                  * Referenced by: '<S49>/2-D Lookup Table4'
                                                                  */

/* Invariant block signals (default storage) */
extern const ConstB_PubIfDecisionLSM_MDL_h_T PubIfDecisionLSM_MDL_ConstB;
extern void PubIfDecisionLSM_MDL_f(real32_T rtu_A0, real32_T rtu_A1, real32_T
  rtu_A2, real32_T rtu_A3, real32_T rtu_Range_min, real32_T rtu_Range_max,
  real32_T *rty_a0, real32_T *rty_a1, real32_T *rty_a2, real32_T *rty_a3,
  real32_T *rty_Rmin, real32_T *rty_Rmax);

#endif                          /* RTW_HEADER_PubIfDecisionLSM_MDL_private_h_ */
