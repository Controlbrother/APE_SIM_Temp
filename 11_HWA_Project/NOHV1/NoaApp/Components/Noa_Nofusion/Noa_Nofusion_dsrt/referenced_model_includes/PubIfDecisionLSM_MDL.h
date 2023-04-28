/*
 * Code generation for system model 'PubIfDecisionLSM_MDL'
 * For more details, see corresponding source file PubIfDecisionLSM_MDL.c
 *
 */

#ifndef RTW_HEADER_PubIfDecisionLSM_MDL_h_
#define RTW_HEADER_PubIfDecisionLSM_MDL_h_
#include <math.h>
#include <string.h>
#ifndef PubIfDecisionLSM_MDL_COMMON_INCLUDES_
#define PubIfDecisionLSM_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                               /* PubIfDecisionLSM_MDL_COMMON_INCLUDES_ */

#include "PubIfDecisionLSM_MDL_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Block signals for system '<S4>/LHLine1' */
#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T LHC0;                       /* '<S4>/LHLine1' */
  real32_T LHC1;                       /* '<S4>/LHLine1' */
  real32_T LHC2;                       /* '<S4>/LHLine1' */
  real32_T LHC3;                       /* '<S4>/LHLine1' */
  real32_T LHDxMin;                    /* '<S4>/LHLine1' */
  real32_T LHDxMax;                    /* '<S4>/LHLine1' */
} B_LHLine1_PubIfDecisionLSM_MDL_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S65>/If Action Subsystem' */
#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint16_T Add;                        /* '<S66>/Add' */
} B_IfActionSubsystem_PubIfDecisionLSM_MDL_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S150>/MATLAB Function14' */
#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T y;                           /* '<S150>/MATLAB Function14' */
  uint8_T i;                           /* '<S150>/MATLAB Function14' */
} B_MATLABFunction14_PubIfDecisionLSM_MDL_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S49>/MATLAB Function2' */
#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T Changelane;                  /* '<S49>/MATLAB Function2' */
  uint8_T Lock_counter;                /* '<S49>/MATLAB Function2' */
} B_MATLABFunction2_PubIfDecisionLSM_MDL_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S49>/MATLAB Function3' */
#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Fac1;                       /* '<S49>/MATLAB Function3' */
  real32_T Fac2;                       /* '<S49>/MATLAB Function3' */
  real32_T Fac3;                       /* '<S49>/MATLAB Function3' */
} B_MATLABFunction3_PubIfDecisionLSM_MDL_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S49>/MATLAB Function7' */
#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T dy2_Ran;                    /* '<S49>/MATLAB Function7' */
  real32_T dy3_Ran;                    /* '<S49>/MATLAB Function7' */
} B_MATLABFunction7_PubIfDecisionLSM_MDL_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'PubIfDecisionLSM_MDL' */
#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Product8[12];                 /* '<S50>/Product8' */
  real_T Product9[12];                 /* '<S50>/Product9' */
  real_T UnitDelay28[4];               /* '<S17>/Unit Delay28' */
  real_T UnitDelay29[4];               /* '<S17>/Unit Delay29' */
  real_T Product8_k[12];               /* '<S49>/Product8' */
  real_T Product9_g[12];               /* '<S49>/Product9' */
  real_T fix_time[4];                  /* '<S17>/VisLineFilter2' */
  real_T Fault[4];                     /* '<S17>/VisLineFilter2' */
  uint32_T FixPtSum1;                  /* '<S5>/FixPt Sum1' */
  uint32_T FixPtSwitch;                /* '<S6>/FixPt Switch' */
  uint32_T LSM_SubModel_VERSION;       /* '<S1>/Constant' */
  uint32_T LSM_SubModel_Number;        /* '<S1>/Constant1' */
  real32_T FunctionCaller4_o1;         /* '<S4>/Function Caller4' */
  real32_T FunctionCaller4_o2;         /* '<S4>/Function Caller4' */
  real32_T FunctionCaller4_o3;         /* '<S4>/Function Caller4' */
  real32_T FunctionCaller4_o4;         /* '<S4>/Function Caller4' */
  real32_T Rmin;                       /* '<S4>/Function Caller4' */
  real32_T Rmax;                       /* '<S4>/Function Caller4' */
  real32_T FunctionCaller5_o1;         /* '<S4>/Function Caller5' */
  real32_T FunctionCaller5_o2;         /* '<S4>/Function Caller5' */
  real32_T FunctionCaller5_o3;         /* '<S4>/Function Caller5' */
  real32_T FunctionCaller5_o4;         /* '<S4>/Function Caller5' */
  real32_T Rmin_k;                     /* '<S4>/Function Caller5' */
  real32_T Rmax_e;                     /* '<S4>/Function Caller5' */
  real32_T A0;                         /* '<S4>/Function Caller' */
  real32_T A1;                         /* '<S4>/Function Caller' */
  real32_T A2;                         /* '<S4>/Function Caller' */
  real32_T A3;                         /* '<S4>/Function Caller' */
  real32_T Rmin_j;                     /* '<S4>/Function Caller' */
  real32_T Rmax_o;                     /* '<S4>/Function Caller' */
  real32_T FunctionCaller1_o1;         /* '<S4>/Function Caller1' */
  real32_T FunctionCaller1_o2;         /* '<S4>/Function Caller1' */
  real32_T FunctionCaller1_o3;         /* '<S4>/Function Caller1' */
  real32_T FunctionCaller1_o4;         /* '<S4>/Function Caller1' */
  real32_T Rmin_f;                     /* '<S4>/Function Caller1' */
  real32_T Rmax_p;                     /* '<S4>/Function Caller1' */
  real32_T FunctionCaller2_o1;         /* '<S4>/Function Caller2' */
  real32_T FunctionCaller2_o2;         /* '<S4>/Function Caller2' */
  real32_T FunctionCaller2_o3;         /* '<S4>/Function Caller2' */
  real32_T FunctionCaller2_o4;         /* '<S4>/Function Caller2' */
  real32_T Rmin_c;                     /* '<S4>/Function Caller2' */
  real32_T Rmax_i;                     /* '<S4>/Function Caller2' */
  real32_T FunctionCaller3_o1;         /* '<S4>/Function Caller3' */
  real32_T FunctionCaller3_o2;         /* '<S4>/Function Caller3' */
  real32_T FunctionCaller3_o3;         /* '<S4>/Function Caller3' */
  real32_T FunctionCaller3_o4;         /* '<S4>/Function Caller3' */
  real32_T Rmin_d;                     /* '<S4>/Function Caller3' */
  real32_T Rmax_k;                     /* '<S4>/Function Caller3' */
  real32_T UnitDelay33;                /* '<S17>/Unit Delay33' */
  real32_T UnitDelay32;                /* '<S17>/Unit Delay32' */
  real32_T UnitDelay34;                /* '<S17>/Unit Delay34' */
  real32_T UnitDelay59[4];             /* '<S17>/Unit Delay59' */
  real32_T UnitDelay35[4];             /* '<S17>/Unit Delay35' */
  real32_T UnitDelay14;                /* '<S17>/Unit Delay14' */
  real32_T UnitDelay15;                /* '<S17>/Unit Delay15' */
  real32_T Gain3;                      /* '<S17>/Gain3' */
  real32_T Gain4;                      /* '<S17>/Gain4' */
  real32_T Sum;                        /* '<S17>/Sum' */
  real32_T preDisMinTable;             /* '<S17>/preDisMinTable' */
  real32_T UnitDelay31;                /* '<S17>/Unit Delay31' */
  real32_T UnitDelay49;                /* '<S17>/Unit Delay49' */
  real32_T UnitDelay50;                /* '<S17>/Unit Delay50' */
  real32_T UnitDelay51;                /* '<S17>/Unit Delay51' */
  real32_T Abs2;                       /* '<S50>/Abs2' */
  real32_T uDLookupTable4;             /* '<S50>/1-D Lookup Table4' */
  real32_T Abs3;                       /* '<S50>/Abs3' */
  real32_T uDLookupTable3;             /* '<S50>/1-D Lookup Table3' */
  real32_T Merge2;                     /* '<S50>/Merge2' */
  real32_T Merge3;                     /* '<S50>/Merge3' */
  real32_T Saturation;                 /* '<S50>/Saturation' */
  real32_T LookupTableDynamic;         /* '<S50>/Lookup Table Dynamic' */
  real32_T Gain3_f;                    /* '<S50>/Gain3' */
  real32_T Gain4_o;                    /* '<S50>/Gain4' */
  real32_T Sum_b;                      /* '<S50>/Sum' */
  real32_T uDLookupTable;              /* '<S50>/2-D Lookup Table' */
  real32_T Product;                    /* '<S50>/Product' */
  real32_T Product1;                   /* '<S50>/Product1' */
  real32_T Gain1;                      /* '<S50>/Gain1' */
  real32_T Gain2;                      /* '<S50>/Gain2' */
  real32_T Sum1;                       /* '<S50>/Sum1' */
  real32_T uDLookupTable3_m;           /* '<S50>/2-D Lookup Table3' */
  real32_T Product2;                   /* '<S50>/Product2' */
  real32_T uDLookupTable5;             /* '<S50>/1-D Lookup Table5' */
  real32_T Product3;                   /* '<S50>/Product3' */
  real32_T Add;                        /* '<S50>/Add' */
  real32_T Merge;                      /* '<S50>/Merge' */
  real32_T Saturation1;                /* '<S50>/Saturation1' */
  real32_T LookupTableDynamic1;        /* '<S50>/Lookup Table Dynamic1' */
  real32_T uDLookupTable1;             /* '<S50>/2-D Lookup Table1' */
  real32_T Product4;                   /* '<S50>/Product4' */
  real32_T Product5;                   /* '<S50>/Product5' */
  real32_T uDLookupTable4_i;           /* '<S50>/2-D Lookup Table4' */
  real32_T Product6;                   /* '<S50>/Product6' */
  real32_T uDLookupTable6;             /* '<S50>/1-D Lookup Table6' */
  real32_T Product7;                   /* '<S50>/Product7' */
  real32_T Add1;                       /* '<S50>/Add1' */
  real32_T Merge1;                     /* '<S50>/Merge1' */
  real32_T UnitDelay37[4];             /* '<S17>/Unit Delay37' */
  real32_T UnitDelay9[4];              /* '<S17>/Unit Delay9' */
  real32_T UnitDelay8[4];              /* '<S17>/Unit Delay8' */
  real32_T UnitDelay7[4];              /* '<S17>/Unit Delay7' */
  real32_T UnitDelay5[4];              /* '<S17>/Unit Delay5' */
  real32_T UnitDelay4[4];              /* '<S17>/Unit Delay4' */
  real32_T UnitDelay2[4];              /* '<S17>/Unit Delay2' */
  real32_T UnitDelay61[4];             /* '<S17>/Unit Delay61' */
  real32_T UnitDelay60[4];             /* '<S17>/Unit Delay60' */
  real32_T FunctionCaller6_o1;         /* '<S4>/Function Caller6' */
  real32_T FunctionCaller6_o2;         /* '<S4>/Function Caller6' */
  real32_T FunctionCaller6_o3;         /* '<S4>/Function Caller6' */
  real32_T FunctionCaller6_o4;         /* '<S4>/Function Caller6' */
  real32_T Rmin_l;                     /* '<S4>/Function Caller6' */
  real32_T Rmax_a;                     /* '<S4>/Function Caller6' */
  real32_T FunctionCaller7_o1;         /* '<S4>/Function Caller7' */
  real32_T FunctionCaller7_o2;         /* '<S4>/Function Caller7' */
  real32_T FunctionCaller7_o3;         /* '<S4>/Function Caller7' */
  real32_T FunctionCaller7_o4;         /* '<S4>/Function Caller7' */
  real32_T Rmin_h;                     /* '<S4>/Function Caller7' */
  real32_T Rmax_ar;                    /* '<S4>/Function Caller7' */
  real32_T UnitDelay38[2];             /* '<S17>/Unit Delay38' */
  real32_T UnitDelay22[2];             /* '<S17>/Unit Delay22' */
  real32_T UnitDelay21[2];             /* '<S17>/Unit Delay21' */
  real32_T UnitDelay20[2];             /* '<S17>/Unit Delay20' */
  real32_T UnitDelay19[2];             /* '<S17>/Unit Delay19' */
  real32_T UnitDelay18[2];             /* '<S17>/Unit Delay18' */
  real32_T UnitDelay17[2];             /* '<S17>/Unit Delay17' */
  real32_T UnitDelay63[2];             /* '<S17>/Unit Delay63' */
  real32_T UnitDelay62[2];             /* '<S17>/Unit Delay62' */
  real32_T D1;                         /* '<S17>/D1' */
  real32_T Subtract;                   /* '<S68>/Subtract' */
  real32_T D2;                         /* '<S17>/D2' */
  real32_T Gain1_o;                    /* '<S47>/Gain1' */
  real32_T Gain2_i;                    /* '<S47>/Gain2' */
  real32_T Sum1_l;                     /* '<S47>/Sum1' */
  real32_T preDisMinTable_h;           /* '<S47>/preDisMinTable' */
  real32_T Abs;                        /* '<S49>/Abs' */
  real32_T uDLookupTable3_l;           /* '<S49>/1-D Lookup Table3' */
  real32_T Abs1;                       /* '<S49>/Abs1' */
  real32_T uDLookupTable1_h;           /* '<S49>/1-D Lookup Table1' */
  real32_T Merge2_c;                   /* '<S49>/Merge2' */
  real32_T Merge3_l;                   /* '<S49>/Merge3' */
  real32_T Saturation1_m;              /* '<S49>/Saturation1' */
  real32_T LookupTableDynamic_n;       /* '<S49>/Lookup Table Dynamic' */
  real32_T Gain3_d;                    /* '<S49>/Gain3' */
  real32_T Gain4_c;                    /* '<S49>/Gain4' */
  real32_T Sum_a;                      /* '<S49>/Sum' */
  real32_T uDLookupTable2;             /* '<S49>/2-D Lookup Table2' */
  real32_T Product1_h;                 /* '<S49>/Product1' */
  real32_T Gain1_n;                    /* '<S49>/Gain1' */
  real32_T Gain2_o;                    /* '<S49>/Gain2' */
  real32_T Sum1_p;                     /* '<S49>/Sum1' */
  real32_T Product2_e;                 /* '<S49>/Product2' */
  real32_T Product3_f;                 /* '<S49>/Product3' */
  real32_T Add_h;                      /* '<S49>/Add' */
  real32_T Saturation_e;               /* '<S49>/Saturation' */
  real32_T LookupTableDynamic1_b;      /* '<S49>/Lookup Table Dynamic1' */
  real32_T uDLookupTable5_d;           /* '<S49>/2-D Lookup Table5' */
  real32_T Product5_c;                 /* '<S49>/Product5' */
  real32_T Product6_n;                 /* '<S49>/Product6' */
  real32_T Product7_f;                 /* '<S49>/Product7' */
  real32_T Add1_e;                     /* '<S49>/Add1' */
  real32_T UnitDelay43;                /* '<S17>/Unit Delay43' */
  real32_T UnitDelay48;                /* '<S17>/Unit Delay48' */
  real32_T UnitDelay47;                /* '<S17>/Unit Delay47' */
  real32_T UnitDelay46;                /* '<S17>/Unit Delay46' */
  real32_T UnitDelay45;                /* '<S17>/Unit Delay45' */
  real32_T UnitDelay44;                /* '<S17>/Unit Delay44' */
  real32_T Gain3_i;                    /* '<S47>/Gain3' */
  real32_T Gain4_e;                    /* '<S47>/Gain4' */
  real32_T Sum_e;                      /* '<S47>/Sum' */
  real32_T preDisMinTable7;            /* '<S47>/preDisMinTable7' */
  real32_T preDisMinTable5;            /* '<S47>/preDisMinTable5' */
  real32_T preDisMinTable1;            /* '<S47>/preDisMinTable1' */
  real32_T preDisMinTable2;            /* '<S47>/preDisMinTable2' */
  real32_T preDisMinTable3;            /* '<S47>/preDisMinTable3' */
  real32_T preDisMinTable4;            /* '<S47>/preDisMinTable4' */
  real32_T Product_d;                  /* '<S65>/Product' */
  real32_T UnitDelay2_j;               /* '<S47>/Unit Delay2' */
  real32_T UnitDelay1;                 /* '<S47>/Unit Delay1' */
  real32_T HWALineC3;                  /* '<S17>/Switch' */
  real32_T HWALineC2;                  /* '<S17>/Switch' */
  real32_T HWALineC1;                  /* '<S17>/Switch' */
  real32_T HWALineC0;                  /* '<S17>/Switch' */
  real32_T HWARange;                   /* '<S17>/Switch' */
  real32_T HWALeLineC3;                /* '<S17>/Switch2' */
  real32_T HWALeLineC2;                /* '<S17>/Switch2' */
  real32_T HWALeLineC1;                /* '<S17>/Switch2' */
  real32_T HWALeLineC0;                /* '<S17>/Switch2' */
  real32_T HWALeRange;                 /* '<S17>/Switch2' */
  real32_T HWARiLineC3;                /* '<S17>/Switch3' */
  real32_T HWARiLineC2;                /* '<S17>/Switch3' */
  real32_T HWARiLineC1;                /* '<S17>/Switch3' */
  real32_T HWARiLineC0;                /* '<S17>/Switch3' */
  real32_T HWARiRange;                 /* '<S17>/Switch3' */
  real32_T HWALineC3_o;                /* '<S17>/Switch1' */
  real32_T HWALineC2_e;                /* '<S17>/Switch1' */
  real32_T HWALineC1_i;                /* '<S17>/Switch1' */
  real32_T HWALineC0_g;                /* '<S17>/Switch1' */
  real32_T HWARange_b;                 /* '<S17>/Switch1' */
  real32_T Product_p;                  /* '<S52>/Product' */
  real32_T UnitDelay36;                /* '<S17>/Unit Delay36' */
  real32_T SignalCopy2;                /* '<S17>/Signal Copy2' */
  real32_T A0_o;                       /* '<S16>/A0' */
  real32_T TmpSignalConversionAtA0Outport1;/* '<S16>/A0' */
  real32_T A1_o;                       /* '<S16>/A1' */
  real32_T TmpSignalConversionAtA1Outport1;/* '<S16>/A1' */
  real32_T A2_o;                       /* '<S16>/A2' */
  real32_T TmpSignalConversionAtA2Outport1;/* '<S16>/A2' */
  real32_T A3_i;                       /* '<S16>/A3' */
  real32_T TmpSignalConversionAtA3Outport1;/* '<S16>/A3' */
  real32_T Range_min;                  /* '<S16>/Range_min' */
  real32_T TmpSignalConversionAtRange_minOutport1;/* '<S16>/Range_min' */
  real32_T Range_max;                  /* '<S16>/Range_max' */
  real32_T TmpSignalConversionAtRange_maxOutport1;/* '<S16>/Range_max' */
  real32_T Rmax_h;                     /* '<S16>/MATLAB Function3' */
  real32_T Rmin_hp;                    /* '<S16>/MATLAB Function3' */
  real32_T A0_b;                       /* '<S16>/MATLAB Function3' */
  real32_T A1_oy;                      /* '<S16>/MATLAB Function3' */
  real32_T A2_m;                       /* '<S16>/MATLAB Function3' */
  real32_T A3_o;                       /* '<S16>/MATLAB Function3' */
  real32_T a0;                         /* '<S16>/MATLAB Function3' */
  real32_T a1;                         /* '<S16>/MATLAB Function3' */
  real32_T a2;                         /* '<S16>/MATLAB Function3' */
  real32_T a3;                         /* '<S16>/MATLAB Function3' */
  real32_T Rmin_a;                     /* '<S16>/MATLAB Function3' */
  real32_T Rmax_f;                     /* '<S16>/MATLAB Function3' */
  real32_T TmpSignalConversionAtSFunctionInport5[4];/* '<S17>/YBranchRi' */
  real32_T TmpSignalConversionAtSFunctionInport6[4];/* '<S17>/YBranchRi' */
  real32_T TmpSignalConversionAtSFunctionInport7[4];/* '<S17>/YBranchRi' */
  real32_T TmpSignalConversionAtSFunctionInport8[4];/* '<S17>/YBranchRi' */
  real32_T TmpSignalConversionAtSFunctionInport10[4];/* '<S17>/YBranchRi' */
  real32_T Dist;                       /* '<S17>/YBranchRi' */
  real32_T DistRi;                     /* '<S17>/YBranchRi' */
  real32_T PathA3[3];                  /* '<S17>/VisLineFilter5' */
  real32_T PathA2[3];                  /* '<S17>/VisLineFilter5' */
  real32_T PathA1[3];                  /* '<S17>/VisLineFilter5' */
  real32_T PathA0[3];                  /* '<S17>/VisLineFilter5' */
  real32_T PathRange[3];               /* '<S17>/VisLineFilter5' */
  real32_T PathReliable[3];            /* '<S17>/VisLineFilter5' */
  real32_T TmpSignalConversionAtSFunctionInport3[2];/* '<S17>/VisLineFilter4' */
  real32_T TmpSignalConversionAtSFunctionInport4[2];/* '<S17>/VisLineFilter4' */
  real32_T TmpSignalConversionAtSFunctionInport5_k[2];/* '<S17>/VisLineFilter4' */
  real32_T TmpSignalConversionAtSFunctionInport6_b[2];/* '<S17>/VisLineFilter4' */
  real32_T TmpSignalConversionAtSFunctionInport7_k[2];/* '<S17>/VisLineFilter4' */
  real32_T TmpSignalConversionAtSFunctionInport8_c[2];/* '<S17>/VisLineFilter4' */
  real32_T EdgeReliable[2];            /* '<S17>/VisLineFilter4' */
  real32_T EdgeA3[2];                  /* '<S17>/VisLineFilter4' */
  real32_T EdgeA2[2];                  /* '<S17>/VisLineFilter4' */
  real32_T EdgeA1[2];                  /* '<S17>/VisLineFilter4' */
  real32_T EdgeA0[2];                  /* '<S17>/VisLineFilter4' */
  real32_T EdgeRange[2];               /* '<S17>/VisLineFilter4' */
  real32_T EdgetLost[2];               /* '<S17>/VisLineFilter4' */
  real32_T Avail_time[2];              /* '<S17>/VisLineFilter4' */
  real32_T Avail_dis[2];               /* '<S17>/VisLineFilter4' */
  real32_T Quality;                    /* '<S17>/VisLineFilter3' */
  real32_T A3_n;                       /* '<S17>/VisLineFilter3' */
  real32_T A2_f;                       /* '<S17>/VisLineFilter3' */
  real32_T A1_b;                       /* '<S17>/VisLineFilter3' */
  real32_T A0_k;                       /* '<S17>/VisLineFilter3' */
  real32_T Range;                      /* '<S17>/VisLineFilter3' */
  real32_T tLost;                      /* '<S17>/VisLineFilter3' */
  real32_T TmpSignalConversionAtSFunctionInport4_c[4];/* '<S17>/VisLineFilter2' */
  real32_T TmpSignalConversionAtSFunctionInport5_o[4];/* '<S17>/VisLineFilter2' */
  real32_T TmpSignalConversionAtSFunctionInport6_l[4];/* '<S17>/VisLineFilter2' */
  real32_T TmpSignalConversionAtSFunctionInport7_d[4];/* '<S17>/VisLineFilter2' */
  real32_T TmpSignalConversionAtSFunctionInport8_g[4];/* '<S17>/VisLineFilter2' */
  real32_T TmpSignalConversionAtSFunctionInport9[4];/* '<S17>/VisLineFilter2' */
  real32_T DevAngle[4];                /* '<S17>/VisLineFilter2' */
  real32_T DevDis[4];                  /* '<S17>/VisLineFilter2' */
  real32_T LineReliable[4];            /* '<S17>/VisLineFilter2' */
  real32_T A3_h[4];                    /* '<S17>/VisLineFilter2' */
  real32_T A2_k[4];                    /* '<S17>/VisLineFilter2' */
  real32_T A1_n[4];                    /* '<S17>/VisLineFilter2' */
  real32_T A0_o3[4];                   /* '<S17>/VisLineFilter2' */
  real32_T Range_a[4];                 /* '<S17>/VisLineFilter2' */
  real32_T tLost_c[4];                 /* '<S17>/VisLineFilter2' */
  real32_T Avail_time_m[4];            /* '<S17>/VisLineFilter2' */
  real32_T Avail_dis_n[4];             /* '<S17>/VisLineFilter2' */
  real32_T A3_d;                       /* '<S17>/VisLineFilter1' */
  real32_T A2_j;                       /* '<S17>/VisLineFilter1' */
  real32_T A1_d;                       /* '<S17>/VisLineFilter1' */
  real32_T A0_c;                       /* '<S17>/VisLineFilter1' */
  real32_T Range_m;                    /* '<S17>/VisLineFilter1' */
  real32_T tLost_f;                    /* '<S17>/VisLineFilter1' */
  real32_T TmpSignalConversionAtSFunctionInport2[4];/* '<S17>/VehStation' */
  real32_T TmpSignalConversionAtSFunctionInport5_m[2];/* '<S17>/VehStation' */
  real32_T HWALineC3_k;                /* '<S17>/TJA2NOA' */
  real32_T HWALineC2_d;                /* '<S17>/TJA2NOA' */
  real32_T HWALineC1_d;                /* '<S17>/TJA2NOA' */
  real32_T HWALineC0_j;                /* '<S17>/TJA2NOA' */
  real32_T HWARange_i;                 /* '<S17>/TJA2NOA' */
  real32_T TmpSignalConversionAtSFunctionInport1[4];/* '<S50>/MATLAB Function8' */
  real32_T dy2_Rel;                    /* '<S50>/MATLAB Function8' */
  real32_T dy3_Rel;                    /* '<S50>/MATLAB Function8' */
  real32_T TmpSignalConversionAtSFunctionInport8_o[4];/* '<S50>/MATLAB Function6' */
  real32_T TmpSignalConversionAtSFunctionInport9_b[4];/* '<S50>/MATLAB Function6' */
  real32_T TmpSignalConversionAtSFunctionInport10_j[4];/* '<S50>/MATLAB Function6' */
  real32_T TmpSignalConversionAtSFunctionInport11[4];/* '<S50>/MATLAB Function6' */
  real32_T d_cur2;                     /* '<S50>/MATLAB Function6' */
  real32_T delta_d2;                   /* '<S50>/MATLAB Function6' */
  real32_T d_cur3;                     /* '<S50>/MATLAB Function6' */
  real32_T delta_d3;                   /* '<S50>/MATLAB Function6' */
  real32_T dy2_Rel_f;                  /* '<S49>/MATLAB Function8' */
  real32_T dy3_Rel_c;                  /* '<S49>/MATLAB Function8' */
  real32_T dy_pre;                     /* '<S47>/LineSelect1' */
  real32_T Y_DOP;                      /* '<S47>/LineSelect1' */
  real32_T tLost_fa;                   /* '<S17>/RoadWidthCalc1' */
  real32_T HWALineC3_n;                /* '<S17>/NOA' */
  real32_T HWALineC2_m;                /* '<S17>/NOA' */
  real32_T HWALineC1_g;                /* '<S17>/NOA' */
  real32_T HWALineC0_gz;               /* '<S17>/NOA' */
  real32_T HWARange_j;                 /* '<S17>/NOA' */
  real32_T HWALeLineC3_g;              /* '<S17>/NOA' */
  real32_T HWALeLineC2_d;              /* '<S17>/NOA' */
  real32_T HWALeLineC1_c;              /* '<S17>/NOA' */
  real32_T HWALeLineC0_e;              /* '<S17>/NOA' */
  real32_T HWALeRange_k;               /* '<S17>/NOA' */
  real32_T HWARiLineC3_n;              /* '<S17>/NOA' */
  real32_T HWARiLineC2_n;              /* '<S17>/NOA' */
  real32_T HWARiLineC1_g;              /* '<S17>/NOA' */
  real32_T HWARiLineC0_k;              /* '<S17>/NOA' */
  real32_T HWARiRange_d;               /* '<S17>/NOA' */
  real32_T CentLineC3;                 /* '<S17>/MATLAB Function4' */
  real32_T CentLineC2;                 /* '<S17>/MATLAB Function4' */
  real32_T CentLineC1;                 /* '<S17>/MATLAB Function4' */
  real32_T CentLineC0;                 /* '<S17>/MATLAB Function4' */
  real32_T CentLineRange;              /* '<S17>/MATLAB Function4' */
  real32_T CentLineReliable;           /* '<S17>/MATLAB Function4' */
  real32_T LeftLineC3;                 /* '<S17>/MATLAB Function4' */
  real32_T LeftLineC2;                 /* '<S17>/MATLAB Function4' */
  real32_T LeftLineC1;                 /* '<S17>/MATLAB Function4' */
  real32_T LeftLineC0;                 /* '<S17>/MATLAB Function4' */
  real32_T LeftLineRange;              /* '<S17>/MATLAB Function4' */
  real32_T LeftLineReliable;           /* '<S17>/MATLAB Function4' */
  real32_T RightLineC3;                /* '<S17>/MATLAB Function4' */
  real32_T RightLineC2;                /* '<S17>/MATLAB Function4' */
  real32_T RightLineC1;                /* '<S17>/MATLAB Function4' */
  real32_T RightLineC0;                /* '<S17>/MATLAB Function4' */
  real32_T RightLineRange;             /* '<S17>/MATLAB Function4' */
  real32_T RightLineReliable;          /* '<S17>/MATLAB Function4' */
  real32_T TmpSignalConversionAtSFunctionInport3_l[4];/* '<S17>/MATLAB Function3' */
  real32_T TmpSignalConversionAtSFunctionInport4_a[4];/* '<S17>/MATLAB Function3' */
  real32_T TmpSignalConversionAtSFunctionInport5_n[4];/* '<S17>/MATLAB Function3' */
  real32_T TmpSignalConversionAtSFunctionInport6_p[4];/* '<S17>/MATLAB Function3' */
  real32_T TmpSignalConversionAtSFunctionInport7_a[4];/* '<S17>/MATLAB Function3' */
  real32_T TmpSignalConversionAtSFunctionInport5_h[4];/* '<S17>/MATLAB Function2' */
  real32_T TmpSignalConversionAtSFunctionInport6_e[4];/* '<S17>/MATLAB Function2' */
  real32_T TmpSignalConversionAtSFunctionInport7_i[4];/* '<S17>/MATLAB Function2' */
  real32_T TmpSignalConversionAtSFunctionInport8_j[4];/* '<S17>/MATLAB Function2' */
  real32_T HWALeLineC3_j;              /* '<S17>/MATLAB Function1' */
  real32_T HWALeLineC2_i;              /* '<S17>/MATLAB Function1' */
  real32_T HWALeLineC1_p;              /* '<S17>/MATLAB Function1' */
  real32_T HWALeLineC0_l;              /* '<S17>/MATLAB Function1' */
  real32_T HWALeLineRange;             /* '<S17>/MATLAB Function1' */
  real32_T HWARiLineC3_n5;             /* '<S17>/MATLAB Function1' */
  real32_T HWARiLineC2_g;              /* '<S17>/MATLAB Function1' */
  real32_T HWARiLineC1_gb;             /* '<S17>/MATLAB Function1' */
  real32_T HWARiLineC0_m;              /* '<S17>/MATLAB Function1' */
  real32_T HWARiLineRange;             /* '<S17>/MATLAB Function1' */
  real32_T TJALineA3;                  /* '<S17>/LineSelect' */
  real32_T TJALineA2;                  /* '<S17>/LineSelect' */
  real32_T TJALineA1;                  /* '<S17>/LineSelect' */
  real32_T TJALineA0;                  /* '<S17>/LineSelect' */
  real32_T TJALineRange;               /* '<S17>/LineSelect' */
  real32_T LCKLineA3;                  /* '<S17>/LineSelect' */
  real32_T LCKLineA2;                  /* '<S17>/LineSelect' */
  real32_T LCKLineA1;                  /* '<S17>/LineSelect' */
  real32_T LCKLineA0;                  /* '<S17>/LineSelect' */
  real32_T LCKLineRange;               /* '<S17>/LineSelect' */
  real32_T LREWidth;                   /* '<S17>/LREWidthCalc' */
  real32_T HWALineC3_f;                /* '<S17>/HWALineCalc' */
  real32_T HWALineC2_dl;               /* '<S17>/HWALineCalc' */
  real32_T HWALineC1_k;                /* '<S17>/HWALineCalc' */
  real32_T HWALineC0_g2;               /* '<S17>/HWALineCalc' */
  real32_T HWARange_o;                 /* '<S17>/HWALineCalc' */
  real32_T HWALeLineC3_p;              /* '<S17>/HWALineCalc' */
  real32_T HWALeLineC2_b;              /* '<S17>/HWALineCalc' */
  real32_T HWALeLineC1_e;              /* '<S17>/HWALineCalc' */
  real32_T HWALeLineC0_h;              /* '<S17>/HWALineCalc' */
  real32_T HWALeRange_i;               /* '<S17>/HWALineCalc' */
  real32_T HWARiLineC3_f;              /* '<S17>/HWALineCalc' */
  real32_T HWARiLineC2_f;              /* '<S17>/HWALineCalc' */
  real32_T HWARiLineC1_i;              /* '<S17>/HWALineCalc' */
  real32_T HWARiLineC0_b;              /* '<S17>/HWALineCalc' */
  real32_T HWARiRange_h;               /* '<S17>/HWALineCalc' */
  real32_T preDyDiff;                  /* '<S17>/HWALineCalc' */
  real32_T HeadAngDiff;                /* '<S17>/HWALineCalc' */
  real32_T ESSLineA3;                  /* '<S17>/ESSLineCalc1' */
  real32_T ESSLineA2;                  /* '<S17>/ESSLineCalc1' */
  real32_T ESSLineA1;                  /* '<S17>/ESSLineCalc1' */
  real32_T ESSLineA0;                  /* '<S17>/ESSLineCalc1' */
  real32_T ESSRange;                   /* '<S17>/ESSLineCalc1' */
  real32_T ESSLeLineA3;                /* '<S17>/ESSLineCalc1' */
  real32_T ESSLeLineA2;                /* '<S17>/ESSLineCalc1' */
  real32_T ESSLeLineA1;                /* '<S17>/ESSLineCalc1' */
  real32_T ESSLeLineA0;                /* '<S17>/ESSLineCalc1' */
  real32_T ESSLeRange;                 /* '<S17>/ESSLineCalc1' */
  real32_T ESSRiLineA3;                /* '<S17>/ESSLineCalc1' */
  real32_T ESSRiLineA2;                /* '<S17>/ESSLineCalc1' */
  real32_T ESSRiLineA1;                /* '<S17>/ESSLineCalc1' */
  real32_T ESSRiLineA0;                /* '<S17>/ESSLineCalc1' */
  real32_T ESSRiRange;                 /* '<S17>/ESSLineCalc1' */
  real32_T dDeltaX;                    /* '<S17>/CalcEgoVehMove2' */
  real32_T dDeltaY;                    /* '<S17>/CalcEgoVehMove2' */
  real32_T CosOfPsi;                   /* '<S17>/CalcEgoVehMove2' */
  real32_T SinOfPsi;                   /* '<S17>/CalcEgoVehMove2' */
  real32_T LRE1C0;                     /* '<S4>/LRELine' */
  real32_T LRE1C1;                     /* '<S4>/LRELine' */
  real32_T LRE1C2;                     /* '<S4>/LRELine' */
  real32_T LRE1C3;                     /* '<S4>/LRELine' */
  real32_T LRE1DxMin;                  /* '<S4>/LRELine' */
  real32_T LRE1DxMax;                  /* '<S4>/LRELine' */
  real32_T LRE1Reliable;               /* '<S4>/LRELine' */
  real32_T LRE2C0;                     /* '<S4>/LRELine' */
  real32_T LRE2C1;                     /* '<S4>/LRELine' */
  real32_T LRE2C2;                     /* '<S4>/LRELine' */
  real32_T LRE2C3;                     /* '<S4>/LRELine' */
  real32_T LRE2DxMin;                  /* '<S4>/LRELine' */
  real32_T LRE2DxMax;                  /* '<S4>/LRELine' */
  real32_T LRE2Reliable;               /* '<S4>/LRELine' */
  real32_T LH1C0;                      /* '<S4>/LHLine' */
  real32_T LH1C1;                      /* '<S4>/LHLine' */
  real32_T LH1C2;                      /* '<S4>/LHLine' */
  real32_T LH1C3;                      /* '<S4>/LHLine' */
  real32_T LH1DxMin;                   /* '<S4>/LHLine' */
  real32_T LH1DxMax;                   /* '<S4>/LHLine' */
  real32_T LH1Width;                   /* '<S4>/LHLine' */
  real32_T LH1Reliable;                /* '<S4>/LHLine' */
  real32_T LH2C0;                      /* '<S4>/LHLine' */
  real32_T LH2C1;                      /* '<S4>/LHLine' */
  real32_T LH2C2;                      /* '<S4>/LHLine' */
  real32_T LH2C3;                      /* '<S4>/LHLine' */
  real32_T LH2DxMin;                   /* '<S4>/LHLine' */
  real32_T LH2DxMax;                   /* '<S4>/LHLine' */
  real32_T LH2Width;                   /* '<S4>/LHLine' */
  real32_T LH2Reliable;                /* '<S4>/LHLine' */
  real32_T L1C0;                       /* '<S4>/LALine' */
  real32_T L1C1;                       /* '<S4>/LALine' */
  real32_T L1C2;                       /* '<S4>/LALine' */
  real32_T L1C3;                       /* '<S4>/LALine' */
  real32_T L1DxMin;                    /* '<S4>/LALine' */
  real32_T L1DxMax;                    /* '<S4>/LALine' */
  real32_T L1Width;                    /* '<S4>/LALine' */
  real32_T L1Reliable;                 /* '<S4>/LALine' */
  real32_T L2C0;                       /* '<S4>/LALine' */
  real32_T L2C1;                       /* '<S4>/LALine' */
  real32_T L2C2;                       /* '<S4>/LALine' */
  real32_T L2C3;                       /* '<S4>/LALine' */
  real32_T L2DxMin;                    /* '<S4>/LALine' */
  real32_T L2DxMax;                    /* '<S4>/LALine' */
  real32_T L2Width;                    /* '<S4>/LALine' */
  real32_T L2Reliable;                 /* '<S4>/LALine' */
  real32_T L3C0;                       /* '<S4>/LALine' */
  real32_T L3C1;                       /* '<S4>/LALine' */
  real32_T L3C2;                       /* '<S4>/LALine' */
  real32_T L3C3;                       /* '<S4>/LALine' */
  real32_T L3DxMin;                    /* '<S4>/LALine' */
  real32_T L3DxMax;                    /* '<S4>/LALine' */
  real32_T L3Width;                    /* '<S4>/LALine' */
  real32_T L3Reliable;                 /* '<S4>/LALine' */
  real32_T L4C0;                       /* '<S4>/LALine' */
  real32_T L4C1;                       /* '<S4>/LALine' */
  real32_T L4C2;                       /* '<S4>/LALine' */
  real32_T L4C3;                       /* '<S4>/LALine' */
  real32_T L4DxMin;                    /* '<S4>/LALine' */
  real32_T L4DxMax;                    /* '<S4>/LALine' */
  real32_T L4Width;                    /* '<S4>/LALine' */
  real32_T L4Reliable;                 /* '<S4>/LALine' */
  uint16_T UnitDelay1_d;               /* '<S65>/Unit Delay1' */
  uint16_T Merge_j;                    /* '<S65>/Merge' */
  uint16_T UnitDelay1_f;               /* '<S52>/Unit Delay1' */
  uint16_T Merge_h;                    /* '<S52>/Merge' */
  uint8_T UnitDelay68;                 /* '<S8>/Unit Delay68' */
  uint8_T UnitDelay68_e;               /* '<S9>/Unit Delay68' */
  uint8_T UnitDelay;                   /* '<S53>/Unit Delay' */
  uint8_T UnitDelay1_b;                /* '<S53>/Unit Delay1' */
  uint8_T UnitDelay5_f;                /* '<S53>/Unit Delay5' */
  uint8_T UnitDelay2_l;                /* '<S53>/Unit Delay2' */
  uint8_T UnitDelay3;                  /* '<S53>/Unit Delay3' */
  uint8_T UnitDelay4_i;                /* '<S53>/Unit Delay4' */
  uint8_T UnitDelay6;                  /* '<S53>/Unit Delay6' */
  uint8_T UnitDelay7_k;                /* '<S53>/Unit Delay7' */
  uint8_T UnitDelay37_p;               /* '<S53>/Unit Delay37' */
  uint8_T UnitDelay36_l;               /* '<S53>/Unit Delay36' */
  uint8_T UnitDelay24;                 /* '<S17>/Unit Delay24' */
  uint8_T UnitDelay58[4];              /* '<S17>/Unit Delay58' */
  uint8_T UnitDelay1_h;                /* '<S50>/Unit Delay1' */
  uint8_T UnitDelay_g;                 /* '<S50>/Unit Delay' */
  uint8_T UnitDelay57[4];              /* '<S17>/Unit Delay57' */
  uint8_T UnitDelay68_f;               /* '<S7>/Unit Delay68' */
  uint8_T UnitDelay23[2];              /* '<S17>/Unit Delay23' */
  uint8_T UnitDelay37_d;               /* '<S54>/Unit Delay37' */
  uint8_T UnitDelay36_a;               /* '<S54>/Unit Delay36' */
  uint8_T UnitDelay39;                 /* '<S17>/Unit Delay39' */
  uint8_T UnitDelay_d;                 /* '<S155>/Unit Delay' */
  uint8_T UnitDelay_l;                 /* '<S156>/Unit Delay' */
  uint8_T UnitDelay_m;                 /* '<S158>/Unit Delay' */
  uint8_T UnitDelay_ll;                /* '<S157>/Unit Delay' */
  uint8_T UnitDelay_c;                 /* '<S150>/Unit Delay' */
  uint8_T UnitDelay_gp;                /* '<S151>/Unit Delay' */
  uint8_T UnitDelay_o;                 /* '<S161>/Unit Delay' */
  uint8_T UnitDelay_i;                 /* '<S162>/Unit Delay' */
  uint8_T UnitDelay_a;                 /* '<S163>/Unit Delay' */
  uint8_T UnitDelay_lz;                /* '<S164>/Unit Delay' */
  uint8_T UnitDelay_f;                 /* '<S165>/Unit Delay' */
  uint8_T UnitDelay_dl;                /* '<S166>/Unit Delay' */
  uint8_T UnitDelay_ly;                /* '<S152>/Unit Delay' */
  uint8_T UnitDelay_b;                 /* '<S159>/Unit Delay' */
  uint8_T UnitDelay_bl;                /* '<S160>/Unit Delay' */
  uint8_T UnitDelay_a2;                /* '<S153>/Unit Delay' */
  uint8_T UnitDelay_k;                 /* '<S154>/Unit Delay' */
  uint8_T UnitDelay41;                 /* '<S17>/Unit Delay41' */
  uint8_T UnitDelay1_e;                /* '<S49>/Unit Delay1' */
  uint8_T UnitDelay_h;                 /* '<S49>/Unit Delay' */
  uint8_T UnitDelay11;                 /* '<S17>/Unit Delay11' */
  uint8_T UnitDelay6_a;                /* '<S17>/Unit Delay6' */
  uint8_T UnitDelay1_i;                /* '<S17>/Unit Delay1' */
  uint8_T UnitDelay49_c;               /* '<S31>/Unit Delay49' */
  uint8_T UnitDelay_cl;                /* '<S47>/Unit Delay' */
  uint8_T UnitDelay16;                 /* '<S17>/Unit Delay16' */
  uint8_T UnitDelay64;                 /* '<S17>/Unit Delay64' */
  uint8_T DataTypeConversion_b;        /* '<S4>/Data Type Conversion' */
  uint8_T UnitDelay3_g;                /* '<S70>/Unit Delay3' */
  uint8_T UnitDelay2_d;                /* '<S70>/Unit Delay2' */
  uint8_T UnitDelay_oc;                /* '<S70>/Unit Delay' */
  uint8_T UnitDelay1_m;                /* '<S70>/Unit Delay1' */
  uint8_T Switch1;                     /* '<S70>/Switch1' */
  uint8_T LaneChange;                  /* '<S70>/Switch' */
  uint8_T Switch5;                     /* '<S17>/Switch5' */
  uint8_T TmpSignalConversionAtSFunctionInport9_d[4];/* '<S17>/YBranchRi' */
  uint8_T TmpSignalConversionAtSFunctionInport2_c[2];/* '<S17>/VisLineFilter4' */
  uint8_T EdgeConf[2];                 /* '<S17>/VisLineFilter4' */
  uint8_T TmpSignalConversionAtSFunctionInport3_g[4];/* '<S17>/VisLineFilter2' */
  uint8_T LineConf[4];                 /* '<S17>/VisLineFilter2' */
  uint8_T TmpSignalConversionAtSFunctionInport1_d[4];/* '<S17>/VehStation' */
  uint8_T TmpSignalConversionAtSFunctionInport3_p[2];/* '<S17>/VehStation' */
  uint8_T TmpSignalConversionAtSFunctionInport4_n[2];/* '<S17>/VehStation' */
  uint8_T TmpSignalConversionAtSFunctionInport6_pl[2];/* '<S17>/VehStation' */
  uint8_T Cnt1;                        /* '<S54>/RoadWidthCalc1' */
  uint8_T Cnt2;                        /* '<S54>/RoadWidthCalc1' */
  uint8_T Cnt1_o;                      /* '<S53>/RoadWidthCalc1' */
  uint8_T Cnt2_j;                      /* '<S53>/RoadWidthCalc1' */
  uint8_T LeftType;                    /* '<S53>/MATLAB Function' */
  uint8_T LeftDLMType;                 /* '<S53>/MATLAB Function' */
  uint8_T LeftDECELType;               /* '<S53>/MATLAB Function' */
  uint8_T RightType;                   /* '<S53>/MATLAB Function' */
  uint8_T RightDLMType;                /* '<S53>/MATLAB Function' */
  uint8_T RightDECELType;              /* '<S53>/MATLAB Function' */
  uint8_T LeftColor;                   /* '<S53>/MATLAB Function' */
  uint8_T LLeftType;                   /* '<S53>/MATLAB Function' */
  uint8_T PilotSts;                    /* '<S68>/MATLAB Function' */
  uint8_T PilotRoadSts;                /* '<S68>/Chart1' */
  uint8_T PilotTurnSwSts;              /* '<S68>/Chart1' */
  uint8_T PilotRoadSts_h;              /* '<S68>/Chart' */
  uint8_T Off2Cent_flag;               /* '<S47>/LineSelect1' */
  uint8_T Off2DOP_flag;                /* '<S47>/LineSelect1' */
  uint8_T Cent2Off_flag;               /* '<S47>/LineSelect1' */
  uint8_T DOP2Off_flag;                /* '<S47>/LineSelect1' */
  uint8_T Cent2DOP_flag;               /* '<S47>/LineSelect1' */
  uint8_T DOP2Cent_flag;               /* '<S47>/LineSelect1' */
  uint8_T Lock_counter;                /* '<S17>/NOA' */
  uint8_T Cnt1_i;                      /* '<S17>/MATLAB Function6' */
  uint8_T Cnt2_b;                      /* '<S17>/MATLAB Function6' */
  uint8_T Line_State;                  /* '<S17>/MATLAB Function3' */
  uint8_T Wij_state;                   /* '<S17>/MATLAB Function2' */
  uint8_T MrcStopLane;                 /* '<S17>/MATLAB Function' */
  uint8_T LRE1Conf;                    /* '<S4>/LRELine' */
  uint8_T LRE2Conf;                    /* '<S4>/LRELine' */
  uint8_T LH1Conf;                     /* '<S4>/LHLine' */
  uint8_T LH1Type;                     /* '<S4>/LHLine' */
  uint8_T LH1DLM;                      /* '<S4>/LHLine' */
  uint8_T LeftLaneChange;              /* '<S4>/LHLine' */
  uint8_T LH1Color;                    /* '<S4>/LHLine' */
  uint8_T LH1DECEL;                    /* '<S4>/LHLine' */
  uint8_T LH2Conf;                     /* '<S4>/LHLine' */
  uint8_T LH2Type;                     /* '<S4>/LHLine' */
  uint8_T LH2DLM;                      /* '<S4>/LHLine' */
  uint8_T RightLaneChange;             /* '<S4>/LHLine' */
  uint8_T LH2Color;                    /* '<S4>/LHLine' */
  uint8_T LH2DECEL;                    /* '<S4>/LHLine' */
  uint8_T L1Conf;                      /* '<S4>/LALine' */
  uint8_T L1Type;                      /* '<S4>/LALine' */
  uint8_T L1DLM;                       /* '<S4>/LALine' */
  uint8_T L2Conf;                      /* '<S4>/LALine' */
  uint8_T L2Type;                      /* '<S4>/LALine' */
  uint8_T L2DLM;                       /* '<S4>/LALine' */
  uint8_T L3Conf;                      /* '<S4>/LALine' */
  uint8_T L3Type;                      /* '<S4>/LALine' */
  uint8_T L3DLM;                       /* '<S4>/LALine' */
  uint8_T L4Conf;                      /* '<S4>/LALine' */
  uint8_T L4Type;                      /* '<S4>/LALine' */
  uint8_T L4DLM;                       /* '<S4>/LALine' */
  int8_T UnitDelay26;                  /* '<S17>/Unit Delay26' */
  int8_T UnitDelay40;                  /* '<S17>/Unit Delay40' */
  int8_T UnitDelay_oi;                 /* '<S17>/Unit Delay' */
  int8_T UnitDelay12;                  /* '<S17>/Unit Delay12' */
  int8_T UnitDelay30;                  /* '<S17>/Unit Delay30' */
  int8_T UnitDelay65;                  /* '<S17>/Unit Delay65' */
  int8_T LockID;                       /* '<S17>/VisLineFilter5' */
  int8_T MoveID;                       /* '<S17>/NOA' */
  int8_T LockID_c;                     /* '<S17>/NOA' */
  int8_T MoveID_k;                     /* '<S17>/ESSLineCalc1' */
  boolean_T RelationalOperator1;       /* '<S8>/Relational Operator1' */
  boolean_T RelationalOperator1_l;     /* '<S9>/Relational Operator1' */
  boolean_T UnitDelay13;               /* '<S17>/Unit Delay13' */
  boolean_T UnitDelay52;               /* '<S17>/Unit Delay52' */
  boolean_T UnitDelay67;               /* '<S32>/Unit Delay67' */
  boolean_T RelationalOperator;        /* '<S32>/Relational Operator' */
  boolean_T UnitDelay67_g;             /* '<S33>/Unit Delay67' */
  boolean_T RelationalOperator_i;      /* '<S33>/Relational Operator' */
  boolean_T RelationalOperator1_d;     /* '<S7>/Relational Operator1' */
  boolean_T DataTypeConversion1[2];    /* '<S17>/Data Type Conversion1' */
  boolean_T UnitDelay25;               /* '<S17>/Unit Delay25' */
  boolean_T Compare;                   /* '<S74>/Compare' */
  boolean_T Compare_m;                 /* '<S73>/Compare' */
  boolean_T LogicalOperator6;          /* '<S68>/Logical Operator6' */
  boolean_T Compare_j;                 /* '<S137>/Compare' */
  boolean_T Compare_c;                 /* '<S138>/Compare' */
  boolean_T LogicalOperator33;         /* '<S69>/Logical Operator33' */
  boolean_T Compare_b;                 /* '<S135>/Compare' */
  boolean_T Compare_jn;                /* '<S136>/Compare' */
  boolean_T rExitStub4_takeover;       /* '<S69>/Logical Operator32' */
  boolean_T Compare_h;                 /* '<S143>/Compare' */
  boolean_T Compare_k;                 /* '<S141>/Compare' */
  boolean_T LogicalOperator35;         /* '<S69>/Logical Operator35' */
  boolean_T Compare_f;                 /* '<S139>/Compare' */
  boolean_T Compare_ci;                /* '<S140>/Compare' */
  boolean_T lExitStub4_takeover;       /* '<S69>/Logical Operator34' */
  boolean_T Compare_o;                 /* '<S144>/Compare' */
  boolean_T Compare_g;                 /* '<S146>/Compare' */
  boolean_T Compare_he;                /* '<S142>/Compare' */
  boolean_T Compare_l;                 /* '<S147>/Compare' */
  boolean_T Compare_bp;                /* '<S148>/Compare' */
  boolean_T Compare_p;                 /* '<S77>/Compare' */
  boolean_T LogicalOperator9;          /* '<S69>/Logical Operator9' */
  boolean_T StubValid;                 /* '<S69>/Logical Operator8' */
  boolean_T Compare_lr;                /* '<S87>/Compare' */
  boolean_T RelationalOperator_l;      /* '<S69>/Relational Operator' */
  boolean_T DataTypeConversion3;       /* '<S17>/Data Type Conversion3' */
  boolean_T Compare_i;                 /* '<S98>/Compare' */
  boolean_T LogicalOperator2;          /* '<S69>/Logical Operator2' */
  boolean_T Compare_py;                /* '<S76>/Compare' */
  boolean_T RightStub;                 /* '<S69>/Logical Operator3' */
  boolean_T Compare_oe;                /* '<S103>/Compare' */
  boolean_T RelationalOperator1_n;     /* '<S69>/Relational Operator1' */
  boolean_T DataTypeConversion2;       /* '<S17>/Data Type Conversion2' */
  boolean_T Compare_p2;                /* '<S105>/Compare' */
  boolean_T LogicalOperator14;         /* '<S69>/Logical Operator14' */
  boolean_T Compare_n;                 /* '<S109>/Compare' */
  boolean_T LeftStub;                  /* '<S69>/Logical Operator20' */
  boolean_T Compare_jy;                /* '<S118>/Compare' */
  boolean_T Compare_ie;                /* '<S122>/Compare' */
  boolean_T Compare_cn;                /* '<S121>/Compare' */
  boolean_T Compare_a;                 /* '<S78>/Compare' */
  boolean_T Compare_hy;                /* '<S119>/Compare' */
  boolean_T LogicalOperator28;         /* '<S69>/Logical Operator28' */
  boolean_T CruiseValid;               /* '<S69>/Logical Operator27' */
  boolean_T RelationalOperator7;       /* '<S69>/Relational Operator7' */
  boolean_T Compare_j5;                /* '<S112>/Compare' */
  boolean_T TurnLeft;                  /* '<S69>/Logical Operator21' */
  boolean_T RelationalOperator8;       /* '<S69>/Relational Operator8' */
  boolean_T Compare_mx;                /* '<S113>/Compare' */
  boolean_T TurnLeft_e;                /* '<S69>/Logical Operator24' */
  boolean_T DataTypeConversion_m;      /* '<S17>/Data Type Conversion' */
  boolean_T Compare_nn;                /* '<S88>/Compare' */
  boolean_T Compare_pt;                /* '<S83>/Compare' */
  boolean_T Compare_cq;                /* '<S81>/Compare' */
  boolean_T Compare_ob;                /* '<S114>/Compare' */
  boolean_T EntryStub1;                /* '<S69>/Logical Operator10' */
  boolean_T Compare_d;                 /* '<S85>/Compare' */
  boolean_T Compare_nr;                /* '<S93>/Compare' */
  boolean_T Compare_hz;                /* '<S94>/Compare' */
  boolean_T LogicalOperator16;         /* '<S69>/Logical Operator16' */
  boolean_T Compare_jl;                /* '<S92>/Compare' */
  boolean_T rExitStub1;                /* '<S69>/Logical Operator15' */
  boolean_T Compare_kf;                /* '<S91>/Compare' */
  boolean_T Compare_if;                /* '<S123>/Compare' */
  boolean_T rExitStub2;                /* '<S69>/Logical Operator6' */
  boolean_T RelationalOperator11;      /* '<S69>/Relational Operator11' */
  boolean_T Compare_nrc;               /* '<S104>/Compare' */
  boolean_T LogicalOperator4;          /* '<S69>/Logical Operator4' */
  boolean_T Compare_br;                /* '<S102>/Compare' */
  boolean_T Compare_oi;                /* '<S120>/Compare' */
  boolean_T CruiseLeft;                /* '<S69>/Logical Operator5' */
  boolean_T RelationalOperator9;       /* '<S69>/Relational Operator9' */
  boolean_T Compare_fv;                /* '<S90>/Compare' */
  boolean_T LogicalOperator1;          /* '<S69>/Logical Operator1' */
  boolean_T Compare_km;                /* '<S86>/Compare' */
  boolean_T Compare_aq;                /* '<S79>/Compare' */
  boolean_T CruiseRight;               /* '<S69>/Logical Operator12' */
  boolean_T RelationalOperator2;       /* '<S69>/Relational Operator2' */
  boolean_T RelationalOperator3;       /* '<S69>/Relational Operator3' */
  boolean_T RelationalOperator4;       /* '<S69>/Relational Operator4' */
  boolean_T RelationalOperator5;       /* '<S69>/Relational Operator5' */
  boolean_T RelationalOperator6;       /* '<S69>/Relational Operator6' */
  boolean_T RelationalOperator10;      /* '<S69>/Relational Operator10' */
  boolean_T RelationalOperator12;      /* '<S69>/Relational Operator12' */
  boolean_T RelationalOperator13;      /* '<S69>/Relational Operator13' */
  boolean_T RelationalOperator14;      /* '<S69>/Relational Operator14' */
  boolean_T CruiseTurn;                /* '<S69>/Logical Operator11' */
  boolean_T Compare_jx;                /* '<S116>/Compare' */
  boolean_T Compare_io;                /* '<S115>/Compare' */
  boolean_T Compare_ic;                /* '<S124>/Compare' */
  boolean_T EntryStub2;                /* '<S69>/Logical Operator26' */
  boolean_T Compare_fm;                /* '<S101>/Compare' */
  boolean_T Compare_e;                 /* '<S131>/Compare' */
  boolean_T Compare_or;                /* '<S80>/Compare' */
  boolean_T LogicalOperator7;          /* '<S69>/Logical Operator7' */
  boolean_T Compare_ciw;               /* '<S108>/Compare' */
  boolean_T lExitStub1;                /* '<S69>/Logical Operator19' */
  boolean_T Compare_ix;                /* '<S107>/Compare' */
  boolean_T Compare_cg;                /* '<S99>/Compare' */
  boolean_T Compare_la;                /* '<S96>/Compare' */
  boolean_T lExitStub2;                /* '<S69>/Logical Operator23' */
  boolean_T Compare_f4;                /* '<S111>/Compare' */
  boolean_T Compare_iev;               /* '<S110>/Compare' */
  boolean_T LogicalOperator22;         /* '<S69>/Logical Operator22' */
  boolean_T Compare_gk;                /* '<S100>/Compare' */
  boolean_T Compare_ok;                /* '<S106>/Compare' */
  boolean_T lExitStub3;                /* '<S69>/Logical Operator18' */
  boolean_T Compare_b3;                /* '<S95>/Compare' */
  boolean_T Compare_fy;                /* '<S97>/Compare' */
  boolean_T LogicalOperator17;         /* '<S69>/Logical Operator17' */
  boolean_T Compare_ed;                /* '<S84>/Compare' */
  boolean_T Compare_dm;                /* '<S89>/Compare' */
  boolean_T rExitStub3;                /* '<S69>/Logical Operator13' */
  boolean_T Compare_jt;                /* '<S117>/Compare' */
  boolean_T Compare_j5n;               /* '<S82>/Compare' */
  boolean_T Compare_j3;                /* '<S125>/Compare' */
  boolean_T EntryStub3;                /* '<S69>/Logical Operator25' */
  boolean_T Compare_p4;                /* '<S127>/Compare' */
  boolean_T Compare_e2;                /* '<S126>/Compare' */
  boolean_T Compare_ek;                /* '<S128>/Compare' */
  boolean_T EntryStub4;                /* '<S69>/Logical Operator29' */
  boolean_T Compare_hx;                /* '<S129>/Compare' */
  boolean_T Compare_fyv;               /* '<S130>/Compare' */
  boolean_T EntryStub5;                /* '<S69>/Logical Operator30' */
  boolean_T Compare_ju;                /* '<S132>/Compare' */
  boolean_T Compare_fs;                /* '<S133>/Compare' */
  boolean_T EntryStub6;                /* '<S69>/Logical Operator31' */
  boolean_T Compare_kd;                /* '<S134>/Compare' */
  boolean_T Compare_oh;                /* '<S145>/Compare' */
  boolean_T EntryStub5_TurnLeft;       /* '<S69>/Logical Operator36' */
  boolean_T Compare_gx;                /* '<S23>/Compare' */
  boolean_T UnitDelay10;               /* '<S17>/Unit Delay10' */
  boolean_T RelationalOperator_e;      /* '<S31>/Relational Operator' */
  boolean_T UnitDelay42;               /* '<S17>/Unit Delay42' */
  boolean_T UnitDelay2_jz;             /* '<S65>/Unit Delay2' */
  boolean_T RelationalOperator3_o;     /* '<S47>/Relational Operator3' */
  boolean_T SignalCopy3[3];            /* '<S17>/Signal Copy3' */
  boolean_T HWALineValid;              /* '<S17>/Switch' */
  boolean_T HWALeLineValid;            /* '<S17>/Switch2' */
  boolean_T HWARiLineValid;            /* '<S17>/Switch3' */
  boolean_T Compare_nu;                /* '<S22>/Compare' */
  boolean_T Compare_cd;                /* '<S24>/Compare' */
  boolean_T HWALineValid_h;            /* '<S17>/Switch1' */
  boolean_T Compare_hx5;               /* '<S21>/Compare' */
  boolean_T Compare_o5;                /* '<S25>/Compare' */
  boolean_T Compare_mc;                /* '<S26>/Compare' */
  boolean_T Compare_ls;                /* '<S27>/Compare' */
  boolean_T Compare_ke;                /* '<S28>/Compare' */
  boolean_T Compare_oj;                /* '<S29>/Compare' */
  boolean_T UnitDelay2_b;              /* '<S52>/Unit Delay2' */
  boolean_T LogicalOperator;           /* '<S17>/Logical Operator' */
  boolean_T Compare_mf;                /* '<S30>/Compare' */
  boolean_T LogicalOperator8;          /* '<S17>/Logical Operator8' */
  boolean_T LogicalOperator7_p;        /* '<S17>/Logical Operator7' */
  boolean_T Compare_ep;                /* '<S184>/Compare' */
  boolean_T Compare_hs;                /* '<S185>/Compare' */
  boolean_T RelationalOperator1_i;     /* '<S70>/Relational Operator1' */
  boolean_T LogicalOperator1_o;        /* '<S70>/Logical Operator1' */
  boolean_T RelationalOperator2_f;     /* '<S70>/Relational Operator2' */
  boolean_T LogicalOperator2_g;        /* '<S70>/Logical Operator2' */
  boolean_T YBranch_b;                 /* '<S17>/YBranchRi' */
  boolean_T YBranchRi_b;               /* '<S17>/YBranchRi' */
  boolean_T PathValid[3];              /* '<S17>/VisLineFilter5' */
  boolean_T DoubleLineLost_b;          /* '<S17>/VisLineFilter3' */
  boolean_T LineValid;                 /* '<S17>/VisLineFilter3' */
  boolean_T DevValid[4];               /* '<S17>/VisLineFilter2' */
  boolean_T LineValid_p;               /* '<S17>/VisLineFilter1' */
  boolean_T LeftMostLane;              /* '<S17>/VehStation' */
  boolean_T RightMostLane;             /* '<S17>/VehStation' */
  boolean_T LeftEn_e;                  /* '<S54>/RoadWidthCalc1' */
  boolean_T RightEn_n;                 /* '<S54>/RoadWidthCalc1' */
  boolean_T HWALineValid_h3;           /* '<S17>/TJA2NOA' */
  boolean_T Forbid_TurnRight;          /* '<S69>/MATLAB Function' */
  boolean_T Forbid_TurnLeft;           /* '<S69>/MATLAB Function' */
  boolean_T OneLane;                   /* '<S69>/MATLAB Function' */
  boolean_T HWALineValid_g;            /* '<S17>/NOA' */
  boolean_T HWALeLineValid_m;          /* '<S17>/NOA' */
  boolean_T HWARiLineValid_f;          /* '<S17>/NOA' */
  boolean_T LaneChangeCancel_b;        /* '<S17>/MATLAB Function6' */
  boolean_T LckLock_b;                 /* '<S17>/MATLAB Function6' */
  boolean_T CentLineValid;             /* '<S17>/MATLAB Function4' */
  boolean_T LeftLineValid;             /* '<S17>/MATLAB Function4' */
  boolean_T LeftLaneAvail;             /* '<S17>/MATLAB Function4' */
  boolean_T RightLineValid;            /* '<S17>/MATLAB Function4' */
  boolean_T RightLaneAvail;            /* '<S17>/MATLAB Function4' */
  boolean_T LH1_Valid;                 /* '<S17>/MATLAB Function2' */
  boolean_T LH2_Valid;                 /* '<S17>/MATLAB Function2' */
  boolean_T HWALeLineValid_mw;         /* '<S17>/MATLAB Function1' */
  boolean_T LeLineVirtual_b;           /* '<S17>/MATLAB Function1' */
  boolean_T HWARiLineValid_j;          /* '<S17>/MATLAB Function1' */
  boolean_T RiLineVirtual_b;           /* '<S17>/MATLAB Function1' */
  boolean_T TJALineValid;              /* '<S17>/LineSelect' */
  boolean_T LCKLineValid;              /* '<S17>/LineSelect' */
  boolean_T HWALineValid_i;            /* '<S17>/HWALineCalc' */
  boolean_T HWALeLineValid_k;          /* '<S17>/HWALineCalc' */
  boolean_T HWARiLineValid_n;          /* '<S17>/HWALineCalc' */
  boolean_T Error;                     /* '<S17>/HWALineCalc' */
  boolean_T ESSLineValid;              /* '<S17>/ESSLineCalc1' */
  boolean_T ESSLeLineValid;            /* '<S17>/ESSLineCalc1' */
  boolean_T ESSRiLineValid;            /* '<S17>/ESSLineCalc1' */
  boolean_T Lock_b;                    /* '<S17>/ESSLineCalc1' */
  B_IfActionSubsystem_PubIfDecisionLSM_MDL_T IfActionSubsystem_a;/* '<S52>/If Action Subsystem' */
  B_MATLABFunction7_PubIfDecisionLSM_MDL_T sf_MATLABFunction7_i;/* '<S50>/MATLAB Function7' */
  B_MATLABFunction3_PubIfDecisionLSM_MDL_T sf_MATLABFunction3_p;/* '<S50>/MATLAB Function3' */
  B_MATLABFunction2_PubIfDecisionLSM_MDL_T sf_MATLABFunction2_b;/* '<S50>/MATLAB Function2' */
  B_MATLABFunction7_PubIfDecisionLSM_MDL_T sf_MATLABFunction7;/* '<S49>/MATLAB Function7' */
  B_MATLABFunction3_PubIfDecisionLSM_MDL_T sf_MATLABFunction3_h;/* '<S49>/MATLAB Function3' */
  B_MATLABFunction2_PubIfDecisionLSM_MDL_T sf_MATLABFunction2_l;/* '<S49>/MATLAB Function2' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_d2;/* '<S166>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_fr;/* '<S165>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_ol;/* '<S164>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_my;/* '<S163>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_c;/* '<S162>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_p;/* '<S161>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_k;/* '<S160>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_j;/* '<S159>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_f;/* '<S158>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_h;/* '<S157>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_d;/* '<S156>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_i;/* '<S155>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_ma;/* '<S154>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_l;/* '<S153>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_o;/* '<S152>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14_m;/* '<S151>/MATLAB Function14' */
  B_MATLABFunction14_PubIfDecisionLSM_MDL_T sf_MATLABFunction14;/* '<S150>/MATLAB Function14' */
  B_IfActionSubsystem_PubIfDecisionLSM_MDL_T IfActionSubsystem;/* '<S65>/If Action Subsystem' */
  B_LHLine1_PubIfDecisionLSM_MDL_T sf_LHLine2;/* '<S4>/LHLine2' */
  B_LHLine1_PubIfDecisionLSM_MDL_T sf_LHLine1;/* '<S4>/LHLine1' */
} B_PubIfDecisionLSM_MDL_c_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'PubIfDecisionLSM_MDL' */
#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T UnitDelay28_DSTATE[4];        /* '<S17>/Unit Delay28' */
  real_T UnitDelay29_DSTATE[4];        /* '<S17>/Unit Delay29' */
  real32_T UnitDelay33_DSTATE;         /* '<S17>/Unit Delay33' */
  real32_T UnitDelay32_DSTATE;         /* '<S17>/Unit Delay32' */
  real32_T UnitDelay34_DSTATE;         /* '<S17>/Unit Delay34' */
  real32_T UnitDelay59_DSTATE[4];      /* '<S17>/Unit Delay59' */
  real32_T UnitDelay35_DSTATE[4];      /* '<S17>/Unit Delay35' */
  real32_T UnitDelay14_DSTATE;         /* '<S17>/Unit Delay14' */
  real32_T UnitDelay15_DSTATE;         /* '<S17>/Unit Delay15' */
  real32_T UnitDelay31_DSTATE;         /* '<S17>/Unit Delay31' */
  real32_T UnitDelay49_DSTATE;         /* '<S17>/Unit Delay49' */
  real32_T UnitDelay50_DSTATE;         /* '<S17>/Unit Delay50' */
  real32_T UnitDelay51_DSTATE;         /* '<S17>/Unit Delay51' */
  real32_T UnitDelay54_DSTATE;         /* '<S17>/Unit Delay54' */
  real32_T UnitDelay56_DSTATE;         /* '<S17>/Unit Delay56' */
  real32_T UnitDelay70_DSTATE;         /* '<S17>/Unit Delay70' */
  real32_T UnitDelay69_DSTATE;         /* '<S17>/Unit Delay69' */
  real32_T UnitDelay68_DSTATE;         /* '<S17>/Unit Delay68' */
  real32_T UnitDelay67_DSTATE;         /* '<S17>/Unit Delay67' */
  real32_T UnitDelay66_DSTATE;         /* '<S17>/Unit Delay66' */
  real32_T UnitDelay37_DSTATE[4];      /* '<S17>/Unit Delay37' */
  real32_T UnitDelay9_DSTATE[4];       /* '<S17>/Unit Delay9' */
  real32_T UnitDelay8_DSTATE[4];       /* '<S17>/Unit Delay8' */
  real32_T UnitDelay7_DSTATE[4];       /* '<S17>/Unit Delay7' */
  real32_T UnitDelay5_DSTATE[4];       /* '<S17>/Unit Delay5' */
  real32_T UnitDelay4_DSTATE[4];       /* '<S17>/Unit Delay4' */
  real32_T UnitDelay2_DSTATE[4];       /* '<S17>/Unit Delay2' */
  real32_T UnitDelay61_DSTATE[4];      /* '<S17>/Unit Delay61' */
  real32_T UnitDelay60_DSTATE[4];      /* '<S17>/Unit Delay60' */
  real32_T UnitDelay38_DSTATE[2];      /* '<S17>/Unit Delay38' */
  real32_T UnitDelay22_DSTATE[2];      /* '<S17>/Unit Delay22' */
  real32_T UnitDelay21_DSTATE[2];      /* '<S17>/Unit Delay21' */
  real32_T UnitDelay20_DSTATE[2];      /* '<S17>/Unit Delay20' */
  real32_T UnitDelay19_DSTATE[2];      /* '<S17>/Unit Delay19' */
  real32_T UnitDelay18_DSTATE[2];      /* '<S17>/Unit Delay18' */
  real32_T UnitDelay17_DSTATE[2];      /* '<S17>/Unit Delay17' */
  real32_T UnitDelay63_DSTATE[2];      /* '<S17>/Unit Delay63' */
  real32_T UnitDelay62_DSTATE[2];      /* '<S17>/Unit Delay62' */
  real32_T UnitDelay27_DSTATE;         /* '<S17>/Unit Delay27' */
  real32_T UnitDelay43_DSTATE;         /* '<S17>/Unit Delay43' */
  real32_T UnitDelay48_DSTATE;         /* '<S17>/Unit Delay48' */
  real32_T UnitDelay47_DSTATE;         /* '<S17>/Unit Delay47' */
  real32_T UnitDelay46_DSTATE;         /* '<S17>/Unit Delay46' */
  real32_T UnitDelay45_DSTATE;         /* '<S17>/Unit Delay45' */
  real32_T UnitDelay44_DSTATE;         /* '<S17>/Unit Delay44' */
  real32_T UnitDelay2_DSTATE_p;        /* '<S47>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE;          /* '<S47>/Unit Delay1' */
  real32_T UnitDelay36_DSTATE;         /* '<S17>/Unit Delay36' */
  uint32_T Output_DSTATE;              /* '<S2>/Output' */
  real32_T Subtract_DWORK1;            /* '<S68>/Subtract' */
  uint16_T UnitDelay1_DSTATE_g;        /* '<S65>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_k;        /* '<S52>/Unit Delay1' */
  int8_T UnitDelay26_DSTATE;           /* '<S17>/Unit Delay26' */
  int8_T UnitDelay40_DSTATE;           /* '<S17>/Unit Delay40' */
  int8_T UnitDelay_DSTATE;             /* '<S17>/Unit Delay' */
  int8_T UnitDelay12_DSTATE;           /* '<S17>/Unit Delay12' */
  int8_T UnitDelay30_DSTATE;           /* '<S17>/Unit Delay30' */
  int8_T UnitDelay65_DSTATE;           /* '<S17>/Unit Delay65' */
  uint8_T UnitDelay68_DSTATE_k;        /* '<S8>/Unit Delay68' */
  uint8_T UnitDelay68_DSTATE_l;        /* '<S9>/Unit Delay68' */
  uint8_T UnitDelay_DSTATE_j;          /* '<S53>/Unit Delay' */
  uint8_T UnitDelay1_DSTATE_m;         /* '<S53>/Unit Delay1' */
  uint8_T UnitDelay5_DSTATE_k;         /* '<S53>/Unit Delay5' */
  uint8_T UnitDelay2_DSTATE_k;         /* '<S53>/Unit Delay2' */
  uint8_T UnitDelay3_DSTATE;           /* '<S53>/Unit Delay3' */
  uint8_T UnitDelay4_DSTATE_i;         /* '<S53>/Unit Delay4' */
  uint8_T UnitDelay6_DSTATE;           /* '<S53>/Unit Delay6' */
  uint8_T UnitDelay7_DSTATE_f;         /* '<S53>/Unit Delay7' */
  uint8_T UnitDelay37_DSTATE_f;        /* '<S53>/Unit Delay37' */
  uint8_T UnitDelay36_DSTATE_n;        /* '<S53>/Unit Delay36' */
  uint8_T UnitDelay24_DSTATE;          /* '<S17>/Unit Delay24' */
  uint8_T UnitDelay58_DSTATE[4];       /* '<S17>/Unit Delay58' */
  uint8_T UnitDelay1_DSTATE_a;         /* '<S50>/Unit Delay1' */
  uint8_T UnitDelay_DSTATE_k;          /* '<S50>/Unit Delay' */
  uint8_T UnitDelay57_DSTATE[4];       /* '<S17>/Unit Delay57' */
  uint8_T UnitDelay68_DSTATE_j;        /* '<S7>/Unit Delay68' */
  uint8_T UnitDelay23_DSTATE[2];       /* '<S17>/Unit Delay23' */
  uint8_T UnitDelay37_DSTATE_b;        /* '<S54>/Unit Delay37' */
  uint8_T UnitDelay36_DSTATE_nv;       /* '<S54>/Unit Delay36' */
  uint8_T UnitDelay39_DSTATE;          /* '<S17>/Unit Delay39' */
  uint8_T UnitDelay_DSTATE_e;          /* '<S155>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_j3;         /* '<S156>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_b;          /* '<S158>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_a;          /* '<S157>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_h;          /* '<S150>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_hu;         /* '<S151>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_j4;         /* '<S161>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_ea;         /* '<S162>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_g;          /* '<S163>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_hk;         /* '<S164>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_l;          /* '<S165>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_ll;         /* '<S166>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_i;          /* '<S152>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_p;          /* '<S159>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_f;          /* '<S160>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_gq;         /* '<S153>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_lw;         /* '<S154>/Unit Delay' */
  uint8_T UnitDelay41_DSTATE;          /* '<S17>/Unit Delay41' */
  uint8_T UnitDelay1_DSTATE_as;        /* '<S49>/Unit Delay1' */
  uint8_T UnitDelay_DSTATE_m;          /* '<S49>/Unit Delay' */
  uint8_T UnitDelay11_DSTATE;          /* '<S17>/Unit Delay11' */
  uint8_T UnitDelay6_DSTATE_p;         /* '<S17>/Unit Delay6' */
  uint8_T UnitDelay1_DSTATE_l;         /* '<S17>/Unit Delay1' */
  uint8_T UnitDelay49_DSTATE_e;        /* '<S31>/Unit Delay49' */
  uint8_T UnitDelay_DSTATE_c;          /* '<S47>/Unit Delay' */
  uint8_T UnitDelay16_DSTATE;          /* '<S17>/Unit Delay16' */
  uint8_T UnitDelay64_DSTATE;          /* '<S17>/Unit Delay64' */
  uint8_T UnitDelay3_DSTATE_j;         /* '<S70>/Unit Delay3' */
  uint8_T UnitDelay2_DSTATE_m;         /* '<S70>/Unit Delay2' */
  uint8_T UnitDelay_DSTATE_ku;         /* '<S70>/Unit Delay' */
  uint8_T UnitDelay1_DSTATE_kn;        /* '<S70>/Unit Delay1' */
  boolean_T UnitDelay13_DSTATE;        /* '<S17>/Unit Delay13' */
  boolean_T UnitDelay52_DSTATE;        /* '<S17>/Unit Delay52' */
  boolean_T UnitDelay55_DSTATE;        /* '<S17>/Unit Delay55' */
  boolean_T UnitDelay67_DSTATE_l;      /* '<S32>/Unit Delay67' */
  boolean_T UnitDelay67_DSTATE_lc;     /* '<S33>/Unit Delay67' */
  boolean_T UnitDelay25_DSTATE;        /* '<S17>/Unit Delay25' */
  boolean_T UnitDelay10_DSTATE;        /* '<S17>/Unit Delay10' */
  boolean_T UnitDelay42_DSTATE;        /* '<S17>/Unit Delay42' */
  boolean_T UnitDelay2_DSTATE_l;       /* '<S65>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_g;       /* '<S52>/Unit Delay2' */
  uint8_T is_active_c20_PubIfDecisionLSM_MDL;/* '<S68>/Chart1' */
  uint8_T is_c20_PubIfDecisionLSM_MDL; /* '<S68>/Chart1' */
  uint8_T is_on;                       /* '<S68>/Chart1' */
  uint8_T is_CruiseValid2;             /* '<S68>/Chart1' */
  uint8_T is_init;                     /* '<S68>/Chart1' */
  uint8_T is_CruiseValid1;             /* '<S68>/Chart1' */
  uint8_T is_init_l;                   /* '<S68>/Chart1' */
  uint8_T is_CruiseValid;              /* '<S68>/Chart1' */
  uint8_T is_init_c;                   /* '<S68>/Chart1' */
  uint8_T is_EntryStub1;               /* '<S68>/Chart1' */
  uint8_T is_StubValid;                /* '<S68>/Chart1' */
  uint8_T is_active_c18_PubIfDecisionLSM_MDL;/* '<S68>/Chart' */
  uint8_T is_c18_PubIfDecisionLSM_MDL; /* '<S68>/Chart' */
  uint8_T is_active_c30_PubIfDecisionLSM_MDL;/* '<S47>/TJA_Line_Select' */
  uint8_T is_c30_PubIfDecisionLSM_MDL; /* '<S47>/TJA_Line_Select' */
} DW_PubIfDecisionLSM_MDL_f_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/* Invariant block signals for model 'PubIfDecisionLSM_MDL' */
#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  const uint16_T TmpSignalConversionAtLSM_PilotNohExitDistInport1;/* '<Root>/Subsystem1' */
  const uint8_T TmpSignalConversionAtLSM_HMI_VoiceInport1;/* '<Root>/Subsystem1' */
  const uint8_T TmpSignalConversionAtLSM_PilotRoadStsInport1;/* '<Root>/Subsystem1' */
} ConstB_PubIfDecisionLSM_MDL_h_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_PubIfDecisionLSM_MDL_T {
  const char_T **errorStatus;
};

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_PubIfDecisionLSM_MDL_T rtm;
} MdlrefDW_PubIfDecisionLSM_MDL_T;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern uint32_T LSM_UpdateCnt;         /* '<S3>/Signal Conversion51' */
extern real32_T LSM_QualityK1;         /* '<S17>/Unit Delay54' */
extern real32_T LSM_A3K1;              /* '<S17>/Unit Delay56' */
extern real32_T LSM_A2K1;              /* '<S17>/Unit Delay70' */
extern real32_T LSM_A1K1;              /* '<S17>/Unit Delay69' */
extern real32_T LSM_A0K1;              /* '<S17>/Unit Delay68' */
extern real32_T LSM_RangeK1;           /* '<S17>/Unit Delay67' */
extern real32_T LSM_tLostK1;           /* '<S17>/Unit Delay66' */
extern real32_T LSM_HWALineC0K1;       /* '<S17>/Unit Delay27' */
extern real32_T LSM_LH21;              /* '<S49>/Product' */
extern real32_T LSM_LH22;              /* '<S49>/2-D Lookup Table3' */
extern real32_T LSM_LH23;              /* '<S49>/1-D Lookup Table5' */
extern real32_T LSM_LH1Wij;            /* '<S49>/Merge' */
extern real32_T LSM_LH31;              /* '<S49>/Product4' */
extern real32_T LSM_LH32;              /* '<S49>/2-D Lookup Table4' */
extern real32_T LSM_LH33;              /* '<S49>/1-D Lookup Table6' */
extern real32_T LSM_LH2Wij;            /* '<S49>/Merge1' */
extern real32_T LSM_TJALineC3;         /* '<S3>/Signal Conversion1' */
extern real32_T LSM_LCKLineC0;         /* '<S3>/Signal Conversion10' */
extern real32_T LSM_LCKRange;          /* '<S3>/Signal Conversion11' */
extern real32_T LSM_HWALineC3;         /* '<S3>/Signal Conversion13' */
extern real32_T LSM_HWALineC2;         /* '<S3>/Signal Conversion14' */
extern real32_T LSM_HWALineC1;         /* '<S3>/Signal Conversion15' */
extern real32_T LSM_HWALeLineC3;       /* '<S3>/Signal Conversion16' */
extern real32_T LSM_HWALeLineC2;       /* '<S3>/Signal Conversion17' */
extern real32_T LSM_HWALeLineC1;       /* '<S3>/Signal Conversion18' */
extern real32_T LSM_HWALeLineC0;       /* '<S3>/Signal Conversion19' */
extern real32_T LSM_TJALineC2;         /* '<S3>/Signal Conversion2' */
extern real32_T LSM_HWALeRange;        /* '<S3>/Signal Conversion20' */
extern real32_T LSM_HWALineC0;         /* '<S3>/Signal Conversion22' */
extern real32_T LSM_HWARange;          /* '<S3>/Signal Conversion23' */
extern real32_T LSM_HWARiLineC1;       /* '<S3>/Signal Conversion25' */
extern real32_T LSM_HWARiLineC0;       /* '<S3>/Signal Conversion26' */
extern real32_T LSM_HWARiRange;        /* '<S3>/Signal Conversion27' */
extern real32_T LSM_TJALineC1;         /* '<S3>/Signal Conversion3' */
extern real32_T LSM_HeadAngDiff;       /* '<S3>/Signal Conversion30' */
extern real32_T LSM_HWARiLineC3;       /* '<S3>/Signal Conversion31' */
extern real32_T LSM_HWARiLineC2;       /* '<S3>/Signal Conversion32' */
extern real32_T LSM_ESSLineC2;         /* '<S3>/Signal Conversion33' */
extern real32_T LSM_ESSLineC1;         /* '<S3>/Signal Conversion34' */
extern real32_T LSM_ESSLineC0;         /* '<S3>/Signal Conversion35' */
extern real32_T LSM_ESSRange;          /* '<S3>/Signal Conversion36' */
extern real32_T LSM_ESSLeLineC3;       /* '<S3>/Signal Conversion38' */
extern real32_T LSM_TJALineC0;         /* '<S3>/Signal Conversion4' */
extern real32_T LSM_ESSLineC3;         /* '<S3>/Signal Conversion40' */
extern real32_T LSM_ESSLeLineC0;       /* '<S3>/Signal Conversion41' */
extern real32_T LSM_ESSLeRange;        /* '<S3>/Signal Conversion42' */
extern real32_T LSM_ESSRiLineC3;       /* '<S3>/Signal Conversion44' */
extern real32_T LSM_ESSRiLineC2;       /* '<S3>/Signal Conversion45' */
extern real32_T LSM_ESSRiLineC1;       /* '<S3>/Signal Conversion46' */
extern real32_T LSM_ESSLeLineC2;       /* '<S3>/Signal Conversion47' */
extern real32_T LSM_ESSLeLineC1;       /* '<S3>/Signal Conversion48' */
extern real32_T LSM_ESSRiLineC0;       /* '<S3>/Signal Conversion49' */
extern real32_T LSM_TJARange;          /* '<S3>/Signal Conversion5' */
extern real32_T LSM_ESSRiRange;        /* '<S3>/Signal Conversion50' */
extern real32_T LSM_dyDiff;            /* '<S3>/Signal Conversion59' */
extern real32_T LSM_RoadWidth;         /* '<S3>/Signal Conversion61' */
extern real32_T LSM_LCKLineC3;         /* '<S3>/Signal Conversion7' */
extern real32_T LSM_LCKLineC2;         /* '<S3>/Signal Conversion8' */
extern real32_T LSM_LCKLineC1;         /* '<S3>/Signal Conversion9' */
extern real32_T LSM_OTL_A3;            /* '<S3>/Signal Conversion53' */
extern real32_T LSM_OTL_A2;            /* '<S3>/Signal Conversion54' */
extern real32_T LSM_OTL_A1;            /* '<S3>/Signal Conversion55' */
extern real32_T LSM_OTL_A0;            /* '<S3>/Signal Conversion56' */
extern real32_T LSM_OTL_Range;         /* '<S3>/Signal Conversion57' */
extern real32_T LSM_RFM_LineCenter_C0; /* '<S1>/Signal Copy1' */
extern real32_T LSM_RFM_LineL1_C2;     /* '<S1>/Signal Copy10' */
extern real32_T LSM_RFM_LineL1_C3;     /* '<S1>/Signal Copy11' */
extern real32_T LSM_RFM_LineL1_Start;  /* '<S1>/Signal Copy12' */
extern real32_T LSM_RFM_LineL1_Front;  /* '<S1>/Signal Copy13' */
extern real32_T LSM_RFM_LineR1_C2;     /* '<S1>/Signal Copy14' */
extern real32_T LSM_RFM_LineR1_C3;     /* '<S1>/Signal Copy15' */
extern real32_T LSM_RFM_LineR1_Start;  /* '<S1>/Signal Copy16' */
extern real32_T LSM_RFM_LineR1_Front;  /* '<S1>/Signal Copy17' */
extern real32_T LSM_RFM_LineR1_C0;     /* '<S1>/Signal Copy19' */
extern real32_T LSM_RFM_LineCenter_C1; /* '<S1>/Signal Copy2' */
extern real32_T LSM_RFM_LineR1_C1;     /* '<S1>/Signal Copy20' */
extern real32_T LSM_RFM_LineCenter_C2; /* '<S1>/Signal Copy3' */
extern real32_T LSM_RFM_LineCenter_C3; /* '<S1>/Signal Copy4' */
extern real32_T LSM_RFM_LineCenter_Start;/* '<S1>/Signal Copy5' */
extern real32_T LSM_RFM_LineCenter_Front;/* '<S1>/Signal Copy6' */
extern real32_T LSM_RFM_LineL1_C0;     /* '<S1>/Signal Copy8' */
extern real32_T LSM_RFM_LineL1_C1;     /* '<S1>/Signal Copy9' */
extern real32_T LSM_L1_Range;          /* '<S4>/Signal Copy1' */
extern real32_T LSM_LA_ELEM_0_C1;      /* '<S4>/Signal Copy10' */
extern real32_T LSM_LRE_ELEM_1_C0;     /* '<S4>/Signal Copy101' */
extern real32_T LSM_LRE_ELEM_1_Range_Start;/* '<S4>/Signal Copy103' */
extern real32_T LSM_LA_ELEM_0_C2;      /* '<S4>/Signal Copy11' */
extern real32_T LSM_LA_ELEM_0_C3;      /* '<S4>/Signal Copy12' */
extern real32_T LSM_LA_ELEM_0_Range_Start;/* '<S4>/Signal Copy13' */
extern real32_T LSM_LA_ELEM_0_Range_End;/* '<S4>/Signal Copy14' */
extern real32_T LSM_LA_ELEM_0_Marker_Width;/* '<S4>/Signal Copy19' */
extern real32_T LSM_LA_ELEM_0_Confidence;/* '<S4>/Signal Copy20' */
extern real32_T LSM_LA_ELEM_1_C0;      /* '<S4>/Signal Copy21' */
extern real32_T LSM_LA_ELEM_1_C1;      /* '<S4>/Signal Copy22' */
extern real32_T LSM_LA_ELEM_1_C2;      /* '<S4>/Signal Copy23' */
extern real32_T LSM_LA_ELEM_1_C3;      /* '<S4>/Signal Copy24' */
extern real32_T LSM_LA_ELEM_1_Range_Start;/* '<S4>/Signal Copy25' */
extern real32_T LSM_LA_ELEM_1_Range_End;/* '<S4>/Signal Copy26' */
extern real32_T LSM_L2_Range;          /* '<S4>/Signal Copy3' */
extern real32_T LSM_LA_ELEM_1_Confidence;/* '<S4>/Signal Copy30' */
extern real32_T LSM_LA_ELEM_1_Marker_Width;/* '<S4>/Signal Copy32' */
extern real32_T LSM_LA_ELEM_2_C0;      /* '<S4>/Signal Copy33' */
extern real32_T LSM_LA_ELEM_2_C1;      /* '<S4>/Signal Copy34' */
extern real32_T LSM_LA_ELEM_2_C2;      /* '<S4>/Signal Copy35' */
extern real32_T LSM_LA_ELEM_2_C3;      /* '<S4>/Signal Copy36' */
extern real32_T LSM_LA_ELEM_2_Range_Start;/* '<S4>/Signal Copy37' */
extern real32_T LSM_LA_ELEM_2_Range_End;/* '<S4>/Signal Copy38' */
extern real32_T LSM_LA_ELEM_2_Confidence;/* '<S4>/Signal Copy41' */
extern real32_T LSM_LA_ELEM_2_Marker_Width;/* '<S4>/Signal Copy44' */
extern real32_T LSM_LA_ELEM_3_C0;      /* '<S4>/Signal Copy45' */
extern real32_T LSM_LA_ELEM_3_C1;      /* '<S4>/Signal Copy46' */
extern real32_T LSM_LA_ELEM_3_C2;      /* '<S4>/Signal Copy47' */
extern real32_T LSM_LA_ELEM_3_C3;      /* '<S4>/Signal Copy48' */
extern real32_T LSM_LA_ELEM_3_Range_Start;/* '<S4>/Signal Copy49' */
extern real32_T LSM_L3_Range;          /* '<S4>/Signal Copy5' */
extern real32_T LSM_LA_ELEM_3_Range_End;/* '<S4>/Signal Copy50' */
extern real32_T LSM_LA_ELEM_3_Confidence;/* '<S4>/Signal Copy54' */
extern real32_T LSM_LA_ELEM_3_Marker_Width;/* '<S4>/Signal Copy56' */
extern real32_T LSM_LH_ELEM_0_C0;      /* '<S4>/Signal Copy58' */
extern real32_T LSM_LH_ELEM_0_C1;      /* '<S4>/Signal Copy59' */
extern real32_T LSM_LH_ELEM_0_C2;      /* '<S4>/Signal Copy60' */
extern real32_T LSM_LH_ELEM_0_Confidence;/* '<S4>/Signal Copy61' */
extern real32_T LSM_LH_ELEM_0_C3;      /* '<S4>/Signal Copy62' */
extern real32_T LSM_LH_ELEM_0_VR_End;  /* '<S4>/Signal Copy63' */
extern real32_T LSM_LH_ELEM_0_Marker_Width;/* '<S4>/Signal Copy67' */
extern real32_T LSM_L4_Range;          /* '<S4>/Signal Copy7' */
extern real32_T LSM_LH_ELEM_0_VR_Start;/* '<S4>/Signal Copy70' */
extern real32_T LSM_LH_ELEM_1_C0;      /* '<S4>/Signal Copy71' */
extern real32_T LSM_LH_ELEM_1_C1;      /* '<S4>/Signal Copy72' */
extern real32_T LSM_LH_ELEM_1_C2;      /* '<S4>/Signal Copy73' */
extern real32_T LSM_LH_ELEM_1_Confidence;/* '<S4>/Signal Copy74' */
extern real32_T LSM_LH_ELEM_1_C3;      /* '<S4>/Signal Copy75' */
extern real32_T LSM_LH_ELEM_1_VR_Start;/* '<S4>/Signal Copy76' */
extern real32_T LSM_LH_ELEM_1_Marker_Width;/* '<S4>/Signal Copy80' */
extern real32_T LSM_LH_ELEM_1_VR_End;  /* '<S4>/Signal Copy83' */
extern real32_T LSM_LRE_ELEM_0_C1;     /* '<S4>/Signal Copy86' */
extern real32_T LSM_LRE_ELEM_0_C2;     /* '<S4>/Signal Copy87' */
extern real32_T LSM_LRE_ELEM_0_C3;     /* '<S4>/Signal Copy88' */
extern real32_T LSM_LRE_ELEM_0_Range_End;/* '<S4>/Signal Copy89' */
extern real32_T LSM_LA_ELEM_0_C0;      /* '<S4>/Signal Copy9' */
extern real32_T LSM_LRE_ELEM_0_Range_Start;/* '<S4>/Signal Copy90' */
extern real32_T LSM_LRE_ELEM_0_C0;     /* '<S4>/Signal Copy92' */
extern real32_T LSM_LRE_ELEM_0_Confidence;/* '<S4>/Signal Copy93' */
extern real32_T LSM_LRE_ELEM_1_Confidence;/* '<S4>/Signal Copy94' */
extern real32_T LSM_LRE_ELEM_1_C1;     /* '<S4>/Signal Copy95' */
extern real32_T LSM_LRE_ELEM_1_C2;     /* '<S4>/Signal Copy96' */
extern real32_T LSM_LRE_ELEM_1_C3;     /* '<S4>/Signal Copy97' */
extern real32_T LSM_LRE_ELEM_1_Range_End;/* '<S4>/Signal Copy99' */
extern real32_T LSM_EN_C0;             /* '<S17>/Signal Copy11' */
extern real32_T LSM_EN_C1;             /* '<S17>/Signal Copy12' */
extern real32_T LSM_EN_C2;             /* '<S17>/Signal Copy13' */
extern real32_T LSM_EN_C3;             /* '<S17>/Signal Copy14' */
extern real32_T LSM_EN_Start;          /* '<S17>/Signal Copy15' */
extern real32_T LSM_EN_Front;          /* '<S17>/Signal Copy16' */
extern real32_T LSM_Exit_C0;           /* '<S17>/Signal Copy18' */
extern real32_T LSM_Exit_C1;           /* '<S17>/Signal Copy19' */
extern real32_T LSM_Exit_C2;           /* '<S17>/Signal Copy20' */
extern real32_T LSM_Exit_C3;           /* '<S17>/Signal Copy21' */
extern real32_T LSM_Exit_Start;        /* '<S17>/Signal Copy22' */
extern real32_T LSM_Exit_Front;        /* '<S17>/Signal Copy23' */
extern real32_T LSM_L3_AvaliTime;      /* '<S17>/Signal Copy24' */
extern real32_T LSM_L2_AvaliTime;      /* '<S17>/Signal Copy25' */
extern real32_T LSM_L1_AvaliDis;       /* '<S17>/Signal Copy26' */
extern real32_T LSM_L2_AvaliDis;       /* '<S17>/Signal Copy27' */
extern real32_T LSM_L1_AvaliTime;      /* '<S17>/Signal Copy28' */
extern real32_T LSM_L4_AvaliTime;      /* '<S17>/Signal Copy29' */
extern real32_T LSM_L3_AvaliDis;       /* '<S17>/Signal Copy30' */
extern real32_T LSM_L4_AvaliDis;       /* '<S17>/Signal Copy31' */
extern real32_T LSM_L1_A0;             /* '<S17>/Signal Copy32' */
extern real32_T LSM_L2_A0;             /* '<S17>/Signal Copy33' */
extern real32_T LSM_L3_A0;             /* '<S17>/Signal Copy34' */
extern real32_T LSM_L4_A0;             /* '<S17>/Signal Copy35' */
extern real32_T LSM_CurDis2;           /* '<S49>/MATLAB Function6' */
extern real32_T LSM_DeltaDis2;         /* '<S49>/MATLAB Function6' */
extern real32_T LSM_CurDis3;           /* '<S49>/MATLAB Function6' */
extern real32_T LSM_DeltaDis3;         /* '<S49>/MATLAB Function6' */
extern real32_T LSM_RoadWidth1;        /* '<S17>/RoadWidthCalc1' */
extern real32_T LSM_CentLineA3;        /* '<S17>/MATLAB Function3' */
extern real32_T LSM_CentLineA2;        /* '<S17>/MATLAB Function3' */
extern real32_T LSM_CentLineA1;        /* '<S17>/MATLAB Function3' */
extern real32_T LSM_CentLineA0;        /* '<S17>/MATLAB Function3' */
extern real32_T LSM_CentLineRange;     /* '<S17>/MATLAB Function3' */
extern real32_T LSM_CentQ;             /* '<S17>/MATLAB Function3' */
extern real32_T LSM_dDeltaX;           /* '<S17>/CalcEgoVehMove' */
extern real32_T LSM_dDeltaY;           /* '<S17>/CalcEgoVehMove' */
extern real32_T LSM_CosOfPsi;          /* '<S17>/CalcEgoVehMove' */
extern real32_T LSM_SinOfsi;           /* '<S17>/CalcEgoVehMove' */
extern uint8_T LSM_TJA_Line_State1;    /* '<S17>/Signal Copy1' */
extern uint8_T LSM_HWASts;             /* '<S17>/Signal Copy' */
extern uint8_T LSM_OTL_Count;          /* '<S3>/Signal Conversion58' */
extern uint8_T LSM_RFM_LineCenter_Valid;/* '<S1>/Signal Copy' */
extern uint8_T LSM_RFM_LineR1_Valid;   /* '<S1>/Signal Copy18' */
extern uint8_T LSM_RFM_LineL1_Valid;   /* '<S1>/Signal Copy7' */
extern uint8_T LSM_L1_Conf;            /* '<S4>/Signal Copy' */
extern uint8_T LSM_LRE_ELEM_1_Line_Side;/* '<S4>/Signal Copy100' */
extern uint8_T LSM_LA_ELEM_0_Availability_State;/* '<S4>/Signal Copy15' */
extern uint8_T LSM_LA_ELEM_0_Lanemark_Type;/* '<S4>/Signal Copy16' */
extern uint8_T LSM_LA_ELEM_0_DLM_Type; /* '<S4>/Signal Copy17' */
extern uint8_T LSM_LA_ELEM_0_Line_Side;/* '<S4>/Signal Copy18' */
extern uint8_T LSM_L2_Conf;            /* '<S4>/Signal Copy2' */
extern uint8_T LSM_LA_ELEM_1_Availability_State;/* '<S4>/Signal Copy27' */
extern uint8_T LSM_LA_ELEM_1_Lanemark_Type;/* '<S4>/Signal Copy28' */
extern uint8_T LSM_LA_ELEM_1_DLM_Type; /* '<S4>/Signal Copy29' */
extern uint8_T LSM_LA_ELEM_1_Line_Side;/* '<S4>/Signal Copy31' */
extern uint8_T LSM_LA_ELEM_2_Availability_State;/* '<S4>/Signal Copy39' */
extern uint8_T LSM_L3_Conf;            /* '<S4>/Signal Copy4' */
extern uint8_T LSM_LA_ELEM_2_Lanemark_Type;/* '<S4>/Signal Copy40' */
extern uint8_T LSM_LA_ELEM_2_DLM_Type; /* '<S4>/Signal Copy42' */
extern uint8_T LSM_LA_ELEM_2_Line_Side;/* '<S4>/Signal Copy43' */
extern uint8_T LSM_LA_ELEM_3_Availability_State;/* '<S4>/Signal Copy51' */
extern uint8_T LSM_LA_ELEM_3_Lanemark_Type;/* '<S4>/Signal Copy52' */
extern uint8_T LSM_LA_ELEM_3_DLM_Type; /* '<S4>/Signal Copy53' */
extern uint8_T LSM_LA_ELEM_3_Line_Side;/* '<S4>/Signal Copy55' */
extern uint8_T LSM_LH_Count;           /* '<S4>/Signal Copy57' */
extern uint8_T LSM_L4_Conf;            /* '<S4>/Signal Copy6' */
extern uint8_T LSM_LH_ELEM_0_Availability_State;/* '<S4>/Signal Copy64' */
extern uint8_T LSM_LH_ELEM_0_Lanemark_Type;/* '<S4>/Signal Copy65' */
extern uint8_T LSM_LH_ELEM_0_DLM_Type; /* '<S4>/Signal Copy66' */
extern uint8_T LSM_LH_ELEM_0_Line_Side;/* '<S4>/Signal Copy68' */
extern uint8_T LSM_LH_ELEM_0_Crossing; /* '<S4>/Signal Copy69' */
extern uint8_T LSM_LH_ELEM_1_Availability_State;/* '<S4>/Signal Copy77' */
extern uint8_T LSM_LH_ELEM_1_Lanemark_Type;/* '<S4>/Signal Copy78' */
extern uint8_T LSM_LH_ELEM_1_DLM_Type; /* '<S4>/Signal Copy79' */
extern uint8_T LSM_LA_Adjacent_Count;  /* '<S4>/Signal Copy8' */
extern uint8_T LSM_LH_ELEM_1_Line_Side;/* '<S4>/Signal Copy81' */
extern uint8_T LSM_LH_ELEM_1_Crossing; /* '<S4>/Signal Copy82' */
extern uint8_T LSM_LRE_Count;          /* '<S4>/Signal Copy84' */
extern uint8_T LSM_LRE_ELEM_0_Line_Side;/* '<S4>/Signal Copy85' */
extern uint8_T LSM_LRE_ELEM_0_Availability_State;/* '<S4>/Signal Copy91' */
extern uint8_T LSM_LRE_ELEM_1_Availability_State;/* '<S4>/Signal Copy98' */
extern uint8_T LSM_EN_Valid;           /* '<S17>/Signal Copy10' */
extern uint8_T LSM_Exit_Valid;         /* '<S17>/Signal Copy17' */
extern uint8_T LSM_LeftLineConf;       /* '<S49>/Signal Copy' */
extern uint8_T LSM_RightLineConf;      /* '<S49>/Signal Copy1' */
extern uint8_T LSM_TJA_Line_State;     /* '<S47>/TJA_Line_Select' */
extern uint8_T LSM_Line_source;        /* '<S47>/TJA_Line_Select' */
extern uint8_T LSM_Wij_State;          /* '<S17>/MATLAB Function5' */
extern uint8_T LSM_Line_State;         /* '<S17>/MATLAB Function4' */
extern uint8_T LSM_LockCounter;        /* '<S17>/HWALineCalc' */
extern int8_T LSM_MoveID;              /* '<S17>/HWALineCalc' */
extern int8_T LSM_LockID;              /* '<S17>/HWALineCalc' */
extern boolean_T LSM_LineValidK1;      /* '<S17>/Unit Delay55' */
extern boolean_T LSM_LeftMostLane;     /* '<S17>/Signal Copy8' */
extern boolean_T LSM_TJALineValid;     /* '<S3>/Signal Conversion' */
extern boolean_T LSM_HWALineValid;     /* '<S3>/Signal Conversion12' */
extern boolean_T LSM_HWARiLineValid;   /* '<S3>/Signal Conversion21' */
extern boolean_T LSM_HWALeLineValid;   /* '<S3>/Signal Conversion24' */
extern boolean_T LSM_DoubleLineLost_b; /* '<S3>/Signal Conversion29' */
extern boolean_T LSM_ESSLeLineValid;   /* '<S3>/Signal Conversion37' */
extern boolean_T LSM_ESSLineValid;     /* '<S3>/Signal Conversion39' */
extern boolean_T LSM_ESSRiLineValid;   /* '<S3>/Signal Conversion43' */
extern boolean_T LSM_LCKLineValid;     /* '<S3>/Signal Conversion6' */
extern boolean_T LSM_MLeLane;          /* '<S3>/Signal Conversion60' */
extern boolean_T LSM_LeftLaneChange;   /* '<S3>/Signal Conversion62' */
extern boolean_T LSM_RightLaneChange;  /* '<S3>/Signal Conversion63' */
extern boolean_T LSM_OTLineValid;      /* '<S3>/Signal Conversion52' */
extern boolean_T LSM_SingleLineLost_b; /* '<S3>/Signal Conversion28' */
extern boolean_T LSM_PathLaneAvail[3]; /* '<S17>/VisLineFilter5' */
extern boolean_T LSM_LeftOffset_b;     /* '<S17>/VisLineFilter3' */
extern boolean_T LSM_RightOffset_b;    /* '<S17>/VisLineFilter3' */
extern boolean_T LSM_LeftLineTypeEN;   /* '<S53>/RoadWidthCalc1' */
extern boolean_T LSM_RightLineTypeEN;  /* '<S53>/RoadWidthCalc1' */
extern boolean_T LSM_DOP_EN;           /* '<S47>/MATLAB Function' */
extern boolean_T LSM_DOP_Out;          /* '<S47>/MATLAB Function' */
extern boolean_T LSM_LH1Valid;         /* '<S17>/MATLAB Function5' */
extern boolean_T LSM_LH2Valid;         /* '<S17>/MATLAB Function5' */
extern boolean_T LSM_CentLineValid;    /* '<S17>/MATLAB Function3' */
extern boolean_T LSM_VisLineUpdate;    /* '<S4>/MATLAB Function' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T P_LSM_DOP_C0_EN_Limit;   /* Variable: P_LSM_DOP_C0_EN_Limit
                                        * Referenced by: '<S47>/Constant3'
                                        */
extern real_T P_LSM_DOP_C0_out_Limit;  /* Variable: P_LSM_DOP_C0_out_Limit
                                        * Referenced by: '<S47>/Constant6'
                                        */
extern real_T P_LSM_NOH_Switch;        /* Variable: P_LSM_NOH_Switch
                                        * Referenced by: '<S17>/Constant10'
                                        */
extern real32_T P_LSM_DOPValid_CheckTime;/* Variable: P_LSM_DOPValid_CheckTime
                                          * Referenced by: '<S47>/Constant23'
                                          */
extern real32_T P_LSM_DOP_C1AndC2_Lim_X[7];/* Variable: P_LSM_DOP_C1AndC2_Lim_X
                                            * Referenced by:
                                            *   '<S47>/preDisMinTable1'
                                            *   '<S47>/preDisMinTable2'
                                            *   '<S47>/preDisMinTable3'
                                            *   '<S47>/preDisMinTable4'
                                            *   '<S47>/preDisMinTable5'
                                            *   '<S47>/preDisMinTable7'
                                            */
extern real32_T P_LSM_DOP_C1_EN_Limit[7];/* Variable: P_LSM_DOP_C1_EN_Limit
                                          * Referenced by: '<S47>/preDisMinTable1'
                                          */
extern real32_T P_LSM_DOP_C1_out_Limit[7];/* Variable: P_LSM_DOP_C1_out_Limit
                                           * Referenced by: '<S47>/preDisMinTable3'
                                           */
extern real32_T P_LSM_DOP_C2_EN_Limit[7];/* Variable: P_LSM_DOP_C2_EN_Limit
                                          * Referenced by: '<S47>/preDisMinTable2'
                                          */
extern real32_T P_LSM_DOP_C2_out_Limit[7];/* Variable: P_LSM_DOP_C2_out_Limit
                                           * Referenced by: '<S47>/preDisMinTable4'
                                           */
extern real32_T P_LSM_DOP_In_Pre2Dop_Dis;/* Variable: P_LSM_DOP_In_Pre2Dop_Dis
                                          * Referenced by: '<S47>/Constant14'
                                          */
extern real32_T P_LSM_DOP_Out_Pre2Dop_Dis;/* Variable: P_LSM_DOP_Out_Pre2Dop_Dis
                                           * Referenced by: '<S47>/Constant22'
                                           */
extern real32_T P_LSM_DOP_PreDis_X[16];/* Variable: P_LSM_DOP_PreDis_X
                                        * Referenced by: '<S47>/preDisMinTable'
                                        */
extern real32_T P_LSM_DOP_PreDis_Y[16];/* Variable: P_LSM_DOP_PreDis_Y
                                        * Referenced by: '<S47>/preDisMinTable'
                                        */
extern real32_T P_LSM_DoubleLine_Curr2Cent_Dislimit;
                                /* Variable: P_LSM_DoubleLine_Curr2Cent_Dislimit
                                 * Referenced by: '<S47>/Constant20'
                                 */
extern real32_T P_LSM_DoubleLine_DOPOut_C1[7];/* Variable: P_LSM_DoubleLine_DOPOut_C1
                                               * Referenced by: '<S47>/preDisMinTable5'
                                               */
extern real32_T P_LSM_DoubleLine_Dop2Cent_Dislimit;
                                 /* Variable: P_LSM_DoubleLine_Dop2Cent_Dislimit
                                  * Referenced by: '<S47>/Constant13'
                                  */
extern real32_T P_LSM_DoubleLine_Pre2Cent_Dislimit;
                                 /* Variable: P_LSM_DoubleLine_Pre2Cent_Dislimit
                                  * Referenced by: '<S47>/Constant19'
                                  */
extern real32_T P_LSM_IFV2CenterAxis;  /* Variable: P_LSM_IFV2CenterAxis
                                        * Referenced by: '<S16>/Constant5'
                                        */
extern real32_T P_LSM_IFV2RearAxis;    /* Variable: P_LSM_IFV2RearAxis
                                        * Referenced by: '<S16>/Constant4'
                                        */
extern real32_T P_LSM_LineSTD_Limit;   /* Variable: P_LSM_LineSTD_Limit
                                        * Referenced by: '<S17>/Constant14'
                                        */
extern real32_T P_LSM_LineWijCal_C12;  /* Variable: P_LSM_LineWijCal_C12
                                        * Referenced by:
                                        *   '<S49>/Constant7'
                                        *   '<S50>/Constant7'
                                        */
extern real32_T P_LSM_LineWijCal_C13;  /* Variable: P_LSM_LineWijCal_C13
                                        * Referenced by:
                                        *   '<S49>/Constant9'
                                        *   '<S50>/Constant9'
                                        */
extern real32_T P_LSM_PosLineLcFac;    /* Variable: P_LSM_PosLineLcFac
                                        * Referenced by:
                                        *   '<S191>/Constant'
                                        *   '<S202>/Constant'
                                        */
extern real32_T P_LSM_Pre_t;           /* Variable: P_LSM_Pre_t
                                        * Referenced by: '<S17>/Constant7'
                                        */
extern real32_T P_LSM_SingleLine_Cent2Edge_Dislimit;
                                /* Variable: P_LSM_SingleLine_Cent2Edge_Dislimit
                                 * Referenced by: '<S47>/Constant16'
                                 */
extern real32_T P_LSM_SingleLine_Curr2Cent_Dislimit;
                                /* Variable: P_LSM_SingleLine_Curr2Cent_Dislimit
                                 * Referenced by: '<S47>/Constant18'
                                 */
extern real32_T P_LSM_SingleLine_DOPOut_C1[7];/* Variable: P_LSM_SingleLine_DOPOut_C1
                                               * Referenced by: '<S47>/preDisMinTable7'
                                               */
extern real32_T P_LSM_SingleLine_Dop2Cent_Dislimit;
                                 /* Variable: P_LSM_SingleLine_Dop2Cent_Dislimit
                                  * Referenced by: '<S47>/Constant21'
                                  */
extern real32_T P_LSM_SingleLine_Pre2Cent_Dislimit;
                                 /* Variable: P_LSM_SingleLine_Pre2Cent_Dislimit
                                  * Referenced by: '<S47>/Constant17'
                                  */
extern uint8_T P_LSM_ALC_Enable;       /* Variable: P_LSM_ALC_Enable
                                        * Referenced by: '<S17>/Constant18'
                                        */
extern void PubIfDecisionLSM_MDL_Init(void);
extern void PubIfDecisionLSM_MDL_Reset(void);
extern void PubIfDecisionLSM_MDL_Start(void);
extern void PubIfDecisionLSM_MDL_Update(const EQ4_LH_BUS *rtu_EQ4_LH, const
  EQ4_LA_BUS *rtu_EQ4_LA, const EQ4_LRE_BUS *rtu_EQ4_LRE, const
  TOS_P0_TARGET_LINE_BUS *rtu_TOS_P0_TARGET_LINE, const VSM_HMI_BUS *rtu_VSM_HMI,
  const RFM_ROAD_BUS *rtu_RFM_ROAD);
extern void PubIfDecisionLSM_MDL(const EQ4_LH_BUS *rtu_EQ4_LH, const EQ4_LA_BUS *
  rtu_EQ4_LA, const EQ4_LRE_BUS *rtu_EQ4_LRE, const TOS_P0_TARGET_LINE_BUS
  *rtu_TOS_P0_TARGET_LINE, const VSM_HMI_BUS *rtu_VSM_HMI, const real32_T
  *rtu_vxvRefMs, const real32_T *rtu_kapTraj, const RFM_ROAD_BUS *rtu_RFM_ROAD,
  const RFM_LANE_BUS *rtu_RFM_CURRENT_LANE, const RFM_LANE_BUS
  *rtu_RFM_RIGHT_LANE, const RFM_INTERSEC_ALERT_BUS *rtu_RFM_INTERSEC_ALERT,
  const RFM_REC_LANES_BUS *rtu_RFM_REC_LANES, const RFM_LINE_BUS
  *rtu_RFM_LINE_L1, const RFM_LINE_BUS *rtu_RFM_LINE_R1, const RFM_LINE_BUS
  *rtu_RFM_LINE_L2, const RFM_LINE_BUS *rtu_RFM_LINE_R2, const RFM_LINE_BUS
  *rtu_RFM_LINE_CL, const RFM_LINE_BUS *rtu_RFM_LINE_PRED, const RFM_LINE_BUS
  *rtu_RFM_LINE_ENTRY_CL, const RFM_LINE_BUS *rtu_RFM_LINE_EXIT_CL, const
  RFM_TSR_BUS *rtu_RFM_TSR, LSM_TJA_ICA_BUS *rty_LSM_TJA_ICA, LSM_LCK_BUS
  *rty_LSM_LCK, LSM_HWA_BUS *rty_LSM_HWA, LSM_ESS_BUS *rty_LSM_ESS, uint32_T
  *rty_LSM_UpdateCnt, uint8_T *rty_LSM_PilotTurnSwSts, uint8_T *rty_LSM_PilotSts,
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL);

/* Model reference registration function */
extern void PubIfDecisionLSM_MDL_initialize(const char_T **rt_errorStatus);

#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

extern void PubIfDecisionLSM_MDL_LHLine1(const real32_T *rtu_LHA0, const
  real32_T *rtu_LHA1, const real32_T *rtu_LHA2, const real32_T *rtu_LHA3, const
  real32_T *rtu_LHRaMin, const real32_T *rtu_LHRaMax, const real32_T
  *rtu_LH_ELEM_Second_C0, const real32_T *rtu_LH_ELEM_Second_C1, const real32_T *
  rtu_LH_ELEM_Second_C2, const real32_T *rtu_LH_ELEM_Second_C3, const real32_T
  *rtu_LH_ELEM_Second_Start, const real32_T *rtu_LH_ELEM_Second_End,
  B_LHLine1_PubIfDecisionLSM_MDL_T *localB);
extern void PubIfDecisionLSM_MDL_IfActionSubsystem(uint16_T rtu_In1, uint16_T
  *rty_Out1, B_IfActionSubsystem_PubIfDecisionLSM_MDL_T *localB);
extern void PubIfDecisionLSM_MDL_IfActionSubsystem1(uint16_T *rty_Out1);
extern void PubIfDecisionLSM_MDL_MATLABFunction14(const real32_T *rtu_u, uint8_T
  rtu_i_k, B_MATLABFunction14_PubIfDecisionLSM_MDL_T *localB);
extern void PubIfDecisionLSM_MDL_IfActionSubsystem_i(real32_T rtu_In1, real32_T *
  rty_LH1Wij);
extern void PubIfDecisionLSM_MDL_IfActionSubsystem2(real32_T *rty_LH1Wij);
extern void PubIfDecisionLSM_MDL_IfActionSubsystem5(real32_T *rty_Out1, real32_T
  *rty_Out2);
extern void PubIfDecisionLSM_MDL_IfActionSubsystem4(real32_T rtu_In1, real32_T
  rtu_In2, real32_T *rty_Out1, real32_T *rty_Out2);
extern void PubIfDecisionLSM_MDL_MATLABFunction2(const uint8_T *rtu_HWASts,
  uint8_T rtu_HWAStsK1, uint8_T rtu_Lock_counterK1,
  B_MATLABFunction2_PubIfDecisionLSM_MDL_T *localB);
extern void PubIfDecisionLSM_MDL_MATLABFunction3(real32_T rtu_C12, real32_T
  rtu_C13, B_MATLABFunction3_PubIfDecisionLSM_MDL_T *localB);
extern void PubIfDecisionLSM_MDL_MATLABFunction7(real32_T rtu_L2_R, real32_T
  rtu_L3_R, B_MATLABFunction7_PubIfDecisionLSM_MDL_T *localB);

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

extern MdlrefDW_PubIfDecisionLSM_MDL_T PubIfDecisionLSM_MDL_MdlrefDW;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_PubIfDecisionLSM_MDL_c_T PubIfDecisionLSM_MDL_B;

/* Block states (default storage) */
extern DW_PubIfDecisionLSM_MDL_f_T PubIfDecisionLSM_MDL_DW;

#endif                               /*PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_*/

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PubIfDecisionLSM_MDL'
 * '<S1>'   : 'PubIfDecisionLSM_MDL/Subsystem1'
 * '<S2>'   : 'PubIfDecisionLSM_MDL/Subsystem1/Counter Free-Running'
 * '<S3>'   : 'PubIfDecisionLSM_MDL/Subsystem1/LSM_Signal'
 * '<S4>'   : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms'
 * '<S5>'   : 'PubIfDecisionLSM_MDL/Subsystem1/Counter Free-Running/Increment Real World'
 * '<S6>'   : 'PubIfDecisionLSM_MDL/Subsystem1/Counter Free-Running/Wrap To Zero'
 * '<S7>'   : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/DetectChange'
 * '<S8>'   : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/DetectChange1'
 * '<S9>'   : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/DetectChange2'
 * '<S10>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/LALine'
 * '<S11>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/LHLine'
 * '<S12>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/LHLine1'
 * '<S13>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/LHLine2'
 * '<S14>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/LRELine'
 * '<S15>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/MATLAB Function'
 * '<S16>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/Simulink Function'
 * '<S17>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc'
 * '<S18>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/Simulink Function/MATLAB Function3'
 * '<S19>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/CalcEgoVehMove'
 * '<S20>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/CalcEgoVehMove2'
 * '<S21>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Constant10'
 * '<S22>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Constant17'
 * '<S23>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Constant2'
 * '<S24>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Constant3'
 * '<S25>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Constant8'
 * '<S26>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Constant9'
 * '<S27>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Zero'
 * '<S28>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Constant1'
 * '<S29>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Constant59'
 * '<S30>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Compare To Constant60'
 * '<S31>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/DetectChange'
 * '<S32>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/DetectIncrease'
 * '<S33>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/DetectIncrease1'
 * '<S34>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/ESSLineCalc1'
 * '<S35>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/HWALineCalc'
 * '<S36>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/LREWidthCalc'
 * '<S37>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/LineSelect'
 * '<S38>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/MATLAB Function'
 * '<S39>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/MATLAB Function1'
 * '<S40>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/MATLAB Function2'
 * '<S41>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/MATLAB Function3'
 * '<S42>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/MATLAB Function4'
 * '<S43>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/MATLAB Function5'
 * '<S44>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/MATLAB Function6'
 * '<S45>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/NOA'
 * '<S46>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/RoadWidthCalc1'
 * '<S47>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem2'
 * '<S48>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3'
 * '<S49>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4'
 * '<S50>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5'
 * '<S51>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/TJA2NOA'
 * '<S52>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/TrueDurationTime'
 * '<S53>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/TypeConf'
 * '<S54>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/TypeConf1'
 * '<S55>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/VehStation'
 * '<S56>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/VisLineFilter1'
 * '<S57>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/VisLineFilter2'
 * '<S58>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/VisLineFilter3'
 * '<S59>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/VisLineFilter4'
 * '<S60>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/VisLineFilter5'
 * '<S61>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/YBranchRi'
 * '<S62>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem2/LineSelect1'
 * '<S63>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem2/MATLAB Function'
 * '<S64>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem2/TJA_Line_Select'
 * '<S65>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem2/TrueDurationTime8'
 * '<S66>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem2/TrueDurationTime8/If Action Subsystem'
 * '<S67>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem2/TrueDurationTime8/If Action Subsystem1'
 * '<S68>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem'
 * '<S69>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2'
 * '<S70>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem3'
 * '<S71>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem/Chart'
 * '<S72>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem/Chart1'
 * '<S73>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem/Compare To Constant1'
 * '<S74>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem/Compare To Constant12'
 * '<S75>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem/MATLAB Function'
 * '<S76>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant1'
 * '<S77>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant10'
 * '<S78>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant11'
 * '<S79>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant12'
 * '<S80>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant13'
 * '<S81>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant14'
 * '<S82>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant15'
 * '<S83>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant16'
 * '<S84>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant17'
 * '<S85>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant18'
 * '<S86>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant19'
 * '<S87>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant2'
 * '<S88>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant20'
 * '<S89>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant21'
 * '<S90>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant22'
 * '<S91>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant23'
 * '<S92>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant24'
 * '<S93>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant25'
 * '<S94>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant26'
 * '<S95>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant27'
 * '<S96>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant28'
 * '<S97>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant29'
 * '<S98>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant3'
 * '<S99>'  : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant30'
 * '<S100>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant31'
 * '<S101>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant32'
 * '<S102>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant33'
 * '<S103>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant34'
 * '<S104>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant35'
 * '<S105>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant36'
 * '<S106>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant37'
 * '<S107>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant38'
 * '<S108>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant39'
 * '<S109>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant4'
 * '<S110>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant40'
 * '<S111>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant41'
 * '<S112>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant42'
 * '<S113>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant43'
 * '<S114>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant44'
 * '<S115>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant45'
 * '<S116>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant46'
 * '<S117>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant47'
 * '<S118>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant48'
 * '<S119>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant49'
 * '<S120>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant5'
 * '<S121>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant50'
 * '<S122>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant51'
 * '<S123>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant52'
 * '<S124>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant53'
 * '<S125>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant54'
 * '<S126>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant55'
 * '<S127>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant56'
 * '<S128>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant57'
 * '<S129>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant58'
 * '<S130>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant59'
 * '<S131>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant6'
 * '<S132>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant60'
 * '<S133>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant61'
 * '<S134>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant62'
 * '<S135>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant63'
 * '<S136>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant64'
 * '<S137>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant65'
 * '<S138>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant66'
 * '<S139>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant67'
 * '<S140>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant68'
 * '<S141>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant69'
 * '<S142>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant7'
 * '<S143>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant70'
 * '<S144>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant71'
 * '<S145>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant72'
 * '<S146>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant73'
 * '<S147>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant8'
 * '<S148>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Compare To Constant9'
 * '<S149>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/MATLAB Function'
 * '<S150>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem'
 * '<S151>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem1'
 * '<S152>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem10'
 * '<S153>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem11'
 * '<S154>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem12'
 * '<S155>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem13'
 * '<S156>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem14'
 * '<S157>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem15'
 * '<S158>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem16'
 * '<S159>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem2'
 * '<S160>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem3'
 * '<S161>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem4'
 * '<S162>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem5'
 * '<S163>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem6'
 * '<S164>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem7'
 * '<S165>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem8'
 * '<S166>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem9'
 * '<S167>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem/MATLAB Function14'
 * '<S168>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem1/MATLAB Function14'
 * '<S169>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem10/MATLAB Function14'
 * '<S170>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem11/MATLAB Function14'
 * '<S171>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem12/MATLAB Function14'
 * '<S172>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem13/MATLAB Function14'
 * '<S173>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem14/MATLAB Function14'
 * '<S174>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem15/MATLAB Function14'
 * '<S175>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem16/MATLAB Function14'
 * '<S176>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem2/MATLAB Function14'
 * '<S177>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem3/MATLAB Function14'
 * '<S178>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem4/MATLAB Function14'
 * '<S179>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem5/MATLAB Function14'
 * '<S180>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem6/MATLAB Function14'
 * '<S181>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem7/MATLAB Function14'
 * '<S182>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem8/MATLAB Function14'
 * '<S183>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem2/Subsystem9/MATLAB Function14'
 * '<S184>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem3/Compare To Constant2'
 * '<S185>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem3/Subsystem3/Compare To Constant3'
 * '<S186>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/If Action Subsystem'
 * '<S187>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/If Action Subsystem1'
 * '<S188>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/If Action Subsystem2'
 * '<S189>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/If Action Subsystem3'
 * '<S190>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/If Action Subsystem4'
 * '<S191>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/If Action Subsystem5'
 * '<S192>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/MATLAB Function2'
 * '<S193>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/MATLAB Function3'
 * '<S194>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/MATLAB Function6'
 * '<S195>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/MATLAB Function7'
 * '<S196>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem4/MATLAB Function8'
 * '<S197>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/If Action Subsystem'
 * '<S198>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/If Action Subsystem1'
 * '<S199>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/If Action Subsystem2'
 * '<S200>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/If Action Subsystem3'
 * '<S201>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/If Action Subsystem4'
 * '<S202>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/If Action Subsystem5'
 * '<S203>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/MATLAB Function2'
 * '<S204>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/MATLAB Function3'
 * '<S205>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/MATLAB Function6'
 * '<S206>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/MATLAB Function7'
 * '<S207>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/Subsystem5/MATLAB Function8'
 * '<S208>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/TrueDurationTime/If Action Subsystem'
 * '<S209>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/TrueDurationTime/If Action Subsystem1'
 * '<S210>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/TypeConf/MATLAB Function'
 * '<S211>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/TypeConf/RoadWidthCalc1'
 * '<S212>' : 'PubIfDecisionLSM_MDL/Subsystem1/TargetLineCalc_20ms/TargetLineCalc/TypeConf1/RoadWidthCalc1'
 */
#endif                                 /* RTW_HEADER_PubIfDecisionLSM_MDL_h_ */
