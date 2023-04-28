/*
 * PubIfStateVSM_MDL_private.h
 *
 * Code generation for model "PubIfStateVSM_MDL".
 *
 * Model version              : 1.130
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:14:44 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfStateVSM_MDL_private_h_
#define RTW_HEADER_PubIfStateVSM_MDL_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
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

extern const real_T rtCP_pooled_YlkzjyZfcWhg[7];
extern const real_T rtCP_pooled_hPGLTJuJo7Fb[3];
extern const real_T rtCP_pooled_Aw4Vp8i6AiGB[8];
extern const real_T rtCP_pooled_paJzx064pZfA[8];
extern const real_T rtCP_pooled_GQrghcldwJ8w[10];
extern const real32_T rtCP_pooled_Ezx19RCKME7u[16];
extern const real32_T rtCP_pooled_yRgKBraCdQjy[16];
extern const real32_T rtCP_pooled_MYBcC4wThEjo[16];
extern const uint16_T rtCP_pooled_DNjLV8LL6Qe7[16];
extern const uint16_T rtCP_pooled_A9fv9q4md0pv[48];
extern const uint8_T rtCP_pooled_9O35IEupAHiR[10];
extern const uint8_T rtCP_pooled_tdDZ4cVmdo52[23];
extern const uint8_T rtCP_pooled_ZGk5BWbB85rC[23];
extern const uint8_T rtCP_pooled_oETaLBZ8I8sV[16];
extern const uint8_T rtCP_pooled_VI89gAfVRkMb[48];
extern const uint8_T rtCP_pooled_0qJaa5ugW8Lm[48];
extern const uint8_T rtCP_pooled_UuJo7e4unbcT[3];
extern const uint8_T rtCP_pooled_TfCB5UoSI0iD[10];
extern const uint8_T rtCP_pooled_QsYNSEJ18IFx[11];
extern const uint8_T rtCP_pooled_trtvv3B7KoZV[3];
extern const uint8_T rtCP_pooled_xLTuuHe5hHK1[11];

#define rtCP_Lane_Width_table_Value    rtCP_pooled_YlkzjyZfcWhg  /* Expression: [2.5,3,3.5,4,4.5,5,5.5]
                                                                  * Referenced by: '<S1226>/Lane_Width_table'
                                                                  */
#define rtCP_Sensitive_table1_Value    rtCP_pooled_hPGLTJuJo7Fb  /* Expression: [0 1 2]
                                                                  * Referenced by: '<S1226>/Sensitive_table1'
                                                                  */
#define rtCP_Lane_Width_table1_Value   rtCP_pooled_YlkzjyZfcWhg  /* Expression: [2.5,3,3.5,4,4.5,5,5.5]
                                                                  * Referenced by: '<S1355>/Lane_Width_table1'
                                                                  */
#define rtCP_Sensitive_table2_Value    rtCP_pooled_hPGLTJuJo7Fb  /* Expression: [0 1 2]
                                                                  * Referenced by: '<S1355>/Sensitive_table2'
                                                                  */
#define rtCP_LCK_table                 rtCP_pooled_Aw4Vp8i6AiGB  /* Expression: [0 0 1 1 0 0 0 0]
                                                                  * Referenced by: '<S649>/LCK'
                                                                  */
#define rtCP_LDW_table                 rtCP_pooled_paJzx064pZfA  /* Expression: [0 0 1 0 1 1 0 0]
                                                                  * Referenced by: '<S649>/LDW'
                                                                  */
#define rtCP_ELK_table                 rtCP_pooled_GQrghcldwJ8w  /* Expression: [0 0 1 1 1 1 1 1 1 0]
                                                                  * Referenced by: '<S649>/ELK'
                                                                  */
#define rtCP_LKA_table                 rtCP_pooled_paJzx064pZfA  /* Expression: [0 0 1 0 1 1 0 0]
                                                                  * Referenced by: '<S649>/LKA'
                                                                  */
#define rtCP_LCK1_table                rtCP_pooled_Aw4Vp8i6AiGB  /* Expression: [0 0 1 1 0 0 0 0]
                                                                  * Referenced by: '<S649>/LCK1'
                                                                  */
#define rtCP_preDisMinTable_tableData  rtCP_pooled_Ezx19RCKME7u  /* Computed Parameter: rtCP_preDisMinTable_tableData
                                                                  * Referenced by: '<S847>/preDisMinTable'
                                                                  */
#define rtCP_preDisMinTable_bp01Data   rtCP_pooled_yRgKBraCdQjy  /* Computed Parameter: rtCP_preDisMinTable_bp01Data
                                                                  * Referenced by: '<S847>/preDisMinTable'
                                                                  */
#define rtCP_tDeltaEpsTable_tableData  rtCP_pooled_MYBcC4wThEjo  /* Computed Parameter: rtCP_tDeltaEpsTable_tableData
                                                                  * Referenced by: '<S847>/tDeltaEpsTable'
                                                                  */
#define rtCP_tDeltaEpsTable_bp01Data   rtCP_pooled_yRgKBraCdQjy  /* Computed Parameter: rtCP_tDeltaEpsTable_bp01Data
                                                                  * Referenced by: '<S847>/tDeltaEpsTable'
                                                                  */
#define rtCP_SPLEnableDistTable2_tableData rtCP_pooled_DNjLV8LL6Qe7/* Expression: P_VSM_TSR_Dis_keep_SPL_Table
                                                                    * Referenced by: '<S1652>/SPLEnableDistTable2'
                                                                    */
#define rtCP_SPLEnableDistTable1_tableData rtCP_pooled_DNjLV8LL6Qe7/* Expression: P_VSM_TSR_Dis_keep_SPL_Table
                                                                    * Referenced by: '<S1652>/SPLEnableDistTable1'
                                                                    */
#define rtCP_uDLookupTable_tableData   rtCP_pooled_A9fv9q4md0pv  /* Expression: P_VSM_TSR_Dis_keep_TS_Table
                                                                  * Referenced by: '<S1657>/1-D Lookup Table'
                                                                  */
#define rtCP_DirectLookupTablenD_table rtCP_pooled_9O35IEupAHiR  /* Computed Parameter: rtCP_DirectLookupTablenD_table
                                                                  * Referenced by: '<S6>/Direct Lookup Table (n-D)'
                                                                  */
#define rtCP_SPLEnableSupp_tableData   rtCP_pooled_tdDZ4cVmdo52  /* Expression: P_VSM_TSR_Ena_SPLSupp_Table
                                                                  * Referenced by: '<S1652>/SPLEnableSupp'
                                                                  */
#define rtCP_SPLEnableSupp_bp01Data    rtCP_pooled_ZGk5BWbB85rC  /* Expression: [0:1:0x16]
                                                                  * Referenced by: '<S1652>/SPLEnableSupp'
                                                                  */
#define rtCP_SPLEnableDistTable2_bp01Data rtCP_pooled_oETaLBZ8I8sV/* Computed Parameter: rtCP_SPLEnableDistTable2_bp01Data
                                                                   * Referenced by: '<S1652>/SPLEnableDistTable2'
                                                                   */
#define rtCP_SPLEnableDistTable1_bp01Data rtCP_pooled_oETaLBZ8I8sV/* Computed Parameter: rtCP_SPLEnableDistTable1_bp01Data
                                                                   * Referenced by: '<S1652>/SPLEnableDistTable1'
                                                                   */
#define rtCP_uDLookupTable2_tableData  rtCP_pooled_VI89gAfVRkMb  /* Expression: P_VSM_TSR_Ena_TS_Table
                                                                  * Referenced by: '<S1657>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_bp01Data   rtCP_pooled_0qJaa5ugW8Lm  /* Computed Parameter: rtCP_uDLookupTable2_bp01Data
                                                                  * Referenced by: '<S1657>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_0qJaa5ugW8Lm  /* Computed Parameter: rtCP_uDLookupTable_bp01Data
                                                                  * Referenced by: '<S1657>/1-D Lookup Table'
                                                                  */
#define rtCP_DirectLookupTablenD2_table rtCP_pooled_UuJo7e4unbcT /* Computed Parameter: rtCP_DirectLookupTablenD2_table
                                                                  * Referenced by: '<S1615>/Direct Lookup Table (n-D)2'
                                                                  */
#define rtCP_DirectLookupTablenD1_table rtCP_pooled_TfCB5UoSI0iD /* Computed Parameter: rtCP_DirectLookupTablenD1_table
                                                                  * Referenced by: '<S365>/Direct Lookup Table (n-D)1'
                                                                  */
#define rtCP_DirectLookupTablenD2_table_b rtCP_pooled_QsYNSEJ18IFx/* Computed Parameter: rtCP_DirectLookupTablenD2_table_b
                                                                   * Referenced by: '<S365>/Direct Lookup Table (n-D)2'
                                                                   */
#define rtCP_DirectLookupTablenD_table_c rtCP_pooled_trtvv3B7KoZV/* Computed Parameter: rtCP_DirectLookupTablenD_table_c
                                                                  * Referenced by: '<S1687>/Direct Lookup Table (n-D)'
                                                                  */
#define rtCP_DirectLookupTablenD3_table rtCP_pooled_xLTuuHe5hHK1 /* Computed Parameter: rtCP_DirectLookupTablenD3_table
                                                                  * Referenced by: '<S365>/Direct Lookup Table (n-D)3'
                                                                  */

/* Invariant block signals (default storage) */
extern const ConstB_PubIfStateVSM_MDL_h_T PubIfStateVSM_MDL_ConstB;

#endif                             /* RTW_HEADER_PubIfStateVSM_MDL_private_h_ */
