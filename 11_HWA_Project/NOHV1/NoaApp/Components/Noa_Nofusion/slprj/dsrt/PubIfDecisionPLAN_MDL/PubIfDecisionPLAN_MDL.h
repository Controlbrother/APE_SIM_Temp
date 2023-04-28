/*
 * Code generation for system model 'PubIfDecisionPLAN_MDL'
 * For more details, see corresponding source file PubIfDecisionPLAN_MDL.c
 *
 */

#ifndef RTW_HEADER_PubIfDecisionPLAN_MDL_h_
#define RTW_HEADER_PubIfDecisionPLAN_MDL_h_
#include <math.h>
#include <string.h>
#ifndef PubIfDecisionPLAN_MDL_COMMON_INCLUDES_
#define PubIfDecisionPLAN_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                              /* PubIfDecisionPLAN_MDL_COMMON_INCLUDES_ */

#include "PubIfDecisionPLAN_MDL_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Block signals for system '<S39>/If Action Subsystem' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint16_T Add;                        /* '<S40>/Add' */
} B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S108>/LP' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Abs1;                       /* '<S115>/Abs1' */
  real32_T TappedDelay2[3];            /* '<S115>/Tapped Delay2' */
  real32_T Max;                        /* '<S115>/Max' */
  real32_T Min;                        /* '<S115>/Min' */
  real32_T SumofElements2;             /* '<S115>/Sum of Elements2' */
  real32_T Add;                        /* '<S115>/Add' */
  real32_T UnitDelay;                  /* '<S115>/Unit Delay' */
  real32_T Add5;                       /* '<S115>/Add5' */
  real32_T Product8;                   /* '<S115>/Product8' */
  real32_T Add6;                       /* '<S115>/Add6' */
  real32_T Switch;                     /* '<S115>/Switch' */
  real32_T Abs;                        /* '<S115>/Abs' */
  boolean_T Compare;                   /* '<S122>/Compare' */
} B_CoreSubsys_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S108>/LP' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T TappedDelay2_X[3];          /* '<S115>/Tapped Delay2' */
  real32_T UnitDelay_DSTATE;           /* '<S115>/Unit Delay' */
} DW_CoreSubsys_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S125>/For Each Subsystem' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T GetL1dC2V;                    /* '<S129>/CurvatureChar' */
  real_T GetL1dC3V;                    /* '<S129>/CurvatureChar' */
  real_T GetR1dC2V;                    /* '<S129>/CurvatureChar' */
  real_T GetR1dC3V;                    /* '<S129>/CurvatureChar' */
  real_T GetL1dDisFront;               /* '<S129>/CurvatureChar' */
  real_T GetR1dDisFront;               /* '<S129>/CurvatureChar' */
  real_T velSubj;                      /* '<S129>/CurvatureChar' */
  real_T GetL1dC2V_c;                  /* '<S129>/CurvatureChar' */
  real_T GetL1dC3V_j;                  /* '<S129>/CurvatureChar' */
  real_T GetL1dDisFront_f;             /* '<S129>/CurvatureChar' */
  real_T velSubj_a;                    /* '<S129>/CurvatureChar' */
  real_T GetR1dC2V_b;                  /* '<S129>/CurvatureChar' */
  real_T GetR1dC3V_n;                  /* '<S129>/CurvatureChar' */
  real_T GetR1dDisFront_c;             /* '<S129>/CurvatureChar' */
  real_T velSubj_f;                    /* '<S129>/CurvatureChar' */
  real_T uDLookupTable2;               /* '<S134>/1-D Lookup Table2' */
  real_T Product3;                     /* '<S134>/Product3' */
  real_T Product4;                     /* '<S134>/Product4' */
  real_T MinMax;                       /* '<S134>/MinMax' */
  real_T Product5;                     /* '<S134>/Product5' */
  real_T Add3;                         /* '<S134>/Add3' */
  real_T uDLookupTable2_c;             /* '<S133>/1-D Lookup Table2' */
  real_T Product;                      /* '<S133>/Product' */
  real_T Product1;                     /* '<S133>/Product1' */
  real_T MinMax_a;                     /* '<S133>/MinMax' */
  real_T Product2;                     /* '<S133>/Product2' */
  real_T Add1;                         /* '<S133>/Add1' */
  real_T uDLookupTable1;               /* '<S132>/1-D Lookup Table1' */
  real_T Product_j;                    /* '<S132>/Product' */
  real_T Product1_l;                   /* '<S132>/Product1' */
  real_T MinMax_n;                     /* '<S132>/MinMax' */
  real_T Product2_j;                   /* '<S132>/Product2' */
  real_T Add1_n;                       /* '<S132>/Add1' */
  real_T Product3_g;                   /* '<S132>/Product3' */
  real_T Product4_a;                   /* '<S132>/Product4' */
  real_T MinMax1;                      /* '<S132>/MinMax1' */
  real_T Product5_b;                   /* '<S132>/Product5' */
  real_T Add3_c;                       /* '<S132>/Add3' */
  real_T Add4;                         /* '<S132>/Add4' */
  real_T Product6;                     /* '<S132>/Product6' */
  real32_T CurvatureIFC;               /* '<S129>/CurvatureChar' */
} B_CoreSubsys_PubIfDecisionPLAN_MDL_o_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S154>/ACC_DisplayBar1' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T UnitDelay34;                 /* '<S169>/Unit Delay34' */
  uint8_T DisplayBar;                  /* '<S169>/ACC_DisplayBar' */
} B_CoreSubsys_PubIfDecisionPLAN_MDL_o5_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S154>/ACC_DisplayBar1' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T UnitDelay34_DSTATE;          /* '<S169>/Unit Delay34' */
} DW_CoreSubsys_PubIfDecisionPLAN_MDL_lp_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S341>/SigHold1' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T outData;                    /* '<S341>/SigHold1' */
  boolean_T outTrigger;                /* '<S341>/SigHold1' */
} B_SigHold1_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S341>/SigHold1' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T is_active_c127_PubIfDecisionPLAN_MDL;/* '<S341>/SigHold1' */
  uint8_T is_c127_PubIfDecisionPLAN_MDL;/* '<S341>/SigHold1' */
  uint8_T Cnt;                         /* '<S341>/SigHold1' */
} DW_SigHold1_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S424>/MATLAB Function' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint16_T Counter;                    /* '<S424>/MATLAB Function' */
  boolean_T Out;                       /* '<S424>/MATLAB Function' */
  boolean_T TimeOut;                   /* '<S424>/MATLAB Function' */
  boolean_T Traggerhappend;            /* '<S424>/MATLAB Function' */
} B_MATLABFunction_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S471>/MATLAB Function' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T result[11];                 /* '<S471>/MATLAB Function' */
} B_MATLABFunction_PubIfDecisionPLAN_MDL_a_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S462>/For Iterator Subsystem2' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T IndexVector2;               /* '<S484>/Index Vector2' */
  real32_T IndexVector3;               /* '<S484>/Index Vector3' */
  real32_T IndexVector1;               /* '<S484>/Index Vector1' */
  real32_T Switch;                     /* '<S484>/Switch' */
  real32_T FrontObj_Line_1;            /* '<S484>/FrontObj_Line_1_1' */
  real32_T FrontObj_Line_08;           /* '<S484>/FrontObj_Line_0.8_0.8' */
  real32_T FrontObj_Line_03;           /* '<S484>/FrontObj_Line_0.3_0.1' */
  real32_T FrontObj_Line_0;            /* '<S484>/FrontObj_Line_0_1' */
  real32_T DataTypeConversion3[4];     /* '<S484>/Data Type Conversion3' */
  real32_T uDLookupTable1;             /* '<S484>/1-D Lookup Table1' */
  real32_T IndexVector4;               /* '<S484>/Index Vector4' */
  real32_T Switch1;                    /* '<S484>/Switch1' */
  real32_T Rearobj_Line_0;             /* '<S484>/Rearobj_Line_0_0' */
  real32_T Rearobj_Line_03;            /* '<S484>/Rearobj_Line_0.3_0.3' */
  real32_T Rearobj_Line_08;            /* '<S484>/Rearobj_Line_0.8_0.8' */
  real32_T Rearobj_Line_1;             /* '<S484>/Rearobj_Line_1_2' */
  real32_T DataTypeConversion5[4];     /* '<S484>/Data Type Conversion5' */
  real32_T uDLookupTable8;             /* '<S484>/1-D Lookup Table8' */
  real32_T Saturation1;                /* '<S484>/Saturation1' */
  real32_T Saturation;                 /* '<S484>/Saturation' */
  real32_T Switch2;                    /* '<S484>/Switch2' */
  real32_T Assignment[11];             /* '<S484>/Assignment' */
  int8_T ForIterator;                  /* '<S484>/For Iterator' */
  boolean_T RelationalOperator;        /* '<S484>/Relational Operator' */
  boolean_T RelationalOperator1;       /* '<S484>/Relational Operator1' */
  boolean_T RelationalOperator2;       /* '<S484>/Relational Operator2' */
} B_ForIteratorSubsystem2_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S462>/Obj_front' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T IndexVector2;               /* '<S486>/Index Vector2' */
  real32_T IndexVector3;               /* '<S486>/Index Vector3' */
  real32_T FrontObj_Line_1;            /* '<S486>/FrontObj_Line_1_1' */
  real32_T FrontObj_Line_08;           /* '<S486>/FrontObj_Line_0.8_0.8' */
  real32_T FrontObj_Line_03;           /* '<S486>/FrontObj_Line_0.3_0.1' */
  real32_T FrontObj_Line_0;            /* '<S486>/FrontObj_Line_0_1' */
  real32_T DataTypeConversion3[4];     /* '<S486>/Data Type Conversion3' */
  real32_T uDLookupTable1;             /* '<S486>/1-D Lookup Table1' */
  real32_T IndexVector4;               /* '<S486>/Index Vector4' */
  real32_T IndexVector;                /* '<S486>/Index Vector' */
  real32_T Rearobj_Line_0;             /* '<S486>/Rearobj_Line_0_0' */
  real32_T Rearobj_Line_03;            /* '<S486>/Rearobj_Line_0.3_0.3' */
  real32_T Rearobj_Line_08;            /* '<S486>/Rearobj_Line_0.8_0.8' */
  real32_T Rearobj_Line_1;             /* '<S486>/Rearobj_Line_1_1' */
  real32_T DataTypeConversion5[4];     /* '<S486>/Data Type Conversion5' */
  real32_T uDLookupTable8;             /* '<S486>/1-D Lookup Table8' */
  real32_T Saturation;                 /* '<S486>/Saturation' */
  real32_T Assignment[11];             /* '<S486>/Assignment' */
  real32_T Saturation1;                /* '<S486>/Saturation1' */
  real32_T Assignment1[11];            /* '<S486>/Assignment1' */
  int8_T ForIterator;                  /* '<S486>/For Iterator' */
} B_Obj_front_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S489>/MATLAB Function' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T result[11];                 /* '<S489>/MATLAB Function' */
} B_MATLABFunction_PubIfDecisionPLAN_MDL_n_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'PubIfDecisionPLAN_MDL' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T UnitDelay4[11];               /* '<S460>/Unit Delay4' */
  real_T Switch[11];                   /* '<S488>/Switch' */
  real_T PLAN_DPC_LockedDPCRi;         /* '<S460>/Max1' */
  real_T Switch9;                      /* '<S339>/Switch9' */
  real_T Switch2;                      /* '<S339>/Switch2' */
  real_T Switch1;                      /* '<S339>/Switch1' */
  real_T Product;                      /* '<S340>/Product' */
  real_T PLAN_ALC_PreP0Dy;             /* '<S340>/Add' */
  real_T Le;                           /* '<S340>/Product1' */
  real_T Product2;                     /* '<S340>/Product2' */
  real_T Ri;                           /* '<S340>/Gain' */
  real_T Add3;                         /* '<S341>/Add3' */
  real_T Switch_a;                     /* '<S341>/Switch' */
  real_T Min;                          /* '<S341>/Min' */
  real_T Add1;                         /* '<S341>/Add1' */
  real_T Switch2_f;                    /* '<S341>/Switch2' */
  real_T Min3;                         /* '<S341>/Min3' */
  real_T PLAN_ALC_CruiseSpdGainLe;     /* '<S341>/Subtract' */
  real_T Product_e;                    /* '<S188>/Product' */
  real_T Product1;                     /* '<S188>/Product1' */
  real_T Add6;                         /* '<S341>/Add6' */
  real_T Switch1_d;                    /* '<S341>/Switch1' */
  real_T Min1;                         /* '<S341>/Min1' */
  real_T PLAN_ALC_CruiseSpdGainRi;     /* '<S341>/Subtract1' */
  real_T Switch10;                     /* '<S189>/Switch10' */
  real_T Switch9_g;                    /* '<S189>/Switch9' */
  real_T Switch8;                      /* '<S189>/Switch8' */
  real_T Switch5;                      /* '<S189>/Switch5' */
  real_T Switch2_p;                    /* '<S189>/Switch2' */
  real_T Switch_ao;                    /* '<S189>/Switch' */
  real_T ObjStationaryFlag[11];        /* '<S488>/MATLAB Function' */
  real_T ObjDxRelCal_FL[11];          /* '<S461>/DangerPlaus_Calculate_Radar' */
  real_T ObjDxRelCal_FR[11];          /* '<S461>/DangerPlaus_Calculate_Radar' */
  real_T ObjDxRelCal_RL[11];          /* '<S461>/DangerPlaus_Calculate_Radar' */
  real_T ObjDxRelCal_RR[11];          /* '<S461>/DangerPlaus_Calculate_Radar' */
  real_T Y_Factor_L[11];              /* '<S461>/DangerPlaus_Calculate_Radar' */
  real_T Y_Factor_R[11];              /* '<S461>/DangerPlaus_Calculate_Radar' */
  real_T PLAN_ObjLostBufDPCRi[11];     /* '<S460>/Lock' */
  real_T DataTypeConversion1;          /* '<S109>/Data Type Conversion1' */
  real_T Cnt;                          /* '<S156>/Chart' */
  real_T TorCtrlReq;                   /* '<S156>/Chart' */
  real_T fastDecel;                    /* '<S12>/AccelCCCalc' */
  real_T LongCtrl_ArbFlag;             /* '<S11>/Arbitrate' */
  PLAN_HMI_BUS BusCreator1;            /* '<S8>/Bus Creator1' */
  uint32_T PLAN_AP_SubModel_VERSION;   /* '<S3>/Constant' */
  uint32_T PLAN_AP_SubModel_Number;    /* '<S3>/Constant3' */
  uint32_T PLAN_ALC_SubModel_VERSION;  /* '<S4>/Constant5' */
  uint32_T PLAN_ALC_SubModel_Number;   /* '<S4>/Constant7' */
  uint32_T PLAN_DPC_SubModel_VERSION;  /* '<S5>/Constant5' */
  uint32_T PLAN_DPC_SubModel_Number;   /* '<S5>/Constant6' */
  uint32_T PLAN_SW_VERSION;            /* '<S1>/Constant' */
  uint32_T PLAN_ALL_SubModel_VERSION;  /* '<S1>/Constant1' */
  uint32_T PLAN_ALL_SubModel_Number;   /* '<S1>/Constant4' */
  uint32_T Uk1;                        /* '<S140>/Delay Input1' */
  uint32_T Uk1_m;                      /* '<S178>/Delay Input1' */
  real32_T UnitDelay1;                 /* '<S463>/Unit Delay1' */
  real32_T DataTypeConversion[11];     /* '<S461>/Data Type Conversion' */
  real32_T SafeDistance;               /* '<S461>/SafeDistance' */
  real32_T Gain6;                      /* '<S461>/Gain6' */
  real32_T Gain;                       /* '<S461>/Gain' */
  real32_T Gain1;                      /* '<S461>/Gain1' */
  real32_T Gain2;                      /* '<S461>/Gain2' */
  real32_T TmpSignalConversionAtLookupTableDynamicInport2[7];/* '<S461>/From1' */
  real32_T TmpSignalConversionAtLookupTableDynamicInport3[7];/* '<S461>/From2' */
  real32_T PLAN_DPC_ESS_X_Factor_FL[11];/* '<S461>/Lookup Table Dynamic' */
  real32_T PLAN_DPC_ESS_Y_Factor_L[11];/* '<S461>/Data Type Conversion4' */
  real32_T PLAN_DPC_ESS_DangerPlaus_FL[11];/* '<S461>/Product' */
  real32_T MinMax2;                    /* '<S461>/MinMax2' */
  real32_T DataTypeConversion2[11];    /* '<S461>/Data Type Conversion2' */
  real32_T Gain5;                      /* '<S461>/Gain5' */
  real32_T Gain4;                      /* '<S461>/Gain4' */
  real32_T Gain3;                      /* '<S461>/Gain3' */
  real32_T Gain7;                      /* '<S461>/Gain7' */
  real32_T TmpSignalConversionAtLookupTableDynamic2Inport2[7];/* '<S461>/From21' */
  real32_T TmpSignalConversionAtLookupTableDynamic2Inport3[7];/* '<S461>/From22' */
  real32_T PLAN_DPC_ESS_X_Factor_RL[11];/* '<S461>/Lookup Table Dynamic2' */
  real32_T PLAN_DPC_ESS_DangerPlaus_RL[11];/* '<S461>/Product4' */
  real32_T MinMax4;                    /* '<S461>/MinMax4' */
  real32_T PLAN_DPC_ESS_DangerPlaus_L; /* '<S461>/Max1' */
  real32_T DataTypeConversion1_p[11];  /* '<S461>/Data Type Conversion1' */
  real32_T PLAN_DPC_ESS_X_Factor_FR[11];/* '<S461>/Lookup Table Dynamic1' */
  real32_T PLAN_DPC_ESS_Y_Factor_R[11];/* '<S461>/Data Type Conversion5' */
  real32_T PLAN_DPC_ESS_DangerPlaus_FR[11];/* '<S461>/Product1' */
  real32_T MinMax3;                    /* '<S461>/MinMax3' */
  real32_T DataTypeConversion3[11];    /* '<S461>/Data Type Conversion3' */
  real32_T PLAN_DPC_ESS_X_Factor_RR[11];/* '<S461>/Lookup Table Dynamic3' */
  real32_T PLAN_DPC_ESS_DangerPlaus_RR[11];/* '<S461>/Product5' */
  real32_T MinMax5;                    /* '<S461>/MinMax5' */
  real32_T PLAN_DPC_ESS_DangerPlaus_R; /* '<S461>/Max2' */
  real32_T DataTypeConversion_l;       /* '<S8>/Data Type Conversion' */
  real32_T UnitDelay12[11];            /* '<S460>/Unit Delay12' */
  real32_T UnitDelay13[11];            /* '<S460>/Unit Delay13' */
  real32_T UnitDelay1_h[11];           /* '<S460>/Unit Delay1' */
  real32_T UnitDelay2[11];             /* '<S460>/Unit Delay2' */
  real32_T UnitDelay3[11];             /* '<S460>/Unit Delay3' */
  real32_T UnitDelay8[11];             /* '<S460>/Unit Delay8' */
  real32_T UnitDelay7[11];             /* '<S460>/Unit Delay7' */
  real32_T UnitDelay5[11];             /* '<S460>/Unit Delay5' */
  real32_T UnitDelay6[11];             /* '<S460>/Unit Delay6' */
  real32_T UnitDelay9[11];             /* '<S460>/Unit Delay9' */
  real32_T PLAN_DPC_LockedDPCLe;       /* '<S460>/Max' */
  real32_T UnitDelay1_j[11];           /* '<S489>/Unit Delay1' */
  real32_T UnitDelay2_i[11];           /* '<S489>/Unit Delay2' */
  real32_T UnitDelay3_m[11];           /* '<S489>/Unit Delay3' */
  real32_T RoadWidth;                  /* '<S462>/Switch1' */
  real32_T Abs5[11];                   /* '<S462>/Abs5' */
  real32_T Gain8;                      /* '<S462>/Gain8' */
  real32_T Gain9;                      /* '<S462>/Gain9' */
  real32_T Gain10;                     /* '<S462>/Gain10' */
  real32_T Add;                        /* '<S462>/Add' */
  real32_T TmpSignalConversionAtLookupTableDynamic1Inport2[4];/* '<S462>/From14' */
  real32_T TmpSignalConversionAtLookupTableDynamic1Inport3[4];/* '<S462>/From23' */
  real32_T Factor_Dy[11];              /* '<S462>/Lookup Table Dynamic1' */
  real32_T Abs6[11];                   /* '<S462>/Abs6' */
  real32_T Gain12;                     /* '<S462>/Gain12' */
  real32_T Gain13;                     /* '<S462>/Gain13' */
  real32_T Add2;                       /* '<S462>/Add2' */
  real32_T Gain11;                     /* '<S462>/Gain11' */
  real32_T Add1_m;                     /* '<S462>/Add1' */
  real32_T TmpSignalConversionAtLookupTableDynamic2Inport2_k[4];/* '<S462>/From32' */
  real32_T Factor_Dy_k[11];            /* '<S462>/Lookup Table Dynamic2' */
  real32_T PLAN_DPC_HWA_PreDyRel_Dy_Le[11];/* '<S462>/Switch3' */
  real32_T Product2_e[11];             /* '<S462>/Product2' */
  real32_T Max1;                       /* '<S462>/Max1' */
  real32_T DangerPlausF;               /* '<S462>/Max2' */
  real32_T DPC_F;                      /* '<S462>/Switch2' */
  real32_T Product3[11];               /* '<S462>/Product3' */
  real32_T Max3;                       /* '<S462>/Max3' */
  real32_T DangerPlausR;               /* '<S462>/Max5' */
  real32_T DPC_R;                      /* '<S462>/Switch4' */
  real32_T PLAN_DPC_HWA_DPCrealtimeLe; /* '<S462>/Max6' */
  real32_T PLAN_DPC_HWA_DangerPlaus_L; /* '<S5>/Max' */
  real32_T Abs4;                       /* '<S186>/Abs4' */
  real32_T Abs1[11];                   /* '<S462>/Abs1' */
  real32_T Factor_Dy_j[11];            /* '<S462>/Lookup Table Dynamic3' */
  real32_T Abs2[11];                   /* '<S462>/Abs2' */
  real32_T Factor_Dy_a[11];            /* '<S462>/Lookup Table Dynamic4' */
  real32_T PLAN_DPC_HWA_PreDyRel_Dy_Ri[11];/* '<S462>/Switch6' */
  real32_T Product12[11];              /* '<S462>/Product12' */
  real32_T Max4;                       /* '<S462>/Max4' */
  real32_T DangerPlausF_c;             /* '<S462>/Max7' */
  real32_T DPC_F_j;                    /* '<S462>/Switch5' */
  real32_T Product13[11];              /* '<S462>/Product13' */
  real32_T Max8;                       /* '<S462>/Max8' */
  real32_T DangerPlausR_l;             /* '<S462>/Max9' */
  real32_T DPC_R_h;                    /* '<S462>/Switch7' */
  real32_T PLAN_DPC_HWA_DPCrealtimeRi; /* '<S462>/Max10' */
  real32_T PLAN_DPC_HWA_DangerPlaus_R; /* '<S5>/Max1' */
  real32_T Abs1_i;                     /* '<S185>/Abs1' */
  real32_T Switch9_h;                  /* '<S270>/Switch9' */
  real32_T Switch2_n;                  /* '<S270>/Switch2' */
  real32_T Switch1_j;                  /* '<S270>/Switch1' */
  real32_T Abs2_f;                     /* '<S185>/Abs2' */
  real32_T Gain2_k;                    /* '<S185>/Gain2' */
  real32_T Add2_b;                     /* '<S185>/Add2' */
  real32_T Round;                      /* '<S185>/Round' */
  real32_T Constant;                   /* '<S243>/Constant' */
  real32_T Abs4_i;                     /* '<S185>/Abs4' */
  real32_T Abs5_f;                     /* '<S185>/Abs5' */
  real32_T Constant_g;                 /* '<S247>/Constant' */
  real32_T Abs1_b;                     /* '<S187>/Abs1' */
  real32_T Abs4_e;                     /* '<S187>/Abs4' */
  real32_T Product_i;                  /* '<S304>/Product' */
  real32_T Abs1_h;                     /* '<S188>/Abs1' */
  real32_T Abs;                        /* '<S188>/Abs' */
  real32_T Subtract;                   /* '<S188>/Subtract' */
  real32_T Abs2_fu;                    /* '<S188>/Abs2' */
  real32_T Divide;                     /* '<S188>/Divide' */
  real32_T Product_ig;                 /* '<S342>/Product' */
  real32_T UnitDelay;                  /* '<S337>/Unit Delay' */
  real32_T UnitDelay1_d;               /* '<S340>/Unit Delay1' */
  real32_T Switch2_a;                  /* '<S340>/Switch2' */
  real32_T UnitDelay_a;                /* '<S1>/Unit Delay' */
  real32_T Gain2_f;                    /* '<S341>/Gain2' */
  real32_T Gain3_g;                    /* '<S341>/Gain3' */
  real32_T Gain_l;                     /* '<S341>/Gain' */
  real32_T Add_i;                      /* '<S341>/Add' */
  real32_T Gain1_d;                    /* '<S341>/Gain1' */
  real32_T Switch5_a;                  /* '<S339>/Switch5' */
  real32_T Switch4;                    /* '<S339>/Switch4' */
  real32_T Switch3;                    /* '<S339>/Switch3' */
  real32_T Gain_o;                     /* '<S188>/Gain' */
  real32_T Saturation;                 /* '<S188>/Saturation' */
  real32_T uDLookupTable;              /* '<S188>/1-D Lookup Table' */
  real32_T Abs4_p;                     /* '<S188>/Abs4' */
  real32_T Product_m;                  /* '<S343>/Product' */
  real32_T Gain6_p;                    /* '<S341>/Gain6' */
  real32_T Gain7_e;                    /* '<S341>/Gain7' */
  real32_T Gain1_j;                    /* '<S225>/Gain1' */
  real32_T UnitDelay2_m;               /* '<S226>/Unit Delay2' */
  real32_T Gain5_f;                    /* '<S225>/Gain5' */
  real32_T PLAN_PreWheelFLx;           /* '<S225>/Function Caller' */
  real32_T PLAN_PreWheelFLy;           /* '<S225>/Function Caller' */
  real32_T FunctionCaller2;            /* '<S225>/Function Caller2' */
  real32_T Abs2_k;                     /* '<S225>/Abs2' */
  real32_T Add1_g;                     /* '<S225>/Add1' */
  real32_T Gain3_o;                    /* '<S225>/Gain3' */
  real32_T Gain2_a;                    /* '<S225>/Gain2' */
  real32_T PLAN_PreWheelFRx;           /* '<S225>/Function Caller3' */
  real32_T PLAN_PreWheelFRy;           /* '<S225>/Function Caller3' */
  real32_T FunctionCaller1;            /* '<S225>/Function Caller1' */
  real32_T Abs3;                       /* '<S225>/Abs3' */
  real32_T Add_j;                      /* '<S225>/Add' */
  real32_T Gain8_b;                    /* '<S225>/Gain8' */
  real32_T Abs2_e;                     /* '<S184>/Abs2' */
  real32_T TappedDelay1[5];            /* '<S184>/Tapped Delay1' */
  real32_T uDLookupTable1;             /* '<S184>/1-D Lookup Table1' */
  real32_T Switch2_d;                  /* '<S182>/Switch2' */
  real32_T Switch_n;                   /* '<S182>/Switch' */
  real32_T LongCtrl_ALC_dangerLevel;   /* '<S182>/Switch1' */
  real32_T Gain2_e;                    /* '<S182>/Gain2' */
  real32_T Add2_h;                     /* '<S182>/Add2' */
  real32_T Round_e;                    /* '<S182>/Round' */
  real32_T Abs_k;                      /* '<S182>/Abs' */
  real32_T Product_c;                  /* '<S182>/Product' */
  real32_T Product_a;                  /* '<S421>/Product' */
  real32_T Product_l;                  /* '<S420>/Product' */
  real32_T Abs_e;                      /* '<S189>/Abs' */
  real32_T Product_cc;                 /* '<S189>/Product' */
  real32_T Product_if;                 /* '<S431>/Product' */
  real32_T Product_g;                  /* '<S432>/Product' */
  real32_T Product_ex;                 /* '<S440>/Product' */
  real32_T Product_eu;                 /* '<S441>/Product' */
  real32_T Product_n;                  /* '<S450>/Product' */
  real32_T LCDeltaTmeGap;              /* '<S270>/LCDeltaTmeGap' */
  real32_T Abs1_j;                     /* '<S186>/Abs1' */
  real32_T Product_j;                  /* '<S285>/Product' */
  real32_T LCDeltaTmeGap_c;            /* '<S339>/LCDeltaTmeGap' */
  real32_T UnitDelay1_b[11];           /* '<S471>/Unit Delay1' */
  real32_T UnitDelay2_l[11];           /* '<S471>/Unit Delay2' */
  real32_T UnitDelay3_mg[11];          /* '<S471>/Unit Delay3' */
  real32_T DataTypeConversion6;        /* '<S461>/Data Type Conversion6' */
  real32_T DataTypeConversion7;        /* '<S461>/Data Type Conversion7' */
  real32_T PLAN_DPC_HWA_DPCMatrix_Le[11];/* '<S462>/Product1' */
  real32_T PLAN_DPC_HWA_DPCMatrix_Ri[11];/* '<S462>/Product14' */
  real32_T RearObjSpdGnd;              /* '<S462>/Signal Copy' */
  real32_T RearObjDx;                  /* '<S462>/Signal Copy1' */
  real32_T RearObjSpdGnd_k;            /* '<S462>/Signal Copy3' */
  real32_T RearObjDx_e;                /* '<S462>/Signal Copy4' */
  real32_T Saturation_e[11];           /* '<S489>/Saturation' */
  real32_T UnitDelay4_m[11];           /* '<S489>/Unit Delay4' */
  real32_T RoadWidth_l;                /* '<S463>/RoadWidthCalc' */
  real32_T obj_front_Dx[11];         /* '<S462>/DangerFactorMatrixCalc_Left2' */
  real32_T obj_front_Vx[11];         /* '<S462>/DangerFactorMatrixCalc_Left2' */
  real32_T obj_Rear_Dx[11];          /* '<S462>/DangerFactorMatrixCalc_Left2' */
  real32_T obj_Rear_Vx[11];          /* '<S462>/DangerFactorMatrixCalc_Left2' */
  real32_T PreDyRel[11];             /* '<S462>/DangerFactorMatrixCalc_Left2' */
  real32_T NearestObjDx;             /* '<S462>/DangerFactorMatrixCalc_Left2' */
  real32_T NearestObjSpeed;          /* '<S462>/DangerFactorMatrixCalc_Left2' */
  real32_T PLAN_DPC_HWA_RearObjDx;   /* '<S462>/DangerFactorMatrixCalc_Left2' */
  real32_T PLAN_DPC_HWA_RearObjSpeed;/* '<S462>/DangerFactorMatrixCalc_Left2' */
  real32_T obj_front_Dx_l[11];       /* '<S462>/DangerFactorMatrixCalc_Left1' */
  real32_T obj_front_Vx_g[11];       /* '<S462>/DangerFactorMatrixCalc_Left1' */
  real32_T obj_Rear_Dx_h[11];        /* '<S462>/DangerFactorMatrixCalc_Left1' */
  real32_T obj_Rear_Vx_g[11];        /* '<S462>/DangerFactorMatrixCalc_Left1' */
  real32_T PLAN_DPC_HWA_PreDyRel_Ri[11];
                                     /* '<S462>/DangerFactorMatrixCalc_Left1' */
  real32_T PLAN_DPC_HWA_NearestObjDx_R;
                                     /* '<S462>/DangerFactorMatrixCalc_Left1' */
  real32_T PLAN_DPC_HWA_NearestObjSpeed_R;
                                     /* '<S462>/DangerFactorMatrixCalc_Left1' */
  real32_T Rear_NearestObjDx;        /* '<S462>/DangerFactorMatrixCalc_Left1' */
  real32_T Rear_NearestObjSpeed;     /* '<S462>/DangerFactorMatrixCalc_Left1' */
  real32_T obj_front_Dx_i[11];        /* '<S462>/DangerFactorMatrixCalc_Left' */
  real32_T obj_front_Vx_k[11];        /* '<S462>/DangerFactorMatrixCalc_Left' */
  real32_T obj_Rear_Dx_o[11];         /* '<S462>/DangerFactorMatrixCalc_Left' */
  real32_T obj_Rear_Vx_f[11];         /* '<S462>/DangerFactorMatrixCalc_Left' */
  real32_T PLAN_DPC_HWA_PreDyRel_Le[11];
                                      /* '<S462>/DangerFactorMatrixCalc_Left' */
  real32_T PLAN_DPC_HWA_NearestObjDx_L;
                                      /* '<S462>/DangerFactorMatrixCalc_Left' */
  real32_T PLAN_DPC_HWA_NearestObjSpeed_L;
                                      /* '<S462>/DangerFactorMatrixCalc_Left' */
  real32_T Rear_NearestObjDx_a;       /* '<S462>/DangerFactorMatrixCalc_Left' */
  real32_T Rear_NearestObjSpeed_b;    /* '<S462>/DangerFactorMatrixCalc_Left' */
  real32_T NearestObjSpeed_L;         /* '<S461>/DangerPlaus_Calculate_Radar' */
  real32_T NearestObjSpeed_R;         /* '<S461>/DangerPlaus_Calculate_Radar' */
  real32_T ObjVxGnd_1;                /* '<S461>/DangerPlaus_Calculate_Radar' */
  real32_T ObjDxRelFinal_FL_1;        /* '<S461>/DangerPlaus_Calculate_Radar' */
  real32_T PLAN_ObjLostBufDx[11];      /* '<S460>/Lock' */
  real32_T PLAN_ObjLostBufDy[11];      /* '<S460>/Lock' */
  real32_T PLAN_ObjLostBufVx[11];      /* '<S460>/Lock' */
  real32_T PLAN_ObjLostBufDPCLe[11];   /* '<S460>/Lock' */
  real32_T PLAN_ObjLostBufLostAge[11]; /* '<S460>/Lock' */
  real32_T SLObjDy[11];                /* '<S471>/MATLAB Function3' */
  real32_T ToleranceBoxFront[11];      /* '<S460>/BufRelease1' */
  real32_T ToleranceBoxRear[11];       /* '<S460>/BufRelease1' */
  real32_T ToleranceBoxLeft[11];       /* '<S460>/BufRelease1' */
  real32_T ToleranceBoxRight[11];      /* '<S460>/BufRelease1' */
  real32_T dDyDiffRelLine;             /* '<S340>/SLPDyCalc' */
  real32_T result;                     /* '<S340>/MATLAB Function' */
  real32_T PLAN_ALC_PreCurvature;      /* '<S188>/MATLAB Function' */
  real32_T PLAN_ALC_OveTkrSupDist;     /* '<S337>/Chart' */
  real32_T u5;                         /* '<S228>/u5' */
  real32_T TmpSignalConversionAtu5Outport1;/* '<S228>/u5' */
  real32_T u4;                         /* '<S228>/u4' */
  real32_T TmpSignalConversionAtu4Outport1;/* '<S228>/u4' */
  real32_T u1;                         /* '<S228>/u1' */
  real32_T TmpSignalConversionAtu1Outport1;/* '<S228>/u1' */
  real32_T Product_gq;                 /* '<S228>/Product' */
  real32_T MathFunction;               /* '<S228>/Math Function' */
  real32_T u2;                         /* '<S228>/u2' */
  real32_T TmpSignalConversionAtu2Outport1;/* '<S228>/u2' */
  real32_T Product1_c;                 /* '<S228>/Product1' */
  real32_T u;                          /* '<S228>/u' */
  real32_T TmpSignalConversionAtuOutport1;/* '<S228>/u' */
  real32_T Add_d;                      /* '<S228>/Add' */
  real32_T Subtract1;                  /* '<S228>/Subtract1' */
  real32_T Product2_ej;                /* '<S228>/Product2' */
  real32_T Gain_f;                     /* '<S228>/Gain' */
  real32_T Add1_gf;                    /* '<S228>/Add1' */
  real32_T MathFunction1;              /* '<S228>/Math Function1' */
  real32_T Add2_f;                     /* '<S228>/Add2' */
  real32_T Sqrt;                       /* '<S228>/Sqrt' */
  real32_T Divide_c;                   /* '<S228>/Divide' */
  real32_T TmpSignalConversionAty1Inport1;/* '<S228>/Divide' */
  real32_T u2_n;                       /* '<S227>/u2' */
  real32_T TmpSignalConversionAtu2Outport1_a;/* '<S227>/u2' */
  real32_T u3;                         /* '<S227>/u3' */
  real32_T TmpSignalConversionAtu3Outport1;/* '<S227>/u3' */
  real32_T u4_g;                       /* '<S227>/u4' */
  real32_T TmpSignalConversionAtu4Outport1_c;/* '<S227>/u4' */
  real32_T u_d;                        /* '<S227>/u' */
  real32_T TmpSignalConversionAtuOutport1_n;/* '<S227>/u' */
  real32_T u1_d;                       /* '<S227>/u1' */
  real32_T TmpSignalConversionAtu1Outport1_g;/* '<S227>/u1' */
  real32_T mPrePointX;                 /* '<S227>/Merge' */
  real32_T mPrePointX_i;               /* '<S227>/Bus Selector' */
  real32_T mPrePointY;                 /* '<S227>/Merge' */
  real32_T mPrePointY_o;               /* '<S227>/Bus Selector' */
  real32_T radius;                     /* '<S230>/Math Function' */
  real32_T preAngle;                   /* '<S230>/Product' */
  real32_T Sin;                        /* '<S230>/Sin' */
  real32_T PreVehDx;                   /* '<S230>/Product1' */
  real32_T Cos;                        /* '<S230>/Cos' */
  real32_T Product4;                   /* '<S230>/Product4' */
  real32_T Product8;                   /* '<S230>/Product8' */
  real32_T Product7;                   /* '<S230>/Product7' */
  real32_T PreVehDy;                   /* '<S230>/Subtract' */
  real32_T Product9;                   /* '<S230>/Product9' */
  real32_T Product10;                  /* '<S230>/Product10' */
  real32_T PreVehDx_b;                 /* '<S231>/Product' */
  real32_T result_d;                   /* '<S226>/MATLAB Function2' */
  real32_T AcceUpperLimitNormalMode;  /* '<S10>/AcceUpperLimitNormalModeChar' */
  real32_T AcceUpperLimitSportMode;    /* '<S10>/AcceUpperLimitSportModeChar' */
  real32_T AcceUpperLimitEcoMode;      /* '<S10>/AcceUpperLimitEcoModeChar' */
  real32_T AcceLowerLimit;             /* '<S10>/AcceLowerLimitChar' */
  real32_T Switch3_l;                  /* '<S27>/Switch3' */
  real32_T LongCtrl_CCSpdSetValue;     /* '<S12>/Signal Copy1' */
  real32_T UnitDelay_o;                /* '<S12>/Unit Delay' */
  real32_T Product_f;                  /* '<S39>/Product' */
  real32_T Gain_fq;                    /* '<S27>/Gain' */
  real32_T Product8_j;                 /* '<S27>/Product8' */
  real32_T Switch2_i;                  /* '<S27>/Switch2' */
  real32_T Add_c;                      /* '<S27>/Add' */
  real32_T Switch_g;                   /* '<S27>/Switch' */
  real32_T Switch1_o;                  /* '<S27>/Switch1' */
  real32_T Switch_p;                   /* '<S38>/Switch' */
  real32_T LongCtrl_accelCC;           /* '<S38>/Switch2' */
  real32_T accelCCJerk;                /* '<S30>/Switch' */
  real32_T Product_m4;                 /* '<S31>/Product' */
  real32_T Add_o;                      /* '<S31>/Add' */
  real32_T MinMax;                     /* '<S31>/MinMax' */
  real32_T decelCCJerk;                /* '<S30>/Switch1' */
  real32_T Product1_e;                 /* '<S31>/Product1' */
  real32_T Add1_k;                     /* '<S31>/Add1' */
  real32_T LongCtrl_accelCCCtrlAfterJerk;/* '<S31>/MinMax1' */
  real32_T LongCtrl_IC_EHRV2_CurMatrix[10];/* '<S108>/Signal Conversion1' */
  real32_T MathFunction_h[10];         /* '<S108>/Math Function' */
  real32_T Abs_o[10];                  /* '<S108>/Abs' */
  real32_T LongCtrl_IC_EHRV2_CurDisMatrix[10];/* '<S108>/Signal Conversion2' */
  real32_T MathFunction1_i[10];        /* '<S108>/Math Function1' */
  real32_T UnitDelay22[2];             /* '<S111>/Unit Delay22' */
  real32_T UnitDelay21[2];             /* '<S111>/Unit Delay21' */
  real32_T UnitDelay20[2];             /* '<S111>/Unit Delay20' */
  real32_T UnitDelay19[2];             /* '<S111>/Unit Delay19' */
  real32_T UnitDelay63[2];             /* '<S111>/Unit Delay63' */
  real32_T UnitDelay62[2];             /* '<S111>/Unit Delay62' */
  real32_T TappedDelay[25];            /* '<S144>/Tapped Delay' */
  real32_T SumofElements;              /* '<S144>/Sum of Elements' */
  real32_T Gain_a;                     /* '<S144>/Gain' */
  real32_T TappedDelay1_g[25];         /* '<S144>/Tapped Delay1' */
  real32_T SumofElements1;             /* '<S144>/Sum of Elements1' */
  real32_T Gain1_l;                    /* '<S144>/Gain1' */
  real32_T TappedDelay1_n[3];          /* '<S143>/Tapped Delay1' */
  real32_T Max1_p;                     /* '<S143>/Max1' */
  real32_T Min1_h;                     /* '<S143>/Min1' */
  real32_T SumofElements1_c;           /* '<S143>/Sum of Elements1' */
  real32_T Add1_n;                     /* '<S143>/Add1' */
  real32_T TappedDelay2[3];            /* '<S143>/Tapped Delay2' */
  real32_T Max;                        /* '<S143>/Max' */
  real32_T Min_o;                      /* '<S143>/Min' */
  real32_T SumofElements2;             /* '<S143>/Sum of Elements2' */
  real32_T Add_oz;                     /* '<S143>/Add' */
  real32_T LongCtrl_L1_Avail_time;     /* '<S111>/Signal Conversion' */
  real32_T LongCtrl_L1_Avail_dis;      /* '<S111>/Signal Conversion2' */
  real32_T LongCtrl_R1_Avail_dis;      /* '<S111>/Signal Conversion3' */
  real32_T LongCtrl_R1_Avail_time;     /* '<S111>/Signal Conversion1' */
  real32_T UnitDelay43[2];             /* '<S111>/Unit Delay43' */
  real32_T UnitDelay48[2];             /* '<S111>/Unit Delay48' */
  real32_T UnitDelay47[2];             /* '<S111>/Unit Delay47' */
  real32_T UnitDelay46[2];             /* '<S111>/Unit Delay46' */
  real32_T UnitDelay45[2];             /* '<S111>/Unit Delay45' */
  real32_T UnitDelay44[2];             /* '<S111>/Unit Delay44' */
  real32_T Memory;                     /* '<S109>/Memory' */
  real32_T LongCtrl_L1_Line_std;       /* '<S111>/Signal Conversion4' */
  real32_T LongCtrl_R1_Line_std;       /* '<S111>/Signal Conversion5' */
  real32_T Max_m;                      /* '<S109>/Max' */
  real32_T Product_fc;                 /* '<S109>/Product' */
  real32_T Merge;                      /* '<S109>/Merge' */
  real32_T Abs1_m;                     /* '<S109>/Abs1' */
  real32_T UnitDelay_k;                /* '<S127>/Unit Delay' */
  real32_T Add5;                       /* '<S127>/Add5' */
  real32_T Product8_b;                 /* '<S127>/Product8' */
  real32_T LongCtrl_CurvatureOfRoad;   /* '<S127>/Add6' */
  real32_T MinMax5_f;                  /* '<S106>/MinMax5' */
  real32_T uDLookupTable2;             /* '<S106>/1-D Lookup Table2' */
  real32_T Gain2_d;                    /* '<S106>/Gain2' */
  real32_T Add_l;                      /* '<S106>/Add' */
  real32_T LongCtrl_accelCurvature;    /* '<S106>/Divide' */
  real32_T UnitDelay_h;                /* '<S113>/Unit Delay' */
  real32_T Add5_h;                     /* '<S113>/Add5' */
  real32_T Product8_g;                 /* '<S113>/Product8' */
  real32_T Add6_l;                     /* '<S113>/Add6' */
  real32_T Gain_i;                     /* '<S107>/Gain' */
  real32_T Abs_o5;                     /* '<S107>/Abs' */
  real32_T LongCtrl_kapFilt;           /* '<S107>/MinMax3' */
  real32_T uDLookupTable3;             /* '<S107>/1-D Lookup Table3' */
  real32_T Gain4_a;                    /* '<S107>/Gain4' */
  real32_T Add1_b;                     /* '<S107>/Add1' */
  real32_T LongCtrl_accelKapRun;       /* '<S107>/Divide1' */
  real32_T uDLookupTable_p;            /* '<S107>/1-D Lookup Table' */
  real32_T LongCtrl_accelKapStartupRaw;/* '<S107>/1-D Lookup Table1' */
  real32_T LongCtrl_accelKapStartup;   /* '<S107>/MinMax1' */
  real32_T LongCtrl_accelKap;          /* '<S107>/MinMax4' */
  real32_T LongCtrl_upperBandIC;       /* '<S105>/Sum1' */
  real32_T LongCtrl_lowerBandIC;       /* '<S105>/Sum2' */
  real32_T uDLookupTable_i;            /* '<S110>/1-D Lookup Table' */
  real32_T Switch1_o5;                 /* '<S110>/Switch1' */
  real32_T Saturation_g;               /* '<S110>/Saturation' */
  real32_T Switch2_m;                  /* '<S110>/Switch2' */
  real32_T LongCtrl_upperJerkIC;       /* '<S110>/Multiport Switch' */
  real32_T uDLookupTable1_c;           /* '<S110>/1-D Lookup Table1' */
  real32_T Switch_f;                   /* '<S110>/Switch' */
  real32_T LongCtrl_lowerJerkIC;       /* '<S110>/Min' */
  real32_T upperBandORD;               /* '<S145>/Add' */
  real32_T lowerBandORD;               /* '<S145>/Add1' */
  real32_T Memory5;                    /* '<S20>/Memory5' */
  real32_T VlcInternalAccK20[19];      /* '<S22>/Tapped Delay1' */
  real32_T LongCtrl_velSubjPlanFollow[8];/* '<S25>/Signal Conversion' */
  real32_T MultiportSwitch[8];         /* '<S25>/Multiport Switch' */
  real32_T LongCtrl_velSubjPlanArb[8]; /* '<S25>/Signal Conversion1' */
  real32_T LongCtrl_IC_EHRV2_Cur;      /* '<S108>/Signal Conversion' */
  real32_T LongCtrl_IC_EHRV2_CurFar;   /* '<S108>/Signal Conversion3' */
  real32_T MinMax_c;                   /* '<S152>/MinMax' */
  real32_T uDLookupTable_n;            /* '<S153>/1-D Lookup Table' */
  real32_T Gain_d;                     /* '<S155>/Gain' */
  real32_T TmpSignalConversionAtACC_DisplayBar1Inport4[3];/* '<S154>/Mux2' */
  real32_T Divide_k;                   /* '<S156>/Divide' */
  real32_T MinMax_p;                   /* '<S175>/MinMax' */
  real32_T Product_m0;                 /* '<S175>/Product' */
  real32_T LongCtrl_lowerJerkCC;       /* '<S31>/deceleratejerk1' */
  real32_T LongCtrl_upperJerkCC;       /* '<S31>/acceleratejerk1' */
  real32_T LongCtrl_VlcInternalAccK20; /* '<S22>/Chart' */
  real32_T CounterK1;                  /* '<S20>/MATLAB Function' */
  real32_T velSubj;                    /* '<S153>/DeceleToStop' */
  real32_T velTargetRel;               /* '<S153>/DeceleToStop' */
  real32_T distTargRel;                /* '<S153>/DeceleToStop' */
  real32_T distRes;                    /* '<S167>/Add' */
  real32_T velTargetAbs;               /* '<S168>/Add' */
  real32_T LongCtrl_accelORD;          /* '<S18>/ORD' */
  real32_T vehicleSpd;                 /* '<S18>/ORD' */
  real32_T velDelta;                   /* '<S18>/ORD' */
  real32_T velDelta_l;                 /* '<S18>/ORD' */
  real32_T StartVel;                   /* '<S18>/ORD' */
  real32_T StartVel_m;                 /* '<S18>/ORD' */
  real32_T accelOffRamp;               /* '<S18>/ORD' */
  real32_T Abs_l;                      /* '<S150>/Abs' */
  real32_T Product5;                   /* '<S150>/Product5' */
  real32_T Product3_i;                 /* '<S150>/Product3' */
  real32_T Product6;                   /* '<S150>/Product6' */
  real32_T Product4_h;                 /* '<S150>/Product4' */
  real32_T Add_p;                      /* '<S150>/Add' */
  real32_T Abs1_c;                     /* '<S150>/Abs1' */
  real32_T Product1_m;                 /* '<S150>/Product1' */
  real32_T distDesOffRamp;             /* '<S150>/Product' */
  real32_T Product5_j;                 /* '<S147>/Product5' */
  real32_T Product3_p;                 /* '<S147>/Product3' */
  real32_T Product6_a;                 /* '<S147>/Product6' */
  real32_T Product4_n;                 /* '<S147>/Product4' */
  real32_T Add_f;                      /* '<S147>/Add' */
  real32_T MinMax_i;                   /* '<S147>/MinMax' */
  real32_T Product_ew;                 /* '<S147>/Product' */
  real32_T accelOffRamp_o;             /* '<S147>/Product1' */
  real32_T accelOffRamp_h;             /* '<S148>/Product' */
  real32_T accelOffRamp_ov;            /* '<S149>/Product' */
  real32_T Product_p;                  /* '<S151>/Product' */
  real32_T Add1_l;                     /* '<S151>/Add1' */
  real32_T Add_dg;                     /* '<S151>/Add' */
  real32_T velDelta_g;                 /* '<S151>/Product1' */
  real32_T TmpSignalConversionAtSFunctionInport6[2];/* '<S111>/LineFilter' */
  real32_T TmpSignalConversionAtSFunctionInport7[2];/* '<S111>/LineFilter' */
  real32_T TmpSignalConversionAtSFunctionInport8[2];/* '<S111>/LineFilter' */
  real32_T TmpSignalConversionAtSFunctionInport9[2];/* '<S111>/LineFilter' */
  real32_T TmpSignalConversionAtSFunctionInport18[2];/* '<S111>/LineFilter' */
  real32_T TmpSignalConversionAtSFunctionInport19[2];/* '<S111>/LineFilter' */
  real32_T A3[2];                      /* '<S111>/LineFilter' */
  real32_T A2[2];                      /* '<S111>/LineFilter' */
  real32_T A1[2];                      /* '<S111>/LineFilter' */
  real32_T A0[2];                      /* '<S111>/LineFilter' */
  real32_T Avail_time[2];              /* '<S111>/LineFilter' */
  real32_T Avail_dis[2];               /* '<S111>/LineFilter' */
  real32_T Line_std[2];                /* '<S111>/LineFilter' */
  real32_T TmpSignalConversionAtSFunctionInport6_n[2];/* '<S111>/KeepLane' */
  real32_T TmpSignalConversionAtSFunctionInport7_h[2];/* '<S111>/KeepLane' */
  real32_T TmpSignalConversionAtSFunctionInport8_e[2];/* '<S111>/KeepLane' */
  real32_T TmpSignalConversionAtSFunctionInport9_c[2];/* '<S111>/KeepLane' */
  real32_T TmpSignalConversionAtSFunctionInport10[2];/* '<S111>/KeepLane' */
  real32_T A3_f[2];                    /* '<S111>/KeepLane' */
  real32_T A2_n[2];                    /* '<S111>/KeepLane' */
  real32_T A1_h[2];                    /* '<S111>/KeepLane' */
  real32_T A0_o[2];                    /* '<S111>/KeepLane' */
  real32_T dDisFront[2];               /* '<S111>/KeepLane' */
  real32_T tLost[2];                   /* '<S111>/KeepLane' */
  real32_T dDeltaX;                    /* '<S111>/CalcEgoVehMove' */
  real32_T dDeltaY;                    /* '<S111>/CalcEgoVehMove' */
  real32_T CosOfPsi;                   /* '<S111>/CalcEgoVehMove' */
  real32_T SinOfPsi;                   /* '<S111>/CalcEgoVehMove' */
  real32_T VectorConcatenate[2];       /* '<S125>/Vector Concatenate' */
  real32_T VectorConcatenate1[2];      /* '<S125>/Vector Concatenate1' */
  real32_T Abs_a[2];                   /* '<S125>/Abs' */
  real32_T LongCtrl_curvatureNoC3;     /* '<S128>/Signal Conversion' */
  real32_T LongCtrl_curvatureWithC3;   /* '<S128>/Signal Conversion1' */
  real32_T LongCtrl_coefCurvatureNoC3; /* '<S128>/2-D Lookup Table1' */
  real32_T LongCtrl_coefCurvatureWithC3;/* '<S128>/Add' */
  real32_T Product_h;                  /* '<S128>/Product' */
  real32_T Product1_mz;                /* '<S128>/Product1' */
  real32_T LongCtrl_curvatureForCurveDecelRaw;/* '<S128>/Add1' */
  real32_T uDLookupTable_l;            /* '<S130>/1-D Lookup Table' */
  real32_T TappedDelay2_p[3];          /* '<S130>/Tapped Delay2' */
  real32_T Max_d;                      /* '<S130>/Max' */
  real32_T Min_h;                      /* '<S130>/Min' */
  real32_T SumofElements2_i;           /* '<S130>/Sum of Elements2' */
  real32_T Add_m;                      /* '<S130>/Add' */
  real32_T UnitDelay_b;                /* '<S130>/Unit Delay' */
  real32_T Add5_c;                     /* '<S130>/Add5' */
  real32_T Product7_e;                 /* '<S130>/Product7' */
  real32_T Product8_f;                 /* '<S130>/Product8' */
  real32_T Add6_n;                     /* '<S130>/Add6' */
  real32_T ImpAsg_InsertedFor_Curvature_at_inport_0[2];/* '<S129>/CurvatureChar' */
  real32_T ImpAsg_InsertedFor_LongCtrl_IC_EHRV2_CurMatrixLP_at_inport_0[10];/* '<S115>/Abs' */
  real32_T LongCtrl_accelICCurvatureMapMatrix[10];/* '<S108>/Chart' */
  real32_T LongCtrl_distDesCurvatureMap[10];/* '<S108>/Chart' */
  real32_T LongCtrl_accelDesCurvatureMap;/* '<S108>/Chart' */
  real32_T LongCtrl_IC_EHRV2_CurMatrixLP[10];/* '<S108>/Chart' */
  real32_T velSubjLimMap[10];          /* '<S108>/Chart' */
  real32_T velSubj_d;                  /* '<S108>/Chart' */
  real32_T velDelta_b;                 /* '<S108>/Chart' */
  real32_T velDelta_gu;                /* '<S108>/Chart' */
  real32_T LongCtrl_IC_EHRV2_CurDisMatrix_d;/* '<S108>/Chart' */
  real32_T velDelta_i;                 /* '<S108>/Chart' */
  real32_T velDelta_k;                 /* '<S108>/Chart' */
  real32_T accelICCurvatureMapMatrix;  /* '<S108>/Chart' */
  real32_T Abs_i;                      /* '<S119>/Abs' */
  real32_T MathFunction_f;             /* '<S119>/Math Function' */
  real32_T Product1_p;                 /* '<S119>/Product1' */
  real32_T distDesCurvatureMap;        /* '<S119>/Product' */
  real32_T MathFunction_m;             /* '<S116>/Math Function' */
  real32_T MinMax_b;                   /* '<S116>/MinMax' */
  real32_T Product_cq;                 /* '<S116>/Product' */
  real32_T Product1_cq;                /* '<S116>/Product1' */
  real32_T accelICCurvatureMapMatrix_i;/* '<S116>/Product2' */
  real32_T accelICCurvatureMapMatrix_k;/* '<S117>/Product' */
  real32_T accelICCurvatureMapMatrix_g;/* '<S118>/Product' */
  real32_T velDelta_c[10];             /* '<S120>/Add' */
  real32_T uDLookupTable2_b[10];       /* '<S121>/1-D Lookup Table2' */
  real32_T Gain2_a0[10];               /* '<S121>/Gain2' */
  real32_T LongCtrl_accelIC;           /* '<S104>/MATLAB Function' */
  real32_T LongCtrl_AccelSupreReq;     /* '<S47>/1-D Lookup Table' */
  real32_T LongCtrl_dangerLevel;       /* '<S47>/Signal Copy1' */
  real32_T Subtract3;                  /* '<S59>/Subtract3' */
  real32_T MinMax_j;                   /* '<S59>/MinMax' */
  real32_T LongCtrl_distDesPlan[20];   /* '<S52>/DesireDistance3' */
  real32_T Gain9_e;                    /* '<S52>/Gain9' */
  real32_T MatrixConcatenate1[2];      /* '<S52>/Matrix Concatenate1' */
  real32_T Subtract1_k;                /* '<S52>/Subtract1' */
  real32_T DesireDistance1;            /* '<S52>/DesireDistance1' */
  real32_T MatrixConcatenate2[2];      /* '<S52>/Matrix Concatenate2' */
  real32_T LookupTableDynamic;         /* '<S52>/Lookup Table Dynamic' */
  real32_T Subtract5;                  /* '<S52>/Subtract5' */
  real32_T LongCtrl_distDesPlanCorr[20];/* '<S52>/Min' */
  real32_T uDLookupTable_a;            /* '<S53>/1-D Lookup Table' */
  real32_T Product1_j;                 /* '<S101>/Product1' */
  real32_T MinMax1;                    /* '<S101>/MinMax1' */
  real32_T Add_a;                      /* '<S101>/Add' */
  real32_T MinMax_k;                   /* '<S101>/MinMax' */
  real32_T Product_m2;                 /* '<S101>/Product' */
  real32_T uDLookupTable1_g;           /* '<S58>/1-D Lookup Table1' */
  real32_T LongCtrl_distDesCur;        /* '<S52>/DesireDistance2' */
  real32_T Product2_l;                 /* '<S58>/Product2' */
  real32_T uDLookupTable3_e;           /* '<S58>/1-D Lookup Table3' */
  real32_T Product1_ew;                /* '<S58>/Product1' */
  real32_T Gain_ld;                    /* '<S57>/Gain' */
  real32_T MinMax_jj;                  /* '<S57>/MinMax' */
  real32_T Product1_h;                 /* '<S57>/Product1' */
  real32_T velSubjNegToleranceAdd;     /* '<S58>/velSubjNegToleranceAdd' */
  real32_T UnitDelay2_j;               /* '<S58>/Unit Delay2' */
  real32_T UnitDelay1_p;               /* '<S58>/Unit Delay1' */
  real32_T UnitDelay_g;                /* '<S58>/Unit Delay' */
  real32_T LongCtrl_accelSubjDesRaw;   /* '<S58>/Signal Conversion' */
  real32_T LongCtrl_accelSubjDesCorr;  /* '<S58>/Product' */
  real32_T LongCtrl_distRelPlanTerminate[20];/* '<S16>/Permute Dimensions1' */
  real32_T UnitDelay_i;                /* '<S16>/Unit Delay' */
  real32_T Switch_ne;                  /* '<S86>/Switch' */
  real32_T MinMax_e;                   /* '<S86>/MinMax' */
  real32_T Add_h;                      /* '<S87>/Add' */
  real32_T Switch1_e;                  /* '<S86>/Switch1' */
  real32_T MinMax2_i;                  /* '<S86>/MinMax2' */
  real32_T Product_ap;                 /* '<S86>/Product' */
  real32_T LongCtrl_FollowAcceleStandstillOverride;/* '<S86>/MinMax1' */
  real32_T LongCtrl_accelFollowDesThresEnableStop;/* '<S69>/1-D Lookup Table1' */
  real32_T Add_e;                      /* '<S69>/Add' */
  real32_T LongCtrl_velSubjThresEnableStopAdd;/* '<S69>/1-D Lookup Table' */
  real32_T LongCtrl_velSubjThresForceStop;
                              /* '<S70>/P_LongCtrl_velSubjThresForceStopChar' */
  real32_T Add1_o;                     /* '<S69>/Add1' */
  real32_T VectorConcatenate_e[2];     /* '<S69>/Vector Concatenate' */
  real32_T LookupTableDynamic_k;       /* '<S69>/Lookup Table Dynamic' */
  real32_T P_LongCtrl_FollowvelSubjThresEnableStop1;
                          /* '<S69>/P_LongCtrl_FollowvelSubjThresEnableStop1' */
  real32_T LongCtrl_velSubjThresForceStopStationaryTarget;/* '<S69>/Switch' */
  real32_T LongCtrl_jerkForceStop;    /* '<S70>/P_LongCtrl_jerkForceStopChar' */
  real32_T LongCtrl_accelForceMin;
                            /* '<S70>/P_LongCtrl_FollowaccelForceStopMinChar' */
  real32_T MinMax_jp;                  /* '<S47>/MinMax' */
  real32_T LongCtrl_accelFollowAfterLaneChangeSupress;/* '<S47>/Switch' */
  real32_T uDLookupTable_m;            /* '<S73>/1-D Lookup Table' */
  real32_T uDLookupTable_ln;           /* '<S56>/1-D Lookup Table' */
  real32_T Add_g;                      /* '<S56>/Add' */
  real32_T LongCtrl_accelFollow;       /* '<S56>/Product' */
  real32_T UnitDelay_oa;               /* '<S75>/Unit Delay' */
  real32_T Add_pr;                     /* '<S75>/Add' */
  real32_T Product1_n;                 /* '<S75>/Product1' */
  real32_T Add1_e;                     /* '<S75>/Add1' */
  real32_T LongCtrl_accelFollowFilt;   /* '<S75>/Switch' */
  real32_T uDLookupTable1_m;           /* '<S73>/1-D Lookup Table1' */
  real32_T Switch_h;                   /* '<S73>/Switch' */
  real32_T LongCtrl_upperJerkFollow;   /* '<S73>/Product' */
  real32_T Product1_a;                 /* '<S72>/Product1' */
  real32_T Add1_bh;                    /* '<S72>/Add1' */
  real32_T uDLookupTable_g;            /* '<S74>/1-D Lookup Table' */
  real32_T decelFollowJerk;            /* '<S74>/DecelFollowJerkChar' */
  real32_T DecelFollowJerkTTCCorrChar; /* '<S74>/DecelFollowJerkTTCCorrChar' */
  real32_T Add_o3;                     /* '<S74>/Add' */
  real32_T uDLookupTable1_o;           /* '<S74>/1-D Lookup Table1' */
  real32_T Switch2_no;                 /* '<S74>/Switch2' */
  real32_T Product1_hc;                /* '<S74>/Product1' */
  real32_T Switch3_k;                  /* '<S74>/Switch3' */
  real32_T uDLookupTable2_e;           /* '<S74>/1-D Lookup Table2' */
  real32_T MinMax2_f;                  /* '<S74>/MinMax2' */
  real32_T Switch_nv;                  /* '<S74>/Switch' */
  real32_T Product_pu;                 /* '<S74>/Product' */
  real32_T Switch1_b;                  /* '<S74>/Switch1' */
  real32_T LongCtrl_lowerJerkFollow;   /* '<S74>/MinMax1' */
  real32_T Product_m2c;                /* '<S72>/Product' */
  real32_T Add2_p;                     /* '<S72>/Add2' */
  real32_T MinMax_m;                   /* '<S72>/MinMax' */
  real32_T LongCtrl_accelFollowAfterJerk;/* '<S72>/MinMax1' */
  real32_T LongCtrl_upperBandFollow;   /* '<S76>/Add' */
  real32_T LongCtrl_lowerBandFollow;   /* '<S76>/Add1' */
  real32_T LongCtrl_velTargAbsPlanTerminate[20];/* '<S59>/VelTarAbsTerminateCalc' */
  real32_T LongCtrl_distRelPlanOpt[40];/* '<S58>/spdPlanning' */
  real32_T distRelPlan[800];           /* '<S58>/spdPlanning' */
  real32_T LongCtrl_velPlanRelOpt[40]; /* '<S58>/spdPlanning' */
  real32_T velRelPlan[800];            /* '<S58>/spdPlanning' */
  real32_T LongCtrl_velSubjPlanOpt[40];/* '<S58>/spdPlanning' */
  real32_T LongCtrl_accelSubjPlanOpt[40];/* '<S58>/spdPlanning' */
  real32_T LongCtrl_J[20];             /* '<S58>/spdPlanning' */
  real32_T LongCtrl_accelSubjPlan[800];/* '<S58>/spdPlanning' */
  real32_T dtAccelSubjPlanTemp[800];   /* '<S58>/spdPlanning' */
  real32_T C0[20];                     /* '<S58>/spdPlanning' */
  real32_T C1[20];                     /* '<S58>/spdPlanning' */
  real32_T C2[20];                     /* '<S58>/spdPlanning' */
  real32_T C3[20];                     /* '<S58>/spdPlanning' */
  real32_T C4[20];                     /* '<S58>/spdPlanning' */
  real32_T C5[20];                     /* '<S58>/spdPlanning' */
  real32_T velSubjPre[800];            /* '<S58>/spdPlanning' */
  real32_T LongCtrl_JadtA[20];         /* '<S58>/spdPlanning' */
  real32_T LongCtrl_JadtADist[20];     /* '<S58>/spdPlanning' */
  real32_T LongCtrl_asum[20];          /* '<S58>/spdPlanning' */
  real32_T LongCtrl_coefJEnlarge[20];  /* '<S58>/spdPlanning' */
  real32_T LongCtrl_distRelPlanMin;    /* '<S58>/spdPlanning' */
  real32_T LongCtrl_distRelDesDistRelPlanNumMin;/* '<S58>/spdPlanning' */
  real32_T tOverride2Active;           /* '<S58>/spdPlanning' */
  real32_T LongCtrl_num;               /* '<S58>/spdPlanning' */
  real32_T coefDistEnlarge;            /* '<S58>/CoefCalc' */
  real32_T coefVelEnlarge;             /* '<S58>/CoefCalc' */
  real32_T coefAccelCorr;              /* '<S58>/AccelCorr' */
  real32_T LongCtrl_coefVelDist2AccelStartUp;/* '<S56>/Chart1' */
  real32_T velTargRel;                 /* '<S56>/Chart1' */
  real32_T distTargRel_b;              /* '<S56>/Chart1' */
  real32_T distDesCur;                 /* '<S56>/Chart1' */
  real32_T Add_gl;                     /* '<S97>/Add' */
  real32_T uDLookupTable_h;            /* '<S97>/1-D Lookup Table' */
  real32_T uDLookupTable_j;            /* '<S98>/1-D Lookup Table' */
  real32_T LongCtrl_accelFollowSlopeAssist;/* '<S56>/Chart' */
  real32_T LongCtrl_coefStandstillOverride;/* '<S55>/StandstillOverride' */
  real32_T LongCtrl_followAccel_Plau;  /* '<S55>/PlausibilityCheck' */
  real32_T lowerJerkOverride;          /* '<S74>/OverrideJerk' */
  real32_T VlcInternalAccK1;           /* '<S74>/OverrideJerk' */
  real32_T uDLookupTable_l0;           /* '<S82>/1-D Lookup Table' */
  real32_T Dterminate[20];             /* '<S53>/DistRelPlanTerminateCalc2' */
  real32_T tTargStop;                  /* '<S53>/DistRelPlanTerminateCalc2' */
  real32_T distTargPlan;               /* '<S53>/DistRelPlanTerminateCalc2' */
  real32_T LongCtrl_accelFollowAfterDecelToStop;/* '<S67>/DecelToStopCtrl' */
  real32_T LongCtrl_accelTargAbsFilt;  /* '<S49>/accelTargAbsFilter' */
  real32_T diffAccelCur2K1P0;          /* '<S49>/accelTargAbsFilter' */
  real32_T tFiltP0;                    /* '<S64>/1-D Lookup Table' */
  real32_T LongCtrl_accelTargAbsEnable;/* '<S48>/AccelTargAbsEnableJudge' */
  real32_T LongCtrl_tStartDecel;       /* '<S47>/DecelJudge' */
  real32_T LongCtrl_distAccelSupressionEnter;/* '<S47>/AccelSupression' */
  real32_T LongCtrl_distAccelSupressionExit;/* '<S47>/AccelSupression' */
  real32_T LongCtrl_velSubjPlanCC[8];  /* '<S32>/Chart' */
  real32_T LongCtrl_spdSetValueDurLCAccel;/* '<S12>/MATLAB Function' */
  real32_T LongCtrl_lowerBandCC;       /* '<S12>/AcceleBandCC' */
  real32_T LongCtrl_upperBandCC;       /* '<S12>/AcceleBandCC' */
  real32_T accelCCDes;                 /* '<S12>/AcceleBandCC' */
  real32_T accelCCDes_o;               /* '<S12>/AcceleBandCC' */
  real32_T Add_b;                      /* '<S42>/Add' */
  real32_T Add1_i;                     /* '<S42>/Add1' */
  real32_T Product_mg;                 /* '<S42>/Product' */
  real32_T upperBandCC;                /* '<S42>/MinMax' */
  real32_T Product1_f;                 /* '<S42>/Product1' */
  real32_T lowerBandCC;                /* '<S42>/MinMax1' */
  real32_T Add_hq;                     /* '<S43>/Add' */
  real32_T Add1_oh;                    /* '<S43>/Add1' */
  real32_T Product_ft;                 /* '<S43>/Product' */
  real32_T upperBandCC_j;              /* '<S43>/MinMax' */
  real32_T Product1_cu;                /* '<S43>/Product1' */
  real32_T lowerBandCC_j;              /* '<S43>/MinMax1' */
  real32_T LongCtrl_accelCCRaw;        /* '<S12>/AccelCCCalc' */
  real32_T deltaVelCC;                 /* '<S12>/AccelCCCalc' */
  real32_T deltaVelCC_b;               /* '<S12>/AccelCCCalc' */
  real32_T CCSetSpd;                   /* '<S12>/AccelCCCalc' */
  real32_T VehicleSpd;                 /* '<S12>/AccelCCCalc' */
  real32_T SpdSetValue;                /* '<S12>/AccelCCCalc' */
  real32_T ACC_SpdSetValueMph2Kph;     /* '<S36>/Product' */
  real32_T Product_gqi;                /* '<S35>/Product' */
  real32_T Add_jl;                     /* '<S35>/Add' */
  real32_T CCDeltaV;                   /* '<S35>/Add1' */
  real32_T CCDeltaV_i;                 /* '<S35>/Product1' */
  real32_T uDLookupTable_nm;           /* '<S33>/1-D Lookup Table' */
  real32_T Product1_k;                 /* '<S33>/Product1' */
  real32_T CCAccele;                   /* '<S33>/Product' */
  real32_T uDLookupTable_e;            /* '<S34>/1-D Lookup Table' */
  real32_T Product1_d;                 /* '<S34>/Product1' */
  real32_T CCAccele_l;                 /* '<S34>/Product' */
  real32_T LongCtrl_accelArb;          /* '<S11>/Arbitrate' */
  real32_T LongCtrl_lowerBandArb;      /* '<S11>/Arbitrate' */
  real32_T LongCtrl_lowerJerkArb;      /* '<S11>/Arbitrate' */
  real32_T LongCtrl_upperBandArb;      /* '<S11>/Arbitrate' */
  real32_T LongCtrl_upperJerkArb;      /* '<S11>/Arbitrate' */
  real32_T LongCtrl_accelAL;           /* '<S10>/AL' */
  real32_T LongCtrl_upperBandAL;       /* '<S10>/AL' */
  real32_T LongCtrl_lowerBandAL;       /* '<S10>/AL' */
  real32_T LongCtrl_upperJerkAL;       /* '<S10>/AL' */
  real32_T LongCtrl_lowerJerkAL;       /* '<S10>/AL' */
  uint16_T UnitDelay_au;               /* '<S283>/Unit Delay' */
  uint16_T Switch_m;                   /* '<S283>/Switch' */
  uint16_T Sum;                        /* '<S283>/Sum' */
  uint16_T Switch1_l;                  /* '<S283>/Switch1' */
  uint16_T Saturation1;                /* '<S283>/Saturation1' */
  uint16_T UnitDelay_c;                /* '<S265>/Unit Delay' */
  uint16_T Switch_d;                   /* '<S265>/Switch' */
  uint16_T Sum_p;                      /* '<S265>/Sum' */
  uint16_T Switch1_dt;                 /* '<S265>/Switch1' */
  uint16_T Saturation1_f;              /* '<S265>/Saturation1' */
  uint16_T Constant_a;                 /* '<S244>/Constant' */
  uint16_T UnitDelay_ow;               /* '<S262>/Unit Delay' */
  uint16_T Switch_mv;                  /* '<S262>/Switch' */
  uint16_T Sum_g;                      /* '<S262>/Sum' */
  uint16_T Switch1_c;                  /* '<S262>/Switch1' */
  uint16_T Saturation1_c;              /* '<S262>/Saturation1' */
  uint16_T UnitDelay_ov;               /* '<S264>/Unit Delay' */
  uint16_T Switch_pj;                  /* '<S264>/Switch' */
  uint16_T Sum_l;                      /* '<S264>/Sum' */
  uint16_T Switch1_f;                  /* '<S264>/Switch1' */
  uint16_T Saturation1_n;              /* '<S264>/Saturation1' */
  uint16_T UnitDelay_i1;               /* '<S266>/Unit Delay' */
  uint16_T Switch_c;                   /* '<S266>/Switch' */
  uint16_T Sum_b;                      /* '<S266>/Sum' */
  uint16_T Switch1_n;                  /* '<S266>/Switch1' */
  uint16_T Saturation1_o;              /* '<S266>/Saturation1' */
  uint16_T Constant_k;                 /* '<S245>/Constant' */
  uint16_T UnitDelay_e;                /* '<S261>/Unit Delay' */
  uint16_T Switch_gt;                  /* '<S261>/Switch' */
  uint16_T Sum_lz;                     /* '<S261>/Sum' */
  uint16_T Switch1_ok;                 /* '<S261>/Switch1' */
  uint16_T Saturation1_nr;             /* '<S261>/Saturation1' */
  uint16_T UnitDelay_ky;               /* '<S263>/Unit Delay' */
  uint16_T Switch_k;                   /* '<S263>/Switch' */
  uint16_T Sum_c;                      /* '<S263>/Sum' */
  uint16_T Switch1_p;                  /* '<S263>/Switch1' */
  uint16_T Saturation1_ft;             /* '<S263>/Saturation1' */
  uint16_T UnitDelay_ee;               /* '<S302>/Unit Delay' */
  uint16_T Switch_co;                  /* '<S302>/Switch' */
  uint16_T Sum_go;                     /* '<S302>/Sum' */
  uint16_T Switch1_b0;                 /* '<S302>/Switch1' */
  uint16_T Saturation1_a;              /* '<S302>/Saturation1' */
  uint16_T Constant_a4;                /* '<S294>/Constant' */
  uint16_T UnitDelay_b3;               /* '<S301>/Unit Delay' */
  uint16_T Switch_hg;                  /* '<S301>/Switch' */
  uint16_T Sum_j;                      /* '<S301>/Sum' */
  uint16_T Switch1_oa;                 /* '<S301>/Switch1' */
  uint16_T Saturation1_m;              /* '<S301>/Saturation1' */
  uint16_T Constant_kx;                /* '<S293>/Constant' */
  uint16_T UnitDelay1_bb;              /* '<S304>/Unit Delay1' */
  uint16_T Merge_b;                    /* '<S304>/Merge' */
  uint16_T UnitDelay_gx;               /* '<S334>/Unit Delay' */
  uint16_T Switch_b;                   /* '<S334>/Switch' */
  uint16_T Sum_g4;                     /* '<S334>/Sum' */
  uint16_T Switch1_fb;                 /* '<S334>/Switch1' */
  uint16_T Saturation1_j;              /* '<S334>/Saturation1' */
  uint16_T Constant_b;                 /* '<S321>/Constant' */
  uint16_T UnitDelay1_m;               /* '<S342>/Unit Delay1' */
  uint16_T Merge_e;                    /* '<S342>/Merge' */
  uint16_T UnitDelay_c0;               /* '<S369>/Unit Delay' */
  uint16_T UnitDelay_p;                /* '<S368>/Unit Delay' */
  uint16_T Switch_ku;                  /* '<S368>/Switch' */
  uint16_T Sum_m;                      /* '<S368>/Sum' */
  uint16_T Switch1_m;                  /* '<S368>/Switch1' */
  uint16_T Saturation1_k;              /* '<S368>/Saturation1' */
  uint16_T Switch_j;                   /* '<S369>/Switch' */
  uint16_T Sum_n;                      /* '<S369>/Sum' */
  uint16_T Switch1_i;                  /* '<S369>/Switch1' */
  uint16_T Saturation1_b;              /* '<S369>/Saturation1' */
  uint16_T UnitDelay_ok;               /* '<S335>/Unit Delay' */
  uint16_T Switch_o;                   /* '<S335>/Switch' */
  uint16_T Sum_n2;                     /* '<S335>/Sum' */
  uint16_T Switch1_fn;                 /* '<S335>/Switch1' */
  uint16_T Saturation1_l;              /* '<S335>/Saturation1' */
  uint16_T Constant_f;                 /* '<S322>/Constant' */
  uint16_T UnitDelay1_dj;              /* '<S343>/Unit Delay1' */
  uint16_T Merge_n;                    /* '<S343>/Merge' */
  uint16_T UnitDelay_kx;               /* '<S370>/Unit Delay' */
  uint16_T Switch_b1;                  /* '<S370>/Switch' */
  uint16_T Sum_e;                      /* '<S370>/Sum' */
  uint16_T Switch1_jf;                 /* '<S370>/Switch1' */
  uint16_T Saturation1_e;              /* '<S370>/Saturation1' */
  uint16_T UnitDelay_m;                /* '<S366>/Unit Delay' */
  uint16_T Switch_e;                   /* '<S366>/Switch' */
  uint16_T Sum_bq;                     /* '<S366>/Sum' */
  uint16_T Switch1_a;                  /* '<S366>/Switch1' */
  uint16_T Saturation1_b4;             /* '<S366>/Saturation1' */
  uint16_T UnitDelay_az;               /* '<S367>/Unit Delay' */
  uint16_T Switch_m0;                  /* '<S367>/Switch' */
  uint16_T Sum_bv;                     /* '<S367>/Sum' */
  uint16_T Switch1_k;                  /* '<S367>/Switch1' */
  uint16_T Saturation1_g;              /* '<S367>/Saturation1' */
  uint16_T UnitDelay1_jx;              /* '<S421>/Unit Delay1' */
  uint16_T Merge_d;                    /* '<S421>/Merge' */
  uint16_T UnitDelay1_c;               /* '<S420>/Unit Delay1' */
  uint16_T Merge_h;                    /* '<S420>/Merge' */
  uint16_T UnitDelay_go;               /* '<S413>/Unit Delay' */
  uint16_T Switch_oi;                  /* '<S413>/Switch' */
  uint16_T Sum_l5;                     /* '<S413>/Sum' */
  uint16_T Switch1_cj;                 /* '<S413>/Switch1' */
  uint16_T Saturation1_mg;             /* '<S413>/Saturation1' */
  uint16_T UnitDelay_mo;               /* '<S412>/Unit Delay' */
  uint16_T Switch_l;                   /* '<S412>/Switch' */
  uint16_T Sum_bd;                     /* '<S412>/Sum' */
  uint16_T Switch1_au;                 /* '<S412>/Switch1' */
  uint16_T Saturation1_kr;             /* '<S412>/Saturation1' */
  uint16_T UnitDelay1_i;               /* '<S431>/Unit Delay1' */
  uint16_T Merge_k;                    /* '<S431>/Merge' */
  uint16_T UnitDelay1_k;               /* '<S432>/Unit Delay1' */
  uint16_T Merge_m;                    /* '<S432>/Merge' */
  uint16_T UnitDelay1_dn;              /* '<S440>/Unit Delay1' */
  uint16_T Merge_p;                    /* '<S440>/Merge' */
  uint16_T UnitDelay1_j1;              /* '<S441>/Unit Delay1' */
  uint16_T Merge_mg;                   /* '<S441>/Merge' */
  uint16_T UnitDelay1_a;               /* '<S450>/Unit Delay1' */
  uint16_T Merge_a;                    /* '<S450>/Merge' */
  uint16_T UnitDelay1_g;               /* '<S425>/Unit Delay1' */
  uint16_T UnitDelay1_f;               /* '<S424>/Unit Delay1' */
  uint16_T HMILaneChangeReq;           /* '<S189>/Data Type Conversion' */
  uint16_T Switch_i;                   /* '<S183>/Switch' */
  uint16_T Switch1_fl;                 /* '<S183>/Switch1' */
  uint16_T Switch2_j;                  /* '<S183>/Switch2' */
  uint16_T Switch3_n;                  /* '<S183>/Switch3' */
  uint16_T Switch4_h;                  /* '<S183>/Switch4' */
  uint16_T Switch10_b;                 /* '<S183>/Switch10' */
  uint16_T Switch11;                   /* '<S183>/Switch11' */
  uint16_T Add_de;                     /* '<S183>/Add' */
  uint16_T Switch5_m;                  /* '<S183>/Switch5' */
  uint16_T Switch6;                    /* '<S183>/Switch6' */
  uint16_T Switch9_m;                  /* '<S183>/Switch9' */
  uint16_T Switch12;                   /* '<S183>/Switch12' */
  uint16_T Switch13;                   /* '<S183>/Switch13' */
  uint16_T Switch7;                    /* '<S183>/Switch7' */
  uint16_T Switch8_n;                  /* '<S183>/Switch8' */
  uint16_T Add1_f;                     /* '<S183>/Add1' */
  uint16_T PLAN_ALC_LcCancelReason;    /* '<S183>/Signal Copy1' */
  uint16_T UnitDelay1_o;               /* '<S285>/Unit Delay1' */
  uint16_T Merge_g;                    /* '<S285>/Merge' */
  uint16_T HoldValue;                  /* '<S183>/SigValueHold1' */
  uint16_T LcCntLe;                    /* '<S4>/ALC_DECS' */
  uint16_T LcCntRi;                    /* '<S4>/ALC_DECS' */
  uint16_T UnitDelay1_jn;              /* '<S39>/Unit Delay1' */
  uint16_T Merge_dw;                   /* '<S39>/Merge' */
  uint16_T LongCtrl_IC_EHRV2_CurFarDis;/* '<S108>/Signal Conversion4' */
  uint16_T distRamp2Cur;               /* '<S18>/ORD' */
  uint8_T Compare;                     /* '<S477>/Compare' */
  uint8_T Compare_f;                   /* '<S478>/Compare' */
  uint8_T UnitDelay11[11];             /* '<S460>/Unit Delay11' */
  uint8_T PLAN_DPC_ObjID[11];          /* '<S471>/Signal Copy' */
  uint8_T UnitDelay_er[11];            /* '<S460>/Unit Delay' */
  uint8_T UnitDelay10[11];             /* '<S460>/Unit Delay10' */
  uint8_T UnitDelay_kp[11];            /* '<S489>/Unit Delay' */
  uint8_T UnitDelay2_l1;               /* '<S4>/Unit Delay2' */
  uint8_T UnitDelay7_m;                /* '<S4>/Unit Delay7' */
  uint8_T UnitDelay5_o;                /* '<S4>/Unit Delay5' */
  uint8_T UnitDelay8_i;                /* '<S4>/Unit Delay8' */
  uint8_T UnitDelay_ia;                /* '<S185>/Unit Delay' */
  uint8_T UnitDelay4_a;                /* '<S4>/Unit Delay4' */
  uint8_T UnitDelay3_o;                /* '<S4>/Unit Delay3' */
  uint8_T UnitDelay1_l;                /* '<S185>/Unit Delay1' */
  uint8_T UnitDelay15;                 /* '<S4>/Unit Delay15' */
  uint8_T PLAN_ALC_LSMPilotTurnSts;    /* '<S4>/Signal Copy' */
  uint8_T LSM_PilotTurnSts;            /* '<S4>/Switch' */
  uint8_T UnitDelay9_e;                /* '<S4>/Unit Delay9' */
  uint8_T UnitDelay10_a;               /* '<S4>/Unit Delay10' */
  uint8_T UnitDelay11_a;               /* '<S4>/Unit Delay11' */
  uint8_T UnitDelay14;                 /* '<S4>/Unit Delay14' */
  uint8_T UnitDelay1_px;               /* '<S4>/Unit Delay1' */
  uint8_T UnitDelay_l;                 /* '<S4>/Unit Delay' */
  uint8_T UnitDelay6_j;                /* '<S4>/Unit Delay6' */
  uint8_T Uk1_c;                       /* '<S371>/Delay Input1' */
  uint8_T UnitDelay16;                 /* '<S4>/Unit Delay16' */
  uint8_T UnitDelay13_p;               /* '<S4>/Unit Delay13' */
  uint8_T Switch1_jb;                  /* '<S189>/Switch1' */
  uint8_T Switch4_a;                   /* '<S189>/Switch4' */
  uint8_T Switch3_p;                   /* '<S189>/Switch3' */
  uint8_T PLAN_ALC_LampReq;            /* '<S189>/Switch6' */
  uint8_T DirectLookupTablenD;         /* '<S189>/Direct Lookup Table (n-D)' */
  uint8_T Switch7_i;                   /* '<S189>/Switch7' */
  uint8_T Switch1_h;                   /* '<S415>/Switch1' */
  uint8_T LcDrvSatisfiedStsLe;         /* '<S415>/Switch' */
  uint8_T Switch1_b5;                  /* '<S416>/Switch1' */
  uint8_T LcDrvSatisfiedStsRi;         /* '<S416>/Switch' */
  uint8_T Switch1_g;                   /* '<S417>/Switch1' */
  uint8_T LcNohSatisfiedStsLe;         /* '<S417>/Switch' */
  uint8_T Switch1_il;                  /* '<S418>/Switch1' */
  uint8_T LcNohSatisfiedStsRi;         /* '<S418>/Switch' */
  uint8_T Switch1_gr;                  /* '<S419>/Switch1' */
  uint8_T LcNohSatisfiedStsRi_d;       /* '<S419>/Switch' */
  uint8_T UnitDelay12_o;               /* '<S4>/Unit Delay12' */
  uint8_T UnitDelay_lv;                /* '<S349>/Unit Delay' */
  uint8_T UnitDelay14_h;               /* '<S460>/Unit Delay14' */
  uint8_T UnitDelay_j[11];             /* '<S471>/Unit Delay' */
  uint8_T DataTypeConversion1_h;       /* '<S462>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_k;       /* '<S462>/Data Type Conversion2' */
  uint8_T RearObjValid;                /* '<S462>/Signal Copy2' */
  uint8_T RearObjValid_a;              /* '<S462>/Signal Copy5' */
  uint8_T PLAN_UpdateCnt;              /* '<S2>/Output' */
  uint8_T FixPtSum1;                   /* '<S6>/FixPt Sum1' */
  uint8_T FixPtSwitch;                 /* '<S7>/FixPt Switch' */
  uint8_T PLAN_ObjLostBufID[11];       /* '<S460>/Lock' */
  uint8_T PLAN_LostBufRemoveMark[11];  /* '<S460>/BufRelease1' */
  uint8_T LostBufBreakLockObjID[11];   /* '<S460>/BufRelease1' */
  uint8_T LostBufBreakLockCond[11];    /* '<S460>/BufRelease1' */
  uint8_T PLAN_ALC_LaneChangeReq;      /* '<S189>/Chart1' */
  uint8_T PLAN_ALC_LaneChange;         /* '<S189>/ALCHMISM' */
  uint8_T PLAN_ALC_LaneChangeIncSetSpdReq;/* '<S182>/ALCHMISM' */
  uint8_T PLAN_ALC_sts;                /* '<S4>/ALC_DECS' */
  uint8_T ALC_LampReq;                 /* '<S4>/ALC_DECS' */
  uint8_T PLAN_ALC_LcReason;           /* '<S4>/ALC_DECS' */
  uint8_T LcFinishCntLe;               /* '<S4>/ALC_DECS' */
  uint8_T LcFinishCntRi;               /* '<S4>/ALC_DECS' */
  uint8_T LcCancelCntLe;               /* '<S4>/ALC_DECS' */
  uint8_T LcCancelCntRi;               /* '<S4>/ALC_DECS' */
  uint8_T LcDelayCnt;                  /* '<S4>/ALC_DECS' */
  uint8_T LongCtrl_DrivingMode;        /* '<S9>/Signal Copy' */
  uint8_T LongCtrl_laneChangeIncSetSpdReq;/* '<S12>/Signal Copy' */
  uint8_T UnitDelay1_a1;               /* '<S12>/Unit Delay1' */
  uint8_T LongCtrl_IC_EHRV2_CurMatrixSize;/* '<S108>/Signal Conversion5' */
  uint8_T Add_oa;                      /* '<S109>/Add' */
  uint8_T TappedDelay2_d[2];           /* '<S20>/Tapped Delay2' */
  uint8_T TappedDelay_o[2];            /* '<S22>/Tapped Delay' */
  uint8_T LongCtrl_L1_KeepLineSts;     /* '<S111>/Signal Conversion6' */
  uint8_T LongCtrl_R1_KeepLineSts;     /* '<S111>/Signal Conversion7' */
  uint8_T DriveOffConditonFulfilled;   /* '<S155>/Switch' */
  uint8_T LongCtrl_TgtObjBarDisp;      /* '<S154>/Signal Conversion' */
  uint8_T SignalConversion1;           /* '<S154>/Signal Conversion1' */
  uint8_T SignalConversion2;           /* '<S154>/Signal Conversion2' */
  uint8_T ACCModeSts;                  /* '<S20>/MATLAB Function' */
  uint8_T DriveOffConditonFulfilled_j; /* '<S155>/DriveOff_Judge' */
  uint8_T ImpAsg_InsertedFor_Signal_ACC_TgtObjBarDisp_at_inport_0[3];/* '<S169>/ACC_DisplayBar' */
  uint8_T velOffRampLimit;             /* '<S18>/ORD' */
  uint8_T EndVel;                      /* '<S18>/ORD' */
  uint8_T EndVel_b;                    /* '<S18>/ORD' */
  uint8_T TmpSignalConversionAtSFunctionInport5[2];/* '<S111>/LineFilter' */
  uint8_T KeepLineSts[2];              /* '<S111>/KeepLane' */
  uint8_T IC_state;                    /* '<S104>/MATLAB Function' */
  uint8_T TappedDelay_i[2];            /* '<S48>/Tapped Delay' */
  uint8_T TappedDelay_a[2];            /* '<S49>/Tapped Delay' */
  uint8_T TappedDelay1_o[2];           /* '<S49>/Tapped Delay1' */
  uint8_T TappedDelay2_j[2];           /* '<S49>/Tapped Delay2' */
  uint8_T TappedDelay_e[2];            /* '<S58>/Tapped Delay' */
  uint8_T TappedDelay1_e[2];           /* '<S58>/Tapped Delay1' */
  uint8_T TappedDelay_ia[2];           /* '<S55>/Tapped Delay' */
  uint8_T UnitDelay1_kk;               /* '<S75>/Unit Delay1' */
  uint8_T LongCtrl_Follow_Counter;     /* '<S50>/Output' */
  uint8_T FixPtSum1_i;                 /* '<S65>/FixPt Sum1' */
  uint8_T FixPtSwitch_b;               /* '<S66>/FixPt Switch' */
  uint8_T Cnt_l;                       /* '<S12>/MATLAB Function' */
  uint8_T velPlanEffect;               /* '<S11>/Arbitrate' */
  int8_T Switch4_i;                    /* '<S182>/Switch4' */
  int8_T Switch3_a;                    /* '<S182>/Switch3' */
  boolean_T Compare_o[11];             /* '<S490>/Compare' */
  boolean_T Compare_fg[11];            /* '<S491>/Compare' */
  boolean_T Compare_h[11];             /* '<S494>/Compare' */
  boolean_T Compare_b[11];             /* '<S492>/Compare' */
  boolean_T Compare_hv[11];            /* '<S493>/Compare' */
  boolean_T LogicalOperator1[11];      /* '<S488>/Logical Operator1' */
  boolean_T LogicalOperator[11];       /* '<S488>/Logical Operator' */
  boolean_T AND[11];                   /* '<S488>/AND' */
  boolean_T Compare_op;                /* '<S480>/Compare' */
  boolean_T Compare_d;                 /* '<S457>/Compare' */
  boolean_T Compare_fa;                /* '<S458>/Compare' */
  boolean_T Compare_i;                 /* '<S459>/Compare' */
  boolean_T OR2;                       /* '<S190>/OR2' */
  boolean_T NOT4;                      /* '<S186>/NOT4' */
  boolean_T NOT5;                      /* '<S186>/NOT5' */
  boolean_T PLAN_ALC_LcMrcRi_NoTurnLamp;/* '<S186>/AND6' */
  boolean_T PLAN_ALC_LcMrcRi_dyDiff;   /* '<S275>/Compare' */
  boolean_T PLAN_ALC_LcMrcRi_IPVehSpd; /* '<S186>/Relational Operator3' */
  boolean_T RelationalOperator4;       /* '<S186>/Relational Operator4' */
  boolean_T PLAN_ALC_LcMrcRi_DPC;      /* '<S277>/Compare' */
  boolean_T PLAN_ALC_LcMrcRi_LineValid;/* '<S274>/Compare' */
  boolean_T Compare_of;                /* '<S276>/Compare' */
  boolean_T LcMrcRi;                   /* '<S186>/AND4' */
  boolean_T Compare_l;                 /* '<S238>/Compare' */
  boolean_T PLAN_ALC_LcDrvLe_NoLcCancelFlag;/* '<S185>/NOT' */
  boolean_T Compare_p;                 /* '<S246>/Compare' */
  boolean_T PLAN_ALC_LcDrvLe_NoLcFinishFlag;/* '<S185>/NOT1' */
  boolean_T PLAN_ALC_LcDrvLe_dyDiff;   /* '<S255>/Compare' */
  boolean_T Compare_m;                 /* '<S271>/Compare' */
  boolean_T Compare_ou;                /* '<S272>/Compare' */
  boolean_T Compare_mt;                /* '<S273>/Compare' */
  boolean_T RelationalOperator;        /* '<S185>/Relational Operator' */
  boolean_T PLAN_ALC_LcDrvLe_DPC;      /* '<S244>/Compare' */
  boolean_T PLAN_ALC_LcDrvLe_LineValid;/* '<S259>/Compare' */
  boolean_T Compare_j;                 /* '<S257>/Compare' */
  boolean_T Compare_pj;                /* '<S253>/Compare' */
  boolean_T Compare_dh;                /* '<S250>/Compare' */
  boolean_T Compare_i4;                /* '<S251>/Compare' */
  boolean_T AND11;                     /* '<S185>/AND11' */
  boolean_T LciValid;                  /* '<S185>/Relational Operator3' */
  boolean_T Compare_a;                 /* '<S232>/Compare' */
  boolean_T Compare_ie;                /* '<S233>/Compare' */
  boolean_T Compare_fe;                /* '<S243>/Compare' */
  boolean_T Compare_fv;                /* '<S252>/Compare' */
  boolean_T PLAN_ALC_LcDrvLe_LciDrv;   /* '<S185>/AND3' */
  boolean_T LcDrvLe;                   /* '<S185>/AND4' */
  boolean_T Compare_jx;                /* '<S236>/Compare' */
  boolean_T PLAN_ALC_LcDrvRi_NoLcCancelFlag;/* '<S185>/NOT4' */
  boolean_T Compare_k;                 /* '<S237>/Compare' */
  boolean_T PLAN_ALC_LcDrvRi_NoLcFinishFlag;/* '<S185>/NOT5' */
  boolean_T PLAN_ALC_LcDrvRi_dyDiff;   /* '<S254>/Compare' */
  boolean_T RelationalOperator1;       /* '<S185>/Relational Operator1' */
  boolean_T PLAN_ALC_LcDrvRi_DPC;      /* '<S245>/Compare' */
  boolean_T PLAN_ALC_LcDrvRi_LineValid;/* '<S260>/Compare' */
  boolean_T Compare_ib;                /* '<S249>/Compare' */
  boolean_T Compare_fw;                /* '<S248>/Compare' */
  boolean_T Compare_ms;                /* '<S240>/Compare' */
  boolean_T Compare_j1;                /* '<S242>/Compare' */
  boolean_T AND14;                     /* '<S185>/AND14' */
  boolean_T LciValid_j;                /* '<S185>/Relational Operator2' */
  boolean_T Compare_bx;                /* '<S241>/Compare' */
  boolean_T Compare_j2;                /* '<S258>/Compare' */
  boolean_T Compare_ji;                /* '<S247>/Compare' */
  boolean_T Compare_e;                 /* '<S235>/Compare' */
  boolean_T PLAN_ALC_LcDrvRi_LciDrv;   /* '<S185>/AND10' */
  boolean_T LcDrvRi;                   /* '<S185>/AND6' */
  boolean_T NOT2;                      /* '<S187>/NOT2' */
  boolean_T NOT3;                      /* '<S187>/NOT3' */
  boolean_T PLAN_ALC_LcNohLe_NoTurnLamp;/* '<S187>/AND' */
  boolean_T PLAN_ALC_LcNohLe_dyDiff;   /* '<S297>/Compare' */
  boolean_T PLAN_ALC_LcNohLe_IPVehSpd; /* '<S187>/Relational Operator2' */
  boolean_T RelationalOperator_a;      /* '<S187>/Relational Operator' */
  boolean_T PLAN_ALC_LcNohLe_DPC;      /* '<S294>/Compare' */
  boolean_T PLAN_ALC_LcNohLe_LineValid;/* '<S299>/Compare' */
  boolean_T Compare_g;                 /* '<S289>/Compare' */
  boolean_T Compare_gx;                /* '<S296>/Compare' */
  boolean_T Compare_g2;                /* '<S288>/Compare' */
  boolean_T PLAN_ALC_LcNohLe_LciNoh;   /* '<S187>/AND1' */
  boolean_T LcNohLe;                   /* '<S187>/AND3' */
  boolean_T NOT4_k;                    /* '<S187>/NOT4' */
  boolean_T NOT5_g;                    /* '<S187>/NOT5' */
  boolean_T PLAN_ALC_LcNohRi_NoTurnLamp;/* '<S187>/AND6' */
  boolean_T PLAN_ALC_LcNohRi_dyDiff;   /* '<S291>/Compare' */
  boolean_T PLAN_ALC_LcNohRi_IPVehSpd; /* '<S187>/Relational Operator3' */
  boolean_T RelationalOperator1_o;     /* '<S187>/Relational Operator1' */
  boolean_T PLAN_ALC_LcNohRi_DPC;      /* '<S293>/Compare' */
  boolean_T UnitDelay2_b;              /* '<S304>/Unit Delay2' */
  boolean_T Compare_mk;                /* '<S300>/Compare' */
  boolean_T PLAN_ALC_LcNohRi_LineValid;/* '<S295>/Compare' */
  boolean_T Compare_iv;                /* '<S298>/Compare' */
  boolean_T Compare_l1;                /* '<S292>/Compare' */
  boolean_T Compare_n;                 /* '<S290>/Compare' */
  boolean_T PLAN_ALC_LcNohRi_LciNoh;   /* '<S187>/AND2' */
  boolean_T LcNohRi;                   /* '<S187>/AND4' */
  boolean_T PLAN_ALC_LcOverTkLe_LaneAvailable;/* '<S188>/NOT' */
  boolean_T Compare_nj;                /* '<S328>/Compare' */
  boolean_T Compare_jk;                /* '<S311>/Compare' */
  boolean_T PLAN_ALC_LcOverTkLe_PilotLaneAvailable;/* '<S188>/OR2' */
  boolean_T NOR;                       /* '<S188>/NOR' */
  boolean_T NOT2_e;                    /* '<S188>/NOT2' */
  boolean_T PLAN_ALC_LcOverTkLe_NoTurnLampReq;/* '<S188>/AND1' */
  boolean_T Compare_iw;                /* '<S315>/Compare' */
  boolean_T Compare_bm;                /* '<S317>/Compare' */
  boolean_T PLAN_ALC_LcOverTkLe_NoLcFinishFlag;/* '<S188>/OR' */
  boolean_T PLAN_ALC_LcOverTkLe_dyDiff;/* '<S326>/Compare' */
  boolean_T Compare_ds;                /* '<S316>/Compare' */
  boolean_T Compare_lo;                /* '<S314>/Compare' */
  boolean_T PLAN_ALC_LcOverTkLe_IPVehSpd;/* '<S188>/AND7' */
  boolean_T Compare_pi;                /* '<S350>/Compare' */
  boolean_T Compare_pa;                /* '<S351>/Compare' */
  boolean_T Compare_do;                /* '<S352>/Compare' */
  boolean_T RelationalOperator3;       /* '<S188>/Relational Operator3' */
  boolean_T PLAN_ALC_LcOverTkLe_DPC;   /* '<S321>/Compare' */
  boolean_T Compare_ge;                /* '<S325>/Compare' */
  boolean_T Compare_br;                /* '<S329>/Compare' */
  boolean_T Compare_pib;               /* '<S318>/Compare' */
  boolean_T Compare_f2;                /* '<S320>/Compare' */
  boolean_T AND8;                      /* '<S188>/AND8' */
  boolean_T NOT6;                      /* '<S188>/NOT6' */
  boolean_T UnitDelay2_e;              /* '<S342>/Unit Delay2' */
  boolean_T Compare_pw;                /* '<S330>/Compare' */
  boolean_T PLAN_ALC_LcOverTkLe_LineValid;/* '<S308>/Compare' */
  boolean_T OR2_e;                     /* '<S337>/OR2' */
  boolean_T Compare_jr;                /* '<S346>/Compare' */
  boolean_T AND_p;                     /* '<S337>/AND' */
  boolean_T Compare_p1;                /* '<S345>/Compare' */
  boolean_T Compare_jrr;               /* '<S348>/Compare' */
  boolean_T OR;                        /* '<S337>/OR' */
  boolean_T AND1;                      /* '<S337>/AND1' */
  boolean_T OR1;                       /* '<S337>/OR1' */
  boolean_T Compare_h2;                /* '<S347>/Compare' */
  boolean_T PLAN_ALC_LcOverTkLe_NotInDrvCancelArea;/* '<S188>/NOT3' */
  boolean_T Compare_bc;                /* '<S354>/Compare' */
  boolean_T UnitDelay_n;               /* '<S340>/Unit Delay' */
  boolean_T Compare_fz;                /* '<S353>/Compare' */
  boolean_T LeftCutOut;                /* '<S340>/Relational Operator2' */
  boolean_T RelationalOperator_c;      /* '<S340>/Relational Operator' */
  boolean_T OR2_b;                     /* '<S340>/OR2' */
  boolean_T RightCutOut;               /* '<S340>/Relational Operator3' */
  boolean_T RelationalOperator1_h;     /* '<S340>/Relational Operator1' */
  boolean_T OR3;                       /* '<S340>/OR3' */
  boolean_T PLAN_ALC_LcOverTkLe_P0NotCutOut;/* '<S188>/NOT4' */
  boolean_T Compare_bz;                /* '<S362>/Compare' */
  boolean_T FixPtRelationalOperator;   /* '<S371>/FixPt Relational Operator' */
  boolean_T NOT;                       /* '<S341>/NOT' */
  boolean_T Compare_oq;                /* '<S365>/Compare' */
  boolean_T AND10;                     /* '<S341>/AND10' */
  boolean_T Compare_er;                /* '<S361>/Compare' */
  boolean_T RelationalOperator_aq;     /* '<S341>/Relational Operator' */
  boolean_T Compare_nh;                /* '<S363>/Compare' */
  boolean_T PLAN_ALC_LcOverTkLe_OverTkTrigger;/* '<S341>/AND' */
  boolean_T RelationalOperator2;       /* '<S188>/Relational Operator2' */
  boolean_T PLAN_ALC_LcOverTkLe_LineCurvatureValid;/* '<S333>/Compare' */
  boolean_T PLAN_ALC_LcOverTkLe;       /* '<S188>/AND3' */
  boolean_T PLAN_ALC_LcOverTkRi_LaneAvailable;/* '<S312>/Compare' */
  boolean_T Compare_ek;                /* '<S313>/Compare' */
  boolean_T Compare_nu;                /* '<S309>/Compare' */
  boolean_T PLAN_ALC_LcOverTkRi_PilotLaneAvailable;/* '<S188>/OR3' */
  boolean_T PLAN_ALC_LcOverTkRi_NoTurnLampReq;/* '<S188>/AND6' */
  boolean_T PLAN_ALC_LcOverTkRi_NoLcFinishFlag;/* '<S188>/OR1' */
  boolean_T PLAN_ALC_LcOverTkRi_dyDiff;/* '<S310>/Compare' */
  boolean_T Compare_jz;                /* '<S324>/Compare' */
  boolean_T Compare_bl;                /* '<S307>/Compare' */
  boolean_T PLAN_ALC_LcOverTkRi_IPVehSpd;/* '<S188>/AND' */
  boolean_T RelationalOperator4_e;     /* '<S188>/Relational Operator4' */
  boolean_T PLAN_ALC_LcOverTkRi_DPC;   /* '<S322>/Compare' */
  boolean_T UnitDelay2_o;              /* '<S343>/Unit Delay2' */
  boolean_T Compare_mr;                /* '<S332>/Compare' */
  boolean_T PLAN_ALC_LcOverTkRi_LineValid;/* '<S323>/Compare' */
  boolean_T PLAN_ALC_LcOverTkRi_NotInDrvCancelArea;/* '<S188>/NOT1' */
  boolean_T PLAN_ALC_LcOverTkRi_P0NotCutOut;/* '<S188>/NOT5' */
  boolean_T RelationalOperator1_l;     /* '<S341>/Relational Operator1' */
  boolean_T Compare_ns;                /* '<S364>/Compare' */
  boolean_T PLAN_ALC_LcOverTkRi_OverTkTrigger;/* '<S341>/AND1' */
  boolean_T PLAN_ALC_LcOverTkRi_LineCurvatureValid;/* '<S331>/Compare' */
  boolean_T PLAN_ALC_LcOverTkRi;       /* '<S188>/AND4' */
  boolean_T RelationalOperator2_i;     /* '<S225>/Relational Operator2' */
  boolean_T RelationalOperator3_j;     /* '<S225>/Relational Operator3' */
  boolean_T OutTarPath;                /* '<S225>/AND' */
  boolean_T Compare_n1;                /* '<S222>/Compare' */
  boolean_T PLAN_ALC_LcCancelLe_DrvCmpl;/* '<S184>/AND9' */
  boolean_T Uk1_ch;                    /* '<S224>/Delay Input1' */
  boolean_T FixPtRelationalOperator_c; /* '<S224>/FixPt Relational Operator' */
  boolean_T PLAN_ALC_LcCancelLe_Drv;   /* '<S184>/AND10' */
  boolean_T RelationalOperator_cn;     /* '<S225>/Relational Operator' */
  boolean_T RelationalOperator1_lf;    /* '<S225>/Relational Operator1' */
  boolean_T OutTarPath_m;              /* '<S225>/AND1' */
  boolean_T Compare_ga;                /* '<S213>/Compare' */
  boolean_T Compare_c;                 /* '<S214>/Compare' */
  boolean_T AND_n;                     /* '<S184>/AND' */
  boolean_T OR_h;                      /* '<S184>/OR' */
  boolean_T PLAN_ALC_LcCancelLe_DPC;   /* '<S184>/AND20' */
  boolean_T NOT4_o;                    /* '<S184>/NOT4' */
  boolean_T PLAN_ALC_LcCancelLe_LineValid;/* '<S184>/AND6' */
  boolean_T PLAN_ALC_LcCancelLe_Oncoming;/* '<S184>/AND4' */
  boolean_T Compare_fh;                /* '<S219>/Compare' */
  boolean_T Compare_pjq;               /* '<S212>/Compare' */
  boolean_T Compare_ni;                /* '<S359>/Compare' */
  boolean_T Compare_mre;               /* '<S357>/Compare' */
  boolean_T PLAN_ALC_LcCancelLe_CancelOverTk;/* '<S184>/AND8' */
  boolean_T NOT2_h;                    /* '<S184>/NOT2' */
  boolean_T PLAN_ALC_LcCancelLe_LcAvailable;/* '<S184>/AND15' */
  boolean_T Compare_gen;               /* '<S211>/Compare' */
  boolean_T UnitDelay_iz;              /* '<S184>/Unit Delay' */
  boolean_T Compare_l3;                /* '<S210>/Compare' */
  boolean_T test;                      /* '<S184>/AND19' */
  boolean_T LcCancelLe;                /* '<S184>/OR1' */
  boolean_T Compare_hc;                /* '<S221>/Compare' */
  boolean_T PLAN_ALC_LcCancelRi_DrvCmpl;/* '<S184>/AND1' */
  boolean_T Uk1_n;                     /* '<S223>/Delay Input1' */
  boolean_T FixPtRelationalOperator_i; /* '<S223>/FixPt Relational Operator' */
  boolean_T PLAN_ALC_LcCancelRi_Drv;   /* '<S184>/AND2' */
  boolean_T Compare_ok;                /* '<S215>/Compare' */
  boolean_T Compare_gn;                /* '<S216>/Compare' */
  boolean_T AND12;                     /* '<S184>/AND12' */
  boolean_T OR3_j;                     /* '<S184>/OR3' */
  boolean_T PLAN_ALC_LcCancelRi_DPC;   /* '<S184>/AND3' */
  boolean_T NOT1;                      /* '<S184>/NOT1' */
  boolean_T PLAN_ALC_LcCancelRi_LineValid;/* '<S184>/AND5' */
  boolean_T PLAN_ALC_LcCancelRi_Oncoming;/* '<S184>/AND11' */
  boolean_T Compare_ow;                /* '<S360>/Compare' */
  boolean_T Compare_gr;                /* '<S358>/Compare' */
  boolean_T Compare_ew;                /* '<S220>/Compare' */
  boolean_T PLAN_ALC_LcCancelRi_CancelOverTk;/* '<S184>/AND7' */
  boolean_T NOT3_e;                    /* '<S184>/NOT3' */
  boolean_T PLAN_ALC_LcCancelRi_LcAvailable;/* '<S184>/AND17' */
  boolean_T Compare_kh;                /* '<S218>/Compare' */
  boolean_T UnitDelay1_n;              /* '<S184>/Unit Delay1' */
  boolean_T Compare_dm;                /* '<S217>/Compare' */
  boolean_T test_b;                    /* '<S184>/AND21' */
  boolean_T LcCancelRi;                /* '<S184>/OR2' */
  boolean_T RelationalOperator1_p[5];  /* '<S184>/Relational Operator1' */
  boolean_T PLAN_ALC_LcFinish;         /* '<S184>/Logical Operator1' */
  boolean_T LcFinishLe;                /* '<S184>/AND13' */
  boolean_T LcFinishRi;                /* '<S184>/AND14' */
  boolean_T Compare_l0;                /* '<S198>/Compare' */
  boolean_T Compare_p0;                /* '<S193>/Compare' */
  boolean_T AND7;                      /* '<S182>/AND7' */
  boolean_T AND10_e;                   /* '<S188>/AND10' */
  boolean_T LcOverTkLeReady;           /* '<S188>/AND2' */
  boolean_T Compare_ct;                /* '<S202>/Compare' */
  boolean_T AND4;                      /* '<S182>/AND4' */
  boolean_T OR1_g;                     /* '<S182>/OR1' */
  boolean_T Compare_mh;                /* '<S192>/Compare' */
  boolean_T AND1_o;                    /* '<S182>/AND1' */
  boolean_T AND9;                      /* '<S188>/AND9' */
  boolean_T LcOverTkRiReady;           /* '<S188>/AND5' */
  boolean_T Compare_kv;                /* '<S203>/Compare' */
  boolean_T AND6;                      /* '<S182>/AND6' */
  boolean_T OR3_f;                     /* '<S182>/OR3' */
  boolean_T LongCtrl_ALC_laneChangeEnable;/* '<S182>/OR' */
  boolean_T Compare_cr;                /* '<S195>/Compare' */
  boolean_T Compare_by;                /* '<S205>/Compare' */
  boolean_T Compare_h0;                /* '<S194>/Compare' */
  boolean_T OR6;                       /* '<S182>/OR6' */
  boolean_T UnitDelay_ob;              /* '<S182>/Unit Delay' */
  boolean_T AND5;                      /* '<S182>/AND5' */
  boolean_T Compare_es;                /* '<S196>/Compare' */
  boolean_T Compare_hva;               /* '<S197>/Compare' */
  boolean_T OR2_j;                     /* '<S182>/OR2' */
  boolean_T RelationalOperator_o;      /* '<S182>/Relational Operator' */
  boolean_T OR5;                       /* '<S182>/OR5' */
  boolean_T AND_e;                     /* '<S4>/AND' */
  boolean_T AND1_a;                    /* '<S4>/AND1' */
  boolean_T Compare_bd;                /* '<S384>/Compare' */
  boolean_T NOT_d;                     /* '<S189>/NOT' */
  boolean_T UnitDelay2_oc;             /* '<S421>/Unit Delay2' */
  boolean_T Compare_im;                /* '<S411>/Compare' */
  boolean_T Compare_j1z;               /* '<S406>/Compare' */
  boolean_T AND_j;                     /* '<S189>/AND' */
  boolean_T NOT1_o;                    /* '<S189>/NOT1' */
  boolean_T UnitDelay2_n;              /* '<S420>/Unit Delay2' */
  boolean_T Compare_du;                /* '<S407>/Compare' */
  boolean_T Compare_ewp;               /* '<S382>/Compare' */
  boolean_T AND1_i;                    /* '<S189>/AND1' */
  boolean_T OR_a;                      /* '<S189>/OR' */
  boolean_T Compare_k0;                /* '<S408>/Compare' */
  boolean_T Compare_nss;               /* '<S410>/Compare' */
  boolean_T OR1_k;                     /* '<S189>/OR1' */
  boolean_T Compare_lr;                /* '<S387>/Compare' */
  boolean_T AND7_d;                    /* '<S189>/AND7' */
  boolean_T AND9_i;                    /* '<S185>/AND9' */
  boolean_T NOT6_b;                    /* '<S185>/NOT6' */
  boolean_T Compare_i3;                /* '<S239>/Compare' */
  boolean_T AND2;                      /* '<S185>/AND2' */
  boolean_T AND7_m;                    /* '<S185>/AND7' */
  boolean_T NOT2_eg;                   /* '<S185>/NOT2' */
  boolean_T Compare_pv;                /* '<S234>/Compare' */
  boolean_T AND1_o2;                   /* '<S185>/AND1' */
  boolean_T LciDrvTimeOut;             /* '<S185>/OR' */
  boolean_T AND8_m;                    /* '<S189>/AND8' */
  boolean_T AND8_b;                    /* '<S185>/AND8' */
  boolean_T NOT7;                      /* '<S185>/NOT7' */
  boolean_T AND5_b;                    /* '<S185>/AND5' */
  boolean_T AND13;                     /* '<S185>/AND13' */
  boolean_T NOT3_eu;                   /* '<S185>/NOT3' */
  boolean_T AND12_n;                   /* '<S185>/AND12' */
  boolean_T LciDrvSpdLow;              /* '<S185>/OR1' */
  boolean_T AND9_h;                    /* '<S189>/AND9' */
  boolean_T Compare_bj;                /* '<S399>/Compare' */
  boolean_T Compare_mm;                /* '<S401>/Compare' */
  boolean_T AND13_i;                   /* '<S189>/AND13' */
  boolean_T Compare_msh;               /* '<S402>/Compare' */
  boolean_T AND11_j;                   /* '<S189>/AND11' */
  boolean_T Compare_mf;                /* '<S400>/Compare' */
  boolean_T AND10_g;                   /* '<S189>/AND10' */
  boolean_T Compare_gp;                /* '<S403>/Compare' */
  boolean_T AND12_l;                   /* '<S189>/AND12' */
  boolean_T AND16;                     /* '<S185>/AND16' */
  boolean_T NOT8;                      /* '<S185>/NOT8' */
  boolean_T AND15;                     /* '<S185>/AND15' */
  boolean_T AND18;                     /* '<S185>/AND18' */
  boolean_T NOT9;                      /* '<S185>/NOT9' */
  boolean_T AND17;                     /* '<S185>/AND17' */
  boolean_T LciDrvSpdHigh;             /* '<S185>/OR2' */
  boolean_T AND16_e;                   /* '<S189>/AND16' */
  boolean_T Compare_jl;                /* '<S388>/Compare' */
  boolean_T Compare_hy;                /* '<S397>/Compare' */
  boolean_T Compare_dc;                /* '<S398>/Compare' */
  boolean_T OR8;                       /* '<S189>/OR8' */
  boolean_T AND6_a;                    /* '<S189>/AND6' */
  boolean_T Compare_lb;                /* '<S385>/Compare' */
  boolean_T Compare_g4;                /* '<S392>/Compare' */
  boolean_T Compare_crd;               /* '<S395>/Compare' */
  boolean_T AND20;                     /* '<S189>/AND20' */
  boolean_T OR6_h;                     /* '<S189>/OR6' */
  boolean_T Compare_h0m;               /* '<S405>/Compare' */
  boolean_T AND14_d;                   /* '<S189>/AND14' */
  boolean_T OR3_m;                     /* '<S189>/OR3' */
  boolean_T AND19;                     /* '<S189>/AND19' */
  boolean_T AND17_j;                   /* '<S189>/AND17' */
  boolean_T Compare_bcn;               /* '<S391>/Compare' */
  boolean_T Compare_mo;                /* '<S394>/Compare' */
  boolean_T Compare_n1f;               /* '<S396>/Compare' */
  boolean_T AND21;                     /* '<S189>/AND21' */
  boolean_T OR7;                       /* '<S189>/OR7' */
  boolean_T AND15_g;                   /* '<S189>/AND15' */
  boolean_T OR4;                       /* '<S189>/OR4' */
  boolean_T AND18_d;                   /* '<S189>/AND18' */
  boolean_T Compare_fn;                /* '<S409>/Compare' */
  boolean_T UnitDelay_cc;              /* '<S189>/Unit Delay' */
  boolean_T AND2_d;                    /* '<S189>/AND2' */
  boolean_T Compare_n0;                /* '<S383>/Compare' */
  boolean_T AND3;                      /* '<S189>/AND3' */
  boolean_T Compare_db;                /* '<S389>/Compare' */
  boolean_T Compare_gi;                /* '<S390>/Compare' */
  boolean_T OR2_i;                     /* '<S189>/OR2' */
  boolean_T RelationalOperator_f;      /* '<S189>/Relational Operator' */
  boolean_T OR5_e;                     /* '<S189>/OR5' */
  boolean_T Compare_fx;                /* '<S429>/Compare' */
  boolean_T OR4_i;                     /* '<S415>/OR4' */
  boolean_T UnitDelay2_ib;             /* '<S431>/Unit Delay2' */
  boolean_T NOT2_g;                    /* '<S415>/NOT2' */
  boolean_T Compare_k2;                /* '<S428>/Compare' */
  boolean_T UnitDelay2_f;              /* '<S432>/Unit Delay2' */
  boolean_T NOT1_ov;                   /* '<S415>/NOT1' */
  boolean_T Compare_a0;                /* '<S430>/Compare' */
  boolean_T LcNotSatisfied;            /* '<S415>/OR2' */
  boolean_T AND4_g;                    /* '<S415>/AND4' */
  boolean_T Compare_bd4;               /* '<S438>/Compare' */
  boolean_T OR4_b;                     /* '<S416>/OR4' */
  boolean_T UnitDelay2_p;              /* '<S440>/Unit Delay2' */
  boolean_T NOT2_l;                    /* '<S416>/NOT2' */
  boolean_T Compare_ja;                /* '<S437>/Compare' */
  boolean_T UnitDelay2_iq;             /* '<S441>/Unit Delay2' */
  boolean_T NOT1_g;                    /* '<S416>/NOT1' */
  boolean_T Compare_oe;                /* '<S439>/Compare' */
  boolean_T LcNotSatisfied_n;          /* '<S416>/OR2' */
  boolean_T AND4_l;                    /* '<S416>/AND4' */
  boolean_T Compare_pm;                /* '<S446>/Compare' */
  boolean_T LcNotSatisfied_a;          /* '<S417>/OR4' */
  boolean_T AND4_k;                    /* '<S417>/AND4' */
  boolean_T Compare_io;                /* '<S447>/Compare' */
  boolean_T LcNotSatisfied_d;          /* '<S418>/OR4' */
  boolean_T AND4_gc;                   /* '<S418>/AND4' */
  boolean_T Compare_my;                /* '<S449>/Compare' */
  boolean_T OR4_e;                     /* '<S419>/OR4' */
  boolean_T UnitDelay2_pf;             /* '<S450>/Unit Delay2' */
  boolean_T NOT2_hh;                   /* '<S419>/NOT2' */
  boolean_T Compare_oa;                /* '<S448>/Compare' */
  boolean_T LcNotSatisfied_m;          /* '<S419>/OR2' */
  boolean_T AND4_ls;                   /* '<S419>/AND4' */
  boolean_T Compare_ev;                /* '<S381>/Compare' */
  boolean_T Compare_mq;                /* '<S386>/Compare' */
  boolean_T AND4_gp;                   /* '<S189>/AND4' */
  boolean_T Compare_cg;                /* '<S404>/Compare' */
  boolean_T AND5_h;                    /* '<S189>/AND5' */
  boolean_T OR2_jb;                    /* '<S414>/OR2' */
  boolean_T AND4_p;                    /* '<S414>/AND4' */
  boolean_T UnitDelay_h0;              /* '<S425>/Unit Delay' */
  boolean_T Compare_d2;                /* '<S423>/Compare' */
  boolean_T Compare_mj;                /* '<S422>/Compare' */
  boolean_T AND6_p;                    /* '<S414>/AND6' */
  boolean_T UnitDelay2_mp;             /* '<S425>/Unit Delay2' */
  boolean_T UnitDelay3_d;              /* '<S425>/Unit Delay3' */
  boolean_T OR4_i5;                    /* '<S414>/OR4' */
  boolean_T AND5_k;                    /* '<S414>/AND5' */
  boolean_T UnitDelay_kq;              /* '<S424>/Unit Delay' */
  boolean_T UnitDelay2_le;             /* '<S424>/Unit Delay2' */
  boolean_T UnitDelay3_o5;             /* '<S424>/Unit Delay3' */
  boolean_T Compare_pe;                /* '<S206>/Compare' */
  boolean_T Compare_e4;                /* '<S207>/Compare' */
  boolean_T Compare_o0;                /* '<S201>/Compare' */
  boolean_T LcNohRiMerge;              /* '<S187>/AND7' */
  boolean_T Compare_lt;                /* '<S199>/Compare' */
  boolean_T AND2_b;                    /* '<S182>/AND2' */
  boolean_T LcNohLeMerge;              /* '<S187>/AND5' */
  boolean_T Compare_ip;                /* '<S200>/Compare' */
  boolean_T AND3_o;                    /* '<S182>/AND3' */
  boolean_T Compare_kq;                /* '<S204>/Compare' */
  boolean_T Compare_nx;                /* '<S256>/Compare' */
  boolean_T AND_a;                     /* '<S185>/AND' */
  boolean_T NOT2_d;                    /* '<S186>/NOT2' */
  boolean_T NOT3_k;                    /* '<S186>/NOT3' */
  boolean_T PLAN_ALC_LcMrcLe_NoTurnLamp;/* '<S186>/AND' */
  boolean_T Compare_nd;                /* '<S280>/Compare' */
  boolean_T PLAN_ALC_LcMrcLe_IPVehSpd; /* '<S186>/Relational Operator2' */
  boolean_T UnitDelay2_br;             /* '<S285>/Unit Delay2' */
  boolean_T RelationalOperator_g;      /* '<S186>/Relational Operator' */
  boolean_T Compare_jh;                /* '<S279>/Compare' */
  boolean_T Compare_ml;                /* '<S282>/Compare' */
  boolean_T LcNohLe_f;                 /* '<S186>/AND3' */
  boolean_T RelationalOperator_ak;     /* '<S349>/Relational Operator' */
  boolean_T JumpHappened_b;            /* '<S349>/AND' */
  boolean_T Compare_nr;                /* '<S393>/Compare' */
  boolean_T Compare_g3;                /* '<S468>/Compare' */
  boolean_T Compare_lp;                /* '<S469>/Compare' */
  boolean_T Compare_nhh;               /* '<S470>/Compare' */
  boolean_T OR2_k;                     /* '<S460>/OR2' */
  boolean_T OR3_l;                     /* '<S460>/OR3' */
  boolean_T Compare_h0q;               /* '<S465>/Compare' */
  boolean_T Compare_jy;                /* '<S466>/Compare' */
  boolean_T Compare_j4;                /* '<S467>/Compare' */
  boolean_T OR_d;                      /* '<S460>/OR' */
  boolean_T OR1_i;                     /* '<S460>/OR1' */
  boolean_T OR4_o;                     /* '<S460>/OR4' */
  boolean_T PLAN_ALC_LcMrcRi_LciMrc;   /* '<S281>/Compare' */
  boolean_T Oncoming_flag;           /* '<S462>/DangerFactorMatrixCalc_Left2' */
  boolean_T NearestObjValid;         /* '<S462>/DangerFactorMatrixCalc_Left2' */
  boolean_T PLAN_DPC_HWA_RearObjValid;
                                     /* '<S462>/DangerFactorMatrixCalc_Left2' */
  boolean_T PLAN_DPC_HWA_OncomingFlag_Ri;
                                     /* '<S462>/DangerFactorMatrixCalc_Left1' */
  boolean_T PLAN_DPC_HWA_NearestObjValid_R;
                                     /* '<S462>/DangerFactorMatrixCalc_Left1' */
  boolean_T Rear_NearesObjValid;     /* '<S462>/DangerFactorMatrixCalc_Left1' */
  boolean_T PLAN_DPC_HWA_OncomingFlag_Le;
                                      /* '<S462>/DangerFactorMatrixCalc_Left' */
  boolean_T PLAN_DPC_HWA_NearestObjValid_L;
                                      /* '<S462>/DangerFactorMatrixCalc_Left' */
  boolean_T Rear_NearesObjValid_p;    /* '<S462>/DangerFactorMatrixCalc_Left' */
  boolean_T PLAN_DPC_ESS_L_Oncoming_flag;
                                      /* '<S461>/DangerPlaus_Calculate_Radar' */
  boolean_T PLAN_DPC_ESS_R_Oncoming_flag;
                                      /* '<S461>/DangerPlaus_Calculate_Radar' */
  boolean_T NearestObjValid_L;        /* '<S461>/DangerPlaus_Calculate_Radar' */
  boolean_T NearestObjValid_R;        /* '<S461>/DangerPlaus_Calculate_Radar' */
  boolean_T bufferoverflow;            /* '<S460>/Lock' */
  boolean_T Sts;                       /* '<S337>/Chart' */
  boolean_T HoldValue1;                /* '<S185>/SigValueHold3' */
  boolean_T HoldValue2;                /* '<S185>/SigValueHold3' */
  boolean_T PLAN_ALC_LcDrvRi_IPVehSpd; /* '<S185>/SigValueHold3' */
  boolean_T HoldValue4;                /* '<S185>/SigValueHold3' */
  boolean_T HoldValue1_g;              /* '<S185>/SigValueHold1' */
  boolean_T HoldValue2_l;              /* '<S185>/SigValueHold1' */
  boolean_T PLAN_ALC_LcDrvLe_IPVehSpd; /* '<S185>/SigValueHold1' */
  boolean_T HoldValue4_g;              /* '<S185>/SigValueHold1' */
  boolean_T LeLcFinishValid;           /* '<S184>/Chart' */
  boolean_T RiLcFinishValid;           /* '<S184>/Chart' */
  boolean_T LaneInvalidCancelEnable;   /* '<S184>/Chart' */
  boolean_T Compare_it;                /* '<S13>/Compare' */
  boolean_T UnitDelay2_en;             /* '<S39>/Unit Delay2' */
  boolean_T Compare_hu;                /* '<S37>/Compare' */
  boolean_T Compare_mqn;               /* '<S14>/Compare' */
  boolean_T LogicalOperator2;          /* '<S27>/Logical Operator2' */
  boolean_T LowerRelop1;               /* '<S38>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S38>/UpperRelop' */
  boolean_T Compare_fgo;               /* '<S44>/Compare' */
  boolean_T Compare_kqi;               /* '<S45>/Compare' */
  boolean_T Compare_esu;               /* '<S136>/Compare' */
  boolean_T Compare_ge4;               /* '<S138>/Compare' */
  boolean_T LogicalOperator_d;         /* '<S111>/Logical Operator' */
  boolean_T Compare_dq;                /* '<S139>/Compare' */
  boolean_T Compare_gb;                /* '<S137>/Compare' */
  boolean_T LogicalOperator1_o;        /* '<S111>/Logical Operator1' */
  boolean_T FixPtRelationalOperator_ix;/* '<S140>/FixPt Relational Operator' */
  boolean_T UnitDelay42[2];            /* '<S111>/Unit Delay42' */
  boolean_T Compare_az;                /* '<S123>/Compare' */
  boolean_T LogicalOperator2_p;        /* '<S109>/Logical Operator2' */
  boolean_T LogicalOperator3;          /* '<S109>/Logical Operator3' */
  boolean_T Compare_bl3;               /* '<S124>/Compare' */
  boolean_T UnitDelay_bq;              /* '<S9>/Unit Delay' */
  boolean_T FixPtRelationalOperator_o; /* '<S178>/FixPt Relational Operator' */
  boolean_T Compare_jb;                /* '<S15>/Compare' */
  boolean_T Compare_lk;                /* '<S157>/Compare' */
  boolean_T Compare_ity;               /* '<S158>/Compare' */
  boolean_T Compare_cy;                /* '<S159>/Compare' */
  boolean_T Compare_oy;                /* '<S160>/Compare' */
  boolean_T Compare_iq;                /* '<S161>/Compare' */
  boolean_T Compare_oz;                /* '<S162>/Compare' */
  boolean_T Compare_a3;                /* '<S163>/Compare' */
  boolean_T Compare_ku;                /* '<S164>/Compare' */
  boolean_T Compare_dd;                /* '<S165>/Compare' */
  boolean_T BrakePrefer;               /* '<S152>/Logical Operator' */
  boolean_T LongCtrl_BrakePrefer;      /* '<S152>/Logical Operator1' */
  boolean_T Compare_ek0;               /* '<S171>/Compare' */
  boolean_T LongCtrl_DriveOffConditonFulfilled;/* '<S172>/Compare' */
  boolean_T TmpSignalConversionAtACC_DisplayBar1Inport6[3];/* '<S154>/Mux3' */
  boolean_T LongCtrl_tor;              /* '<S156>/TakeOver' */
  boolean_T LongCtrl_DecleToStop;      /* '<S153>/DeceleToStop' */
  boolean_T TmpSignalConversionAtSFunctionInport5_p[2];/* '<S111>/KeepLane' */
  boolean_T LineValid[2];              /* '<S111>/KeepLane' */
  boolean_T LongCtrl_laneChangeEnable; /* '<S47>/Signal Copy' */
  boolean_T Compare_byw;               /* '<S88>/Compare' */
  boolean_T RelationalOperator_i;      /* '<S87>/Relational Operator' */
  boolean_T Compare_jic;               /* '<S89>/Compare' */
  boolean_T Compare_nu0;               /* '<S90>/Compare' */
  boolean_T LongCtrl_quickDecel;       /* '<S87>/Logical Operator' */
  boolean_T Compare_le;                /* '<S95>/Compare' */
  boolean_T Compare_kw;                /* '<S96>/Compare' */
  boolean_T Compare_at;                /* '<S93>/Compare' */
  boolean_T Compare_lr1;               /* '<S94>/Compare' */
  boolean_T LongCtrl_slopeStartupAssist;/* '<S56>/Logical Operator' */
  boolean_T Compare_dj;                /* '<S83>/Compare' */
  boolean_T RelationalOperator_if;     /* '<S75>/Relational Operator' */
  boolean_T LogicalOperator_b;         /* '<S75>/Logical Operator' */
  boolean_T Compare_ozz;               /* '<S77>/Compare' */
  boolean_T RelationalOperator_ie;     /* '<S74>/Relational Operator' */
  boolean_T Compare_hz;                /* '<S80>/Compare' */
  boolean_T Compare_lg;                /* '<S79>/Compare' */
  boolean_T LogicalOperator_c;         /* '<S74>/Logical Operator' */
  boolean_T Compare_od;                /* '<S78>/Compare' */
  boolean_T LongCtrl_standstillOverrideCondition;/* '<S55>/StandstillOverride' */
  boolean_T PlauCheckEnable;           /* '<S55>/PlausibilityCheck' */
  boolean_T LongCtrl_ForceStop;        /* '<S67>/DecelToStopCtrl' */
  boolean_T LongCtrl_accelSupressionEnable;/* '<S47>/AccelSupression' */
  B_MATLABFunction_PubIfDecisionPLAN_MDL_n_T sf_MATLABFunction3_k;/* '<S489>/MATLAB Function3' */
  B_MATLABFunction_PubIfDecisionPLAN_MDL_n_T sf_MATLABFunction2_l;/* '<S489>/MATLAB Function2' */
  B_MATLABFunction_PubIfDecisionPLAN_MDL_n_T sf_MATLABFunction1_n;/* '<S489>/MATLAB Function1' */
  B_MATLABFunction_PubIfDecisionPLAN_MDL_n_T sf_MATLABFunction_g5;/* '<S489>/MATLAB Function' */
  B_Obj_front_PubIfDecisionPLAN_MDL_T Obj_front1;/* '<S462>/Obj_front1' */
  B_Obj_front_PubIfDecisionPLAN_MDL_T Obj_front;/* '<S462>/Obj_front' */
  B_ForIteratorSubsystem2_PubIfDecisionPLAN_MDL_T ForIteratorSubsystem4;/* '<S462>/For Iterator Subsystem4' */
  B_ForIteratorSubsystem2_PubIfDecisionPLAN_MDL_T ForIteratorSubsystem2;/* '<S462>/For Iterator Subsystem2' */
  B_MATLABFunction_PubIfDecisionPLAN_MDL_a_T sf_MATLABFunction2_e;/* '<S471>/MATLAB Function2' */
  B_MATLABFunction_PubIfDecisionPLAN_MDL_a_T sf_MATLABFunction1;/* '<S471>/MATLAB Function1' */
  B_MATLABFunction_PubIfDecisionPLAN_MDL_a_T sf_MATLABFunction_f;/* '<S471>/MATLAB Function' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_oj;/* '<S421>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_e;/* '<S420>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_j;/* '<S450>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_di;/* '<S441>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_d;/* '<S440>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_gh;/* '<S432>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_n;/* '<S431>/If Action Subsystem' */
  B_MATLABFunction_PubIfDecisionPLAN_MDL_T sf_MATLABFunction_n;/* '<S425>/MATLAB Function' */
  B_MATLABFunction_PubIfDecisionPLAN_MDL_T sf_MATLABFunction_g;/* '<S424>/MATLAB Function' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_g;/* '<S343>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_oz;/* '<S342>/If Action Subsystem' */
  B_SigHold1_PubIfDecisionPLAN_MDL_T sf_SigHold2;/* '<S341>/SigHold2' */
  B_SigHold1_PubIfDecisionPLAN_MDL_T sf_SigHold1;/* '<S341>/SigHold1' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_o;/* '<S304>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem;/* '<S285>/If Action Subsystem' */
  B_CoreSubsys_PubIfDecisionPLAN_MDL_o5_T CoreSubsys_es[3];/* '<S154>/ACC_DisplayBar1' */
  B_CoreSubsys_PubIfDecisionPLAN_MDL_o_T CoreSubsys_e[2];/* '<S125>/For Each Subsystem' */
  B_CoreSubsys_PubIfDecisionPLAN_MDL_T CoreSubsys[10];/* '<S108>/LP' */
  B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T IfActionSubsystem_m;/* '<S39>/If Action Subsystem' */
} B_PubIfDecisionPLAN_MDL_c_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'PubIfDecisionPLAN_MDL' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T UnitDelay4_DSTATE[11];        /* '<S460>/Unit Delay4' */
  real_T Add_DWORK1;                   /* '<S340>/Add' */
  real_T CCSetSpdK1;                   /* '<S12>/AccelCCCalc' */
  real32_T UnitDelay1_DSTATE;          /* '<S463>/Unit Delay1' */
  real32_T UnitDelay12_DSTATE[11];     /* '<S460>/Unit Delay12' */
  real32_T UnitDelay13_DSTATE[11];     /* '<S460>/Unit Delay13' */
  real32_T UnitDelay1_DSTATE_c[11];    /* '<S460>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE[11];      /* '<S460>/Unit Delay2' */
  real32_T UnitDelay3_DSTATE[11];      /* '<S460>/Unit Delay3' */
  real32_T UnitDelay8_DSTATE[11];      /* '<S460>/Unit Delay8' */
  real32_T UnitDelay7_DSTATE[11];      /* '<S460>/Unit Delay7' */
  real32_T UnitDelay5_DSTATE[11];      /* '<S460>/Unit Delay5' */
  real32_T UnitDelay6_DSTATE[11];      /* '<S460>/Unit Delay6' */
  real32_T UnitDelay9_DSTATE[11];      /* '<S460>/Unit Delay9' */
  real32_T UnitDelay1_DSTATE_g[11];    /* '<S489>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE_f[11];    /* '<S489>/Unit Delay2' */
  real32_T UnitDelay3_DSTATE_g[11];    /* '<S489>/Unit Delay3' */
  real32_T UnitDelay_DSTATE;           /* '<S337>/Unit Delay' */
  real32_T UnitDelay1_DSTATE_b;        /* '<S340>/Unit Delay1' */
  real32_T UnitDelay_DSTATE_g;         /* '<S1>/Unit Delay' */
  real32_T UnitDelay2_DSTATE_d;        /* '<S226>/Unit Delay2' */
  real32_T TappedDelay1_X[4];          /* '<S184>/Tapped Delay1' */
  real32_T UnitDelay1_DSTATE_i[11];    /* '<S471>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE_p[11];    /* '<S471>/Unit Delay2' */
  real32_T UnitDelay3_DSTATE_d[11];    /* '<S471>/Unit Delay3' */
  real32_T UnitDelay4_DSTATE_k[11];    /* '<S489>/Unit Delay4' */
  real32_T UnitDelay_DSTATE_gy;        /* '<S12>/Unit Delay' */
  real32_T UnitDelay22_DSTATE[2];      /* '<S111>/Unit Delay22' */
  real32_T UnitDelay21_DSTATE[2];      /* '<S111>/Unit Delay21' */
  real32_T UnitDelay20_DSTATE[2];      /* '<S111>/Unit Delay20' */
  real32_T UnitDelay19_DSTATE[2];      /* '<S111>/Unit Delay19' */
  real32_T UnitDelay63_DSTATE[2];      /* '<S111>/Unit Delay63' */
  real32_T UnitDelay62_DSTATE[2];      /* '<S111>/Unit Delay62' */
  real32_T TappedDelay_X[25];          /* '<S144>/Tapped Delay' */
  real32_T TappedDelay1_X_m[25];       /* '<S144>/Tapped Delay1' */
  real32_T TappedDelay1_X_a[3];        /* '<S143>/Tapped Delay1' */
  real32_T TappedDelay2_X[3];          /* '<S143>/Tapped Delay2' */
  real32_T UnitDelay43_DSTATE[2];      /* '<S111>/Unit Delay43' */
  real32_T UnitDelay48_DSTATE[2];      /* '<S111>/Unit Delay48' */
  real32_T UnitDelay47_DSTATE[2];      /* '<S111>/Unit Delay47' */
  real32_T UnitDelay46_DSTATE[2];      /* '<S111>/Unit Delay46' */
  real32_T UnitDelay45_DSTATE[2];      /* '<S111>/Unit Delay45' */
  real32_T UnitDelay44_DSTATE[2];      /* '<S111>/Unit Delay44' */
  real32_T UnitDelay_DSTATE_a;         /* '<S127>/Unit Delay' */
  real32_T UnitDelay_DSTATE_p;         /* '<S113>/Unit Delay' */
  real32_T TappedDelay1_X_i[19];       /* '<S22>/Tapped Delay1' */
  real32_T TappedDelay2_X_h[3];        /* '<S130>/Tapped Delay2' */
  real32_T UnitDelay_DSTATE_gk;        /* '<S130>/Unit Delay' */
  real32_T UnitDelay2_DSTATE_dz;       /* '<S58>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE_h;        /* '<S58>/Unit Delay1' */
  real32_T UnitDelay_DSTATE_gc;        /* '<S58>/Unit Delay' */
  real32_T UnitDelay_DSTATE_l;         /* '<S16>/Unit Delay' */
  real32_T UnitDelay_DSTATE_c;         /* '<S75>/Unit Delay' */
  uint32_T DelayInput1_DSTATE;         /* '<S140>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_o;       /* '<S178>/Delay Input1' */
  real32_T Memory_PreviousInput;       /* '<S109>/Memory' */
  real32_T Memory5_PreviousInput;      /* '<S20>/Memory5' */
  real32_T tNoneActive2Active;         /* '<S22>/Chart' */
  real32_T DesiredDistGap;             /* '<S155>/DriveOff_Judge' */
  real32_T dxSensObj_modify;           /* '<S155>/DriveOff_Judge' */
  real32_T Add_DWORK1_i;               /* '<S151>/Add' */
  real32_T cntSmallNumRawArb;          /* '<S58>/spdPlanning' */
  real32_T cntBigNumRawArb;            /* '<S58>/spdPlanning' */
  real32_T tStartUpEnable;             /* '<S56>/Chart1' */
  real32_T counter;                    /* '<S67>/DecelToStopCtrl' */
  real32_T accelForce;                 /* '<S67>/DecelToStopCtrl' */
  real32_T accelTargAbsFiltP0K1;       /* '<S49>/accelTargAbsFilter' */
  real32_T accelTargAbsFiltP2K1;       /* '<S49>/accelTargAbsFilter' */
  real32_T accelTargAbsFiltP3K1;       /* '<S49>/accelTargAbsFilter' */
  real32_T accelTargAbsK1;             /* '<S48>/AccelTargAbsEnableJudge' */
  real32_T accelMaxAL;                 /* '<S32>/Chart' */
  uint32_T Add_DWORK1_a;               /* '<S109>/Add' */
  uint16_T UnitDelay_DSTATE_m;         /* '<S283>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_n;         /* '<S265>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_i;         /* '<S262>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_mv;        /* '<S264>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_h;         /* '<S266>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_g4;        /* '<S261>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_ad;        /* '<S263>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_lp;        /* '<S302>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_pu;        /* '<S301>/Unit Delay' */
  uint16_T UnitDelay1_DSTATE_m;        /* '<S304>/Unit Delay1' */
  uint16_T UnitDelay_DSTATE_pv;        /* '<S334>/Unit Delay' */
  uint16_T UnitDelay1_DSTATE_c0;       /* '<S342>/Unit Delay1' */
  uint16_T UnitDelay_DSTATE_ia;        /* '<S369>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_e;         /* '<S368>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_f;         /* '<S335>/Unit Delay' */
  uint16_T UnitDelay1_DSTATE_f;        /* '<S343>/Unit Delay1' */
  uint16_T UnitDelay_DSTATE_eg;        /* '<S370>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_k;         /* '<S366>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_cu;        /* '<S367>/Unit Delay' */
  uint16_T UnitDelay1_DSTATE_he;       /* '<S421>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_o;        /* '<S420>/Unit Delay1' */
  uint16_T UnitDelay_DSTATE_j;         /* '<S413>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_hk;        /* '<S412>/Unit Delay' */
  uint16_T UnitDelay1_DSTATE_a;        /* '<S431>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_l;        /* '<S432>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_im;       /* '<S440>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_ia;       /* '<S441>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_gs;       /* '<S450>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_ob;       /* '<S425>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_ar;       /* '<S424>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_d;        /* '<S285>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_dg;       /* '<S39>/Unit Delay1' */
  uint16_T LcCnt;                      /* '<S189>/ALCHMISM' */
  uint16_T Cnt;                        /* '<S183>/SigValueHold1' */
  uint16_T LcCnt_n;                    /* '<S182>/ALCHMISM' */
  uint8_T UnitDelay11_DSTATE[11];      /* '<S460>/Unit Delay11' */
  uint8_T UnitDelay_DSTATE_jw[11];     /* '<S460>/Unit Delay' */
  uint8_T UnitDelay10_DSTATE[11];      /* '<S460>/Unit Delay10' */
  uint8_T UnitDelay_DSTATE_pj[11];     /* '<S489>/Unit Delay' */
  uint8_T UnitDelay2_DSTATE_o;         /* '<S4>/Unit Delay2' */
  uint8_T UnitDelay7_DSTATE_f;         /* '<S4>/Unit Delay7' */
  uint8_T UnitDelay5_DSTATE_h;         /* '<S4>/Unit Delay5' */
  uint8_T UnitDelay8_DSTATE_k;         /* '<S4>/Unit Delay8' */
  uint8_T UnitDelay_DSTATE_mc;         /* '<S185>/Unit Delay' */
  uint8_T UnitDelay4_DSTATE_h;         /* '<S4>/Unit Delay4' */
  uint8_T UnitDelay3_DSTATE_a;         /* '<S4>/Unit Delay3' */
  uint8_T UnitDelay1_DSTATE_f0;        /* '<S185>/Unit Delay1' */
  uint8_T UnitDelay15_DSTATE;          /* '<S4>/Unit Delay15' */
  uint8_T UnitDelay9_DSTATE_e;         /* '<S4>/Unit Delay9' */
  uint8_T UnitDelay10_DSTATE_f;        /* '<S4>/Unit Delay10' */
  uint8_T UnitDelay11_DSTATE_i;        /* '<S4>/Unit Delay11' */
  uint8_T UnitDelay14_DSTATE;          /* '<S4>/Unit Delay14' */
  uint8_T UnitDelay1_DSTATE_i4;        /* '<S4>/Unit Delay1' */
  uint8_T UnitDelay_DSTATE_i1;         /* '<S4>/Unit Delay' */
  uint8_T UnitDelay6_DSTATE_k;         /* '<S4>/Unit Delay6' */
  uint8_T DelayInput1_DSTATE_k;        /* '<S371>/Delay Input1' */
  uint8_T UnitDelay16_DSTATE;          /* '<S4>/Unit Delay16' */
  uint8_T UnitDelay13_DSTATE_e;        /* '<S4>/Unit Delay13' */
  uint8_T UnitDelay12_DSTATE_f;        /* '<S4>/Unit Delay12' */
  uint8_T UnitDelay_DSTATE_b;          /* '<S349>/Unit Delay' */
  uint8_T UnitDelay14_DSTATE_m;        /* '<S460>/Unit Delay14' */
  uint8_T UnitDelay_DSTATE_gm[11];     /* '<S471>/Unit Delay' */
  uint8_T Output_DSTATE;               /* '<S2>/Output' */
  uint8_T UnitDelay1_DSTATE_gj;        /* '<S12>/Unit Delay1' */
  uint8_T TappedDelay2_X_h0;           /* '<S20>/Tapped Delay2' */
  uint8_T TappedDelay_X_b;             /* '<S22>/Tapped Delay' */
  uint8_T TappedDelay_X_o;             /* '<S48>/Tapped Delay' */
  uint8_T TappedDelay_X_m;             /* '<S49>/Tapped Delay' */
  uint8_T TappedDelay1_X_d;            /* '<S49>/Tapped Delay1' */
  uint8_T TappedDelay2_X_n;            /* '<S49>/Tapped Delay2' */
  uint8_T TappedDelay_X_j;             /* '<S58>/Tapped Delay' */
  uint8_T TappedDelay1_X_h;            /* '<S58>/Tapped Delay1' */
  uint8_T TappedDelay_X_by;            /* '<S55>/Tapped Delay' */
  uint8_T UnitDelay1_DSTATE_hq;        /* '<S75>/Unit Delay1' */
  uint8_T Output_DSTATE_j;             /* '<S50>/Output' */
  boolean_T UnitDelay2_DSTATE_ot;      /* '<S304>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_a;       /* '<S342>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_d;        /* '<S340>/Unit Delay' */
  boolean_T UnitDelay2_DSTATE_m;       /* '<S343>/Unit Delay2' */
  boolean_T DelayInput1_DSTATE_kn;     /* '<S224>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_g3;       /* '<S184>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_c;      /* '<S223>/Delay Input1' */
  boolean_T UnitDelay1_DSTATE_dv;      /* '<S184>/Unit Delay1' */
  boolean_T UnitDelay_DSTATE_nj;       /* '<S182>/Unit Delay' */
  boolean_T UnitDelay2_DSTATE_e;       /* '<S421>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_mr;      /* '<S420>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_jg;       /* '<S189>/Unit Delay' */
  boolean_T UnitDelay2_DSTATE_px;      /* '<S431>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_me;      /* '<S432>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_c;       /* '<S440>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_g;       /* '<S441>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_i;       /* '<S450>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_jd;       /* '<S425>/Unit Delay' */
  boolean_T UnitDelay2_DSTATE_do;      /* '<S425>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE_dc;      /* '<S425>/Unit Delay3' */
  boolean_T UnitDelay_DSTATE_o;        /* '<S424>/Unit Delay' */
  boolean_T UnitDelay2_DSTATE_b;       /* '<S424>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE_f;       /* '<S424>/Unit Delay3' */
  boolean_T UnitDelay2_DSTATE_k;       /* '<S285>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_fj;      /* '<S39>/Unit Delay2' */
  boolean_T UnitDelay42_DSTATE[2];     /* '<S111>/Unit Delay42' */
  boolean_T UnitDelay_DSTATE_hu;       /* '<S9>/Unit Delay' */
  int8_T If_ActiveSubsystem;           /* '<S109>/If' */
  uint8_T is_active_c130_PubIfDecisionPLAN_MDL;/* '<S189>/ALCHMISM' */
  uint8_T is_c130_PubIfDecisionPLAN_MDL;/* '<S189>/ALCHMISM' */
  uint8_T is_active_c123_PubIfDecisionPLAN_MDL;/* '<S337>/Chart' */
  uint8_T is_c123_PubIfDecisionPLAN_MDL;/* '<S337>/Chart' */
  uint8_T is_active_c122_PubIfDecisionPLAN_MDL;/* '<S185>/SigValueHold3' */
  uint8_T is_c122_PubIfDecisionPLAN_MDL;/* '<S185>/SigValueHold3' */
  uint8_T is_active_c121_PubIfDecisionPLAN_MDL;/* '<S185>/SigValueHold1' */
  uint8_T is_c121_PubIfDecisionPLAN_MDL;/* '<S185>/SigValueHold1' */
  uint8_T is_active_c1_PubIfDecisionPLAN_MDL;/* '<S184>/Chart' */
  uint8_T is_c1_PubIfDecisionPLAN_MDL; /* '<S184>/Chart' */
  uint8_T is_LeLc;                     /* '<S184>/Chart' */
  uint8_T is_RiLc;                     /* '<S184>/Chart' */
  uint8_T is_active_c118_PubIfDecisionPLAN_MDL;/* '<S183>/SigValueHold1' */
  uint8_T is_c118_PubIfDecisionPLAN_MDL;/* '<S183>/SigValueHold1' */
  uint8_T is_active_c116_PubIfDecisionPLAN_MDL;/* '<S182>/ALCHMISM' */
  uint8_T is_c116_PubIfDecisionPLAN_MDL;/* '<S182>/ALCHMISM' */
  uint8_T is_active_c115_PubIfDecisionPLAN_MDL;/* '<S4>/ALC_DECS' */
  uint8_T is_c115_PubIfDecisionPLAN_MDL;/* '<S4>/ALC_DECS' */
  uint8_T is_ALC_ON;                   /* '<S4>/ALC_DECS' */
  uint8_T is_active_c4_PubIfDecisionPLAN_MDL;/* '<S156>/Chart' */
  uint8_T is_c4_PubIfDecisionPLAN_MDL; /* '<S156>/Chart' */
  uint8_T is_active_c59_PubIfDecisionPLAN_MDL;/* '<S155>/DriveOff_Judge' */
  uint8_T is_c59_PubIfDecisionPLAN_MDL;/* '<S155>/DriveOff_Judge' */
  uint8_T ACCModeStsK1;                /* '<S56>/Chart1' */
  uint8_T ACCModeK1;                   /* '<S55>/StandstillOverride' */
  uint8_T ACCModeStsK1_n;              /* '<S67>/DecelToStopCtrl' */
  uint8_T is_active_c63_PubIfDecisionPLAN_MDL;/* '<S47>/AccelSupression' */
  uint8_T is_c63_PubIfDecisionPLAN_MDL;/* '<S47>/AccelSupression' */
  boolean_T offRampDecelStart;         /* '<S18>/ORD' */
  boolean_T ACCModeStateFullFill;      /* '<S55>/StandstillOverride' */
  boolean_T accelForceClear;           /* '<S67>/DecelToStopCtrl' */
  boolean_T accelTargAbsEnableNegFlag; /* '<S48>/AccelTargAbsEnableJudge' */
  DW_SigHold1_PubIfDecisionPLAN_MDL_T sf_SigHold2;/* '<S341>/SigHold2' */
  DW_SigHold1_PubIfDecisionPLAN_MDL_T sf_SigHold1;/* '<S341>/SigHold1' */
  DW_CoreSubsys_PubIfDecisionPLAN_MDL_lp_T CoreSubsys_es[3];/* '<S154>/ACC_DisplayBar1' */
  DW_CoreSubsys_PubIfDecisionPLAN_MDL_T CoreSubsys[10];/* '<S108>/LP' */
} DW_PubIfDecisionPLAN_MDL_f_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Invariant block signals for system '<S108>/LP' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  const real32_T Product7;             /* '<S115>/Product7' */
} ConstB_CoreSubsys_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Invariant block signals for model 'PubIfDecisionPLAN_MDL' */
#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  const real_T Constant42;             /* '<S462>/Constant42' */
  const real_T Constant44;             /* '<S462>/Constant44' */
  const real_T Constant45;             /* '<S462>/Constant45' */
  const real_T Constant46;             /* '<S462>/Constant46' */
  const real32_T Product7;             /* '<S113>/Product7' */
  const real32_T Product7_o;           /* '<S127>/Product7' */
  const uint8_T PLAN_NOH_SetSpdAdjVal; /* '<S3>/Constant2' */
  const uint8_T TmpSignalConversionAtPLAN_NOH_SetSpdAdjValInport1;/* '<Root>/Subsystem Reference' */
  const boolean_T PLAN_NOH_SetSpdAdjReq;/* '<S3>/Constant1' */
  const boolean_T LcMrcLe;             /* '<S186>/Constant' */
  const boolean_T Compare;             /* '<S278>/Compare' */
  const boolean_T LciMrcLe;            /* '<S186>/Constant2' */
  const boolean_T RelationalOperator1; /* '<S349>/Relational Operator1' */
  const boolean_T TmpSignalConversionAtPLAN_NOH_SetSpdAdjReqInport1;/* '<Root>/Subsystem Reference' */
  ConstB_CoreSubsys_PubIfDecisionPLAN_MDL_T CoreSubsys;/* '<S108>/LP' */
} ConstB_PubIfDecisionPLAN_MDL_h_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_PubIfDecisionPLAN_MDL_T {
  const char_T **errorStatus;
};

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_PubIfDecisionPLAN_MDL_T rtm;
} MdlrefDW_PubIfDecisionPLAN_MDL_T;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern real_T rtP_P_PLAN_ALC_OverTkCutOutDyRWFactor;
                                  /* Variable: P_PLAN_ALC_OverTkCutOutDyRWFactor
                                   * Referenced by: '<S340>/Constant1'
                                   */
extern real_T rtP_P_PLAN_ALC_PreCurvatureFactor;
                                      /* Variable: P_PLAN_ALC_PreCurvatureFactor
                                       * Referenced by: '<S188>/Constant1'
                                       */
extern real_T rtP_P_PLAN_ALC_PreCurvaturePreTime;
                                     /* Variable: P_PLAN_ALC_PreCurvaturePreTime
                                      * Referenced by: '<S188>/Constant'
                                      */
extern real32_T rtP_P_LongCtrl_ALCAccLimitByDangerXAxis[5];
                                /* Variable: P_LongCtrl_ALCAccLimitByDangerXAxis
                                 * Referenced by: '<S47>/1-D Lookup Table'
                                 */
extern real32_T rtP_P_LongCtrl_ALCAccLimitByDangerYAxis[5];
                                /* Variable: P_LongCtrl_ALCAccLimitByDangerYAxis
                                 * Referenced by: '<S47>/1-D Lookup Table'
                                 */
extern real32_T rtP_P_LongCtrl_ALaLowerChar[4];/* Variable: P_LongCtrl_ALaLowerChar
                                                * Referenced by: '<S10>/PALaLowerChar'
                                                */
extern real32_T rtP_P_LongCtrl_ALaUpperCharEco[15];/* Variable: P_LongCtrl_ALaUpperCharEco
                                                    * Referenced by: '<S10>/P_LongCtrl_ALaUpperCharEco'
                                                    */
extern real32_T rtP_P_LongCtrl_ALaUpperCharNormal[15];
                                      /* Variable: P_LongCtrl_ALaUpperCharNormal
                                       * Referenced by: '<S10>/P_LongCtrl_ALaUpperCharNormal'
                                       */
extern real32_T rtP_P_LongCtrl_ALaUpperCharSport[15];/* Variable: P_LongCtrl_ALaUpperCharSport
                                                      * Referenced by: '<S10>/P_LongCtrl_ALaUpperCharSport'
                                                      */
extern real32_T rtP_P_LongCtrl_ALvAcceleLowerChar[4];
                                      /* Variable: P_LongCtrl_ALvAcceleLowerChar
                                       * Referenced by: '<S10>/P_LongCtrl_ALvAcceleLowerChar'
                                       */
extern real32_T rtP_P_LongCtrl_ALvAcceleUpperCharEco[15];
                                   /* Variable: P_LongCtrl_ALvAcceleUpperCharEco
                                    * Referenced by: '<S10>/P_LongCtrl_ALvAcceleUpperCharEco'
                                    */
extern real32_T rtP_P_LongCtrl_ALvAcceleUpperCharNormal[15];
                                /* Variable: P_LongCtrl_ALvAcceleUpperCharNormal
                                 * Referenced by: '<S10>/P_LongCtrl_ALvAcceleUpperCharNormal'
                                 */
extern real32_T rtP_P_LongCtrl_ALvAcceleUpperCharSport[15];
                                 /* Variable: P_LongCtrl_ALvAcceleUpperCharSport
                                  * Referenced by: '<S10>/P_LongCtrl_ALvAcceleUpperCharSport'
                                  */
extern real32_T rtP_P_LongCtrl_AddVelAccelChange;/* Variable: P_LongCtrl_AddVelAccelChange
                                                  * Referenced by: '<S67>/P_LongCtrl_AddVelAccelChange'
                                                  */
extern real32_T rtP_P_LongCtrl_AddVelAccelThrd;/* Variable: P_LongCtrl_AddVelAccelThrd
                                                * Referenced by: '<S67>/P_LongCtrl_AddVelAccelThrd'
                                                */
extern real32_T rtP_P_LongCtrl_AddVelDistDesThrd;/* Variable: P_LongCtrl_AddVelDistDesThrd
                                                  * Referenced by: '<S67>/P_LongCtrl_AddVelDistDesThrd'
                                                  */
extern real32_T rtP_P_LongCtrl_AddVelRefMsThrd;/* Variable: P_LongCtrl_AddVelRefMsThrd
                                                * Referenced by: '<S67>/P_LongCtrl_AddVelRefMsThrd'
                                                */
extern real32_T rtP_P_LongCtrl_CCLCIncSetSpdAdd;/* Variable: P_LongCtrl_CCLCIncSetSpdAdd
                                                 * Referenced by: '<S12>/Constant1'
                                                 */
extern real32_T rtP_P_LongCtrl_CCLCIncSetSpdAddCntStartValue;
                           /* Variable: P_LongCtrl_CCLCIncSetSpdAddCntStartValue
                            * Referenced by: '<S12>/Constant2'
                            */
extern real32_T rtP_P_LongCtrl_CCResumeDelayDeltaVel;
                                   /* Variable: P_LongCtrl_CCResumeDelayDeltaVel
                                    * Referenced by: '<S12>/AccelCCCalc'
                                    */
extern real32_T rtP_P_LongCtrl_CCaMinNegAcceleLowerBand;
                                /* Variable: P_LongCtrl_CCaMinNegAcceleLowerBand
                                 * Referenced by: '<S42>/P_LongCtrl_CCaMinNegAcceleLowerBand'
                                 */
extern real32_T rtP_P_LongCtrl_CCaMinNegAcceleUpperBand;
                                /* Variable: P_LongCtrl_CCaMinNegAcceleUpperBand
                                 * Referenced by: '<S42>/P_LongCtrl_CCaMinNegAcceleUpperBand'
                                 */
extern real32_T rtP_P_LongCtrl_CCaMinPosAcceleLowerBand;
                                /* Variable: P_LongCtrl_CCaMinPosAcceleLowerBand
                                 * Referenced by: '<S43>/P_LongCtrl_CCaMinPosAcceleLowerBand'
                                 */
extern real32_T rtP_P_LongCtrl_CCaMinPosAcceleUpperBand;
                                /* Variable: P_LongCtrl_CCaMinPosAcceleUpperBand
                                 * Referenced by: '<S43>/P_LongCtrl_CCaMinPosAcceleUpperBand'
                                 */
extern real32_T rtP_P_LongCtrl_CCaccelCCNeg2PosJerk;
                                    /* Variable: P_LongCtrl_CCaccelCCNeg2PosJerk
                                     * Referenced by:
                                     *   '<S30>/P_LongCtrl_CCaccelCCNeg2PosJerk'
                                     *   '<S32>/Constant6'
                                     */
extern real32_T rtP_P_LongCtrl_CCaccelCCPosJerk;/* Variable: P_LongCtrl_CCaccelCCPosJerk
                                                 * Referenced by:
                                                 *   '<S30>/P_LongCtrl_CCaccelCCPosJerk'
                                                 *   '<S32>/Constant7'
                                                 */
extern real32_T rtP_P_LongCtrl_CCaccelLowerIsLaneChange;
                                /* Variable: P_LongCtrl_CCaccelLowerIsLaneChange
                                 * Referenced by: '<S27>/P_LongCtrl_CCaccelLowerIsLaneChange'
                                 */
extern real32_T rtP_P_LongCtrl_CCaccelMaxLCActive;
                                      /* Variable: P_LongCtrl_CCaccelMaxLCActive
                                       * Referenced by: '<S37>/Constant'
                                       */
extern real32_T rtP_P_LongCtrl_CCaccelMinECOAL;/* Variable: P_LongCtrl_CCaccelMinECOAL
                                                * Referenced by: '<S32>/Constant8'
                                                */
extern real32_T rtP_P_LongCtrl_CCaccelMinFastDecel;
                                     /* Variable: P_LongCtrl_CCaccelMinFastDecel
                                      * Referenced by:
                                      *   '<S27>/Constant'
                                      *   '<S32>/Constant3'
                                      */
extern real32_T rtP_P_LongCtrl_CCaccelMinNoFastDecel;
                                   /* Variable: P_LongCtrl_CCaccelMinNoFastDecel
                                    * Referenced by:
                                    *   '<S27>/Constant1'
                                    *   '<S32>/Constant2'
                                    */
extern real32_T rtP_P_LongCtrl_CCaccelMinNormAL;/* Variable: P_LongCtrl_CCaccelMinNormAL
                                                 * Referenced by: '<S32>/Constant10'
                                                 */
extern real32_T rtP_P_LongCtrl_CCaccelMinSportAL;/* Variable: P_LongCtrl_CCaccelMinSportAL
                                                  * Referenced by: '<S32>/Constant9'
                                                  */
extern real32_T rtP_P_LongCtrl_CCaccelUpperCC;/* Variable: P_LongCtrl_CCaccelUpperCC
                                               * Referenced by: '<S27>/P_LongCtrl_CCaccelUpperCC'
                                               */
extern real32_T rtP_P_LongCtrl_CCaccelUpperCCSafeStop;
                                  /* Variable: P_LongCtrl_CCaccelUpperCCSafeStop
                                   * Referenced by: '<S27>/P_LongCtrl_CCaccelUpperCCSafeStop'
                                   */
extern real32_T rtP_P_LongCtrl_CCbECO; /* Variable: P_LongCtrl_CCbECO
                                        * Referenced by: '<S32>/Constant15'
                                        */
extern real32_T rtP_P_LongCtrl_CCbNorm;/* Variable: P_LongCtrl_CCbNorm
                                        * Referenced by: '<S32>/Constant11'
                                        */
extern real32_T rtP_P_LongCtrl_CCbSport;/* Variable: P_LongCtrl_CCbSport
                                         * Referenced by: '<S32>/Constant13'
                                         */
extern real32_T rtP_P_LongCtrl_CCcoefESPSpd2IPSpd1;
                                     /* Variable: P_LongCtrl_CCcoefESPSpd2IPSpd1
                                      * Referenced by: '<S35>/IPDisVehSpdFac'
                                      */
extern real32_T rtP_P_LongCtrl_CCcoefESPSpd2IPSpd2;
                                     /* Variable: P_LongCtrl_CCcoefESPSpd2IPSpd2
                                      * Referenced by: '<S35>/IPDisVehSpdOffset'
                                      */
extern real32_T rtP_P_LongCtrl_CCdecelCCJerk;/* Variable: P_LongCtrl_CCdecelCCJerk
                                              * Referenced by:
                                              *   '<S30>/P_LongCtrl_CCdecelCCJerk'
                                              *   '<S32>/Constant1'
                                              */
extern real32_T rtP_P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc;
                          /* Variable: P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc
                           * Referenced by:
                           *   '<S30>/P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc'
                           *   '<S32>/Constant'
                           */
extern real32_T rtP_P_LongCtrl_CCfacNegAcceleLowerBand;
                                 /* Variable: P_LongCtrl_CCfacNegAcceleLowerBand
                                  * Referenced by: '<S42>/P_LongCtrl_CCfacNegAcceleLowerBand'
                                  */
extern real32_T rtP_P_LongCtrl_CCfacNegAcceleUpperBand;
                                 /* Variable: P_LongCtrl_CCfacNegAcceleUpperBand
                                  * Referenced by: '<S42>/P_LongCtrl_CCfacNegAcceleUpperBand'
                                  */
extern real32_T rtP_P_LongCtrl_CCfacPosAcceleLowerBand;
                                 /* Variable: P_LongCtrl_CCfacPosAcceleLowerBand
                                  * Referenced by: '<S43>/P_LongCtrl_CCfacPosAcceleLowerBand'
                                  */
extern real32_T rtP_P_LongCtrl_CCfacPosAcceleUpperBand;
                                 /* Variable: P_LongCtrl_CCfacPosAcceleUpperBand
                                  * Referenced by: '<S43>/P_LongCtrl_CCfacPosAcceleUpperBand'
                                  */
extern real32_T rtP_P_LongCtrl_CCkECO; /* Variable: P_LongCtrl_CCkECO
                                        * Referenced by: '<S32>/Constant12'
                                        */
extern real32_T rtP_P_LongCtrl_CCkNorm;/* Variable: P_LongCtrl_CCkNorm
                                        * Referenced by: '<S32>/Constant14'
                                        */
extern real32_T rtP_P_LongCtrl_CCkSport;/* Variable: P_LongCtrl_CCkSport
                                         * Referenced by: '<S32>/Constant16'
                                         */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimeNeg;/* Variable: P_LongCtrl_CCtAcceleTimeNeg
                                                 * Referenced by: '<S33>/P_LongCtrl_CCtAcceleTimeNeg'
                                                 */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimeNegCorrXAxis[2];
                               /* Variable: P_LongCtrl_CCtAcceleTimeNegCorrXAxis
                                * Referenced by: '<S33>/1-D Lookup Table'
                                */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimeNegCorrYAxis[2];
                               /* Variable: P_LongCtrl_CCtAcceleTimeNegCorrYAxis
                                * Referenced by: '<S33>/1-D Lookup Table'
                                */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimePos;/* Variable: P_LongCtrl_CCtAcceleTimePos
                                                 * Referenced by: '<S34>/P_LongCtrl_CCtAcceleTimePos'
                                                 */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimePosCorrXAxis[2];
                               /* Variable: P_LongCtrl_CCtAcceleTimePosCorrXAxis
                                * Referenced by: '<S34>/1-D Lookup Table'
                                */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimePosCorrYAxis[2];
                               /* Variable: P_LongCtrl_CCtAcceleTimePosCorrYAxis
                                * Referenced by: '<S34>/1-D Lookup Table'
                                */
extern real32_T rtP_P_LongCtrl_CCtStepVelPlan;/* Variable: P_LongCtrl_CCtStepVelPlan
                                               * Referenced by: '<S32>/Constant5'
                                               */
extern real32_T rtP_P_LongCtrl_CCtTotVelPlan;/* Variable: P_LongCtrl_CCtTotVelPlan
                                              * Referenced by: '<S32>/Constant4'
                                              */
extern real32_T rtP_P_LongCtrl_DangerLevelEnterThrd;
                                    /* Variable: P_LongCtrl_DangerLevelEnterThrd
                                     * Referenced by: '<S47>/Constant'
                                     */
extern real32_T rtP_P_LongCtrl_DangerLevelExitThrd;
                                     /* Variable: P_LongCtrl_DangerLevelExitThrd
                                      * Referenced by: '<S47>/Constant4'
                                      */
extern real32_T rtP_P_LongCtrl_FollowAccelAddSlopeAssistXAxis[2];
                          /* Variable: P_LongCtrl_FollowAccelAddSlopeAssistXAxis
                           * Referenced by: '<S56>/1-D Lookup Table'
                           */
extern real32_T rtP_P_LongCtrl_FollowAccelAddSlopeAssistYAxis[2];
                          /* Variable: P_LongCtrl_FollowAccelAddSlopeAssistYAxis
                           * Referenced by: '<S56>/1-D Lookup Table'
                           */
extern real32_T
  rtP_P_LongCtrl_FollowAccelCharNegVlcAcc2CoefEnlargeAccelJerkXAxis[2];
      /* Variable: P_LongCtrl_FollowAccelCharNegVlcAcc2CoefEnlargeAccelJerkXAxis
       * Referenced by: '<S73>/1-D Lookup Table'
       */
extern real32_T rtP_P_LongCtrl_FollowAccelDesThresStartUpAssistEnable;
                  /* Variable: P_LongCtrl_FollowAccelDesThresStartUpAssistEnable
                   * Referenced by: '<S56>/Chart1'
                   */
extern real32_T rtP_P_LongCtrl_FollowAccelJerkNegFollowAccel;
                           /* Variable: P_LongCtrl_FollowAccelJerkNegFollowAccel
                            * Referenced by: '<S73>/Constant'
                            */
extern real32_T rtP_P_LongCtrl_FollowAccelSlopeAssistStep;
                              /* Variable: P_LongCtrl_FollowAccelSlopeAssistStep
                               * Referenced by: '<S56>/Constant'
                               */
extern real32_T rtP_P_LongCtrl_FollowCoefCharCoefEnlargeAccelJerkYAxis[2];
                 /* Variable: P_LongCtrl_FollowCoefCharCoefEnlargeAccelJerkYAxis
                  * Referenced by: '<S73>/1-D Lookup Table'
                  */
extern real32_T
  rtP_P_LongCtrl_FollowCoefCharDistCoefEnlargeAccelStartUpAssistYAxis[2];
    /* Variable: P_LongCtrl_FollowCoefCharDistCoefEnlargeAccelStartUpAssistYAxis
     * Referenced by: '<S97>/1-D Lookup Table'
     */
extern real32_T
  rtP_P_LongCtrl_FollowCoefCharVelCoefEnlargeAccelStartUpAssistYAxis[2];
     /* Variable: P_LongCtrl_FollowCoefCharVelCoefEnlargeAccelStartUpAssistYAxis
      * Referenced by: '<S98>/1-D Lookup Table'
      */
extern real32_T rtP_P_LongCtrl_FollowCoefStartUpAssistFadeOut;
                          /* Variable: P_LongCtrl_FollowCoefStartUpAssistFadeOut
                           * Referenced by: '<S56>/Chart1'
                           */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableTTCThres;
            /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableTTCThres
             * Referenced by: '<S80>/Constant'
             */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableVelSubjThres;
        /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableVelSubjThres
         * Referenced by: '<S79>/Constant'
         */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrXAxis[2];
                     /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrXAxis
                      * Referenced by: '<S74>/1-D Lookup Table1'
                      */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrYAxis[2];
                     /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrYAxis
                      * Referenced by: '<S74>/1-D Lookup Table1'
                      */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkForceSlopeXAxis[2];
                          /* Variable: P_LongCtrl_FollowDecelJerkForceSlopeXAxis
                           * Referenced by: '<S74>/1-D Lookup Table'
                           */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkForceSlopeYAxis[2];
                          /* Variable: P_LongCtrl_FollowDecelJerkForceSlopeYAxis
                           * Referenced by: '<S74>/1-D Lookup Table'
                           */
extern real32_T rtP_P_LongCtrl_FollowDistDesAddForceStop;
                               /* Variable: P_LongCtrl_FollowDistDesAddForceStop
                                * Referenced by: '<S67>/DecelToStopCtrl'
                                */
extern real32_T rtP_P_LongCtrl_FollowDistDesCompensionVelRelThresMax;
                   /* Variable: P_LongCtrl_FollowDistDesCompensionVelRelThresMax
                    * Referenced by: '<S52>/Constant37'
                    */
extern real32_T rtP_P_LongCtrl_FollowDistDesCompensionVelRelThresMin;
                   /* Variable: P_LongCtrl_FollowDistDesCompensionVelRelThresMin
                    * Referenced by: '<S52>/Constant36'
                    */
extern real32_T rtP_P_LongCtrl_FollowDistDiff2VelSubjThresEnableStop[2];
                   /* Variable: P_LongCtrl_FollowDistDiff2VelSubjThresEnableStop
                    * Referenced by: '<S69>/Constant'
                    */
extern real32_T
  rtP_P_LongCtrl_FollowDistDiffCharCoefEnlargeAccelStartUpAssistXAxis[2];
    /* Variable: P_LongCtrl_FollowDistDiffCharCoefEnlargeAccelStartUpAssistXAxis
     * Referenced by: '<S97>/1-D Lookup Table'
     */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistCorrDistFullFillOverride;
                /* Variable: P_LongCtrl_FollowDrvOffDistCorrDistFullFillOverride
                 * Referenced by: '<S155>/DriveOff_Judge'
                 */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistCorrVelFullFillOverride;
                 /* Variable: P_LongCtrl_FollowDrvOffDistCorrVelFullFillOverride
                  * Referenced by: '<S155>/DriveOff_Judge'
                  */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistExitNoOverride;
                          /* Variable: P_LongCtrl_FollowDrvOffDistExitNoOverride
                           * Referenced by: '<S155>/DriveOff_Judge'
                           */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistExitOverride;
                            /* Variable: P_LongCtrl_FollowDrvOffDistExitOverride
                             * Referenced by: '<S155>/DriveOff_Judge'
                             */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff;
                /* Variable: P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff
                 * Referenced by: '<S155>/DriveOff_Judge'
                 */
extern real32_T rtP_P_LongCtrl_FollowDrvOffStandstillVelThres;
                          /* Variable: P_LongCtrl_FollowDrvOffStandstillVelThres
                           * Referenced by: '<S155>/DriveOff_Judge'
                           */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelCorrVelFullFillOverride;
                  /* Variable: P_LongCtrl_FollowDrvOffVelCorrVelFullFillOverride
                   * Referenced by: '<S155>/DriveOff_Judge'
                   */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelExitDistCorrNoOverride;
                   /* Variable: P_LongCtrl_FollowDrvOffVelExitDistCorrNoOverride
                    * Referenced by: '<S155>/DriveOff_Judge'
                    */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelExitDistCorrOverride;
                     /* Variable: P_LongCtrl_FollowDrvOffVelExitDistCorrOverride
                      * Referenced by: '<S155>/DriveOff_Judge'
                      */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelExitVelCorrNoOverride;
                    /* Variable: P_LongCtrl_FollowDrvOffVelExitVelCorrNoOverride
                     * Referenced by: '<S155>/DriveOff_Judge'
                     */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelExitVelCorrOverride;
                      /* Variable: P_LongCtrl_FollowDrvOffVelExitVelCorrOverride
                       * Referenced by: '<S155>/DriveOff_Judge'
                       */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff;
                         /* Variable: P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff
                          * Referenced by: '<S155>/DriveOff_Judge'
                          */
extern real32_T rtP_P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff;
                        /* Variable: P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff
                         * Referenced by: '<S155>/DriveOff_Judge'
                         */
extern real32_T rtP_P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions;
                   /* Variable: P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions
                    * Referenced by: '<S155>/DriveOff_Judge'
                    */
extern real32_T rtP_P_LongCtrl_FollowJerkCharAccelJerkYAxis[7];
                            /* Variable: P_LongCtrl_FollowJerkCharAccelJerkYAxis
                             * Referenced by: '<S73>/1-D Lookup Table1'
                             */
extern real32_T rtP_P_LongCtrl_FollowQuickAccelTargAbsEnableThres;
                      /* Variable: P_LongCtrl_FollowQuickAccelTargAbsEnableThres
                       * Referenced by: '<S90>/Constant'
                       */
extern real32_T rtP_P_LongCtrl_FollowQuickDecelAccelDesMax;
                             /* Variable: P_LongCtrl_FollowQuickDecelAccelDesMax
                              * Referenced by: '<S86>/Constant4'
                              */
extern real32_T rtP_P_LongCtrl_FollowQuickDecelDiffDistRel2DesThres;
                    /* Variable: P_LongCtrl_FollowQuickDecelDiffDistRel2DesThres
                     * Referenced by: '<S87>/Constant'
                     */
extern real32_T rtP_P_LongCtrl_FollowQuickDecelVelSubjThres;
                            /* Variable: P_LongCtrl_FollowQuickDecelVelSubjThres
                             * Referenced by: '<S89>/Constant'
                             */
extern real32_T rtP_P_LongCtrl_FollowQuickDecelVelTargRelThres;
                         /* Variable: P_LongCtrl_FollowQuickDecelVelTargRelThres
                          * Referenced by: '<S88>/Constant'
                          */
extern real32_T rtP_P_LongCtrl_FollowRateJConditionStep;
                                /* Variable: P_LongCtrl_FollowRateJConditionStep
                                 * Referenced by: '<S58>/spdPlanning'
                                 */
extern real32_T rtP_P_LongCtrl_FollowRateJDirStep;
                                      /* Variable: P_LongCtrl_FollowRateJDirStep
                                       * Referenced by: '<S58>/spdPlanning'
                                       */
extern real32_T rtP_P_LongCtrl_FollowTFiltP0XAxis[2];
                                      /* Variable: P_LongCtrl_FollowTFiltP0XAxis
                                       * Referenced by: '<S64>/1-D Lookup Table'
                                       */
extern real32_T rtP_P_LongCtrl_FollowTFiltP0YAxis[2];
                                      /* Variable: P_LongCtrl_FollowTFiltP0YAxis
                                       * Referenced by: '<S64>/1-D Lookup Table'
                                       */
extern real32_T rtP_P_LongCtrl_FollowVelCharAccelJerkXAxis[7];
                             /* Variable: P_LongCtrl_FollowVelCharAccelJerkXAxis
                              * Referenced by: '<S73>/1-D Lookup Table1'
                              */
extern real32_T rtP_P_LongCtrl_FollowVelCharCoefEnlargeAccelStartUpAssistXAxis[2];
         /* Variable: P_LongCtrl_FollowVelCharCoefEnlargeAccelStartUpAssistXAxis
          * Referenced by: '<S98>/1-D Lookup Table'
          */
extern real32_T rtP_P_LongCtrl_FollowVelSubjNegToleranceAddX1Axis[2];
                      /* Variable: P_LongCtrl_FollowVelSubjNegToleranceAddX1Axis
                       * Referenced by: '<S58>/velSubjNegToleranceAdd'
                       */
extern real32_T rtP_P_LongCtrl_FollowVelSubjNegToleranceAddX2Axis[2];
                      /* Variable: P_LongCtrl_FollowVelSubjNegToleranceAddX2Axis
                       * Referenced by: '<S58>/velSubjNegToleranceAdd'
                       */
extern real32_T rtP_P_LongCtrl_FollowVelSubjNegToleranceAddYAxis[4];
                       /* Variable: P_LongCtrl_FollowVelSubjNegToleranceAddYAxis
                        * Referenced by: '<S58>/velSubjNegToleranceAdd'
                        */
extern real32_T rtP_P_LongCtrl_FollowVelSubjThresForceStopXAxis[2];
                        /* Variable: P_LongCtrl_FollowVelSubjThresForceStopXAxis
                         * Referenced by: '<S70>/P_LongCtrl_velSubjThresForceStopChar'
                         */
extern real32_T rtP_P_LongCtrl_FollowVelSubjThresForceStopYAxis[2];
                        /* Variable: P_LongCtrl_FollowVelSubjThresForceStopYAxis
                         * Referenced by: '<S70>/P_LongCtrl_velSubjThresForceStopChar'
                         */
extern real32_T rtP_P_LongCtrl_FollowVelSubjThresStartUpAssistEnable;
                   /* Variable: P_LongCtrl_FollowVelSubjThresStartUpAssistEnable
                    * Referenced by: '<S56>/Chart1'
                    */
extern real32_T rtP_P_LongCtrl_FollowVelTargAbsThresStartUpAssistEnable;
                /* Variable: P_LongCtrl_FollowVelTargAbsThresStartUpAssistEnable
                 * Referenced by: '<S56>/Chart1'
                 */
extern real32_T rtP_P_LongCtrl_FollowVelTargetAbsSmoothNum;
                             /* Variable: P_LongCtrl_FollowVelTargetAbsSmoothNum
                              * Referenced by: '<S58>/spdPlanning'
                              */
extern real32_T rtP_P_LongCtrl_FollowWdCoefXAxis[3];/* Variable: P_LongCtrl_FollowWdCoefXAxis
                                                     * Referenced by: '<S58>/1-D Lookup Table1'
                                                     */
extern real32_T rtP_P_LongCtrl_FollowWdCoefYAxis[3];/* Variable: P_LongCtrl_FollowWdCoefYAxis
                                                     * Referenced by: '<S58>/1-D Lookup Table1'
                                                     */
extern real32_T rtP_P_LongCtrl_FollowWvCoefXAxis[4];/* Variable: P_LongCtrl_FollowWvCoefXAxis
                                                     * Referenced by: '<S58>/1-D Lookup Table3'
                                                     */
extern real32_T rtP_P_LongCtrl_FollowWvCoefYAxis[4];/* Variable: P_LongCtrl_FollowWvCoefYAxis
                                                     * Referenced by: '<S58>/1-D Lookup Table3'
                                                     */
extern real32_T rtP_P_LongCtrl_FollowaccelFollowDesThresEnableStopXAxis[2];
                /* Variable: P_LongCtrl_FollowaccelFollowDesThresEnableStopXAxis
                 * Referenced by: '<S69>/1-D Lookup Table1'
                 */
extern real32_T rtP_P_LongCtrl_FollowaccelFollowDesThresEnableStopYAxis[2];
                /* Variable: P_LongCtrl_FollowaccelFollowDesThresEnableStopYAxis
                 * Referenced by: '<S69>/1-D Lookup Table1'
                 */
extern real32_T rtP_P_LongCtrl_FollowaccelForceStopMinCharXAxis[2];
                        /* Variable: P_LongCtrl_FollowaccelForceStopMinCharXAxis
                         * Referenced by: '<S70>/P_LongCtrl_FollowaccelForceStopMinChar'
                         */
extern real32_T rtP_P_LongCtrl_FollowaccelForceStopMinCharYAxis[2];
                        /* Variable: P_LongCtrl_FollowaccelForceStopMinCharYAxis
                         * Referenced by: '<S70>/P_LongCtrl_FollowaccelForceStopMinChar'
                         */
extern real32_T rtP_P_LongCtrl_FollowaccelMinAccelSupressionEnter;
                      /* Variable: P_LongCtrl_FollowaccelMinAccelSupressionEnter
                       * Referenced by: '<S47>/Constant2'
                       */
extern real32_T rtP_P_LongCtrl_FollowaccelMinAccelSupressionExit;
                       /* Variable: P_LongCtrl_FollowaccelMinAccelSupressionExit
                        * Referenced by: '<S47>/Constant3'
                        */
extern real32_T rtP_P_LongCtrl_FollowaccelStopMax;
                                      /* Variable: P_LongCtrl_FollowaccelStopMax
                                       * Referenced by: '<S67>/P_LongCtrl_FollowaccelStopMax'
                                       */
extern real32_T rtP_P_LongCtrl_FollowaccelSupressionAccelThres;
                         /* Variable: P_LongCtrl_FollowaccelSupressionAccelThres
                          * Referenced by: '<S47>/DecelJudge'
                          */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnableNegJerk;
                         /* Variable: P_LongCtrl_FollowaccelTargAbsEnableNegJerk
                          * Referenced by: '<S48>/P_LongCtrl_FollowaccelTargAbsEnableNegJerk'
                          */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnableNegMax;
                          /* Variable: P_LongCtrl_FollowaccelTargAbsEnableNegMax
                           * Referenced by: '<S48>/P_LongCtrl_FollowaccelTargAbsEnableNegMax'
                           */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnablePosJerk;
                         /* Variable: P_LongCtrl_FollowaccelTargAbsEnablePosJerk
                          * Referenced by: '<S48>/P_LongCtrl_FollowaccelTargAbsEnablePosJerk'
                          */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnableRangeMax;
                        /* Variable: P_LongCtrl_FollowaccelTargAbsEnableRangeMax
                         * Referenced by: '<S48>/P_LongCtrl_FollowaccelTargAbsEnableRangeMax'
                         */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsExitNegMin;
                            /* Variable: P_LongCtrl_FollowaccelTargAbsExitNegMin
                             * Referenced by: '<S48>/P_LongCtrl_FollowaccelTargAbsExitNegMin'
                             */
extern real32_T rtP_P_LongCtrl_FollowaccelTargThresEnableStop;
                          /* Variable: P_LongCtrl_FollowaccelTargThresEnableStop
                           * Referenced by: '<S67>/P_LongCtrl_FollowaccelTargThresEnableStop'
                           */
extern real32_T rtP_P_LongCtrl_FollowaccelTargThresForceStop;
                           /* Variable: P_LongCtrl_FollowaccelTargThresForceStop
                            * Referenced by: '<S67>/P_LongCtrl_FollowaccelTargThresForceStop'
                            */
extern real32_T rtP_P_LongCtrl_FollowaccelThresActiveTOR;
                               /* Variable: P_LongCtrl_FollowaccelThresActiveTOR
                                * Referenced by: '<S156>/TakeOver'
                                */
extern real32_T rtP_P_LongCtrl_FollowcoefAccelFadeOutPlauCheck;
                         /* Variable: P_LongCtrl_FollowcoefAccelFadeOutPlauCheck
                          * Referenced by: '<S55>/PlausibilityCheck'
                          */
extern real32_T rtP_P_LongCtrl_FollowcoefAccelStandstillOverride;
                       /* Variable: P_LongCtrl_FollowcoefAccelStandstillOverride
                        * Referenced by: '<S55>/StandstillOverride'
                        */
extern real32_T rtP_P_LongCtrl_FollowcoefDistEnlargeDecToStop;
                          /* Variable: P_LongCtrl_FollowcoefDistEnlargeDecToStop
                           * Referenced by: '<S58>/CoefCalc'
                           */
extern real32_T rtP_P_LongCtrl_FollowcoefDistRelThresActiveTOR;
                         /* Variable: P_LongCtrl_FollowcoefDistRelThresActiveTOR
                          * Referenced by:
                          *   '<S156>/Chart'
                          *   '<S156>/TakeOver'
                          */
extern real32_T rtP_P_LongCtrl_FollowcoefVelEnlargeDecToStop;
                           /* Variable: P_LongCtrl_FollowcoefVelEnlargeDecToStop
                            * Referenced by: '<S58>/CoefCalc'
                            */
extern real32_T rtP_P_LongCtrl_FollowdecelJerkCharXAxis[6];
                                /* Variable: P_LongCtrl_FollowdecelJerkCharXAxis
                                 * Referenced by: '<S74>/DecelFollowJerkChar'
                                 */
extern real32_T rtP_P_LongCtrl_FollowdecelJerkCharYAxis[6];
                                /* Variable: P_LongCtrl_FollowdecelJerkCharYAxis
                                 * Referenced by: '<S74>/DecelFollowJerkChar'
                                 */
extern real32_T rtP_P_LongCtrl_FollowdistDesCompensionXAxis[2];
                            /* Variable: P_LongCtrl_FollowdistDesCompensionXAxis
                             * Referenced by: '<S52>/1-D Lookup Table'
                             */
extern real32_T rtP_P_LongCtrl_FollowdistDesCompensionYAxis[2];
                            /* Variable: P_LongCtrl_FollowdistDesCompensionYAxis
                             * Referenced by: '<S52>/1-D Lookup Table'
                             */
extern real32_T rtP_P_LongCtrl_FollowdistDesStopMin;
                                    /* Variable: P_LongCtrl_FollowdistDesStopMin
                                     * Referenced by: '<S69>/P_LongCtrl_FollowdistDesStopMin'
                                     */
extern real32_T rtP_P_LongCtrl_FollowdistDesX2Axis[6];
                                     /* Variable: P_LongCtrl_FollowdistDesX2Axis
                                      * Referenced by:
                                      *   '<S52>/DesireDistance1'
                                      *   '<S52>/DesireDistance2'
                                      *   '<S52>/DesireDistance3'
                                      */
extern real32_T rtP_P_LongCtrl_FollowdistDesYAxis[24];
                                      /* Variable: P_LongCtrl_FollowdistDesYAxis
                                       * Referenced by:
                                       *   '<S52>/DesireDistance1'
                                       *   '<S52>/DesireDistance2'
                                       *   '<S52>/DesireDistance3'
                                       */
extern real32_T rtP_P_LongCtrl_FollowdistRelDevCalcDistConst;
                           /* Variable: P_LongCtrl_FollowdistRelDevCalcDistConst
                            * Referenced by: '<S55>/PlausibilityCheck'
                            */
extern real32_T rtP_P_LongCtrl_FollowdistRelMaxJudgeStationaryTarget;
                   /* Variable: P_LongCtrl_FollowdistRelMaxJudgeStationaryTarget
                    * Referenced by: '<S55>/StandstillOverride'
                    */
extern real32_T rtP_P_LongCtrl_FollowdistRelThresEnablePlauCheck;
                       /* Variable: P_LongCtrl_FollowdistRelThresEnablePlauCheck
                        * Referenced by: '<S55>/PlausibilityCheck'
                        */
extern real32_T rtP_P_LongCtrl_FollowdistTargRelEnableAccelTargAbsThres;
                /* Variable: P_LongCtrl_FollowdistTargRelEnableAccelTargAbsThres
                 * Referenced by: '<S48>/P_LongCtrl_FollowdistTargRelEnableAccelTargAbsThres'
                 */
extern real32_T rtP_P_LongCtrl_FollowdistThresEnableStop;
                               /* Variable: P_LongCtrl_FollowdistThresEnableStop
                                * Referenced by: '<S67>/P_LongCtrl_FollowdistThresEnableStop'
                                */
extern real32_T rtP_P_LongCtrl_FollowgapThresActiveTOR;
                                 /* Variable: P_LongCtrl_FollowgapThresActiveTOR
                                  * Referenced by: '<S156>/TakeOver'
                                  */
extern real32_T rtP_P_LongCtrl_FollowjerkForceStopCharXAxis[3];
                            /* Variable: P_LongCtrl_FollowjerkForceStopCharXAxis
                             * Referenced by: '<S70>/P_LongCtrl_jerkForceStopChar'
                             */
extern real32_T rtP_P_LongCtrl_FollowjerkForceStopCharYAxis[3];
                            /* Variable: P_LongCtrl_FollowjerkForceStopCharYAxis
                             * Referenced by: '<S70>/P_LongCtrl_jerkForceStopChar'
                             */
extern real32_T rtP_P_LongCtrl_FollowtStartUpAssistEnableMax;
                           /* Variable: P_LongCtrl_FollowtStartUpAssistEnableMax
                            * Referenced by: '<S56>/Chart1'
                            */
extern real32_T rtP_P_LongCtrl_FollowttcCorrDecelJerkXAxis[4];
                             /* Variable: P_LongCtrl_FollowttcCorrDecelJerkXAxis
                              * Referenced by: '<S74>/DecelFollowJerkTTCCorrChar'
                              */
extern real32_T rtP_P_LongCtrl_FollowttcCorrDecelJerkYAxis[4];
                             /* Variable: P_LongCtrl_FollowttcCorrDecelJerkYAxis
                              * Referenced by: '<S74>/DecelFollowJerkTTCCorrChar'
                              */
extern real32_T rtP_P_LongCtrl_FollowvelRelThresEnablePlauCheck;
                        /* Variable: P_LongCtrl_FollowvelRelThresEnablePlauCheck
                         * Referenced by: '<S55>/PlausibilityCheck'
                         */
extern real32_T rtP_P_LongCtrl_FollowvelSubjMaxEnablePlauCheck;
                         /* Variable: P_LongCtrl_FollowvelSubjMaxEnablePlauCheck
                          * Referenced by: '<S55>/PlausibilityCheck'
                          */
extern real32_T rtP_P_LongCtrl_FollowvelSubjThresEnablePlauCheck;
                       /* Variable: P_LongCtrl_FollowvelSubjThresEnablePlauCheck
                        * Referenced by: '<S55>/PlausibilityCheck'
                        */
extern real32_T rtP_P_LongCtrl_FollowvelSubjThresEnableStop;
                            /* Variable: P_LongCtrl_FollowvelSubjThresEnableStop
                             * Referenced by:
                             *   '<S67>/P_LongCtrl_FollowvelSubjThresEnableStop'
                             *   '<S69>/P_LongCtrl_FollowvelSubjThresEnableStop'
                             */
extern real32_T rtP_P_LongCtrl_FollowvelSubjThresEnableStopAddXAxis[2];
                    /* Variable: P_LongCtrl_FollowvelSubjThresEnableStopAddXAxis
                     * Referenced by: '<S69>/1-D Lookup Table'
                     */
extern real32_T rtP_P_LongCtrl_FollowvelSubjThresEnableStopAddYAxis[2];
                    /* Variable: P_LongCtrl_FollowvelSubjThresEnableStopAddYAxis
                     * Referenced by: '<S69>/1-D Lookup Table'
                     */
extern real32_T rtP_P_LongCtrl_FollowvelTarAbsThresForceStop;
                           /* Variable: P_LongCtrl_FollowvelTarAbsThresForceStop
                            * Referenced by: '<S67>/P_LongCtrl_FollowvelTarAbsThresForceStop'
                            */
extern real32_T rtP_P_LongCtrl_FollowvelTargAbsMaxJudgeStationaryTarget;
                /* Variable: P_LongCtrl_FollowvelTargAbsMaxJudgeStationaryTarget
                 * Referenced by: '<S55>/StandstillOverride'
                 */
extern real32_T rtP_P_LongCtrl_FollowvelTargRelThresActiveTOR;
                          /* Variable: P_LongCtrl_FollowvelTargRelThresActiveTOR
                           * Referenced by: '<S156>/TakeOver'
                           */
extern real32_T rtP_P_LongCtrl_ICCurvatureLimitSpdXAxis[10];
                                /* Variable: P_LongCtrl_ICCurvatureLimitSpdXAxis
                                 * Referenced by: '<S106>/1-D Lookup Table2'
                                 */
extern real32_T rtP_P_LongCtrl_ICCurvatureLimitSpdYAxis[10];
                                /* Variable: P_LongCtrl_ICCurvatureLimitSpdYAxis
                                 * Referenced by: '<S106>/1-D Lookup Table2'
                                 */
extern real32_T rtP_P_LongCtrl_ICCurvatureMapLimitSpdXAxis[10];
                             /* Variable: P_LongCtrl_ICCurvatureMapLimitSpdXAxis
                              * Referenced by: '<S121>/1-D Lookup Table2'
                              */
extern real32_T rtP_P_LongCtrl_ICCurvatureMapLimitSpdYAxis[10];
                             /* Variable: P_LongCtrl_ICCurvatureMapLimitSpdYAxis
                              * Referenced by: '<S121>/1-D Lookup Table2'
                              */
extern real32_T rtP_P_LongCtrl_ICKapLimitAccelXAxis[10];
                                    /* Variable: P_LongCtrl_ICKapLimitAccelXAxis
                                     * Referenced by: '<S107>/1-D Lookup Table1'
                                     */
extern real32_T rtP_P_LongCtrl_ICKapLimitAccelYAxis[10];
                                    /* Variable: P_LongCtrl_ICKapLimitAccelYAxis
                                     * Referenced by: '<S107>/1-D Lookup Table1'
                                     */
extern real32_T rtP_P_LongCtrl_ICKapLimitSpdXAxis[10];
                                      /* Variable: P_LongCtrl_ICKapLimitSpdXAxis
                                       * Referenced by: '<S107>/1-D Lookup Table3'
                                       */
extern real32_T rtP_P_LongCtrl_ICKapLimitSpdYAxis[10];
                                      /* Variable: P_LongCtrl_ICKapLimitSpdYAxis
                                       * Referenced by: '<S107>/1-D Lookup Table3'
                                       */
extern real32_T rtP_P_LongCtrl_ICKapUpperJerkMin;/* Variable: P_LongCtrl_ICKapUpperJerkMin
                                                  * Referenced by: '<S110>/Saturation'
                                                  */
extern real32_T rtP_P_LongCtrl_ICUpperJerkNegVLCInternalAcc;
                            /* Variable: P_LongCtrl_ICUpperJerkNegVLCInternalAcc
                             * Referenced by:
                             *   '<S110>/Constant2'
                             *   '<S110>/Constant3'
                             */
extern real32_T rtP_P_LongCtrl_ICaccelThresEnableLine;
                                  /* Variable: P_LongCtrl_ICaccelThresEnableLine
                                   * Referenced by: '<S123>/Constant'
                                   */
extern real32_T rtP_P_LongCtrl_ICcoefCurvatureCharX1[4];
                                   /* Variable: P_LongCtrl_ICcoefCurvatureCharX1
                                    * Referenced by: '<S128>/2-D Lookup Table1'
                                    */
extern real32_T rtP_P_LongCtrl_ICcoefCurvatureCharX2[4];
                                   /* Variable: P_LongCtrl_ICcoefCurvatureCharX2
                                    * Referenced by: '<S128>/2-D Lookup Table1'
                                    */
extern real32_T rtP_P_LongCtrl_ICcoefCurvatureCharY[16];
                                    /* Variable: P_LongCtrl_ICcoefCurvatureCharY
                                     * Referenced by: '<S128>/2-D Lookup Table1'
                                     */
extern real32_T rtP_P_LongCtrl_ICdeltaAccelLowerBand;
                                   /* Variable: P_LongCtrl_ICdeltaAccelLowerBand
                                    * Referenced by: '<S105>/P_LongCtrl_ICdeltaAccelLowerBand'
                                    */
extern real32_T rtP_P_LongCtrl_ICdeltaAccelUpperBand;
                                   /* Variable: P_LongCtrl_ICdeltaAccelUpperBand
                                    * Referenced by: '<S105>/P_LongCtrl_ICdeltaAccelUpperBand'
                                    */
extern real32_T rtP_P_LongCtrl_IClowerJerkICCharXAxis[3];
                                  /* Variable: P_LongCtrl_IClowerJerkICCharXAxis
                                   * Referenced by: '<S110>/1-D Lookup Table1'
                                   */
extern real32_T rtP_P_LongCtrl_IClowerJerkICCharYAxis[3];
                                  /* Variable: P_LongCtrl_IClowerJerkICCharYAxis
                                   * Referenced by: '<S110>/1-D Lookup Table1'
                                   */
extern real32_T rtP_P_LongCtrl_IClowerJerkPosVLCInternalAccMax;
                         /* Variable: P_LongCtrl_IClowerJerkPosVLCInternalAccMax
                          * Referenced by: '<S110>/Constant1'
                          */
extern real32_T rtP_P_LongCtrl_IClowerJerkPosVLCInternalAccMin;
                         /* Variable: P_LongCtrl_IClowerJerkPosVLCInternalAccMin
                          * Referenced by: '<S110>/Constant'
                          */
extern real32_T rtP_P_LongCtrl_ICtAcceleTimeNegCurvatureMap;
                            /* Variable: P_LongCtrl_ICtAcceleTimeNegCurvatureMap
                             * Referenced by: '<S117>/Constant'
                             */
extern real32_T rtP_P_LongCtrl_ICtAcceleTimePosCurvatureMap;
                            /* Variable: P_LongCtrl_ICtAcceleTimePosCurvatureMap
                             * Referenced by: '<S118>/Constant'
                             */
extern real32_T rtP_P_LongCtrl_ICtDecel;/* Variable: P_LongCtrl_ICtDecel
                                         * Referenced by:
                                         *   '<S106>/Constant2'
                                         *   '<S107>/Constant2'
                                         */
extern real32_T rtP_P_LongCtrl_ICupperJerkICCharXAxis[4];
                                  /* Variable: P_LongCtrl_ICupperJerkICCharXAxis
                                   * Referenced by: '<S110>/1-D Lookup Table'
                                   */
extern real32_T rtP_P_LongCtrl_ICupperJerkICCharYAxis[4];
                                  /* Variable: P_LongCtrl_ICupperJerkICCharYAxis
                                   * Referenced by: '<S110>/1-D Lookup Table'
                                   */
extern real32_T rtP_P_LongCtrl_KeepLaneSurDis;/* Variable: P_LongCtrl_KeepLaneSurDis
                                               * Referenced by: '<S111>/Constant4'
                                               */
extern real32_T rtP_P_LongCtrl_KeepLaneTime;/* Variable: P_LongCtrl_KeepLaneTime
                                             * Referenced by: '<S111>/Constant3'
                                             */
extern real32_T rtP_P_LongCtrl_LaneAvailDis;/* Variable: P_LongCtrl_LaneAvailDis
                                             * Referenced by:
                                             *   '<S138>/Constant'
                                             *   '<S139>/Constant'
                                             */
extern real32_T rtP_P_LongCtrl_LaneAvailStd;/* Variable: P_LongCtrl_LaneAvailStd
                                             * Referenced by: '<S111>/Constant'
                                             */
extern real32_T rtP_P_LongCtrl_LaneAvailStdAverage;
                                     /* Variable: P_LongCtrl_LaneAvailStdAverage
                                      * Referenced by: '<S111>/Constant2'
                                      */
extern real32_T rtP_P_LongCtrl_LaneAvailStdMax;/* Variable: P_LongCtrl_LaneAvailStdMax
                                                * Referenced by: '<S111>/Constant1'
                                                */
extern real32_T rtP_P_LongCtrl_LaneAvailTime;/* Variable: P_LongCtrl_LaneAvailTime
                                              * Referenced by:
                                              *   '<S136>/Constant'
                                              *   '<S137>/Constant'
                                              */
extern real32_T rtP_P_LongCtrl_ORDaccelDevLowerBand;
                                    /* Variable: P_LongCtrl_ORDaccelDevLowerBand
                                     * Referenced by: '<S145>/Constant1'
                                     */
extern real32_T rtP_P_LongCtrl_ORDaccelDevUpperBand;
                                    /* Variable: P_LongCtrl_ORDaccelDevUpperBand
                                     * Referenced by: '<S145>/Constant'
                                     */
extern real32_T rtP_P_LongCtrl_ORDlowerJerk;/* Variable: P_LongCtrl_ORDlowerJerk
                                             * Referenced by: '<S145>/Constant3'
                                             */
extern real32_T rtP_P_LongCtrl_ORDtAcceleTimeNeg;/* Variable: P_LongCtrl_ORDtAcceleTimeNeg
                                                  * Referenced by: '<S148>/Constant'
                                                  */
extern real32_T rtP_P_LongCtrl_ORDtAcceleTimePos;/* Variable: P_LongCtrl_ORDtAcceleTimePos
                                                  * Referenced by: '<S149>/Constant'
                                                  */
extern real32_T rtP_P_LongCtrl_ORDupperJerk;/* Variable: P_LongCtrl_ORDupperJerk
                                             * Referenced by: '<S145>/Constant2'
                                             */
extern real32_T rtP_P_LongCtrl_ORDvelDeltaEnableThres;
                                  /* Variable: P_LongCtrl_ORDvelDeltaEnableThres
                                   * Referenced by: '<S18>/ORD'
                                   */
extern real32_T rtP_P_LongCtrl_SJVlcInternalAccThresEnableBrkPrefer;
                    /* Variable: P_LongCtrl_SJVlcInternalAccThresEnableBrkPrefer
                     * Referenced by: '<S160>/Constant'
                     */
extern real32_T rtP_P_LongCtrl_SJaccelFollowThresEnableBrkPrefer;
                       /* Variable: P_LongCtrl_SJaccelFollowThresEnableBrkPrefer
                        * Referenced by: '<S158>/Constant'
                        */
extern real32_T rtP_P_LongCtrl_SJaccelSubjPlanOptThresEnableBrkPrefer;
                  /* Variable: P_LongCtrl_SJaccelSubjPlanOptThresEnableBrkPrefer
                   * Referenced by: '<S159>/Constant'
                   */
extern real32_T rtP_P_LongCtrl_SJaccelSubjThresEnableBrkPrefer;
                         /* Variable: P_LongCtrl_SJaccelSubjThresEnableBrkPrefer
                          * Referenced by: '<S162>/Constant'
                          */
extern real32_T rtP_P_LongCtrl_SJaxvRoadSlopeThresEnableBrkPrefer;
                      /* Variable: P_LongCtrl_SJaxvRoadSlopeThresEnableBrkPrefer
                       * Referenced by: '<S161>/Constant'
                       */
extern real32_T rtP_P_LongCtrl_SJdStop;/* Variable: P_LongCtrl_SJdStop
                                        * Referenced by: '<S167>/P_LongCtrl_SJdStop'
                                        */
extern real32_T rtP_P_LongCtrl_SJttcThresEnableBrkPrefer;
                               /* Variable: P_LongCtrl_SJttcThresEnableBrkPrefer
                                * Referenced by: '<S163>/Constant'
                                */
extern real32_T rtP_P_LongCtrl_SJvelSubjThresEnableBrkPrefer;
                           /* Variable: P_LongCtrl_SJvelSubjThresEnableBrkPrefer
                            * Referenced by: '<S165>/Constant'
                            */
extern real32_T rtP_P_LongCtrl_WaitTime;/* Variable: P_LongCtrl_WaitTime
                                         * Referenced by: '<S156>/Constant'
                                         */
extern real32_T rtP_P_LongCtrl_accelTargAbsThrd;/* Variable: P_LongCtrl_accelTargAbsThrd
                                                 * Referenced by: '<S74>/Constant3'
                                                 */
extern real32_T rtP_P_LongCtrl_distThreDecToStopXAxis[3];
                                  /* Variable: P_LongCtrl_distThreDecToStopXAxis
                                   * Referenced by: '<S153>/1-D Lookup Table'
                                   */
extern real32_T rtP_P_LongCtrl_distThreDecToStopYAxis[3];
                                  /* Variable: P_LongCtrl_distThreDecToStopYAxis
                                   * Referenced by: '<S153>/1-D Lookup Table'
                                   */
extern real32_T rtP_P_LongCtrl_tCycle; /* Variable: P_LongCtrl_tCycle
                                        * Referenced by:
                                        *   '<S9>/P_LongCtrltCycle'
                                        *   '<S9>/P_LongCtrltCycle1'
                                        *   '<S9>/P_LongCtrltCycle2'
                                        *   '<S9>/P_LongCtrltCycle6'
                                        */
extern real32_T rtP_P_LongCtrl_velSubjThreDecToStop;
                                    /* Variable: P_LongCtrl_velSubjThreDecToStop
                                     * Referenced by: '<S153>/DeceleToStop'
                                     */
extern real32_T rtP_P_LongCtrl_velTargetThreDecleToStop;
                                /* Variable: P_LongCtrl_velTargetThreDecleToStop
                                 * Referenced by: '<S153>/DeceleToStop'
                                 */
extern real32_T rtP_P_PLAN_ALC_DPCthresholdLcDrvLv1;
                                    /* Variable: P_PLAN_ALC_DPCthresholdLcDrvLv1
                                     * Referenced by: '<S270>/P0DeltaSpd_kph3'
                                     */
extern real32_T rtP_P_PLAN_ALC_DPCthresholdLcDrvLv2;
                                    /* Variable: P_PLAN_ALC_DPCthresholdLcDrvLv2
                                     * Referenced by: '<S270>/P0DeltaSpd_kph4'
                                     */
extern real32_T rtP_P_PLAN_ALC_DPCthresholdLcDrvLv3;
                                    /* Variable: P_PLAN_ALC_DPCthresholdLcDrvLv3
                                     * Referenced by: '<S270>/P0DeltaSpd_kph5'
                                     */
extern real32_T rtP_P_PLAN_ALC_DynamicDPCthreshold;
                                     /* Variable: P_PLAN_ALC_DynamicDPCthreshold
                                      * Referenced by:
                                      *   '<S186>/Constant1'
                                      *   '<S186>/Constant3'
                                      *   '<S187>/Constant3'
                                      *   '<S187>/Constant6'
                                      *   '<S429>/Constant'
                                      *   '<S438>/Constant'
                                      *   '<S446>/Constant'
                                      *   '<S447>/Constant'
                                      *   '<S449>/Constant'
                                      */
extern real32_T rtP_P_PLAN_ALC_FWheelPreTime;/* Variable: P_PLAN_ALC_FWheelPreTime
                                              * Referenced by: '<S225>/Constant12'
                                              */
extern real32_T rtP_P_PLAN_ALC_LCDeltaTmeGap;/* Variable: P_PLAN_ALC_LCDeltaTmeGap
                                              * Referenced by:
                                              *   '<S270>/LCDeltaTmeGap'
                                              *   '<S339>/LCDeltaTmeGap'
                                              */
extern real32_T rtP_P_PLAN_ALC_LcCancelDPCThreshold;
                                    /* Variable: P_PLAN_ALC_LcCancelDPCThreshold
                                     * Referenced by:
                                     *   '<S214>/Constant'
                                     *   '<S216>/Constant'
                                     */
extern real32_T rtP_P_PLAN_ALC_LcCancelRoadWidthOffset;
                                 /* Variable: P_PLAN_ALC_LcCancelRoadWidthOffset
                                  * Referenced by:
                                  *   '<S225>/Constant1'
                                  *   '<S225>/Constant2'
                                  */
extern real32_T rtP_P_PLAN_ALC_LcCancelRoadWidthOffsetForDPC;
                           /* Variable: P_PLAN_ALC_LcCancelRoadWidthOffsetForDPC
                            * Referenced by: '<S225>/Constant'
                            */
extern real32_T rtP_P_PLAN_ALC_LcCurvatureInhibitionValueBrkPoints[14];
                     /* Variable: P_PLAN_ALC_LcCurvatureInhibitionValueBrkPoints
                      * Referenced by: '<S188>/1-D Lookup Table'
                      */
extern real32_T rtP_P_PLAN_ALC_LcCurvatureInhibitionValueTable[14];
                         /* Variable: P_PLAN_ALC_LcCurvatureInhibitionValueTable
                          * Referenced by: '<S188>/1-D Lookup Table'
                          */
extern real32_T rtP_P_PLAN_ALC_LcDrvHMILineValidFtime;
                                  /* Variable: P_PLAN_ALC_LcDrvHMILineValidFtime
                                   * Referenced by:
                                   *   '<S428>/Constant'
                                   *   '<S430>/Constant'
                                   *   '<S437>/Constant'
                                   *   '<S439>/Constant'
                                   *   '<S448>/Constant'
                                   */
extern real32_T rtP_P_PLAN_ALC_LcDrv_DyDiffThreshold;
                                   /* Variable: P_PLAN_ALC_LcDrv_DyDiffThreshold
                                    * Referenced by:
                                    *   '<S232>/Constant'
                                    *   '<S241>/Constant'
                                    */
extern real32_T rtP_P_PLAN_ALC_LcFinishDyDiffBrkPoint[4];
                                  /* Variable: P_PLAN_ALC_LcFinishDyDiffBrkPoint
                                   * Referenced by: '<S184>/1-D Lookup Table1'
                                   */
extern real32_T rtP_P_PLAN_ALC_LcFinishDyDiffRwFactorForAP;
                             /* Variable: P_PLAN_ALC_LcFinishDyDiffRwFactorForAP
                              * Referenced by: '<S182>/Constant5'
                              */
extern real32_T rtP_P_PLAN_ALC_LcFinishDyDiffRwFactorForHMI;
                            /* Variable: P_PLAN_ALC_LcFinishDyDiffRwFactorForHMI
                             * Referenced by: '<S189>/Constant4'
                             */
extern real32_T rtP_P_PLAN_ALC_LcFinishDyDiffTableValue[4];
                                /* Variable: P_PLAN_ALC_LcFinishDyDiffTableValue
                                 * Referenced by: '<S184>/1-D Lookup Table1'
                                 */
extern real32_T rtP_P_PLAN_ALC_LcOverTkDPCthreshold;
                                    /* Variable: P_PLAN_ALC_LcOverTkDPCthreshold
                                     * Referenced by:
                                     *   '<S213>/Constant'
                                     *   '<S215>/Constant'
                                     */
extern real32_T rtP_P_PLAN_ALC_LcOverTkRearVehTTClimit;
                                 /* Variable: P_PLAN_ALC_LcOverTkRearVehTTClimit
                                  * Referenced by: '<S329>/Constant'
                                  */
extern real32_T rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv1;
                                    /* Variable: P_PLAN_ALC_LciOverTkDeltaSpdLv1
                                     * Referenced by: '<S339>/P0DeltaSpd_kph'
                                     */
extern real32_T rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv2;
                                    /* Variable: P_PLAN_ALC_LciOverTkDeltaSpdLv2
                                     * Referenced by: '<S339>/P0DeltaSpd_kph1'
                                     */
extern real32_T rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv3;
                                    /* Variable: P_PLAN_ALC_LciOverTkDeltaSpdLv3
                                     * Referenced by: '<S339>/P0DeltaSpd_kph2'
                                     */
extern real32_T rtP_P_PLAN_ALC_OveTkrSupDist;/* Variable: P_PLAN_ALC_OveTkrSupDist
                                              * Referenced by: '<S347>/Constant'
                                              */
extern real32_T rtP_P_PLAN_ALC_vMinPreLC_Noh;/* Variable: P_PLAN_ALC_vMinPreLC_Noh
                                              * Referenced by:
                                              *   '<S186>/Constant4'
                                              *   '<S186>/Constant5'
                                              *   '<S187>/Constant4'
                                              */
extern real32_T rtP_P_PLAN_ALC_vMinPreLC_OverTk;/* Variable: P_PLAN_ALC_vMinPreLC_OverTk
                                                 * Referenced by:
                                                 *   '<S307>/Constant'
                                                 *   '<S314>/Constant'
                                                 */
extern real32_T rtP_P_PLAN_DPC_FrontObj_DX_00[24];/* Variable: P_PLAN_DPC_FrontObj_DX_00
                                                   * Referenced by:
                                                   *   '<S484>/Constant12'
                                                   *   '<S485>/Constant12'
                                                   *   '<S486>/Constant9'
                                                   *   '<S487>/Constant9'
                                                   */
extern real32_T rtP_P_PLAN_DPC_FrontObj_DX_03[24];/* Variable: P_PLAN_DPC_FrontObj_DX_03
                                                   * Referenced by:
                                                   *   '<S484>/Constant10'
                                                   *   '<S485>/Constant10'
                                                   *   '<S486>/Constant7'
                                                   *   '<S487>/Constant7'
                                                   */
extern real32_T rtP_P_PLAN_DPC_FrontObj_DX_08[24];/* Variable: P_PLAN_DPC_FrontObj_DX_08
                                                   * Referenced by:
                                                   *   '<S484>/Constant8'
                                                   *   '<S485>/Constant8'
                                                   *   '<S486>/Constant5'
                                                   *   '<S487>/Constant5'
                                                   */
extern real32_T rtP_P_PLAN_DPC_FrontObj_DX_1[24];/* Variable: P_PLAN_DPC_FrontObj_DX_1
                                                  * Referenced by:
                                                  *   '<S484>/Constant6'
                                                  *   '<S485>/Constant6'
                                                  *   '<S486>/Constant2'
                                                  *   '<S487>/Constant2'
                                                  */
extern real32_T rtP_P_PLAN_DPC_HWALineRearA2Factor;
                                     /* Variable: P_PLAN_DPC_HWALineRearA2Factor
                                      * Referenced by:
                                      *   '<S461>/Constant'
                                      *   '<S462>/Constant22'
                                      *   '<S462>/Constant24'
                                      *   '<S462>/Constant61'
                                      */
extern real32_T rtP_P_PLAN_DPC_HWALineRearA3Factor;
                                     /* Variable: P_PLAN_DPC_HWALineRearA3Factor
                                      * Referenced by:
                                      *   '<S461>/Constant21'
                                      *   '<S462>/Constant25'
                                      *   '<S462>/Constant26'
                                      *   '<S462>/Constant63'
                                      */
extern real32_T rtP_P_PLAN_DPC_HearObj_DX_00[24];/* Variable: P_PLAN_DPC_HearObj_DX_00
                                                  * Referenced by:
                                                  *   '<S484>/Constant14'
                                                  *   '<S485>/Constant14'
                                                  *   '<S486>/Constant11'
                                                  *   '<S487>/Constant11'
                                                  */
extern real32_T rtP_P_PLAN_DPC_HearObj_DX_03[24];/* Variable: P_PLAN_DPC_HearObj_DX_03
                                                  * Referenced by:
                                                  *   '<S484>/Constant16'
                                                  *   '<S485>/Constant16'
                                                  *   '<S486>/Constant13'
                                                  *   '<S487>/Constant13'
                                                  */
extern real32_T rtP_P_PLAN_DPC_HearObj_DX_08[24];/* Variable: P_PLAN_DPC_HearObj_DX_08
                                                  * Referenced by:
                                                  *   '<S484>/Constant18'
                                                  *   '<S485>/Constant18'
                                                  *   '<S486>/Constant15'
                                                  *   '<S487>/Constant15'
                                                  */
extern real32_T rtP_P_PLAN_DPC_HearObj_DX_11[24];/* Variable: P_PLAN_DPC_HearObj_DX_11
                                                  * Referenced by:
                                                  *   '<S484>/Constant20'
                                                  *   '<S485>/Constant20'
                                                  *   '<S486>/Constant17'
                                                  *   '<S487>/Constant17'
                                                  */
extern real32_T rtP_P_PLAN_DPC_ObjAxLPalpha;/* Variable: P_PLAN_DPC_ObjAxLPalpha
                                             * Referenced by: '<S489>/Constant2'
                                             */
extern real32_T rtP_P_PLAN_DPC_ObjDxLPalpha;/* Variable: P_PLAN_DPC_ObjDxLPalpha
                                             * Referenced by: '<S489>/Constant'
                                             */
extern real32_T rtP_P_PLAN_DPC_ObjDyLPalpha;/* Variable: P_PLAN_DPC_ObjDyLPalpha
                                             * Referenced by: '<S489>/Constant3'
                                             */
extern real32_T rtP_P_PLAN_DPC_ObjVxLPalpha;/* Variable: P_PLAN_DPC_ObjVxLPalpha
                                             * Referenced by: '<S489>/Constant1'
                                             */
extern real32_T rtP_P_PLAN_DPC_danqianleida_maxDx;
                                      /* Variable: P_PLAN_DPC_danqianleida_maxDx
                                       * Referenced by: '<S493>/Constant'
                                       */
extern real32_T rtP_P_PLAN_DPC_danqianleida_minDx;
                                      /* Variable: P_PLAN_DPC_danqianleida_minDx
                                       * Referenced by: '<S492>/Constant'
                                       */
extern real32_T rtP_P_PLAN_DPC_xiangduisudu_kmh[24];/* Variable: P_PLAN_DPC_xiangduisudu_kmh
                                                     * Referenced by:
                                                     *   '<S484>/Constant1'
                                                     *   '<S484>/Constant11'
                                                     *   '<S484>/Constant13'
                                                     *   '<S484>/Constant15'
                                                     *   '<S484>/Constant17'
                                                     *   '<S484>/Constant19'
                                                     *   '<S484>/Constant7'
                                                     *   '<S484>/Constant9'
                                                     *   '<S485>/Constant1'
                                                     *   '<S485>/Constant11'
                                                     *   '<S485>/Constant13'
                                                     *   '<S485>/Constant15'
                                                     *   '<S485>/Constant17'
                                                     *   '<S485>/Constant19'
                                                     *   '<S485>/Constant7'
                                                     *   '<S485>/Constant9'
                                                     *   '<S486>/Constant'
                                                     *   '<S486>/Constant10'
                                                     *   '<S486>/Constant12'
                                                     *   '<S486>/Constant14'
                                                     *   '<S486>/Constant16'
                                                     *   '<S486>/Constant4'
                                                     *   '<S486>/Constant6'
                                                     *   '<S486>/Constant8'
                                                     *   '<S487>/Constant'
                                                     *   '<S487>/Constant10'
                                                     *   '<S487>/Constant12'
                                                     *   '<S487>/Constant14'
                                                     *   '<S487>/Constant16'
                                                     *   '<S487>/Constant4'
                                                     *   '<S487>/Constant6'
                                                     *   '<S487>/Constant8'
                                                     */
extern uint16_T rtP_P_PLAN_ALC_LcCancelLaneChangeReqDspTimeCnt;
                         /* Variable: P_PLAN_ALC_LcCancelLaneChangeReqDspTimeCnt
                          * Referenced by:
                          *   '<S414>/Constant6'
                          *   '<S424>/Constant'
                          *   '<S425>/Constant'
                          */
extern boolean_T rtP_P_LongCtrl_AddVelEnable;/* Variable: P_LongCtrl_AddVelEnable
                                              * Referenced by: '<S67>/P_LongCtrl_AddVelEnable'
                                              */
extern boolean_T rtP_P_LongCtrl_CCLCIncSetSpdEnable;
                                     /* Variable: P_LongCtrl_CCLCIncSetSpdEnable
                                      * Referenced by: '<S12>/MATLAB Function'
                                      */
extern boolean_T rtP_P_LongCtrl_FollowStartUpAssist;
                                     /* Variable: P_LongCtrl_FollowStartUpAssist
                                      * Referenced by: '<S56>/Chart1'
                                      */
extern boolean_T rtP_P_LongCtrl_FollowVelSubjForceStopEnable;
                            /* Variable: P_LongCtrl_FollowVelSubjForceStopEnable
                             * Referenced by: '<S69>/P_LongCtrl_FollowvelSubjThresEnableStop1'
                             */
extern boolean_T rtP_P_LongCtrl_ICCurveDecelEnable;
                                      /* Variable: P_LongCtrl_ICCurveDecelEnable
                                       * Referenced by: '<S109>/P_LongCtrl_ICCurveDecelEnable'
                                       */
extern boolean_T rtP_P_LongCtrl_IC_EHRV2Enable;/* Variable: P_LongCtrl_IC_EHRV2Enable
                                                * Referenced by: '<S108>/Chart'
                                                */
extern boolean_T rtP_P_LongCtrl_ORDdecelEnable;/* Variable: P_LongCtrl_ORDdecelEnable
                                                * Referenced by: '<S18>/ORD'
                                                */
extern boolean_T rtP_P_PLAN_DPC_danqianleida_kaiguan;
                                    /* Variable: P_PLAN_DPC_danqianleida_kaiguan
                                     * Referenced by: '<S488>/Constant1'
                                     */
extern boolean_T rtP_P_PLAN_LcCancelTestEnable;/* Variable: P_PLAN_LcCancelTestEnable
                                                * Referenced by:
                                                *   '<S184>/Constant'
                                                *   '<S184>/Constant2'
                                                */
extern uint8_T rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntDrv;
                         /* Variable: P_PLAN_ALC_DPCExtraMultiFrameConfirmCntDrv
                          * Referenced by:
                          *   '<S244>/Constant'
                          *   '<S245>/Constant'
                          */
extern uint8_T rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntNoh;
                         /* Variable: P_PLAN_ALC_DPCExtraMultiFrameConfirmCntNoh
                          * Referenced by:
                          *   '<S293>/Constant'
                          *   '<S294>/Constant'
                          */
extern uint8_T rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntOverTk;
                      /* Variable: P_PLAN_ALC_DPCExtraMultiFrameConfirmCntOverTk
                       * Referenced by:
                       *   '<S321>/Constant'
                       *   '<S322>/Constant'
                       */
extern uint8_T rtP_P_PLAN_ALC_LcDelayCntSetNoh;/* Variable: P_PLAN_ALC_LcDelayCntSetNoh
                                                * Referenced by: '<S4>/Constant'
                                                */
extern uint8_T rtP_P_PLAN_ALC_LcDelayCntSetOverTk;
                                     /* Variable: P_PLAN_ALC_LcDelayCntSetOverTk
                                      * Referenced by: '<S4>/Constant1'
                                      */
extern uint8_T rtP_P_PLAN_ALC_LciDrvExistDefaultDisp;
                                  /* Variable: P_PLAN_ALC_LciDrvExistDefaultDisp
                                   * Referenced by:
                                   *   '<S415>/Constant8'
                                   *   '<S416>/Constant8'
                                   *   '<S417>/Constant8'
                                   *   '<S418>/Constant8'
                                   *   '<S419>/Constant8'
                                   */
extern uint8_T rtP_P_PLAN_ALC_NOHLcSwt;/* Variable: P_PLAN_ALC_NOHLcSwt
                                        * Referenced by: '<S4>/Constant8'
                                        */
extern uint8_T rtP_P_PLAN_ALC_NOHTurnSts;/* Variable: P_PLAN_ALC_NOHTurnSts
                                          * Referenced by: '<S4>/Constant9'
                                          */
extern uint8_T rtP_P_PLAN_ALC_TurnLmpType;/* Variable: P_PLAN_ALC_TurnLmpType
                                           * Referenced by:
                                           *   '<S189>/Constant'
                                           *   '<S189>/Constant11'
                                           */
extern uint8_T rtP_P_PLAN_ALC_vMinPreLC_Drv;/* Variable: P_PLAN_ALC_vMinPreLC_Drv
                                             * Referenced by:
                                             *   '<S187>/Constant5'
                                             *   '<S243>/Constant'
                                             *   '<S247>/Constant'
                                             */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern boolean_T PLAN_ALC_LcOverTkLe_ALCSwtOn;/* '<S319>/Compare' */
extern boolean_T PLAN_ALC_LcOverTkRi_ALCSwtOn;/* '<S327>/Compare' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real32_T P_Global_DxvFrontBumper_m;/* Variable: P_Global_DxvFrontBumper_m
                                           * Referenced by:
                                           *   '<S460>/Constant'
                                           *   '<S461>/Constant22'
                                           */
extern real32_T P_Global_DxvRearBumper_m;/* Variable: P_Global_DxvRearBumper_m
                                          * Referenced by:
                                          *   '<S460>/Constant1'
                                          *   '<S461>/Constant23'
                                          */
extern real32_T P_Global_WheelBase_m;  /* Variable: P_Global_WheelBase_m
                                        * Referenced by: '<S225>/Constant10'
                                        */
extern real32_T P_Global_WheelTrack_m; /* Variable: P_Global_WheelTrack_m
                                        * Referenced by: '<S225>/Constant11'
                                        */
extern void PubIfDecisionPLAN_MDL_Init(boolean_T
  *rty_PLAN_Longctrl_DecelToStopReq);
extern void PubIfDecisionPLAN_MDL_Reset(void);
extern void PubIfDecisionPLAN_MDL_Start(void);
extern void PubIfDecisionPLAN_MDL_Update(const TOS_LC_BUS *rtu_TOS_LC, const
  TOS_ACCP0_BUS *rtu_TOS_ACCP0, const TOS_ACCP2_BUS *rtu_TOS_ACCP2, const
  TOS_ACCP3_BUS *rtu_TOS_ACCP3, const uint32_T *rtu_TOS_UpdateCnt, const
  VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL, const VSM_HMI_BUS *rtu_VSM_HMI, const
  real32_T *rtu_LONC_VLC_InternalAcc, const VSM_UOM_LC_BUS *rtu_VSM_UOM_LC,
  const uint32_T *rtu_RFM_UpdateCnt);
extern void PubIfDecisionPLAN_MDL(const RFM_LINE_BUS *rtu_RFM_LINE_L1, const
  RFM_LINE_BUS *rtu_RFM_LINE_R1, const LSM_HWA_BUS *rtu_LSM_HWA, const
  LSM_ESS_BUS *rtu_LSM_ESS, const TOS_LC_BUS *rtu_TOS_LC, const TOS_ACCP0_BUS
  *rtu_TOS_ACCP0, const TOS_ACCP2_BUS *rtu_TOS_ACCP2, const TOS_ACCP3_BUS
  *rtu_TOS_ACCP3, const uint32_T *rtu_TOS_UpdateCnt, const VSM_LON_CTRL_BUS
  *rtu_VSM_LON_CTRL, const real32_T *rtu_vxvRefMs, const real32_T *rtu_axvRefMs2,
  const real32_T *rtu_axvRoadSlopeMs2, const real32_T *rtu_kapTraj, const
  VCAN_ESP_MSG_BUS *rtu_PLAN_VCAN_ESP, const VSM_HMI_BUS *rtu_VSM_HMI, const
  real32_T *rtu_LONC_VLC_InternalAcc, const uint8_T *rtu_LSM_PilotTurnSwSts,
  const VSM_UOM_LC_BUS *rtu_VSM_UOM_LC, const uint16_T *rtu_LSM_PilotSPLDist,
  const uint8_T *rtu_LSM_PilotSPL, const real32_T
  *rtu_EHRV2_ROAD_INFO_i_road_curvature, const real32_T
  *rtu_EHRV2_ROAD_INFO_i_road_curvature_far, const uint16_T
  *rtu_EHRV2_ROAD_INFO_i_road_curvature_far_distance, const real32_T
  rtu_EHRV2_ROAD_INFO_i_road_curvature_value_matrix[10], const real32_T
  rtu_EHRV2_ROAD_INFO_i_road_curvature_distance_matrix[10], const uint8_T
  *rtu_EHRV2_ROAD_INFO_i_road_curvature_matrix_size, const uint32_T
  *rtu_RFM_UpdateCnt, PLAN_DPC_ESS_BUS *rty_PLAN_DPC_ESS, PLAN_ALC_DECS_BUS
  *rty_PLAN_ALC_DECS, PLAN_ACCPLAN_BUS *rty_PLAN_ACCPLAN, boolean_T
  *rty_PLAN_HMI_BUS_tor, uint8_T *rty_PLAN_HMI_BUS_ACC_TgtObjBarDisp, uint8_T
  *rty_PLAN_HMI_BUS_ACC_LeTgtObjBarDisp, uint8_T
  *rty_PLAN_HMI_BUS_ACC_RiTgtObjBarDisp, boolean_T
  *rty_PLAN_HMI_BUS_IntelligentCurveActive, boolean_T
  *rty_PLAN_Longctrl_DecelToStopReq, boolean_T
  *rty_PLAN_DriverOffConditionFulfilled);

/* Model reference registration function */
extern void PubIfDecisionPLAN_MDL_initialize(const char_T **rt_errorStatus);

#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

extern void PubIfDecisionPLAN_MDL_IfActionSubsystem(uint16_T rtu_In1, uint16_T
  *rty_Out1, B_IfActionSubsystem_PubIfDecisionPLAN_MDL_T *localB);
extern void PubIfDecisionPLAN_MDL_IfActionSubsystem1(uint16_T *rty_Out1);
extern void PubIfDecisionPLAN_MDL_SigHold1_Init
  (DW_SigHold1_PubIfDecisionPLAN_MDL_T *localDW);
extern void PubIfDecisionPLAN_MDL_SigHold1_Reset
  (DW_SigHold1_PubIfDecisionPLAN_MDL_T *localDW);
extern void PubIfDecisionPLAN_MDL_SigHold1(real32_T rtu_Data, boolean_T
  rtu_Trigger, B_SigHold1_PubIfDecisionPLAN_MDL_T *localB,
  DW_SigHold1_PubIfDecisionPLAN_MDL_T *localDW);
extern void PubIfDecisionPLAN_MDL_MATLABFunction(boolean_T rtu_Trigger,
  boolean_T rtu_TriggerK1, boolean_T rtu_ClearCnt, uint16_T rtu_MaxCnt,
  boolean_T rtu_OutK1, uint16_T rtu_CounterK1, boolean_T rtu_TraggerhappendK1,
  B_MATLABFunction_PubIfDecisionPLAN_MDL_T *localB);
extern void PubIfDecisionPLAN_MDL_MATLABFunction_f(real_T rtu_Alpha, const
  uint8_T rtu_ID[11], const uint8_T rtu_IDK1[11], const real32_T rtu_signal[11],
  const real32_T rtu_resultK1[11], B_MATLABFunction_PubIfDecisionPLAN_MDL_a_T
  *localB);
extern void PubIfDecisionPLAN_MDL_ForIteratorSubsystem2_Init
  (B_ForIteratorSubsystem2_PubIfDecisionPLAN_MDL_T *localB);
extern void PubIfDecisionPLAN_MDL_ForIteratorSubsystem2(const real32_T
  rtu_Obj_Vx[11], const real32_T rtu_Obj_Dx[11],
  B_ForIteratorSubsystem2_PubIfDecisionPLAN_MDL_T *localB);
extern void PubIfDecisionPLAN_MDL_Obj_front_Init
  (B_Obj_front_PubIfDecisionPLAN_MDL_T *localB);
extern void PubIfDecisionPLAN_MDL_Obj_front(const real32_T rtu_obj_Front_sub_Dx
  [11], const real32_T rtu_obj_front_Vx[11], const real32_T rtu_obj_Rear_sub_Dx
  [11], const real32_T rtu_obj_Rear_Vx[11], B_Obj_front_PubIfDecisionPLAN_MDL_T *
  localB);
extern void PubIfDecisionPLAN_MDL_MATLABFunction_g(real32_T rtu_Alpha, const
  uint8_T rtu_ID[11], const uint8_T rtu_IDK1[11], const real32_T rtu_signal[11],
  const real32_T rtu_resultK1[11], B_MATLABFunction_PubIfDecisionPLAN_MDL_n_T
  *localB);

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

extern const PLAN_ALC_DECS_BUS PubIfDecisionPLAN_MDL_rtZPLAN_ALC_DECS_BUS;/* PLAN_ALC_DECS_BUS ground */

#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

extern MdlrefDW_PubIfDecisionPLAN_MDL_T PubIfDecisionPLAN_MDL_MdlrefDW;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_PubIfDecisionPLAN_MDL_c_T PubIfDecisionPLAN_MDL_B;

/* Block states (default storage) */
extern DW_PubIfDecisionPLAN_MDL_f_T PubIfDecisionPLAN_MDL_DW;

#endif                              /*PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'PubIfDecisionPLAN_MDL'
 * '<S1>'   : 'PubIfDecisionPLAN_MDL/Subsystem Reference'
 * '<S2>'   : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Counter Limited'
 * '<S3>'   : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference'
 * '<S4>'   : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1'
 * '<S5>'   : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2'
 * '<S6>'   : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Counter Limited/Increment Real World'
 * '<S7>'   : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Counter Limited/Wrap To Zero'
 * '<S8>'   : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP'
 * '<S9>'   : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP'
 * '<S10>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/AL'
 * '<S11>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/Arbitrate'
 * '<S12>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl'
 * '<S13>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/Compare To Constant1'
 * '<S14>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/Compare To Constant10'
 * '<S15>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/Compare To Constant2'
 * '<S16>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl'
 * '<S17>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC'
 * '<S18>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/ORD'
 * '<S19>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ'
 * '<S20>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/Subsystem'
 * '<S21>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/TargetUpdate'
 * '<S22>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/VlcInternalAccCalc'
 * '<S23>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/AL/AL'
 * '<S24>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/Arbitrate/Arbitrate'
 * '<S25>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/Arbitrate/Subsystem'
 * '<S26>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCCalc'
 * '<S27>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCLimit'
 * '<S28>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AcceleBandCC'
 * '<S29>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/MATLAB Function'
 * '<S30>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/accelCCJerkSelect'
 * '<S31>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/accelJerkCalc'
 * '<S32>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/velPlanCC'
 * '<S33>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCCalc/CCAcceleNeg'
 * '<S34>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCCalc/CCAccelePos'
 * '<S35>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCCalc/CCDeltaVCalc'
 * '<S36>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCCalc/Mph2KphCalc'
 * '<S37>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCLimit/Compare To Constant10'
 * '<S38>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCLimit/Saturation Dynamic2'
 * '<S39>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCLimit/TrueDurationTime'
 * '<S40>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCLimit/TrueDurationTime/If Action Subsystem'
 * '<S41>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AccelCCLimit/TrueDurationTime/If Action Subsystem1'
 * '<S42>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AcceleBandCC/CCNegAcceleBandCalc'
 * '<S43>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/AcceleBandCC/CCPosAcceleBandCalc'
 * '<S44>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/accelCCJerkSelect/Compare To Constant'
 * '<S45>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/accelCCJerkSelect/Compare To Constant1'
 * '<S46>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/CCCtrl/velPlanCC/Chart'
 * '<S47>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/AccelSupression'
 * '<S48>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/AccelTargAbsEnableJudge'
 * '<S49>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/AccelTargFilter'
 * '<S50>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/Counter Limited'
 * '<S51>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/DecelToStopCtrl'
 * '<S52>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/DistDesCalc'
 * '<S53>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/DistRelPlanTerminateCalc'
 * '<S54>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc'
 * '<S55>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/PlausibilityCheck'
 * '<S56>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/SlopeStartupAssist'
 * '<S57>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/TTC'
 * '<S58>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/VelPlan'
 * '<S59>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/VelTargPlanTerminateCalc'
 * '<S60>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/AccelSupression/AccelSupression'
 * '<S61>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/AccelSupression/DecelJudge'
 * '<S62>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/AccelTargAbsEnableJudge/AccelTargAbsEnableJudge'
 * '<S63>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/AccelTargFilter/accelTargAbsFilter'
 * '<S64>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/AccelTargFilter/accelTargAbsFilter/tFiltP0Calc'
 * '<S65>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/Counter Limited/Increment Real World'
 * '<S66>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/Counter Limited/Wrap To Zero'
 * '<S67>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/DecelToStopCtrl/DecelToStopCtrl'
 * '<S68>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/DecelToStopCtrl/DecelToStopCtrl/DecelToStopCtrl'
 * '<S69>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/DecelToStopCtrl/DecelToStopCtrl/P_LongCtrl_velSubjThresEnableStopAdd'
 * '<S70>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/DecelToStopCtrl/DecelToStopCtrl/Subsystem'
 * '<S71>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/DistRelPlanTerminateCalc/DistRelPlanTerminateCalc2'
 * '<S72>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/AccelFollowAfterJerk'
 * '<S73>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/AccelFollowJerkCalc'
 * '<S74>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/DecelFollowJerkCalc'
 * '<S75>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/LP'
 * '<S76>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/Subsystem'
 * '<S77>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/AccelFollowJerkCalc/Compare To Zero'
 * '<S78>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/DecelFollowJerkCalc/Compare To Constant'
 * '<S79>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/DecelFollowJerkCalc/Compare To Constant1'
 * '<S80>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/DecelFollowJerkCalc/Compare To Constant2'
 * '<S81>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/DecelFollowJerkCalc/OverrideJerk'
 * '<S82>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/DecelFollowJerkCalc/OverrideJerk/lowerJerkOverrideCalc'
 * '<S83>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/FollowBandJerkCalc/LP/Compare To Constant'
 * '<S84>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/PlausibilityCheck/PlausibilityCheck'
 * '<S85>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/PlausibilityCheck/StandstillOverride'
 * '<S86>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/PlausibilityCheck/StandstillOverrideAccelLimit'
 * '<S87>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/PlausibilityCheck/Subsystem'
 * '<S88>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/PlausibilityCheck/Subsystem/Compare To Constant'
 * '<S89>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/PlausibilityCheck/Subsystem/Compare To Constant3'
 * '<S90>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/PlausibilityCheck/Subsystem/Compare To Constant4'
 * '<S91>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/SlopeStartupAssist/Chart'
 * '<S92>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/SlopeStartupAssist/Chart1'
 * '<S93>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/SlopeStartupAssist/Compare To Constant'
 * '<S94>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/SlopeStartupAssist/Compare To Constant1'
 * '<S95>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/SlopeStartupAssist/Compare To Constant2'
 * '<S96>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/SlopeStartupAssist/Compare To Constant3'
 * '<S97>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/SlopeStartupAssist/Chart1/coefDistTargRel2AccelCalc'
 * '<S98>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/SlopeStartupAssist/Chart1/coefVelTargRel2AccelCalc'
 * '<S99>'  : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/VelPlan/AccelCorr'
 * '<S100>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/VelPlan/CoefCalc'
 * '<S101>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/VelPlan/Gap'
 * '<S102>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/VelPlan/spdPlanning'
 * '<S103>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/FollowCtrl/VelTargPlanTerminateCalc/VelTarAbsTerminateCalc'
 * '<S104>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/AccelArbIC'
 * '<S105>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/AccelBandIC'
 * '<S106>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/AccelCurvature'
 * '<S107>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/AccelKap'
 * '<S108>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc'
 * '<S109>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc'
 * '<S110>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/JerkIC'
 * '<S111>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1'
 * '<S112>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/AccelArbIC/MATLAB Function'
 * '<S113>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/AccelKap/LP'
 * '<S114>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc/Chart'
 * '<S115>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc/LP'
 * '<S116>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc/Chart/accelICCurvatureMapDistExceed'
 * '<S117>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc/Chart/accelICCurvatureMapNegCalc'
 * '<S118>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc/Chart/accelICCurvatureMapPosCalc'
 * '<S119>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc/Chart/distDesCurvatureMapCalc'
 * '<S120>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc/Chart/velDeltaCalc'
 * '<S121>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc/Chart/velSubjLimChar'
 * '<S122>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfMapCalc/LP/Compare To Constant'
 * '<S123>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/Compare To Constant2'
 * '<S124>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/Compare To Constant3'
 * '<S125>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/If Action Subsystem'
 * '<S126>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/If Action Subsystem1'
 * '<S127>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/LP2'
 * '<S128>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/If Action Subsystem/CurvatureMix'
 * '<S129>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/If Action Subsystem/For Each Subsystem'
 * '<S130>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/If Action Subsystem/CurvatureMix/LP'
 * '<S131>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/If Action Subsystem/For Each Subsystem/CurvatureChar'
 * '<S132>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/If Action Subsystem/For Each Subsystem/CurvatureChar/Curvature1Calc'
 * '<S133>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/If Action Subsystem/For Each Subsystem/CurvatureChar/Curvature2Calc'
 * '<S134>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/CurvatureOfRoadCalc/If Action Subsystem/For Each Subsystem/CurvatureChar/Curvature3Calc'
 * '<S135>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/CalcEgoVehMove'
 * '<S136>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/Compare To Constant2'
 * '<S137>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/Compare To Constant3'
 * '<S138>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/Compare To Constant4'
 * '<S139>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/Compare To Constant5'
 * '<S140>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/Detect Change'
 * '<S141>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/KeepLane'
 * '<S142>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/LineFilter'
 * '<S143>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/Subsystem'
 * '<S144>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/IC/Subsystem1/Subsystem1'
 * '<S145>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/ORD/BandJerkCalc'
 * '<S146>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/ORD/ORD'
 * '<S147>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/ORD/ORD/accelOffRampDistExceed'
 * '<S148>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/ORD/ORD/accelOffRampNegCalc'
 * '<S149>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/ORD/ORD/accelOffRampPosCalc'
 * '<S150>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/ORD/ORD/distDesOffRampCalc'
 * '<S151>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/ORD/ORD/velDeltaCalc'
 * '<S152>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge'
 * '<S153>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DeceleToStop'
 * '<S154>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DisBar'
 * '<S155>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DriverOffConditionFulfilled'
 * '<S156>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/TakeOver'
 * '<S157>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge/Compare To Constant'
 * '<S158>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge/Compare To Constant1'
 * '<S159>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge/Compare To Constant2'
 * '<S160>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge/Compare To Constant3'
 * '<S161>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge/Compare To Constant4'
 * '<S162>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge/Compare To Constant5'
 * '<S163>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge/Compare To Constant6'
 * '<S164>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge/Compare To Constant7'
 * '<S165>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/BrakePreferJudge/Compare To Constant8'
 * '<S166>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DeceleToStop/DeceleToStop'
 * '<S167>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DeceleToStop/DeceleToStop/DresCalc'
 * '<S168>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DeceleToStop/DeceleToStop/VxTargetCalc'
 * '<S169>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DisBar/ACC_DisplayBar1'
 * '<S170>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DisBar/ACC_DisplayBar1/ACC_DisplayBar'
 * '<S171>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DriverOffConditionFulfilled/Compare To Constant'
 * '<S172>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DriverOffConditionFulfilled/Compare To Constant1'
 * '<S173>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/DriverOffConditionFulfilled/DriveOff_Judge'
 * '<S174>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/TakeOver/Chart'
 * '<S175>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/TakeOver/Gap'
 * '<S176>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/SJ/TakeOver/TakeOver'
 * '<S177>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/Subsystem/MATLAB Function'
 * '<S178>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/TargetUpdate/Detect Change'
 * '<S179>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference/AP/AP/VlcInternalAccCalc/Chart'
 * '<S180>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/ALC_DECS'
 * '<S181>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/Decode'
 * '<S182>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter'
 * '<S183>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LCCANCELadapter1'
 * '<S184>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1'
 * '<S185>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv'
 * '<S186>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc'
 * '<S187>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh'
 * '<S188>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk'
 * '<S189>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI'
 * '<S190>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/WorkCond'
 * '<S191>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/ALCHMISM'
 * '<S192>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant'
 * '<S193>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant1'
 * '<S194>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant10'
 * '<S195>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant11'
 * '<S196>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant16'
 * '<S197>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant17'
 * '<S198>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant2'
 * '<S199>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant3'
 * '<S200>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant4'
 * '<S201>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant5'
 * '<S202>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant6'
 * '<S203>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant7'
 * '<S204>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant8'
 * '<S205>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LC2APadapter/Compare To Constant9'
 * '<S206>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LCCANCELadapter1/Compare To Constant'
 * '<S207>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LCCANCELadapter1/Compare To Constant1'
 * '<S208>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LCCANCELadapter1/SigValueHold1'
 * '<S209>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Chart'
 * '<S210>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant'
 * '<S211>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant1'
 * '<S212>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant2'
 * '<S213>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant25'
 * '<S214>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant3'
 * '<S215>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant4'
 * '<S216>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant5'
 * '<S217>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant6'
 * '<S218>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant7'
 * '<S219>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant8'
 * '<S220>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Constant9'
 * '<S221>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Zero1'
 * '<S222>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Compare To Zero2'
 * '<S223>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Detect Decrease1'
 * '<S224>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Detect Decrease2'
 * '<S225>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Subsystem3'
 * '<S226>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Subsystem3/LPF'
 * '<S227>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Subsystem3/Simulink Function'
 * '<S228>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Subsystem3/Simulink Function1'
 * '<S229>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Subsystem3/LPF/MATLAB Function2'
 * '<S230>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Subsystem3/Simulink Function/Subsystem'
 * '<S231>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcCancelFinishCalc1/Subsystem3/Simulink Function/Subsystem1'
 * '<S232>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant1'
 * '<S233>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant10'
 * '<S234>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant11'
 * '<S235>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant12'
 * '<S236>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant13'
 * '<S237>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant14'
 * '<S238>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant15'
 * '<S239>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant16'
 * '<S240>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant17'
 * '<S241>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant18'
 * '<S242>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant19'
 * '<S243>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant2'
 * '<S244>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant20'
 * '<S245>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant21'
 * '<S246>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant22'
 * '<S247>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant23'
 * '<S248>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant24'
 * '<S249>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant25'
 * '<S250>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant27'
 * '<S251>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant28'
 * '<S252>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant3'
 * '<S253>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant4'
 * '<S254>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant5'
 * '<S255>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant6'
 * '<S256>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant7'
 * '<S257>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant8'
 * '<S258>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Constant9'
 * '<S259>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Zero'
 * '<S260>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Compare To Zero1'
 * '<S261>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Counter1'
 * '<S262>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Counter2'
 * '<S263>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Counter3'
 * '<S264>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Counter4'
 * '<S265>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Counter5'
 * '<S266>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Counter6'
 * '<S267>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/DocBlock'
 * '<S268>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/SigValueHold1'
 * '<S269>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/SigValueHold3'
 * '<S270>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Subsystem'
 * '<S271>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Subsystem/Compare To Constant'
 * '<S272>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Subsystem/Compare To Constant1'
 * '<S273>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcDrv/Subsystem/Compare To Constant2'
 * '<S274>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Compare To Constant1'
 * '<S275>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Compare To Constant11'
 * '<S276>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Compare To Constant2'
 * '<S277>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Compare To Constant3'
 * '<S278>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Compare To Constant4'
 * '<S279>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Compare To Constant5'
 * '<S280>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Compare To Constant6'
 * '<S281>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Compare To Constant7'
 * '<S282>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Compare To Zero'
 * '<S283>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/Counter6'
 * '<S284>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/DocBlock'
 * '<S285>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/TrueDurationTime3'
 * '<S286>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/TrueDurationTime3/If Action Subsystem'
 * '<S287>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcMrc/TrueDurationTime3/If Action Subsystem1'
 * '<S288>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant'
 * '<S289>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant1'
 * '<S290>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant10'
 * '<S291>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant11'
 * '<S292>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant12'
 * '<S293>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant2'
 * '<S294>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant21'
 * '<S295>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant3'
 * '<S296>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant4'
 * '<S297>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant6'
 * '<S298>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Constant8'
 * '<S299>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Zero'
 * '<S300>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Compare To Zero2'
 * '<S301>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Counter1'
 * '<S302>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/Counter6'
 * '<S303>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/DocBlock'
 * '<S304>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/TrueDurationTime4'
 * '<S305>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/TrueDurationTime4/If Action Subsystem'
 * '<S306>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcNoh/TrueDurationTime4/If Action Subsystem1'
 * '<S307>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant'
 * '<S308>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant1'
 * '<S309>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant10'
 * '<S310>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant11'
 * '<S311>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant12'
 * '<S312>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant13'
 * '<S313>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant14'
 * '<S314>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant15'
 * '<S315>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant16'
 * '<S316>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant17'
 * '<S317>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant18'
 * '<S318>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant19'
 * '<S319>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant2'
 * '<S320>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant20'
 * '<S321>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant21'
 * '<S322>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant22'
 * '<S323>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant3'
 * '<S324>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant4'
 * '<S325>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant5'
 * '<S326>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant6'
 * '<S327>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant7'
 * '<S328>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant8'
 * '<S329>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Constant9'
 * '<S330>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Zero'
 * '<S331>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Zero1'
 * '<S332>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Zero2'
 * '<S333>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Compare To Zero3'
 * '<S334>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Counter1'
 * '<S335>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Counter2'
 * '<S336>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/DocBlock'
 * '<S337>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/DrvCancelSup'
 * '<S338>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/MATLAB Function'
 * '<S339>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem'
 * '<S340>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem4'
 * '<S341>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5'
 * '<S342>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/TrueDurationTime2'
 * '<S343>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/TrueDurationTime4'
 * '<S344>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/DrvCancelSup/Chart'
 * '<S345>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/DrvCancelSup/Compare To Constant1'
 * '<S346>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/DrvCancelSup/Compare To Constant2'
 * '<S347>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/DrvCancelSup/Compare To Constant3'
 * '<S348>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/DrvCancelSup/Compare To Constant4'
 * '<S349>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/DrvCancelSup/JumpDetectionUint2'
 * '<S350>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem/Compare To Constant'
 * '<S351>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem/Compare To Constant1'
 * '<S352>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem/Compare To Constant2'
 * '<S353>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem4/Compare To Constant1'
 * '<S354>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem4/Compare To Zero'
 * '<S355>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem4/MATLAB Function'
 * '<S356>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem4/SLPDyCalc'
 * '<S357>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Compare To Constant1'
 * '<S358>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Compare To Constant2'
 * '<S359>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Compare To Constant3'
 * '<S360>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Compare To Constant4'
 * '<S361>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Compare To Constant5'
 * '<S362>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Compare To Constant6'
 * '<S363>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Compare To Constant7'
 * '<S364>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Compare To Constant8'
 * '<S365>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Compare To Constant9'
 * '<S366>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Counter1'
 * '<S367>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Counter2'
 * '<S368>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Counter3'
 * '<S369>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Counter4'
 * '<S370>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Counter5'
 * '<S371>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/Detect Change'
 * '<S372>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/DocBlock'
 * '<S373>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/SigHold1'
 * '<S374>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/Subsystem5/SigHold2'
 * '<S375>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/TrueDurationTime2/If Action Subsystem'
 * '<S376>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/TrueDurationTime2/If Action Subsystem1'
 * '<S377>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/TrueDurationTime4/If Action Subsystem'
 * '<S378>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/LcOverTk/TrueDurationTime4/If Action Subsystem1'
 * '<S379>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/ALCHMISM'
 * '<S380>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Chart1'
 * '<S381>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant'
 * '<S382>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant1'
 * '<S383>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant10'
 * '<S384>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant11'
 * '<S385>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant12'
 * '<S386>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant13'
 * '<S387>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant14'
 * '<S388>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant15'
 * '<S389>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant16'
 * '<S390>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant17'
 * '<S391>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant18'
 * '<S392>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant19'
 * '<S393>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant2'
 * '<S394>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant20'
 * '<S395>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant21'
 * '<S396>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant22'
 * '<S397>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant23'
 * '<S398>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant24'
 * '<S399>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant25'
 * '<S400>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant26'
 * '<S401>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant27'
 * '<S402>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant28'
 * '<S403>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant29'
 * '<S404>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant3'
 * '<S405>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant30'
 * '<S406>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant4'
 * '<S407>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant5'
 * '<S408>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant6'
 * '<S409>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant7'
 * '<S410>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant8'
 * '<S411>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Compare To Constant9'
 * '<S412>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Counter1'
 * '<S413>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Counter4'
 * '<S414>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/LcCancelDisp'
 * '<S415>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem'
 * '<S416>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1'
 * '<S417>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem2'
 * '<S418>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem3'
 * '<S419>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem4'
 * '<S420>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/TrueDurationTime1'
 * '<S421>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/TrueDurationTime2'
 * '<S422>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/LcCancelDisp/Compare To Constant13'
 * '<S423>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/LcCancelDisp/Compare To Constant3'
 * '<S424>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/LcCancelDisp/RisingEdgeTimer1'
 * '<S425>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/LcCancelDisp/RisingEdgeTimer2'
 * '<S426>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/LcCancelDisp/RisingEdgeTimer1/MATLAB Function'
 * '<S427>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/LcCancelDisp/RisingEdgeTimer2/MATLAB Function'
 * '<S428>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem/Compare To Constant1'
 * '<S429>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem/Compare To Constant2'
 * '<S430>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem/Compare To Constant5'
 * '<S431>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem/TrueDurationTime1'
 * '<S432>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem/TrueDurationTime4'
 * '<S433>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem/TrueDurationTime1/If Action Subsystem'
 * '<S434>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem/TrueDurationTime1/If Action Subsystem1'
 * '<S435>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem/TrueDurationTime4/If Action Subsystem'
 * '<S436>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem/TrueDurationTime4/If Action Subsystem1'
 * '<S437>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1/Compare To Constant1'
 * '<S438>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1/Compare To Constant2'
 * '<S439>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1/Compare To Constant5'
 * '<S440>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1/TrueDurationTime1'
 * '<S441>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1/TrueDurationTime4'
 * '<S442>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1/TrueDurationTime1/If Action Subsystem'
 * '<S443>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1/TrueDurationTime1/If Action Subsystem1'
 * '<S444>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1/TrueDurationTime4/If Action Subsystem'
 * '<S445>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem1/TrueDurationTime4/If Action Subsystem1'
 * '<S446>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem2/Compare To Constant2'
 * '<S447>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem3/Compare To Constant2'
 * '<S448>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem4/Compare To Constant1'
 * '<S449>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem4/Compare To Constant2'
 * '<S450>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem4/TrueDurationTime1'
 * '<S451>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem4/TrueDurationTime1/If Action Subsystem'
 * '<S452>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/Subsystem4/TrueDurationTime1/If Action Subsystem1'
 * '<S453>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/TrueDurationTime1/If Action Subsystem'
 * '<S454>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/TrueDurationTime1/If Action Subsystem1'
 * '<S455>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/TrueDurationTime2/If Action Subsystem'
 * '<S456>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/PLAN_IPHMI/TrueDurationTime2/If Action Subsystem1'
 * '<S457>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/WorkCond/Compare To Constant'
 * '<S458>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/WorkCond/Compare To Constant1'
 * '<S459>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference1/WorkCond/Compare To Constant2'
 * '<S460>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock'
 * '<S461>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc'
 * '<S462>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3'
 * '<S463>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/Subsystem'
 * '<S464>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/BufRelease1'
 * '<S465>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/Compare To Constant'
 * '<S466>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/Compare To Constant1'
 * '<S467>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/Compare To Constant2'
 * '<S468>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/Compare To Constant3'
 * '<S469>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/Compare To Constant4'
 * '<S470>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/Compare To Constant5'
 * '<S471>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/LPF'
 * '<S472>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/Lock'
 * '<S473>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/LPF/MATLAB Function'
 * '<S474>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/LPF/MATLAB Function1'
 * '<S475>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/LPF/MATLAB Function2'
 * '<S476>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DPCLock/LPF/MATLAB Function3'
 * '<S477>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc/Compare To Constant4'
 * '<S478>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc/Compare To Constant9'
 * '<S479>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc/DangerPlaus_Calculate_Radar'
 * '<S480>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Compare To Constant2'
 * '<S481>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/DangerFactorMatrixCalc_Left'
 * '<S482>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/DangerFactorMatrixCalc_Left1'
 * '<S483>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/DangerFactorMatrixCalc_Left2'
 * '<S484>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/For Iterator Subsystem2'
 * '<S485>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/For Iterator Subsystem4'
 * '<S486>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Obj_front'
 * '<S487>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Obj_front1'
 * '<S488>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem'
 * '<S489>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem1'
 * '<S490>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem/Compare To Constant'
 * '<S491>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem/Compare To Constant1'
 * '<S492>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem/Compare To Constant2'
 * '<S493>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem/Compare To Constant3'
 * '<S494>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem/Compare To Constant4'
 * '<S495>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem/MATLAB Function'
 * '<S496>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem1/MATLAB Function'
 * '<S497>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem1/MATLAB Function1'
 * '<S498>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem1/MATLAB Function2'
 * '<S499>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/DangerPlausCalc3/Subsystem1/MATLAB Function3'
 * '<S500>' : 'PubIfDecisionPLAN_MDL/Subsystem Reference/Subsystem Reference2/Subsystem/RoadWidthCalc'
 */
#endif                                 /* RTW_HEADER_PubIfDecisionPLAN_MDL_h_ */
