/*
 * Code generation for system model 'PubIfDecisionLSM_MDL'
 *
 * Model                      : PubIfDecisionLSM_MDL
 * Model version              : 1.1192
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:28 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "PubIfDecisionLSM_MDL.h"
#include "PubIfDecisionLSM_MDL_private.h"
#include "LookUp_real32_Treal_T_real32_Treal_T.h"
#include "look1_iflf_binlcpw.h"
#include "look1_iflf_binlxpw.h"
#include "look2_iflf_binlxpw.h"
#include "minimum2_8ItySNSj.h"
#include "mldivide_bDfh1YFq.h"
#include "pl_3fC1hwr1.h"
#include "pl_h0nX7xd3.h"
#include "polyfit_d3B7CmJq.h"
#include "power_D4iaDoLm.h"
#include "power_J3qcWgcR.h"
#include "rt_powf_snf.h"
#include "std_0jbjRmL9.h"
#include "xzgetrf_qoSwvruO.h"

/* Named constants for Chart: '<S47>/TJA_Line_Select' */
#define PubIfDecisionLSM_MDL_IN_DOP_Line ((uint8_T)1U)
#define PubIfDecisionLSM_MDL_IN_EQ4_Line ((uint8_T)2U)
#define PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define PubIfDecisionLSM_MDL_IN_OFF    ((uint8_T)3U)

/* Named constants for Chart: '<S68>/Chart' */
#define PubIfDecisionLSM_MDL_IN_init   ((uint8_T)1U)
#define PubIfDecisionLSM_MDL_IN_init1  ((uint8_T)2U)

/* Named constants for Chart: '<S68>/Chart1' */
#define PubIfDecisionLSM_MDL_IN_CruiseLeft ((uint8_T)1U)
#define PubIfDecisionLSM_MDL_IN_CruiseValid ((uint8_T)1U)
#define PubIfDecisionLSM_MDL_IN_CruiseValid1 ((uint8_T)2U)
#define PubIfDecisionLSM_MDL_IN_CruiseValid2 ((uint8_T)3U)
#define PubIfDecisionLSM_MDL_IN_EntryStub1 ((uint8_T)4U)
#define PubIfDecisionLSM_MDL_IN_EntryStub1_i ((uint8_T)2U)
#define PubIfDecisionLSM_MDL_IN_EntryStub2 ((uint8_T)5U)
#define PubIfDecisionLSM_MDL_IN_EntryStub2_d ((uint8_T)3U)
#define PubIfDecisionLSM_MDL_IN_EntryStub3 ((uint8_T)4U)
#define PubIfDecisionLSM_MDL_IN_EntryStub4 ((uint8_T)5U)
#define PubIfDecisionLSM_MDL_IN_LeftStub ((uint8_T)6U)
#define PubIfDecisionLSM_MDL_IN_Name   ((uint8_T)1U)
#define PubIfDecisionLSM_MDL_IN_Name1  ((uint8_T)2U)
#define PubIfDecisionLSM_MDL_IN_Name2  ((uint8_T)1U)
#define PubIfDecisionLSM_MDL_IN_Name2_f ((uint8_T)8U)
#define PubIfDecisionLSM_MDL_IN_Name3  ((uint8_T)9U)
#define PubIfDecisionLSM_MDL_IN_Name4  ((uint8_T)10U)
#define PubIfDecisionLSM_MDL_IN_Name5  ((uint8_T)11U)
#define PubIfDecisionLSM_MDL_IN_Name_d ((uint8_T)7U)
#define PubIfDecisionLSM_MDL_IN_StubValid ((uint8_T)6U)
#define PubIfDecisionLSM_MDL_IN_init1_n ((uint8_T)3U)
#define PubIfDecisionLSM_MDL_IN_init2  ((uint8_T)4U)
#define PubIfDecisionLSM_MDL_IN_init3  ((uint8_T)2U)
#define PubIfDecisionLSM_MDL_IN_init4  ((uint8_T)3U)
#define PubIfDecisionLSM_MDL_IN_init5  ((uint8_T)4U)
#define PubIfDecisionLSM_MDL_IN_init_m ((uint8_T)2U)
#define PubIfDecisionLSM_MDL_IN_init_mo ((uint8_T)12U)
#define PubIfDecisionLSM_MDL_IN_lExitStub1 ((uint8_T)13U)
#define PubIfDecisionLSM_MDL_IN_lExitStub2 ((uint8_T)14U)
#define PubIfDecisionLSM_MDL_IN_lExitStub3 ((uint8_T)15U)
#define PubIfDecisionLSM_MDL_IN_off1   ((uint8_T)1U)
#define PubIfDecisionLSM_MDL_IN_on     ((uint8_T)2U)

/* Exported block signals */
uint32_T LSM_UpdateCnt;                /* '<S3>/Signal Conversion51' */
real32_T LSM_QualityK1;                /* '<S17>/Unit Delay54' */
real32_T LSM_A3K1;                     /* '<S17>/Unit Delay56' */
real32_T LSM_A2K1;                     /* '<S17>/Unit Delay70' */
real32_T LSM_A1K1;                     /* '<S17>/Unit Delay69' */
real32_T LSM_A0K1;                     /* '<S17>/Unit Delay68' */
real32_T LSM_RangeK1;                  /* '<S17>/Unit Delay67' */
real32_T LSM_tLostK1;                  /* '<S17>/Unit Delay66' */
real32_T LSM_HWALineC0K1;              /* '<S17>/Unit Delay27' */
real32_T LSM_LH21;                     /* '<S49>/Product' */
real32_T LSM_LH22;                     /* '<S49>/2-D Lookup Table3' */
real32_T LSM_LH23;                     /* '<S49>/1-D Lookup Table5' */
real32_T LSM_LH1Wij;                   /* '<S49>/Merge' */
real32_T LSM_LH31;                     /* '<S49>/Product4' */
real32_T LSM_LH32;                     /* '<S49>/2-D Lookup Table4' */
real32_T LSM_LH33;                     /* '<S49>/1-D Lookup Table6' */
real32_T LSM_LH2Wij;                   /* '<S49>/Merge1' */
real32_T LSM_TJALineC3;                /* '<S3>/Signal Conversion1' */
real32_T LSM_LCKLineC0;                /* '<S3>/Signal Conversion10' */
real32_T LSM_LCKRange;                 /* '<S3>/Signal Conversion11' */
real32_T LSM_HWALineC3;                /* '<S3>/Signal Conversion13' */
real32_T LSM_HWALineC2;                /* '<S3>/Signal Conversion14' */
real32_T LSM_HWALineC1;                /* '<S3>/Signal Conversion15' */
real32_T LSM_HWALeLineC3;              /* '<S3>/Signal Conversion16' */
real32_T LSM_HWALeLineC2;              /* '<S3>/Signal Conversion17' */
real32_T LSM_HWALeLineC1;              /* '<S3>/Signal Conversion18' */
real32_T LSM_HWALeLineC0;              /* '<S3>/Signal Conversion19' */
real32_T LSM_TJALineC2;                /* '<S3>/Signal Conversion2' */
real32_T LSM_HWALeRange;               /* '<S3>/Signal Conversion20' */
real32_T LSM_HWALineC0;                /* '<S3>/Signal Conversion22' */
real32_T LSM_HWARange;                 /* '<S3>/Signal Conversion23' */
real32_T LSM_HWARiLineC1;              /* '<S3>/Signal Conversion25' */
real32_T LSM_HWARiLineC0;              /* '<S3>/Signal Conversion26' */
real32_T LSM_HWARiRange;               /* '<S3>/Signal Conversion27' */
real32_T LSM_TJALineC1;                /* '<S3>/Signal Conversion3' */
real32_T LSM_HeadAngDiff;              /* '<S3>/Signal Conversion30' */
real32_T LSM_HWARiLineC3;              /* '<S3>/Signal Conversion31' */
real32_T LSM_HWARiLineC2;              /* '<S3>/Signal Conversion32' */
real32_T LSM_ESSLineC2;                /* '<S3>/Signal Conversion33' */
real32_T LSM_ESSLineC1;                /* '<S3>/Signal Conversion34' */
real32_T LSM_ESSLineC0;                /* '<S3>/Signal Conversion35' */
real32_T LSM_ESSRange;                 /* '<S3>/Signal Conversion36' */
real32_T LSM_ESSLeLineC3;              /* '<S3>/Signal Conversion38' */
real32_T LSM_TJALineC0;                /* '<S3>/Signal Conversion4' */
real32_T LSM_ESSLineC3;                /* '<S3>/Signal Conversion40' */
real32_T LSM_ESSLeLineC0;              /* '<S3>/Signal Conversion41' */
real32_T LSM_ESSLeRange;               /* '<S3>/Signal Conversion42' */
real32_T LSM_ESSRiLineC3;              /* '<S3>/Signal Conversion44' */
real32_T LSM_ESSRiLineC2;              /* '<S3>/Signal Conversion45' */
real32_T LSM_ESSRiLineC1;              /* '<S3>/Signal Conversion46' */
real32_T LSM_ESSLeLineC2;              /* '<S3>/Signal Conversion47' */
real32_T LSM_ESSLeLineC1;              /* '<S3>/Signal Conversion48' */
real32_T LSM_ESSRiLineC0;              /* '<S3>/Signal Conversion49' */
real32_T LSM_TJARange;                 /* '<S3>/Signal Conversion5' */
real32_T LSM_ESSRiRange;               /* '<S3>/Signal Conversion50' */
real32_T LSM_dyDiff;                   /* '<S3>/Signal Conversion59' */
real32_T LSM_RoadWidth;                /* '<S3>/Signal Conversion61' */
real32_T LSM_LCKLineC3;                /* '<S3>/Signal Conversion7' */
real32_T LSM_LCKLineC2;                /* '<S3>/Signal Conversion8' */
real32_T LSM_LCKLineC1;                /* '<S3>/Signal Conversion9' */
real32_T LSM_OTL_A3;                   /* '<S3>/Signal Conversion53' */
real32_T LSM_OTL_A2;                   /* '<S3>/Signal Conversion54' */
real32_T LSM_OTL_A1;                   /* '<S3>/Signal Conversion55' */
real32_T LSM_OTL_A0;                   /* '<S3>/Signal Conversion56' */
real32_T LSM_OTL_Range;                /* '<S3>/Signal Conversion57' */
real32_T LSM_RFM_LineCenter_C0;        /* '<S1>/Signal Copy1' */
real32_T LSM_RFM_LineL1_C2;            /* '<S1>/Signal Copy10' */
real32_T LSM_RFM_LineL1_C3;            /* '<S1>/Signal Copy11' */
real32_T LSM_RFM_LineL1_Start;         /* '<S1>/Signal Copy12' */
real32_T LSM_RFM_LineL1_Front;         /* '<S1>/Signal Copy13' */
real32_T LSM_RFM_LineR1_C2;            /* '<S1>/Signal Copy14' */
real32_T LSM_RFM_LineR1_C3;            /* '<S1>/Signal Copy15' */
real32_T LSM_RFM_LineR1_Start;         /* '<S1>/Signal Copy16' */
real32_T LSM_RFM_LineR1_Front;         /* '<S1>/Signal Copy17' */
real32_T LSM_RFM_LineR1_C0;            /* '<S1>/Signal Copy19' */
real32_T LSM_RFM_LineCenter_C1;        /* '<S1>/Signal Copy2' */
real32_T LSM_RFM_LineR1_C1;            /* '<S1>/Signal Copy20' */
real32_T LSM_RFM_LineCenter_C2;        /* '<S1>/Signal Copy3' */
real32_T LSM_RFM_LineCenter_C3;        /* '<S1>/Signal Copy4' */
real32_T LSM_RFM_LineCenter_Start;     /* '<S1>/Signal Copy5' */
real32_T LSM_RFM_LineCenter_Front;     /* '<S1>/Signal Copy6' */
real32_T LSM_RFM_LineL1_C0;            /* '<S1>/Signal Copy8' */
real32_T LSM_RFM_LineL1_C1;            /* '<S1>/Signal Copy9' */
real32_T LSM_L1_Range;                 /* '<S4>/Signal Copy1' */
real32_T LSM_LA_ELEM_0_C1;             /* '<S4>/Signal Copy10' */
real32_T LSM_LRE_ELEM_1_C0;            /* '<S4>/Signal Copy101' */
real32_T LSM_LRE_ELEM_1_Range_Start;   /* '<S4>/Signal Copy103' */
real32_T LSM_LA_ELEM_0_C2;             /* '<S4>/Signal Copy11' */
real32_T LSM_LA_ELEM_0_C3;             /* '<S4>/Signal Copy12' */
real32_T LSM_LA_ELEM_0_Range_Start;    /* '<S4>/Signal Copy13' */
real32_T LSM_LA_ELEM_0_Range_End;      /* '<S4>/Signal Copy14' */
real32_T LSM_LA_ELEM_0_Marker_Width;   /* '<S4>/Signal Copy19' */
real32_T LSM_LA_ELEM_0_Confidence;     /* '<S4>/Signal Copy20' */
real32_T LSM_LA_ELEM_1_C0;             /* '<S4>/Signal Copy21' */
real32_T LSM_LA_ELEM_1_C1;             /* '<S4>/Signal Copy22' */
real32_T LSM_LA_ELEM_1_C2;             /* '<S4>/Signal Copy23' */
real32_T LSM_LA_ELEM_1_C3;             /* '<S4>/Signal Copy24' */
real32_T LSM_LA_ELEM_1_Range_Start;    /* '<S4>/Signal Copy25' */
real32_T LSM_LA_ELEM_1_Range_End;      /* '<S4>/Signal Copy26' */
real32_T LSM_L2_Range;                 /* '<S4>/Signal Copy3' */
real32_T LSM_LA_ELEM_1_Confidence;     /* '<S4>/Signal Copy30' */
real32_T LSM_LA_ELEM_1_Marker_Width;   /* '<S4>/Signal Copy32' */
real32_T LSM_LA_ELEM_2_C0;             /* '<S4>/Signal Copy33' */
real32_T LSM_LA_ELEM_2_C1;             /* '<S4>/Signal Copy34' */
real32_T LSM_LA_ELEM_2_C2;             /* '<S4>/Signal Copy35' */
real32_T LSM_LA_ELEM_2_C3;             /* '<S4>/Signal Copy36' */
real32_T LSM_LA_ELEM_2_Range_Start;    /* '<S4>/Signal Copy37' */
real32_T LSM_LA_ELEM_2_Range_End;      /* '<S4>/Signal Copy38' */
real32_T LSM_LA_ELEM_2_Confidence;     /* '<S4>/Signal Copy41' */
real32_T LSM_LA_ELEM_2_Marker_Width;   /* '<S4>/Signal Copy44' */
real32_T LSM_LA_ELEM_3_C0;             /* '<S4>/Signal Copy45' */
real32_T LSM_LA_ELEM_3_C1;             /* '<S4>/Signal Copy46' */
real32_T LSM_LA_ELEM_3_C2;             /* '<S4>/Signal Copy47' */
real32_T LSM_LA_ELEM_3_C3;             /* '<S4>/Signal Copy48' */
real32_T LSM_LA_ELEM_3_Range_Start;    /* '<S4>/Signal Copy49' */
real32_T LSM_L3_Range;                 /* '<S4>/Signal Copy5' */
real32_T LSM_LA_ELEM_3_Range_End;      /* '<S4>/Signal Copy50' */
real32_T LSM_LA_ELEM_3_Confidence;     /* '<S4>/Signal Copy54' */
real32_T LSM_LA_ELEM_3_Marker_Width;   /* '<S4>/Signal Copy56' */
real32_T LSM_LH_ELEM_0_C0;             /* '<S4>/Signal Copy58' */
real32_T LSM_LH_ELEM_0_C1;             /* '<S4>/Signal Copy59' */
real32_T LSM_LH_ELEM_0_C2;             /* '<S4>/Signal Copy60' */
real32_T LSM_LH_ELEM_0_Confidence;     /* '<S4>/Signal Copy61' */
real32_T LSM_LH_ELEM_0_C3;             /* '<S4>/Signal Copy62' */
real32_T LSM_LH_ELEM_0_VR_End;         /* '<S4>/Signal Copy63' */
real32_T LSM_LH_ELEM_0_Marker_Width;   /* '<S4>/Signal Copy67' */
real32_T LSM_L4_Range;                 /* '<S4>/Signal Copy7' */
real32_T LSM_LH_ELEM_0_VR_Start;       /* '<S4>/Signal Copy70' */
real32_T LSM_LH_ELEM_1_C0;             /* '<S4>/Signal Copy71' */
real32_T LSM_LH_ELEM_1_C1;             /* '<S4>/Signal Copy72' */
real32_T LSM_LH_ELEM_1_C2;             /* '<S4>/Signal Copy73' */
real32_T LSM_LH_ELEM_1_Confidence;     /* '<S4>/Signal Copy74' */
real32_T LSM_LH_ELEM_1_C3;             /* '<S4>/Signal Copy75' */
real32_T LSM_LH_ELEM_1_VR_Start;       /* '<S4>/Signal Copy76' */
real32_T LSM_LH_ELEM_1_Marker_Width;   /* '<S4>/Signal Copy80' */
real32_T LSM_LH_ELEM_1_VR_End;         /* '<S4>/Signal Copy83' */
real32_T LSM_LRE_ELEM_0_C1;            /* '<S4>/Signal Copy86' */
real32_T LSM_LRE_ELEM_0_C2;            /* '<S4>/Signal Copy87' */
real32_T LSM_LRE_ELEM_0_C3;            /* '<S4>/Signal Copy88' */
real32_T LSM_LRE_ELEM_0_Range_End;     /* '<S4>/Signal Copy89' */
real32_T LSM_LA_ELEM_0_C0;             /* '<S4>/Signal Copy9' */
real32_T LSM_LRE_ELEM_0_Range_Start;   /* '<S4>/Signal Copy90' */
real32_T LSM_LRE_ELEM_0_C0;            /* '<S4>/Signal Copy92' */
real32_T LSM_LRE_ELEM_0_Confidence;    /* '<S4>/Signal Copy93' */
real32_T LSM_LRE_ELEM_1_Confidence;    /* '<S4>/Signal Copy94' */
real32_T LSM_LRE_ELEM_1_C1;            /* '<S4>/Signal Copy95' */
real32_T LSM_LRE_ELEM_1_C2;            /* '<S4>/Signal Copy96' */
real32_T LSM_LRE_ELEM_1_C3;            /* '<S4>/Signal Copy97' */
real32_T LSM_LRE_ELEM_1_Range_End;     /* '<S4>/Signal Copy99' */
real32_T LSM_EN_C0;                    /* '<S17>/Signal Copy11' */
real32_T LSM_EN_C1;                    /* '<S17>/Signal Copy12' */
real32_T LSM_EN_C2;                    /* '<S17>/Signal Copy13' */
real32_T LSM_EN_C3;                    /* '<S17>/Signal Copy14' */
real32_T LSM_EN_Start;                 /* '<S17>/Signal Copy15' */
real32_T LSM_EN_Front;                 /* '<S17>/Signal Copy16' */
real32_T LSM_Exit_C0;                  /* '<S17>/Signal Copy18' */
real32_T LSM_Exit_C1;                  /* '<S17>/Signal Copy19' */
real32_T LSM_Exit_C2;                  /* '<S17>/Signal Copy20' */
real32_T LSM_Exit_C3;                  /* '<S17>/Signal Copy21' */
real32_T LSM_Exit_Start;               /* '<S17>/Signal Copy22' */
real32_T LSM_Exit_Front;               /* '<S17>/Signal Copy23' */
real32_T LSM_L3_AvaliTime;             /* '<S17>/Signal Copy24' */
real32_T LSM_L2_AvaliTime;             /* '<S17>/Signal Copy25' */
real32_T LSM_L1_AvaliDis;              /* '<S17>/Signal Copy26' */
real32_T LSM_L2_AvaliDis;              /* '<S17>/Signal Copy27' */
real32_T LSM_L1_AvaliTime;             /* '<S17>/Signal Copy28' */
real32_T LSM_L4_AvaliTime;             /* '<S17>/Signal Copy29' */
real32_T LSM_L3_AvaliDis;              /* '<S17>/Signal Copy30' */
real32_T LSM_L4_AvaliDis;              /* '<S17>/Signal Copy31' */
real32_T LSM_L1_A0;                    /* '<S17>/Signal Copy32' */
real32_T LSM_L2_A0;                    /* '<S17>/Signal Copy33' */
real32_T LSM_L3_A0;                    /* '<S17>/Signal Copy34' */
real32_T LSM_L4_A0;                    /* '<S17>/Signal Copy35' */
real32_T LSM_CurDis2;                  /* '<S49>/MATLAB Function6' */
real32_T LSM_DeltaDis2;                /* '<S49>/MATLAB Function6' */
real32_T LSM_CurDis3;                  /* '<S49>/MATLAB Function6' */
real32_T LSM_DeltaDis3;                /* '<S49>/MATLAB Function6' */
real32_T LSM_RoadWidth1;               /* '<S17>/RoadWidthCalc1' */
real32_T LSM_CentLineA3;               /* '<S17>/MATLAB Function3' */
real32_T LSM_CentLineA2;               /* '<S17>/MATLAB Function3' */
real32_T LSM_CentLineA1;               /* '<S17>/MATLAB Function3' */
real32_T LSM_CentLineA0;               /* '<S17>/MATLAB Function3' */
real32_T LSM_CentLineRange;            /* '<S17>/MATLAB Function3' */
real32_T LSM_CentQ;                    /* '<S17>/MATLAB Function3' */
real32_T LSM_dDeltaX;                  /* '<S17>/CalcEgoVehMove' */
real32_T LSM_dDeltaY;                  /* '<S17>/CalcEgoVehMove' */
real32_T LSM_CosOfPsi;                 /* '<S17>/CalcEgoVehMove' */
real32_T LSM_SinOfsi;                  /* '<S17>/CalcEgoVehMove' */
uint8_T LSM_TJA_Line_State1;           /* '<S17>/Signal Copy1' */
uint8_T LSM_HWASts;                    /* '<S17>/Signal Copy' */
uint8_T LSM_OTL_Count;                 /* '<S3>/Signal Conversion58' */
uint8_T LSM_RFM_LineCenter_Valid;      /* '<S1>/Signal Copy' */
uint8_T LSM_RFM_LineR1_Valid;          /* '<S1>/Signal Copy18' */
uint8_T LSM_RFM_LineL1_Valid;          /* '<S1>/Signal Copy7' */
uint8_T LSM_L1_Conf;                   /* '<S4>/Signal Copy' */
uint8_T LSM_LRE_ELEM_1_Line_Side;      /* '<S4>/Signal Copy100' */
uint8_T LSM_LA_ELEM_0_Availability_State;/* '<S4>/Signal Copy15' */
uint8_T LSM_LA_ELEM_0_Lanemark_Type;   /* '<S4>/Signal Copy16' */
uint8_T LSM_LA_ELEM_0_DLM_Type;        /* '<S4>/Signal Copy17' */
uint8_T LSM_LA_ELEM_0_Line_Side;       /* '<S4>/Signal Copy18' */
uint8_T LSM_L2_Conf;                   /* '<S4>/Signal Copy2' */
uint8_T LSM_LA_ELEM_1_Availability_State;/* '<S4>/Signal Copy27' */
uint8_T LSM_LA_ELEM_1_Lanemark_Type;   /* '<S4>/Signal Copy28' */
uint8_T LSM_LA_ELEM_1_DLM_Type;        /* '<S4>/Signal Copy29' */
uint8_T LSM_LA_ELEM_1_Line_Side;       /* '<S4>/Signal Copy31' */
uint8_T LSM_LA_ELEM_2_Availability_State;/* '<S4>/Signal Copy39' */
uint8_T LSM_L3_Conf;                   /* '<S4>/Signal Copy4' */
uint8_T LSM_LA_ELEM_2_Lanemark_Type;   /* '<S4>/Signal Copy40' */
uint8_T LSM_LA_ELEM_2_DLM_Type;        /* '<S4>/Signal Copy42' */
uint8_T LSM_LA_ELEM_2_Line_Side;       /* '<S4>/Signal Copy43' */
uint8_T LSM_LA_ELEM_3_Availability_State;/* '<S4>/Signal Copy51' */
uint8_T LSM_LA_ELEM_3_Lanemark_Type;   /* '<S4>/Signal Copy52' */
uint8_T LSM_LA_ELEM_3_DLM_Type;        /* '<S4>/Signal Copy53' */
uint8_T LSM_LA_ELEM_3_Line_Side;       /* '<S4>/Signal Copy55' */
uint8_T LSM_LH_Count;                  /* '<S4>/Signal Copy57' */
uint8_T LSM_L4_Conf;                   /* '<S4>/Signal Copy6' */
uint8_T LSM_LH_ELEM_0_Availability_State;/* '<S4>/Signal Copy64' */
uint8_T LSM_LH_ELEM_0_Lanemark_Type;   /* '<S4>/Signal Copy65' */
uint8_T LSM_LH_ELEM_0_DLM_Type;        /* '<S4>/Signal Copy66' */
uint8_T LSM_LH_ELEM_0_Line_Side;       /* '<S4>/Signal Copy68' */
uint8_T LSM_LH_ELEM_0_Crossing;        /* '<S4>/Signal Copy69' */
uint8_T LSM_LH_ELEM_1_Availability_State;/* '<S4>/Signal Copy77' */
uint8_T LSM_LH_ELEM_1_Lanemark_Type;   /* '<S4>/Signal Copy78' */
uint8_T LSM_LH_ELEM_1_DLM_Type;        /* '<S4>/Signal Copy79' */
uint8_T LSM_LA_Adjacent_Count;         /* '<S4>/Signal Copy8' */
uint8_T LSM_LH_ELEM_1_Line_Side;       /* '<S4>/Signal Copy81' */
uint8_T LSM_LH_ELEM_1_Crossing;        /* '<S4>/Signal Copy82' */
uint8_T LSM_LRE_Count;                 /* '<S4>/Signal Copy84' */
uint8_T LSM_LRE_ELEM_0_Line_Side;      /* '<S4>/Signal Copy85' */
uint8_T LSM_LRE_ELEM_0_Availability_State;/* '<S4>/Signal Copy91' */
uint8_T LSM_LRE_ELEM_1_Availability_State;/* '<S4>/Signal Copy98' */
uint8_T LSM_EN_Valid;                  /* '<S17>/Signal Copy10' */
uint8_T LSM_Exit_Valid;                /* '<S17>/Signal Copy17' */
uint8_T LSM_LeftLineConf;              /* '<S49>/Signal Copy' */
uint8_T LSM_RightLineConf;             /* '<S49>/Signal Copy1' */
uint8_T LSM_TJA_Line_State;            /* '<S47>/TJA_Line_Select' */
uint8_T LSM_Wij_State;                 /* '<S17>/MATLAB Function5' */
uint8_T LSM_Line_State;                /* '<S17>/MATLAB Function4' */
uint8_T LSM_LockCounter;               /* '<S17>/HWALineCalc' */
int8_T LSM_MoveID;                     /* '<S17>/HWALineCalc' */
int8_T LSM_LockID;                     /* '<S17>/HWALineCalc' */
boolean_T LSM_LineValidK1;             /* '<S17>/Unit Delay55' */
boolean_T LSM_LeftMostLane;            /* '<S17>/Signal Copy8' */
boolean_T LSM_TJALineValid;            /* '<S3>/Signal Conversion' */
boolean_T LSM_HWALineValid;            /* '<S3>/Signal Conversion12' */
boolean_T LSM_HWARiLineValid;          /* '<S3>/Signal Conversion21' */
boolean_T LSM_HWALeLineValid;          /* '<S3>/Signal Conversion24' */
boolean_T LSM_DoubleLineLost_b;        /* '<S3>/Signal Conversion29' */
boolean_T LSM_ESSLeLineValid;          /* '<S3>/Signal Conversion37' */
boolean_T LSM_ESSLineValid;            /* '<S3>/Signal Conversion39' */
boolean_T LSM_ESSRiLineValid;          /* '<S3>/Signal Conversion43' */
boolean_T LSM_LCKLineValid;            /* '<S3>/Signal Conversion6' */
boolean_T LSM_MLeLane;                 /* '<S3>/Signal Conversion60' */
boolean_T LSM_LeftLaneChange;          /* '<S3>/Signal Conversion62' */
boolean_T LSM_RightLaneChange;         /* '<S3>/Signal Conversion63' */
boolean_T LSM_OTLineValid;             /* '<S3>/Signal Conversion52' */
boolean_T LSM_SingleLineLost_b;        /* '<S3>/Signal Conversion28' */
boolean_T LSM_PathLaneAvail[3];        /* '<S17>/VisLineFilter5' */
boolean_T LSM_LeftOffset_b;            /* '<S17>/VisLineFilter3' */
boolean_T LSM_RightOffset_b;           /* '<S17>/VisLineFilter3' */
boolean_T LSM_LeftLineTypeEN;          /* '<S53>/RoadWidthCalc1' */
boolean_T LSM_RightLineTypeEN;         /* '<S53>/RoadWidthCalc1' */
boolean_T LSM_DOP_EN;                  /* '<S47>/MATLAB Function' */
boolean_T LSM_DOP_Out;                 /* '<S47>/MATLAB Function' */
boolean_T LSM_LH1Valid;                /* '<S17>/MATLAB Function5' */
boolean_T LSM_LH2Valid;                /* '<S17>/MATLAB Function5' */
boolean_T LSM_CentLineValid;           /* '<S17>/MATLAB Function3' */
boolean_T LSM_VisLineUpdate;           /* '<S4>/MATLAB Function' */
MdlrefDW_PubIfDecisionLSM_MDL_T PubIfDecisionLSM_MDL_MdlrefDW;

/* Block signals (default storage) */
B_PubIfDecisionLSM_MDL_c_T PubIfDecisionLSM_MDL_B;

/* Block states (default storage) */
DW_PubIfDecisionLSM_MDL_f_T PubIfDecisionLSM_MDL_DW;

/* Forward declaration for local functions */
static real32_T PubIfDecisionLSM_MDL_minimum(const real32_T x[4]);
static void PubIfDecisionLSM_MDL_CruiseValid(const RFM_TSR_BUS *rtu_RFM_TSR,
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_CruiseValid1(const RFM_TSR_BUS *rtu_RFM_TSR,
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_CruiseValid2(const RFM_TSR_BUS *rtu_RFM_TSR,
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_exit_internal_StubValid(void);
static void PubIfDecisionLSM_MDL_CruiseLeft(uint16_T *rty_LSM_PilotSPLDist,
  uint8_T *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_Name2(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_Name3(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_Name4(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_Name5(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_init(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_lExitStub1(uint16_T *rty_LSM_PilotSPLDist,
  uint8_T *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_lExitStub2(uint16_T *rty_LSM_PilotSPLDist,
  uint8_T *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_lExitStub3(uint16_T *rty_LSM_PilotSPLDist,
  uint8_T *rty_LSM_PilotSPL);
static void PubIfDecisionLSM_MDL_StubValid(const RFM_TSR_BUS *rtu_RFM_TSR,
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL);

/*
 * Output and update for atomic system:
 *    '<S4>/LHLine1'
 *    '<S4>/LHLine2'
 */
void PubIfDecisionLSM_MDL_LHLine1(const real32_T *rtu_LHA0, const real32_T
  *rtu_LHA1, const real32_T *rtu_LHA2, const real32_T *rtu_LHA3, const real32_T *
  rtu_LHRaMin, const real32_T *rtu_LHRaMax, const real32_T
  *rtu_LH_ELEM_Second_C0, const real32_T *rtu_LH_ELEM_Second_C1, const real32_T *
  rtu_LH_ELEM_Second_C2, const real32_T *rtu_LH_ELEM_Second_C3, const real32_T
  *rtu_LH_ELEM_Second_Start, const real32_T *rtu_LH_ELEM_Second_End,
  B_LHLine1_PubIfDecisionLSM_MDL_T *localB)
{
  real32_T rtu_LHA0_0[6];
  real32_T temp_x[6];
  real32_T P[3];
  real32_T LHC0;
  real32_T LHC1;
  real32_T LHC2;
  real32_T LHC3;
  real32_T LHDxMax;
  real32_T tmp;
  if (*rtu_LH_ELEM_Second_End - *rtu_LH_ELEM_Second_Start > 0.5F) {
    temp_x[0] = 0.3F * *rtu_LHRaMax;
    temp_x[1] = 0.5F * *rtu_LHRaMax;
    temp_x[2] = 0.8F * *rtu_LHRaMax;
    temp_x[3] = (*rtu_LH_ELEM_Second_End - *rtu_LH_ELEM_Second_Start) * 0.3F +
      *rtu_LHRaMax;
    temp_x[4] = (*rtu_LH_ELEM_Second_End - *rtu_LH_ELEM_Second_Start) * 0.5F +
      *rtu_LHRaMax;
    temp_x[5] = (*rtu_LH_ELEM_Second_End - *rtu_LH_ELEM_Second_Start) * 0.8F +
      *rtu_LHRaMax;
    LHC0 = rt_powf_snf(temp_x[0], 3.0F);
    LHC1 = rt_powf_snf(temp_x[1], 3.0F);
    LHC2 = rt_powf_snf(temp_x[2], 3.0F);
    LHC3 = rt_powf_snf(temp_x[3], 3.0F);
    LHDxMax = rt_powf_snf(temp_x[4], 3.0F);
    tmp = rt_powf_snf(temp_x[5], 3.0F);
    rtu_LHA0_0[0] = ((*rtu_LHA1 * temp_x[0] + *rtu_LHA0) + temp_x[0] * temp_x[0]
                     * *rtu_LHA2) + *rtu_LHA3 * LHC0;
    rtu_LHA0_0[1] = ((*rtu_LHA1 * temp_x[1] + *rtu_LHA0) + temp_x[1] * temp_x[1]
                     * *rtu_LHA2) + *rtu_LHA3 * LHC1;
    rtu_LHA0_0[2] = ((*rtu_LHA1 * temp_x[2] + *rtu_LHA0) + temp_x[2] * temp_x[2]
                     * *rtu_LHA2) + *rtu_LHA3 * LHC2;
    rtu_LHA0_0[3] = ((*rtu_LH_ELEM_Second_C1 * temp_x[3] +
                      *rtu_LH_ELEM_Second_C0) + temp_x[3] * temp_x[3] *
                     *rtu_LH_ELEM_Second_C2) + *rtu_LH_ELEM_Second_C3 * LHC3;
    rtu_LHA0_0[4] = ((*rtu_LH_ELEM_Second_C1 * temp_x[4] +
                      *rtu_LH_ELEM_Second_C0) + temp_x[4] * temp_x[4] *
                     *rtu_LH_ELEM_Second_C2) + *rtu_LH_ELEM_Second_C3 * LHDxMax;
    rtu_LHA0_0[5] = ((*rtu_LH_ELEM_Second_C1 * temp_x[5] +
                      *rtu_LH_ELEM_Second_C0) + temp_x[5] * temp_x[5] *
                     *rtu_LH_ELEM_Second_C2) + *rtu_LH_ELEM_Second_C3 * tmp;
    polyfit_d3B7CmJq(temp_x, rtu_LHA0_0, P);
    LHC3 = 0.0F;
    LHC2 = P[0];
    LHC1 = P[1];
    LHC0 = P[2];
    if (*rtu_LH_ELEM_Second_End - *rtu_LH_ELEM_Second_Start > 0.5F) {
      LHDxMax = *rtu_LH_ELEM_Second_End;
    } else {
      LHDxMax = *rtu_LHRaMax;
    }
  } else {
    LHC0 = *rtu_LHA0;
    LHC1 = *rtu_LHA1;
    LHC2 = *rtu_LHA2;
    LHC3 = *rtu_LHA3;
    LHDxMax = *rtu_LHRaMax;
  }

  localB->LHC0 = LHC0;
  localB->LHC1 = LHC1;
  localB->LHC2 = LHC2;
  localB->LHC3 = LHC3;
  localB->LHDxMin = *rtu_LHRaMin;
  localB->LHDxMax = LHDxMax;
}

/*
 * Output and update for action system:
 *    '<S65>/If Action Subsystem'
 *    '<S52>/If Action Subsystem'
 */
void PubIfDecisionLSM_MDL_IfActionSubsystem(uint16_T rtu_In1, uint16_T *rty_Out1,
  B_IfActionSubsystem_PubIfDecisionLSM_MDL_T *localB)
{
  uint16_T u0;
  uint16_T u1;

  /* Sum: '<S66>/Add' incorporates:
   *  Constant: '<S66>/Constant'
   */
  localB->Add = (uint16_T)((uint32_T)rtu_In1 + ((uint16_T)1U));

  /* Saturate: '<S66>/Saturation' */
  u0 = localB->Add;
  u1 = ((uint16_T)60000U);
  if (u0 < u1) {
    u1 = u0;
  }

  *rty_Out1 = u1;

  /* End of Saturate: '<S66>/Saturation' */
}

/*
 * Output and update for action system:
 *    '<S65>/If Action Subsystem1'
 *    '<S52>/If Action Subsystem1'
 */
void PubIfDecisionLSM_MDL_IfActionSubsystem1(uint16_T *rty_Out1)
{
  /* SignalConversion generated from: '<S67>/Out1' incorporates:
   *  Constant: '<S67>/Constant'
   */
  *rty_Out1 = ((uint16_T)0U);
}

/*
 * Output and update for atomic system:
 *    '<S150>/MATLAB Function14'
 *    '<S151>/MATLAB Function14'
 *    '<S152>/MATLAB Function14'
 *    '<S153>/MATLAB Function14'
 *    '<S154>/MATLAB Function14'
 *    '<S155>/MATLAB Function14'
 *    '<S156>/MATLAB Function14'
 *    '<S157>/MATLAB Function14'
 *    '<S158>/MATLAB Function14'
 *    '<S159>/MATLAB Function14'
 *    ...
 */
void PubIfDecisionLSM_MDL_MATLABFunction14(const real32_T *rtu_u, uint8_T
  rtu_i_k, B_MATLABFunction14_PubIfDecisionLSM_MDL_T *localB)
{
  int32_T tmp;
  uint8_T i;
  localB->y = 0U;
  if ((*rtu_u > 2.0F) || (*rtu_u < -2.0F)) {
    tmp = (int32_T)(rtu_i_k + 1U);
    if ((uint32_T)tmp > 255U) {
      tmp = 255;
    }

    i = (uint8_T)tmp;
  } else {
    i = 0U;
  }

  if (i > 10) {
    localB->y = 1U;
  }

  localB->i = i;
}

/*
 * Output and update for action system:
 *    '<S49>/If Action Subsystem'
 *    '<S49>/If Action Subsystem1'
 *    '<S50>/If Action Subsystem'
 *    '<S50>/If Action Subsystem1'
 */
void PubIfDecisionLSM_MDL_IfActionSubsystem_i(real32_T rtu_In1, real32_T
  *rty_LH1Wij)
{
  /* Inport: '<S186>/In1' */
  *rty_LH1Wij = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S49>/If Action Subsystem2'
 *    '<S49>/If Action Subsystem3'
 *    '<S50>/If Action Subsystem2'
 *    '<S50>/If Action Subsystem3'
 */
void PubIfDecisionLSM_MDL_IfActionSubsystem2(real32_T *rty_LH1Wij)
{
  /* SignalConversion generated from: '<S188>/LH1Wij' incorporates:
   *  Constant: '<S188>/Constant'
   */
  *rty_LH1Wij = 0.0F;
}

/*
 * Output and update for action system:
 *    '<S49>/If Action Subsystem5'
 *    '<S50>/If Action Subsystem5'
 */
void PubIfDecisionLSM_MDL_IfActionSubsystem5(real32_T *rty_Out1, real32_T
  *rty_Out2)
{
  /* SignalConversion generated from: '<S191>/Out1' incorporates:
   *  Constant: '<S191>/Constant'
   */
  *rty_Out1 = P_LSM_PosLineLcFac;

  /* SignalConversion generated from: '<S191>/Out2' incorporates:
   *  Constant: '<S191>/Constant'
   */
  *rty_Out2 = P_LSM_PosLineLcFac;
}

/*
 * Output and update for action system:
 *    '<S49>/If Action Subsystem4'
 *    '<S50>/If Action Subsystem4'
 */
void PubIfDecisionLSM_MDL_IfActionSubsystem4(real32_T rtu_In1, real32_T rtu_In2,
  real32_T *rty_Out1, real32_T *rty_Out2)
{
  /* Inport: '<S190>/In1' */
  *rty_Out1 = rtu_In1;

  /* Inport: '<S190>/In2' */
  *rty_Out2 = rtu_In2;
}

/*
 * Output and update for atomic system:
 *    '<S49>/MATLAB Function2'
 *    '<S50>/MATLAB Function2'
 */
void PubIfDecisionLSM_MDL_MATLABFunction2(const uint8_T *rtu_HWASts, uint8_T
  rtu_HWAStsK1, uint8_T rtu_Lock_counterK1,
  B_MATLABFunction2_PubIfDecisionLSM_MDL_T *localB)
{
  int32_T q0;
  uint32_T qY;
  uint8_T Lock_counter;
  q0 = rtu_Lock_counterK1;
  qY = q0 - 1U;
  if (qY > (uint32_T)q0) {
    qY = 0U;
  }

  q0 = (int32_T)qY;
  Lock_counter = (uint8_T)q0;
  localB->Changelane = 0U;
  if ((*rtu_HWASts == 5) || (*rtu_HWASts == 6)) {
    localB->Changelane = 1U;
  } else {
    if (*rtu_HWASts == 3) {
      if ((rtu_HWAStsK1 == 5) || (rtu_HWAStsK1 == 6) || (rtu_HWAStsK1 == 1) ||
          (rtu_HWAStsK1 == 2)) {
        Lock_counter = 250U;
      }

      if (Lock_counter > 0) {
        localB->Changelane = 1U;
      }
    }
  }

  localB->Lock_counter = Lock_counter;
}

/*
 * Output and update for atomic system:
 *    '<S49>/MATLAB Function3'
 *    '<S50>/MATLAB Function3'
 */
void PubIfDecisionLSM_MDL_MATLABFunction3(real32_T rtu_C12, real32_T rtu_C13,
  B_MATLABFunction3_PubIfDecisionLSM_MDL_T *localB)
{
  localB->Fac1 = 1.0F / ((1.0F / rtu_C12 + 1.0F) + 1.0F / rtu_C13);
  localB->Fac2 = 1.0F / ((rtu_C12 + 1.0F) + rtu_C12 / rtu_C13);
  localB->Fac3 = 1.0F / ((rtu_C13 / rtu_C12 + rtu_C13) + 1.0F);
}

/*
 * Output and update for atomic system:
 *    '<S49>/MATLAB Function7'
 *    '<S50>/MATLAB Function7'
 */
void PubIfDecisionLSM_MDL_MATLABFunction7(real32_T rtu_L2_R, real32_T rtu_L3_R,
  B_MATLABFunction7_PubIfDecisionLSM_MDL_T *localB)
{
  localB->dy2_Ran = rtu_L2_R;
  localB->dy3_Ran = rtu_L3_R;
}

/* Output and update for Simulink Function: '<S4>/Simulink Function' */
void PubIfDecisionLSM_MDL_f(real32_T rtu_A0, real32_T rtu_A1, real32_T rtu_A2,
  real32_T rtu_A3, real32_T rtu_Range_min, real32_T rtu_Range_max, real32_T
  *rty_a0, real32_T *rty_a1, real32_T *rty_a2, real32_T *rty_a3, real32_T
  *rty_Rmin, real32_T *rty_Rmax)
{
  int32_T ipiv[4];
  int32_T info;
  real32_T A[16];
  real32_T MatrixA[16];
  real32_T xi[4];
  real32_T temp;
  real32_T tmp;
  real32_T tmp_0;
  real32_T tmp_1;
  real32_T yi_idx_0;
  real32_T yi_idx_1;
  real32_T yi_idx_2;
  real32_T yi_idx_3;
  boolean_T isodd;

  /* SignalConversion generated from: '<S16>/A0' */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA0Outport1 = rtu_A0;

  /* SignalConversion generated from: '<S16>/A1' */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA1Outport1 = rtu_A1;

  /* SignalConversion generated from: '<S16>/A2' */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA2Outport1 = rtu_A2;

  /* SignalConversion generated from: '<S16>/A3' */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA3Outport1 = rtu_A3;

  /* SignalConversion generated from: '<S16>/Range_min' */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtRange_minOutport1 = rtu_Range_min;

  /* SignalConversion generated from: '<S16>/Range_max' */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtRange_maxOutport1 = rtu_Range_max;

  /* MATLAB Function: '<S16>/MATLAB Function3' incorporates:
   *  Constant: '<S16>/Constant4'
   *  Constant: '<S16>/Constant5'
   */
  if (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtRange_maxOutport1 > 0.0F) {
    yi_idx_0 = (((-PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA3Outport1 *
                  1000.0F -
                  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA2Outport1 *
                  100.0F) -
                 PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA1Outport1 * 10.0F)
                - PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA0Outport1) +
      P_LSM_IFV2CenterAxis;
    xi[0] = 10.0F + P_LSM_IFV2RearAxis;
    yi_idx_1 = (((-PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA3Outport1 *
                  8000.0F -
                  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA2Outport1 *
                  400.0F) -
                 PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA1Outport1 * 20.0F)
                - PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA0Outport1) +
      P_LSM_IFV2CenterAxis;
    xi[1] = 20.0F + P_LSM_IFV2RearAxis;
    yi_idx_2 = (((-PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA3Outport1 *
                  64000.0F -
                  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA2Outport1 *
                  1600.0F) -
                 PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA1Outport1 * 40.0F)
                - PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA0Outport1) +
      P_LSM_IFV2CenterAxis;
    xi[2] = 40.0F + P_LSM_IFV2RearAxis;
    yi_idx_3 = (((-PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA3Outport1 *
                  512000.0F -
                  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA2Outport1 *
                  6400.0F) -
                 PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA1Outport1 * 80.0F)
                - PubIfDecisionLSM_MDL_B.TmpSignalConversionAtA0Outport1) +
      P_LSM_IFV2CenterAxis;
    xi[3] = 80.0F + P_LSM_IFV2RearAxis;
    temp = rt_powf_snf(xi[0], 3.0F);
    tmp = rt_powf_snf(xi[1], 3.0F);
    tmp_0 = rt_powf_snf(xi[2], 3.0F);
    tmp_1 = rt_powf_snf(xi[3], 3.0F);
    MatrixA[0] = temp;
    MatrixA[4] = xi[0] * xi[0];
    MatrixA[8] = xi[0];
    MatrixA[12] = 1.0F;
    MatrixA[1] = tmp;
    MatrixA[5] = xi[1] * xi[1];
    MatrixA[9] = xi[1];
    MatrixA[13] = 1.0F;
    MatrixA[2] = tmp_0;
    MatrixA[6] = xi[2] * xi[2];
    MatrixA[10] = xi[2];
    MatrixA[14] = 1.0F;
    MatrixA[3] = tmp_1;
    MatrixA[7] = xi[3] * xi[3];
    MatrixA[11] = xi[3];
    MatrixA[15] = 1.0F;
    memcpy(&A[0], &MatrixA[0], sizeof(real32_T) << 4U);
    xzgetrf_qoSwvruO(A, ipiv, &info);
    temp = A[0];
    isodd = false;
    temp *= A[5];
    if (ipiv[0] > 1) {
      isodd = true;
    }

    temp *= A[10];
    if (ipiv[1] > 2) {
      isodd = !isodd;
    }

    temp *= A[15];
    if (ipiv[2] > 3) {
      isodd = !isodd;
    }

    if (isodd) {
      temp = -temp;
    }

    if (temp == 0.0F) {
      temp = 0.0F;
      yi_idx_0 = 0.0F;
      yi_idx_1 = 0.0F;
      yi_idx_2 = 0.0F;
    } else {
      xzgetrf_qoSwvruO(MatrixA, ipiv, &info);
      xi[0] = yi_idx_0;
      xi[1] = yi_idx_1;
      xi[2] = yi_idx_2;
      xi[3] = yi_idx_3;
      info = ipiv[0];
      if (info != 1) {
        temp = xi[0];
        xi[0] = xi[info - 1];
        xi[info - 1] = temp;
      }

      info = ipiv[1];
      if (info != 2) {
        temp = xi[1];
        xi[1] = xi[info - 1];
        xi[info - 1] = temp;
      }

      info = ipiv[2];
      if (info != 3) {
        temp = xi[2];
        xi[2] = xi[info - 1];
        xi[info - 1] = temp;
      }

      if (xi[0] != 0.0F) {
        for (info = 1; info + 1 < 5; info++) {
          xi[info] -= xi[0] * MatrixA[info];
        }
      }

      if (xi[1] != 0.0F) {
        for (info = 2; info + 1 < 5; info++) {
          xi[info] -= MatrixA[info + 4] * xi[1];
        }
      }

      if (xi[2] != 0.0F) {
        for (info = 3; info + 1 < 5; info++) {
          xi[info] -= MatrixA[info + 8] * xi[2];
        }
      }

      if (xi[3] != 0.0F) {
        xi[3] /= MatrixA[15];
        for (info = 0; info < 3; info++) {
          xi[info] -= MatrixA[info + 12] * xi[3];
        }
      }

      if (xi[2] != 0.0F) {
        xi[2] /= MatrixA[10];
        for (info = 0; info < 2; info++) {
          xi[info] -= MatrixA[info + 8] * xi[2];
        }
      }

      if (xi[1] != 0.0F) {
        xi[1] /= MatrixA[5];
        xi[0] -= xi[1] * MatrixA[4];
      }

      if (xi[0] != 0.0F) {
        xi[0] /= MatrixA[0];
      }

      temp = xi[0];
      yi_idx_0 = xi[1];
      yi_idx_1 = xi[2];
      yi_idx_2 = xi[3];
    }
  } else {
    temp = 0.0F;
    yi_idx_0 = 0.0F;
    yi_idx_1 = 0.0F;
    yi_idx_2 = 0.0F;
  }

  PubIfDecisionLSM_MDL_B.a0 = yi_idx_2;
  PubIfDecisionLSM_MDL_B.a1 = yi_idx_1;
  PubIfDecisionLSM_MDL_B.a2 = yi_idx_0;
  PubIfDecisionLSM_MDL_B.a3 = temp;
  PubIfDecisionLSM_MDL_B.Rmin_a =
    PubIfDecisionLSM_MDL_B.TmpSignalConversionAtRange_minOutport1 +
    P_LSM_IFV2RearAxis;
  PubIfDecisionLSM_MDL_B.Rmax_f =
    PubIfDecisionLSM_MDL_B.TmpSignalConversionAtRange_maxOutport1 +
    P_LSM_IFV2RearAxis;

  /* End of MATLAB Function: '<S16>/MATLAB Function3' */

  /* SignalConversion generated from: '<S16>/Rmax' */
  *rty_Rmax = PubIfDecisionLSM_MDL_B.Rmax_f;

  /* SignalConversion generated from: '<S16>/Rmin' */
  *rty_Rmin = PubIfDecisionLSM_MDL_B.Rmin_a;

  /* SignalConversion generated from: '<S16>/a0' */
  *rty_a0 = PubIfDecisionLSM_MDL_B.a0;

  /* SignalConversion generated from: '<S16>/a1' */
  *rty_a1 = PubIfDecisionLSM_MDL_B.a1;

  /* SignalConversion generated from: '<S16>/a2' */
  *rty_a2 = PubIfDecisionLSM_MDL_B.a2;

  /* SignalConversion generated from: '<S16>/a3' */
  *rty_a3 = PubIfDecisionLSM_MDL_B.a3;
}

/* Function for MATLAB Function: '<S17>/ESSLineCalc1' */
static real32_T PubIfDecisionLSM_MDL_minimum(const real32_T x[4])
{
  int32_T idx;
  int32_T k;
  real32_T ex;
  boolean_T exitg1;
  if (!rtIsNaNF(x[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (!rtIsNaNF(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    while (idx + 1 < 5) {
      if (ex > x[idx]) {
        ex = x[idx];
      }

      idx++;
    }
  }

  return ex;
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_CruiseValid(const RFM_TSR_BUS *rtu_RFM_TSR,
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.StubValid) {
    PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid =
      PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_StubValid;
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;

    /* Chart: '<S68>/Chart1' */
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        /* Chart: '<S68>/Chart1' */
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        /* Chart: '<S68>/Chart1' */
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      /* Chart: '<S68>/Chart1' */
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (rtu_RFM_TSR->RoadType == 2) {
    PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid =
      PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid1;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 24U;

    /* Chart: '<S68>/Chart1' */
    *rty_LSM_PilotSPL = MAX_uint8_T;
    *rty_LSM_PilotSPLDist = MAX_uint16_T;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid1 = PubIfDecisionLSM_MDL_IN_init_m;
    PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_Name;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
  } else {
    /* Chart: '<S68>/Chart1' */
    sf_internal_predicateOutput = ((rtu_RFM_TSR->RoadType != 1) &&
      (rtu_RFM_TSR->RoadType != 2));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_init_c =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid2;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 18U;

      /* Chart: '<S68>/Chart1' */
      *rty_LSM_PilotSPL = 60U;
      *rty_LSM_PilotSPLDist = 0U;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid2 = PubIfDecisionLSM_MDL_IN_init_m;
      PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_Name;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
    } else if (PubIfDecisionLSM_MDL_B.EntryStub5) {
      PubIfDecisionLSM_MDL_DW.is_init_c =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_EntryStub1;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 26U;
      PubIfDecisionLSM_MDL_DW.is_EntryStub1 = PubIfDecisionLSM_MDL_IN_Name;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
    } else if (PubIfDecisionLSM_MDL_B.EntryStub6) {
      PubIfDecisionLSM_MDL_DW.is_init_c =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_EntryStub2;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 25U;
    } else {
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 17U;

      /* Chart: '<S68>/Chart1' */
      *rty_LSM_PilotSPL = MAX_uint8_T;
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
      switch (PubIfDecisionLSM_MDL_DW.is_CruiseValid) {
       case PubIfDecisionLSM_MDL_IN_Name2:
        if (!PubIfDecisionLSM_MDL_B.Compare_nn) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid =
            PubIfDecisionLSM_MDL_IN_init_m;
          PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
        } else {
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        }
        break;

       case PubIfDecisionLSM_MDL_IN_init_m:
        sf_internal_predicateOutput = (PubIfDecisionLSM_MDL_B.CruiseTurn &&
          PubIfDecisionLSM_MDL_B.TurnLeft);
        if (sf_internal_predicateOutput) {
          PubIfDecisionLSM_MDL_DW.is_init_c =
            PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
          PubIfDecisionLSM_MDL_DW.is_CruiseValid =
            PubIfDecisionLSM_MDL_IN_init1_n;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        } else if (PubIfDecisionLSM_MDL_B.Compare_nn) {
          PubIfDecisionLSM_MDL_DW.is_init_c =
            PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
          PubIfDecisionLSM_MDL_DW.is_CruiseValid = PubIfDecisionLSM_MDL_IN_Name2;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        } else {
          sf_internal_predicateOutput = (PubIfDecisionLSM_MDL_B.CruiseTurn &&
            PubIfDecisionLSM_MDL_B.TurnLeft_e);
          if (sf_internal_predicateOutput) {
            PubIfDecisionLSM_MDL_DW.is_init_c =
              PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
            PubIfDecisionLSM_MDL_DW.is_CruiseValid =
              PubIfDecisionLSM_MDL_IN_init2;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
          } else {
            switch (PubIfDecisionLSM_MDL_DW.is_init_c) {
             case PubIfDecisionLSM_MDL_IN_Name:
              if (PubIfDecisionLSM_MDL_B.Forbid_TurnLeft) {
                PubIfDecisionLSM_MDL_DW.is_init_c =
                  PubIfDecisionLSM_MDL_IN_init4;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 6U;
              } else if (PubIfDecisionLSM_MDL_B.OneLane) {
                PubIfDecisionLSM_MDL_DW.is_init_c =
                  PubIfDecisionLSM_MDL_IN_init5;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
              } else if (PubIfDecisionLSM_MDL_B.Forbid_TurnRight) {
                PubIfDecisionLSM_MDL_DW.is_init_c =
                  PubIfDecisionLSM_MDL_IN_init3;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 7U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              }
              break;

             case PubIfDecisionLSM_MDL_IN_init3:
              if (!PubIfDecisionLSM_MDL_B.Forbid_TurnRight) {
                PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 7U;
              }
              break;

             case PubIfDecisionLSM_MDL_IN_init4:
              if (!PubIfDecisionLSM_MDL_B.Forbid_TurnLeft) {
                PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 6U;
              }
              break;

             default:
              /* case IN_init5: */
              if (!PubIfDecisionLSM_MDL_B.OneLane) {
                PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
              }
              break;
            }
          }
        }
        break;

       case PubIfDecisionLSM_MDL_IN_init1_n:
        if (!PubIfDecisionLSM_MDL_B.CruiseTurn) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid =
            PubIfDecisionLSM_MDL_IN_init_m;
          PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
        } else if (PubIfDecisionLSM_MDL_B.TurnLeft_e) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid = PubIfDecisionLSM_MDL_IN_init2;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
        } else {
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        }
        break;

       default:
        /* case IN_init2: */
        if (!PubIfDecisionLSM_MDL_B.CruiseTurn) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid =
            PubIfDecisionLSM_MDL_IN_init_m;
          PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
        } else if (PubIfDecisionLSM_MDL_B.TurnLeft) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid =
            PubIfDecisionLSM_MDL_IN_init1_n;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        } else {
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
        }
        break;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_CruiseValid1(const RFM_TSR_BUS *rtu_RFM_TSR,
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.StubValid) {
    PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
      PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_StubValid;
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;

    /* Chart: '<S68>/Chart1' */
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        /* Chart: '<S68>/Chart1' */
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        /* Chart: '<S68>/Chart1' */
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      /* Chart: '<S68>/Chart1' */
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (rtu_RFM_TSR->RoadType == 1) {
    PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
      PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 17U;

    /* Chart: '<S68>/Chart1' */
    *rty_LSM_PilotSPL = MAX_uint8_T;
    *rty_LSM_PilotSPLDist = MAX_uint16_T;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid = PubIfDecisionLSM_MDL_IN_init_m;
    PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
  } else {
    /* Chart: '<S68>/Chart1' */
    sf_internal_predicateOutput = ((rtu_RFM_TSR->RoadType != 1) &&
      (rtu_RFM_TSR->RoadType != 2));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_init_l =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid2;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 18U;

      /* Chart: '<S68>/Chart1' */
      *rty_LSM_PilotSPL = 60U;
      *rty_LSM_PilotSPLDist = 0U;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid2 = PubIfDecisionLSM_MDL_IN_init_m;
      PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_Name;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
    } else {
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 24U;

      /* Chart: '<S68>/Chart1' */
      *rty_LSM_PilotSPL = MAX_uint8_T;
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
      switch (PubIfDecisionLSM_MDL_DW.is_CruiseValid1) {
       case PubIfDecisionLSM_MDL_IN_Name2:
        if (!PubIfDecisionLSM_MDL_B.Compare_nn) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
            PubIfDecisionLSM_MDL_IN_init_m;
          PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_Name;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
        } else {
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        }
        break;

       case PubIfDecisionLSM_MDL_IN_init_m:
        if (PubIfDecisionLSM_MDL_B.Compare_nn) {
          PubIfDecisionLSM_MDL_DW.is_init_l =
            PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
          PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
            PubIfDecisionLSM_MDL_IN_Name2;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        } else {
          sf_internal_predicateOutput = (PubIfDecisionLSM_MDL_B.CruiseTurn &&
            PubIfDecisionLSM_MDL_B.TurnLeft_e);
          if (sf_internal_predicateOutput) {
            PubIfDecisionLSM_MDL_DW.is_init_l =
              PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
            PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
              PubIfDecisionLSM_MDL_IN_init2;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
          } else {
            sf_internal_predicateOutput = (PubIfDecisionLSM_MDL_B.CruiseTurn &&
              PubIfDecisionLSM_MDL_B.TurnLeft);
            if (sf_internal_predicateOutput) {
              PubIfDecisionLSM_MDL_DW.is_init_l =
                PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
              PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
                PubIfDecisionLSM_MDL_IN_init1_n;
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
            } else {
              switch (PubIfDecisionLSM_MDL_DW.is_init_l) {
               case PubIfDecisionLSM_MDL_IN_Name:
                if (PubIfDecisionLSM_MDL_B.Forbid_TurnLeft) {
                  PubIfDecisionLSM_MDL_DW.is_init_l =
                    PubIfDecisionLSM_MDL_IN_init4;
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 6U;
                } else if (PubIfDecisionLSM_MDL_B.OneLane) {
                  PubIfDecisionLSM_MDL_DW.is_init_l =
                    PubIfDecisionLSM_MDL_IN_init5;
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
                } else if (PubIfDecisionLSM_MDL_B.Forbid_TurnRight) {
                  PubIfDecisionLSM_MDL_DW.is_init_l =
                    PubIfDecisionLSM_MDL_IN_init3;
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 7U;
                } else {
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
                }
                break;

               case PubIfDecisionLSM_MDL_IN_init3:
                if (!PubIfDecisionLSM_MDL_B.Forbid_TurnRight) {
                  PubIfDecisionLSM_MDL_DW.is_init_l =
                    PubIfDecisionLSM_MDL_IN_Name;
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
                } else {
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 7U;
                }
                break;

               case PubIfDecisionLSM_MDL_IN_init4:
                if (!PubIfDecisionLSM_MDL_B.Forbid_TurnLeft) {
                  PubIfDecisionLSM_MDL_DW.is_init_l =
                    PubIfDecisionLSM_MDL_IN_Name;
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
                } else {
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 6U;
                }
                break;

               default:
                /* case IN_init5: */
                if (!PubIfDecisionLSM_MDL_B.OneLane) {
                  PubIfDecisionLSM_MDL_DW.is_init_l =
                    PubIfDecisionLSM_MDL_IN_Name;
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
                } else {
                  PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
                }
                break;
              }
            }
          }
        }
        break;

       case PubIfDecisionLSM_MDL_IN_init1_n:
        if (!PubIfDecisionLSM_MDL_B.CruiseTurn) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
            PubIfDecisionLSM_MDL_IN_init_m;
          PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_Name;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
        } else if (PubIfDecisionLSM_MDL_B.TurnLeft_e) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
            PubIfDecisionLSM_MDL_IN_init2;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
        } else {
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        }
        break;

       default:
        /* case IN_init2: */
        if (!PubIfDecisionLSM_MDL_B.CruiseTurn) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
            PubIfDecisionLSM_MDL_IN_init_m;
          PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_Name;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
        } else if (PubIfDecisionLSM_MDL_B.TurnLeft) {
          PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
            PubIfDecisionLSM_MDL_IN_init1_n;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        } else {
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
        }
        break;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_CruiseValid2(const RFM_TSR_BUS *rtu_RFM_TSR,
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;

  /* Chart: '<S68>/Chart1' */
  if (rtu_RFM_TSR->RoadType == 1) {
    PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid2 =
      PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 17U;
    *rty_LSM_PilotSPL = MAX_uint8_T;
    *rty_LSM_PilotSPLDist = MAX_uint16_T;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid = PubIfDecisionLSM_MDL_IN_init_m;
    PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
  } else if (PubIfDecisionLSM_MDL_B.StubValid) {
    PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid2 =
      PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_StubValid;
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (rtu_RFM_TSR->RoadType == 2) {
    PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid2 =
      PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid1;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 24U;
    *rty_LSM_PilotSPL = MAX_uint8_T;
    *rty_LSM_PilotSPLDist = MAX_uint16_T;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid1 = PubIfDecisionLSM_MDL_IN_init_m;
    PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_Name;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
  } else {
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 18U;
    *rty_LSM_PilotSPL = 60U;
    *rty_LSM_PilotSPLDist = 0U;
    switch (PubIfDecisionLSM_MDL_DW.is_CruiseValid2) {
     case PubIfDecisionLSM_MDL_IN_Name2:
      if (!PubIfDecisionLSM_MDL_B.Compare_nn) {
        PubIfDecisionLSM_MDL_DW.is_CruiseValid2 = PubIfDecisionLSM_MDL_IN_init_m;
        PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_Name;
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      } else {
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
      }
      break;

     case PubIfDecisionLSM_MDL_IN_init_m:
      if (PubIfDecisionLSM_MDL_B.Compare_nn) {
        PubIfDecisionLSM_MDL_DW.is_init =
          PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
        PubIfDecisionLSM_MDL_DW.is_CruiseValid2 = PubIfDecisionLSM_MDL_IN_Name2;
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
      } else {
        sf_internal_predicateOutput = (PubIfDecisionLSM_MDL_B.CruiseTurn &&
          PubIfDecisionLSM_MDL_B.TurnLeft);
        if (sf_internal_predicateOutput) {
          PubIfDecisionLSM_MDL_DW.is_init =
            PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
          PubIfDecisionLSM_MDL_DW.is_CruiseValid2 =
            PubIfDecisionLSM_MDL_IN_init1_n;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        } else {
          sf_internal_predicateOutput = (PubIfDecisionLSM_MDL_B.CruiseTurn &&
            PubIfDecisionLSM_MDL_B.TurnLeft_e);
          if (sf_internal_predicateOutput) {
            PubIfDecisionLSM_MDL_DW.is_init =
              PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
            PubIfDecisionLSM_MDL_DW.is_CruiseValid2 =
              PubIfDecisionLSM_MDL_IN_init2;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
          } else {
            switch (PubIfDecisionLSM_MDL_DW.is_init) {
             case PubIfDecisionLSM_MDL_IN_Name:
              if (PubIfDecisionLSM_MDL_B.Forbid_TurnLeft) {
                PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_init4;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 6U;
              } else if (PubIfDecisionLSM_MDL_B.OneLane) {
                PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_init5;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
              } else if (PubIfDecisionLSM_MDL_B.Forbid_TurnRight) {
                PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_init3;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 7U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              }
              break;

             case PubIfDecisionLSM_MDL_IN_init3:
              if (!PubIfDecisionLSM_MDL_B.Forbid_TurnRight) {
                PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_Name;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 7U;
              }
              break;

             case PubIfDecisionLSM_MDL_IN_init4:
              if (!PubIfDecisionLSM_MDL_B.Forbid_TurnLeft) {
                PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_Name;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 6U;
              }
              break;

             default:
              /* case IN_init5: */
              if (!PubIfDecisionLSM_MDL_B.OneLane) {
                PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_Name;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
              }
              break;
            }
          }
        }
      }
      break;

     case PubIfDecisionLSM_MDL_IN_init1_n:
      if (!PubIfDecisionLSM_MDL_B.CruiseTurn) {
        PubIfDecisionLSM_MDL_DW.is_CruiseValid2 = PubIfDecisionLSM_MDL_IN_init_m;
        PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_Name;
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      } else if (PubIfDecisionLSM_MDL_B.TurnLeft_e) {
        PubIfDecisionLSM_MDL_DW.is_CruiseValid2 = PubIfDecisionLSM_MDL_IN_init2;
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
      } else {
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
      }
      break;

     default:
      /* case IN_init2: */
      if (!PubIfDecisionLSM_MDL_B.CruiseTurn) {
        PubIfDecisionLSM_MDL_DW.is_CruiseValid2 = PubIfDecisionLSM_MDL_IN_init_m;
        PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_Name;
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      } else if (PubIfDecisionLSM_MDL_B.TurnLeft) {
        PubIfDecisionLSM_MDL_DW.is_CruiseValid2 =
          PubIfDecisionLSM_MDL_IN_init1_n;
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
      } else {
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
      }
      break;
    }
  }

  /* End of Chart: '<S68>/Chart1' */
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_exit_internal_StubValid(void)
{
  PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_CruiseLeft(uint16_T *rty_LSM_PilotSPLDist,
  uint8_T *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.lExitStub1) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_lExitStub1;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 10U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.LeftStub) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_LeftStub;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 9U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.CruiseLeft) &&
      (!PubIfDecisionLSM_MDL_B.LeftStub) && (!PubIfDecisionLSM_MDL_B.rExitStub1));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    } else {
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 9U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_Name2(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.rExitStub1) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name3;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 8U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.RightStub) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name_d;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 7U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.CruiseRight) &&
      (!PubIfDecisionLSM_MDL_B.RightStub) && (!PubIfDecisionLSM_MDL_B.rExitStub1));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    } else {
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 7U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_Name3(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.rExitStub3) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name4;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 20U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.rExitStub2) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name5;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 19U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.CruiseRight) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name2_f;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 7U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.CruiseRight) &&
      (!PubIfDecisionLSM_MDL_B.rExitStub1) &&
      (!PubIfDecisionLSM_MDL_B.rExitStub3) &&
      (!PubIfDecisionLSM_MDL_B.rExitStub2));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    } else {
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 8U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_Name4(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.rExitStub2) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name5;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 19U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.rExitStub1) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name3;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 8U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.rExitStub2) &&
      (!PubIfDecisionLSM_MDL_B.rExitStub3) &&
      (!PubIfDecisionLSM_MDL_B.rExitStub1));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    } else {
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 20U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_Name5(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.rExitStub3) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name4;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 20U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.rExitStub1) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name3;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 8U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.rExitStub2) &&
      (!PubIfDecisionLSM_MDL_B.rExitStub3) &&
      (!PubIfDecisionLSM_MDL_B.rExitStub1));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    } else {
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 19U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_init(uint16_T *rty_LSM_PilotSPLDist, uint8_T
  *rty_LSM_PilotSPL)
{
  real32_T tmp;
  if (PubIfDecisionLSM_MDL_B.RightStub) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name_d;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 7U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.EntryStub3) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_EntryStub3;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 2U;
  } else if (PubIfDecisionLSM_MDL_B.CruiseRight) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name2_f;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 7U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.EntryStub4) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_EntryStub4;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 1U;
  } else if (PubIfDecisionLSM_MDL_B.CruiseLeft) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_CruiseLeft;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 9U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.LeftStub) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_LeftStub;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 9U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.EntryStub1) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_EntryStub1_i;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 2U;
  } else if (PubIfDecisionLSM_MDL_B.EntryStub2) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_EntryStub2_d;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 1U;
  } else if (PubIfDecisionLSM_MDL_B.rExitStub1) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_Name3;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 8U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.lExitStub1) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_lExitStub1;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 10U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_lExitStub1(uint16_T *rty_LSM_PilotSPLDist,
  uint8_T *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.lExitStub3) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_lExitStub3;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 20U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.lExitStub2) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_lExitStub2;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 19U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.CruiseLeft) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_CruiseLeft;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 9U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.CruiseLeft) &&
      (!PubIfDecisionLSM_MDL_B.lExitStub1) &&
      (!PubIfDecisionLSM_MDL_B.lExitStub3) &&
      (!PubIfDecisionLSM_MDL_B.lExitStub2));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    } else {
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 10U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_lExitStub2(uint16_T *rty_LSM_PilotSPLDist,
  uint8_T *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.lExitStub3) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_lExitStub3;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 20U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.lExitStub1) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_lExitStub1;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 10U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.lExitStub2) &&
      (!PubIfDecisionLSM_MDL_B.lExitStub3) &&
      (!PubIfDecisionLSM_MDL_B.lExitStub1));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    } else {
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 19U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_lExitStub3(uint16_T *rty_LSM_PilotSPLDist,
  uint8_T *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;
  if (PubIfDecisionLSM_MDL_B.lExitStub2) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_lExitStub2;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 19U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else if (PubIfDecisionLSM_MDL_B.lExitStub1) {
    PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_lExitStub1;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 5U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 10U;
    *rty_LSM_PilotSPL = 60U;
    tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        *rty_LSM_PilotSPLDist = (uint16_T)tmp;
      } else {
        *rty_LSM_PilotSPLDist = 0U;
      }
    } else {
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.lExitStub2) &&
      (!PubIfDecisionLSM_MDL_B.lExitStub3) &&
      (!PubIfDecisionLSM_MDL_B.lExitStub1));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    } else {
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 20U;
      *rty_LSM_PilotSPL = 60U;
      tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (tmp < 65536.0F) {
        if (tmp >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)tmp;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    }
  }
}

/* Function for Chart: '<S68>/Chart1' */
static void PubIfDecisionLSM_MDL_StubValid(const RFM_TSR_BUS *rtu_RFM_TSR,
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL)
{
  real32_T tmp;
  boolean_T sf_internal_predicateOutput;

  /* Chart: '<S68>/Chart1' */
  sf_internal_predicateOutput = (PubIfDecisionLSM_MDL_B.CruiseValid &&
    (rtu_RFM_TSR->RoadType == 1) && (!PubIfDecisionLSM_MDL_B.EntryStub5) &&
    (!PubIfDecisionLSM_MDL_B.EntryStub6));
  if (sf_internal_predicateOutput) {
    PubIfDecisionLSM_MDL_exit_internal_StubValid();
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 17U;

    /* Chart: '<S68>/Chart1' */
    *rty_LSM_PilotSPL = MAX_uint8_T;
    *rty_LSM_PilotSPLDist = MAX_uint16_T;
    PubIfDecisionLSM_MDL_DW.is_CruiseValid = PubIfDecisionLSM_MDL_IN_init_m;
    PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
  } else if (PubIfDecisionLSM_MDL_B.EntryStub5) {
    PubIfDecisionLSM_MDL_exit_internal_StubValid();
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_EntryStub1;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 26U;
    PubIfDecisionLSM_MDL_DW.is_EntryStub1 = PubIfDecisionLSM_MDL_IN_Name;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
  } else if (PubIfDecisionLSM_MDL_B.EntryStub6) {
    PubIfDecisionLSM_MDL_exit_internal_StubValid();
    PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_EntryStub2;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 25U;
  } else {
    /* Chart: '<S68>/Chart1' */
    sf_internal_predicateOutput = (PubIfDecisionLSM_MDL_B.CruiseValid &&
      (rtu_RFM_TSR->RoadType == 2) && (!PubIfDecisionLSM_MDL_B.EntryStub5) &&
      (!PubIfDecisionLSM_MDL_B.EntryStub6));
    if (sf_internal_predicateOutput) {
      PubIfDecisionLSM_MDL_exit_internal_StubValid();
      PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid1;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 24U;

      /* Chart: '<S68>/Chart1' */
      *rty_LSM_PilotSPL = MAX_uint8_T;
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid1 = PubIfDecisionLSM_MDL_IN_init_m;
      PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_Name;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
    } else {
      /* Chart: '<S68>/Chart1' */
      sf_internal_predicateOutput = (PubIfDecisionLSM_MDL_B.CruiseValid &&
        (rtu_RFM_TSR->RoadType != 1) && (rtu_RFM_TSR->RoadType != 2) &&
        (!PubIfDecisionLSM_MDL_B.EntryStub5) &&
        (!PubIfDecisionLSM_MDL_B.EntryStub6));
      if (sf_internal_predicateOutput) {
        PubIfDecisionLSM_MDL_exit_internal_StubValid();
        PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid2;
        PubIfDecisionLSM_MDL_B.PilotRoadSts = 18U;

        /* Chart: '<S68>/Chart1' */
        *rty_LSM_PilotSPL = 60U;
        *rty_LSM_PilotSPLDist = 0U;
        PubIfDecisionLSM_MDL_DW.is_CruiseValid2 = PubIfDecisionLSM_MDL_IN_init_m;
        PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_Name;
        PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      } else {
        switch (PubIfDecisionLSM_MDL_DW.is_StubValid) {
         case PubIfDecisionLSM_MDL_IN_CruiseLeft:
          /* Chart: '<S68>/Chart1' */
          PubIfDecisionLSM_MDL_CruiseLeft(rty_LSM_PilotSPLDist, rty_LSM_PilotSPL);
          break;

         case PubIfDecisionLSM_MDL_IN_EntryStub1_i:
          if (PubIfDecisionLSM_MDL_B.EntryStub2) {
            PubIfDecisionLSM_MDL_DW.is_StubValid =
              PubIfDecisionLSM_MDL_IN_EntryStub2_d;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 1U;
          } else {
            sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.EntryStub1) &&
              (!PubIfDecisionLSM_MDL_B.EntryStub2));
            if (sf_internal_predicateOutput) {
              PubIfDecisionLSM_MDL_DW.is_StubValid =
                PubIfDecisionLSM_MDL_IN_init_mo;
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;

              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPL = 60U;
              tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
              if (tmp < 65536.0F) {
                if (tmp >= 0.0F) {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = (uint16_T)tmp;
                } else {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = 0U;
                }
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = MAX_uint16_T;
              }
            } else {
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 2U;
            }
          }
          break;

         case PubIfDecisionLSM_MDL_IN_EntryStub2_d:
          if (PubIfDecisionLSM_MDL_B.EntryStub1) {
            PubIfDecisionLSM_MDL_DW.is_StubValid =
              PubIfDecisionLSM_MDL_IN_EntryStub1_i;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 2U;
          } else {
            sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.EntryStub1) &&
              (!PubIfDecisionLSM_MDL_B.EntryStub2));
            if (sf_internal_predicateOutput) {
              PubIfDecisionLSM_MDL_DW.is_StubValid =
                PubIfDecisionLSM_MDL_IN_init_mo;
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;

              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPL = 60U;
              tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
              if (tmp < 65536.0F) {
                if (tmp >= 0.0F) {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = (uint16_T)tmp;
                } else {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = 0U;
                }
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = MAX_uint16_T;
              }
            } else {
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 1U;
            }
          }
          break;

         case PubIfDecisionLSM_MDL_IN_EntryStub3:
          if (PubIfDecisionLSM_MDL_B.EntryStub4) {
            PubIfDecisionLSM_MDL_DW.is_StubValid =
              PubIfDecisionLSM_MDL_IN_EntryStub4;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 1U;
          } else {
            sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.EntryStub3) &&
              (!PubIfDecisionLSM_MDL_B.EntryStub4));
            if (sf_internal_predicateOutput) {
              PubIfDecisionLSM_MDL_DW.is_StubValid =
                PubIfDecisionLSM_MDL_IN_init_mo;
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;

              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPL = 60U;
              tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
              if (tmp < 65536.0F) {
                if (tmp >= 0.0F) {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = (uint16_T)tmp;
                } else {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = 0U;
                }
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = MAX_uint16_T;
              }
            } else {
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 2U;
            }
          }
          break;

         case PubIfDecisionLSM_MDL_IN_EntryStub4:
          if (PubIfDecisionLSM_MDL_B.EntryStub3) {
            PubIfDecisionLSM_MDL_DW.is_StubValid =
              PubIfDecisionLSM_MDL_IN_EntryStub3;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 2U;
          } else {
            sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.EntryStub3) &&
              (!PubIfDecisionLSM_MDL_B.EntryStub4));
            if (sf_internal_predicateOutput) {
              PubIfDecisionLSM_MDL_DW.is_StubValid =
                PubIfDecisionLSM_MDL_IN_init_mo;
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;

              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPL = 60U;
              tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
              if (tmp < 65536.0F) {
                if (tmp >= 0.0F) {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = (uint16_T)tmp;
                } else {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = 0U;
                }
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = MAX_uint16_T;
              }
            } else {
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 1U;
            }
          }
          break;

         case PubIfDecisionLSM_MDL_IN_LeftStub:
          if (PubIfDecisionLSM_MDL_B.CruiseLeft) {
            PubIfDecisionLSM_MDL_DW.is_StubValid =
              PubIfDecisionLSM_MDL_IN_CruiseLeft;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 9U;

            /* Chart: '<S68>/Chart1' */
            *rty_LSM_PilotSPL = 60U;
            tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
            if (tmp < 65536.0F) {
              if (tmp >= 0.0F) {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = (uint16_T)tmp;
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = 0U;
              }
            } else {
              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPLDist = MAX_uint16_T;
            }
          } else {
            sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.LeftStub) &&
              (!PubIfDecisionLSM_MDL_B.CruiseLeft));
            if (sf_internal_predicateOutput) {
              PubIfDecisionLSM_MDL_DW.is_StubValid =
                PubIfDecisionLSM_MDL_IN_init_mo;
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;

              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPL = 60U;
              tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
              if (tmp < 65536.0F) {
                if (tmp >= 0.0F) {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = (uint16_T)tmp;
                } else {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = 0U;
                }
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = MAX_uint16_T;
              }
            } else {
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 9U;

              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPL = 60U;
              tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
              if (tmp < 65536.0F) {
                if (tmp >= 0.0F) {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = (uint16_T)tmp;
                } else {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = 0U;
                }
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = MAX_uint16_T;
              }
            }
          }
          break;

         case PubIfDecisionLSM_MDL_IN_Name_d:
          if (PubIfDecisionLSM_MDL_B.CruiseRight) {
            PubIfDecisionLSM_MDL_DW.is_StubValid =
              PubIfDecisionLSM_MDL_IN_Name2_f;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 3U;
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 7U;

            /* Chart: '<S68>/Chart1' */
            *rty_LSM_PilotSPL = 60U;
            tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
            if (tmp < 65536.0F) {
              if (tmp >= 0.0F) {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = (uint16_T)tmp;
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = 0U;
              }
            } else {
              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPLDist = MAX_uint16_T;
            }
          } else {
            sf_internal_predicateOutput = ((!PubIfDecisionLSM_MDL_B.RightStub) &&
              (!PubIfDecisionLSM_MDL_B.CruiseRight));
            if (sf_internal_predicateOutput) {
              PubIfDecisionLSM_MDL_DW.is_StubValid =
                PubIfDecisionLSM_MDL_IN_init_mo;
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;

              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPL = 60U;
              tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
              if (tmp < 65536.0F) {
                if (tmp >= 0.0F) {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = (uint16_T)tmp;
                } else {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = 0U;
                }
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = MAX_uint16_T;
              }
            } else {
              PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 2U;
              PubIfDecisionLSM_MDL_B.PilotRoadSts = 7U;

              /* Chart: '<S68>/Chart1' */
              *rty_LSM_PilotSPL = 60U;
              tmp = roundf(PubIfDecisionLSM_MDL_B.Subtract);
              if (tmp < 65536.0F) {
                if (tmp >= 0.0F) {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = (uint16_T)tmp;
                } else {
                  /* Chart: '<S68>/Chart1' */
                  *rty_LSM_PilotSPLDist = 0U;
                }
              } else {
                /* Chart: '<S68>/Chart1' */
                *rty_LSM_PilotSPLDist = MAX_uint16_T;
              }
            }
          }
          break;

         case PubIfDecisionLSM_MDL_IN_Name2_f:
          /* Chart: '<S68>/Chart1' */
          PubIfDecisionLSM_MDL_Name2(rty_LSM_PilotSPLDist, rty_LSM_PilotSPL);
          break;

         case PubIfDecisionLSM_MDL_IN_Name3:
          /* Chart: '<S68>/Chart1' */
          PubIfDecisionLSM_MDL_Name3(rty_LSM_PilotSPLDist, rty_LSM_PilotSPL);
          break;

         case PubIfDecisionLSM_MDL_IN_Name4:
          /* Chart: '<S68>/Chart1' */
          PubIfDecisionLSM_MDL_Name4(rty_LSM_PilotSPLDist, rty_LSM_PilotSPL);
          break;

         case PubIfDecisionLSM_MDL_IN_Name5:
          /* Chart: '<S68>/Chart1' */
          PubIfDecisionLSM_MDL_Name5(rty_LSM_PilotSPLDist, rty_LSM_PilotSPL);
          break;

         case PubIfDecisionLSM_MDL_IN_init_mo:
          /* Chart: '<S68>/Chart1' */
          PubIfDecisionLSM_MDL_init(rty_LSM_PilotSPLDist, rty_LSM_PilotSPL);
          break;

         case PubIfDecisionLSM_MDL_IN_lExitStub1:
          /* Chart: '<S68>/Chart1' */
          PubIfDecisionLSM_MDL_lExitStub1(rty_LSM_PilotSPLDist, rty_LSM_PilotSPL);
          break;

         case PubIfDecisionLSM_MDL_IN_lExitStub2:
          /* Chart: '<S68>/Chart1' */
          PubIfDecisionLSM_MDL_lExitStub2(rty_LSM_PilotSPLDist, rty_LSM_PilotSPL);
          break;

         default:
          /* Chart: '<S68>/Chart1' */
          /* case IN_lExitStub3: */
          PubIfDecisionLSM_MDL_lExitStub3(rty_LSM_PilotSPLDist, rty_LSM_PilotSPL);
          break;
        }
      }
    }
  }
}

/* System initialize for referenced model: 'PubIfDecisionLSM_MDL' */
void PubIfDecisionLSM_MDL_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_l = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay3' */
  PubIfDecisionLSM_MDL_DW.UnitDelay3_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE_i = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay6' */
  PubIfDecisionLSM_MDL_DW.UnitDelay6_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay36' */
  PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE_n = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay24' */
  PubIfDecisionLSM_MDL_DW.UnitDelay24_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay13' */
  PubIfDecisionLSM_MDL_DW.UnitDelay13_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay33' */
  PubIfDecisionLSM_MDL_DW.UnitDelay33_DSTATE = 3.75F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay32' */
  PubIfDecisionLSM_MDL_DW.UnitDelay32_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay34' */
  PubIfDecisionLSM_MDL_DW.UnitDelay34_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay14' */
  PubIfDecisionLSM_MDL_DW.UnitDelay14_DSTATE = 3.75F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay15' */
  PubIfDecisionLSM_MDL_DW.UnitDelay15_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay52' */
  PubIfDecisionLSM_MDL_DW.UnitDelay52_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay31' */
  PubIfDecisionLSM_MDL_DW.UnitDelay31_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay49' */
  PubIfDecisionLSM_MDL_DW.UnitDelay49_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay50' */
  PubIfDecisionLSM_MDL_DW.UnitDelay50_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay51' */
  PubIfDecisionLSM_MDL_DW.UnitDelay51_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S50>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_a = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S50>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay54' */
  PubIfDecisionLSM_MDL_DW.UnitDelay54_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay55' */
  PubIfDecisionLSM_MDL_DW.UnitDelay55_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay56' */
  PubIfDecisionLSM_MDL_DW.UnitDelay56_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay70' */
  PubIfDecisionLSM_MDL_DW.UnitDelay70_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay69' */
  PubIfDecisionLSM_MDL_DW.UnitDelay69_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay67' */
  PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay66' */
  PubIfDecisionLSM_MDL_DW.UnitDelay66_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S32>/Unit Delay67' */
  PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S33>/Unit Delay67' */
  PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE_lc = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[0] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[0] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[0] = 5.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[1] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[1] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[1] = 5.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[2] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[2] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[2] = 5.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[2] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[2] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[3] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[3] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[3] = 5.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[3] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[3] = 0.0;

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_j = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay23' */
  PubIfDecisionLSM_MDL_DW.UnitDelay23_DSTATE[0] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay38' */
  PubIfDecisionLSM_MDL_DW.UnitDelay38_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay22' */
  PubIfDecisionLSM_MDL_DW.UnitDelay22_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay21' */
  PubIfDecisionLSM_MDL_DW.UnitDelay21_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay20' */
  PubIfDecisionLSM_MDL_DW.UnitDelay20_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay19' */
  PubIfDecisionLSM_MDL_DW.UnitDelay19_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay18' */
  PubIfDecisionLSM_MDL_DW.UnitDelay18_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay17' */
  PubIfDecisionLSM_MDL_DW.UnitDelay17_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay63' */
  PubIfDecisionLSM_MDL_DW.UnitDelay63_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay62' */
  PubIfDecisionLSM_MDL_DW.UnitDelay62_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay23' */
  PubIfDecisionLSM_MDL_DW.UnitDelay23_DSTATE[1] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay38' */
  PubIfDecisionLSM_MDL_DW.UnitDelay38_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay22' */
  PubIfDecisionLSM_MDL_DW.UnitDelay22_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay21' */
  PubIfDecisionLSM_MDL_DW.UnitDelay21_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay20' */
  PubIfDecisionLSM_MDL_DW.UnitDelay20_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay19' */
  PubIfDecisionLSM_MDL_DW.UnitDelay19_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay18' */
  PubIfDecisionLSM_MDL_DW.UnitDelay18_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay17' */
  PubIfDecisionLSM_MDL_DW.UnitDelay17_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay63' */
  PubIfDecisionLSM_MDL_DW.UnitDelay63_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay62' */
  PubIfDecisionLSM_MDL_DW.UnitDelay62_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay26' */
  PubIfDecisionLSM_MDL_DW.UnitDelay26_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay25' */
  PubIfDecisionLSM_MDL_DW.UnitDelay25_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S54>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S54>/Unit Delay36' */
  PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE_nv = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay39' */
  PubIfDecisionLSM_MDL_DW.UnitDelay39_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S155>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_e = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S156>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j3 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S158>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S157>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_a = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S150>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S151>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_hu = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S161>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j4 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S162>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ea = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S163>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_g = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S164>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_hk = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S165>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_l = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S166>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ll = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S152>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_i = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S159>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_p = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S160>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S153>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_gq = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S154>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_lw = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay40' */
  PubIfDecisionLSM_MDL_DW.UnitDelay40_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay41' */
  PubIfDecisionLSM_MDL_DW.UnitDelay41_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay27' */
  PubIfDecisionLSM_MDL_DW.UnitDelay27_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S49>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_as = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S49>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay11' */
  PubIfDecisionLSM_MDL_DW.UnitDelay11_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay6' */
  PubIfDecisionLSM_MDL_DW.UnitDelay6_DSTATE_p = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_l = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay10' */
  PubIfDecisionLSM_MDL_DW.UnitDelay10_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay12' */
  PubIfDecisionLSM_MDL_DW.UnitDelay12_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay49' */
  PubIfDecisionLSM_MDL_DW.UnitDelay49_DSTATE_e = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay42' */
  PubIfDecisionLSM_MDL_DW.UnitDelay42_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay43' */
  PubIfDecisionLSM_MDL_DW.UnitDelay43_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay48' */
  PubIfDecisionLSM_MDL_DW.UnitDelay48_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay47' */
  PubIfDecisionLSM_MDL_DW.UnitDelay47_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay46' */
  PubIfDecisionLSM_MDL_DW.UnitDelay46_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay45' */
  PubIfDecisionLSM_MDL_DW.UnitDelay45_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay44' */
  PubIfDecisionLSM_MDL_DW.UnitDelay44_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S47>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_c = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S65>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S65>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_g = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S47>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_p = 0.0F;

  /* InitializeConditions for UnitDelay: '<S47>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay16' */
  PubIfDecisionLSM_MDL_DW.UnitDelay16_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay30' */
  PubIfDecisionLSM_MDL_DW.UnitDelay30_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay65' */
  PubIfDecisionLSM_MDL_DW.UnitDelay65_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay64' */
  PubIfDecisionLSM_MDL_DW.UnitDelay64_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S2>/Output' */
  PubIfDecisionLSM_MDL_DW.Output_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_g = false;

  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_k = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay36' */
  PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE = 8.0F;

  /* InitializeConditions for UnitDelay: '<S70>/Unit Delay3' */
  PubIfDecisionLSM_MDL_DW.UnitDelay3_DSTATE_j = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S70>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S70>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ku = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S70>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_kn = ((uint8_T)0U);

  /* SystemInitialize for Chart: '<S68>/Chart1' */
  PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_CruiseValid =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_CruiseValid2 =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_EntryStub1 =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_active_c20_PubIfDecisionLSM_MDL = 0U;
  PubIfDecisionLSM_MDL_DW.is_c20_PubIfDecisionLSM_MDL =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S47>/TJA_Line_Select' */
  PubIfDecisionLSM_MDL_DW.is_active_c30_PubIfDecisionLSM_MDL = 0U;
  PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S68>/Chart' */
  PubIfDecisionLSM_MDL_DW.is_active_c18_PubIfDecisionLSM_MDL = 0U;
  PubIfDecisionLSM_MDL_DW.is_c18_PubIfDecisionLSM_MDL =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
}

/* System reset for referenced model: 'PubIfDecisionLSM_MDL' */
void PubIfDecisionLSM_MDL_Reset(void)
{
  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_l = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay3' */
  PubIfDecisionLSM_MDL_DW.UnitDelay3_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE_i = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay6' */
  PubIfDecisionLSM_MDL_DW.UnitDelay6_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay36' */
  PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE_n = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay24' */
  PubIfDecisionLSM_MDL_DW.UnitDelay24_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay13' */
  PubIfDecisionLSM_MDL_DW.UnitDelay13_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay33' */
  PubIfDecisionLSM_MDL_DW.UnitDelay33_DSTATE = 3.75F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay32' */
  PubIfDecisionLSM_MDL_DW.UnitDelay32_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay34' */
  PubIfDecisionLSM_MDL_DW.UnitDelay34_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay14' */
  PubIfDecisionLSM_MDL_DW.UnitDelay14_DSTATE = 3.75F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay15' */
  PubIfDecisionLSM_MDL_DW.UnitDelay15_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay52' */
  PubIfDecisionLSM_MDL_DW.UnitDelay52_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay31' */
  PubIfDecisionLSM_MDL_DW.UnitDelay31_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay49' */
  PubIfDecisionLSM_MDL_DW.UnitDelay49_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay50' */
  PubIfDecisionLSM_MDL_DW.UnitDelay50_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay51' */
  PubIfDecisionLSM_MDL_DW.UnitDelay51_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S50>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_a = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S50>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay54' */
  PubIfDecisionLSM_MDL_DW.UnitDelay54_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay55' */
  PubIfDecisionLSM_MDL_DW.UnitDelay55_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay56' */
  PubIfDecisionLSM_MDL_DW.UnitDelay56_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay70' */
  PubIfDecisionLSM_MDL_DW.UnitDelay70_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay69' */
  PubIfDecisionLSM_MDL_DW.UnitDelay69_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay67' */
  PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay66' */
  PubIfDecisionLSM_MDL_DW.UnitDelay66_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S32>/Unit Delay67' */
  PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S33>/Unit Delay67' */
  PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE_lc = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[0] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[0] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[0] = 5.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[1] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[1] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[1] = 5.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[1] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[2] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[2] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[2] = 5.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[2] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[2] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[2] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[3] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[3] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[3] = 5.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[3] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[3] = 0.0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[3] = 0.0;

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_j = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay23' */
  PubIfDecisionLSM_MDL_DW.UnitDelay23_DSTATE[0] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay38' */
  PubIfDecisionLSM_MDL_DW.UnitDelay38_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay22' */
  PubIfDecisionLSM_MDL_DW.UnitDelay22_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay21' */
  PubIfDecisionLSM_MDL_DW.UnitDelay21_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay20' */
  PubIfDecisionLSM_MDL_DW.UnitDelay20_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay19' */
  PubIfDecisionLSM_MDL_DW.UnitDelay19_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay18' */
  PubIfDecisionLSM_MDL_DW.UnitDelay18_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay17' */
  PubIfDecisionLSM_MDL_DW.UnitDelay17_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay63' */
  PubIfDecisionLSM_MDL_DW.UnitDelay63_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay62' */
  PubIfDecisionLSM_MDL_DW.UnitDelay62_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay23' */
  PubIfDecisionLSM_MDL_DW.UnitDelay23_DSTATE[1] = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay38' */
  PubIfDecisionLSM_MDL_DW.UnitDelay38_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay22' */
  PubIfDecisionLSM_MDL_DW.UnitDelay22_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay21' */
  PubIfDecisionLSM_MDL_DW.UnitDelay21_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay20' */
  PubIfDecisionLSM_MDL_DW.UnitDelay20_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay19' */
  PubIfDecisionLSM_MDL_DW.UnitDelay19_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay18' */
  PubIfDecisionLSM_MDL_DW.UnitDelay18_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay17' */
  PubIfDecisionLSM_MDL_DW.UnitDelay17_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay63' */
  PubIfDecisionLSM_MDL_DW.UnitDelay63_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay62' */
  PubIfDecisionLSM_MDL_DW.UnitDelay62_DSTATE[1] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay26' */
  PubIfDecisionLSM_MDL_DW.UnitDelay26_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay25' */
  PubIfDecisionLSM_MDL_DW.UnitDelay25_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S54>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S54>/Unit Delay36' */
  PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE_nv = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay39' */
  PubIfDecisionLSM_MDL_DW.UnitDelay39_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S155>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_e = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S156>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j3 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S158>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S157>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_a = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S150>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S151>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_hu = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S161>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j4 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S162>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ea = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S163>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_g = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S164>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_hk = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S165>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_l = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S166>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ll = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S152>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_i = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S159>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_p = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S160>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_f = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S153>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_gq = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S154>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_lw = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay40' */
  PubIfDecisionLSM_MDL_DW.UnitDelay40_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay41' */
  PubIfDecisionLSM_MDL_DW.UnitDelay41_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay27' */
  PubIfDecisionLSM_MDL_DW.UnitDelay27_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S49>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_as = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S49>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay11' */
  PubIfDecisionLSM_MDL_DW.UnitDelay11_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay6' */
  PubIfDecisionLSM_MDL_DW.UnitDelay6_DSTATE_p = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_l = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay10' */
  PubIfDecisionLSM_MDL_DW.UnitDelay10_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay12' */
  PubIfDecisionLSM_MDL_DW.UnitDelay12_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S31>/Unit Delay49' */
  PubIfDecisionLSM_MDL_DW.UnitDelay49_DSTATE_e = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay42' */
  PubIfDecisionLSM_MDL_DW.UnitDelay42_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay43' */
  PubIfDecisionLSM_MDL_DW.UnitDelay43_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay48' */
  PubIfDecisionLSM_MDL_DW.UnitDelay48_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay47' */
  PubIfDecisionLSM_MDL_DW.UnitDelay47_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay46' */
  PubIfDecisionLSM_MDL_DW.UnitDelay46_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay45' */
  PubIfDecisionLSM_MDL_DW.UnitDelay45_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay44' */
  PubIfDecisionLSM_MDL_DW.UnitDelay44_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S47>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_c = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S65>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S65>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_g = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S47>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_p = 0.0F;

  /* InitializeConditions for UnitDelay: '<S47>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay16' */
  PubIfDecisionLSM_MDL_DW.UnitDelay16_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay30' */
  PubIfDecisionLSM_MDL_DW.UnitDelay30_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay65' */
  PubIfDecisionLSM_MDL_DW.UnitDelay65_DSTATE = 0;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay64' */
  PubIfDecisionLSM_MDL_DW.UnitDelay64_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S2>/Output' */
  PubIfDecisionLSM_MDL_DW.Output_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_g = false;

  /* InitializeConditions for UnitDelay: '<S52>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_k = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay36' */
  PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE = 8.0F;

  /* InitializeConditions for UnitDelay: '<S70>/Unit Delay3' */
  PubIfDecisionLSM_MDL_DW.UnitDelay3_DSTATE_j = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S70>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S70>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ku = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S70>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_kn = ((uint8_T)0U);

  /* SystemReset for Chart: '<S68>/Chart1' */
  PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_CruiseValid =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_init_l = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_CruiseValid2 =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_EntryStub1 =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
  PubIfDecisionLSM_MDL_DW.is_active_c20_PubIfDecisionLSM_MDL = 0U;
  PubIfDecisionLSM_MDL_DW.is_c20_PubIfDecisionLSM_MDL =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;

  /* SystemReset for Chart: '<S47>/TJA_Line_Select' */
  PubIfDecisionLSM_MDL_DW.is_active_c30_PubIfDecisionLSM_MDL = 0U;
  PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;

  /* SystemReset for Chart: '<S68>/Chart' */
  PubIfDecisionLSM_MDL_DW.is_active_c18_PubIfDecisionLSM_MDL = 0U;
  PubIfDecisionLSM_MDL_DW.is_c18_PubIfDecisionLSM_MDL =
    PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
}

/* Start for referenced model: 'PubIfDecisionLSM_MDL' */
void PubIfDecisionLSM_MDL_Start(void)
{
  /* ConstCode for SignalConversion: '<S3>/Signal Conversion28' */
  LSM_SingleLineLost_b = false;

  /* ConstCode for Constant: '<S1>/Constant' */
  PubIfDecisionLSM_MDL_B.LSM_SubModel_VERSION = 11240544U;

  /* ConstCode for Constant: '<S1>/Constant1' */
  PubIfDecisionLSM_MDL_B.LSM_SubModel_Number = 301U;
}

/* Outputs for referenced model: 'PubIfDecisionLSM_MDL' */
void PubIfDecisionLSM_MDL(const EQ4_LH_BUS *rtu_EQ4_LH, const EQ4_LA_BUS
  *rtu_EQ4_LA, const EQ4_LRE_BUS *rtu_EQ4_LRE, const TOS_P0_TARGET_LINE_BUS
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
  uint16_T *rty_LSM_PilotSPLDist, uint8_T *rty_LSM_PilotSPL)
{
  int32_T ipiv[4];
  int32_T i;
  int32_T i_0;
  int32_T info;
  real32_T A[16];
  real32_T MatrixA[16];
  real32_T TmpX[4];
  real32_T t_dx[4];
  real32_T t_dx_0[4];
  real32_T t_dx_1[4];
  real32_T t_dy[4];
  real32_T x[4];
  real32_T xi[4];
  real32_T K40;
  real32_T Line_std_idx_1;
  real32_T RefA0_3;
  real32_T m2;
  real32_T t;
  real32_T t0;
  real32_T t1;
  real32_T t2;
  real32_T tFilter;
  real32_T t_Dist;
  real32_T t_Psi;
  real32_T t_dy_0;
  real32_T x_0;
  real32_T xi_0;
  real32_T y2;
  real32_T y3;
  uint32_T qY;
  int8_T LockID;
  int8_T MoveID;
  uint8_T LConf;
  uint8_T RConf;
  uint8_T RRConf;
  boolean_T DoubleLineLost_b;
  boolean_T RightOffset_b;
  boolean_T Update;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T isodd;

  /* UnitDelay: '<S8>/Unit Delay68' */
  PubIfDecisionLSM_MDL_B.UnitDelay68 =
    PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_k;

  /* RelationalOperator: '<S8>/Relational Operator1' */
  PubIfDecisionLSM_MDL_B.RelationalOperator1 =
    (rtu_EQ4_LA->EQ4_LA_HDR.LA_Sync_ID != PubIfDecisionLSM_MDL_B.UnitDelay68);

  /* UnitDelay: '<S9>/Unit Delay68' */
  PubIfDecisionLSM_MDL_B.UnitDelay68_e =
    PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_l;

  /* RelationalOperator: '<S9>/Relational Operator1' */
  PubIfDecisionLSM_MDL_B.RelationalOperator1_l =
    (rtu_EQ4_LH->EQ4_LH_HDR.LH_Sync_ID != PubIfDecisionLSM_MDL_B.UnitDelay68_e);

  /* MATLAB Function: '<S4>/MATLAB Function' */
  LSM_VisLineUpdate = ((rtu_EQ4_LA->EQ4_LA_HDR.LA_Sync_ID ==
                        rtu_EQ4_LH->EQ4_LH_HDR.LH_Sync_ID) &&
                       (PubIfDecisionLSM_MDL_B.RelationalOperator1 ||
                        PubIfDecisionLSM_MDL_B.RelationalOperator1_l));

  /* MATLAB Function: '<S4>/LHLine1' */
  PubIfDecisionLSM_MDL_LHLine1(&rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_First_C0,
    &rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_First_C1, &rtu_EQ4_LH->EQ4_LH_ELEM[0].
    LH_Line_First_C2, &rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_First_C3,
    &rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_First_VR_Start, &rtu_EQ4_LH->EQ4_LH_ELEM[0].
    LH_First_VR_End, &rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_Second_C0,
    &rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_Second_C1, &rtu_EQ4_LH->EQ4_LH_ELEM[0].
    LH_Line_Second_C2, &rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_Second_C3,
    &rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Second_VR_Start, &rtu_EQ4_LH->EQ4_LH_ELEM[0].
    LH_Second_VR_End, &PubIfDecisionLSM_MDL_B.sf_LHLine1);

  /* FunctionCaller: '<S4>/Function Caller4' */
  PubIfDecisionLSM_MDL_f(PubIfDecisionLSM_MDL_B.sf_LHLine1.LHC0,
    PubIfDecisionLSM_MDL_B.sf_LHLine1.LHC1,
    PubIfDecisionLSM_MDL_B.sf_LHLine1.LHC2,
    PubIfDecisionLSM_MDL_B.sf_LHLine1.LHC3,
    PubIfDecisionLSM_MDL_B.sf_LHLine1.LHDxMin,
    PubIfDecisionLSM_MDL_B.sf_LHLine1.LHDxMax,
    &PubIfDecisionLSM_MDL_B.FunctionCaller4_o1,
    &PubIfDecisionLSM_MDL_B.FunctionCaller4_o2,
    &PubIfDecisionLSM_MDL_B.FunctionCaller4_o3,
    &PubIfDecisionLSM_MDL_B.FunctionCaller4_o4, &PubIfDecisionLSM_MDL_B.Rmin,
    &PubIfDecisionLSM_MDL_B.Rmax);

  /* MATLAB Function: '<S4>/LHLine2' */
  PubIfDecisionLSM_MDL_LHLine1(&rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_First_C0,
    &rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_First_C1, &rtu_EQ4_LH->EQ4_LH_ELEM[1].
    LH_Line_First_C2, &rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_First_C3,
    &rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_First_VR_Start, &rtu_EQ4_LH->EQ4_LH_ELEM[1].
    LH_First_VR_End, &rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_Second_C0,
    &rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_Second_C1, &rtu_EQ4_LH->EQ4_LH_ELEM[1].
    LH_Line_Second_C2, &rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_Second_C3,
    &rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Second_VR_Start, &rtu_EQ4_LH->EQ4_LH_ELEM[1].
    LH_Second_VR_End, &PubIfDecisionLSM_MDL_B.sf_LHLine2);

  /* FunctionCaller: '<S4>/Function Caller5' */
  PubIfDecisionLSM_MDL_f(PubIfDecisionLSM_MDL_B.sf_LHLine2.LHC0,
    PubIfDecisionLSM_MDL_B.sf_LHLine2.LHC1,
    PubIfDecisionLSM_MDL_B.sf_LHLine2.LHC2,
    PubIfDecisionLSM_MDL_B.sf_LHLine2.LHC3,
    PubIfDecisionLSM_MDL_B.sf_LHLine2.LHDxMin,
    PubIfDecisionLSM_MDL_B.sf_LHLine2.LHDxMax,
    &PubIfDecisionLSM_MDL_B.FunctionCaller5_o1,
    &PubIfDecisionLSM_MDL_B.FunctionCaller5_o2,
    &PubIfDecisionLSM_MDL_B.FunctionCaller5_o3,
    &PubIfDecisionLSM_MDL_B.FunctionCaller5_o4, &PubIfDecisionLSM_MDL_B.Rmin_k,
    &PubIfDecisionLSM_MDL_B.Rmax_e);

  /* MATLAB Function: '<S4>/LHLine' */
  PubIfDecisionLSM_MDL_B.LH1Conf = 0U;
  PubIfDecisionLSM_MDL_B.LH1C0 = 0.0F;
  PubIfDecisionLSM_MDL_B.LH1C1 = 0.0F;
  PubIfDecisionLSM_MDL_B.LH1C2 = 0.0F;
  PubIfDecisionLSM_MDL_B.LH1C3 = 0.0F;
  PubIfDecisionLSM_MDL_B.LH1DxMin = 0.0F;
  PubIfDecisionLSM_MDL_B.LH1DxMax = 0.0F;
  PubIfDecisionLSM_MDL_B.LH1Type = 0U;
  PubIfDecisionLSM_MDL_B.LH1DLM = 0U;
  PubIfDecisionLSM_MDL_B.LH1Width = 0.0F;
  PubIfDecisionLSM_MDL_B.LH1Reliable = 0.0F;
  PubIfDecisionLSM_MDL_B.LeftLaneChange = 0U;
  PubIfDecisionLSM_MDL_B.LH1Color = 0U;
  PubIfDecisionLSM_MDL_B.LH1DECEL = 0U;
  PubIfDecisionLSM_MDL_B.LH2Conf = 0U;
  PubIfDecisionLSM_MDL_B.LH2C0 = 0.0F;
  PubIfDecisionLSM_MDL_B.LH2C1 = 0.0F;
  PubIfDecisionLSM_MDL_B.LH2C2 = 0.0F;
  PubIfDecisionLSM_MDL_B.LH2C3 = 0.0F;
  PubIfDecisionLSM_MDL_B.LH2DxMin = 0.0F;
  PubIfDecisionLSM_MDL_B.LH2DxMax = 0.0F;
  PubIfDecisionLSM_MDL_B.LH2Type = 0U;
  PubIfDecisionLSM_MDL_B.LH2DLM = 0U;
  PubIfDecisionLSM_MDL_B.LH2Width = 0.0F;
  PubIfDecisionLSM_MDL_B.LH2Reliable = 0.0F;
  PubIfDecisionLSM_MDL_B.RightLaneChange = 0U;
  PubIfDecisionLSM_MDL_B.LH2Color = 0U;
  PubIfDecisionLSM_MDL_B.LH2DECEL = 0U;
  if (rtu_EQ4_LH->EQ4_LH_HDR.LH_Lanes_Count >= 1) {
    if (rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Side == 1) {
      PubIfDecisionLSM_MDL_B.LH1Conf = rtu_EQ4_LH->EQ4_LH_ELEM[0].
        LH_Availability_State;
      PubIfDecisionLSM_MDL_B.LH1C0 = PubIfDecisionLSM_MDL_B.FunctionCaller4_o1;
      PubIfDecisionLSM_MDL_B.LH1C1 = PubIfDecisionLSM_MDL_B.FunctionCaller4_o2;
      PubIfDecisionLSM_MDL_B.LH1C2 = PubIfDecisionLSM_MDL_B.FunctionCaller4_o3;
      PubIfDecisionLSM_MDL_B.LH1C3 = PubIfDecisionLSM_MDL_B.FunctionCaller4_o4;
      PubIfDecisionLSM_MDL_B.LH1DxMin = PubIfDecisionLSM_MDL_B.Rmin;
      PubIfDecisionLSM_MDL_B.LH1DxMax = PubIfDecisionLSM_MDL_B.Rmax;
      PubIfDecisionLSM_MDL_B.LH1Type = rtu_EQ4_LH->EQ4_LH_ELEM[0].
        LH_Lanemark_Type;
      PubIfDecisionLSM_MDL_B.LH1DLM = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_DLM_Type;
      PubIfDecisionLSM_MDL_B.LH1Width = rtu_EQ4_LH->EQ4_LH_ELEM[0].
        LH_Marker_Width;
      PubIfDecisionLSM_MDL_B.LH1Reliable = rtu_EQ4_LH->EQ4_LH_ELEM[0].
        LH_Confidence;
      PubIfDecisionLSM_MDL_B.LeftLaneChange = rtu_EQ4_LH->EQ4_LH_ELEM[0].
        LH_Crossing;
      PubIfDecisionLSM_MDL_B.LH1Color = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Color;
      PubIfDecisionLSM_MDL_B.LH1DECEL = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_DECEL_Type;
    } else {
      if (rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Side == 2) {
        PubIfDecisionLSM_MDL_B.LH2Conf = rtu_EQ4_LH->EQ4_LH_ELEM[0].
          LH_Availability_State;
        PubIfDecisionLSM_MDL_B.LH2C0 = PubIfDecisionLSM_MDL_B.FunctionCaller4_o1;
        PubIfDecisionLSM_MDL_B.LH2C1 = PubIfDecisionLSM_MDL_B.FunctionCaller4_o2;
        PubIfDecisionLSM_MDL_B.LH2C2 = PubIfDecisionLSM_MDL_B.FunctionCaller4_o3;
        PubIfDecisionLSM_MDL_B.LH2C3 = PubIfDecisionLSM_MDL_B.FunctionCaller4_o4;
        PubIfDecisionLSM_MDL_B.LH2DxMin = PubIfDecisionLSM_MDL_B.Rmin;
        PubIfDecisionLSM_MDL_B.LH2DxMax = PubIfDecisionLSM_MDL_B.Rmax;
        PubIfDecisionLSM_MDL_B.LH2Type = rtu_EQ4_LH->EQ4_LH_ELEM[0].
          LH_Lanemark_Type;
        PubIfDecisionLSM_MDL_B.LH2DLM = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_DLM_Type;
        PubIfDecisionLSM_MDL_B.LH2Width = rtu_EQ4_LH->EQ4_LH_ELEM[0].
          LH_Marker_Width;
        PubIfDecisionLSM_MDL_B.LH2Reliable = rtu_EQ4_LH->EQ4_LH_ELEM[0].
          LH_Confidence;
        PubIfDecisionLSM_MDL_B.RightLaneChange = rtu_EQ4_LH->EQ4_LH_ELEM[0].
          LH_Crossing;
        PubIfDecisionLSM_MDL_B.LH2Color = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Color;
        PubIfDecisionLSM_MDL_B.LH2DECEL = rtu_EQ4_LH->EQ4_LH_ELEM[0].
          LH_DECEL_Type;
      }
    }

    if (rtu_EQ4_LH->EQ4_LH_HDR.LH_Lanes_Count >= 2) {
      if (rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Side == 1) {
        PubIfDecisionLSM_MDL_B.LH1Conf = rtu_EQ4_LH->EQ4_LH_ELEM[1].
          LH_Availability_State;
        PubIfDecisionLSM_MDL_B.LH1C0 = PubIfDecisionLSM_MDL_B.FunctionCaller5_o1;
        PubIfDecisionLSM_MDL_B.LH1C1 = PubIfDecisionLSM_MDL_B.FunctionCaller5_o2;
        PubIfDecisionLSM_MDL_B.LH1C2 = PubIfDecisionLSM_MDL_B.FunctionCaller5_o3;
        PubIfDecisionLSM_MDL_B.LH1C3 = PubIfDecisionLSM_MDL_B.FunctionCaller5_o4;
        PubIfDecisionLSM_MDL_B.LH1DxMin = PubIfDecisionLSM_MDL_B.Rmin_k;
        PubIfDecisionLSM_MDL_B.LH1DxMax = PubIfDecisionLSM_MDL_B.Rmax_e;
        PubIfDecisionLSM_MDL_B.LH1Type = rtu_EQ4_LH->EQ4_LH_ELEM[1].
          LH_Lanemark_Type;
        PubIfDecisionLSM_MDL_B.LH1DLM = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_DLM_Type;
        PubIfDecisionLSM_MDL_B.LH1Width = rtu_EQ4_LH->EQ4_LH_ELEM[1].
          LH_Marker_Width;
        PubIfDecisionLSM_MDL_B.LH1Reliable = rtu_EQ4_LH->EQ4_LH_ELEM[1].
          LH_Confidence;
        PubIfDecisionLSM_MDL_B.LeftLaneChange = rtu_EQ4_LH->EQ4_LH_ELEM[1].
          LH_Crossing;
        PubIfDecisionLSM_MDL_B.LH1Color = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Color;
        PubIfDecisionLSM_MDL_B.LH1DECEL = rtu_EQ4_LH->EQ4_LH_ELEM[1].
          LH_DECEL_Type;
      } else {
        if (rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Side == 2) {
          PubIfDecisionLSM_MDL_B.LH2Conf = rtu_EQ4_LH->EQ4_LH_ELEM[1].
            LH_Availability_State;
          PubIfDecisionLSM_MDL_B.LH2C0 =
            PubIfDecisionLSM_MDL_B.FunctionCaller5_o1;
          PubIfDecisionLSM_MDL_B.LH2C1 =
            PubIfDecisionLSM_MDL_B.FunctionCaller5_o2;
          PubIfDecisionLSM_MDL_B.LH2C2 =
            PubIfDecisionLSM_MDL_B.FunctionCaller5_o3;
          PubIfDecisionLSM_MDL_B.LH2C3 =
            PubIfDecisionLSM_MDL_B.FunctionCaller5_o4;
          PubIfDecisionLSM_MDL_B.LH2DxMin = PubIfDecisionLSM_MDL_B.Rmin_k;
          PubIfDecisionLSM_MDL_B.LH2DxMax = PubIfDecisionLSM_MDL_B.Rmax_e;
          PubIfDecisionLSM_MDL_B.LH2Type = rtu_EQ4_LH->EQ4_LH_ELEM[1].
            LH_Lanemark_Type;
          PubIfDecisionLSM_MDL_B.LH2DLM = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_DLM_Type;
          PubIfDecisionLSM_MDL_B.LH2Width = rtu_EQ4_LH->EQ4_LH_ELEM[1].
            LH_Marker_Width;
          PubIfDecisionLSM_MDL_B.LH2Reliable = rtu_EQ4_LH->EQ4_LH_ELEM[1].
            LH_Confidence;
          PubIfDecisionLSM_MDL_B.RightLaneChange = rtu_EQ4_LH->EQ4_LH_ELEM[1].
            LH_Crossing;
          PubIfDecisionLSM_MDL_B.LH2Color = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Color;
          PubIfDecisionLSM_MDL_B.LH2DECEL = rtu_EQ4_LH->EQ4_LH_ELEM[1].
            LH_DECEL_Type;
        }
      }
    }
  }

  /* End of MATLAB Function: '<S4>/LHLine' */

  /* FunctionCaller: '<S4>/Function Caller' */
  PubIfDecisionLSM_MDL_f(rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_C0,
    rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_C1, rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_C2,
    rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_C3, rtu_EQ4_LA->EQ4_LA_ELEM[0].
    LA_View_Range_Start, rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_View_Range_End,
    &PubIfDecisionLSM_MDL_B.A0, &PubIfDecisionLSM_MDL_B.A1,
    &PubIfDecisionLSM_MDL_B.A2, &PubIfDecisionLSM_MDL_B.A3,
    &PubIfDecisionLSM_MDL_B.Rmin_j, &PubIfDecisionLSM_MDL_B.Rmax_o);

  /* FunctionCaller: '<S4>/Function Caller1' */
  PubIfDecisionLSM_MDL_f(rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_C0,
    rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_C1, rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_C2,
    rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_C3, rtu_EQ4_LA->EQ4_LA_ELEM[1].
    LA_View_Range_Start, rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_View_Range_End,
    &PubIfDecisionLSM_MDL_B.FunctionCaller1_o1,
    &PubIfDecisionLSM_MDL_B.FunctionCaller1_o2,
    &PubIfDecisionLSM_MDL_B.FunctionCaller1_o3,
    &PubIfDecisionLSM_MDL_B.FunctionCaller1_o4, &PubIfDecisionLSM_MDL_B.Rmin_f,
    &PubIfDecisionLSM_MDL_B.Rmax_p);

  /* FunctionCaller: '<S4>/Function Caller2' */
  PubIfDecisionLSM_MDL_f(rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_C0,
    rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_C1, rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_C2,
    rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_C3, rtu_EQ4_LA->EQ4_LA_ELEM[2].
    LA_View_Range_Start, rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_View_Range_End,
    &PubIfDecisionLSM_MDL_B.FunctionCaller2_o1,
    &PubIfDecisionLSM_MDL_B.FunctionCaller2_o2,
    &PubIfDecisionLSM_MDL_B.FunctionCaller2_o3,
    &PubIfDecisionLSM_MDL_B.FunctionCaller2_o4, &PubIfDecisionLSM_MDL_B.Rmin_c,
    &PubIfDecisionLSM_MDL_B.Rmax_i);

  /* FunctionCaller: '<S4>/Function Caller3' */
  PubIfDecisionLSM_MDL_f(rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_C0,
    rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_C1, rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_C2,
    rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_C3, rtu_EQ4_LA->EQ4_LA_ELEM[3].
    LA_View_Range_Start, rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_View_Range_End,
    &PubIfDecisionLSM_MDL_B.FunctionCaller3_o1,
    &PubIfDecisionLSM_MDL_B.FunctionCaller3_o2,
    &PubIfDecisionLSM_MDL_B.FunctionCaller3_o3,
    &PubIfDecisionLSM_MDL_B.FunctionCaller3_o4, &PubIfDecisionLSM_MDL_B.Rmin_d,
    &PubIfDecisionLSM_MDL_B.Rmax_k);

  /* MATLAB Function: '<S4>/LALine' */
  PubIfDecisionLSM_MDL_B.L1Conf = 0U;
  PubIfDecisionLSM_MDL_B.L1C0 = 0.0F;
  PubIfDecisionLSM_MDL_B.L1C1 = 0.0F;
  PubIfDecisionLSM_MDL_B.L1C2 = 0.0F;
  PubIfDecisionLSM_MDL_B.L1C3 = 0.0F;
  PubIfDecisionLSM_MDL_B.L1DxMin = 0.0F;
  PubIfDecisionLSM_MDL_B.L1DxMax = 0.0F;
  PubIfDecisionLSM_MDL_B.L1Type = 0U;
  PubIfDecisionLSM_MDL_B.L1DLM = 0U;
  PubIfDecisionLSM_MDL_B.L1Width = 0.0F;
  PubIfDecisionLSM_MDL_B.L1Reliable = 0.0F;
  PubIfDecisionLSM_MDL_B.L2Conf = 0U;
  PubIfDecisionLSM_MDL_B.L2C0 = 0.0F;
  PubIfDecisionLSM_MDL_B.L2C1 = 0.0F;
  PubIfDecisionLSM_MDL_B.L2C2 = 0.0F;
  PubIfDecisionLSM_MDL_B.L2C3 = 0.0F;
  PubIfDecisionLSM_MDL_B.L2DxMin = 0.0F;
  PubIfDecisionLSM_MDL_B.L2DxMax = 0.0F;
  PubIfDecisionLSM_MDL_B.L2Type = 0U;
  PubIfDecisionLSM_MDL_B.L2DLM = 0U;
  PubIfDecisionLSM_MDL_B.L2Width = 0.0F;
  PubIfDecisionLSM_MDL_B.L2Reliable = 0.0F;
  PubIfDecisionLSM_MDL_B.L3Conf = 0U;
  PubIfDecisionLSM_MDL_B.L3C0 = 0.0F;
  PubIfDecisionLSM_MDL_B.L3C1 = 0.0F;
  PubIfDecisionLSM_MDL_B.L3C2 = 0.0F;
  PubIfDecisionLSM_MDL_B.L3C3 = 0.0F;
  PubIfDecisionLSM_MDL_B.L3DxMin = 0.0F;
  PubIfDecisionLSM_MDL_B.L3DxMax = 0.0F;
  PubIfDecisionLSM_MDL_B.L3Type = 0U;
  PubIfDecisionLSM_MDL_B.L3DLM = 0U;
  PubIfDecisionLSM_MDL_B.L3Width = 0.0F;
  PubIfDecisionLSM_MDL_B.L3Reliable = 0.0F;
  PubIfDecisionLSM_MDL_B.L4Conf = 0U;
  PubIfDecisionLSM_MDL_B.L4C0 = 0.0F;
  PubIfDecisionLSM_MDL_B.L4C1 = 0.0F;
  PubIfDecisionLSM_MDL_B.L4C2 = 0.0F;
  PubIfDecisionLSM_MDL_B.L4C3 = 0.0F;
  PubIfDecisionLSM_MDL_B.L4DxMin = 0.0F;
  PubIfDecisionLSM_MDL_B.L4DxMax = 0.0F;
  PubIfDecisionLSM_MDL_B.L4Type = 0U;
  PubIfDecisionLSM_MDL_B.L4DLM = 0U;
  PubIfDecisionLSM_MDL_B.L4Width = 0.0F;
  PubIfDecisionLSM_MDL_B.L4Reliable = 0.0F;
  if (rtu_EQ4_LA->EQ4_LA_HDR.LA_Adjacent_Count >= 1) {
    if (rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_Side == 1) {
      PubIfDecisionLSM_MDL_B.L1Conf = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Availability_State;
      PubIfDecisionLSM_MDL_B.L1C0 = PubIfDecisionLSM_MDL_B.A0;
      PubIfDecisionLSM_MDL_B.L1C1 = PubIfDecisionLSM_MDL_B.A1;
      PubIfDecisionLSM_MDL_B.L1C2 = PubIfDecisionLSM_MDL_B.A2;
      PubIfDecisionLSM_MDL_B.L1C3 = PubIfDecisionLSM_MDL_B.A3;
      PubIfDecisionLSM_MDL_B.L1DxMin = PubIfDecisionLSM_MDL_B.Rmin_j;
      PubIfDecisionLSM_MDL_B.L1DxMax = PubIfDecisionLSM_MDL_B.Rmax_o;
      PubIfDecisionLSM_MDL_B.L1Type = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Lanemark_Type;
      PubIfDecisionLSM_MDL_B.L1DLM = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_DLM_Type;
      PubIfDecisionLSM_MDL_B.L1Width = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Marker_Width;
      PubIfDecisionLSM_MDL_B.L1Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Confidence;
    } else if (rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_Side == 2) {
      PubIfDecisionLSM_MDL_B.L2Conf = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Availability_State;
      PubIfDecisionLSM_MDL_B.L2C0 = PubIfDecisionLSM_MDL_B.A0;
      PubIfDecisionLSM_MDL_B.L2C1 = PubIfDecisionLSM_MDL_B.A1;
      PubIfDecisionLSM_MDL_B.L2C2 = PubIfDecisionLSM_MDL_B.A2;
      PubIfDecisionLSM_MDL_B.L2C3 = PubIfDecisionLSM_MDL_B.A3;
      PubIfDecisionLSM_MDL_B.L2DxMin = PubIfDecisionLSM_MDL_B.Rmin_j;
      PubIfDecisionLSM_MDL_B.L2DxMax = PubIfDecisionLSM_MDL_B.Rmax_o;
      PubIfDecisionLSM_MDL_B.L2Type = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Lanemark_Type;
      PubIfDecisionLSM_MDL_B.L2DLM = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_DLM_Type;
      PubIfDecisionLSM_MDL_B.L2Width = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Marker_Width;
      PubIfDecisionLSM_MDL_B.L2Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Confidence;
    } else if (rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_Side == 3) {
      PubIfDecisionLSM_MDL_B.L3Conf = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Availability_State;
      PubIfDecisionLSM_MDL_B.L3C0 = PubIfDecisionLSM_MDL_B.A0;
      PubIfDecisionLSM_MDL_B.L3C1 = PubIfDecisionLSM_MDL_B.A1;
      PubIfDecisionLSM_MDL_B.L3C2 = PubIfDecisionLSM_MDL_B.A2;
      PubIfDecisionLSM_MDL_B.L3C3 = PubIfDecisionLSM_MDL_B.A3;
      PubIfDecisionLSM_MDL_B.L3DxMin = PubIfDecisionLSM_MDL_B.Rmin_j;
      PubIfDecisionLSM_MDL_B.L3DxMax = PubIfDecisionLSM_MDL_B.Rmax_o;
      PubIfDecisionLSM_MDL_B.L3Type = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Lanemark_Type;
      PubIfDecisionLSM_MDL_B.L3DLM = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_DLM_Type;
      PubIfDecisionLSM_MDL_B.L3Width = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Marker_Width;
      PubIfDecisionLSM_MDL_B.L3Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[0].
        LA_Confidence;
    } else {
      if (rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_Side == 4) {
        PubIfDecisionLSM_MDL_B.L4Conf = rtu_EQ4_LA->EQ4_LA_ELEM[0].
          LA_Availability_State;
        PubIfDecisionLSM_MDL_B.L4C0 = PubIfDecisionLSM_MDL_B.A0;
        PubIfDecisionLSM_MDL_B.L4C1 = PubIfDecisionLSM_MDL_B.A1;
        PubIfDecisionLSM_MDL_B.L4C2 = PubIfDecisionLSM_MDL_B.A2;
        PubIfDecisionLSM_MDL_B.L4C3 = PubIfDecisionLSM_MDL_B.A3;
        PubIfDecisionLSM_MDL_B.L4DxMin = PubIfDecisionLSM_MDL_B.Rmin_j;
        PubIfDecisionLSM_MDL_B.L4DxMax = PubIfDecisionLSM_MDL_B.Rmax_o;
        PubIfDecisionLSM_MDL_B.L4Type = rtu_EQ4_LA->EQ4_LA_ELEM[0].
          LA_Lanemark_Type;
        PubIfDecisionLSM_MDL_B.L4DLM = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_DLM_Type;
        PubIfDecisionLSM_MDL_B.L4Width = rtu_EQ4_LA->EQ4_LA_ELEM[0].
          LA_Marker_Width;
        PubIfDecisionLSM_MDL_B.L4Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[0].
          LA_Confidence;
      }
    }

    if (rtu_EQ4_LA->EQ4_LA_HDR.LA_Adjacent_Count >= 2) {
      if (rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_Side == 1) {
        PubIfDecisionLSM_MDL_B.L1Conf = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Availability_State;
        PubIfDecisionLSM_MDL_B.L1C0 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o1;
        PubIfDecisionLSM_MDL_B.L1C1 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o2;
        PubIfDecisionLSM_MDL_B.L1C2 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o3;
        PubIfDecisionLSM_MDL_B.L1C3 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o4;
        PubIfDecisionLSM_MDL_B.L1DxMin = PubIfDecisionLSM_MDL_B.Rmin_f;
        PubIfDecisionLSM_MDL_B.L1DxMax = PubIfDecisionLSM_MDL_B.Rmax_p;
        PubIfDecisionLSM_MDL_B.L1Type = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Lanemark_Type;
        PubIfDecisionLSM_MDL_B.L1DLM = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_DLM_Type;
        PubIfDecisionLSM_MDL_B.L1Width = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Marker_Width;
        PubIfDecisionLSM_MDL_B.L1Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Confidence;
      } else if (rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_Side == 2) {
        PubIfDecisionLSM_MDL_B.L2Conf = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Availability_State;
        PubIfDecisionLSM_MDL_B.L2C0 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o1;
        PubIfDecisionLSM_MDL_B.L2C1 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o2;
        PubIfDecisionLSM_MDL_B.L2C2 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o3;
        PubIfDecisionLSM_MDL_B.L2C3 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o4;
        PubIfDecisionLSM_MDL_B.L2DxMin = PubIfDecisionLSM_MDL_B.Rmin_f;
        PubIfDecisionLSM_MDL_B.L2DxMax = PubIfDecisionLSM_MDL_B.Rmax_p;
        PubIfDecisionLSM_MDL_B.L2Type = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Lanemark_Type;
        PubIfDecisionLSM_MDL_B.L2DLM = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_DLM_Type;
        PubIfDecisionLSM_MDL_B.L2Width = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Marker_Width;
        PubIfDecisionLSM_MDL_B.L2Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Confidence;
      } else if (rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_Side == 3) {
        PubIfDecisionLSM_MDL_B.L3Conf = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Availability_State;
        PubIfDecisionLSM_MDL_B.L3C0 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o1;
        PubIfDecisionLSM_MDL_B.L3C1 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o2;
        PubIfDecisionLSM_MDL_B.L3C2 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o3;
        PubIfDecisionLSM_MDL_B.L3C3 = PubIfDecisionLSM_MDL_B.FunctionCaller1_o4;
        PubIfDecisionLSM_MDL_B.L3DxMin = PubIfDecisionLSM_MDL_B.Rmin_f;
        PubIfDecisionLSM_MDL_B.L3DxMax = PubIfDecisionLSM_MDL_B.Rmax_p;
        PubIfDecisionLSM_MDL_B.L3Type = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Lanemark_Type;
        PubIfDecisionLSM_MDL_B.L3DLM = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_DLM_Type;
        PubIfDecisionLSM_MDL_B.L3Width = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Marker_Width;
        PubIfDecisionLSM_MDL_B.L3Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[1].
          LA_Confidence;
      } else {
        if (rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_Side == 4) {
          PubIfDecisionLSM_MDL_B.L4Conf = rtu_EQ4_LA->EQ4_LA_ELEM[1].
            LA_Availability_State;
          PubIfDecisionLSM_MDL_B.L4C0 =
            PubIfDecisionLSM_MDL_B.FunctionCaller1_o1;
          PubIfDecisionLSM_MDL_B.L4C1 =
            PubIfDecisionLSM_MDL_B.FunctionCaller1_o2;
          PubIfDecisionLSM_MDL_B.L4C2 =
            PubIfDecisionLSM_MDL_B.FunctionCaller1_o3;
          PubIfDecisionLSM_MDL_B.L4C3 =
            PubIfDecisionLSM_MDL_B.FunctionCaller1_o4;
          PubIfDecisionLSM_MDL_B.L4DxMin = PubIfDecisionLSM_MDL_B.Rmin_f;
          PubIfDecisionLSM_MDL_B.L4DxMax = PubIfDecisionLSM_MDL_B.Rmax_p;
          PubIfDecisionLSM_MDL_B.L4Type = rtu_EQ4_LA->EQ4_LA_ELEM[1].
            LA_Lanemark_Type;
          PubIfDecisionLSM_MDL_B.L4DLM = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_DLM_Type;
          PubIfDecisionLSM_MDL_B.L4Width = rtu_EQ4_LA->EQ4_LA_ELEM[1].
            LA_Marker_Width;
          PubIfDecisionLSM_MDL_B.L4Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[1].
            LA_Confidence;
        }
      }

      if (rtu_EQ4_LA->EQ4_LA_HDR.LA_Adjacent_Count >= 3) {
        if (rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_Side == 1) {
          PubIfDecisionLSM_MDL_B.L1Conf = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Availability_State;
          PubIfDecisionLSM_MDL_B.L1C0 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o1;
          PubIfDecisionLSM_MDL_B.L1C1 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o2;
          PubIfDecisionLSM_MDL_B.L1C2 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o3;
          PubIfDecisionLSM_MDL_B.L1C3 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o4;
          PubIfDecisionLSM_MDL_B.L1DxMin = PubIfDecisionLSM_MDL_B.Rmin_c;
          PubIfDecisionLSM_MDL_B.L1DxMax = PubIfDecisionLSM_MDL_B.Rmax_i;
          PubIfDecisionLSM_MDL_B.L1Type = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Lanemark_Type;
          PubIfDecisionLSM_MDL_B.L1DLM = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_DLM_Type;
          PubIfDecisionLSM_MDL_B.L1Width = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Marker_Width;
          PubIfDecisionLSM_MDL_B.L1Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Confidence;
        } else if (rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_Side == 2) {
          PubIfDecisionLSM_MDL_B.L2Conf = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Availability_State;
          PubIfDecisionLSM_MDL_B.L2C0 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o1;
          PubIfDecisionLSM_MDL_B.L2C1 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o2;
          PubIfDecisionLSM_MDL_B.L2C2 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o3;
          PubIfDecisionLSM_MDL_B.L2C3 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o4;
          PubIfDecisionLSM_MDL_B.L2DxMin = PubIfDecisionLSM_MDL_B.Rmin_c;
          PubIfDecisionLSM_MDL_B.L2DxMax = PubIfDecisionLSM_MDL_B.Rmax_i;
          PubIfDecisionLSM_MDL_B.L2Type = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Lanemark_Type;
          PubIfDecisionLSM_MDL_B.L2DLM = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_DLM_Type;
          PubIfDecisionLSM_MDL_B.L2Width = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Marker_Width;
          PubIfDecisionLSM_MDL_B.L2Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Confidence;
        } else if (rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_Side == 3) {
          PubIfDecisionLSM_MDL_B.L3Conf = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Availability_State;
          PubIfDecisionLSM_MDL_B.L3C0 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o1;
          PubIfDecisionLSM_MDL_B.L3C1 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o2;
          PubIfDecisionLSM_MDL_B.L3C2 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o3;
          PubIfDecisionLSM_MDL_B.L3C3 =
            PubIfDecisionLSM_MDL_B.FunctionCaller2_o4;
          PubIfDecisionLSM_MDL_B.L3DxMin = PubIfDecisionLSM_MDL_B.Rmin_c;
          PubIfDecisionLSM_MDL_B.L3DxMax = PubIfDecisionLSM_MDL_B.Rmax_i;
          PubIfDecisionLSM_MDL_B.L3Type = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Lanemark_Type;
          PubIfDecisionLSM_MDL_B.L3DLM = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_DLM_Type;
          PubIfDecisionLSM_MDL_B.L3Width = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Marker_Width;
          PubIfDecisionLSM_MDL_B.L3Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[2].
            LA_Confidence;
        } else {
          if (rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_Side == 4) {
            PubIfDecisionLSM_MDL_B.L4Conf = rtu_EQ4_LA->EQ4_LA_ELEM[2].
              LA_Availability_State;
            PubIfDecisionLSM_MDL_B.L4C0 =
              PubIfDecisionLSM_MDL_B.FunctionCaller2_o1;
            PubIfDecisionLSM_MDL_B.L4C1 =
              PubIfDecisionLSM_MDL_B.FunctionCaller2_o2;
            PubIfDecisionLSM_MDL_B.L4C2 =
              PubIfDecisionLSM_MDL_B.FunctionCaller2_o3;
            PubIfDecisionLSM_MDL_B.L4C3 =
              PubIfDecisionLSM_MDL_B.FunctionCaller2_o4;
            PubIfDecisionLSM_MDL_B.L4DxMin = PubIfDecisionLSM_MDL_B.Rmin_c;
            PubIfDecisionLSM_MDL_B.L4DxMax = PubIfDecisionLSM_MDL_B.Rmax_i;
            PubIfDecisionLSM_MDL_B.L4Type = rtu_EQ4_LA->EQ4_LA_ELEM[2].
              LA_Lanemark_Type;
            PubIfDecisionLSM_MDL_B.L4DLM = rtu_EQ4_LA->EQ4_LA_ELEM[2].
              LA_DLM_Type;
            PubIfDecisionLSM_MDL_B.L4Width = rtu_EQ4_LA->EQ4_LA_ELEM[2].
              LA_Marker_Width;
            PubIfDecisionLSM_MDL_B.L4Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[2].
              LA_Confidence;
          }
        }

        if (rtu_EQ4_LA->EQ4_LA_HDR.LA_Adjacent_Count >= 4) {
          if (rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_Side == 1) {
            PubIfDecisionLSM_MDL_B.L1Conf = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Availability_State;
            PubIfDecisionLSM_MDL_B.L1C0 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o1;
            PubIfDecisionLSM_MDL_B.L1C1 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o2;
            PubIfDecisionLSM_MDL_B.L1C2 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o3;
            PubIfDecisionLSM_MDL_B.L1C3 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o4;
            PubIfDecisionLSM_MDL_B.L1DxMin = PubIfDecisionLSM_MDL_B.Rmin_d;
            PubIfDecisionLSM_MDL_B.L1DxMax = PubIfDecisionLSM_MDL_B.Rmax_k;
            PubIfDecisionLSM_MDL_B.L1Type = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Lanemark_Type;
            PubIfDecisionLSM_MDL_B.L1DLM = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_DLM_Type;
            PubIfDecisionLSM_MDL_B.L1Width = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Marker_Width;
            PubIfDecisionLSM_MDL_B.L1Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Confidence;
          } else if (rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_Side == 2) {
            PubIfDecisionLSM_MDL_B.L2Conf = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Availability_State;
            PubIfDecisionLSM_MDL_B.L2C0 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o1;
            PubIfDecisionLSM_MDL_B.L2C1 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o2;
            PubIfDecisionLSM_MDL_B.L2C2 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o3;
            PubIfDecisionLSM_MDL_B.L2C3 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o4;
            PubIfDecisionLSM_MDL_B.L2DxMin = PubIfDecisionLSM_MDL_B.Rmin_d;
            PubIfDecisionLSM_MDL_B.L2DxMax = PubIfDecisionLSM_MDL_B.Rmax_k;
            PubIfDecisionLSM_MDL_B.L2Type = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Lanemark_Type;
            PubIfDecisionLSM_MDL_B.L2DLM = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_DLM_Type;
            PubIfDecisionLSM_MDL_B.L2Width = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Marker_Width;
            PubIfDecisionLSM_MDL_B.L2Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Confidence;
          } else if (rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_Side == 3) {
            PubIfDecisionLSM_MDL_B.L3Conf = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Availability_State;
            PubIfDecisionLSM_MDL_B.L3C0 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o1;
            PubIfDecisionLSM_MDL_B.L3C1 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o2;
            PubIfDecisionLSM_MDL_B.L3C2 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o3;
            PubIfDecisionLSM_MDL_B.L3C3 =
              PubIfDecisionLSM_MDL_B.FunctionCaller3_o4;
            PubIfDecisionLSM_MDL_B.L3DxMin = PubIfDecisionLSM_MDL_B.Rmin_d;
            PubIfDecisionLSM_MDL_B.L3DxMax = PubIfDecisionLSM_MDL_B.Rmax_k;
            PubIfDecisionLSM_MDL_B.L3Type = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Lanemark_Type;
            PubIfDecisionLSM_MDL_B.L3DLM = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_DLM_Type;
            PubIfDecisionLSM_MDL_B.L3Width = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Marker_Width;
            PubIfDecisionLSM_MDL_B.L3Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[3].
              LA_Confidence;
          } else {
            if (rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_Side == 4) {
              PubIfDecisionLSM_MDL_B.L4Conf = rtu_EQ4_LA->EQ4_LA_ELEM[3].
                LA_Availability_State;
              PubIfDecisionLSM_MDL_B.L4C0 =
                PubIfDecisionLSM_MDL_B.FunctionCaller3_o1;
              PubIfDecisionLSM_MDL_B.L4C1 =
                PubIfDecisionLSM_MDL_B.FunctionCaller3_o2;
              PubIfDecisionLSM_MDL_B.L4C2 =
                PubIfDecisionLSM_MDL_B.FunctionCaller3_o3;
              PubIfDecisionLSM_MDL_B.L4C3 =
                PubIfDecisionLSM_MDL_B.FunctionCaller3_o4;
              PubIfDecisionLSM_MDL_B.L4DxMin = PubIfDecisionLSM_MDL_B.Rmin_d;
              PubIfDecisionLSM_MDL_B.L4DxMax = PubIfDecisionLSM_MDL_B.Rmax_k;
              PubIfDecisionLSM_MDL_B.L4Type = rtu_EQ4_LA->EQ4_LA_ELEM[3].
                LA_Lanemark_Type;
              PubIfDecisionLSM_MDL_B.L4DLM = rtu_EQ4_LA->EQ4_LA_ELEM[3].
                LA_DLM_Type;
              PubIfDecisionLSM_MDL_B.L4Width = rtu_EQ4_LA->EQ4_LA_ELEM[3].
                LA_Marker_Width;
              PubIfDecisionLSM_MDL_B.L4Reliable = rtu_EQ4_LA->EQ4_LA_ELEM[3].
                LA_Confidence;
            }
          }
        }
      }
    }
  }

  /* End of MATLAB Function: '<S4>/LALine' */

  /* UnitDelay: '<S53>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay = PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j;

  /* UnitDelay: '<S53>/Unit Delay1' */
  PubIfDecisionLSM_MDL_B.UnitDelay1_b =
    PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_m;

  /* UnitDelay: '<S53>/Unit Delay5' */
  PubIfDecisionLSM_MDL_B.UnitDelay5_f =
    PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE_k;

  /* UnitDelay: '<S53>/Unit Delay2' */
  PubIfDecisionLSM_MDL_B.UnitDelay2_l =
    PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_k;

  /* UnitDelay: '<S53>/Unit Delay3' */
  PubIfDecisionLSM_MDL_B.UnitDelay3 = PubIfDecisionLSM_MDL_DW.UnitDelay3_DSTATE;

  /* UnitDelay: '<S53>/Unit Delay4' */
  PubIfDecisionLSM_MDL_B.UnitDelay4_i =
    PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE_i;

  /* UnitDelay: '<S53>/Unit Delay6' */
  PubIfDecisionLSM_MDL_B.UnitDelay6 = PubIfDecisionLSM_MDL_DW.UnitDelay6_DSTATE;

  /* UnitDelay: '<S53>/Unit Delay7' */
  PubIfDecisionLSM_MDL_B.UnitDelay7_k =
    PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE_f;

  /* MATLAB Function: '<S53>/MATLAB Function' */
  if (LSM_VisLineUpdate) {
    PubIfDecisionLSM_MDL_B.LeftType = PubIfDecisionLSM_MDL_B.LH1Type;
    PubIfDecisionLSM_MDL_B.LeftDLMType = PubIfDecisionLSM_MDL_B.LH1DLM;
    PubIfDecisionLSM_MDL_B.LeftDECELType = PubIfDecisionLSM_MDL_B.LH1DECEL;
    PubIfDecisionLSM_MDL_B.RightType = PubIfDecisionLSM_MDL_B.LH2Type;
    PubIfDecisionLSM_MDL_B.RightDLMType = PubIfDecisionLSM_MDL_B.LH2DLM;
    PubIfDecisionLSM_MDL_B.RightDECELType = PubIfDecisionLSM_MDL_B.LH2DECEL;
    PubIfDecisionLSM_MDL_B.LeftColor = PubIfDecisionLSM_MDL_B.LH1Color;
    PubIfDecisionLSM_MDL_B.LLeftType = PubIfDecisionLSM_MDL_B.L1Type;
  } else {
    PubIfDecisionLSM_MDL_B.LeftType = PubIfDecisionLSM_MDL_B.UnitDelay;
    PubIfDecisionLSM_MDL_B.LeftDLMType = PubIfDecisionLSM_MDL_B.UnitDelay1_b;
    PubIfDecisionLSM_MDL_B.LeftDECELType = PubIfDecisionLSM_MDL_B.UnitDelay5_f;
    PubIfDecisionLSM_MDL_B.RightType = PubIfDecisionLSM_MDL_B.UnitDelay2_l;
    PubIfDecisionLSM_MDL_B.RightDLMType = PubIfDecisionLSM_MDL_B.UnitDelay3;
    PubIfDecisionLSM_MDL_B.RightDECELType = PubIfDecisionLSM_MDL_B.UnitDelay4_i;
    PubIfDecisionLSM_MDL_B.LeftColor = PubIfDecisionLSM_MDL_B.UnitDelay6;
    PubIfDecisionLSM_MDL_B.LLeftType = PubIfDecisionLSM_MDL_B.UnitDelay7_k;
  }

  /* End of MATLAB Function: '<S53>/MATLAB Function' */

  /* UnitDelay: '<S53>/Unit Delay37' */
  PubIfDecisionLSM_MDL_B.UnitDelay37_p =
    PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE_f;

  /* UnitDelay: '<S53>/Unit Delay36' */
  PubIfDecisionLSM_MDL_B.UnitDelay36_l =
    PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE_n;

  /* MATLAB Function: '<S53>/RoadWidthCalc1' */
  i = PubIfDecisionLSM_MDL_B.UnitDelay37_p;
  qY = i - 1U;
  if (qY > (uint32_T)i) {
    qY = 0U;
  }

  i = (int32_T)qY;
  LConf = (uint8_T)i;
  i = PubIfDecisionLSM_MDL_B.UnitDelay36_l;
  qY = i - 1U;
  if (qY > (uint32_T)i) {
    qY = 0U;
  }

  i = (int32_T)qY;
  RConf = (uint8_T)i;
  if ((PubIfDecisionLSM_MDL_B.LeftType == 1) || (PubIfDecisionLSM_MDL_B.LeftType
       == 6) || ((PubIfDecisionLSM_MDL_B.LeftType == 3) &&
                 ((PubIfDecisionLSM_MDL_B.LeftDLMType != 2) ||
                  (PubIfDecisionLSM_MDL_B.LeftDLMType != 4))) ||
      ((PubIfDecisionLSM_MDL_B.LeftType == 5) &&
       (PubIfDecisionLSM_MDL_B.LeftDECELType != 2))) {
    LConf = 10U;
  }

  if ((PubIfDecisionLSM_MDL_B.RightType == 1) ||
      (PubIfDecisionLSM_MDL_B.RightType == 6) ||
      ((PubIfDecisionLSM_MDL_B.RightType == 3) &&
       ((PubIfDecisionLSM_MDL_B.RightDLMType != 2) ||
        (PubIfDecisionLSM_MDL_B.RightDLMType != 4))) ||
      ((PubIfDecisionLSM_MDL_B.RightType == 5) &&
       (PubIfDecisionLSM_MDL_B.RightDECELType != 2))) {
    RConf = 10U;
  }

  LSM_LeftLineTypeEN = (LConf <= 0);
  LSM_RightLineTypeEN = (RConf <= 0);
  PubIfDecisionLSM_MDL_B.Cnt1_o = LConf;
  PubIfDecisionLSM_MDL_B.Cnt2_j = RConf;

  /* End of MATLAB Function: '<S53>/RoadWidthCalc1' */

  /* UnitDelay: '<S17>/Unit Delay24' */
  PubIfDecisionLSM_MDL_B.UnitDelay24 =
    PubIfDecisionLSM_MDL_DW.UnitDelay24_DSTATE;

  /* MATLAB Function: '<S17>/CalcEgoVehMove' incorporates:
   *  Constant: '<S17>/Constant'
   */
  if (*rtu_kapTraj == 0.0F) {
    LSM_dDeltaX = *rtu_vxvRefMs * 0.02F;
    LSM_dDeltaY = 0.0F;
    LSM_CosOfPsi = 1.0F;
    K40 = 0.0F;
  } else {
    t_Psi = *rtu_kapTraj * *rtu_vxvRefMs * 0.02F;
    K40 = sinf(t_Psi);
    LSM_CosOfPsi = t_Psi;
    LSM_CosOfPsi = cosf(LSM_CosOfPsi);
    LSM_dDeltaX = K40 / *rtu_kapTraj;
    LSM_dDeltaY = sinf(t_Psi / 2.0F) * sinf(t_Psi / 2.0F) * 2.0F / *rtu_kapTraj;
  }

  LSM_SinOfsi = K40;

  /* End of MATLAB Function: '<S17>/CalcEgoVehMove' */

  /* UnitDelay: '<S17>/Unit Delay13' */
  PubIfDecisionLSM_MDL_B.UnitDelay13 =
    PubIfDecisionLSM_MDL_DW.UnitDelay13_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay33' */
  PubIfDecisionLSM_MDL_B.UnitDelay33 =
    PubIfDecisionLSM_MDL_DW.UnitDelay33_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay32' */
  PubIfDecisionLSM_MDL_B.UnitDelay32 =
    PubIfDecisionLSM_MDL_DW.UnitDelay32_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay34' */
  PubIfDecisionLSM_MDL_B.UnitDelay34 =
    PubIfDecisionLSM_MDL_DW.UnitDelay34_DSTATE;

  /* SignalConversion generated from: '<S61>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/YBranchRi'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5[0] =
    PubIfDecisionLSM_MDL_B.L1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5[1] =
    PubIfDecisionLSM_MDL_B.LH1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5[2] =
    PubIfDecisionLSM_MDL_B.LH2C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5[3] =
    PubIfDecisionLSM_MDL_B.L4C3;

  /* SignalConversion generated from: '<S61>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/YBranchRi'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[0] =
    PubIfDecisionLSM_MDL_B.L1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[1] =
    PubIfDecisionLSM_MDL_B.LH1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[2] =
    PubIfDecisionLSM_MDL_B.LH2C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[3] =
    PubIfDecisionLSM_MDL_B.L4C2;

  /* SignalConversion generated from: '<S61>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/YBranchRi'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[0] =
    PubIfDecisionLSM_MDL_B.L1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[1] =
    PubIfDecisionLSM_MDL_B.LH1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[2] =
    PubIfDecisionLSM_MDL_B.LH2C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[3] =
    PubIfDecisionLSM_MDL_B.L4C1;

  /* SignalConversion generated from: '<S61>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/YBranchRi'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[0] =
    PubIfDecisionLSM_MDL_B.L1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[1] =
    PubIfDecisionLSM_MDL_B.LH1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[2] =
    PubIfDecisionLSM_MDL_B.LH2C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[3] =
    PubIfDecisionLSM_MDL_B.L4C0;

  /* SignalConversion generated from: '<S61>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/YBranchRi'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_d[0] =
    PubIfDecisionLSM_MDL_B.L1Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_d[1] =
    PubIfDecisionLSM_MDL_B.LH1Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_d[2] =
    PubIfDecisionLSM_MDL_B.LH2Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_d[3] =
    PubIfDecisionLSM_MDL_B.L4Conf;

  /* SignalConversion generated from: '<S61>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/YBranchRi'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10[0] =
    PubIfDecisionLSM_MDL_B.L1Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10[1] =
    PubIfDecisionLSM_MDL_B.LH1Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10[2] =
    PubIfDecisionLSM_MDL_B.LH2Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10[3] =
    PubIfDecisionLSM_MDL_B.L4Reliable;

  /* MATLAB Function: '<S17>/YBranchRi' */
  t_Psi = fmaxf(PubIfDecisionLSM_MDL_B.UnitDelay32 - 0.02F * *rtu_vxvRefMs, 0.0F);
  m2 = fmaxf(PubIfDecisionLSM_MDL_B.UnitDelay34 - 0.02F * *rtu_vxvRefMs, 0.0F);
  if (PubIfDecisionLSM_MDL_B.UnitDelay13) {
    t_Psi = m2;
    m2 = 0.0F;
  }

  LConf = 0U;
  RConf = 0U;
  RRConf = 0U;
  if (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10[1] >= 0.9) {
    LConf = PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_d[1];
  }

  if (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10[2] >= 0.9) {
    RConf = PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_d[2];
  }

  if (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10[3] >= 0.9) {
    RRConf = PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_d[3];
  }

  if ((LConf > 0) && (RConf > 0) && LSM_VisLineUpdate && (fabsf
       (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[1]) <
       0.0005) && (fabsf
                   (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[
                    2]) < 0.0005)) {
    K40 = (3.0F * PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5[1]
           * 1600.0F + 2.0F *
           PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[1] *
           40.0F) +
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[1];
    if (((PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[1] -
          PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[2]) /
         sqrtf(PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[1] *
               PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[1] +
               1.0F) - ((((64000.0F *
                           PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5
                           [1] + 1600.0F *
                           PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6
                           [1]) + 40.0F *
                          PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7
                          [1]) +
                         PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8
                         [1]) - (((64000.0F *
             PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5[2] +
             1600.0F *
             PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[2]) +
            40.0F *
            PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[2]) +
           PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[2])) /
         sqrtf(K40 * K40 + 1.0F) < -0.5F) &&
        ((PubIfDecisionLSM_MDL_B.UnitDelay33 > 2.5F) &&
         (PubIfDecisionLSM_MDL_B.UnitDelay33 < 4.2))) {
      t_Psi = 20.0F;
    }
  }

  PubIfDecisionLSM_MDL_B.YBranch_b = (t_Psi > 0.0F);
  if ((RConf > 0) && (RRConf > 0) && LSM_VisLineUpdate) {
    K40 = (3.0F * PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5[2]
           * 1600.0F + 2.0F *
           PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[2] *
           40.0F) +
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[2];
    if ((*rtu_vxvRefMs > 15.0F) && (fabsf
         ((PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[2] -
           PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[3]) /
          sqrtf(PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[2] *
                PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[2]
                + 1.0F) - ((((64000.0F *
              PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5[2] +
              1600.0F *
              PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[2]) +
             40.0F *
             PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[2]) +
                            PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8
                            [2]) - (((64000.0F *
              PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5[3] +
              1600.0F *
              PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6[3]) +
             40.0F *
             PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7[3]) +
            PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8[3])) /
          sqrtf(K40 * K40 + 1.0F)) > 1.0F) &&
        ((PubIfDecisionLSM_MDL_B.UnitDelay33 > 2.5F) &&
         (PubIfDecisionLSM_MDL_B.UnitDelay33 < 4.2))) {
      m2 = 20.0F;
    }
  }

  PubIfDecisionLSM_MDL_B.YBranchRi_b = (m2 > 0.0F);
  PubIfDecisionLSM_MDL_B.Dist = t_Psi;
  PubIfDecisionLSM_MDL_B.DistRi = m2;

  /* UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_B.UnitDelay58[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_B.UnitDelay59[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_B.UnitDelay35[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_B.UnitDelay58[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_B.UnitDelay59[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_B.UnitDelay35[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_B.UnitDelay58[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_B.UnitDelay59[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_B.UnitDelay35[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_B.UnitDelay58[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_B.UnitDelay59[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_B.UnitDelay35[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay14' */
  PubIfDecisionLSM_MDL_B.UnitDelay14 =
    PubIfDecisionLSM_MDL_DW.UnitDelay14_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay15' */
  PubIfDecisionLSM_MDL_B.UnitDelay15 =
    PubIfDecisionLSM_MDL_DW.UnitDelay15_DSTATE;

  /* MATLAB Function: '<S17>/RoadWidthCalc1' */
  LSM_RoadWidth1 = PubIfDecisionLSM_MDL_B.UnitDelay14;
  PubIfDecisionLSM_MDL_B.tLost_fa = PubIfDecisionLSM_MDL_B.UnitDelay15;
  Update = false;
  t_Psi = 0.0F;
  if (LSM_VisLineUpdate) {
    if ((PubIfDecisionLSM_MDL_B.UnitDelay58[1] > 0) &&
        (PubIfDecisionLSM_MDL_B.UnitDelay58[2] > 0) &&
        (!PubIfDecisionLSM_MDL_B.YBranch_b) && (fabsf((atanf
           (PubIfDecisionLSM_MDL_B.UnitDelay59[1]) - atanf
           (PubIfDecisionLSM_MDL_B.UnitDelay59[2])) * 57.3F) < 3.0F)) {
      t_Psi = (PubIfDecisionLSM_MDL_B.UnitDelay35[1] -
               PubIfDecisionLSM_MDL_B.UnitDelay35[2]) / sqrtf
        (PubIfDecisionLSM_MDL_B.UnitDelay59[1] *
         PubIfDecisionLSM_MDL_B.UnitDelay59[1] + 1.0F);
      Update = ((t_Psi > 2.5F) && (t_Psi < 4.2));
    }

    if (Update) {
      LSM_RoadWidth1 = (t_Psi - PubIfDecisionLSM_MDL_B.UnitDelay14) * 0.1F +
        PubIfDecisionLSM_MDL_B.UnitDelay14;
      PubIfDecisionLSM_MDL_B.tLost_fa = 0.0F;
    } else {
      PubIfDecisionLSM_MDL_B.tLost_fa = fminf(10.0F,
        PubIfDecisionLSM_MDL_B.UnitDelay15 + 0.05F);
    }
  }

  /* End of MATLAB Function: '<S17>/RoadWidthCalc1' */

  /* Gain: '<S17>/Gain3' */
  PubIfDecisionLSM_MDL_B.Gain3 = 3.6F * *rtu_vxvRefMs;

  /* Gain: '<S17>/Gain4' */
  PubIfDecisionLSM_MDL_B.Gain4 = 1.03F * PubIfDecisionLSM_MDL_B.Gain3;

  /* Sum: '<S17>/Sum' incorporates:
   *  Constant: '<S17>/Constant8'
   */
  PubIfDecisionLSM_MDL_B.Sum = PubIfDecisionLSM_MDL_B.Gain4 + 1.3F;

  /* Lookup_n-D: '<S17>/preDisMinTable' incorporates:
   *  Sum: '<S17>/Sum'
   */
  PubIfDecisionLSM_MDL_B.preDisMinTable = look1_iflf_binlcpw
    (PubIfDecisionLSM_MDL_B.Sum, rtCP_preDisMinTable_bp01Data,
     rtCP_preDisMinTable_tableData, 15U);

  /* UnitDelay: '<S17>/Unit Delay52' */
  PubIfDecisionLSM_MDL_B.UnitDelay52 =
    PubIfDecisionLSM_MDL_DW.UnitDelay52_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay31' */
  PubIfDecisionLSM_MDL_B.UnitDelay31 =
    PubIfDecisionLSM_MDL_DW.UnitDelay31_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay49' */
  PubIfDecisionLSM_MDL_B.UnitDelay49 =
    PubIfDecisionLSM_MDL_DW.UnitDelay49_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay50' */
  PubIfDecisionLSM_MDL_B.UnitDelay50 =
    PubIfDecisionLSM_MDL_DW.UnitDelay50_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay51' */
  PubIfDecisionLSM_MDL_B.UnitDelay51 =
    PubIfDecisionLSM_MDL_DW.UnitDelay51_DSTATE;

  /* UnitDelay: '<S50>/Unit Delay1' */
  PubIfDecisionLSM_MDL_B.UnitDelay1_h =
    PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_a;

  /* UnitDelay: '<S50>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_g =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_k;

  /* MATLAB Function: '<S50>/MATLAB Function2' */
  PubIfDecisionLSM_MDL_MATLABFunction2(&rtu_VSM_HMI->HWASts,
    PubIfDecisionLSM_MDL_B.UnitDelay1_h, PubIfDecisionLSM_MDL_B.UnitDelay_g,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction2_b);

  /* Abs: '<S50>/Abs2' */
  PubIfDecisionLSM_MDL_B.Abs2 = fabsf(PubIfDecisionLSM_MDL_B.LH1C2);

  /* Lookup_n-D: '<S50>/1-D Lookup Table4' incorporates:
   *  Abs: '<S50>/Abs2'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable4 = look1_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Abs2, rtCP_uDLookupTable4_bp01Data,
     rtCP_uDLookupTable4_tableData, 6U);

  /* Abs: '<S50>/Abs3' */
  PubIfDecisionLSM_MDL_B.Abs3 = fabsf(PubIfDecisionLSM_MDL_B.LH2C2);

  /* Lookup_n-D: '<S50>/1-D Lookup Table3' incorporates:
   *  Abs: '<S50>/Abs3'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable3 = look1_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Abs3, rtCP_uDLookupTable3_bp01Data,
     rtCP_uDLookupTable3_tableData, 6U);

  /* If: '<S50>/If2' */
  if (PubIfDecisionLSM_MDL_B.sf_MATLABFunction2_b.Changelane > 0) {
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S202>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem5(&PubIfDecisionLSM_MDL_B.Merge2,
      &PubIfDecisionLSM_MDL_B.Merge3);

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem5' */
  } else {
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S201>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem4
      (PubIfDecisionLSM_MDL_B.uDLookupTable4,
       PubIfDecisionLSM_MDL_B.uDLookupTable3, &PubIfDecisionLSM_MDL_B.Merge2,
       &PubIfDecisionLSM_MDL_B.Merge3);

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem4' */
  }

  /* End of If: '<S50>/If2' */

  /* SignalConversion generated from: '<S205>/ SFunction ' incorporates:
   *  MATLAB Function: '<S50>/MATLAB Function6'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_o[0] =
    PubIfDecisionLSM_MDL_B.L1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_o[1] =
    PubIfDecisionLSM_MDL_B.LH1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_o[2] =
    PubIfDecisionLSM_MDL_B.LH2C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_o[3] =
    PubIfDecisionLSM_MDL_B.L4C3;

  /* SignalConversion generated from: '<S205>/ SFunction ' incorporates:
   *  MATLAB Function: '<S50>/MATLAB Function6'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_b[0] =
    PubIfDecisionLSM_MDL_B.L1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_b[1] =
    PubIfDecisionLSM_MDL_B.LH1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_b[2] =
    PubIfDecisionLSM_MDL_B.LH2C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_b[3] =
    PubIfDecisionLSM_MDL_B.L4C2;

  /* SignalConversion generated from: '<S205>/ SFunction ' incorporates:
   *  MATLAB Function: '<S50>/MATLAB Function6'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10_j[0] =
    PubIfDecisionLSM_MDL_B.L1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10_j[1] =
    PubIfDecisionLSM_MDL_B.LH1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10_j[2] =
    PubIfDecisionLSM_MDL_B.LH2C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10_j[3] =
    PubIfDecisionLSM_MDL_B.L4C1;

  /* SignalConversion generated from: '<S205>/ SFunction ' incorporates:
   *  MATLAB Function: '<S50>/MATLAB Function6'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[0] =
    PubIfDecisionLSM_MDL_B.L1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[1] =
    PubIfDecisionLSM_MDL_B.LH1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[2] =
    PubIfDecisionLSM_MDL_B.LH2C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[3] =
    PubIfDecisionLSM_MDL_B.L4C0;

  /* MATLAB Function: '<S50>/MATLAB Function6' */
  tFilter = 1.0F - LSM_dDeltaX;
  t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay31 +
              PubIfDecisionLSM_MDL_B.UnitDelay49) +
             PubIfDecisionLSM_MDL_B.UnitDelay50) +
            PubIfDecisionLSM_MDL_B.UnitDelay51) - LSM_dDeltaY;
  TmpX[0] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
  tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
  t_dx[0] = tFilter;
  tFilter = 2.0F - LSM_dDeltaX;
  t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay31 * 8.0F +
              PubIfDecisionLSM_MDL_B.UnitDelay49 * 4.0F) +
             PubIfDecisionLSM_MDL_B.UnitDelay50 * 2.0F) +
            PubIfDecisionLSM_MDL_B.UnitDelay51) - LSM_dDeltaY;
  TmpX[1] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
  tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
  t_dx[1] = tFilter;
  tFilter = 3.0F - LSM_dDeltaX;
  t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay31 * 27.0F +
              PubIfDecisionLSM_MDL_B.UnitDelay49 * 9.0F) +
             PubIfDecisionLSM_MDL_B.UnitDelay50 * 3.0F) +
            PubIfDecisionLSM_MDL_B.UnitDelay51) - LSM_dDeltaY;
  TmpX[2] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
  tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
  t_dx[2] = tFilter;
  tFilter = 4.0F - LSM_dDeltaX;
  t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay31 * 64.0F +
              PubIfDecisionLSM_MDL_B.UnitDelay49 * 16.0F) +
             PubIfDecisionLSM_MDL_B.UnitDelay50 * 4.0F) +
            PubIfDecisionLSM_MDL_B.UnitDelay51) - LSM_dDeltaY;
  TmpX[3] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
  tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
  t_dx[3] = tFilter;
  t_Dist = rt_powf_snf(TmpX[0], 3.0F);
  t2 = rt_powf_snf(TmpX[1], 3.0F);
  t1 = rt_powf_snf(TmpX[2], 3.0F);
  t0 = rt_powf_snf(TmpX[3], 3.0F);
  MatrixA[0] = t_Dist;
  MatrixA[4] = TmpX[0] * TmpX[0];
  MatrixA[8] = TmpX[0];
  MatrixA[12] = 1.0F;
  MatrixA[1] = t2;
  MatrixA[5] = TmpX[1] * TmpX[1];
  MatrixA[9] = TmpX[1];
  MatrixA[13] = 1.0F;
  MatrixA[2] = t1;
  MatrixA[6] = TmpX[2] * TmpX[2];
  MatrixA[10] = TmpX[2];
  MatrixA[14] = 1.0F;
  MatrixA[3] = t0;
  MatrixA[7] = TmpX[3] * TmpX[3];
  MatrixA[11] = TmpX[3];
  MatrixA[15] = 1.0F;
  memcpy(&A[0], &MatrixA[0], sizeof(real32_T) << 4U);
  xzgetrf_qoSwvruO(A, ipiv, &info);
  K40 = A[0];
  isodd = false;
  K40 *= A[5];
  if (ipiv[0] > 1) {
    isodd = true;
  }

  K40 *= A[10];
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }

  K40 *= A[15];
  if (ipiv[2] > 3) {
    isodd = !isodd;
  }

  if (isodd) {
    K40 = -K40;
  }

  if (K40 == 0.0F) {
    t_Dist = 0.0F;
    t2 = 0.0F;
    t1 = 0.0F;
    t0 = 0.0F;
  } else {
    xzgetrf_qoSwvruO(MatrixA, ipiv, &i);
    t_dy[0] = t_dx[0];
    t_dy[1] = t_dx[1];
    t_dy[2] = t_dx[2];
    t_dy[3] = t_dx[3];
    i = ipiv[0];
    if (i != 1) {
      t_Psi = t_dy[0];
      t_dy[0] = t_dy[i - 1];
      t_dy[i - 1] = t_Psi;
    }

    i = ipiv[1];
    if (i != 2) {
      t_Psi = t_dy[1];
      t_dy[1] = t_dy[i - 1];
      t_dy[i - 1] = t_Psi;
    }

    i = ipiv[2];
    if (i != 3) {
      t_Psi = t_dy[2];
      t_dy[2] = t_dy[i - 1];
      t_dy[i - 1] = t_Psi;
    }

    if (t_dy[0] != 0.0F) {
      for (i = 1; i + 1 < 5; i++) {
        t_dy[i] -= t_dy[0] * MatrixA[i];
      }
    }

    if (t_dy[1] != 0.0F) {
      for (i = 2; i + 1 < 5; i++) {
        t_dy[i] -= MatrixA[i + 4] * t_dy[1];
      }
    }

    if (t_dy[2] != 0.0F) {
      for (i = 3; i + 1 < 5; i++) {
        t_dy[i] -= MatrixA[i + 8] * t_dy[2];
      }
    }

    if (t_dy[3] != 0.0F) {
      t_dy[3] /= MatrixA[15];
      for (i = 0; i < 3; i++) {
        t_dy[i] -= MatrixA[i + 12] * t_dy[3];
      }
    }

    if (t_dy[2] != 0.0F) {
      t_dy[2] /= MatrixA[10];
      for (i = 0; i < 2; i++) {
        t_dy[i] -= MatrixA[i + 8] * t_dy[2];
      }
    }

    if (t_dy[1] != 0.0F) {
      t_dy[1] /= MatrixA[5];
      t_dy[0] -= t_dy[1] * MatrixA[4];
    }

    if (t_dy[0] != 0.0F) {
      t_dy[0] /= MatrixA[0];
    }

    t_Dist = t_dy[0];
    t2 = t_dy[1];
    t1 = t_dy[2];
    t0 = t_dy[3];
  }

  if (PubIfDecisionLSM_MDL_B.UnitDelay52) {
    t_Psi = PubIfDecisionLSM_MDL_B.Merge2;
    m2 = PubIfDecisionLSM_MDL_B.Merge3;
  } else {
    t_Psi = 0.0F;
    m2 = 0.0F;
  }

  K40 = t0 * t_Psi;
  RefA0_3 = t0 * m2;
  if ((rtu_VSM_HMI->HWASts == 5) || (rtu_VSM_HMI->HWASts == 6)) {
    t = fabsf(PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[1] -
              K40);
    y3 = fabsf(RefA0_3 -
               PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[2]);
  } else {
    t = PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[1] - K40;
    y3 = RefA0_3 -
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[2];
  }

  PubIfDecisionLSM_MDL_B.d_cur2 = t;
  PubIfDecisionLSM_MDL_B.delta_d2 = fabsf(fabsf
    ((((PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10_j[1] *
        PubIfDecisionLSM_MDL_B.preDisMinTable +
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[1]) +
       PubIfDecisionLSM_MDL_B.preDisMinTable *
       PubIfDecisionLSM_MDL_B.preDisMinTable *
       PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_b[1]) +
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_o[1] *
      rt_powf_snf(PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) - (((((1.0F -
    t_Psi) * (0.5F * *rtu_kapTraj) + t2 * t_Psi) *
    (PubIfDecisionLSM_MDL_B.preDisMinTable *
     PubIfDecisionLSM_MDL_B.preDisMinTable) + t_Dist * t_Psi * rt_powf_snf
    (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) + t1 * t_Psi *
    PubIfDecisionLSM_MDL_B.preDisMinTable) + K40)) - t);
  PubIfDecisionLSM_MDL_B.d_cur3 = y3;
  PubIfDecisionLSM_MDL_B.delta_d3 = fabsf(fabsf
    ((((PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport10_j[2] *
        PubIfDecisionLSM_MDL_B.preDisMinTable +
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport11[2]) +
       PubIfDecisionLSM_MDL_B.preDisMinTable *
       PubIfDecisionLSM_MDL_B.preDisMinTable *
       PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9_b[2]) +
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_o[2] *
      rt_powf_snf(PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) - (((((1.0F - m2)
    * (0.5F * *rtu_kapTraj) + t2 * m2) * (PubIfDecisionLSM_MDL_B.preDisMinTable *
    PubIfDecisionLSM_MDL_B.preDisMinTable) + t_Dist * m2 * rt_powf_snf
    (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) + t1 * m2 *
    PubIfDecisionLSM_MDL_B.preDisMinTable) + RefA0_3)) - y3);

  /* Saturate: '<S50>/Saturation' */
  t_Psi = LSM_RoadWidth1;
  m2 = 2.4F;
  y2 = 5.0F;
  if (t_Psi > y2) {
    /* Saturate: '<S50>/Saturation' */
    PubIfDecisionLSM_MDL_B.Saturation = y2;
  } else if (t_Psi < m2) {
    /* Saturate: '<S50>/Saturation' */
    PubIfDecisionLSM_MDL_B.Saturation = m2;
  } else {
    /* Saturate: '<S50>/Saturation' */
    PubIfDecisionLSM_MDL_B.Saturation = t_Psi;
  }

  /* End of Saturate: '<S50>/Saturation' */
  for (i = 0; i < 12; i++) {
    /* Product: '<S50>/Product8' incorporates:
     *  Constant: '<S50>/Constant11'
     *  Constant: '<S50>/Constant12'
     */
    PubIfDecisionLSM_MDL_B.Product8[i] = rtCP_Constant11_Value_k[i] *
      PubIfDecisionLSM_MDL_B.Saturation / 3.75;
  }

  /* S-Function (sfix_look1_dyn): '<S50>/Lookup Table Dynamic' incorporates:
   *  Constant: '<S50>/Constant10'
   */
  /* Dynamic Look-Up Table Block: '<S50>/Lookup Table Dynamic'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real_T
   * Input2  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_Treal_T_real32_Treal_T
    ( &(PubIfDecisionLSM_MDL_B.LookupTableDynamic), rtCP_Constant10_Value_o,
     PubIfDecisionLSM_MDL_B.d_cur2, &PubIfDecisionLSM_MDL_B.Product8[0], 11U);

  /* Gain: '<S50>/Gain3' */
  PubIfDecisionLSM_MDL_B.Gain3_f = 3.6F * *rtu_vxvRefMs;

  /* Gain: '<S50>/Gain4' */
  PubIfDecisionLSM_MDL_B.Gain4_o = 1.03F * PubIfDecisionLSM_MDL_B.Gain3_f;

  /* Sum: '<S50>/Sum' incorporates:
   *  Constant: '<S50>/Constant16'
   */
  PubIfDecisionLSM_MDL_B.Sum_b = PubIfDecisionLSM_MDL_B.Gain4_o + 1.3F;

  /* Lookup_n-D: '<S50>/2-D Lookup Table' incorporates:
   *  Sum: '<S50>/Sum'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable = look2_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Sum_b, PubIfDecisionLSM_MDL_B.delta_d2,
     rtCP_uDLookupTable_bp01Data, rtCP_uDLookupTable_bp02Data,
     rtCP_uDLookupTable_tableData, rtCP_uDLookupTable_maxIndex, 4U);

  /* Product: '<S50>/Product' */
  PubIfDecisionLSM_MDL_B.Product = PubIfDecisionLSM_MDL_B.LookupTableDynamic *
    PubIfDecisionLSM_MDL_B.uDLookupTable;

  /* MATLAB Function: '<S50>/MATLAB Function3' incorporates:
   *  Constant: '<S50>/Constant7'
   *  Constant: '<S50>/Constant9'
   */
  PubIfDecisionLSM_MDL_MATLABFunction3(P_LSM_LineWijCal_C12,
    P_LSM_LineWijCal_C13, &PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_p);

  /* Product: '<S50>/Product1' */
  PubIfDecisionLSM_MDL_B.Product1 = PubIfDecisionLSM_MDL_B.Product *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_p.Fac1;

  /* Gain: '<S50>/Gain1' */
  PubIfDecisionLSM_MDL_B.Gain1 = 3.6F * *rtu_vxvRefMs;

  /* Gain: '<S50>/Gain2' */
  PubIfDecisionLSM_MDL_B.Gain2 = 1.03F * PubIfDecisionLSM_MDL_B.Gain1;

  /* Sum: '<S50>/Sum1' incorporates:
   *  Constant: '<S50>/Constant21'
   */
  PubIfDecisionLSM_MDL_B.Sum1 = PubIfDecisionLSM_MDL_B.Gain2 + 1.3F;

  /* MATLAB Function: '<S50>/MATLAB Function7' */
  PubIfDecisionLSM_MDL_MATLABFunction7(PubIfDecisionLSM_MDL_B.LH1DxMax,
    PubIfDecisionLSM_MDL_B.LH2DxMax,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction7_i);

  /* Lookup_n-D: '<S50>/2-D Lookup Table3' incorporates:
   *  Sum: '<S50>/Sum1'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable3_m = look2_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Sum1,
     PubIfDecisionLSM_MDL_B.sf_MATLABFunction7_i.dy2_Ran,
     rtCP_uDLookupTable3_bp01Data_p, rtCP_uDLookupTable3_bp02Data,
     rtCP_uDLookupTable3_tableData_b, rtCP_uDLookupTable3_maxIndex, 4U);

  /* Product: '<S50>/Product2' */
  PubIfDecisionLSM_MDL_B.Product2 = PubIfDecisionLSM_MDL_B.uDLookupTable3_m *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_p.Fac2;

  /* SignalConversion generated from: '<S207>/ SFunction ' incorporates:
   *  MATLAB Function: '<S50>/MATLAB Function8'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1[0] =
    PubIfDecisionLSM_MDL_B.L1Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1[1] =
    PubIfDecisionLSM_MDL_B.LH1Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1[2] =
    PubIfDecisionLSM_MDL_B.LH2Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1[3] =
    PubIfDecisionLSM_MDL_B.L4Reliable;

  /* MATLAB Function: '<S50>/MATLAB Function8' */
  PubIfDecisionLSM_MDL_B.dy2_Rel =
    PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1[1];
  PubIfDecisionLSM_MDL_B.dy3_Rel =
    PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1[2];

  /* Lookup_n-D: '<S50>/1-D Lookup Table5' */
  PubIfDecisionLSM_MDL_B.uDLookupTable5 = look1_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.dy2_Rel, rtCP_uDLookupTable5_bp01Data,
     rtCP_uDLookupTable5_tableData, 6U);

  /* Product: '<S50>/Product3' */
  PubIfDecisionLSM_MDL_B.Product3 = PubIfDecisionLSM_MDL_B.uDLookupTable5 *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_p.Fac3;

  /* Sum: '<S50>/Add' */
  PubIfDecisionLSM_MDL_B.Add = (PubIfDecisionLSM_MDL_B.Product1 +
    PubIfDecisionLSM_MDL_B.Product2) + PubIfDecisionLSM_MDL_B.Product3;

  /* If: '<S50>/If' */
  if (PubIfDecisionLSM_MDL_B.LH1Conf > 0) {
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
     *  ActionPort: '<S197>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem_i(PubIfDecisionLSM_MDL_B.Add,
      &PubIfDecisionLSM_MDL_B.Merge);

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S199>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem2(&PubIfDecisionLSM_MDL_B.Merge);

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem2' */
  }

  /* End of If: '<S50>/If' */

  /* Saturate: '<S50>/Saturation1' */
  t_Psi = LSM_RoadWidth1;
  m2 = 2.4F;
  y2 = 5.0F;
  if (t_Psi > y2) {
    /* Saturate: '<S50>/Saturation1' */
    PubIfDecisionLSM_MDL_B.Saturation1 = y2;
  } else if (t_Psi < m2) {
    /* Saturate: '<S50>/Saturation1' */
    PubIfDecisionLSM_MDL_B.Saturation1 = m2;
  } else {
    /* Saturate: '<S50>/Saturation1' */
    PubIfDecisionLSM_MDL_B.Saturation1 = t_Psi;
  }

  /* End of Saturate: '<S50>/Saturation1' */
  for (i = 0; i < 12; i++) {
    /* Product: '<S50>/Product9' incorporates:
     *  Constant: '<S50>/Constant14'
     *  Constant: '<S50>/Constant15'
     */
    PubIfDecisionLSM_MDL_B.Product9[i] = rtCP_Constant14_Value_m[i] *
      PubIfDecisionLSM_MDL_B.Saturation1 / 3.75;
  }

  /* S-Function (sfix_look1_dyn): '<S50>/Lookup Table Dynamic1' incorporates:
   *  Constant: '<S50>/Constant13'
   */
  /* Dynamic Look-Up Table Block: '<S50>/Lookup Table Dynamic1'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real_T
   * Input2  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_Treal_T_real32_Treal_T
    ( &(PubIfDecisionLSM_MDL_B.LookupTableDynamic1), rtCP_Constant13_Value_e,
     PubIfDecisionLSM_MDL_B.d_cur3, &PubIfDecisionLSM_MDL_B.Product9[0], 11U);

  /* Lookup_n-D: '<S50>/2-D Lookup Table1' incorporates:
   *  Sum: '<S50>/Sum'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable1 = look2_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Sum_b, PubIfDecisionLSM_MDL_B.delta_d3,
     rtCP_uDLookupTable1_bp01Data, rtCP_uDLookupTable1_bp02Data,
     rtCP_uDLookupTable1_tableData, rtCP_uDLookupTable1_maxIndex, 4U);

  /* Product: '<S50>/Product4' */
  PubIfDecisionLSM_MDL_B.Product4 = PubIfDecisionLSM_MDL_B.LookupTableDynamic1 *
    PubIfDecisionLSM_MDL_B.uDLookupTable1;

  /* Product: '<S50>/Product5' */
  PubIfDecisionLSM_MDL_B.Product5 = PubIfDecisionLSM_MDL_B.Product4 *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_p.Fac1;

  /* Lookup_n-D: '<S50>/2-D Lookup Table4' incorporates:
   *  Sum: '<S50>/Sum1'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable4_i = look2_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Sum1,
     PubIfDecisionLSM_MDL_B.sf_MATLABFunction7_i.dy3_Ran,
     rtCP_uDLookupTable4_bp01Data_n, rtCP_uDLookupTable4_bp02Data,
     rtCP_uDLookupTable4_tableData_e, rtCP_uDLookupTable4_maxIndex, 4U);

  /* Product: '<S50>/Product6' */
  PubIfDecisionLSM_MDL_B.Product6 = PubIfDecisionLSM_MDL_B.uDLookupTable4_i *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_p.Fac2;

  /* Lookup_n-D: '<S50>/1-D Lookup Table6' */
  PubIfDecisionLSM_MDL_B.uDLookupTable6 = look1_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.dy3_Rel, rtCP_uDLookupTable6_bp01Data,
     rtCP_uDLookupTable6_tableData, 6U);

  /* Product: '<S50>/Product7' */
  PubIfDecisionLSM_MDL_B.Product7 = PubIfDecisionLSM_MDL_B.uDLookupTable6 *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_p.Fac3;

  /* Sum: '<S50>/Add1' */
  PubIfDecisionLSM_MDL_B.Add1 = (PubIfDecisionLSM_MDL_B.Product5 +
    PubIfDecisionLSM_MDL_B.Product6) + PubIfDecisionLSM_MDL_B.Product7;

  /* If: '<S50>/If1' */
  if (PubIfDecisionLSM_MDL_B.LH2Conf > 0) {
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S198>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem_i(PubIfDecisionLSM_MDL_B.Add1,
      &PubIfDecisionLSM_MDL_B.Merge1);

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S200>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem2(&PubIfDecisionLSM_MDL_B.Merge1);

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem3' */
  }

  /* End of If: '<S50>/If1' */

  /* SignalConversion generated from: '<S40>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_h[0] =
    PubIfDecisionLSM_MDL_B.L1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_h[1] =
    PubIfDecisionLSM_MDL_B.LH1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_h[2] =
    PubIfDecisionLSM_MDL_B.LH2C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_h[3] =
    PubIfDecisionLSM_MDL_B.L4C3;

  /* SignalConversion generated from: '<S40>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_e[0] =
    PubIfDecisionLSM_MDL_B.L1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_e[1] =
    PubIfDecisionLSM_MDL_B.LH1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_e[2] =
    PubIfDecisionLSM_MDL_B.LH2C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_e[3] =
    PubIfDecisionLSM_MDL_B.L4C2;

  /* SignalConversion generated from: '<S40>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_i[0] =
    PubIfDecisionLSM_MDL_B.L1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_i[1] =
    PubIfDecisionLSM_MDL_B.LH1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_i[2] =
    PubIfDecisionLSM_MDL_B.LH2C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_i[3] =
    PubIfDecisionLSM_MDL_B.L4C1;

  /* SignalConversion generated from: '<S40>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[0] =
    PubIfDecisionLSM_MDL_B.L1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[1] =
    PubIfDecisionLSM_MDL_B.LH1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[2] =
    PubIfDecisionLSM_MDL_B.LH2C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[3] =
    PubIfDecisionLSM_MDL_B.L4C0;

  /* MATLAB Function: '<S17>/MATLAB Function2' */
  PubIfDecisionLSM_MDL_B.LH1_Valid = false;
  PubIfDecisionLSM_MDL_B.LH2_Valid = false;
  PubIfDecisionLSM_MDL_B.Wij_state = 0U;
  t_Psi = 0.5F * *rtu_kapTraj * (PubIfDecisionLSM_MDL_B.preDisMinTable *
    PubIfDecisionLSM_MDL_B.preDisMinTable);
  m2 = (2.0F * PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_e[1]
        * PubIfDecisionLSM_MDL_B.preDisMinTable +
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_i[1]) +
    3.0F * PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_h[1] *
    (PubIfDecisionLSM_MDL_B.preDisMinTable *
     PubIfDecisionLSM_MDL_B.preDisMinTable);
  K40 = (2.0F * PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_e[2]
         * PubIfDecisionLSM_MDL_B.preDisMinTable +
         PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_i[2]) +
    3.0F * PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_h[2] *
    (PubIfDecisionLSM_MDL_B.preDisMinTable *
     PubIfDecisionLSM_MDL_B.preDisMinTable);
  m2 = ((((PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_i[1] *
           PubIfDecisionLSM_MDL_B.preDisMinTable +
           PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[1]) +
          PubIfDecisionLSM_MDL_B.preDisMinTable *
          PubIfDecisionLSM_MDL_B.preDisMinTable *
          PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_e[1]) +
         PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_h[1] *
         rt_powf_snf(PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) - t_Psi) /
    sqrtf(m2 * m2 + 1.0F);
  t_Psi = ((((PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_i[2] *
              PubIfDecisionLSM_MDL_B.preDisMinTable +
              PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[2])
             + PubIfDecisionLSM_MDL_B.preDisMinTable *
             PubIfDecisionLSM_MDL_B.preDisMinTable *
             PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_e[2])
            + PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_h[2] *
            rt_powf_snf(PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) - t_Psi) /
    sqrtf(K40 * K40 + 1.0F);
  K40 = PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[1] -
    PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[2];
  if ((PubIfDecisionLSM_MDL_B.Merge >= 0.3) && (PubIfDecisionLSM_MDL_B.Merge1 >=
       0.3)) {
    if ((K40 - (m2 - t_Psi) > 0.5F) || ((m2 - t_Psi) - K40 > 0.5F) || (fabsf
         (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[1] -
          PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j[2]) >
         4.2) || (fabsf
                  (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j
                   [1] -
                   PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_j
                   [2]) < 2.6)) {
      if (PubIfDecisionLSM_MDL_B.Merge >= PubIfDecisionLSM_MDL_B.Merge1) {
        PubIfDecisionLSM_MDL_B.LH1_Valid = true;
        PubIfDecisionLSM_MDL_B.Wij_state = 3U;
      } else {
        PubIfDecisionLSM_MDL_B.LH2_Valid = true;
        PubIfDecisionLSM_MDL_B.Wij_state = 4U;
      }
    } else {
      PubIfDecisionLSM_MDL_B.LH1_Valid = true;
      PubIfDecisionLSM_MDL_B.LH2_Valid = true;
      PubIfDecisionLSM_MDL_B.Wij_state = 5U;
    }
  } else if (PubIfDecisionLSM_MDL_B.Merge >= 0.3) {
    PubIfDecisionLSM_MDL_B.LH1_Valid = true;
    PubIfDecisionLSM_MDL_B.Wij_state = 1U;
  } else {
    if (PubIfDecisionLSM_MDL_B.Merge1 >= 0.3) {
      PubIfDecisionLSM_MDL_B.LH2_Valid = true;
      PubIfDecisionLSM_MDL_B.Wij_state = 2U;
    }
  }

  /* SignalConversion generated from: '<S41>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function3'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_l[0] =
    PubIfDecisionLSM_MDL_B.L1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_l[1] =
    PubIfDecisionLSM_MDL_B.LH1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_l[2] =
    PubIfDecisionLSM_MDL_B.LH2C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_l[3] =
    PubIfDecisionLSM_MDL_B.L4C3;

  /* SignalConversion generated from: '<S41>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function3'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_a[0] =
    PubIfDecisionLSM_MDL_B.L1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_a[1] =
    PubIfDecisionLSM_MDL_B.LH1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_a[2] =
    PubIfDecisionLSM_MDL_B.LH2C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_a[3] =
    PubIfDecisionLSM_MDL_B.L4C2;

  /* SignalConversion generated from: '<S41>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function3'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[0] =
    PubIfDecisionLSM_MDL_B.L1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[1] =
    PubIfDecisionLSM_MDL_B.LH1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[2] =
    PubIfDecisionLSM_MDL_B.LH2C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[3] =
    PubIfDecisionLSM_MDL_B.L4C1;

  /* SignalConversion generated from: '<S41>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function3'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_p[0] =
    PubIfDecisionLSM_MDL_B.L1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_p[1] =
    PubIfDecisionLSM_MDL_B.LH1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_p[2] =
    PubIfDecisionLSM_MDL_B.LH2C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_p[3] =
    PubIfDecisionLSM_MDL_B.L4C0;

  /* SignalConversion generated from: '<S41>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function3'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[0] =
    PubIfDecisionLSM_MDL_B.L1DxMax;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[1] =
    PubIfDecisionLSM_MDL_B.LH1DxMax;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[2] =
    PubIfDecisionLSM_MDL_B.LH2DxMax;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[3] =
    PubIfDecisionLSM_MDL_B.L4DxMax;

  /* MATLAB Function: '<S17>/MATLAB Function3' */
  LSM_CentLineValid = false;
  LSM_CentLineA0 = 0.0F;
  LSM_CentLineA1 = 0.0F;
  LSM_CentLineA2 = 0.0F;
  LSM_CentLineA3 = 0.0F;
  LSM_CentLineRange = 0.0F;
  LSM_CentQ = 0.0F;
  PubIfDecisionLSM_MDL_B.Line_State = 0U;
  if (PubIfDecisionLSM_MDL_B.LH1_Valid && PubIfDecisionLSM_MDL_B.LH2_Valid) {
    m2 = PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[1] -
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[2];
    t_Psi = 0.5F;
    K40 = 0.5F;
    if ((m2 > 10.0F) || (m2 < -10.0F)) {
      K40 = m2 * 0.01F;
      t_Psi = fminf(0.5F, K40) + 0.5F;
      K40 = 1.0F - (fminf(0.5F, K40) + 0.5F);
    }

    LSM_CentLineValid = true;
    LSM_CentLineA0 =
      (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_p[1] +
       PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_p[2]) * 0.5F;
    LSM_CentLineA1 = t_Psi *
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[1] + K40 *
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[2];
    LSM_CentLineA2 = t_Psi *
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_a[1] + K40 *
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_a[2];
    LSM_CentLineA3 = t_Psi *
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_l[1] + K40 *
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_l[2];
    LSM_CentLineRange = fmaxf
      (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[1],
       PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[2]);
    LSM_CentQ = (PubIfDecisionLSM_MDL_B.Merge + PubIfDecisionLSM_MDL_B.Merge1) *
      0.5F;
    PubIfDecisionLSM_MDL_B.Line_State = 1U;
  } else if (PubIfDecisionLSM_MDL_B.LH1_Valid) {
    LSM_CentLineValid = true;
    LSM_CentLineA0 =
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_p[1] - sqrtf
      (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[1] *
       PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[1] + 1.0F)
      * (0.5F * LSM_RoadWidth1);
    LSM_CentLineA1 =
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[1];
    LSM_CentLineA2 =
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_a[1];
    LSM_CentLineA3 =
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_l[1];
    LSM_CentLineRange =
      PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[1];
    LSM_CentQ = PubIfDecisionLSM_MDL_B.Merge;
    PubIfDecisionLSM_MDL_B.Line_State = 2U;
  } else {
    if (PubIfDecisionLSM_MDL_B.LH2_Valid) {
      LSM_CentLineValid = true;
      LSM_CentLineA0 = sqrtf
        (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[2] *
         PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[2] +
         1.0F) * (0.5F * LSM_RoadWidth1) +
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_p[2];
      LSM_CentLineA1 =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_n[2];
      LSM_CentLineA2 =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_a[2];
      LSM_CentLineA3 =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_l[2];
      LSM_CentLineRange =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_a[2];
      LSM_CentQ = PubIfDecisionLSM_MDL_B.Merge1;
      PubIfDecisionLSM_MDL_B.Line_State = 3U;
    }
  }

  /* UnitDelay: '<S17>/Unit Delay54' */
  LSM_QualityK1 = PubIfDecisionLSM_MDL_DW.UnitDelay54_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay55' */
  LSM_LineValidK1 = PubIfDecisionLSM_MDL_DW.UnitDelay55_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay56' */
  LSM_A3K1 = PubIfDecisionLSM_MDL_DW.UnitDelay56_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay70' */
  LSM_A2K1 = PubIfDecisionLSM_MDL_DW.UnitDelay70_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay69' */
  LSM_A1K1 = PubIfDecisionLSM_MDL_DW.UnitDelay69_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay68' */
  LSM_A0K1 = PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay67' */
  LSM_RangeK1 = PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay66' */
  LSM_tLostK1 = PubIfDecisionLSM_MDL_DW.UnitDelay66_DSTATE;

  /* MATLAB Function: '<S17>/VisLineFilter3' incorporates:
   *  Constant: '<S17>/Constant1'
   */
  if (LSM_CentLineValid && LSM_VisLineUpdate) {
    Update = true;
    t_Psi = LSM_CentLineA3;
    RefA0_3 = LSM_CentLineA2;
    t = LSM_CentLineA1;
    y3 = LSM_CentLineA0;
    K40 = LSM_CentLineRange;
    y2 = LSM_CentQ;
    m2 = 0.0F;
  } else {
    m2 = fminf(LSM_tLostK1 + 0.02F, 10.0F);
    if (LSM_LineValidK1 && (m2 < 0.5F)) {
      xi[1] = 0.25F * LSM_RangeK1;
      xi[2] = 0.5F * LSM_RangeK1;
      xi[3] = LSM_RangeK1;
      tFilter = 0.0F - LSM_dDeltaX;
      t_dy_0 = (((LSM_A3K1 * 0.0F + LSM_A2K1 * 0.0F) + LSM_A1K1 * 0.0F) +
                LSM_A0K1) - LSM_dDeltaY;
      xi_0 = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi[0] = xi_0;
      t_dx[0] = tFilter;
      xi_0 = xi[1];
      t_dy_0 = rt_powf_snf(xi_0, 3.0F);
      x_0 = xi_0 * xi_0;
      tFilter = xi_0 - LSM_dDeltaX;
      t_dy_0 = (((LSM_A3K1 * t_dy_0 + LSM_A2K1 * x_0) + LSM_A1K1 * xi_0) +
                LSM_A0K1) - LSM_dDeltaY;
      xi_0 = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi[1] = xi_0;
      t_dx[1] = tFilter;
      xi_0 = xi[2];
      t_dy_0 = rt_powf_snf(xi_0, 3.0F);
      x_0 = xi_0 * xi_0;
      tFilter = xi_0 - LSM_dDeltaX;
      t_dy_0 = (((LSM_A3K1 * t_dy_0 + LSM_A2K1 * x_0) + LSM_A1K1 * xi_0) +
                LSM_A0K1) - LSM_dDeltaY;
      xi_0 = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi[2] = xi_0;
      t_dx[2] = tFilter;
      xi_0 = xi[3];
      t_dy_0 = rt_powf_snf(xi_0, 3.0F);
      x_0 = xi_0 * xi_0;
      tFilter = xi_0 - LSM_dDeltaX;
      t_dy_0 = (((LSM_A3K1 * t_dy_0 + LSM_A2K1 * x_0) + LSM_A1K1 * xi_0) +
                LSM_A0K1) - LSM_dDeltaY;
      xi_0 = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi[3] = xi_0;
      t_dx[3] = tFilter;
      t_Dist = rt_powf_snf(xi[0], 3.0F);
      t2 = rt_powf_snf(xi[1], 3.0F);
      t1 = rt_powf_snf(xi[2], 3.0F);
      t0 = rt_powf_snf(xi[3], 3.0F);
      MatrixA[0] = t_Dist;
      MatrixA[4] = xi[0] * xi[0];
      MatrixA[8] = xi[0];
      MatrixA[12] = 1.0F;
      MatrixA[1] = t2;
      MatrixA[5] = xi[1] * xi[1];
      MatrixA[9] = xi[1];
      MatrixA[13] = 1.0F;
      MatrixA[2] = t1;
      MatrixA[6] = xi[2] * xi[2];
      MatrixA[10] = xi[2];
      MatrixA[14] = 1.0F;
      MatrixA[3] = t0;
      MatrixA[7] = xi[3] * xi[3];
      MatrixA[11] = xi[3];
      MatrixA[15] = 1.0F;
      memcpy(&A[0], &MatrixA[0], sizeof(real32_T) << 4U);
      xzgetrf_qoSwvruO(A, ipiv, &info);
      K40 = A[0];
      isodd = false;
      K40 *= A[5];
      if (ipiv[0] > 1) {
        isodd = true;
      }

      K40 *= A[10];
      if (ipiv[1] > 2) {
        isodd = !isodd;
      }

      K40 *= A[15];
      if (ipiv[2] > 3) {
        isodd = !isodd;
      }

      if (isodd) {
        K40 = -K40;
      }

      if (K40 == 0.0F) {
        t_Psi = 0.0F;
        RefA0_3 = 0.0F;
        t = 0.0F;
        y3 = 0.0F;
      } else {
        xzgetrf_qoSwvruO(MatrixA, ipiv, &i);
        xi[0] = t_dx[0];
        xi[1] = t_dx[1];
        xi[2] = t_dx[2];
        xi[3] = t_dx[3];
        i = ipiv[0];
        if (i != 1) {
          t_Psi = xi[0];
          xi[0] = xi[i - 1];
          xi[i - 1] = t_Psi;
        }

        i = ipiv[1];
        if (i != 2) {
          t_Psi = xi[1];
          xi[1] = xi[i - 1];
          xi[i - 1] = t_Psi;
        }

        i = ipiv[2];
        if (i != 3) {
          t_Psi = xi[2];
          xi[2] = xi[i - 1];
          xi[i - 1] = t_Psi;
        }

        if (xi[0] != 0.0F) {
          for (i = 1; i + 1 < 5; i++) {
            xi[i] -= xi[0] * MatrixA[i];
          }
        }

        if (xi[1] != 0.0F) {
          for (i = 2; i + 1 < 5; i++) {
            xi[i] -= MatrixA[i + 4] * xi[1];
          }
        }

        if (xi[2] != 0.0F) {
          for (i = 3; i + 1 < 5; i++) {
            xi[i] -= MatrixA[i + 8] * xi[2];
          }
        }

        if (xi[3] != 0.0F) {
          xi[3] /= MatrixA[15];
          for (i = 0; i < 3; i++) {
            xi[i] -= MatrixA[i + 12] * xi[3];
          }
        }

        if (xi[2] != 0.0F) {
          xi[2] /= MatrixA[10];
          for (i = 0; i < 2; i++) {
            xi[i] -= MatrixA[i + 8] * xi[2];
          }
        }

        if (xi[1] != 0.0F) {
          xi[1] /= MatrixA[5];
          xi[0] -= xi[1] * MatrixA[4];
        }

        if (xi[0] != 0.0F) {
          xi[0] /= MatrixA[0];
        }

        t_Psi = xi[0];
        RefA0_3 = xi[1];
        t = xi[2];
        y3 = xi[3];
      }

      y2 = LSM_QualityK1;
      K40 = LSM_RangeK1;
      Update = !(LSM_RangeK1 < 5.0F);
    } else {
      Update = false;
      t_Psi = 0.0F;
      RefA0_3 = 0.0F;
      t = 0.0F;
      y3 = 0.0F;
      K40 = 0.0F;
      y2 = 0.0F;
    }
  }

  if ((y3 > 0.0F) && (LSM_A0K1 < 0.0F) && (fabsf(y3 - LSM_A0K1) > LSM_RoadWidth1
       - 1.5F) && (Update && LSM_LineValidK1)) {
    isodd = true;
  } else {
    isodd = false;
  }

  if ((y3 < 0.0F) && (LSM_A0K1 > 0.0F) && (fabsf(y3 - LSM_A0K1) > LSM_RoadWidth1
       - 1.5F) && (Update && LSM_LineValidK1)) {
    RightOffset_b = true;
  } else {
    RightOffset_b = false;
  }

  DoubleLineLost_b = !Update;
  PubIfDecisionLSM_MDL_B.DoubleLineLost_b = DoubleLineLost_b;
  LSM_LeftOffset_b = isodd;
  LSM_RightOffset_b = RightOffset_b;
  PubIfDecisionLSM_MDL_B.Quality = y2;
  PubIfDecisionLSM_MDL_B.LineValid = Update;
  PubIfDecisionLSM_MDL_B.A3_n = t_Psi;
  PubIfDecisionLSM_MDL_B.A2_f = RefA0_3;
  PubIfDecisionLSM_MDL_B.A1_b = t;
  PubIfDecisionLSM_MDL_B.A0_k = y3;
  PubIfDecisionLSM_MDL_B.Range = K40;
  PubIfDecisionLSM_MDL_B.tLost = m2;

  /* End of MATLAB Function: '<S17>/VisLineFilter3' */

  /* UnitDelay: '<S32>/Unit Delay67' */
  PubIfDecisionLSM_MDL_B.UnitDelay67 =
    PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE_l;

  /* RelationalOperator: '<S32>/Relational Operator' */
  PubIfDecisionLSM_MDL_B.RelationalOperator = ((int32_T)LSM_LeftOffset_b >
    (int32_T)PubIfDecisionLSM_MDL_B.UnitDelay67);

  /* UnitDelay: '<S33>/Unit Delay67' */
  PubIfDecisionLSM_MDL_B.UnitDelay67_g =
    PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE_lc;

  /* RelationalOperator: '<S33>/Relational Operator' */
  PubIfDecisionLSM_MDL_B.RelationalOperator_i = ((int32_T)LSM_RightOffset_b >
    (int32_T)PubIfDecisionLSM_MDL_B.UnitDelay67_g);

  /* UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_B.UnitDelay57[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_B.UnitDelay37[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_B.UnitDelay9[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_B.UnitDelay8[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_B.UnitDelay7[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_B.UnitDelay5[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_B.UnitDelay4[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_B.UnitDelay2[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_B.UnitDelay61[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_B.UnitDelay60[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_B.UnitDelay28[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_B.UnitDelay29[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_B.UnitDelay57[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_B.UnitDelay37[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_B.UnitDelay9[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_B.UnitDelay8[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_B.UnitDelay7[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_B.UnitDelay5[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_B.UnitDelay4[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_B.UnitDelay2[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_B.UnitDelay61[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_B.UnitDelay60[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_B.UnitDelay28[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_B.UnitDelay29[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_B.UnitDelay57[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_B.UnitDelay37[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_B.UnitDelay9[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_B.UnitDelay8[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_B.UnitDelay7[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_B.UnitDelay5[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_B.UnitDelay4[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_B.UnitDelay2[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_B.UnitDelay61[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_B.UnitDelay60[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_B.UnitDelay28[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_B.UnitDelay29[2] =
    PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[2];

  /* UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_B.UnitDelay57[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_B.UnitDelay37[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_B.UnitDelay9[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_B.UnitDelay8[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_B.UnitDelay7[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_B.UnitDelay5[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_B.UnitDelay4[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_B.UnitDelay2[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_B.UnitDelay61[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_B.UnitDelay60[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_B.UnitDelay28[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[3];

  /* UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_B.UnitDelay29[3] =
    PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[3];

  /* SignalConversion generated from: '<S57>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_g[0] =
    PubIfDecisionLSM_MDL_B.L1Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_g[1] =
    PubIfDecisionLSM_MDL_B.LH1Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_g[2] =
    PubIfDecisionLSM_MDL_B.LH2Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_g[3] =
    PubIfDecisionLSM_MDL_B.L4Conf;

  /* SignalConversion generated from: '<S57>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_c[0] =
    PubIfDecisionLSM_MDL_B.L1Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_c[1] =
    PubIfDecisionLSM_MDL_B.LH1Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_c[2] =
    PubIfDecisionLSM_MDL_B.LH2Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_c[3] =
    PubIfDecisionLSM_MDL_B.L4Reliable;

  /* SignalConversion generated from: '<S57>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_o[0] =
    PubIfDecisionLSM_MDL_B.L1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_o[1] =
    PubIfDecisionLSM_MDL_B.LH1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_o[2] =
    PubIfDecisionLSM_MDL_B.LH2C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_o[3] =
    PubIfDecisionLSM_MDL_B.L4C3;

  /* SignalConversion generated from: '<S57>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_l[0] =
    PubIfDecisionLSM_MDL_B.L1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_l[1] =
    PubIfDecisionLSM_MDL_B.LH1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_l[2] =
    PubIfDecisionLSM_MDL_B.LH2C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_l[3] =
    PubIfDecisionLSM_MDL_B.L4C2;

  /* SignalConversion generated from: '<S57>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_d[0] =
    PubIfDecisionLSM_MDL_B.L1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_d[1] =
    PubIfDecisionLSM_MDL_B.LH1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_d[2] =
    PubIfDecisionLSM_MDL_B.LH2C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_d[3] =
    PubIfDecisionLSM_MDL_B.L4C1;

  /* SignalConversion generated from: '<S57>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_g[0] =
    PubIfDecisionLSM_MDL_B.L1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_g[1] =
    PubIfDecisionLSM_MDL_B.LH1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_g[2] =
    PubIfDecisionLSM_MDL_B.LH2C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_g[3] =
    PubIfDecisionLSM_MDL_B.L4C0;

  /* SignalConversion generated from: '<S57>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter2'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9[0] =
    PubIfDecisionLSM_MDL_B.L1DxMax;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9[1] =
    PubIfDecisionLSM_MDL_B.LH1DxMax;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9[2] =
    PubIfDecisionLSM_MDL_B.LH2DxMax;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9[3] =
    PubIfDecisionLSM_MDL_B.L4DxMax;

  /* MATLAB Function: '<S17>/VisLineFilter2' incorporates:
   *  Constant: '<S17>/Constant14'
   *  Constant: '<S17>/Constant3'
   *  Constant: '<S17>/tFilt'
   */
  y3 = 0.2F;
  t_Psi = 0.02F;
  Update = LSM_VisLineUpdate;
  m2 = LSM_dDeltaX;
  RefA0_3 = LSM_dDeltaY;
  t = LSM_CosOfPsi;
  K40 = LSM_SinOfsi;
  y2 = P_LSM_LineSTD_Limit;
  Line_std_idx_1 = LSM_RoadWidth1;
  isodd = PubIfDecisionLSM_MDL_B.RelationalOperator;
  RightOffset_b = PubIfDecisionLSM_MDL_B.RelationalOperator_i;
  PubIfDecisionLSM_MDL_B.LineConf[0] = 0U;
  PubIfDecisionLSM_MDL_B.LineConf[1] = 0U;
  PubIfDecisionLSM_MDL_B.LineConf[2] = 0U;
  PubIfDecisionLSM_MDL_B.LineConf[3] = 0U;
  PubIfDecisionLSM_MDL_B.LineReliable[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.LineReliable[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.LineReliable[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.LineReliable[3] = 0.0F;
  PubIfDecisionLSM_MDL_B.A3_h[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.A3_h[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.A3_h[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.A3_h[3] = 0.0F;
  PubIfDecisionLSM_MDL_B.A2_k[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.A2_k[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.A2_k[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.A2_k[3] = 0.0F;
  PubIfDecisionLSM_MDL_B.A1_n[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.A1_n[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.A1_n[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.A1_n[3] = 0.0F;
  PubIfDecisionLSM_MDL_B.A0_o3[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.A0_o3[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.A0_o3[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.A0_o3[3] = 0.0F;
  PubIfDecisionLSM_MDL_B.Range_a[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.Range_a[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.Range_a[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.Range_a[3] = 0.0F;
  PubIfDecisionLSM_MDL_B.Avail_time_m[0] = PubIfDecisionLSM_MDL_B.UnitDelay61[0];
  PubIfDecisionLSM_MDL_B.Avail_time_m[1] = PubIfDecisionLSM_MDL_B.UnitDelay61[1];
  PubIfDecisionLSM_MDL_B.Avail_time_m[2] = PubIfDecisionLSM_MDL_B.UnitDelay61[2];
  PubIfDecisionLSM_MDL_B.Avail_time_m[3] = PubIfDecisionLSM_MDL_B.UnitDelay61[3];
  PubIfDecisionLSM_MDL_B.Avail_dis_n[0] = PubIfDecisionLSM_MDL_B.UnitDelay60[0];
  PubIfDecisionLSM_MDL_B.Avail_dis_n[1] = PubIfDecisionLSM_MDL_B.UnitDelay60[1];
  PubIfDecisionLSM_MDL_B.Avail_dis_n[2] = PubIfDecisionLSM_MDL_B.UnitDelay60[2];
  PubIfDecisionLSM_MDL_B.Avail_dis_n[3] = PubIfDecisionLSM_MDL_B.UnitDelay60[3];
  PubIfDecisionLSM_MDL_B.fix_time[0] = PubIfDecisionLSM_MDL_B.UnitDelay28[0];
  PubIfDecisionLSM_MDL_B.fix_time[1] = PubIfDecisionLSM_MDL_B.UnitDelay28[1];
  PubIfDecisionLSM_MDL_B.fix_time[2] = PubIfDecisionLSM_MDL_B.UnitDelay28[2];
  PubIfDecisionLSM_MDL_B.fix_time[3] = PubIfDecisionLSM_MDL_B.UnitDelay28[3];
  PubIfDecisionLSM_MDL_B.Fault[0] = PubIfDecisionLSM_MDL_B.UnitDelay29[0];
  PubIfDecisionLSM_MDL_B.Fault[1] = PubIfDecisionLSM_MDL_B.UnitDelay29[1];
  PubIfDecisionLSM_MDL_B.Fault[2] = PubIfDecisionLSM_MDL_B.UnitDelay29[2];
  PubIfDecisionLSM_MDL_B.Fault[3] = PubIfDecisionLSM_MDL_B.UnitDelay29[3];
  PubIfDecisionLSM_MDL_B.DevValid[0] = false;
  PubIfDecisionLSM_MDL_B.DevValid[1] = false;
  PubIfDecisionLSM_MDL_B.DevValid[2] = false;
  PubIfDecisionLSM_MDL_B.DevValid[3] = false;
  PubIfDecisionLSM_MDL_B.DevAngle[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.DevAngle[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.DevAngle[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.DevAngle[3] = 0.0F;
  PubIfDecisionLSM_MDL_B.DevDis[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.DevDis[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.DevDis[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.DevDis[3] = 0.0F;
  for (i = 0; i < 4; i++) {
    if (Update &&
        (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_g[i] > 0) &&
        (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_c[i] >
         0.01)) {
      PubIfDecisionLSM_MDL_B.LineConf[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_g[i];
      PubIfDecisionLSM_MDL_B.LineReliable[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_c[i];
      PubIfDecisionLSM_MDL_B.A3_h[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_o[i];
      PubIfDecisionLSM_MDL_B.A2_k[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_l[i];
      PubIfDecisionLSM_MDL_B.A1_n[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_d[i];
      PubIfDecisionLSM_MDL_B.A0_o3[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_g[i];
      PubIfDecisionLSM_MDL_B.Range_a[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport9[i];
      if (PubIfDecisionLSM_MDL_B.Range_a[i] <
          PubIfDecisionLSM_MDL_B.UnitDelay4[i]) {
        PubIfDecisionLSM_MDL_B.Range_a[i] = PubIfDecisionLSM_MDL_B.UnitDelay4[i]
          - *rtu_vxvRefMs * t_Psi;
      }

      PubIfDecisionLSM_MDL_B.tLost_c[i] = 0.0F;
      if (PubIfDecisionLSM_MDL_B.UnitDelay57[i] > 0) {
        PubIfDecisionLSM_MDL_B.DevValid[i] = true;
        t_Dist = fmaxf(15.0F, *rtu_vxvRefMs * 1.8F);
        xi[0] = 0.05F * t_Dist;
        xi[1] = 0.3F * t_Dist;
        xi[2] = 0.6F * t_Dist;
        xi[3] = t_Dist;
        t_Dist = PubIfDecisionLSM_MDL_B.UnitDelay9[i];
        t2 = PubIfDecisionLSM_MDL_B.UnitDelay8[i];
        t1 = PubIfDecisionLSM_MDL_B.UnitDelay7[i];
        t0 = PubIfDecisionLSM_MDL_B.UnitDelay5[i];
        xi_0 = xi[0];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        t_dx_0[0] = tFilter * t + t_dy_0 * K40;
        t_dx_1[0] = -tFilter * K40 + t_dy_0 * t;
        xi_0 = xi[1];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        t_dx_0[1] = tFilter * t + t_dy_0 * K40;
        t_dx_1[1] = -tFilter * K40 + t_dy_0 * t;
        xi_0 = xi[2];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        t_dx_0[2] = tFilter * t + t_dy_0 * K40;
        t_dx_1[2] = -tFilter * K40 + t_dy_0 * t;
        xi_0 = xi[3];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        t_dx_0[3] = tFilter * t + t_dy_0 * K40;
        t_dx_1[3] = -tFilter * K40 + t_dy_0 * t;
        pl_3fC1hwr1(t_dx_0, t_dx_1, &t_Dist, &t2, &t1, &t0);
        PubIfDecisionLSM_MDL_B.DevAngle[i] = (atanf
          (PubIfDecisionLSM_MDL_B.A1_n[i]) - atanf(t1)) * 57.3F;
        PubIfDecisionLSM_MDL_B.DevDis[i] = (PubIfDecisionLSM_MDL_B.A0_o3[i] - t0)
          / sqrtf(PubIfDecisionLSM_MDL_B.A1_n[i] * PubIfDecisionLSM_MDL_B.A1_n[i]
                  + 1.0F);
        if ((fabsf(PubIfDecisionLSM_MDL_B.DevAngle[i]) < 3.0F) && (fabsf
             (PubIfDecisionLSM_MDL_B.DevDis[i]) < 0.06)) {
          tFilter = 0.05F / y3;
          PubIfDecisionLSM_MDL_B.A3_h[i] = (PubIfDecisionLSM_MDL_B.A3_h[i] -
            t_Dist) * tFilter + t_Dist;
          PubIfDecisionLSM_MDL_B.A2_k[i] = (PubIfDecisionLSM_MDL_B.A2_k[i] - t2)
            * tFilter + t2;
          PubIfDecisionLSM_MDL_B.A1_n[i] = (PubIfDecisionLSM_MDL_B.A1_n[i] - t1)
            * tFilter + t1;
          PubIfDecisionLSM_MDL_B.A0_o3[i] = (PubIfDecisionLSM_MDL_B.A0_o3[i] -
            t0) * tFilter + t0;
        }
      }
    } else {
      PubIfDecisionLSM_MDL_B.tLost_c[i] = fminf
        (PubIfDecisionLSM_MDL_B.UnitDelay2[i] + t_Psi, 10.0F);
      if ((PubIfDecisionLSM_MDL_B.UnitDelay57[i] > 0) &&
          (PubIfDecisionLSM_MDL_B.tLost_c[i] < 0.5F) && (*rtu_vxvRefMs > 1.8)) {
        xi[0] = 0.5F * *rtu_vxvRefMs;
        xi[1] = 0.5F * *rtu_vxvRefMs + 0.25F *
          PubIfDecisionLSM_MDL_B.UnitDelay4[i];
        xi[2] = 0.5F * *rtu_vxvRefMs + 0.5F *
          PubIfDecisionLSM_MDL_B.UnitDelay4[i];
        xi[3] = 0.5F * *rtu_vxvRefMs + PubIfDecisionLSM_MDL_B.UnitDelay4[i];
        t_Dist = PubIfDecisionLSM_MDL_B.UnitDelay9[i];
        t2 = PubIfDecisionLSM_MDL_B.UnitDelay8[i];
        t1 = PubIfDecisionLSM_MDL_B.UnitDelay7[i];
        t0 = PubIfDecisionLSM_MDL_B.UnitDelay5[i];
        xi_0 = xi[0];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        t_dx_0[0] = tFilter * t + t_dy_0 * K40;
        t_dx_1[0] = -tFilter * K40 + t_dy_0 * t;
        xi_0 = xi[1];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        t_dx_0[1] = tFilter * t + t_dy_0 * K40;
        t_dx_1[1] = -tFilter * K40 + t_dy_0 * t;
        xi_0 = xi[2];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        t_dx_0[2] = tFilter * t + t_dy_0 * K40;
        t_dx_1[2] = -tFilter * K40 + t_dy_0 * t;
        xi_0 = xi[3];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        t_dx_0[3] = tFilter * t + t_dy_0 * K40;
        t_dx_1[3] = -tFilter * K40 + t_dy_0 * t;
        pl_3fC1hwr1(t_dx_0, t_dx_1, &t_Dist, &t2, &t1, &t0);
        PubIfDecisionLSM_MDL_B.A3_h[i] = t_Dist;
        PubIfDecisionLSM_MDL_B.A2_k[i] = t2;
        PubIfDecisionLSM_MDL_B.A1_n[i] = t1;
        PubIfDecisionLSM_MDL_B.A0_o3[i] = t0;
        PubIfDecisionLSM_MDL_B.LineConf[i] =
          PubIfDecisionLSM_MDL_B.UnitDelay57[i];
        PubIfDecisionLSM_MDL_B.LineReliable[i] =
          PubIfDecisionLSM_MDL_B.UnitDelay37[i];
        PubIfDecisionLSM_MDL_B.Range_a[i] = PubIfDecisionLSM_MDL_B.UnitDelay4[i]
          - 0.5F * *rtu_vxvRefMs * t_Psi;
        if (PubIfDecisionLSM_MDL_B.Range_a[i] < 5.0F) {
          PubIfDecisionLSM_MDL_B.LineConf[i] = 0U;
        }
      } else {
        if ((PubIfDecisionLSM_MDL_B.UnitDelay57[i] > 0) && (*rtu_vxvRefMs <= 1.8))
        {
          xi[0] = 0.5F * *rtu_vxvRefMs;
          xi[1] = 0.5F * *rtu_vxvRefMs + 0.25F *
            PubIfDecisionLSM_MDL_B.UnitDelay4[i];
          xi[2] = 0.5F * *rtu_vxvRefMs + 0.5F *
            PubIfDecisionLSM_MDL_B.UnitDelay4[i];
          xi[3] = 0.5F * *rtu_vxvRefMs + PubIfDecisionLSM_MDL_B.UnitDelay4[i];
          t_Dist = PubIfDecisionLSM_MDL_B.UnitDelay9[i];
          t2 = PubIfDecisionLSM_MDL_B.UnitDelay8[i];
          t1 = PubIfDecisionLSM_MDL_B.UnitDelay7[i];
          t0 = PubIfDecisionLSM_MDL_B.UnitDelay5[i];
          xi_0 = xi[0];
          t_dy_0 = rt_powf_snf(xi_0, 3.0F);
          x_0 = xi_0 * xi_0;
          tFilter = xi_0 - m2;
          t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
          t_dx_0[0] = tFilter * t + t_dy_0 * K40;
          t_dx_1[0] = -tFilter * K40 + t_dy_0 * t;
          xi_0 = xi[1];
          t_dy_0 = rt_powf_snf(xi_0, 3.0F);
          x_0 = xi_0 * xi_0;
          tFilter = xi_0 - m2;
          t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
          t_dx_0[1] = tFilter * t + t_dy_0 * K40;
          t_dx_1[1] = -tFilter * K40 + t_dy_0 * t;
          xi_0 = xi[2];
          t_dy_0 = rt_powf_snf(xi_0, 3.0F);
          x_0 = xi_0 * xi_0;
          tFilter = xi_0 - m2;
          t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
          t_dx_0[2] = tFilter * t + t_dy_0 * K40;
          t_dx_1[2] = -tFilter * K40 + t_dy_0 * t;
          xi_0 = xi[3];
          t_dy_0 = rt_powf_snf(xi_0, 3.0F);
          x_0 = xi_0 * xi_0;
          tFilter = xi_0 - m2;
          t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
          t_dx_0[3] = tFilter * t + t_dy_0 * K40;
          t_dx_1[3] = -tFilter * K40 + t_dy_0 * t;
          pl_3fC1hwr1(t_dx_0, t_dx_1, &t_Dist, &t2, &t1, &t0);
          PubIfDecisionLSM_MDL_B.A3_h[i] = t_Dist;
          PubIfDecisionLSM_MDL_B.A2_k[i] = t2;
          PubIfDecisionLSM_MDL_B.A1_n[i] = t1;
          PubIfDecisionLSM_MDL_B.A0_o3[i] = t0;
          PubIfDecisionLSM_MDL_B.LineConf[i] =
            PubIfDecisionLSM_MDL_B.UnitDelay57[i];
          PubIfDecisionLSM_MDL_B.LineReliable[i] =
            PubIfDecisionLSM_MDL_B.UnitDelay37[i];
          PubIfDecisionLSM_MDL_B.Range_a[i] = fmaxf(5.0F,
            PubIfDecisionLSM_MDL_B.UnitDelay4[i]);
        }
      }
    }
  }

  if (isodd) {
    PubIfDecisionLSM_MDL_B.Avail_time_m[0] = 0.0F;
    PubIfDecisionLSM_MDL_B.Avail_time_m[1] = PubIfDecisionLSM_MDL_B.UnitDelay61
      [0] + t_Psi;
    PubIfDecisionLSM_MDL_B.Avail_time_m[2] = PubIfDecisionLSM_MDL_B.UnitDelay61
      [1] + t_Psi;
    PubIfDecisionLSM_MDL_B.Avail_time_m[3] = PubIfDecisionLSM_MDL_B.UnitDelay61
      [2] + t_Psi;
    PubIfDecisionLSM_MDL_B.Avail_dis_n[0] = 0.0F;
    PubIfDecisionLSM_MDL_B.Avail_dis_n[1] = t_Psi * *rtu_vxvRefMs +
      PubIfDecisionLSM_MDL_B.UnitDelay60[0];
    PubIfDecisionLSM_MDL_B.Avail_dis_n[2] = t_Psi * *rtu_vxvRefMs +
      PubIfDecisionLSM_MDL_B.UnitDelay60[1];
    PubIfDecisionLSM_MDL_B.Avail_dis_n[3] = t_Psi * *rtu_vxvRefMs +
      PubIfDecisionLSM_MDL_B.UnitDelay60[2];
  } else if (RightOffset_b) {
    PubIfDecisionLSM_MDL_B.Avail_time_m[0] = PubIfDecisionLSM_MDL_B.UnitDelay61
      [1] + t_Psi;
    PubIfDecisionLSM_MDL_B.Avail_time_m[1] = PubIfDecisionLSM_MDL_B.UnitDelay61
      [2] + t_Psi;
    PubIfDecisionLSM_MDL_B.Avail_time_m[2] = PubIfDecisionLSM_MDL_B.UnitDelay61
      [3] + t_Psi;
    PubIfDecisionLSM_MDL_B.Avail_time_m[3] = 0.0F;
    PubIfDecisionLSM_MDL_B.Avail_dis_n[0] = t_Psi * *rtu_vxvRefMs +
      PubIfDecisionLSM_MDL_B.UnitDelay60[1];
    PubIfDecisionLSM_MDL_B.Avail_dis_n[1] = t_Psi * *rtu_vxvRefMs +
      PubIfDecisionLSM_MDL_B.UnitDelay60[2];
    PubIfDecisionLSM_MDL_B.Avail_dis_n[2] = t_Psi * *rtu_vxvRefMs +
      PubIfDecisionLSM_MDL_B.UnitDelay60[3];
    PubIfDecisionLSM_MDL_B.Avail_dis_n[3] = 0.0F;
  } else {
    for (i = 0; i < 4; i++) {
      if (PubIfDecisionLSM_MDL_B.LineConf[i] > 0) {
        t_Dist = fmaxf(15.0F, 5.0F * *rtu_vxvRefMs);
        xi[0] = 0.05F * t_Dist;
        xi[1] = 0.6F * t_Dist;
        xi[2] = 0.8F * t_Dist;
        xi[3] = t_Dist;
        xi_0 = xi[0];
        x[0] = rt_powf_snf(xi_0, 3.0F);
        t_dy[0] = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        TmpX[0] = rt_powf_snf(tFilter, 3.0F);
        RefA0_3 = tFilter * tFilter;
        t_dx[0] = tFilter;
        xi_0 = xi[1];
        x[1] = rt_powf_snf(xi_0, 3.0F);
        t_dy[1] = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        TmpX[1] = rt_powf_snf(tFilter, 3.0F);
        t = tFilter * tFilter;
        t_dx[1] = tFilter;
        xi_0 = xi[2];
        x[2] = rt_powf_snf(xi_0, 3.0F);
        t_dy[2] = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        TmpX[2] = rt_powf_snf(tFilter, 3.0F);
        y3 = tFilter * tFilter;
        t_dx[2] = tFilter;
        xi_0 = xi[3];
        x[3] = rt_powf_snf(xi_0, 3.0F);
        t_dy[3] = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        TmpX[3] = rt_powf_snf(tFilter, 3.0F);
        x_0 = tFilter * tFilter;
        t_dx[3] = tFilter;
        t_Dist = PubIfDecisionLSM_MDL_B.A3_h[i];
        t2 = PubIfDecisionLSM_MDL_B.A2_k[i];
        t1 = PubIfDecisionLSM_MDL_B.A1_n[i];
        t0 = PubIfDecisionLSM_MDL_B.A0_o3[i];
        xi_0 = PubIfDecisionLSM_MDL_B.UnitDelay9[i];
        t_dy_0 = PubIfDecisionLSM_MDL_B.UnitDelay8[i];
        K40 = PubIfDecisionLSM_MDL_B.UnitDelay7[i];
        tFilter = PubIfDecisionLSM_MDL_B.UnitDelay5[i];
        t_dx_1[0] = (((t_Dist * TmpX[0] + t2 * RefA0_3) + t1 * t_dx[0]) + t0) -
          (((xi_0 * x[0] + t_dy_0 * t_dy[0]) + K40 * xi[0]) + tFilter);
        t_dx_1[1] = (((t_Dist * TmpX[1] + t2 * t) + t1 * t_dx[1]) + t0) -
          (((xi_0 * x[1] + t_dy_0 * t_dy[1]) + K40 * xi[1]) + tFilter);
        t_dx_1[2] = (((t_Dist * TmpX[2] + t2 * y3) + t1 * t_dx[2]) + t0) -
          (((xi_0 * x[2] + t_dy_0 * t_dy[2]) + K40 * xi[2]) + tFilter);
        t_dx_1[3] = (((t_Dist * TmpX[3] + t2 * x_0) + t1 * t_dx[3]) + t0) -
          (((xi_0 * x[3] + t_dy_0 * t_dy[3]) + K40 * xi[3]) + tFilter);
        t = std_0jbjRmL9(t_dx_1);
        if (t < y2) {
          PubIfDecisionLSM_MDL_B.Avail_time_m[i] =
            PubIfDecisionLSM_MDL_B.UnitDelay61[i] + t_Psi;
          PubIfDecisionLSM_MDL_B.Avail_dis_n[i] = t_Psi * *rtu_vxvRefMs +
            PubIfDecisionLSM_MDL_B.UnitDelay60[i];
        } else {
          PubIfDecisionLSM_MDL_B.Avail_time_m[i] = 0.0F;
          PubIfDecisionLSM_MDL_B.Avail_dis_n[i] = 0.0F;
        }
      } else {
        if (PubIfDecisionLSM_MDL_B.LineConf[i] == 0) {
          PubIfDecisionLSM_MDL_B.Avail_time_m[i] = 0.0F;
          PubIfDecisionLSM_MDL_B.Avail_dis_n[i] = 0.0F;
        }
      }
    }
  }

  for (i_0 = 0; i_0 < 4; i_0++) {
    t_dy[i_0] = PubIfDecisionLSM_MDL_B.Avail_time_m[i_0];
  }

  minimum2_8ItySNSj(t_dy, 10.0F, PubIfDecisionLSM_MDL_B.Avail_time_m);
  for (i_0 = 0; i_0 < 4; i_0++) {
    t_dy[i_0] = PubIfDecisionLSM_MDL_B.Avail_dis_n[i_0];
  }

  minimum2_8ItySNSj(t_dy, 100.0F, PubIfDecisionLSM_MDL_B.Avail_dis_n);
  if ((isodd || RightOffset_b) &&
      (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_g[1] == 0))
  {
    PubIfDecisionLSM_MDL_B.A3_h[1] = PubIfDecisionLSM_MDL_B.A3_h[2];
    PubIfDecisionLSM_MDL_B.A2_k[1] = PubIfDecisionLSM_MDL_B.A2_k[2];
    PubIfDecisionLSM_MDL_B.A1_n[1] = PubIfDecisionLSM_MDL_B.A1_n[2];
    PubIfDecisionLSM_MDL_B.A0_o3[1] = sqrtf(PubIfDecisionLSM_MDL_B.A1_n[2] *
      PubIfDecisionLSM_MDL_B.A1_n[2] + 1.0F) * Line_std_idx_1 +
      PubIfDecisionLSM_MDL_B.A0_o3[2];
    PubIfDecisionLSM_MDL_B.LineConf[1] = PubIfDecisionLSM_MDL_B.LineConf[2];
    PubIfDecisionLSM_MDL_B.LineReliable[1] =
      PubIfDecisionLSM_MDL_B.LineReliable[2];
    PubIfDecisionLSM_MDL_B.Range_a[1] = PubIfDecisionLSM_MDL_B.Range_a[2];
  } else {
    if ((isodd || RightOffset_b) &&
        (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_g[2] == 0))
    {
      PubIfDecisionLSM_MDL_B.A3_h[2] = PubIfDecisionLSM_MDL_B.A3_h[1];
      PubIfDecisionLSM_MDL_B.A2_k[2] = PubIfDecisionLSM_MDL_B.A2_k[1];
      PubIfDecisionLSM_MDL_B.A1_n[2] = PubIfDecisionLSM_MDL_B.A1_n[1];
      PubIfDecisionLSM_MDL_B.A0_o3[2] = PubIfDecisionLSM_MDL_B.A0_o3[1] - sqrtf
        (PubIfDecisionLSM_MDL_B.A1_n[1] * PubIfDecisionLSM_MDL_B.A1_n[1] + 1.0F)
        * Line_std_idx_1;
      PubIfDecisionLSM_MDL_B.LineConf[2] = PubIfDecisionLSM_MDL_B.LineConf[1];
      PubIfDecisionLSM_MDL_B.LineReliable[2] =
        PubIfDecisionLSM_MDL_B.LineReliable[1];
      PubIfDecisionLSM_MDL_B.Range_a[2] = PubIfDecisionLSM_MDL_B.Range_a[1];
    }
  }

  /* FunctionCaller: '<S4>/Function Caller6' */
  PubIfDecisionLSM_MDL_f(rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Line_C0,
    rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Line_C1, rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
    LRE_Line_C2, rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Line_C3,
    rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_View_Range_Start, rtu_EQ4_LRE->
    EQ4_LRE_ELEM[0].LRE_View_Range_End,
    &PubIfDecisionLSM_MDL_B.FunctionCaller6_o1,
    &PubIfDecisionLSM_MDL_B.FunctionCaller6_o2,
    &PubIfDecisionLSM_MDL_B.FunctionCaller6_o3,
    &PubIfDecisionLSM_MDL_B.FunctionCaller6_o4, &PubIfDecisionLSM_MDL_B.Rmin_l,
    &PubIfDecisionLSM_MDL_B.Rmax_a);

  /* FunctionCaller: '<S4>/Function Caller7' */
  PubIfDecisionLSM_MDL_f(rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Line_C0,
    rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Line_C1, rtu_EQ4_LRE->EQ4_LRE_ELEM[1].
    LRE_Line_C2, rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Line_C3,
    rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_View_Range_Start, rtu_EQ4_LRE->
    EQ4_LRE_ELEM[1].LRE_View_Range_End,
    &PubIfDecisionLSM_MDL_B.FunctionCaller7_o1,
    &PubIfDecisionLSM_MDL_B.FunctionCaller7_o2,
    &PubIfDecisionLSM_MDL_B.FunctionCaller7_o3,
    &PubIfDecisionLSM_MDL_B.FunctionCaller7_o4, &PubIfDecisionLSM_MDL_B.Rmin_h,
    &PubIfDecisionLSM_MDL_B.Rmax_ar);

  /* MATLAB Function: '<S4>/LRELine' */
  PubIfDecisionLSM_MDL_B.LRE1Conf = 0U;
  PubIfDecisionLSM_MDL_B.LRE1C0 = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE1C1 = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE1C2 = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE1C3 = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE1DxMin = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE1DxMax = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE1Reliable = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE2Conf = 0U;
  PubIfDecisionLSM_MDL_B.LRE2C0 = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE2C1 = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE2C2 = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE2C3 = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE2DxMin = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE2DxMax = 0.0F;
  PubIfDecisionLSM_MDL_B.LRE2Reliable = 0.0F;
  if (rtu_EQ4_LRE->EQ4_LRE_HDR.LRE_Count == 2) {
    if (rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Side == 1) {
      PubIfDecisionLSM_MDL_B.LRE1Conf = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
        LRE_Availability_State;
      PubIfDecisionLSM_MDL_B.LRE1C0 = PubIfDecisionLSM_MDL_B.FunctionCaller6_o1;
      PubIfDecisionLSM_MDL_B.LRE1C1 = PubIfDecisionLSM_MDL_B.FunctionCaller6_o2;
      PubIfDecisionLSM_MDL_B.LRE1C2 = PubIfDecisionLSM_MDL_B.FunctionCaller6_o3;
      PubIfDecisionLSM_MDL_B.LRE1C3 = PubIfDecisionLSM_MDL_B.FunctionCaller6_o4;
      PubIfDecisionLSM_MDL_B.LRE1DxMin = PubIfDecisionLSM_MDL_B.Rmin_l;
      PubIfDecisionLSM_MDL_B.LRE1DxMax = PubIfDecisionLSM_MDL_B.Rmax_a;
      PubIfDecisionLSM_MDL_B.LRE1Reliable = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
        LRE_Confidence;
    } else {
      if (rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Side == 2) {
        PubIfDecisionLSM_MDL_B.LRE2Conf = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
          LRE_Availability_State;
        PubIfDecisionLSM_MDL_B.LRE2C0 =
          PubIfDecisionLSM_MDL_B.FunctionCaller6_o1;
        PubIfDecisionLSM_MDL_B.LRE2C1 =
          PubIfDecisionLSM_MDL_B.FunctionCaller6_o2;
        PubIfDecisionLSM_MDL_B.LRE2C2 =
          PubIfDecisionLSM_MDL_B.FunctionCaller6_o3;
        PubIfDecisionLSM_MDL_B.LRE2C3 =
          PubIfDecisionLSM_MDL_B.FunctionCaller6_o4;
        PubIfDecisionLSM_MDL_B.LRE2DxMin = PubIfDecisionLSM_MDL_B.Rmin_l;
        PubIfDecisionLSM_MDL_B.LRE2DxMax = PubIfDecisionLSM_MDL_B.Rmax_a;
        PubIfDecisionLSM_MDL_B.LRE2Reliable = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
          LRE_Confidence;
      }
    }

    if (rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Side == 1) {
      PubIfDecisionLSM_MDL_B.LRE1Conf = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].
        LRE_Availability_State;
      PubIfDecisionLSM_MDL_B.LRE1C0 = PubIfDecisionLSM_MDL_B.FunctionCaller7_o1;
      PubIfDecisionLSM_MDL_B.LRE1C1 = PubIfDecisionLSM_MDL_B.FunctionCaller7_o2;
      PubIfDecisionLSM_MDL_B.LRE1C2 = PubIfDecisionLSM_MDL_B.FunctionCaller7_o3;
      PubIfDecisionLSM_MDL_B.LRE1C3 = PubIfDecisionLSM_MDL_B.FunctionCaller7_o4;
      PubIfDecisionLSM_MDL_B.LRE1DxMin = PubIfDecisionLSM_MDL_B.Rmin_h;
      PubIfDecisionLSM_MDL_B.LRE1DxMax = PubIfDecisionLSM_MDL_B.Rmax_ar;
      PubIfDecisionLSM_MDL_B.LRE1Reliable = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].
        LRE_Confidence;
    } else {
      if (rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Side == 2) {
        PubIfDecisionLSM_MDL_B.LRE2Conf = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].
          LRE_Availability_State;
        PubIfDecisionLSM_MDL_B.LRE2C0 =
          PubIfDecisionLSM_MDL_B.FunctionCaller7_o1;
        PubIfDecisionLSM_MDL_B.LRE2C1 =
          PubIfDecisionLSM_MDL_B.FunctionCaller7_o2;
        PubIfDecisionLSM_MDL_B.LRE2C2 =
          PubIfDecisionLSM_MDL_B.FunctionCaller7_o3;
        PubIfDecisionLSM_MDL_B.LRE2C3 =
          PubIfDecisionLSM_MDL_B.FunctionCaller7_o4;
        PubIfDecisionLSM_MDL_B.LRE2DxMin = PubIfDecisionLSM_MDL_B.Rmin_h;
        PubIfDecisionLSM_MDL_B.LRE2DxMax = PubIfDecisionLSM_MDL_B.Rmax_ar;
        PubIfDecisionLSM_MDL_B.LRE2Reliable = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].
          LRE_Confidence;
      }
    }
  }

  if (rtu_EQ4_LRE->EQ4_LRE_HDR.LRE_Count == 1) {
    if (rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Side == 1) {
      PubIfDecisionLSM_MDL_B.LRE1Conf = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
        LRE_Availability_State;
      PubIfDecisionLSM_MDL_B.LRE1C0 = PubIfDecisionLSM_MDL_B.FunctionCaller6_o1;
      PubIfDecisionLSM_MDL_B.LRE1C1 = PubIfDecisionLSM_MDL_B.FunctionCaller6_o2;
      PubIfDecisionLSM_MDL_B.LRE1C2 = PubIfDecisionLSM_MDL_B.FunctionCaller6_o3;
      PubIfDecisionLSM_MDL_B.LRE1C3 = PubIfDecisionLSM_MDL_B.FunctionCaller6_o4;
      PubIfDecisionLSM_MDL_B.LRE1DxMin = PubIfDecisionLSM_MDL_B.Rmin_l;
      PubIfDecisionLSM_MDL_B.LRE1DxMax = PubIfDecisionLSM_MDL_B.Rmax_a;
      PubIfDecisionLSM_MDL_B.LRE1Reliable = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
        LRE_Confidence;
    } else {
      if (rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Side == 2) {
        PubIfDecisionLSM_MDL_B.LRE2Conf = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
          LRE_Availability_State;
        PubIfDecisionLSM_MDL_B.LRE2C0 =
          PubIfDecisionLSM_MDL_B.FunctionCaller6_o1;
        PubIfDecisionLSM_MDL_B.LRE2C1 =
          PubIfDecisionLSM_MDL_B.FunctionCaller6_o2;
        PubIfDecisionLSM_MDL_B.LRE2C2 =
          PubIfDecisionLSM_MDL_B.FunctionCaller6_o3;
        PubIfDecisionLSM_MDL_B.LRE2C3 =
          PubIfDecisionLSM_MDL_B.FunctionCaller6_o4;
        PubIfDecisionLSM_MDL_B.LRE2DxMin = PubIfDecisionLSM_MDL_B.Rmin_l;
        PubIfDecisionLSM_MDL_B.LRE2DxMax = PubIfDecisionLSM_MDL_B.Rmax_a;
        PubIfDecisionLSM_MDL_B.LRE2Reliable = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
          LRE_Confidence;
      }
    }
  }

  /* End of MATLAB Function: '<S4>/LRELine' */

  /* UnitDelay: '<S7>/Unit Delay68' */
  PubIfDecisionLSM_MDL_B.UnitDelay68_f =
    PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_j;

  /* RelationalOperator: '<S7>/Relational Operator1' */
  PubIfDecisionLSM_MDL_B.RelationalOperator1_d =
    (rtu_EQ4_LRE->EQ4_LRE_HDR.LRE_Sync_ID !=
     PubIfDecisionLSM_MDL_B.UnitDelay68_f);

  /* SignalConversion generated from: '<S59>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter4'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2_c[0] =
    PubIfDecisionLSM_MDL_B.LRE1Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2_c[1] =
    PubIfDecisionLSM_MDL_B.LRE2Conf;

  /* SignalConversion generated from: '<S59>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter4'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3[0] =
    PubIfDecisionLSM_MDL_B.LRE1Reliable;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3[1] =
    PubIfDecisionLSM_MDL_B.LRE2Reliable;

  /* SignalConversion generated from: '<S59>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter4'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4[0] =
    PubIfDecisionLSM_MDL_B.LRE1C3;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4[1] =
    PubIfDecisionLSM_MDL_B.LRE2C3;

  /* SignalConversion generated from: '<S59>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter4'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_k[0] =
    PubIfDecisionLSM_MDL_B.LRE1C2;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_k[1] =
    PubIfDecisionLSM_MDL_B.LRE2C2;

  /* SignalConversion generated from: '<S59>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter4'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_b[0] =
    PubIfDecisionLSM_MDL_B.LRE1C1;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_b[1] =
    PubIfDecisionLSM_MDL_B.LRE2C1;

  /* SignalConversion generated from: '<S59>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter4'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_k[0] =
    PubIfDecisionLSM_MDL_B.LRE1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_k[1] =
    PubIfDecisionLSM_MDL_B.LRE2C0;

  /* SignalConversion generated from: '<S59>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VisLineFilter4'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_c[0] =
    PubIfDecisionLSM_MDL_B.LRE1DxMax;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_c[1] =
    PubIfDecisionLSM_MDL_B.LRE2DxMax;

  /* MATLAB Function: '<S17>/VisLineFilter4' incorporates:
   *  Constant: '<S17>/Constant4'
   */
  t_Psi = 0.02F;
  Update = PubIfDecisionLSM_MDL_B.RelationalOperator1_d;
  m2 = LSM_dDeltaX;
  RefA0_3 = LSM_dDeltaY;
  t = LSM_CosOfPsi;
  K40 = LSM_SinOfsi;

  /* UnitDelay: '<S17>/Unit Delay23' */
  PubIfDecisionLSM_MDL_B.UnitDelay23[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay23_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay38' */
  PubIfDecisionLSM_MDL_B.UnitDelay38[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay38_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay22' */
  PubIfDecisionLSM_MDL_B.UnitDelay22[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay22_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay21' */
  PubIfDecisionLSM_MDL_B.UnitDelay21[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay21_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay20' */
  PubIfDecisionLSM_MDL_B.UnitDelay20[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay20_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay19' */
  PubIfDecisionLSM_MDL_B.UnitDelay19[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay19_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay18' */
  PubIfDecisionLSM_MDL_B.UnitDelay18[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay18_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay17' */
  PubIfDecisionLSM_MDL_B.UnitDelay17[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay17_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay63' */
  PubIfDecisionLSM_MDL_B.UnitDelay63[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay63_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay62' */
  PubIfDecisionLSM_MDL_B.UnitDelay62[0] =
    PubIfDecisionLSM_MDL_DW.UnitDelay62_DSTATE[0];

  /* UnitDelay: '<S17>/Unit Delay23' */
  PubIfDecisionLSM_MDL_B.UnitDelay23[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay23_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay38' */
  PubIfDecisionLSM_MDL_B.UnitDelay38[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay38_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay22' */
  PubIfDecisionLSM_MDL_B.UnitDelay22[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay22_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay21' */
  PubIfDecisionLSM_MDL_B.UnitDelay21[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay21_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay20' */
  PubIfDecisionLSM_MDL_B.UnitDelay20[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay20_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay19' */
  PubIfDecisionLSM_MDL_B.UnitDelay19[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay19_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay18' */
  PubIfDecisionLSM_MDL_B.UnitDelay18[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay18_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay17' */
  PubIfDecisionLSM_MDL_B.UnitDelay17[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay17_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay63' */
  PubIfDecisionLSM_MDL_B.UnitDelay63[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay63_DSTATE[1];

  /* UnitDelay: '<S17>/Unit Delay62' */
  PubIfDecisionLSM_MDL_B.UnitDelay62[1] =
    PubIfDecisionLSM_MDL_DW.UnitDelay62_DSTATE[1];

  /* MATLAB Function: '<S17>/VisLineFilter4' */
  PubIfDecisionLSM_MDL_B.Avail_time[0] = PubIfDecisionLSM_MDL_B.UnitDelay63[0];
  PubIfDecisionLSM_MDL_B.Avail_time[1] = PubIfDecisionLSM_MDL_B.UnitDelay63[1];
  PubIfDecisionLSM_MDL_B.Avail_dis[0] = PubIfDecisionLSM_MDL_B.UnitDelay62[0];
  PubIfDecisionLSM_MDL_B.Avail_dis[1] = PubIfDecisionLSM_MDL_B.UnitDelay62[1];
  for (i = 0; i < 2; i++) {
    if ((PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2_c[i] > 0) &&
        Update) {
      PubIfDecisionLSM_MDL_B.EdgeConf[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2_c[i];
      PubIfDecisionLSM_MDL_B.EdgeReliable[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3[i];
      PubIfDecisionLSM_MDL_B.EdgeA3[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4[i];
      PubIfDecisionLSM_MDL_B.EdgeA2[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_k[i];
      PubIfDecisionLSM_MDL_B.EdgeA1[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_b[i];
      PubIfDecisionLSM_MDL_B.EdgeA0[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport7_k[i];
      PubIfDecisionLSM_MDL_B.EdgeRange[i] =
        PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport8_c[i];
      PubIfDecisionLSM_MDL_B.EdgetLost[i] = 0.0F;
    } else {
      PubIfDecisionLSM_MDL_B.EdgetLost[i] = fminf
        (PubIfDecisionLSM_MDL_B.UnitDelay17[i] + t_Psi, 10.0F);
      if ((PubIfDecisionLSM_MDL_B.UnitDelay23[i] > 0) &&
          (PubIfDecisionLSM_MDL_B.EdgetLost[i] < 0.3)) {
        xi[0] = 0.5F * *rtu_vxvRefMs;
        xi[1] = 0.5F * *rtu_vxvRefMs + 0.25F *
          PubIfDecisionLSM_MDL_B.UnitDelay18[i];
        xi[2] = 0.5F * *rtu_vxvRefMs + 0.5F *
          PubIfDecisionLSM_MDL_B.UnitDelay18[i];
        xi[3] = 0.5F * *rtu_vxvRefMs + PubIfDecisionLSM_MDL_B.UnitDelay18[i];
        t_Dist = PubIfDecisionLSM_MDL_B.UnitDelay22[i];
        t2 = PubIfDecisionLSM_MDL_B.UnitDelay21[i];
        t1 = PubIfDecisionLSM_MDL_B.UnitDelay20[i];
        t0 = PubIfDecisionLSM_MDL_B.UnitDelay19[i];
        xi_0 = xi[0];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        TmpX[0] = tFilter * t + t_dy_0 * K40;
        tFilter = -tFilter * K40 + t_dy_0 * t;
        t_dx[0] = tFilter;
        xi_0 = xi[1];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        TmpX[1] = tFilter * t + t_dy_0 * K40;
        tFilter = -tFilter * K40 + t_dy_0 * t;
        t_dx[1] = tFilter;
        xi_0 = xi[2];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        TmpX[2] = tFilter * t + t_dy_0 * K40;
        tFilter = -tFilter * K40 + t_dy_0 * t;
        t_dx[2] = tFilter;
        xi_0 = xi[3];
        t_dy_0 = rt_powf_snf(xi_0, 3.0F);
        x_0 = xi_0 * xi_0;
        tFilter = xi_0 - m2;
        t_dy_0 = (((t_Dist * t_dy_0 + t2 * x_0) + t1 * xi_0) + t0) - RefA0_3;
        TmpX[3] = tFilter * t + t_dy_0 * K40;
        tFilter = -tFilter * K40 + t_dy_0 * t;
        t_dx[3] = tFilter;
        t_Dist = rt_powf_snf(TmpX[0], 3.0F);
        t2 = rt_powf_snf(TmpX[1], 3.0F);
        t1 = rt_powf_snf(TmpX[2], 3.0F);
        t0 = rt_powf_snf(TmpX[3], 3.0F);
        MatrixA[0] = t_Dist;
        MatrixA[4] = TmpX[0] * TmpX[0];
        MatrixA[8] = TmpX[0];
        MatrixA[12] = 1.0F;
        MatrixA[1] = t2;
        MatrixA[5] = TmpX[1] * TmpX[1];
        MatrixA[9] = TmpX[1];
        MatrixA[13] = 1.0F;
        MatrixA[2] = t1;
        MatrixA[6] = TmpX[2] * TmpX[2];
        MatrixA[10] = TmpX[2];
        MatrixA[14] = 1.0F;
        MatrixA[3] = t0;
        MatrixA[7] = TmpX[3] * TmpX[3];
        MatrixA[11] = TmpX[3];
        MatrixA[15] = 1.0F;
        memcpy(&A[0], &MatrixA[0], sizeof(real32_T) << 4U);
        xzgetrf_qoSwvruO(A, ipiv, &info);
        y3 = A[0];
        isodd = false;
        y3 *= A[5];
        if (ipiv[0] > 1) {
          isodd = true;
        }

        y3 *= A[10];
        if (ipiv[1] > 2) {
          isodd = !isodd;
        }

        y3 *= A[15];
        if (ipiv[2] > 3) {
          isodd = !isodd;
        }

        if (isodd) {
          y3 = -y3;
        }

        if (y3 == 0.0F) {
          t_Dist = 0.0F;
          t2 = 0.0F;
          t1 = 0.0F;
          t0 = 0.0F;
        } else {
          TmpX[0] = t_dx[0];
          TmpX[1] = t_dx[1];
          TmpX[2] = t_dx[2];
          TmpX[3] = t_dx[3];
          mldivide_bDfh1YFq(MatrixA, TmpX);
          t_Dist = TmpX[0];
          t2 = TmpX[1];
          t1 = TmpX[2];
          t0 = TmpX[3];
        }

        PubIfDecisionLSM_MDL_B.EdgeA3[i] = t_Dist;
        PubIfDecisionLSM_MDL_B.EdgeA2[i] = t2;
        PubIfDecisionLSM_MDL_B.EdgeA1[i] = t1;
        PubIfDecisionLSM_MDL_B.EdgeA0[i] = t0;
        PubIfDecisionLSM_MDL_B.EdgeConf[i] =
          PubIfDecisionLSM_MDL_B.UnitDelay23[i];
        PubIfDecisionLSM_MDL_B.EdgeReliable[i] =
          PubIfDecisionLSM_MDL_B.UnitDelay38[i];
        PubIfDecisionLSM_MDL_B.EdgeRange[i] =
          PubIfDecisionLSM_MDL_B.UnitDelay18[i] - 0.25F * *rtu_vxvRefMs * t_Psi;
        if (PubIfDecisionLSM_MDL_B.EdgeRange[i] < 5.0F) {
          PubIfDecisionLSM_MDL_B.EdgeConf[i] = 0U;
        }
      } else {
        PubIfDecisionLSM_MDL_B.EdgeConf[i] = 0U;
        PubIfDecisionLSM_MDL_B.EdgeReliable[i] = 0.0F;
        PubIfDecisionLSM_MDL_B.EdgeA3[i] = 0.0F;
        PubIfDecisionLSM_MDL_B.EdgeA2[i] = 0.0F;
        PubIfDecisionLSM_MDL_B.EdgeA1[i] = 0.0F;
        PubIfDecisionLSM_MDL_B.EdgeA0[i] = 0.0F;
        PubIfDecisionLSM_MDL_B.EdgeRange[i] = 0.0F;
      }
    }
  }

  for (i = 0; i < 2; i++) {
    if (PubIfDecisionLSM_MDL_B.EdgeConf[i] > 0) {
      t_Dist = fmaxf(15.0F, 3.0F * *rtu_vxvRefMs);
      xi[0] = 0.05F * t_Dist;
      xi[1] = 0.6F * t_Dist;
      xi[2] = 0.8F * t_Dist;
      xi[3] = t_Dist;
      xi_0 = xi[0];
      x[0] = rt_powf_snf(xi_0, 3.0F);
      TmpX[0] = xi_0 * xi_0;
      tFilter = xi_0 - m2;
      y2 = rt_powf_snf(tFilter, 3.0F);
      t_dy[0] = tFilter * tFilter;
      t_dx[0] = tFilter;
      xi_0 = xi[1];
      x[1] = rt_powf_snf(xi_0, 3.0F);
      TmpX[1] = xi_0 * xi_0;
      tFilter = xi_0 - m2;
      Line_std_idx_1 = rt_powf_snf(tFilter, 3.0F);
      t_dy[1] = tFilter * tFilter;
      t_dx[1] = tFilter;
      xi_0 = xi[2];
      x[2] = rt_powf_snf(xi_0, 3.0F);
      TmpX[2] = xi_0 * xi_0;
      tFilter = xi_0 - m2;
      RefA0_3 = rt_powf_snf(tFilter, 3.0F);
      t_dy[2] = tFilter * tFilter;
      t_dx[2] = tFilter;
      xi_0 = xi[3];
      x[3] = rt_powf_snf(xi_0, 3.0F);
      TmpX[3] = xi_0 * xi_0;
      tFilter = xi_0 - m2;
      y3 = rt_powf_snf(tFilter, 3.0F);
      t_dy[3] = tFilter * tFilter;
      t_dx[3] = tFilter;
      t_Dist = PubIfDecisionLSM_MDL_B.EdgeA3[i];
      t2 = PubIfDecisionLSM_MDL_B.EdgeA2[i];
      t1 = PubIfDecisionLSM_MDL_B.EdgeA1[i];
      t0 = PubIfDecisionLSM_MDL_B.EdgeA0[i];
      xi_0 = PubIfDecisionLSM_MDL_B.UnitDelay22[i];
      t_dy_0 = PubIfDecisionLSM_MDL_B.UnitDelay21[i];
      K40 = PubIfDecisionLSM_MDL_B.UnitDelay20[i];
      tFilter = PubIfDecisionLSM_MDL_B.UnitDelay19[i];
      t = y2;
      t = (((t_Dist * t + t2 * t_dy[0]) + t1 * t_dx[0]) + t0) - (((xi_0 * x[0] +
        t_dy_0 * TmpX[0]) + K40 * xi[0]) + tFilter);
      y2 = t;
      t = Line_std_idx_1;
      t = (((t_Dist * t + t2 * t_dy[1]) + t1 * t_dx[1]) + t0) - (((xi_0 * x[1] +
        t_dy_0 * TmpX[1]) + K40 * xi[1]) + tFilter);
      Line_std_idx_1 = t;
      t = RefA0_3;
      t = (((t_Dist * t + t2 * t_dy[2]) + t1 * t_dx[2]) + t0) - (((xi_0 * x[2] +
        t_dy_0 * TmpX[2]) + K40 * xi[2]) + tFilter);
      RefA0_3 = t;
      t = y3;
      t = (((t_Dist * t + t2 * t_dy[3]) + t1 * t_dx[3]) + t0) - (((xi_0 * x[3] +
        t_dy_0 * TmpX[3]) + K40 * xi[3]) + tFilter);
      y3 = t;
      K40 = y2;
      K40 += Line_std_idx_1;
      K40 += RefA0_3;
      K40 += y3;
      K40 /= 4.0F;
      TmpX[0] = fabsf(y2 - K40);
      TmpX[1] = fabsf(Line_std_idx_1 - K40);
      TmpX[2] = fabsf(RefA0_3 - K40);
      TmpX[3] = fabsf(y3 - K40);
      RefA0_3 = 1.29246971E-26F;
      y2 = TmpX[0];
      if (y2 > 1.29246971E-26F) {
        K40 = 1.0F;
        RefA0_3 = y2;
      } else {
        t = y2 / 1.29246971E-26F;
        K40 = t * t;
      }

      y2 = TmpX[1];
      if (y2 > RefA0_3) {
        t = RefA0_3 / y2;
        K40 = K40 * t * t + 1.0F;
        RefA0_3 = y2;
      } else {
        t = y2 / RefA0_3;
        K40 += t * t;
      }

      y2 = TmpX[2];
      if (y2 > RefA0_3) {
        t = RefA0_3 / y2;
        K40 = K40 * t * t + 1.0F;
        RefA0_3 = y2;
      } else {
        t = y2 / RefA0_3;
        K40 += t * t;
      }

      y2 = TmpX[3];
      if (y2 > RefA0_3) {
        t = RefA0_3 / y2;
        K40 = K40 * t * t + 1.0F;
        RefA0_3 = y2;
      } else {
        t = y2 / RefA0_3;
        K40 += t * t;
      }

      K40 = RefA0_3 * sqrtf(K40);
      K40 /= 1.73205078F;
      if (K40 < 0.15) {
        PubIfDecisionLSM_MDL_B.Avail_time[i] =
          PubIfDecisionLSM_MDL_B.UnitDelay63[i] + t_Psi;
        PubIfDecisionLSM_MDL_B.Avail_dis[i] = t_Psi * *rtu_vxvRefMs +
          PubIfDecisionLSM_MDL_B.UnitDelay62[i];
      } else {
        PubIfDecisionLSM_MDL_B.Avail_time[i] = 0.0F;
        PubIfDecisionLSM_MDL_B.Avail_dis[i] = 0.0F;
      }
    } else {
      if (PubIfDecisionLSM_MDL_B.EdgeConf[i] == 0) {
        PubIfDecisionLSM_MDL_B.Avail_time[i] = 0.0F;
        PubIfDecisionLSM_MDL_B.Avail_dis[i] = 0.0F;
      }
    }
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion1' */
  PubIfDecisionLSM_MDL_B.DataTypeConversion1[0] =
    (PubIfDecisionLSM_MDL_B.EdgeConf[0] != 0);
  PubIfDecisionLSM_MDL_B.DataTypeConversion1[1] =
    (PubIfDecisionLSM_MDL_B.EdgeConf[1] != 0);

  /* Lookup_n-D: '<S17>/D1' */
  PubIfDecisionLSM_MDL_B.D1 = look1_iflf_binlxpw(*rtu_vxvRefMs, rtCP_D1_bp01Data,
    rtCP_D1_tableData, 2U);

  /* UnitDelay: '<S17>/Unit Delay26' */
  PubIfDecisionLSM_MDL_B.UnitDelay26 =
    PubIfDecisionLSM_MDL_DW.UnitDelay26_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay25' */
  PubIfDecisionLSM_MDL_B.UnitDelay25 =
    PubIfDecisionLSM_MDL_DW.UnitDelay25_DSTATE;

  /* MATLAB Function: '<S17>/ESSLineCalc1' */
  PubIfDecisionLSM_MDL_B.ESSLineValid = false;
  t_Psi = 0.0F;
  m2 = 0.0F;
  RefA0_3 = 0.0F;
  t = 0.0F;
  y2 = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSLeLineValid = false;
  PubIfDecisionLSM_MDL_B.ESSLeLineA3 = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSLeLineA2 = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSLeLineA1 = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSLeLineA0 = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSLeRange = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSRiLineValid = false;
  PubIfDecisionLSM_MDL_B.ESSRiLineA3 = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSRiLineA2 = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSRiLineA1 = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSRiLineA0 = 0.0F;
  PubIfDecisionLSM_MDL_B.ESSRiRange = 0.0F;
  MoveID = PubIfDecisionLSM_MDL_B.UnitDelay26;
  PubIfDecisionLSM_MDL_B.Lock_b = PubIfDecisionLSM_MDL_B.UnitDelay25;
  if ((rtu_VSM_HMI->ESSSts == 0) || (rtu_VSM_HMI->ESSSts == 1) ||
      (rtu_VSM_HMI->ESSSts == 2) || (rtu_VSM_HMI->ESSSts == 6)) {
    MoveID = 0;
    PubIfDecisionLSM_MDL_B.Lock_b = false;
    if ((PubIfDecisionLSM_MDL_B.LineConf[1] > 0) &&
        (PubIfDecisionLSM_MDL_B.LineConf[0] > 0) &&
        (PubIfDecisionLSM_MDL_B.Range_a[1] > PubIfDecisionLSM_MDL_B.D1) &&
        (PubIfDecisionLSM_MDL_B.Range_a[0] > PubIfDecisionLSM_MDL_B.D1) &&
        ((PubIfDecisionLSM_MDL_B.tLost_c[1] < 0.15) ||
         (PubIfDecisionLSM_MDL_B.tLost_c[0] < 0.15)) && LSM_LeftLineTypeEN) {
      if (PubIfDecisionLSM_MDL_B.DataTypeConversion1[0]) {
        t_dx[0] = 0.1F * PubIfDecisionLSM_MDL_B.D1;
        t_dx[1] = 0.3F * PubIfDecisionLSM_MDL_B.D1;
        t_dx[2] = 0.6F * PubIfDecisionLSM_MDL_B.D1;
        t_dx[3] = PubIfDecisionLSM_MDL_B.D1;
        K40 = 0.25F * PubIfDecisionLSM_MDL_B.EdgeA3[0];
        x[0] = rt_powf_snf(t_dx[0], 3.0F);
        x[1] = rt_powf_snf(t_dx[1], 3.0F);
        x[2] = rt_powf_snf(t_dx[2], 3.0F);
        x[3] = rt_powf_snf(t_dx[3], 3.0F);
        y3 = 0.5F * PubIfDecisionLSM_MDL_B.EdgeA2[0];
        TmpX[0] = rt_powf_snf(t_dx[0], 3.0F);
        TmpX[1] = rt_powf_snf(t_dx[1], 3.0F);
        TmpX[2] = rt_powf_snf(t_dx[2], 3.0F);
        TmpX[3] = rt_powf_snf(t_dx[3], 3.0F);
        power_J3qcWgcR(t_dx, t_dx_1);
        power_J3qcWgcR(t_dx, t_dy);
        t_Dist = PubIfDecisionLSM_MDL_B.EdgeA1[0];
        t2 = PubIfDecisionLSM_MDL_B.EdgeA0[0];
        t1 = PubIfDecisionLSM_MDL_B.A3_h[0];
        t0 = PubIfDecisionLSM_MDL_B.A2_k[0];
        xi_0 = PubIfDecisionLSM_MDL_B.A1_n[0];
        t_dy_0 = PubIfDecisionLSM_MDL_B.A0_o3[0];
        tFilter = t_dx[0];
        t_dx_0[0] = (((K40 * x[0] + y3 * t_dx_1[0]) + t_Dist * tFilter) + t2) -
          (((t1 * TmpX[0] + t0 * t_dy[0]) + xi_0 * tFilter) + t_dy_0);
        tFilter = t_dx[1];
        t_dx_0[1] = (((K40 * x[1] + y3 * t_dx_1[1]) + t_Dist * tFilter) + t2) -
          (((t1 * TmpX[1] + t0 * t_dy[1]) + xi_0 * tFilter) + t_dy_0);
        tFilter = t_dx[2];
        t_dx_0[2] = (((K40 * x[2] + y3 * t_dx_1[2]) + t_Dist * tFilter) + t2) -
          (((t1 * TmpX[2] + t0 * t_dy[2]) + xi_0 * tFilter) + t_dy_0);
        tFilter = t_dx[3];
        t_dx_0[3] = (((K40 * x[3] + y3 * t_dx_1[3]) + t_Dist * tFilter) + t2) -
          (((t1 * TmpX[3] + t0 * t_dy[3]) + xi_0 * tFilter) + t_dy_0);
        if (PubIfDecisionLSM_MDL_minimum(t_dx_0) > 0.0F) {
          PubIfDecisionLSM_MDL_B.ESSLeLineValid = true;
          PubIfDecisionLSM_MDL_B.ESSLeLineA3 = (PubIfDecisionLSM_MDL_B.A3_h[1] +
            PubIfDecisionLSM_MDL_B.A3_h[0]) * 0.5F;
          PubIfDecisionLSM_MDL_B.ESSLeLineA2 = (PubIfDecisionLSM_MDL_B.A2_k[1] +
            PubIfDecisionLSM_MDL_B.A2_k[0]) * 0.5F;
          PubIfDecisionLSM_MDL_B.ESSLeLineA1 = (PubIfDecisionLSM_MDL_B.A1_n[1] +
            PubIfDecisionLSM_MDL_B.A1_n[0]) * 0.5F;
          PubIfDecisionLSM_MDL_B.ESSLeLineA0 = (PubIfDecisionLSM_MDL_B.A0_o3[1]
            + PubIfDecisionLSM_MDL_B.A0_o3[0]) * 0.5F;
          PubIfDecisionLSM_MDL_B.ESSLeRange = (PubIfDecisionLSM_MDL_B.Range_a[1]
            + PubIfDecisionLSM_MDL_B.Range_a[0]) * 0.5F;
        }
      } else {
        PubIfDecisionLSM_MDL_B.ESSLeLineValid = true;
        PubIfDecisionLSM_MDL_B.ESSLeLineA3 = (PubIfDecisionLSM_MDL_B.A3_h[1] +
          PubIfDecisionLSM_MDL_B.A3_h[0]) * 0.5F;
        PubIfDecisionLSM_MDL_B.ESSLeLineA2 = (PubIfDecisionLSM_MDL_B.A2_k[1] +
          PubIfDecisionLSM_MDL_B.A2_k[0]) * 0.5F;
        PubIfDecisionLSM_MDL_B.ESSLeLineA1 = (PubIfDecisionLSM_MDL_B.A1_n[1] +
          PubIfDecisionLSM_MDL_B.A1_n[0]) * 0.5F;
        PubIfDecisionLSM_MDL_B.ESSLeLineA0 = (PubIfDecisionLSM_MDL_B.A0_o3[1] +
          PubIfDecisionLSM_MDL_B.A0_o3[0]) * 0.5F;
        PubIfDecisionLSM_MDL_B.ESSLeRange = (PubIfDecisionLSM_MDL_B.Range_a[1] +
          PubIfDecisionLSM_MDL_B.Range_a[0]) * 0.5F;
      }
    }

    if ((PubIfDecisionLSM_MDL_B.LineConf[3] > 0) &&
        (PubIfDecisionLSM_MDL_B.LineConf[2] > 0) &&
        (PubIfDecisionLSM_MDL_B.Range_a[3] > PubIfDecisionLSM_MDL_B.D1) &&
        (PubIfDecisionLSM_MDL_B.Range_a[2] > PubIfDecisionLSM_MDL_B.D1) &&
        ((PubIfDecisionLSM_MDL_B.tLost_c[3] < 0.15) ||
         (PubIfDecisionLSM_MDL_B.tLost_c[2] < 0.15)) && LSM_RightLineTypeEN) {
      if (PubIfDecisionLSM_MDL_B.DataTypeConversion1[1]) {
        t_dx[0] = 0.1F * PubIfDecisionLSM_MDL_B.D1;
        t_dx[1] = 0.3F * PubIfDecisionLSM_MDL_B.D1;
        t_dx[2] = 0.6F * PubIfDecisionLSM_MDL_B.D1;
        t_dx[3] = PubIfDecisionLSM_MDL_B.D1;
        K40 = 0.25F * PubIfDecisionLSM_MDL_B.EdgeA3[1];
        x[0] = rt_powf_snf(t_dx[0], 3.0F);
        x[1] = rt_powf_snf(t_dx[1], 3.0F);
        x[2] = rt_powf_snf(t_dx[2], 3.0F);
        x[3] = rt_powf_snf(t_dx[3], 3.0F);
        y3 = 0.5F * PubIfDecisionLSM_MDL_B.EdgeA2[1];
        TmpX[0] = rt_powf_snf(t_dx[0], 3.0F);
        TmpX[1] = rt_powf_snf(t_dx[1], 3.0F);
        TmpX[2] = rt_powf_snf(t_dx[2], 3.0F);
        TmpX[3] = rt_powf_snf(t_dx[3], 3.0F);
        power_J3qcWgcR(t_dx, t_dx_1);
        power_J3qcWgcR(t_dx, t_dy);
        t_Dist = PubIfDecisionLSM_MDL_B.A3_h[3];
        t2 = PubIfDecisionLSM_MDL_B.A2_k[3];
        t1 = PubIfDecisionLSM_MDL_B.A1_n[3];
        t0 = PubIfDecisionLSM_MDL_B.A0_o3[3];
        xi_0 = PubIfDecisionLSM_MDL_B.EdgeA1[1];
        t_dy_0 = PubIfDecisionLSM_MDL_B.EdgeA0[1];
        tFilter = t_dx[0];
        t_dx_0[0] = (((t_Dist * TmpX[0] + t2 * t_dx_1[0]) + t1 * tFilter) + t0)
          - (((K40 * x[0] + y3 * t_dy[0]) + xi_0 * tFilter) + t_dy_0);
        tFilter = t_dx[1];
        t_dx_0[1] = (((t_Dist * TmpX[1] + t2 * t_dx_1[1]) + t1 * tFilter) + t0)
          - (((K40 * x[1] + y3 * t_dy[1]) + xi_0 * tFilter) + t_dy_0);
        tFilter = t_dx[2];
        t_dx_0[2] = (((t_Dist * TmpX[2] + t2 * t_dx_1[2]) + t1 * tFilter) + t0)
          - (((K40 * x[2] + y3 * t_dy[2]) + xi_0 * tFilter) + t_dy_0);
        tFilter = t_dx[3];
        t_dx_0[3] = (((t_Dist * TmpX[3] + t2 * t_dx_1[3]) + t1 * tFilter) + t0)
          - (((K40 * x[3] + y3 * t_dy[3]) + xi_0 * tFilter) + t_dy_0);
        if (PubIfDecisionLSM_MDL_minimum(t_dx_0) > 0.0F) {
          PubIfDecisionLSM_MDL_B.ESSRiLineValid = true;
          PubIfDecisionLSM_MDL_B.ESSRiLineA3 = (PubIfDecisionLSM_MDL_B.A3_h[3] +
            PubIfDecisionLSM_MDL_B.A3_h[2]) * 0.5F;
          PubIfDecisionLSM_MDL_B.ESSRiLineA2 = (PubIfDecisionLSM_MDL_B.A2_k[3] +
            PubIfDecisionLSM_MDL_B.A2_k[2]) * 0.5F;
          PubIfDecisionLSM_MDL_B.ESSRiLineA1 = (PubIfDecisionLSM_MDL_B.A1_n[3] +
            PubIfDecisionLSM_MDL_B.A1_n[2]) * 0.5F;
          PubIfDecisionLSM_MDL_B.ESSRiLineA0 = (PubIfDecisionLSM_MDL_B.A0_o3[3]
            + PubIfDecisionLSM_MDL_B.A0_o3[2]) * 0.5F;
          PubIfDecisionLSM_MDL_B.ESSRiRange = (PubIfDecisionLSM_MDL_B.Range_a[3]
            + PubIfDecisionLSM_MDL_B.Range_a[2]) * 0.5F;
        }
      } else {
        PubIfDecisionLSM_MDL_B.ESSRiLineValid = true;
        PubIfDecisionLSM_MDL_B.ESSRiLineA3 = (PubIfDecisionLSM_MDL_B.A3_h[3] +
          PubIfDecisionLSM_MDL_B.A3_h[2]) * 0.5F;
        PubIfDecisionLSM_MDL_B.ESSRiLineA2 = (PubIfDecisionLSM_MDL_B.A2_k[3] +
          PubIfDecisionLSM_MDL_B.A2_k[2]) * 0.5F;
        PubIfDecisionLSM_MDL_B.ESSRiLineA1 = (PubIfDecisionLSM_MDL_B.A1_n[3] +
          PubIfDecisionLSM_MDL_B.A1_n[2]) * 0.5F;
        PubIfDecisionLSM_MDL_B.ESSRiLineA0 = (PubIfDecisionLSM_MDL_B.A0_o3[3] +
          PubIfDecisionLSM_MDL_B.A0_o3[2]) * 0.5F;
        PubIfDecisionLSM_MDL_B.ESSRiRange = (PubIfDecisionLSM_MDL_B.Range_a[3] +
          PubIfDecisionLSM_MDL_B.Range_a[2]) * 0.5F;
      }
    }
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    if (rtu_VSM_HMI->ESSSts == 4) {
      if (PubIfDecisionLSM_MDL_B.UnitDelay24 != 4) {
        i = PubIfDecisionLSM_MDL_B.UnitDelay26 - 1;
        if (i < -128) {
          i = -128;
        }

        MoveID = (int8_T)i;
      }

      if (PubIfDecisionLSM_MDL_B.RelationalOperator) {
        i = MoveID + 1;
        if (i > 127) {
          i = 127;
        }

        MoveID = (int8_T)i;
      }

      if (PubIfDecisionLSM_MDL_B.RelationalOperator_i) {
        i = MoveID - 1;
        if (i < -128) {
          i = -128;
        }

        MoveID = (int8_T)i;
      }

      Update = ((MoveID >= 1) || (MoveID <= -2));
      if (!Update) {
        i = MoveID + 2;
        if (i > 127) {
          i = 127;
        }

        if (PubIfDecisionLSM_MDL_B.LineConf[i - 1] > 0) {
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          if (PubIfDecisionLSM_MDL_B.LineConf[i - 1] > 0) {
            i = MoveID + 2;
            if (i > 127) {
              i = 127;
            }

            if (PubIfDecisionLSM_MDL_B.Range_a[i - 1] > 0.8F *
                PubIfDecisionLSM_MDL_B.D1) {
              i = MoveID + 3;
              if (i > 127) {
                i = 127;
              }

              if (PubIfDecisionLSM_MDL_B.Range_a[i - 1] > 0.8F *
                  PubIfDecisionLSM_MDL_B.D1) {
                PubIfDecisionLSM_MDL_B.Lock_b = false;
                PubIfDecisionLSM_MDL_B.ESSLineValid = true;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                t_Psi = (PubIfDecisionLSM_MDL_B.A3_h[i - 1] +
                         PubIfDecisionLSM_MDL_B.A3_h[info - 1]) * 0.5F;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                m2 = (PubIfDecisionLSM_MDL_B.A2_k[i - 1] +
                      PubIfDecisionLSM_MDL_B.A2_k[info - 1]) * 0.5F;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                RefA0_3 = (PubIfDecisionLSM_MDL_B.A1_n[i - 1] +
                           PubIfDecisionLSM_MDL_B.A1_n[info - 1]) * 0.5F;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                t = (PubIfDecisionLSM_MDL_B.A0_o3[i - 1] +
                     PubIfDecisionLSM_MDL_B.A0_o3[info - 1]) * 0.5F;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                y2 = (PubIfDecisionLSM_MDL_B.Range_a[i - 1] +
                      PubIfDecisionLSM_MDL_B.Range_a[info - 1]) * 0.5F;
                PubIfDecisionLSM_MDL_B.ESSLeLineValid = true;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                PubIfDecisionLSM_MDL_B.ESSLeLineA3 =
                  (PubIfDecisionLSM_MDL_B.A3_h[i - 1] +
                   PubIfDecisionLSM_MDL_B.A3_h[info - 1]) * 0.5F;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                PubIfDecisionLSM_MDL_B.ESSLeLineA2 =
                  (PubIfDecisionLSM_MDL_B.A2_k[i - 1] +
                   PubIfDecisionLSM_MDL_B.A2_k[info - 1]) * 0.5F;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                PubIfDecisionLSM_MDL_B.ESSLeLineA1 =
                  (PubIfDecisionLSM_MDL_B.A1_n[i - 1] +
                   PubIfDecisionLSM_MDL_B.A1_n[info - 1]) * 0.5F;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                PubIfDecisionLSM_MDL_B.ESSLeLineA0 =
                  (PubIfDecisionLSM_MDL_B.A0_o3[i - 1] +
                   PubIfDecisionLSM_MDL_B.A0_o3[info - 1]) * 0.5F;
                i = MoveID + 2;
                if (i > 127) {
                  i = 127;
                }

                info = MoveID + 3;
                if (info > 127) {
                  info = 127;
                }

                PubIfDecisionLSM_MDL_B.ESSLeRange =
                  (PubIfDecisionLSM_MDL_B.Range_a[i - 1] +
                   PubIfDecisionLSM_MDL_B.Range_a[info - 1]) * 0.5F;
              } else {
                guard4 = true;
              }
            } else {
              guard4 = true;
            }
          } else {
            guard4 = true;
          }
        } else {
          guard4 = true;
        }
      }
    } else {
      if (rtu_VSM_HMI->ESSSts == 5) {
        if (PubIfDecisionLSM_MDL_B.UnitDelay24 != 5) {
          i = PubIfDecisionLSM_MDL_B.UnitDelay26 + 1;
          if (i > 127) {
            i = 127;
          }

          MoveID = (int8_T)i;
        }

        if (PubIfDecisionLSM_MDL_B.RelationalOperator) {
          i = MoveID + 1;
          if (i > 127) {
            i = 127;
          }

          MoveID = (int8_T)i;
        }

        if (PubIfDecisionLSM_MDL_B.RelationalOperator_i) {
          i = MoveID - 1;
          if (i < -128) {
            i = -128;
          }

          MoveID = (int8_T)i;
        }

        Update = ((MoveID >= 2) || (MoveID <= -1));
        if (!Update) {
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          if (PubIfDecisionLSM_MDL_B.LineConf[i - 1] > 0) {
            i = MoveID + 3;
            if (i > 127) {
              i = 127;
            }

            if (PubIfDecisionLSM_MDL_B.LineConf[i - 1] > 0) {
              i = MoveID + 2;
              if (i > 127) {
                i = 127;
              }

              if (PubIfDecisionLSM_MDL_B.Range_a[i - 1] > 0.8F *
                  PubIfDecisionLSM_MDL_B.D1) {
                i = MoveID + 3;
                if (i > 127) {
                  i = 127;
                }

                if (PubIfDecisionLSM_MDL_B.Range_a[i - 1] > 0.8F *
                    PubIfDecisionLSM_MDL_B.D1) {
                  PubIfDecisionLSM_MDL_B.Lock_b = false;
                  PubIfDecisionLSM_MDL_B.ESSLineValid = true;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  t_Psi = (PubIfDecisionLSM_MDL_B.A3_h[i - 1] +
                           PubIfDecisionLSM_MDL_B.A3_h[info - 1]) * 0.5F;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  m2 = (PubIfDecisionLSM_MDL_B.A2_k[i - 1] +
                        PubIfDecisionLSM_MDL_B.A2_k[info - 1]) * 0.5F;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  RefA0_3 = (PubIfDecisionLSM_MDL_B.A1_n[i - 1] +
                             PubIfDecisionLSM_MDL_B.A1_n[info - 1]) * 0.5F;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  t = (PubIfDecisionLSM_MDL_B.A0_o3[i - 1] +
                       PubIfDecisionLSM_MDL_B.A0_o3[info - 1]) * 0.5F;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  y2 = (PubIfDecisionLSM_MDL_B.Range_a[i - 1] +
                        PubIfDecisionLSM_MDL_B.Range_a[info - 1]) * 0.5F;
                  PubIfDecisionLSM_MDL_B.ESSRiLineValid = true;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  PubIfDecisionLSM_MDL_B.ESSRiLineA3 =
                    (PubIfDecisionLSM_MDL_B.A3_h[i - 1] +
                     PubIfDecisionLSM_MDL_B.A3_h[info - 1]) * 0.5F;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  PubIfDecisionLSM_MDL_B.ESSRiLineA2 =
                    (PubIfDecisionLSM_MDL_B.A2_k[i - 1] +
                     PubIfDecisionLSM_MDL_B.A2_k[info - 1]) * 0.5F;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  PubIfDecisionLSM_MDL_B.ESSRiLineA1 =
                    (PubIfDecisionLSM_MDL_B.A1_n[i - 1] +
                     PubIfDecisionLSM_MDL_B.A1_n[info - 1]) * 0.5F;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  PubIfDecisionLSM_MDL_B.ESSRiLineA0 =
                    (PubIfDecisionLSM_MDL_B.A0_o3[i - 1] +
                     PubIfDecisionLSM_MDL_B.A0_o3[info - 1]) * 0.5F;
                  i = MoveID + 2;
                  if (i > 127) {
                    i = 127;
                  }

                  info = MoveID + 3;
                  if (info > 127) {
                    info = 127;
                  }

                  PubIfDecisionLSM_MDL_B.ESSRiRange =
                    (PubIfDecisionLSM_MDL_B.Range_a[i - 1] +
                     PubIfDecisionLSM_MDL_B.Range_a[info - 1]) * 0.5F;
                } else {
                  guard3 = true;
                }
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }
        }
      }
    }

    if (guard4) {
      i = MoveID + 2;
      if (i > 127) {
        i = 127;
      }

      if (PubIfDecisionLSM_MDL_B.LineConf[i - 1] > 0) {
        i = MoveID + 2;
        if (i > 127) {
          i = 127;
        }

        if (PubIfDecisionLSM_MDL_B.Range_a[i - 1] > 0.8F *
            PubIfDecisionLSM_MDL_B.D1) {
          PubIfDecisionLSM_MDL_B.Lock_b = true;
          PubIfDecisionLSM_MDL_B.ESSLineValid = true;
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          t_Psi = PubIfDecisionLSM_MDL_B.A3_h[i - 1];
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          m2 = PubIfDecisionLSM_MDL_B.A2_k[i - 1];
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          RefA0_3 = PubIfDecisionLSM_MDL_B.A1_n[i - 1];
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          info = MoveID + 2;
          if (info > 127) {
            info = 127;
          }

          i_0 = MoveID + 2;
          if (i_0 > 127) {
            i_0 = 127;
          }

          t = PubIfDecisionLSM_MDL_B.A0_o3[i - 1] - sqrtf
            (PubIfDecisionLSM_MDL_B.A1_n[info - 1] *
             PubIfDecisionLSM_MDL_B.A1_n[i_0 - 1] + 1.0F) * (0.5F *
            LSM_RoadWidth1);
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          y2 = PubIfDecisionLSM_MDL_B.Range_a[i - 1];
          PubIfDecisionLSM_MDL_B.ESSLeLineValid = true;
          PubIfDecisionLSM_MDL_B.ESSLeLineA3 = t_Psi;
          PubIfDecisionLSM_MDL_B.ESSLeLineA2 = m2;
          PubIfDecisionLSM_MDL_B.ESSLeLineA1 = RefA0_3;
          PubIfDecisionLSM_MDL_B.ESSLeLineA0 = t;
          PubIfDecisionLSM_MDL_B.ESSLeRange = y2;
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    }

    if (guard3) {
      i = MoveID + 2;
      if (i > 127) {
        i = 127;
      }

      if (PubIfDecisionLSM_MDL_B.LineConf[i - 1] > 0) {
        i = MoveID + 2;
        if (i > 127) {
          i = 127;
        }

        if (PubIfDecisionLSM_MDL_B.Range_a[i - 1] > 0.8F *
            PubIfDecisionLSM_MDL_B.D1) {
          PubIfDecisionLSM_MDL_B.Lock_b = true;
          PubIfDecisionLSM_MDL_B.ESSLineValid = true;
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          t_Psi = PubIfDecisionLSM_MDL_B.A3_h[i - 1];
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          m2 = PubIfDecisionLSM_MDL_B.A2_k[i - 1];
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          RefA0_3 = PubIfDecisionLSM_MDL_B.A1_n[i - 1];
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          info = MoveID + 2;
          if (info > 127) {
            info = 127;
          }

          i_0 = MoveID + 2;
          if (i_0 > 127) {
            i_0 = 127;
          }

          t = PubIfDecisionLSM_MDL_B.A0_o3[i - 1] - sqrtf
            (PubIfDecisionLSM_MDL_B.A1_n[info - 1] *
             PubIfDecisionLSM_MDL_B.A1_n[i_0 - 1] + 1.0F) * (0.5F *
            LSM_RoadWidth1);
          i = MoveID + 2;
          if (i > 127) {
            i = 127;
          }

          y2 = PubIfDecisionLSM_MDL_B.Range_a[i - 1];
          PubIfDecisionLSM_MDL_B.ESSRiLineValid = true;
          PubIfDecisionLSM_MDL_B.ESSRiLineA3 = t_Psi;
          PubIfDecisionLSM_MDL_B.ESSRiLineA2 = m2;
          PubIfDecisionLSM_MDL_B.ESSRiLineA1 = RefA0_3;
          PubIfDecisionLSM_MDL_B.ESSRiLineA0 = t;
          PubIfDecisionLSM_MDL_B.ESSRiRange = y2;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }

    if (guard2) {
      i = MoveID + 3;
      if (i > 127) {
        i = 127;
      }

      if (PubIfDecisionLSM_MDL_B.LineConf[i - 1] > 0) {
        i = MoveID + 3;
        if (i > 127) {
          i = 127;
        }

        if (PubIfDecisionLSM_MDL_B.Range_a[i - 1] > 0.8F *
            PubIfDecisionLSM_MDL_B.D1) {
          PubIfDecisionLSM_MDL_B.Lock_b = true;
          PubIfDecisionLSM_MDL_B.ESSLineValid = true;
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          t_Psi = PubIfDecisionLSM_MDL_B.A3_h[i - 1];
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          m2 = PubIfDecisionLSM_MDL_B.A2_k[i - 1];
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          RefA0_3 = PubIfDecisionLSM_MDL_B.A1_n[i - 1];
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          info = MoveID + 3;
          if (info > 127) {
            info = 127;
          }

          i_0 = MoveID + 3;
          if (i_0 > 127) {
            i_0 = 127;
          }

          t = sqrtf(PubIfDecisionLSM_MDL_B.A1_n[info - 1] *
                    PubIfDecisionLSM_MDL_B.A1_n[i_0 - 1] + 1.0F) * (0.5F *
            LSM_RoadWidth1) + PubIfDecisionLSM_MDL_B.A0_o3[i - 1];
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          y2 = PubIfDecisionLSM_MDL_B.Range_a[i - 1];
          PubIfDecisionLSM_MDL_B.ESSLeLineValid = true;
          PubIfDecisionLSM_MDL_B.ESSLeLineA3 = t_Psi;
          PubIfDecisionLSM_MDL_B.ESSLeLineA2 = m2;
          PubIfDecisionLSM_MDL_B.ESSLeLineA1 = RefA0_3;
          PubIfDecisionLSM_MDL_B.ESSLeLineA0 = t;
          PubIfDecisionLSM_MDL_B.ESSLeRange = y2;
        }
      }
    }

    if (guard1) {
      i = MoveID + 3;
      if (i > 127) {
        i = 127;
      }

      if (PubIfDecisionLSM_MDL_B.LineConf[i - 1] > 0) {
        i = MoveID + 3;
        if (i > 127) {
          i = 127;
        }

        if (PubIfDecisionLSM_MDL_B.Range_a[i - 1] > 0.8F *
            PubIfDecisionLSM_MDL_B.D1) {
          PubIfDecisionLSM_MDL_B.Lock_b = true;
          PubIfDecisionLSM_MDL_B.ESSLineValid = true;
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          t_Psi = PubIfDecisionLSM_MDL_B.A3_h[i - 1];
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          m2 = PubIfDecisionLSM_MDL_B.A2_k[i - 1];
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          RefA0_3 = PubIfDecisionLSM_MDL_B.A1_n[i - 1];
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          info = MoveID + 3;
          if (info > 127) {
            info = 127;
          }

          i_0 = MoveID + 3;
          if (i_0 > 127) {
            i_0 = 127;
          }

          t = sqrtf(PubIfDecisionLSM_MDL_B.A1_n[info - 1] *
                    PubIfDecisionLSM_MDL_B.A1_n[i_0 - 1] + 1.0F) * (0.5F *
            LSM_RoadWidth1) + PubIfDecisionLSM_MDL_B.A0_o3[i - 1];
          i = MoveID + 3;
          if (i > 127) {
            i = 127;
          }

          y2 = PubIfDecisionLSM_MDL_B.Range_a[i - 1];
          PubIfDecisionLSM_MDL_B.ESSRiLineValid = true;
          PubIfDecisionLSM_MDL_B.ESSRiLineA3 = t_Psi;
          PubIfDecisionLSM_MDL_B.ESSRiLineA2 = m2;
          PubIfDecisionLSM_MDL_B.ESSRiLineA1 = RefA0_3;
          PubIfDecisionLSM_MDL_B.ESSRiLineA0 = t;
          PubIfDecisionLSM_MDL_B.ESSRiRange = y2;
        }
      }
    }
  }

  PubIfDecisionLSM_MDL_B.ESSLineA3 = t_Psi;
  PubIfDecisionLSM_MDL_B.ESSLineA2 = m2;
  PubIfDecisionLSM_MDL_B.ESSLineA1 = RefA0_3;
  PubIfDecisionLSM_MDL_B.ESSLineA0 = t;
  PubIfDecisionLSM_MDL_B.ESSRange = y2;
  PubIfDecisionLSM_MDL_B.MoveID_k = MoveID;

  /* End of MATLAB Function: '<S17>/ESSLineCalc1' */

  /* BusCreator generated from: '<Root>/LSM_ESS' */
  rty_LSM_ESS->ESSLineValid = PubIfDecisionLSM_MDL_B.ESSLineValid;
  rty_LSM_ESS->ESSLineC3 = PubIfDecisionLSM_MDL_B.ESSLineA3;
  rty_LSM_ESS->ESSLineC2 = PubIfDecisionLSM_MDL_B.ESSLineA2;
  rty_LSM_ESS->ESSLineC1 = PubIfDecisionLSM_MDL_B.ESSLineA1;
  rty_LSM_ESS->ESSLineC0 = PubIfDecisionLSM_MDL_B.ESSLineA0;
  rty_LSM_ESS->ESSRange = PubIfDecisionLSM_MDL_B.ESSRange;
  rty_LSM_ESS->ESSLeLineValid = PubIfDecisionLSM_MDL_B.ESSLeLineValid;
  rty_LSM_ESS->ESSLeLineC3 = PubIfDecisionLSM_MDL_B.ESSLeLineA3;
  rty_LSM_ESS->ESSLeLineC2 = PubIfDecisionLSM_MDL_B.ESSLeLineA2;
  rty_LSM_ESS->ESSLeLineC1 = PubIfDecisionLSM_MDL_B.ESSLeLineA1;
  rty_LSM_ESS->ESSLeLineC0 = PubIfDecisionLSM_MDL_B.ESSLeLineA0;
  rty_LSM_ESS->ESSLeRange = PubIfDecisionLSM_MDL_B.ESSLeRange;
  rty_LSM_ESS->ESSRiLineValid = PubIfDecisionLSM_MDL_B.ESSRiLineValid;
  rty_LSM_ESS->ESSRiLineC3 = PubIfDecisionLSM_MDL_B.ESSRiLineA3;
  rty_LSM_ESS->ESSRiLineC2 = PubIfDecisionLSM_MDL_B.ESSRiLineA2;
  rty_LSM_ESS->ESSRiLineC1 = PubIfDecisionLSM_MDL_B.ESSRiLineA1;
  rty_LSM_ESS->ESSRiLineC0 = PubIfDecisionLSM_MDL_B.ESSRiLineA0;
  rty_LSM_ESS->ESSRiRange = PubIfDecisionLSM_MDL_B.ESSRiRange;

  /* UnitDelay: '<S54>/Unit Delay37' */
  PubIfDecisionLSM_MDL_B.UnitDelay37_d =
    PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE_b;

  /* UnitDelay: '<S54>/Unit Delay36' */
  PubIfDecisionLSM_MDL_B.UnitDelay36_a =
    PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE_nv;

  /* MATLAB Function: '<S54>/RoadWidthCalc1' */
  i = PubIfDecisionLSM_MDL_B.UnitDelay37_d;
  qY = i - 1U;
  if (qY > (uint32_T)i) {
    qY = 0U;
  }

  i = (int32_T)qY;
  LConf = (uint8_T)i;
  i = PubIfDecisionLSM_MDL_B.UnitDelay36_a;
  qY = i - 1U;
  if (qY > (uint32_T)i) {
    qY = 0U;
  }

  i = (int32_T)qY;
  RConf = (uint8_T)i;
  if ((rtu_RFM_LINE_L1->eLineType != 2) || (rtu_RFM_LINE_L1->eLineType != 4) ||
      (rtu_RFM_LINE_L1->eLineType != 6)) {
    LConf = 10U;
  }

  if ((rtu_RFM_LINE_R1->eLineType != 2) || (rtu_RFM_LINE_R1->eLineType != 4) ||
      (rtu_RFM_LINE_R1->eLineType != 6)) {
    RConf = 10U;
  }

  PubIfDecisionLSM_MDL_B.LeftEn_e = (LConf <= 0);
  PubIfDecisionLSM_MDL_B.RightEn_n = (RConf <= 0);
  PubIfDecisionLSM_MDL_B.Cnt1 = LConf;
  PubIfDecisionLSM_MDL_B.Cnt2 = RConf;

  /* End of MATLAB Function: '<S54>/RoadWidthCalc1' */

  /* UnitDelay: '<S17>/Unit Delay39' */
  PubIfDecisionLSM_MDL_B.UnitDelay39 =
    PubIfDecisionLSM_MDL_DW.UnitDelay39_DSTATE;

  /* RelationalOperator: '<S74>/Compare' incorporates:
   *  Constant: '<S74>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare = (rtu_RFM_ROAD->i_mapvalid == ((uint8_T)3U));

  /* RelationalOperator: '<S73>/Compare' incorporates:
   *  Constant: '<S73>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_m = (rtu_RFM_TSR->RoadType > ((uint8_T)0U));

  /* Logic: '<S68>/Logical Operator6' */
  PubIfDecisionLSM_MDL_B.LogicalOperator6 = (PubIfDecisionLSM_MDL_B.Compare &&
    PubIfDecisionLSM_MDL_B.Compare_m);

  /* UnitDelay: '<S155>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_d =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_e;

  /* MATLAB Function: '<S155>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dDisStart,
    PubIfDecisionLSM_MDL_B.UnitDelay_d,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_i);

  /* RelationalOperator: '<S137>/Compare' incorporates:
   *  Constant: '<S137>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_j =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_i.y == ((uint8_T)0U));

  /* UnitDelay: '<S156>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_l =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j3;

  /* MATLAB Function: '<S156>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_l,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_d);

  /* RelationalOperator: '<S138>/Compare' incorporates:
   *  Constant: '<S138>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_c =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_d.y > ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator33' */
  PubIfDecisionLSM_MDL_B.LogicalOperator33 = (PubIfDecisionLSM_MDL_B.Compare_j &&
    PubIfDecisionLSM_MDL_B.Compare_c);

  /* RelationalOperator: '<S135>/Compare' incorporates:
   *  Constant: '<S135>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_b = (rtu_RFM_INTERSEC_ALERT->f_start_distance <
    50.0F);

  /* RelationalOperator: '<S136>/Compare' incorporates:
   *  Constant: '<S136>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_jn = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)2U));

  /* Logic: '<S69>/Logical Operator32' */
  PubIfDecisionLSM_MDL_B.rExitStub4_takeover =
    (PubIfDecisionLSM_MDL_B.LogicalOperator33 &&
     PubIfDecisionLSM_MDL_B.Compare_b && PubIfDecisionLSM_MDL_B.Compare_jn);

  /* UnitDelay: '<S158>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_m =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_b;

  /* MATLAB Function: '<S158>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dDisStart,
    PubIfDecisionLSM_MDL_B.UnitDelay_m,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_f);

  /* RelationalOperator: '<S143>/Compare' incorporates:
   *  Constant: '<S143>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_h =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_f.y == ((uint8_T)0U));

  /* UnitDelay: '<S157>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_ll =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_a;

  /* MATLAB Function: '<S157>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_ll,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_h);

  /* RelationalOperator: '<S141>/Compare' incorporates:
   *  Constant: '<S141>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_k =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_h.y > ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator35' */
  PubIfDecisionLSM_MDL_B.LogicalOperator35 = (PubIfDecisionLSM_MDL_B.Compare_h &&
    PubIfDecisionLSM_MDL_B.Compare_k);

  /* RelationalOperator: '<S139>/Compare' incorporates:
   *  Constant: '<S139>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_f = (rtu_RFM_INTERSEC_ALERT->f_start_distance <
    50.0F);

  /* RelationalOperator: '<S140>/Compare' incorporates:
   *  Constant: '<S140>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ci = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)1U));

  /* Logic: '<S69>/Logical Operator34' */
  PubIfDecisionLSM_MDL_B.lExitStub4_takeover =
    (PubIfDecisionLSM_MDL_B.LogicalOperator35 &&
     PubIfDecisionLSM_MDL_B.Compare_f && PubIfDecisionLSM_MDL_B.Compare_ci);

  /* RelationalOperator: '<S144>/Compare' incorporates:
   *  Constant: '<S144>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_o = (rtu_RFM_CURRENT_LANE->f_vanish_pt_dis <
    50.0F);

  /* RelationalOperator: '<S146>/Compare' incorporates:
   *  Constant: '<S146>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_g = (rtu_RFM_CURRENT_LANE->f_vanish_pt_dis <
    50.0F);

  /* MATLAB Function: '<S68>/MATLAB Function' */
  PubIfDecisionLSM_MDL_B.PilotSts = 0U;
  if (PubIfDecisionLSM_MDL_B.LogicalOperator6) {
    if (rtu_RFM_TSR->RoadType == 1) {
      PubIfDecisionLSM_MDL_B.PilotSts = 1U;
    }

    if (rtu_RFM_TSR->RoadType == 2) {
      PubIfDecisionLSM_MDL_B.PilotSts = 4U;
    }

    if ((rtu_RFM_TSR->RoadType != 1) && (rtu_RFM_TSR->RoadType != 2)) {
      PubIfDecisionLSM_MDL_B.PilotSts = 2U;
    }

    if (PubIfDecisionLSM_MDL_B.rExitStub4_takeover ||
        PubIfDecisionLSM_MDL_B.lExitStub4_takeover ||
        PubIfDecisionLSM_MDL_B.Compare_o || PubIfDecisionLSM_MDL_B.Compare_g) {
      PubIfDecisionLSM_MDL_B.PilotSts = 3U;
    }
  }

  /* End of MATLAB Function: '<S68>/MATLAB Function' */

  /* Switch: '<S17>/Switch4' incorporates:
   *  Constant: '<S17>/Constant10'
   *  Constant: '<S17>/Constant9'
   */
  if (P_LSM_NOH_Switch > 0.0) {
    *rty_LSM_PilotSts = ((uint8_T)2U);
  } else {
    *rty_LSM_PilotSts = PubIfDecisionLSM_MDL_B.PilotSts;
  }

  /* End of Switch: '<S17>/Switch4' */

  /* RelationalOperator: '<S142>/Compare' incorporates:
   *  Constant: '<S142>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_he = (rtu_RFM_INTERSEC_ALERT->b_is_available ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S147>/Compare' incorporates:
   *  Constant: '<S147>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_l = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S148>/Compare' incorporates:
   *  Constant: '<S148>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_bp = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_p = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)5U));

  /* Logic: '<S69>/Logical Operator9' */
  PubIfDecisionLSM_MDL_B.LogicalOperator9 = (PubIfDecisionLSM_MDL_B.Compare_l ||
    PubIfDecisionLSM_MDL_B.Compare_bp || PubIfDecisionLSM_MDL_B.Compare_p);

  /* Logic: '<S69>/Logical Operator8' */
  PubIfDecisionLSM_MDL_B.StubValid = (PubIfDecisionLSM_MDL_B.Compare_he &&
    PubIfDecisionLSM_MDL_B.LogicalOperator9);

  /* RelationalOperator: '<S87>/Compare' incorporates:
   *  Constant: '<S87>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_lr = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S69>/Relational Operator' */
  PubIfDecisionLSM_MDL_B.RelationalOperator_l = (rtu_RFM_ROAD->nLaneID <
    rtu_RFM_REC_LANES->i_rec_lanes[0]);

  /* DataTypeConversion: '<S17>/Data Type Conversion3' */
  PubIfDecisionLSM_MDL_B.DataTypeConversion3 = (rtu_RFM_TSR->VehInRightmostLane
    != 0);

  /* RelationalOperator: '<S98>/Compare' incorporates:
   *  Constant: '<S98>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_i = (PubIfDecisionLSM_MDL_B.DataTypeConversion3
    != true);

  /* Logic: '<S69>/Logical Operator2' */
  PubIfDecisionLSM_MDL_B.LogicalOperator2 =
    (PubIfDecisionLSM_MDL_B.RelationalOperator_l ||
     PubIfDecisionLSM_MDL_B.Compare_i);

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_py = (rtu_RFM_LINE_EXIT_CL->bIsLineExist <
    ((uint8_T)2U));

  /* Logic: '<S69>/Logical Operator3' */
  PubIfDecisionLSM_MDL_B.RightStub = (PubIfDecisionLSM_MDL_B.Compare_lr &&
    PubIfDecisionLSM_MDL_B.LogicalOperator2 && PubIfDecisionLSM_MDL_B.Compare_py);

  /* RelationalOperator: '<S103>/Compare' incorporates:
   *  Constant: '<S103>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_oe = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S69>/Relational Operator1' */
  PubIfDecisionLSM_MDL_B.RelationalOperator1_n = (rtu_RFM_ROAD->nLaneID >
    rtu_RFM_REC_LANES->i_rec_lanes[0]);

  /* DataTypeConversion: '<S17>/Data Type Conversion2' */
  PubIfDecisionLSM_MDL_B.DataTypeConversion2 = (rtu_RFM_TSR->VehInLeftmostLane
    != 0);

  /* SignalConversion: '<S17>/Signal Copy8' */
  LSM_LeftMostLane = PubIfDecisionLSM_MDL_B.DataTypeConversion2;

  /* RelationalOperator: '<S105>/Compare' incorporates:
   *  Constant: '<S105>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_p2 = (LSM_LeftMostLane != true);

  /* Logic: '<S69>/Logical Operator14' */
  PubIfDecisionLSM_MDL_B.LogicalOperator14 =
    (PubIfDecisionLSM_MDL_B.RelationalOperator1_n ||
     PubIfDecisionLSM_MDL_B.Compare_p2);

  /* RelationalOperator: '<S109>/Compare' incorporates:
   *  Constant: '<S109>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_n = (rtu_RFM_LINE_EXIT_CL->bIsLineExist <
    ((uint8_T)2U));

  /* Logic: '<S69>/Logical Operator20' */
  PubIfDecisionLSM_MDL_B.LeftStub = (PubIfDecisionLSM_MDL_B.Compare_oe &&
    PubIfDecisionLSM_MDL_B.LogicalOperator14 && PubIfDecisionLSM_MDL_B.Compare_n);

  /* RelationalOperator: '<S118>/Compare' incorporates:
   *  Constant: '<S118>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_jy = (rtu_RFM_INTERSEC_ALERT->b_is_available ==
    ((uint8_T)0U));

  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ie = (rtu_RFM_INTERSEC_ALERT->b_is_available ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S121>/Compare' incorporates:
   *  Constant: '<S121>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_cn = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)0U));

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_a = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)3U));

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_hy = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)4U));

  /* Logic: '<S69>/Logical Operator28' */
  PubIfDecisionLSM_MDL_B.LogicalOperator28 = (PubIfDecisionLSM_MDL_B.Compare_ie &&
    PubIfDecisionLSM_MDL_B.Compare_cn && PubIfDecisionLSM_MDL_B.Compare_a &&
    PubIfDecisionLSM_MDL_B.Compare_hy);

  /* Logic: '<S69>/Logical Operator27' */
  PubIfDecisionLSM_MDL_B.CruiseValid = (PubIfDecisionLSM_MDL_B.Compare_jy ||
    PubIfDecisionLSM_MDL_B.LogicalOperator28);

  /* RelationalOperator: '<S69>/Relational Operator7' */
  PubIfDecisionLSM_MDL_B.RelationalOperator7 = (rtu_RFM_ROAD->nLaneID >
    rtu_RFM_REC_LANES->i_rec_lanes[0]);

  /* RelationalOperator: '<S112>/Compare' incorporates:
   *  Constant: '<S112>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_j5 = (rtu_RFM_REC_LANES->i_rec_lanes[0] !=
    ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator21' */
  PubIfDecisionLSM_MDL_B.TurnLeft = (PubIfDecisionLSM_MDL_B.RelationalOperator7 &&
    PubIfDecisionLSM_MDL_B.Compare_j5);

  /* RelationalOperator: '<S69>/Relational Operator8' */
  PubIfDecisionLSM_MDL_B.RelationalOperator8 = (rtu_RFM_ROAD->nLaneID <
    rtu_RFM_REC_LANES->i_rec_lanes[0]);

  /* RelationalOperator: '<S113>/Compare' incorporates:
   *  Constant: '<S113>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_mx = (rtu_RFM_REC_LANES->i_rec_lanes[0] !=
    ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator24' */
  PubIfDecisionLSM_MDL_B.TurnLeft_e =
    (PubIfDecisionLSM_MDL_B.RelationalOperator8 &&
     PubIfDecisionLSM_MDL_B.Compare_mx);

  /* DataTypeConversion: '<S17>/Data Type Conversion' */
  PubIfDecisionLSM_MDL_B.DataTypeConversion_m =
    (rtu_RFM_CURRENT_LANE->b_vanish_valid != 0);

  /* RelationalOperator: '<S88>/Compare' incorporates:
   *  Constant: '<S88>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_nn = ((int32_T)
    PubIfDecisionLSM_MDL_B.DataTypeConversion_m > (int32_T)false);

  /* RelationalOperator: '<S83>/Compare' incorporates:
   *  Constant: '<S83>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_pt = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)5U));

  /* RelationalOperator: '<S81>/Compare' incorporates:
   *  Constant: '<S81>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_cq =
    (PubIfDecisionLSM_MDL_B.DataTypeConversion_m == false);

  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ob = (rtu_RFM_INTERSEC_ALERT->f_start_distance >
    50.0F);

  /* Logic: '<S69>/Logical Operator10' */
  PubIfDecisionLSM_MDL_B.EntryStub1 = (PubIfDecisionLSM_MDL_B.Compare_pt &&
    PubIfDecisionLSM_MDL_B.Compare_cq && PubIfDecisionLSM_MDL_B.Compare_ob);

  /* RelationalOperator: '<S85>/Compare' incorporates:
   *  Constant: '<S85>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_d = (rtu_RFM_LINE_EXIT_CL->bIsLineExist ==
    ((uint8_T)2U));

  /* UnitDelay: '<S150>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_c =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_h;

  /* MATLAB Function: '<S150>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dDisStart,
    PubIfDecisionLSM_MDL_B.UnitDelay_c,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14);

  /* RelationalOperator: '<S93>/Compare' incorporates:
   *  Constant: '<S93>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_nr =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14.y > ((uint8_T)0U));

  /* UnitDelay: '<S151>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_gp =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_hu;

  /* MATLAB Function: '<S151>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_gp,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_m);

  /* RelationalOperator: '<S94>/Compare' incorporates:
   *  Constant: '<S94>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_hz =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_m.y > ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator16' */
  PubIfDecisionLSM_MDL_B.LogicalOperator16 = (PubIfDecisionLSM_MDL_B.Compare_nr &&
    PubIfDecisionLSM_MDL_B.Compare_hz);

  /* RelationalOperator: '<S92>/Compare' incorporates:
   *  Constant: '<S92>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_jl = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)2U));

  /* Logic: '<S69>/Logical Operator15' */
  PubIfDecisionLSM_MDL_B.rExitStub1 = (PubIfDecisionLSM_MDL_B.Compare_d &&
    PubIfDecisionLSM_MDL_B.LogicalOperator16 &&
    PubIfDecisionLSM_MDL_B.Compare_jl);

  /* RelationalOperator: '<S91>/Compare' incorporates:
   *  Constant: '<S91>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_kf = (rtu_RFM_LINE_EXIT_CL->bIsLineExist ==
    ((uint8_T)2U));

  /* UnitDelay: '<S161>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_o =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j4;

  /* MATLAB Function: '<S161>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_o,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_p);

  /* RelationalOperator: '<S123>/Compare' incorporates:
   *  Constant: '<S123>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_if =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_p.y == ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator6' */
  PubIfDecisionLSM_MDL_B.rExitStub2 = (PubIfDecisionLSM_MDL_B.Compare_kf &&
    PubIfDecisionLSM_MDL_B.Compare_if);

  /* RelationalOperator: '<S69>/Relational Operator11' */
  PubIfDecisionLSM_MDL_B.RelationalOperator11 = (rtu_RFM_ROAD->nLaneID ==
    rtu_RFM_REC_LANES->i_rec_lanes[0]);

  /* RelationalOperator: '<S104>/Compare' incorporates:
   *  Constant: '<S104>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_nrc = (LSM_LeftMostLane == true);

  /* Logic: '<S69>/Logical Operator4' */
  PubIfDecisionLSM_MDL_B.LogicalOperator4 =
    (PubIfDecisionLSM_MDL_B.RelationalOperator11 ||
     PubIfDecisionLSM_MDL_B.Compare_nrc);

  /* RelationalOperator: '<S102>/Compare' incorporates:
   *  Constant: '<S102>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_br = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)1U));

  /* RelationalOperator: '<S120>/Compare' incorporates:
   *  Constant: '<S120>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_oi = (rtu_RFM_LINE_EXIT_CL->bIsLineExist <
    ((uint8_T)2U));

  /* Logic: '<S69>/Logical Operator5' */
  PubIfDecisionLSM_MDL_B.CruiseLeft = (PubIfDecisionLSM_MDL_B.LogicalOperator4 &&
    PubIfDecisionLSM_MDL_B.Compare_br && PubIfDecisionLSM_MDL_B.Compare_oi);

  /* RelationalOperator: '<S69>/Relational Operator9' */
  PubIfDecisionLSM_MDL_B.RelationalOperator9 = (rtu_RFM_ROAD->nLaneID ==
    rtu_RFM_REC_LANES->i_rec_lanes[0]);

  /* RelationalOperator: '<S90>/Compare' incorporates:
   *  Constant: '<S90>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_fv =
    (PubIfDecisionLSM_MDL_B.DataTypeConversion3 == true);

  /* Logic: '<S69>/Logical Operator1' */
  PubIfDecisionLSM_MDL_B.LogicalOperator1 =
    (PubIfDecisionLSM_MDL_B.RelationalOperator9 ||
     PubIfDecisionLSM_MDL_B.Compare_fv);

  /* RelationalOperator: '<S86>/Compare' incorporates:
   *  Constant: '<S86>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_km = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)2U));

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_aq = (rtu_RFM_LINE_EXIT_CL->bIsLineExist <
    ((uint8_T)2U));

  /* Logic: '<S69>/Logical Operator12' */
  PubIfDecisionLSM_MDL_B.CruiseRight = (PubIfDecisionLSM_MDL_B.LogicalOperator1 &&
    PubIfDecisionLSM_MDL_B.Compare_km && PubIfDecisionLSM_MDL_B.Compare_aq);

  /* Sum: '<S68>/Subtract' incorporates:
   *  Constant: '<S68>/Constant3'
   */
  PubIfDecisionLSM_MDL_B.Subtract = rtu_RFM_INTERSEC_ALERT->f_start_distance -
    (real32_T)((uint16_T)100U);

  /* RelationalOperator: '<S69>/Relational Operator2' */
  PubIfDecisionLSM_MDL_B.RelationalOperator2 = (rtu_RFM_ROAD->nLaneID !=
    rtu_RFM_REC_LANES->i_rec_lanes[0]);

  /* RelationalOperator: '<S69>/Relational Operator3' */
  PubIfDecisionLSM_MDL_B.RelationalOperator3 = (rtu_RFM_ROAD->nLaneID !=
    rtu_RFM_REC_LANES->i_rec_lanes[1]);

  /* RelationalOperator: '<S69>/Relational Operator4' */
  PubIfDecisionLSM_MDL_B.RelationalOperator4 = (rtu_RFM_ROAD->nLaneID !=
    rtu_RFM_REC_LANES->i_rec_lanes[2]);

  /* RelationalOperator: '<S69>/Relational Operator5' */
  PubIfDecisionLSM_MDL_B.RelationalOperator5 = (rtu_RFM_ROAD->nLaneID !=
    rtu_RFM_REC_LANES->i_rec_lanes[3]);

  /* RelationalOperator: '<S69>/Relational Operator6' */
  PubIfDecisionLSM_MDL_B.RelationalOperator6 = (rtu_RFM_ROAD->nLaneID !=
    rtu_RFM_REC_LANES->i_rec_lanes[4]);

  /* RelationalOperator: '<S69>/Relational Operator10' */
  PubIfDecisionLSM_MDL_B.RelationalOperator10 = (rtu_RFM_ROAD->nLaneID !=
    rtu_RFM_REC_LANES->i_rec_lanes[5]);

  /* RelationalOperator: '<S69>/Relational Operator12' */
  PubIfDecisionLSM_MDL_B.RelationalOperator12 = (rtu_RFM_ROAD->nLaneID !=
    rtu_RFM_REC_LANES->i_rec_lanes[6]);

  /* RelationalOperator: '<S69>/Relational Operator13' */
  PubIfDecisionLSM_MDL_B.RelationalOperator13 = (rtu_RFM_ROAD->nLaneID !=
    rtu_RFM_REC_LANES->i_rec_lanes[7]);

  /* RelationalOperator: '<S69>/Relational Operator14' incorporates:
   *  Constant: '<S69>/Constant'
   */
  PubIfDecisionLSM_MDL_B.RelationalOperator14 = (rtu_RFM_ROAD->nLaneID !=
    ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator11' */
  PubIfDecisionLSM_MDL_B.CruiseTurn =
    (PubIfDecisionLSM_MDL_B.RelationalOperator2 &&
     PubIfDecisionLSM_MDL_B.RelationalOperator3 &&
     PubIfDecisionLSM_MDL_B.RelationalOperator4 &&
     PubIfDecisionLSM_MDL_B.RelationalOperator5 &&
     PubIfDecisionLSM_MDL_B.RelationalOperator6 &&
     PubIfDecisionLSM_MDL_B.RelationalOperator10 &&
     PubIfDecisionLSM_MDL_B.RelationalOperator12 &&
     PubIfDecisionLSM_MDL_B.RelationalOperator13 &&
     PubIfDecisionLSM_MDL_B.RelationalOperator14);

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_jx = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)5U));

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_io =
    (PubIfDecisionLSM_MDL_B.DataTypeConversion_m == false);

  /* RelationalOperator: '<S124>/Compare' incorporates:
   *  Constant: '<S124>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ic = (rtu_RFM_INTERSEC_ALERT->f_start_distance <=
    50.0F);

  /* Logic: '<S69>/Logical Operator26' */
  PubIfDecisionLSM_MDL_B.EntryStub2 = (PubIfDecisionLSM_MDL_B.Compare_jx &&
    PubIfDecisionLSM_MDL_B.Compare_io && PubIfDecisionLSM_MDL_B.Compare_ic);

  /* RelationalOperator: '<S101>/Compare' incorporates:
   *  Constant: '<S101>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_fm = (rtu_RFM_LINE_EXIT_CL->bIsLineExist ==
    ((uint8_T)2U));

  /* UnitDelay: '<S162>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_i =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ea;

  /* MATLAB Function: '<S162>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dDisStart,
    PubIfDecisionLSM_MDL_B.UnitDelay_i,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_c);

  /* RelationalOperator: '<S131>/Compare' incorporates:
   *  Constant: '<S131>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_e =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_c.y > ((uint8_T)0U));

  /* UnitDelay: '<S163>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_a =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_g;

  /* MATLAB Function: '<S163>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_a,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_my);

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_or =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_my.y > ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator7' */
  PubIfDecisionLSM_MDL_B.LogicalOperator7 = (PubIfDecisionLSM_MDL_B.Compare_e &&
    PubIfDecisionLSM_MDL_B.Compare_or);

  /* RelationalOperator: '<S108>/Compare' incorporates:
   *  Constant: '<S108>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ciw = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)1U));

  /* Logic: '<S69>/Logical Operator19' */
  PubIfDecisionLSM_MDL_B.lExitStub1 = (PubIfDecisionLSM_MDL_B.Compare_fm &&
    PubIfDecisionLSM_MDL_B.LogicalOperator7 &&
    PubIfDecisionLSM_MDL_B.Compare_ciw);

  /* RelationalOperator: '<S107>/Compare' incorporates:
   *  Constant: '<S107>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ix = (rtu_RFM_LINE_EXIT_CL->bIsLineExist ==
    ((uint8_T)2U));

  /* UnitDelay: '<S164>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_lz =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_hk;

  /* MATLAB Function: '<S164>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dDisStart,
    PubIfDecisionLSM_MDL_B.UnitDelay_lz,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_ol);

  /* RelationalOperator: '<S99>/Compare' incorporates:
   *  Constant: '<S99>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_cg =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_ol.y == ((uint8_T)0U));

  /* UnitDelay: '<S165>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_f =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_l;

  /* MATLAB Function: '<S165>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_f,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_fr);

  /* RelationalOperator: '<S96>/Compare' incorporates:
   *  Constant: '<S96>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_la =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_fr.y == ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator23' */
  PubIfDecisionLSM_MDL_B.lExitStub2 = (PubIfDecisionLSM_MDL_B.Compare_ix &&
    PubIfDecisionLSM_MDL_B.Compare_cg && PubIfDecisionLSM_MDL_B.Compare_la);

  /* UnitDelay: '<S166>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_dl =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ll;

  /* MATLAB Function: '<S166>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dDisStart,
    PubIfDecisionLSM_MDL_B.UnitDelay_dl,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_d2);

  /* RelationalOperator: '<S111>/Compare' incorporates:
   *  Constant: '<S111>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_f4 =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_d2.y == ((uint8_T)0U));

  /* UnitDelay: '<S152>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_ly =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_i;

  /* MATLAB Function: '<S152>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_ly,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_o);

  /* RelationalOperator: '<S110>/Compare' incorporates:
   *  Constant: '<S110>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_iev =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_o.y > ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator22' */
  PubIfDecisionLSM_MDL_B.LogicalOperator22 = (PubIfDecisionLSM_MDL_B.Compare_f4 &&
    PubIfDecisionLSM_MDL_B.Compare_iev);

  /* RelationalOperator: '<S100>/Compare' incorporates:
   *  Constant: '<S100>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_gk = (rtu_RFM_INTERSEC_ALERT->f_start_distance >=
    50.0F);

  /* RelationalOperator: '<S106>/Compare' incorporates:
   *  Constant: '<S106>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ok = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)1U));

  /* Logic: '<S69>/Logical Operator18' */
  PubIfDecisionLSM_MDL_B.lExitStub3 = (PubIfDecisionLSM_MDL_B.LogicalOperator22 &&
    PubIfDecisionLSM_MDL_B.Compare_gk && PubIfDecisionLSM_MDL_B.Compare_ok);

  /* UnitDelay: '<S159>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_b =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_p;

  /* MATLAB Function: '<S159>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dDisStart,
    PubIfDecisionLSM_MDL_B.UnitDelay_b,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_j);

  /* RelationalOperator: '<S95>/Compare' incorporates:
   *  Constant: '<S95>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_b3 =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_j.y == ((uint8_T)0U));

  /* UnitDelay: '<S160>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_bl =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_f;

  /* MATLAB Function: '<S160>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_EXIT_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_bl,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_k);

  /* RelationalOperator: '<S97>/Compare' incorporates:
   *  Constant: '<S97>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_fy =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_k.y > ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator17' */
  PubIfDecisionLSM_MDL_B.LogicalOperator17 = (PubIfDecisionLSM_MDL_B.Compare_b3 &&
    PubIfDecisionLSM_MDL_B.Compare_fy);

  /* RelationalOperator: '<S84>/Compare' incorporates:
   *  Constant: '<S84>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ed = (rtu_RFM_INTERSEC_ALERT->f_start_distance >=
    50.0F);

  /* RelationalOperator: '<S89>/Compare' incorporates:
   *  Constant: '<S89>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_dm = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)2U));

  /* Logic: '<S69>/Logical Operator13' */
  PubIfDecisionLSM_MDL_B.rExitStub3 = (PubIfDecisionLSM_MDL_B.LogicalOperator17 &&
    PubIfDecisionLSM_MDL_B.Compare_ed && PubIfDecisionLSM_MDL_B.Compare_dm);

  /* MATLAB Function: '<S69>/MATLAB Function' */
  PubIfDecisionLSM_MDL_B.Forbid_TurnRight = false;
  PubIfDecisionLSM_MDL_B.Forbid_TurnLeft = false;
  PubIfDecisionLSM_MDL_B.OneLane = false;
  LConf = 1U;
  if (rtu_RFM_REC_LANES->i_rec_lanes_num == 1) {
    PubIfDecisionLSM_MDL_B.OneLane = ((rtu_RFM_ROAD->nLaneID ==
      rtu_RFM_REC_LANES->i_rec_lanes[0]) || PubIfDecisionLSM_MDL_B.OneLane);
  }

  if (rtu_RFM_REC_LANES->i_rec_lanes_num > 1) {
    if (rtu_RFM_REC_LANES->i_rec_lanes[0] > 1) {
      PubIfDecisionLSM_MDL_B.Forbid_TurnLeft = ((rtu_RFM_ROAD->nLaneID ==
        rtu_RFM_REC_LANES->i_rec_lanes[0]) ||
        PubIfDecisionLSM_MDL_B.Forbid_TurnLeft);
    }

    for (i = 0; i < 8; i++) {
      if (rtu_RFM_REC_LANES->i_rec_lanes[i] > 0) {
        LConf = (uint8_T)(i + 1);
      }
    }

    if (rtu_RFM_REC_LANES->i_rec_lanes[LConf - 1] == rtu_RFM_ROAD->nLaneID) {
      PubIfDecisionLSM_MDL_B.Forbid_TurnRight = true;
    }
  }

  /* End of MATLAB Function: '<S69>/MATLAB Function' */

  /* RelationalOperator: '<S117>/Compare' incorporates:
   *  Constant: '<S117>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_jt = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)5U));

  /* RelationalOperator: '<S82>/Compare' incorporates:
   *  Constant: '<S82>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_j5n = ((int32_T)
    PubIfDecisionLSM_MDL_B.DataTypeConversion_m > (int32_T)false);

  /* RelationalOperator: '<S125>/Compare' incorporates:
   *  Constant: '<S125>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_j3 = (rtu_RFM_INTERSEC_ALERT->f_start_distance >
    50.0F);

  /* Logic: '<S69>/Logical Operator25' */
  PubIfDecisionLSM_MDL_B.EntryStub3 = (PubIfDecisionLSM_MDL_B.Compare_jt &&
    PubIfDecisionLSM_MDL_B.Compare_j5n && PubIfDecisionLSM_MDL_B.Compare_j3);

  /* RelationalOperator: '<S127>/Compare' incorporates:
   *  Constant: '<S127>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_p4 = (rtu_RFM_INTERSEC_ALERT->en_direction ==
    ((uint8_T)5U));

  /* RelationalOperator: '<S126>/Compare' incorporates:
   *  Constant: '<S126>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_e2 = ((int32_T)
    PubIfDecisionLSM_MDL_B.DataTypeConversion_m > (int32_T)false);

  /* RelationalOperator: '<S128>/Compare' incorporates:
   *  Constant: '<S128>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ek = (rtu_RFM_INTERSEC_ALERT->f_start_distance <=
    50.0F);

  /* Logic: '<S69>/Logical Operator29' */
  PubIfDecisionLSM_MDL_B.EntryStub4 = (PubIfDecisionLSM_MDL_B.Compare_p4 &&
    PubIfDecisionLSM_MDL_B.Compare_e2 && PubIfDecisionLSM_MDL_B.Compare_ek);

  /* RelationalOperator: '<S129>/Compare' incorporates:
   *  Constant: '<S129>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_hx = (rtu_RFM_LINE_ENTRY_CL->bIsLineExist ==
    ((uint8_T)2U));

  /* UnitDelay: '<S153>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_a2 =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_gq;

  /* MATLAB Function: '<S153>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_ENTRY_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_a2,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_l);

  /* RelationalOperator: '<S130>/Compare' incorporates:
   *  Constant: '<S130>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_fyv =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_l.y > ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator30' */
  PubIfDecisionLSM_MDL_B.EntryStub5 = (PubIfDecisionLSM_MDL_B.Compare_hx &&
    PubIfDecisionLSM_MDL_B.Compare_fyv);

  /* RelationalOperator: '<S132>/Compare' incorporates:
   *  Constant: '<S132>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ju = (rtu_RFM_LINE_ENTRY_CL->bIsLineExist ==
    ((uint8_T)2U));

  /* UnitDelay: '<S154>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_k =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_lw;

  /* MATLAB Function: '<S154>/MATLAB Function14' */
  PubIfDecisionLSM_MDL_MATLABFunction14(&rtu_RFM_LINE_ENTRY_CL->dC0V,
    PubIfDecisionLSM_MDL_B.UnitDelay_k,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_ma);

  /* RelationalOperator: '<S133>/Compare' incorporates:
   *  Constant: '<S133>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_fs =
    (PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_ma.y == ((uint8_T)0U));

  /* Logic: '<S69>/Logical Operator31' */
  PubIfDecisionLSM_MDL_B.EntryStub6 = (PubIfDecisionLSM_MDL_B.Compare_ju &&
    PubIfDecisionLSM_MDL_B.Compare_fs);

  /* RelationalOperator: '<S134>/Compare' incorporates:
   *  Constant: '<S134>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_kd = ((int32_T)
    PubIfDecisionLSM_MDL_B.DataTypeConversion_m > (int32_T)false);

  /* RelationalOperator: '<S145>/Compare' incorporates:
   *  Constant: '<S145>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_oh = (rtu_RFM_CURRENT_LANE->f_vanish_pt_dis >=
    50.0F);

  /* Logic: '<S69>/Logical Operator36' */
  PubIfDecisionLSM_MDL_B.EntryStub5_TurnLeft =
    (PubIfDecisionLSM_MDL_B.Compare_kd && PubIfDecisionLSM_MDL_B.Compare_oh);

  /* Chart: '<S68>/Chart1' */
  if (PubIfDecisionLSM_MDL_DW.is_active_c20_PubIfDecisionLSM_MDL == 0U) {
    PubIfDecisionLSM_MDL_DW.is_active_c20_PubIfDecisionLSM_MDL = 1U;
    PubIfDecisionLSM_MDL_DW.is_c20_PubIfDecisionLSM_MDL =
      PubIfDecisionLSM_MDL_IN_off1;
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
    PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
    *rty_LSM_PilotSPL = MAX_uint8_T;
    *rty_LSM_PilotSPLDist = MAX_uint16_T;
  } else if (PubIfDecisionLSM_MDL_DW.is_c20_PubIfDecisionLSM_MDL == 1) {
    Update = ((rtu_RFM_ROAD->i_mapvalid == 3) && (rtu_RFM_ROAD->i_on_nav_path >
               0));
    if (Update) {
      PubIfDecisionLSM_MDL_DW.is_c20_PubIfDecisionLSM_MDL =
        PubIfDecisionLSM_MDL_IN_on;
      PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_StubValid;
      PubIfDecisionLSM_MDL_DW.is_StubValid = PubIfDecisionLSM_MDL_IN_init_mo;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = 60U;
      t_Dist = roundf(PubIfDecisionLSM_MDL_B.Subtract);
      if (t_Dist < 65536.0F) {
        if (t_Dist >= 0.0F) {
          *rty_LSM_PilotSPLDist = (uint16_T)t_Dist;
        } else {
          *rty_LSM_PilotSPLDist = 0U;
        }
      } else {
        *rty_LSM_PilotSPLDist = MAX_uint16_T;
      }
    } else {
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = MAX_uint8_T;
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    }
  } else {
    /* case IN_on: */
    Update = ((rtu_RFM_ROAD->i_mapvalid != 3) || (rtu_RFM_ROAD->i_on_nav_path ==
               0));
    if (Update) {
      PubIfDecisionLSM_MDL_DW.is_init_c =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_init_l =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid1 =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_init = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_CruiseValid2 =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_EntryStub1 =
        PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_exit_internal_StubValid();
      PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
      PubIfDecisionLSM_MDL_DW.is_c20_PubIfDecisionLSM_MDL =
        PubIfDecisionLSM_MDL_IN_off1;
      PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
      PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
      *rty_LSM_PilotSPL = MAX_uint8_T;
      *rty_LSM_PilotSPLDist = MAX_uint16_T;
    } else {
      switch (PubIfDecisionLSM_MDL_DW.is_on) {
       case PubIfDecisionLSM_MDL_IN_CruiseValid:
        PubIfDecisionLSM_MDL_CruiseValid(rtu_RFM_TSR, rty_LSM_PilotSPLDist,
          rty_LSM_PilotSPL);
        break;

       case PubIfDecisionLSM_MDL_IN_CruiseValid1:
        PubIfDecisionLSM_MDL_CruiseValid1(rtu_RFM_TSR, rty_LSM_PilotSPLDist,
          rty_LSM_PilotSPL);
        break;

       case PubIfDecisionLSM_MDL_IN_CruiseValid2:
        PubIfDecisionLSM_MDL_CruiseValid2(rtu_RFM_TSR, rty_LSM_PilotSPLDist,
          rty_LSM_PilotSPL);
        break;

       case PubIfDecisionLSM_MDL_IN_EntryStub1:
        Update = (PubIfDecisionLSM_MDL_B.CruiseValid && (rtu_RFM_TSR->RoadType ==
                   1) && (!PubIfDecisionLSM_MDL_B.EntryStub5) &&
                  (!PubIfDecisionLSM_MDL_B.EntryStub6));
        if (Update) {
          PubIfDecisionLSM_MDL_DW.is_EntryStub1 =
            PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
          PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid;
          PubIfDecisionLSM_MDL_B.PilotRoadSts = 17U;
          *rty_LSM_PilotSPL = MAX_uint8_T;
          *rty_LSM_PilotSPLDist = MAX_uint16_T;
          PubIfDecisionLSM_MDL_DW.is_CruiseValid =
            PubIfDecisionLSM_MDL_IN_init_m;
          PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
        } else if (PubIfDecisionLSM_MDL_B.EntryStub6) {
          PubIfDecisionLSM_MDL_DW.is_EntryStub1 =
            PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
          PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_EntryStub2;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
          PubIfDecisionLSM_MDL_B.PilotRoadSts = 25U;
        } else {
          Update = ((!PubIfDecisionLSM_MDL_B.EntryStub5) &&
                    (!PubIfDecisionLSM_MDL_B.EntryStub6));
          if (Update) {
            PubIfDecisionLSM_MDL_DW.is_EntryStub1 =
              PubIfDecisionLSM_MDL_IN_NO_ACTIVE_CHILD;
            PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_StubValid;
            PubIfDecisionLSM_MDL_DW.is_StubValid =
              PubIfDecisionLSM_MDL_IN_init_mo;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
            *rty_LSM_PilotSPL = 60U;
            t_Dist = roundf(PubIfDecisionLSM_MDL_B.Subtract);
            if (t_Dist < 65536.0F) {
              if (t_Dist >= 0.0F) {
                *rty_LSM_PilotSPLDist = (uint16_T)t_Dist;
              } else {
                *rty_LSM_PilotSPLDist = 0U;
              }
            } else {
              *rty_LSM_PilotSPLDist = MAX_uint16_T;
            }
          } else {
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 26U;
            if (PubIfDecisionLSM_MDL_DW.is_EntryStub1 == 1) {
              if (!PubIfDecisionLSM_MDL_B.EntryStub5_TurnLeft) {
                PubIfDecisionLSM_MDL_DW.is_EntryStub1 =
                  PubIfDecisionLSM_MDL_IN_Name1;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
              }
            } else {
              /* case IN_Name1: */
              if (PubIfDecisionLSM_MDL_B.EntryStub5_TurnLeft) {
                PubIfDecisionLSM_MDL_DW.is_EntryStub1 =
                  PubIfDecisionLSM_MDL_IN_Name;
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
              } else {
                PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 4U;
              }
            }
          }
        }
        break;

       case PubIfDecisionLSM_MDL_IN_EntryStub2:
        Update = (PubIfDecisionLSM_MDL_B.CruiseValid && (rtu_RFM_TSR->RoadType ==
                   1) && (!PubIfDecisionLSM_MDL_B.EntryStub5) &&
                  (!PubIfDecisionLSM_MDL_B.EntryStub6));
        if (Update) {
          PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_CruiseValid;
          PubIfDecisionLSM_MDL_B.PilotRoadSts = 17U;
          *rty_LSM_PilotSPL = MAX_uint8_T;
          *rty_LSM_PilotSPLDist = MAX_uint16_T;
          PubIfDecisionLSM_MDL_DW.is_CruiseValid =
            PubIfDecisionLSM_MDL_IN_init_m;
          PubIfDecisionLSM_MDL_DW.is_init_c = PubIfDecisionLSM_MDL_IN_Name;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
        } else if (PubIfDecisionLSM_MDL_B.EntryStub5) {
          PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_EntryStub1;
          PubIfDecisionLSM_MDL_B.PilotRoadSts = 26U;
          PubIfDecisionLSM_MDL_DW.is_EntryStub1 = PubIfDecisionLSM_MDL_IN_Name;
          PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 1U;
        } else {
          Update = ((!PubIfDecisionLSM_MDL_B.EntryStub5) &&
                    (!PubIfDecisionLSM_MDL_B.EntryStub6));
          if (Update) {
            PubIfDecisionLSM_MDL_DW.is_on = PubIfDecisionLSM_MDL_IN_StubValid;
            PubIfDecisionLSM_MDL_DW.is_StubValid =
              PubIfDecisionLSM_MDL_IN_init_mo;
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 0U;
            *rty_LSM_PilotSPL = 60U;
            t_Dist = roundf(PubIfDecisionLSM_MDL_B.Subtract);
            if (t_Dist < 65536.0F) {
              if (t_Dist >= 0.0F) {
                *rty_LSM_PilotSPLDist = (uint16_T)t_Dist;
              } else {
                *rty_LSM_PilotSPLDist = 0U;
              }
            } else {
              *rty_LSM_PilotSPLDist = MAX_uint16_T;
            }
          } else {
            PubIfDecisionLSM_MDL_B.PilotTurnSwSts = 0U;
            PubIfDecisionLSM_MDL_B.PilotRoadSts = 25U;
          }
        }
        break;

       default:
        /* case IN_StubValid: */
        PubIfDecisionLSM_MDL_StubValid(rtu_RFM_TSR, rty_LSM_PilotSPLDist,
          rty_LSM_PilotSPL);
        break;
      }
    }
  }

  /* End of Chart: '<S68>/Chart1' */

  /* Lookup_n-D: '<S17>/D2' */
  PubIfDecisionLSM_MDL_B.D2 = look1_iflf_binlxpw(*rtu_vxvRefMs, rtCP_D2_bp01Data,
    rtCP_D2_tableData, 2U);

  /* UnitDelay: '<S17>/Unit Delay40' */
  PubIfDecisionLSM_MDL_B.UnitDelay40 =
    PubIfDecisionLSM_MDL_DW.UnitDelay40_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_oi = PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay41' */
  PubIfDecisionLSM_MDL_B.UnitDelay41 =
    PubIfDecisionLSM_MDL_DW.UnitDelay41_DSTATE;

  /* MATLAB Function: '<S17>/NOA' */
  t = rtu_RFM_LINE_EXIT_CL->dDisStart;
  PubIfDecisionLSM_MDL_B.HWALineValid_g = false;
  PubIfDecisionLSM_MDL_B.HWALineC3_n = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALineC2_m = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALineC1_g = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALineC0_gz = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARange_j = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeLineValid_m = false;
  PubIfDecisionLSM_MDL_B.HWALeLineC3_g = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeLineC2_d = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeLineC1_c = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeLineC0_e = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeRange_k = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiLineValid_f = false;
  PubIfDecisionLSM_MDL_B.HWARiLineC3_n = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiLineC2_n = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiLineC1_g = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiLineC0_k = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiRange_d = 0.0F;
  MoveID = PubIfDecisionLSM_MDL_B.UnitDelay40;
  LockID = PubIfDecisionLSM_MDL_B.UnitDelay_oi;
  i = PubIfDecisionLSM_MDL_B.UnitDelay41;
  qY = i - 1U;
  if (qY > (uint32_T)i) {
    qY = 0U;
  }

  i = (int32_T)qY;
  LConf = (uint8_T)i;
  if (LConf == 0) {
    LockID = 0;
  }

  if ((rtu_VSM_HMI->HWASts == 1) || (rtu_VSM_HMI->HWASts == 7) ||
      (rtu_VSM_HMI->HWASts == 0) || (rtu_VSM_HMI->HWASts == 2)) {
    MoveID = 0;
  }

  if (*rty_LSM_PilotSts != 0) {
    if ((rtu_VSM_HMI->HWASts == 1) || (rtu_VSM_HMI->HWASts == 2)) {
      if (rtu_RFM_LINE_CL->bIsLineExist > 0) {
        PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
        PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_CL->dC3V;
        PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_CL->dC2V;
        PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_CL->dC1V;
        PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_CL->dC0V;
        PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_CL->dDisFront;
      }

      if ((rtu_RFM_LINE_L1->bIsLineExist > 0) && (rtu_RFM_LINE_L2->bIsLineExist >
           0) && ((rtu_RFM_LINE_L1->dDisFront > PubIfDecisionLSM_MDL_B.D2) ||
                  (rtu_RFM_LINE_L2->dDisFront > PubIfDecisionLSM_MDL_B.D2)) &&
          PubIfDecisionLSM_MDL_B.LeftEn_e) {
        PubIfDecisionLSM_MDL_B.HWALeLineValid_m = true;
        PubIfDecisionLSM_MDL_B.HWALeLineC3_g = (rtu_RFM_LINE_L1->dC3V +
          rtu_RFM_LINE_L2->dC3V) * 0.5F;
        PubIfDecisionLSM_MDL_B.HWALeLineC2_d = (rtu_RFM_LINE_L1->dC2V +
          rtu_RFM_LINE_L2->dC2V) * 0.5F;
        PubIfDecisionLSM_MDL_B.HWALeLineC1_c = (rtu_RFM_LINE_L1->dC1V +
          rtu_RFM_LINE_L2->dC1V) * 0.5F;
        PubIfDecisionLSM_MDL_B.HWALeLineC0_e = (rtu_RFM_LINE_L1->dC0V +
          rtu_RFM_LINE_L2->dC0V) * 0.5F;
        PubIfDecisionLSM_MDL_B.HWALeRange_k = (rtu_RFM_LINE_L1->dDisFront +
          rtu_RFM_LINE_L2->dDisFront) * 0.5F;
      }

      if ((rtu_RFM_LINE_R1->bIsLineExist > 0) && (rtu_RFM_LINE_R2->bIsLineExist >
           0) && ((rtu_RFM_LINE_R1->dDisFront > PubIfDecisionLSM_MDL_B.D2) ||
                  (rtu_RFM_LINE_R2->dDisFront > PubIfDecisionLSM_MDL_B.D2)) &&
          PubIfDecisionLSM_MDL_B.RightEn_n) {
        PubIfDecisionLSM_MDL_B.HWARiLineValid_f = true;
        PubIfDecisionLSM_MDL_B.HWARiLineC3_n = (rtu_RFM_LINE_R1->dC3V +
          rtu_RFM_LINE_R2->dC3V) * 0.5F;
        PubIfDecisionLSM_MDL_B.HWARiLineC2_n = (rtu_RFM_LINE_R1->dC2V +
          rtu_RFM_LINE_R2->dC2V) * 0.5F;
        PubIfDecisionLSM_MDL_B.HWARiLineC1_g = (rtu_RFM_LINE_R1->dC1V +
          rtu_RFM_LINE_R2->dC1V) * 0.5F;
        PubIfDecisionLSM_MDL_B.HWARiLineC0_k = (rtu_RFM_LINE_R1->dC0V +
          rtu_RFM_LINE_R2->dC0V) * 0.5F;
        PubIfDecisionLSM_MDL_B.HWARiRange_d = (rtu_RFM_LINE_R1->dDisFront +
          rtu_RFM_LINE_R2->dDisFront) * 0.5F;
      }
    }

    if ((PubIfDecisionLSM_MDL_B.PilotTurnSwSts == 8) &&
        (rtu_RFM_LINE_EXIT_CL->bIsLineExist != 0)) {
      if (rtu_RFM_LINE_EXIT_CL->dDisStart > 30.0F) {
        PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
        PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_CL->dC3V;
        PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_CL->dC2V;
        PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_CL->dC1V;
        PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_CL->dC0V;
        PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_CL->dDisFront;
      } else if (rtu_RFM_LINE_EXIT_CL->dDisStart > 16.0F) {
        t_dx[0] = 0.5F * rtu_RFM_LINE_EXIT_CL->dDisStart;
        t_dx[1] = rtu_RFM_LINE_EXIT_CL->dDisStart;
        t_dx[2] = rtu_RFM_LINE_EXIT_CL->dDisStart + 10.0F;
        t_dx[3] = rtu_RFM_LINE_EXIT_CL->dDisStart + 30.0F;
        y3 = ((rtu_RFM_LINE_EXIT_CL->dC1V * t_dx[2] + rtu_RFM_LINE_EXIT_CL->dC0V)
              + t_dx[2] * t_dx[2] * rtu_RFM_LINE_EXIT_CL->dC2V) +
          rtu_RFM_LINE_EXIT_CL->dC3V * rt_powf_snf(t_dx[2], 3.0F);
        if (y3 > 0.0F) {
          y2 = fminf(1.0F, 0.4F * y3);
        } else {
          y2 = fmaxf(-1.0F, 0.4F * y3);
        }

        t_Dist = rt_powf_snf(t_dx[0], 3.0F);
        t2 = rt_powf_snf(t_dx[3], 3.0F);
        t_dx_1[0] = ((rtu_RFM_LINE_CL->dC1V * t_dx[0] + rtu_RFM_LINE_CL->dC0V) +
                     t_dx[0] * t_dx[0] * rtu_RFM_LINE_CL->dC2V) +
          rtu_RFM_LINE_CL->dC3V * t_Dist;
        t_dx_1[1] = y2;
        t_dx_1[2] = y3;
        t_dx_1[3] = ((rtu_RFM_LINE_EXIT_CL->dC1V * t_dx[3] +
                      rtu_RFM_LINE_EXIT_CL->dC0V) + t_dx[3] * t_dx[3] *
                     rtu_RFM_LINE_EXIT_CL->dC2V) + rtu_RFM_LINE_EXIT_CL->dC3V *
          t2;
        pl_h0nX7xd3(t_dx, t_dx_1, &t_Psi, &m2, &K40, &RefA0_3);
        PubIfDecisionLSM_MDL_B.HWALineC3_n = t_Psi;
        PubIfDecisionLSM_MDL_B.HWALineC2_m = m2;
        PubIfDecisionLSM_MDL_B.HWALineC1_g = K40;
        PubIfDecisionLSM_MDL_B.HWALineC0_gz = RefA0_3;
        PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
        PubIfDecisionLSM_MDL_B.HWARange_j = t + 40.0F;
      } else {
        PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
        PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_EXIT_CL->dC3V;
        PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_EXIT_CL->dC2V;
        PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_EXIT_CL->dC1V;
        PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_EXIT_CL->dC0V;
        PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_EXIT_CL->dDisFront;
      }
    } else if ((PubIfDecisionLSM_MDL_B.PilotTurnSwSts == 19) &&
               (rtu_RFM_LINE_EXIT_CL->bIsLineExist != 0)) {
      PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
      PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_EXIT_CL->dC3V;
      PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_EXIT_CL->dC2V;
      PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_EXIT_CL->dC1V;
      PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_EXIT_CL->dC0V;
      PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_EXIT_CL->dDisFront;
    } else if ((rtu_VSM_HMI->HWASts == 3) || (rtu_VSM_HMI->HWASts == 11) ||
               (rtu_VSM_HMI->HWASts == 12)) {
      MoveID = 0;
      if ((PubIfDecisionLSM_MDL_B.UnitDelay39 == 5) ||
          (PubIfDecisionLSM_MDL_B.UnitDelay39 == 6)) {
        LConf = 250U;
        LockID = 0;
      }

      if (LConf > 0) {
        if (rtu_RFM_TSR->SPL_LaneChanged == 1) {
          i = LockID + 1;
          if (i > 127) {
            i = 127;
          }

          LockID = (int8_T)i;
        }

        if (rtu_RFM_TSR->SPL_LaneChanged == 2) {
          i = LockID - 1;
          if (i < -128) {
            i = -128;
          }

          LockID = (int8_T)i;
        }
      } else {
        LockID = 0;
      }

      if (LockID == 1) {
        if ((rtu_RFM_LINE_R1->bIsLineExist > 0) &&
            (rtu_RFM_LINE_R2->bIsLineExist > 0) && ((rtu_RFM_LINE_R1->dDisFront >
              PubIfDecisionLSM_MDL_B.D2) || (rtu_RFM_LINE_R2->dDisFront >
              PubIfDecisionLSM_MDL_B.D2))) {
          PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
          PubIfDecisionLSM_MDL_B.HWALineC3_n = (rtu_RFM_LINE_R1->dC3V +
            rtu_RFM_LINE_R2->dC3V) * 0.5F;
          PubIfDecisionLSM_MDL_B.HWALineC2_m = (rtu_RFM_LINE_R1->dC2V +
            rtu_RFM_LINE_R2->dC2V) * 0.5F;
          PubIfDecisionLSM_MDL_B.HWALineC1_g = (rtu_RFM_LINE_R1->dC1V +
            rtu_RFM_LINE_R2->dC1V) * 0.5F;
          PubIfDecisionLSM_MDL_B.HWALineC0_gz = (rtu_RFM_LINE_R1->dC0V +
            rtu_RFM_LINE_R2->dC0V) * 0.5F;
          PubIfDecisionLSM_MDL_B.HWARange_j = (rtu_RFM_LINE_R1->dDisFront +
            rtu_RFM_LINE_R2->dDisFront) * 0.5F;
        } else if ((rtu_RFM_LINE_R1->bIsLineExist > 0) &&
                   (rtu_RFM_LINE_R1->dDisFront > PubIfDecisionLSM_MDL_B.D2)) {
          PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
          PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_R1->dC3V;
          PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_R1->dC2V;
          PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_R1->dC1V;
          PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_R1->dC0V - sqrtf
            (rtu_RFM_LINE_R1->dC1V * rtu_RFM_LINE_R1->dC1V + 1.0F) * 1.875F;
          PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_R1->dDisFront;
        } else {
          if ((rtu_RFM_LINE_R2->bIsLineExist > 0) && (rtu_RFM_LINE_R2->dDisFront
               > PubIfDecisionLSM_MDL_B.D2)) {
            PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
            PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_R2->dC3V;
            PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_R2->dC2V;
            PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_R2->dC1V;
            PubIfDecisionLSM_MDL_B.HWALineC0_gz = sqrtf(rtu_RFM_LINE_R2->dC1V *
              rtu_RFM_LINE_R2->dC1V + 1.0F) * 1.875F + rtu_RFM_LINE_R2->dC0V;
            PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_R2->dDisFront;
          }
        }
      } else if (LockID == -1) {
        if ((rtu_RFM_LINE_L1->bIsLineExist > 0) &&
            (rtu_RFM_LINE_L2->bIsLineExist > 0) && ((rtu_RFM_LINE_L1->dDisFront >
              PubIfDecisionLSM_MDL_B.D2) || (rtu_RFM_LINE_L2->dDisFront >
              PubIfDecisionLSM_MDL_B.D2))) {
          PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
          PubIfDecisionLSM_MDL_B.HWALineC3_n = (rtu_RFM_LINE_L1->dC3V +
            rtu_RFM_LINE_L2->dC3V) * 0.5F;
          PubIfDecisionLSM_MDL_B.HWALineC2_m = (rtu_RFM_LINE_L1->dC2V +
            rtu_RFM_LINE_L2->dC2V) * 0.5F;
          PubIfDecisionLSM_MDL_B.HWALineC1_g = (rtu_RFM_LINE_L1->dC1V +
            rtu_RFM_LINE_L2->dC1V) * 0.5F;
          PubIfDecisionLSM_MDL_B.HWALineC0_gz = (rtu_RFM_LINE_L1->dC0V +
            rtu_RFM_LINE_L2->dC0V) * 0.5F;
          PubIfDecisionLSM_MDL_B.HWARange_j = (rtu_RFM_LINE_L1->dDisFront +
            rtu_RFM_LINE_L2->dDisFront) * 0.5F;
        } else if ((rtu_RFM_LINE_L1->bIsLineExist > 0) &&
                   (rtu_RFM_LINE_L1->dDisFront > PubIfDecisionLSM_MDL_B.D2)) {
          PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
          PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_L1->dC3V;
          PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_L1->dC2V;
          PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_L1->dC1V;
          PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_L1->dC0V - sqrtf
            (rtu_RFM_LINE_L1->dC1V * rtu_RFM_LINE_L1->dC1V + 1.0F) * 1.875F;
          PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_L1->dDisFront;
        } else {
          if ((rtu_RFM_LINE_L2->bIsLineExist > 0) && (rtu_RFM_LINE_L2->dDisFront
               > PubIfDecisionLSM_MDL_B.D2)) {
            PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
            PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_L2->dC3V;
            PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_L2->dC2V;
            PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_L2->dC1V;
            PubIfDecisionLSM_MDL_B.HWALineC0_gz = sqrtf(rtu_RFM_LINE_L2->dC1V *
              rtu_RFM_LINE_L2->dC1V + 1.0F) * 1.875F + rtu_RFM_LINE_L2->dC0V;
            PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_L2->dDisFront;
          }
        }
      } else {
        if (LockID == 0) {
          PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
          PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_CL->dC3V;
          PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_CL->dC2V;
          PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_CL->dC1V;
          PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_CL->dC0V;
          PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_CL->dDisFront;
        }
      }
    } else if (rtu_VSM_HMI->HWASts == 5) {
      if (PubIfDecisionLSM_MDL_B.UnitDelay39 != 5) {
        i = MoveID - 1;
        if (i < -128) {
          i = -128;
        }

        MoveID = (int8_T)i;
      }

      if (rtu_RFM_TSR->SPL_LaneChanged == 1) {
        i = MoveID + 1;
        if (i > 127) {
          i = 127;
        }

        MoveID = (int8_T)i;
      }

      if (rtu_RFM_TSR->SPL_LaneChanged == 2) {
        i = MoveID - 1;
        if (i < -128) {
          i = -128;
        }

        MoveID = (int8_T)i;
      }

      Update = ((MoveID >= 1) || (MoveID <= -2));
      if (!Update) {
        if (MoveID == -1) {
          if ((rtu_RFM_LINE_L1->bIsLineExist > 0) &&
              (rtu_RFM_LINE_L2->bIsLineExist > 0) &&
              ((rtu_RFM_LINE_L1->dDisFront > PubIfDecisionLSM_MDL_B.D2) ||
               (rtu_RFM_LINE_L2->dDisFront > PubIfDecisionLSM_MDL_B.D2))) {
            PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
            PubIfDecisionLSM_MDL_B.HWALineC3_n = (rtu_RFM_LINE_L1->dC3V +
              rtu_RFM_LINE_L2->dC3V) * 0.5F;
            PubIfDecisionLSM_MDL_B.HWALineC2_m = (rtu_RFM_LINE_L1->dC2V +
              rtu_RFM_LINE_L2->dC2V) * 0.5F;
            PubIfDecisionLSM_MDL_B.HWALineC1_g = (rtu_RFM_LINE_L1->dC1V +
              rtu_RFM_LINE_L2->dC1V) * 0.5F;
            PubIfDecisionLSM_MDL_B.HWALineC0_gz = (rtu_RFM_LINE_L1->dC0V +
              rtu_RFM_LINE_L2->dC0V) * 0.5F;
            PubIfDecisionLSM_MDL_B.HWARange_j = (rtu_RFM_LINE_L1->dDisFront +
              rtu_RFM_LINE_L2->dDisFront) * 0.5F;
            PubIfDecisionLSM_MDL_B.HWALeLineValid_m = true;
            PubIfDecisionLSM_MDL_B.HWALeLineC3_g = (rtu_RFM_LINE_L1->dC3V +
              rtu_RFM_LINE_L2->dC3V) * 0.5F;
            PubIfDecisionLSM_MDL_B.HWALeLineC2_d = (rtu_RFM_LINE_L1->dC2V +
              rtu_RFM_LINE_L2->dC2V) * 0.5F;
            PubIfDecisionLSM_MDL_B.HWALeLineC1_c = (rtu_RFM_LINE_L1->dC1V +
              rtu_RFM_LINE_L2->dC1V) * 0.5F;
            PubIfDecisionLSM_MDL_B.HWALeLineC0_e = (rtu_RFM_LINE_L1->dC0V +
              rtu_RFM_LINE_L2->dC0V) * 0.5F;
            PubIfDecisionLSM_MDL_B.HWALeRange_k = (rtu_RFM_LINE_L1->dDisFront +
              rtu_RFM_LINE_L2->dDisFront) * 0.5F;
          } else if ((rtu_RFM_LINE_L1->bIsLineExist > 0) &&
                     (rtu_RFM_LINE_L1->dDisFront > PubIfDecisionLSM_MDL_B.D2)) {
            PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
            PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_L1->dC3V;
            PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_L1->dC2V;
            PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_L1->dC1V;
            PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_L1->dC0V - sqrtf
              (rtu_RFM_LINE_L1->dC1V * rtu_RFM_LINE_L1->dC1V + 1.0F) * 1.875F;
            PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_L1->dDisFront;
            PubIfDecisionLSM_MDL_B.HWALeLineValid_m = true;
            PubIfDecisionLSM_MDL_B.HWALeLineC3_g = rtu_RFM_LINE_L1->dC3V;
            PubIfDecisionLSM_MDL_B.HWALeLineC2_d = rtu_RFM_LINE_L1->dC2V;
            PubIfDecisionLSM_MDL_B.HWALeLineC1_c = rtu_RFM_LINE_L1->dC1V;
            PubIfDecisionLSM_MDL_B.HWALeLineC0_e = rtu_RFM_LINE_L1->dC0V - sqrtf
              (rtu_RFM_LINE_L1->dC1V * rtu_RFM_LINE_L1->dC1V + 1.0F) * 1.875F;
            PubIfDecisionLSM_MDL_B.HWALeRange_k = rtu_RFM_LINE_L1->dDisFront;
          } else {
            if ((rtu_RFM_LINE_L2->bIsLineExist > 0) &&
                (rtu_RFM_LINE_L2->dDisFront > PubIfDecisionLSM_MDL_B.D2)) {
              PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
              PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_L2->dC3V;
              PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_L2->dC2V;
              PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_L2->dC1V;
              PubIfDecisionLSM_MDL_B.HWALineC0_gz = sqrtf(rtu_RFM_LINE_L2->dC1V *
                rtu_RFM_LINE_L2->dC1V + 1.0F) * 1.875F + rtu_RFM_LINE_L2->dC0V;
              PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_L2->dDisFront;
              PubIfDecisionLSM_MDL_B.HWALeLineValid_m = true;
              PubIfDecisionLSM_MDL_B.HWALeLineC3_g = rtu_RFM_LINE_L2->dC3V;
              PubIfDecisionLSM_MDL_B.HWALeLineC2_d = rtu_RFM_LINE_L2->dC2V;
              PubIfDecisionLSM_MDL_B.HWALeLineC1_c = rtu_RFM_LINE_L2->dC1V;
              PubIfDecisionLSM_MDL_B.HWALeLineC0_e = sqrtf(rtu_RFM_LINE_L2->dC1V
                * rtu_RFM_LINE_L2->dC1V + 1.0F) * 1.875F + rtu_RFM_LINE_L2->dC0V;
              PubIfDecisionLSM_MDL_B.HWALeRange_k = rtu_RFM_LINE_L2->dDisFront;
            }
          }

          PubIfDecisionLSM_MDL_B.HWARiLineValid_f = true;
          PubIfDecisionLSM_MDL_B.HWARiLineC3_n = rtu_RFM_LINE_CL->dC3V;
          PubIfDecisionLSM_MDL_B.HWARiLineC2_n = rtu_RFM_LINE_CL->dC2V;
          PubIfDecisionLSM_MDL_B.HWARiLineC1_g = rtu_RFM_LINE_CL->dC1V;
          PubIfDecisionLSM_MDL_B.HWARiLineC0_k = rtu_RFM_LINE_CL->dC0V;
          PubIfDecisionLSM_MDL_B.HWARiRange_d = rtu_RFM_LINE_CL->dDisFront;
        } else {
          if (MoveID == 0) {
            PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
            PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_CL->dC3V;
            PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_CL->dC2V;
            PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_CL->dC1V;
            PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_CL->dC0V;
            PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_CL->dDisFront;
          }
        }
      }
    } else {
      if (rtu_VSM_HMI->HWASts == 6) {
        if (PubIfDecisionLSM_MDL_B.UnitDelay39 != 6) {
          i = MoveID + 1;
          if (i > 127) {
            i = 127;
          }

          MoveID = (int8_T)i;
        }

        if (rtu_RFM_TSR->SPL_LaneChanged == 1) {
          i = MoveID + 1;
          if (i > 127) {
            i = 127;
          }

          MoveID = (int8_T)i;
        }

        if (rtu_RFM_TSR->SPL_LaneChanged == 2) {
          i = MoveID - 1;
          if (i < -128) {
            i = -128;
          }

          MoveID = (int8_T)i;
        }

        Update = ((MoveID >= 2) || (MoveID <= -1));
        if (!Update) {
          if (MoveID == 1) {
            if ((rtu_RFM_LINE_R1->bIsLineExist > 0) &&
                (rtu_RFM_LINE_R2->bIsLineExist > 0) &&
                ((rtu_RFM_LINE_R1->dDisFront > PubIfDecisionLSM_MDL_B.D2) ||
                 (rtu_RFM_LINE_R2->dDisFront > PubIfDecisionLSM_MDL_B.D2))) {
              PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
              PubIfDecisionLSM_MDL_B.HWALineC3_n = (rtu_RFM_LINE_R1->dC3V +
                rtu_RFM_LINE_R2->dC3V) * 0.5F;
              PubIfDecisionLSM_MDL_B.HWALineC2_m = (rtu_RFM_LINE_R1->dC2V +
                rtu_RFM_LINE_R2->dC2V) * 0.5F;
              PubIfDecisionLSM_MDL_B.HWALineC1_g = (rtu_RFM_LINE_R1->dC1V +
                rtu_RFM_LINE_R2->dC1V) * 0.5F;
              PubIfDecisionLSM_MDL_B.HWALineC0_gz = (rtu_RFM_LINE_R1->dC0V +
                rtu_RFM_LINE_R2->dC0V) * 0.5F;
              PubIfDecisionLSM_MDL_B.HWARange_j = (rtu_RFM_LINE_R1->dDisFront +
                rtu_RFM_LINE_R2->dDisFront) * 0.5F;
              PubIfDecisionLSM_MDL_B.HWARiLineValid_f = true;
              PubIfDecisionLSM_MDL_B.HWARiLineC3_n = (rtu_RFM_LINE_R1->dC3V +
                rtu_RFM_LINE_R2->dC3V) * 0.5F;
              PubIfDecisionLSM_MDL_B.HWARiLineC2_n = (rtu_RFM_LINE_R1->dC2V +
                rtu_RFM_LINE_R2->dC2V) * 0.5F;
              PubIfDecisionLSM_MDL_B.HWARiLineC1_g = (rtu_RFM_LINE_R1->dC1V +
                rtu_RFM_LINE_R2->dC1V) * 0.5F;
              PubIfDecisionLSM_MDL_B.HWARiLineC0_k = (rtu_RFM_LINE_R1->dC0V +
                rtu_RFM_LINE_R2->dC0V) * 0.5F;
              PubIfDecisionLSM_MDL_B.HWARiRange_d = (rtu_RFM_LINE_R1->dDisFront
                + rtu_RFM_LINE_R2->dDisFront) * 0.5F;
            } else if ((rtu_RFM_LINE_R1->bIsLineExist > 0) &&
                       (rtu_RFM_LINE_R1->dDisFront > PubIfDecisionLSM_MDL_B.D2))
            {
              PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
              PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_R1->dC3V;
              PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_R1->dC2V;
              PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_R1->dC1V;
              PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_R1->dC0V -
                sqrtf(rtu_RFM_LINE_R1->dC1V * rtu_RFM_LINE_R1->dC1V + 1.0F) *
                1.875F;
              PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_R1->dDisFront;
              PubIfDecisionLSM_MDL_B.HWARiLineValid_f = true;
              PubIfDecisionLSM_MDL_B.HWARiLineC3_n = rtu_RFM_LINE_R1->dC3V;
              PubIfDecisionLSM_MDL_B.HWARiLineC2_n = rtu_RFM_LINE_R1->dC2V;
              PubIfDecisionLSM_MDL_B.HWARiLineC1_g = rtu_RFM_LINE_R1->dC1V;
              PubIfDecisionLSM_MDL_B.HWARiLineC0_k = rtu_RFM_LINE_R1->dC0V -
                sqrtf(rtu_RFM_LINE_R1->dC1V * rtu_RFM_LINE_R1->dC1V + 1.0F) *
                1.875F;
              PubIfDecisionLSM_MDL_B.HWARiRange_d = rtu_RFM_LINE_R1->dDisFront;
            } else {
              if ((rtu_RFM_LINE_R2->bIsLineExist > 0) &&
                  (rtu_RFM_LINE_R2->dDisFront > PubIfDecisionLSM_MDL_B.D2)) {
                PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
                PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_R2->dC3V;
                PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_R2->dC2V;
                PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_R2->dC1V;
                PubIfDecisionLSM_MDL_B.HWALineC0_gz = sqrtf
                  (rtu_RFM_LINE_R2->dC1V * rtu_RFM_LINE_R2->dC1V + 1.0F) *
                  1.875F + rtu_RFM_LINE_R2->dC0V;
                PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_R2->dDisFront;
                PubIfDecisionLSM_MDL_B.HWARiLineValid_f = true;
                PubIfDecisionLSM_MDL_B.HWARiLineC3_n = rtu_RFM_LINE_R2->dC3V;
                PubIfDecisionLSM_MDL_B.HWARiLineC2_n = rtu_RFM_LINE_R2->dC2V;
                PubIfDecisionLSM_MDL_B.HWARiLineC1_g = rtu_RFM_LINE_R2->dC1V;
                PubIfDecisionLSM_MDL_B.HWARiLineC0_k = sqrtf
                  (rtu_RFM_LINE_R2->dC1V * rtu_RFM_LINE_R2->dC1V + 1.0F) *
                  1.875F + rtu_RFM_LINE_R2->dC0V;
                PubIfDecisionLSM_MDL_B.HWARiRange_d = rtu_RFM_LINE_R2->dDisFront;
              }
            }

            PubIfDecisionLSM_MDL_B.HWALeLineValid_m = true;
            PubIfDecisionLSM_MDL_B.HWALeLineC3_g = rtu_RFM_LINE_CL->dC3V;
            PubIfDecisionLSM_MDL_B.HWALeLineC2_d = rtu_RFM_LINE_CL->dC2V;
            PubIfDecisionLSM_MDL_B.HWALeLineC1_c = rtu_RFM_LINE_CL->dC1V;
            PubIfDecisionLSM_MDL_B.HWALeLineC0_e = rtu_RFM_LINE_CL->dC0V;
            PubIfDecisionLSM_MDL_B.HWALeRange_k = rtu_RFM_LINE_CL->dDisFront;
          } else {
            if (MoveID == 0) {
              PubIfDecisionLSM_MDL_B.HWALineValid_g = true;
              PubIfDecisionLSM_MDL_B.HWALineC3_n = rtu_RFM_LINE_CL->dC3V;
              PubIfDecisionLSM_MDL_B.HWALineC2_m = rtu_RFM_LINE_CL->dC2V;
              PubIfDecisionLSM_MDL_B.HWALineC1_g = rtu_RFM_LINE_CL->dC1V;
              PubIfDecisionLSM_MDL_B.HWALineC0_gz = rtu_RFM_LINE_CL->dC0V;
              PubIfDecisionLSM_MDL_B.HWARange_j = rtu_RFM_LINE_CL->dDisFront;
            }
          }
        }
      }
    }
  }

  PubIfDecisionLSM_MDL_B.MoveID = MoveID;
  PubIfDecisionLSM_MDL_B.LockID_c = LockID;
  PubIfDecisionLSM_MDL_B.Lock_counter = LConf;

  /* End of MATLAB Function: '<S17>/NOA' */

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S23>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_gx = (*rty_LSM_PilotSts != ((uint8_T)0U));

  /* UnitDelay: '<S17>/Unit Delay27' */
  LSM_HWALineC0K1 = PubIfDecisionLSM_MDL_DW.UnitDelay27_DSTATE;

  /* Gain: '<S47>/Gain1' */
  PubIfDecisionLSM_MDL_B.Gain1_o = 3.6F * *rtu_vxvRefMs;

  /* Gain: '<S47>/Gain2' */
  PubIfDecisionLSM_MDL_B.Gain2_i = 1.03F * PubIfDecisionLSM_MDL_B.Gain1_o;

  /* Sum: '<S47>/Sum1' incorporates:
   *  Constant: '<S47>/Constant11'
   */
  PubIfDecisionLSM_MDL_B.Sum1_l = PubIfDecisionLSM_MDL_B.Gain2_i + 1.3F;

  /* Lookup_n-D: '<S47>/preDisMinTable' incorporates:
   *  Sum: '<S47>/Sum1'
   */
  PubIfDecisionLSM_MDL_B.preDisMinTable_h = look1_iflf_binlcpw
    (PubIfDecisionLSM_MDL_B.Sum1_l, P_LSM_DOP_PreDis_X, P_LSM_DOP_PreDis_Y, 15U);

  /* UnitDelay: '<S49>/Unit Delay1' */
  PubIfDecisionLSM_MDL_B.UnitDelay1_e =
    PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_as;

  /* UnitDelay: '<S49>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_h =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_m;

  /* MATLAB Function: '<S49>/MATLAB Function2' */
  PubIfDecisionLSM_MDL_MATLABFunction2(&rtu_VSM_HMI->HWASts,
    PubIfDecisionLSM_MDL_B.UnitDelay1_e, PubIfDecisionLSM_MDL_B.UnitDelay_h,
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction2_l);

  /* Abs: '<S49>/Abs' */
  PubIfDecisionLSM_MDL_B.Abs = fabsf(PubIfDecisionLSM_MDL_B.A2_k[1]);

  /* Lookup_n-D: '<S49>/1-D Lookup Table3' incorporates:
   *  Abs: '<S49>/Abs'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable3_l = look1_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Abs, rtCP_uDLookupTable3_bp01Data_e,
     rtCP_uDLookupTable3_tableData_f, 6U);

  /* Abs: '<S49>/Abs1' */
  PubIfDecisionLSM_MDL_B.Abs1 = fabsf(PubIfDecisionLSM_MDL_B.A2_k[2]);

  /* Lookup_n-D: '<S49>/1-D Lookup Table1' incorporates:
   *  Abs: '<S49>/Abs1'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable1_h = look1_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Abs1, rtCP_uDLookupTable1_bp01Data_k,
     rtCP_uDLookupTable1_tableData_m, 6U);

  /* If: '<S49>/If2' */
  if (PubIfDecisionLSM_MDL_B.sf_MATLABFunction2_l.Changelane > 0) {
    /* Outputs for IfAction SubSystem: '<S49>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S191>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem5(&PubIfDecisionLSM_MDL_B.Merge2_c,
      &PubIfDecisionLSM_MDL_B.Merge3_l);

    /* End of Outputs for SubSystem: '<S49>/If Action Subsystem5' */
  } else {
    /* Outputs for IfAction SubSystem: '<S49>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S190>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem4
      (PubIfDecisionLSM_MDL_B.uDLookupTable3_l,
       PubIfDecisionLSM_MDL_B.uDLookupTable1_h, &PubIfDecisionLSM_MDL_B.Merge2_c,
       &PubIfDecisionLSM_MDL_B.Merge3_l);

    /* End of Outputs for SubSystem: '<S49>/If Action Subsystem4' */
  }

  /* End of If: '<S49>/If2' */

  /* MATLAB Function: '<S49>/MATLAB Function6' */
  t_dx[0] = 1.0F - LSM_dDeltaX;
  t_dx[1] = 2.0F - LSM_dDeltaX;
  t_dx[2] = 3.0F - LSM_dDeltaX;
  t_dx[3] = 4.0F - LSM_dDeltaX;
  t_dy[0] = (((PubIfDecisionLSM_MDL_B.A3_n + PubIfDecisionLSM_MDL_B.A2_f) +
              PubIfDecisionLSM_MDL_B.A1_b) + PubIfDecisionLSM_MDL_B.A0_k) -
    LSM_dDeltaY;
  t_dy[1] = (((PubIfDecisionLSM_MDL_B.A3_n * 8.0F + PubIfDecisionLSM_MDL_B.A2_f *
               4.0F) + PubIfDecisionLSM_MDL_B.A1_b * 2.0F) +
             PubIfDecisionLSM_MDL_B.A0_k) - LSM_dDeltaY;
  t_dy[2] = (((PubIfDecisionLSM_MDL_B.A3_n * 27.0F + PubIfDecisionLSM_MDL_B.A2_f
               * 9.0F) + PubIfDecisionLSM_MDL_B.A1_b * 3.0F) +
             PubIfDecisionLSM_MDL_B.A0_k) - LSM_dDeltaY;
  t_dy[3] = (((PubIfDecisionLSM_MDL_B.A3_n * 64.0F + PubIfDecisionLSM_MDL_B.A2_f
               * 16.0F) + PubIfDecisionLSM_MDL_B.A1_b * 4.0F) +
             PubIfDecisionLSM_MDL_B.A0_k) - LSM_dDeltaY;
  t_dy_0 = t_dy[0];
  tFilter = t_dx[0];
  TmpX[0] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
  tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
  t_dx[0] = tFilter;
  t_dy_0 = t_dy[1];
  tFilter = t_dx[1];
  TmpX[1] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
  tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
  t_dx[1] = tFilter;
  t_dy_0 = t_dy[2];
  tFilter = t_dx[2];
  TmpX[2] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
  tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
  t_dx[2] = tFilter;
  t_dy_0 = t_dy[3];
  tFilter = t_dx[3];
  TmpX[3] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
  tFilter = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
  t_dx[3] = tFilter;
  t_Dist = rt_powf_snf(TmpX[0], 3.0F);
  t2 = rt_powf_snf(TmpX[1], 3.0F);
  t1 = rt_powf_snf(TmpX[2], 3.0F);
  t0 = rt_powf_snf(TmpX[3], 3.0F);
  MatrixA[0] = t_Dist;
  MatrixA[4] = TmpX[0] * TmpX[0];
  MatrixA[8] = TmpX[0];
  MatrixA[12] = 1.0F;
  MatrixA[1] = t2;
  MatrixA[5] = TmpX[1] * TmpX[1];
  MatrixA[9] = TmpX[1];
  MatrixA[13] = 1.0F;
  MatrixA[2] = t1;
  MatrixA[6] = TmpX[2] * TmpX[2];
  MatrixA[10] = TmpX[2];
  MatrixA[14] = 1.0F;
  MatrixA[3] = t0;
  MatrixA[7] = TmpX[3] * TmpX[3];
  MatrixA[11] = TmpX[3];
  MatrixA[15] = 1.0F;
  memcpy(&A[0], &MatrixA[0], sizeof(real32_T) << 4U);
  xzgetrf_qoSwvruO(A, ipiv, &info);
  K40 = A[0];
  isodd = false;
  K40 *= A[5];
  if (ipiv[0] > 1) {
    isodd = true;
  }

  K40 *= A[10];
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }

  K40 *= A[15];
  if (ipiv[2] > 3) {
    isodd = !isodd;
  }

  if (isodd) {
    K40 = -K40;
  }

  if (K40 == 0.0F) {
    t_Dist = 0.0F;
    t2 = 0.0F;
    t1 = 0.0F;
    t0 = 0.0F;
  } else {
    xzgetrf_qoSwvruO(MatrixA, ipiv, &i);
    t_dy[0] = t_dx[0];
    t_dy[1] = t_dx[1];
    t_dy[2] = t_dx[2];
    t_dy[3] = t_dx[3];
    i = ipiv[0];
    if (i != 1) {
      t_Psi = t_dy[0];
      t_dy[0] = t_dy[i - 1];
      t_dy[i - 1] = t_Psi;
    }

    i = ipiv[1];
    if (i != 2) {
      t_Psi = t_dy[1];
      t_dy[1] = t_dy[i - 1];
      t_dy[i - 1] = t_Psi;
    }

    i = ipiv[2];
    if (i != 3) {
      t_Psi = t_dy[2];
      t_dy[2] = t_dy[i - 1];
      t_dy[i - 1] = t_Psi;
    }

    if (t_dy[0] != 0.0F) {
      for (i = 1; i + 1 < 5; i++) {
        t_dy[i] -= t_dy[0] * MatrixA[i];
      }
    }

    if (t_dy[1] != 0.0F) {
      for (i = 2; i + 1 < 5; i++) {
        t_dy[i] -= MatrixA[i + 4] * t_dy[1];
      }
    }

    if (t_dy[2] != 0.0F) {
      for (i = 3; i + 1 < 5; i++) {
        t_dy[i] -= MatrixA[i + 8] * t_dy[2];
      }
    }

    if (t_dy[3] != 0.0F) {
      t_dy[3] /= MatrixA[15];
      for (i = 0; i < 3; i++) {
        t_dy[i] -= MatrixA[i + 12] * t_dy[3];
      }
    }

    if (t_dy[2] != 0.0F) {
      t_dy[2] /= MatrixA[10];
      for (i = 0; i < 2; i++) {
        t_dy[i] -= MatrixA[i + 8] * t_dy[2];
      }
    }

    if (t_dy[1] != 0.0F) {
      t_dy[1] /= MatrixA[5];
      t_dy[0] -= t_dy[1] * MatrixA[4];
    }

    if (t_dy[0] != 0.0F) {
      t_dy[0] /= MatrixA[0];
    }

    t_Dist = t_dy[0];
    t2 = t_dy[1];
    t1 = t_dy[2];
    t0 = t_dy[3];
  }

  if (PubIfDecisionLSM_MDL_B.LineValid) {
    t_Psi = PubIfDecisionLSM_MDL_B.Merge2_c;
    m2 = PubIfDecisionLSM_MDL_B.Merge3_l;
  } else {
    t_Psi = 0.0F;
    m2 = 0.0F;
  }

  K40 = t0 * t_Psi;
  RefA0_3 = t0 * m2;
  if ((rtu_VSM_HMI->HWASts == 5) || (rtu_VSM_HMI->HWASts == 6)) {
    t = fabsf(PubIfDecisionLSM_MDL_B.A0_o3[1] - K40);
    y3 = fabsf(RefA0_3 - PubIfDecisionLSM_MDL_B.A0_o3[2]);
  } else {
    t = PubIfDecisionLSM_MDL_B.A0_o3[1] - K40;
    y3 = RefA0_3 - PubIfDecisionLSM_MDL_B.A0_o3[2];
  }

  LSM_CurDis2 = t;
  LSM_DeltaDis2 = fabsf(fabsf((((PubIfDecisionLSM_MDL_B.A1_n[1] *
    PubIfDecisionLSM_MDL_B.preDisMinTable + PubIfDecisionLSM_MDL_B.A0_o3[1]) +
    PubIfDecisionLSM_MDL_B.preDisMinTable *
    PubIfDecisionLSM_MDL_B.preDisMinTable * PubIfDecisionLSM_MDL_B.A2_k[1]) +
    PubIfDecisionLSM_MDL_B.A3_h[1] * rt_powf_snf
    (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) - (((((1.0F - t_Psi) * (0.5F *
    *rtu_kapTraj) + t2 * t_Psi) * (PubIfDecisionLSM_MDL_B.preDisMinTable *
    PubIfDecisionLSM_MDL_B.preDisMinTable) + t_Dist * t_Psi * rt_powf_snf
    (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) + t1 * t_Psi *
    PubIfDecisionLSM_MDL_B.preDisMinTable) + K40)) - t);
  LSM_CurDis3 = y3;
  LSM_DeltaDis3 = fabsf(fabsf((((PubIfDecisionLSM_MDL_B.A1_n[2] *
    PubIfDecisionLSM_MDL_B.preDisMinTable + PubIfDecisionLSM_MDL_B.A0_o3[2]) +
    PubIfDecisionLSM_MDL_B.preDisMinTable *
    PubIfDecisionLSM_MDL_B.preDisMinTable * PubIfDecisionLSM_MDL_B.A2_k[2]) +
    PubIfDecisionLSM_MDL_B.A3_h[2] * rt_powf_snf
    (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) - (((((1.0F - m2) * (0.5F *
    *rtu_kapTraj) + t2 * m2) * (PubIfDecisionLSM_MDL_B.preDisMinTable *
    PubIfDecisionLSM_MDL_B.preDisMinTable) + t_Dist * m2 * rt_powf_snf
    (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) + t1 * m2 *
    PubIfDecisionLSM_MDL_B.preDisMinTable) + RefA0_3)) - y3);

  /* End of MATLAB Function: '<S49>/MATLAB Function6' */

  /* Saturate: '<S49>/Saturation1' */
  t_Psi = LSM_RoadWidth1;
  m2 = 2.4F;
  y2 = 5.0F;
  if (t_Psi > y2) {
    /* Saturate: '<S49>/Saturation1' */
    PubIfDecisionLSM_MDL_B.Saturation1_m = y2;
  } else if (t_Psi < m2) {
    /* Saturate: '<S49>/Saturation1' */
    PubIfDecisionLSM_MDL_B.Saturation1_m = m2;
  } else {
    /* Saturate: '<S49>/Saturation1' */
    PubIfDecisionLSM_MDL_B.Saturation1_m = t_Psi;
  }

  /* End of Saturate: '<S49>/Saturation1' */
  for (i = 0; i < 12; i++) {
    /* Product: '<S49>/Product8' incorporates:
     *  Constant: '<S49>/Constant11'
     *  Constant: '<S49>/Constant12'
     */
    PubIfDecisionLSM_MDL_B.Product8_k[i] = rtCP_Constant11_Value[i] *
      PubIfDecisionLSM_MDL_B.Saturation1_m / 3.75;
  }

  /* S-Function (sfix_look1_dyn): '<S49>/Lookup Table Dynamic' incorporates:
   *  Constant: '<S49>/Constant10'
   */
  /* Dynamic Look-Up Table Block: '<S49>/Lookup Table Dynamic'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real_T
   * Input2  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_Treal_T_real32_Treal_T
    ( &(PubIfDecisionLSM_MDL_B.LookupTableDynamic_n), rtCP_Constant10_Value,
     LSM_CurDis2, &PubIfDecisionLSM_MDL_B.Product8_k[0], 11U);

  /* Gain: '<S49>/Gain3' */
  PubIfDecisionLSM_MDL_B.Gain3_d = 3.6F * *rtu_vxvRefMs;

  /* Gain: '<S49>/Gain4' */
  PubIfDecisionLSM_MDL_B.Gain4_c = 1.03F * PubIfDecisionLSM_MDL_B.Gain3_d;

  /* Sum: '<S49>/Sum' incorporates:
   *  Constant: '<S49>/Constant16'
   */
  PubIfDecisionLSM_MDL_B.Sum_a = PubIfDecisionLSM_MDL_B.Gain4_c + 1.3F;

  /* Lookup_n-D: '<S49>/2-D Lookup Table2' incorporates:
   *  Sum: '<S49>/Sum'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable2 = look2_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Sum_a, LSM_DeltaDis2, rtCP_uDLookupTable2_bp01Data,
     rtCP_uDLookupTable2_bp02Data, rtCP_uDLookupTable2_tableData,
     rtCP_uDLookupTable2_maxIndex, 4U);

  /* Product: '<S49>/Product' */
  LSM_LH21 = PubIfDecisionLSM_MDL_B.LookupTableDynamic_n *
    PubIfDecisionLSM_MDL_B.uDLookupTable2;

  /* MATLAB Function: '<S49>/MATLAB Function3' incorporates:
   *  Constant: '<S49>/Constant7'
   *  Constant: '<S49>/Constant9'
   */
  PubIfDecisionLSM_MDL_MATLABFunction3(P_LSM_LineWijCal_C12,
    P_LSM_LineWijCal_C13, &PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_h);

  /* Product: '<S49>/Product1' */
  PubIfDecisionLSM_MDL_B.Product1_h = LSM_LH21 *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_h.Fac1;

  /* Gain: '<S49>/Gain1' */
  PubIfDecisionLSM_MDL_B.Gain1_n = 3.6F * *rtu_vxvRefMs;

  /* Gain: '<S49>/Gain2' */
  PubIfDecisionLSM_MDL_B.Gain2_o = 1.03F * PubIfDecisionLSM_MDL_B.Gain1_n;

  /* Sum: '<S49>/Sum1' incorporates:
   *  Constant: '<S49>/Constant21'
   */
  PubIfDecisionLSM_MDL_B.Sum1_p = PubIfDecisionLSM_MDL_B.Gain2_o + 1.3F;

  /* MATLAB Function: '<S49>/MATLAB Function7' */
  PubIfDecisionLSM_MDL_MATLABFunction7(PubIfDecisionLSM_MDL_B.Range_a[1],
    PubIfDecisionLSM_MDL_B.Range_a[2],
    &PubIfDecisionLSM_MDL_B.sf_MATLABFunction7);

  /* Lookup_n-D: '<S49>/2-D Lookup Table3' incorporates:
   *  Sum: '<S49>/Sum1'
   */
  LSM_LH22 = look2_iflf_binlxpw(PubIfDecisionLSM_MDL_B.Sum1_p,
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction7.dy2_Ran,
    rtCP_uDLookupTable3_bp01Data_a, rtCP_uDLookupTable3_bp02Data_o,
    rtCP_uDLookupTable3_tableData_p, rtCP_uDLookupTable3_maxIndex_g, 4U);

  /* Product: '<S49>/Product2' */
  PubIfDecisionLSM_MDL_B.Product2_e = LSM_LH22 *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_h.Fac2;

  /* MATLAB Function: '<S49>/MATLAB Function8' */
  PubIfDecisionLSM_MDL_B.dy2_Rel_f = PubIfDecisionLSM_MDL_B.LineReliable[1];
  PubIfDecisionLSM_MDL_B.dy3_Rel_c = PubIfDecisionLSM_MDL_B.LineReliable[2];

  /* Lookup_n-D: '<S49>/1-D Lookup Table5' */
  LSM_LH23 = look1_iflf_binlxpw(PubIfDecisionLSM_MDL_B.dy2_Rel_f,
    rtCP_uDLookupTable5_bp01Data_l, rtCP_uDLookupTable5_tableData_k, 6U);

  /* Product: '<S49>/Product3' */
  PubIfDecisionLSM_MDL_B.Product3_f = LSM_LH23 *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_h.Fac3;

  /* Sum: '<S49>/Add' */
  PubIfDecisionLSM_MDL_B.Add_h = (PubIfDecisionLSM_MDL_B.Product1_h +
    PubIfDecisionLSM_MDL_B.Product2_e) + PubIfDecisionLSM_MDL_B.Product3_f;

  /* If: '<S49>/If' */
  if (PubIfDecisionLSM_MDL_B.LineConf[1] > 0) {
    /* Outputs for IfAction SubSystem: '<S49>/If Action Subsystem' incorporates:
     *  ActionPort: '<S186>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem_i(PubIfDecisionLSM_MDL_B.Add_h,
      &LSM_LH1Wij);

    /* End of Outputs for SubSystem: '<S49>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S49>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S188>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem2(&LSM_LH1Wij);

    /* End of Outputs for SubSystem: '<S49>/If Action Subsystem2' */
  }

  /* End of If: '<S49>/If' */

  /* Saturate: '<S49>/Saturation' */
  t_Psi = LSM_RoadWidth1;
  m2 = 2.4F;
  y2 = 5.0F;
  if (t_Psi > y2) {
    /* Saturate: '<S49>/Saturation' */
    PubIfDecisionLSM_MDL_B.Saturation_e = y2;
  } else if (t_Psi < m2) {
    /* Saturate: '<S49>/Saturation' */
    PubIfDecisionLSM_MDL_B.Saturation_e = m2;
  } else {
    /* Saturate: '<S49>/Saturation' */
    PubIfDecisionLSM_MDL_B.Saturation_e = t_Psi;
  }

  /* End of Saturate: '<S49>/Saturation' */
  for (i = 0; i < 12; i++) {
    /* Product: '<S49>/Product9' incorporates:
     *  Constant: '<S49>/Constant14'
     *  Constant: '<S49>/Constant15'
     */
    PubIfDecisionLSM_MDL_B.Product9_g[i] = rtCP_Constant14_Value[i] *
      PubIfDecisionLSM_MDL_B.Saturation_e / 3.75;
  }

  /* S-Function (sfix_look1_dyn): '<S49>/Lookup Table Dynamic1' incorporates:
   *  Constant: '<S49>/Constant13'
   */
  /* Dynamic Look-Up Table Block: '<S49>/Lookup Table Dynamic1'
   * Input0  Data Type:  Floating Point real32_T
   * Input1  Data Type:  Floating Point real_T
   * Input2  Data Type:  Floating Point real_T
   * Output0 Data Type:  Floating Point real32_T
   * Lookup Method: Linear_Endpoint
   *
   */
  LookUp_real32_Treal_T_real32_Treal_T
    ( &(PubIfDecisionLSM_MDL_B.LookupTableDynamic1_b), rtCP_Constant13_Value,
     LSM_CurDis3, &PubIfDecisionLSM_MDL_B.Product9_g[0], 11U);

  /* Lookup_n-D: '<S49>/2-D Lookup Table5' incorporates:
   *  Sum: '<S49>/Sum'
   */
  PubIfDecisionLSM_MDL_B.uDLookupTable5_d = look2_iflf_binlxpw
    (PubIfDecisionLSM_MDL_B.Sum_a, LSM_DeltaDis3, rtCP_uDLookupTable5_bp01Data_h,
     rtCP_uDLookupTable5_bp02Data, rtCP_uDLookupTable5_tableData_f,
     rtCP_uDLookupTable5_maxIndex, 4U);

  /* Product: '<S49>/Product4' */
  LSM_LH31 = PubIfDecisionLSM_MDL_B.LookupTableDynamic1_b *
    PubIfDecisionLSM_MDL_B.uDLookupTable5_d;

  /* Product: '<S49>/Product5' */
  PubIfDecisionLSM_MDL_B.Product5_c = LSM_LH31 *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_h.Fac1;

  /* Lookup_n-D: '<S49>/2-D Lookup Table4' incorporates:
   *  Sum: '<S49>/Sum1'
   */
  LSM_LH32 = look2_iflf_binlxpw(PubIfDecisionLSM_MDL_B.Sum1_p,
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction7.dy3_Ran,
    rtCP_uDLookupTable4_bp01Data_g, rtCP_uDLookupTable4_bp02Data_o,
    rtCP_uDLookupTable4_tableData_b, rtCP_uDLookupTable4_maxIndex_l, 4U);

  /* Product: '<S49>/Product6' */
  PubIfDecisionLSM_MDL_B.Product6_n = LSM_LH32 *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_h.Fac2;

  /* Lookup_n-D: '<S49>/1-D Lookup Table6' */
  LSM_LH33 = look1_iflf_binlxpw(PubIfDecisionLSM_MDL_B.dy3_Rel_c,
    rtCP_uDLookupTable6_bp01Data_f, rtCP_uDLookupTable6_tableData_o, 6U);

  /* Product: '<S49>/Product7' */
  PubIfDecisionLSM_MDL_B.Product7_f = LSM_LH33 *
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction3_h.Fac3;

  /* Sum: '<S49>/Add1' */
  PubIfDecisionLSM_MDL_B.Add1_e = (PubIfDecisionLSM_MDL_B.Product5_c +
    PubIfDecisionLSM_MDL_B.Product6_n) + PubIfDecisionLSM_MDL_B.Product7_f;

  /* If: '<S49>/If1' */
  if (PubIfDecisionLSM_MDL_B.LineConf[2] > 0) {
    /* Outputs for IfAction SubSystem: '<S49>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S187>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem_i(PubIfDecisionLSM_MDL_B.Add1_e,
      &LSM_LH2Wij);

    /* End of Outputs for SubSystem: '<S49>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S49>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S189>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem2(&LSM_LH2Wij);

    /* End of Outputs for SubSystem: '<S49>/If Action Subsystem3' */
  }

  /* End of If: '<S49>/If1' */

  /* MATLAB Function: '<S17>/MATLAB Function5' */
  LSM_LH1Valid = false;
  LSM_LH2Valid = false;
  LSM_Wij_State = 0U;
  t_Psi = 0.5F * *rtu_kapTraj * (PubIfDecisionLSM_MDL_B.preDisMinTable *
    PubIfDecisionLSM_MDL_B.preDisMinTable);
  m2 = (2.0F * PubIfDecisionLSM_MDL_B.A2_k[1] *
        PubIfDecisionLSM_MDL_B.preDisMinTable + PubIfDecisionLSM_MDL_B.A1_n[1])
    + 3.0F * PubIfDecisionLSM_MDL_B.A3_h[1] *
    (PubIfDecisionLSM_MDL_B.preDisMinTable *
     PubIfDecisionLSM_MDL_B.preDisMinTable);
  K40 = (2.0F * PubIfDecisionLSM_MDL_B.A2_k[2] *
         PubIfDecisionLSM_MDL_B.preDisMinTable + PubIfDecisionLSM_MDL_B.A1_n[2])
    + 3.0F * PubIfDecisionLSM_MDL_B.A3_h[2] *
    (PubIfDecisionLSM_MDL_B.preDisMinTable *
     PubIfDecisionLSM_MDL_B.preDisMinTable);
  m2 = ((((PubIfDecisionLSM_MDL_B.A1_n[1] *
           PubIfDecisionLSM_MDL_B.preDisMinTable + PubIfDecisionLSM_MDL_B.A0_o3
           [1]) + PubIfDecisionLSM_MDL_B.preDisMinTable *
          PubIfDecisionLSM_MDL_B.preDisMinTable * PubIfDecisionLSM_MDL_B.A2_k[1])
         + PubIfDecisionLSM_MDL_B.A3_h[1] * rt_powf_snf
         (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) - t_Psi) / sqrtf(m2 * m2
    + 1.0F);
  t_Psi = ((((PubIfDecisionLSM_MDL_B.A1_n[2] *
              PubIfDecisionLSM_MDL_B.preDisMinTable +
              PubIfDecisionLSM_MDL_B.A0_o3[2]) +
             PubIfDecisionLSM_MDL_B.preDisMinTable *
             PubIfDecisionLSM_MDL_B.preDisMinTable *
             PubIfDecisionLSM_MDL_B.A2_k[2]) + PubIfDecisionLSM_MDL_B.A3_h[2] *
            rt_powf_snf(PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) - t_Psi) /
    sqrtf(K40 * K40 + 1.0F);
  K40 = PubIfDecisionLSM_MDL_B.A0_o3[1] - PubIfDecisionLSM_MDL_B.A0_o3[2];
  if ((LSM_LH1Wij >= 0.3) && (LSM_LH2Wij >= 0.3)) {
    if ((K40 - (m2 - t_Psi) > 0.5F) || ((m2 - t_Psi) - K40 > 0.5F) || (fabsf
         (PubIfDecisionLSM_MDL_B.A0_o3[1] - PubIfDecisionLSM_MDL_B.A0_o3[2]) >
         4.2) || (fabsf(PubIfDecisionLSM_MDL_B.A0_o3[1] -
                        PubIfDecisionLSM_MDL_B.A0_o3[2]) < 2.6)) {
      if (LSM_LH1Wij >= LSM_LH2Wij) {
        LSM_LH1Valid = true;
        LSM_Wij_State = 3U;
      } else {
        LSM_LH2Valid = true;
        LSM_Wij_State = 4U;
      }
    } else {
      LSM_LH1Valid = true;
      LSM_LH2Valid = true;
      LSM_Wij_State = 5U;
    }
  } else if (LSM_LH1Wij >= 0.3) {
    LSM_LH1Valid = true;
    LSM_Wij_State = 1U;
  } else {
    if (LSM_LH2Wij >= 0.3) {
      LSM_LH2Valid = true;
      LSM_Wij_State = 2U;
    }
  }

  /* End of MATLAB Function: '<S17>/MATLAB Function5' */

  /* MATLAB Function: '<S17>/MATLAB Function4' */
  PubIfDecisionLSM_MDL_B.CentLineValid = false;
  PubIfDecisionLSM_MDL_B.CentLineC0 = 0.0F;
  PubIfDecisionLSM_MDL_B.CentLineC1 = 0.0F;
  PubIfDecisionLSM_MDL_B.CentLineC2 = 0.0F;
  PubIfDecisionLSM_MDL_B.CentLineC3 = 0.0F;
  PubIfDecisionLSM_MDL_B.CentLineRange = 0.0F;
  PubIfDecisionLSM_MDL_B.CentLineReliable = 0.0F;
  LSM_Line_State = 0U;
  if (LSM_LH1Valid && LSM_LH2Valid) {
    m2 = PubIfDecisionLSM_MDL_B.Range_a[1] - PubIfDecisionLSM_MDL_B.Range_a[2];
    t_Psi = 0.5F;
    K40 = 0.5F;
    if ((m2 > 10.0F) || (m2 < -10.0F)) {
      K40 = m2 * 0.01F;
      t_Psi = fminf(0.5F, K40) + 0.5F;
      K40 = 1.0F - (fminf(0.5F, K40) + 0.5F);
    }

    PubIfDecisionLSM_MDL_B.CentLineValid = true;
    PubIfDecisionLSM_MDL_B.CentLineC0 = (PubIfDecisionLSM_MDL_B.A0_o3[1] +
      PubIfDecisionLSM_MDL_B.A0_o3[2]) * 0.5F;
    PubIfDecisionLSM_MDL_B.CentLineC1 = t_Psi * PubIfDecisionLSM_MDL_B.A1_n[1] +
      K40 * PubIfDecisionLSM_MDL_B.A1_n[2];
    PubIfDecisionLSM_MDL_B.CentLineC2 = t_Psi * PubIfDecisionLSM_MDL_B.A2_k[1] +
      K40 * PubIfDecisionLSM_MDL_B.A2_k[2];
    PubIfDecisionLSM_MDL_B.CentLineC3 = t_Psi * PubIfDecisionLSM_MDL_B.A3_h[1] +
      K40 * PubIfDecisionLSM_MDL_B.A3_h[2];
    PubIfDecisionLSM_MDL_B.CentLineRange = fmaxf(PubIfDecisionLSM_MDL_B.Range_a
      [1], PubIfDecisionLSM_MDL_B.Range_a[2]);
    PubIfDecisionLSM_MDL_B.CentLineReliable = (LSM_LH1Wij + LSM_LH2Wij) * 0.5F;
    LSM_Line_State = 3U;
  } else if (LSM_LH1Valid) {
    PubIfDecisionLSM_MDL_B.CentLineValid = true;
    PubIfDecisionLSM_MDL_B.CentLineC0 = PubIfDecisionLSM_MDL_B.A0_o3[1] - sqrtf
      (PubIfDecisionLSM_MDL_B.A1_n[1] * PubIfDecisionLSM_MDL_B.A1_n[1] + 1.0F) *
      (0.5F * LSM_RoadWidth1);
    PubIfDecisionLSM_MDL_B.CentLineC1 = PubIfDecisionLSM_MDL_B.A1_n[1];
    PubIfDecisionLSM_MDL_B.CentLineC2 = PubIfDecisionLSM_MDL_B.A2_k[1];
    PubIfDecisionLSM_MDL_B.CentLineC3 = PubIfDecisionLSM_MDL_B.A3_h[1];
    PubIfDecisionLSM_MDL_B.CentLineRange = PubIfDecisionLSM_MDL_B.Range_a[1];
    PubIfDecisionLSM_MDL_B.CentLineReliable = LSM_LH1Wij;
    LSM_Line_State = 1U;
  } else {
    if (LSM_LH2Valid) {
      PubIfDecisionLSM_MDL_B.CentLineValid = true;
      PubIfDecisionLSM_MDL_B.CentLineC0 = sqrtf(PubIfDecisionLSM_MDL_B.A1_n[2] *
        PubIfDecisionLSM_MDL_B.A1_n[2] + 1.0F) * (0.5F * LSM_RoadWidth1) +
        PubIfDecisionLSM_MDL_B.A0_o3[2];
      PubIfDecisionLSM_MDL_B.CentLineC1 = PubIfDecisionLSM_MDL_B.A1_n[2];
      PubIfDecisionLSM_MDL_B.CentLineC2 = PubIfDecisionLSM_MDL_B.A2_k[2];
      PubIfDecisionLSM_MDL_B.CentLineC3 = PubIfDecisionLSM_MDL_B.A3_h[2];
      PubIfDecisionLSM_MDL_B.CentLineRange = PubIfDecisionLSM_MDL_B.Range_a[2];
      PubIfDecisionLSM_MDL_B.CentLineReliable = LSM_LH2Wij;
      LSM_Line_State = 2U;
    }
  }

  if (LSM_LH1Wij >= 0.3) {
    PubIfDecisionLSM_MDL_B.LeftLineValid = true;
    PubIfDecisionLSM_MDL_B.LeftLineC0 = sqrtf(PubIfDecisionLSM_MDL_B.A1_n[1] *
      PubIfDecisionLSM_MDL_B.A1_n[1] + 1.0F) * (0.5F * LSM_RoadWidth1) +
      PubIfDecisionLSM_MDL_B.A0_o3[1];
    PubIfDecisionLSM_MDL_B.LeftLineC1 = PubIfDecisionLSM_MDL_B.A1_n[1];
    PubIfDecisionLSM_MDL_B.LeftLineC2 = PubIfDecisionLSM_MDL_B.A2_k[1];
    PubIfDecisionLSM_MDL_B.LeftLineC3 = PubIfDecisionLSM_MDL_B.A3_h[1];
    PubIfDecisionLSM_MDL_B.LeftLineRange = PubIfDecisionLSM_MDL_B.Range_a[1];
    PubIfDecisionLSM_MDL_B.LeftLineReliable = LSM_LH1Wij;
    if ((PubIfDecisionLSM_MDL_B.LineConf[0] > 0) &&
        (PubIfDecisionLSM_MDL_B.A0_o3[0] - PubIfDecisionLSM_MDL_B.A0_o3[1] >
         3.0F) && (PubIfDecisionLSM_MDL_B.A0_o3[0] -
                   PubIfDecisionLSM_MDL_B.A0_o3[1] < 5.5F) &&
        ((((PubIfDecisionLSM_MDL_B.A1_n[0] *
            PubIfDecisionLSM_MDL_B.preDisMinTable +
            PubIfDecisionLSM_MDL_B.A0_o3[0]) +
           PubIfDecisionLSM_MDL_B.preDisMinTable *
           PubIfDecisionLSM_MDL_B.preDisMinTable * PubIfDecisionLSM_MDL_B.A2_k[0])
          + PubIfDecisionLSM_MDL_B.A3_h[0] * rt_powf_snf
          (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) -
         (((PubIfDecisionLSM_MDL_B.A1_n[1] *
            PubIfDecisionLSM_MDL_B.preDisMinTable +
            PubIfDecisionLSM_MDL_B.A0_o3[1]) +
           PubIfDecisionLSM_MDL_B.preDisMinTable *
           PubIfDecisionLSM_MDL_B.preDisMinTable * PubIfDecisionLSM_MDL_B.A2_k[1])
          + PubIfDecisionLSM_MDL_B.A3_h[1] * rt_powf_snf
          (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) > 3.0F)) {
      PubIfDecisionLSM_MDL_B.LeftLaneAvail = true;
    } else {
      PubIfDecisionLSM_MDL_B.LeftLaneAvail = false;
    }
  } else {
    PubIfDecisionLSM_MDL_B.LeftLineValid = false;
    PubIfDecisionLSM_MDL_B.LeftLineC0 = 0.0F;
    PubIfDecisionLSM_MDL_B.LeftLineC1 = 0.0F;
    PubIfDecisionLSM_MDL_B.LeftLineC2 = 0.0F;
    PubIfDecisionLSM_MDL_B.LeftLineC3 = 0.0F;
    PubIfDecisionLSM_MDL_B.LeftLineRange = 0.0F;
    PubIfDecisionLSM_MDL_B.LeftLineReliable = 0.0F;
    PubIfDecisionLSM_MDL_B.LeftLaneAvail = false;
  }

  if (LSM_LH2Wij >= 0.3) {
    PubIfDecisionLSM_MDL_B.RightLineValid = true;
    PubIfDecisionLSM_MDL_B.RightLineC0 = PubIfDecisionLSM_MDL_B.A0_o3[2] - sqrtf
      (PubIfDecisionLSM_MDL_B.A1_n[2] * PubIfDecisionLSM_MDL_B.A1_n[2] + 1.0F) *
      (0.5F * LSM_RoadWidth1);
    PubIfDecisionLSM_MDL_B.RightLineC1 = PubIfDecisionLSM_MDL_B.A1_n[2];
    PubIfDecisionLSM_MDL_B.RightLineC2 = PubIfDecisionLSM_MDL_B.A2_k[2];
    PubIfDecisionLSM_MDL_B.RightLineC3 = PubIfDecisionLSM_MDL_B.A3_h[2];
    PubIfDecisionLSM_MDL_B.RightLineRange = PubIfDecisionLSM_MDL_B.Range_a[2];
    PubIfDecisionLSM_MDL_B.RightLineReliable = LSM_LH2Wij;
    if ((PubIfDecisionLSM_MDL_B.LineConf[3] > 0) &&
        (PubIfDecisionLSM_MDL_B.A0_o3[2] - PubIfDecisionLSM_MDL_B.A0_o3[3] >
         3.0F) && (PubIfDecisionLSM_MDL_B.A0_o3[2] -
                   PubIfDecisionLSM_MDL_B.A0_o3[3] < 5.5F) &&
        ((((PubIfDecisionLSM_MDL_B.A1_n[2] *
            PubIfDecisionLSM_MDL_B.preDisMinTable +
            PubIfDecisionLSM_MDL_B.A0_o3[2]) +
           PubIfDecisionLSM_MDL_B.preDisMinTable *
           PubIfDecisionLSM_MDL_B.preDisMinTable * PubIfDecisionLSM_MDL_B.A2_k[2])
          + PubIfDecisionLSM_MDL_B.A3_h[2] * rt_powf_snf
          (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) -
         (((PubIfDecisionLSM_MDL_B.A1_n[3] *
            PubIfDecisionLSM_MDL_B.preDisMinTable +
            PubIfDecisionLSM_MDL_B.A0_o3[3]) +
           PubIfDecisionLSM_MDL_B.preDisMinTable *
           PubIfDecisionLSM_MDL_B.preDisMinTable * PubIfDecisionLSM_MDL_B.A2_k[3])
          + PubIfDecisionLSM_MDL_B.A3_h[3] * rt_powf_snf
          (PubIfDecisionLSM_MDL_B.preDisMinTable, 3.0F)) > 3.0F)) {
      PubIfDecisionLSM_MDL_B.RightLaneAvail = true;
    } else {
      PubIfDecisionLSM_MDL_B.RightLaneAvail = false;
    }
  } else {
    PubIfDecisionLSM_MDL_B.RightLineValid = false;
    PubIfDecisionLSM_MDL_B.RightLineC0 = 0.0F;
    PubIfDecisionLSM_MDL_B.RightLineC1 = 0.0F;
    PubIfDecisionLSM_MDL_B.RightLineC2 = 0.0F;
    PubIfDecisionLSM_MDL_B.RightLineC3 = 0.0F;
    PubIfDecisionLSM_MDL_B.RightLineRange = 0.0F;
    PubIfDecisionLSM_MDL_B.RightLineReliable = 0.0F;
    PubIfDecisionLSM_MDL_B.RightLaneAvail = false;
  }

  /* End of MATLAB Function: '<S17>/MATLAB Function4' */

  /* UnitDelay: '<S17>/Unit Delay11' */
  PubIfDecisionLSM_MDL_B.UnitDelay11 =
    PubIfDecisionLSM_MDL_DW.UnitDelay11_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay6' */
  PubIfDecisionLSM_MDL_B.UnitDelay6_a =
    PubIfDecisionLSM_MDL_DW.UnitDelay6_DSTATE_p;

  /* UnitDelay: '<S17>/Unit Delay1' */
  PubIfDecisionLSM_MDL_B.UnitDelay1_i =
    PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_l;

  /* MATLAB Function: '<S17>/MATLAB Function6' */
  i = PubIfDecisionLSM_MDL_B.UnitDelay6_a;
  qY = i - 1U;
  if (qY > (uint32_T)i) {
    qY = 0U;
  }

  i = (int32_T)qY;
  LConf = (uint8_T)i;
  i = PubIfDecisionLSM_MDL_B.UnitDelay1_i;
  qY = i - 1U;
  if (qY > (uint32_T)i) {
    qY = 0U;
  }

  i = (int32_T)qY;
  RConf = (uint8_T)i;
  if ((rtu_VSM_HMI->HWASts == 3) && ((PubIfDecisionLSM_MDL_B.UnitDelay11 == 5) ||
       (PubIfDecisionLSM_MDL_B.UnitDelay11 == 6))) {
    LConf = 250U;
  }

  Update = (LConf > 0);
  if ((!Update) && (rtu_VSM_HMI->HWASts != 5) && (rtu_VSM_HMI->HWASts != 6) &&
      (rtu_VSM_HMI->LCKSts == 3) && (PubIfDecisionLSM_MDL_B.RelationalOperator ||
       PubIfDecisionLSM_MDL_B.RelationalOperator_i)) {
    RConf = 250U;
  }

  if ((rtu_VSM_HMI->LCKSts == 1) || (rtu_VSM_HMI->LCKSts == 0) ||
      (rtu_VSM_HMI->LCKSts == 2)) {
    LConf = 0U;
    RConf = 0U;
  }

  PubIfDecisionLSM_MDL_B.LckLock_b = (RConf > 0);
  PubIfDecisionLSM_MDL_B.LaneChangeCancel_b = Update;
  PubIfDecisionLSM_MDL_B.Cnt1_i = LConf;
  PubIfDecisionLSM_MDL_B.Cnt2_b = RConf;

  /* End of MATLAB Function: '<S17>/MATLAB Function6' */

  /* UnitDelay: '<S17>/Unit Delay10' */
  PubIfDecisionLSM_MDL_B.UnitDelay10 =
    PubIfDecisionLSM_MDL_DW.UnitDelay10_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay12' */
  PubIfDecisionLSM_MDL_B.UnitDelay12 =
    PubIfDecisionLSM_MDL_DW.UnitDelay12_DSTATE;

  /* MATLAB Function: '<S17>/VisLineFilter5' */
  PubIfDecisionLSM_MDL_B.PathValid[0] = false;
  PubIfDecisionLSM_MDL_B.PathA3[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathA2[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathA1[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathA0[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathRange[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathValid[1] = false;
  PubIfDecisionLSM_MDL_B.PathA3[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathA2[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathA1[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathA0[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathRange[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathValid[2] = false;
  PubIfDecisionLSM_MDL_B.PathA3[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathA2[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathA1[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathA0[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathRange[2] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathReliable[0] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathReliable[1] = 0.0F;
  PubIfDecisionLSM_MDL_B.PathReliable[2] = 0.0F;
  LSM_PathLaneAvail[0] = false;
  LSM_PathLaneAvail[1] = false;
  LSM_PathLaneAvail[2] = false;
  if (PubIfDecisionLSM_MDL_B.LckLock_b) {
    LockID = PubIfDecisionLSM_MDL_B.UnitDelay12;
  } else {
    LockID = 0;
  }

  if (PubIfDecisionLSM_MDL_B.LckLock_b && PubIfDecisionLSM_MDL_B.UnitDelay10) {
    if (PubIfDecisionLSM_MDL_B.RelationalOperator) {
      i = LockID + 1;
      if (i > 127) {
        i = 127;
      }

      LockID = (int8_T)i;
    }

    if (PubIfDecisionLSM_MDL_B.RelationalOperator_i) {
      i = LockID + -1;
      if (i < -128) {
        i = -128;
      }

      LockID = (int8_T)i;
    }
  }

  if (LockID == 1) {
    PubIfDecisionLSM_MDL_B.PathValid[1] = PubIfDecisionLSM_MDL_B.RightLineValid;
    PubIfDecisionLSM_MDL_B.PathA3[1] = PubIfDecisionLSM_MDL_B.RightLineC3;
    PubIfDecisionLSM_MDL_B.PathA2[1] = PubIfDecisionLSM_MDL_B.RightLineC2;
    PubIfDecisionLSM_MDL_B.PathA1[1] = PubIfDecisionLSM_MDL_B.RightLineC1;
    PubIfDecisionLSM_MDL_B.PathA0[1] = PubIfDecisionLSM_MDL_B.RightLineC0;
    PubIfDecisionLSM_MDL_B.PathRange[1] = PubIfDecisionLSM_MDL_B.RightLineRange;
    PubIfDecisionLSM_MDL_B.PathReliable[1] =
      PubIfDecisionLSM_MDL_B.RightLineReliable;
    LSM_PathLaneAvail[1] = true;
  } else if (LockID == -1) {
    PubIfDecisionLSM_MDL_B.PathValid[1] = PubIfDecisionLSM_MDL_B.LeftLineValid;
    PubIfDecisionLSM_MDL_B.PathA3[1] = PubIfDecisionLSM_MDL_B.LeftLineC3;
    PubIfDecisionLSM_MDL_B.PathA2[1] = PubIfDecisionLSM_MDL_B.LeftLineC2;
    PubIfDecisionLSM_MDL_B.PathA1[1] = PubIfDecisionLSM_MDL_B.LeftLineC1;
    PubIfDecisionLSM_MDL_B.PathA0[1] = PubIfDecisionLSM_MDL_B.LeftLineC0;
    PubIfDecisionLSM_MDL_B.PathRange[1] = PubIfDecisionLSM_MDL_B.LeftLineRange;
    PubIfDecisionLSM_MDL_B.PathReliable[1] =
      PubIfDecisionLSM_MDL_B.LeftLineReliable;
    LSM_PathLaneAvail[1] = true;
  } else {
    if (LockID == 0) {
      PubIfDecisionLSM_MDL_B.PathValid[0] = PubIfDecisionLSM_MDL_B.LeftLineValid;
      PubIfDecisionLSM_MDL_B.PathA3[0] = PubIfDecisionLSM_MDL_B.LeftLineC3;
      PubIfDecisionLSM_MDL_B.PathA2[0] = PubIfDecisionLSM_MDL_B.LeftLineC2;
      PubIfDecisionLSM_MDL_B.PathA1[0] = PubIfDecisionLSM_MDL_B.LeftLineC1;
      PubIfDecisionLSM_MDL_B.PathA0[0] = PubIfDecisionLSM_MDL_B.LeftLineC0;
      PubIfDecisionLSM_MDL_B.PathRange[0] = PubIfDecisionLSM_MDL_B.LeftLineRange;
      PubIfDecisionLSM_MDL_B.PathReliable[0] =
        PubIfDecisionLSM_MDL_B.LeftLineReliable;
      LSM_PathLaneAvail[0] = PubIfDecisionLSM_MDL_B.LeftLaneAvail;
      PubIfDecisionLSM_MDL_B.PathValid[1] = PubIfDecisionLSM_MDL_B.CentLineValid;
      PubIfDecisionLSM_MDL_B.PathA3[1] = PubIfDecisionLSM_MDL_B.CentLineC3;
      PubIfDecisionLSM_MDL_B.PathA2[1] = PubIfDecisionLSM_MDL_B.CentLineC2;
      PubIfDecisionLSM_MDL_B.PathA1[1] = PubIfDecisionLSM_MDL_B.CentLineC1;
      PubIfDecisionLSM_MDL_B.PathA0[1] = PubIfDecisionLSM_MDL_B.CentLineC0;
      PubIfDecisionLSM_MDL_B.PathRange[1] = PubIfDecisionLSM_MDL_B.CentLineRange;
      PubIfDecisionLSM_MDL_B.PathReliable[1] =
        PubIfDecisionLSM_MDL_B.CentLineReliable;
      LSM_PathLaneAvail[1] = true;
      PubIfDecisionLSM_MDL_B.PathValid[2] =
        PubIfDecisionLSM_MDL_B.RightLineValid;
      PubIfDecisionLSM_MDL_B.PathA3[2] = PubIfDecisionLSM_MDL_B.RightLineC3;
      PubIfDecisionLSM_MDL_B.PathA2[2] = PubIfDecisionLSM_MDL_B.RightLineC2;
      PubIfDecisionLSM_MDL_B.PathA1[2] = PubIfDecisionLSM_MDL_B.RightLineC1;
      PubIfDecisionLSM_MDL_B.PathA0[2] = PubIfDecisionLSM_MDL_B.RightLineC0;
      PubIfDecisionLSM_MDL_B.PathRange[2] =
        PubIfDecisionLSM_MDL_B.RightLineRange;
      PubIfDecisionLSM_MDL_B.PathReliable[2] =
        PubIfDecisionLSM_MDL_B.RightLineReliable;
      LSM_PathLaneAvail[2] = PubIfDecisionLSM_MDL_B.RightLaneAvail;
    }
  }

  PubIfDecisionLSM_MDL_B.LockID = LockID;

  /* End of MATLAB Function: '<S17>/VisLineFilter5' */

  /* UnitDelay: '<S31>/Unit Delay49' */
  PubIfDecisionLSM_MDL_B.UnitDelay49_c =
    PubIfDecisionLSM_MDL_DW.UnitDelay49_DSTATE_e;

  /* RelationalOperator: '<S31>/Relational Operator' */
  PubIfDecisionLSM_MDL_B.RelationalOperator_e =
    (PubIfDecisionLSM_MDL_B.UnitDelay49_c != rtu_TOS_P0_TARGET_LINE->OTL_Cnt);

  /* UnitDelay: '<S17>/Unit Delay42' */
  PubIfDecisionLSM_MDL_B.UnitDelay42 =
    PubIfDecisionLSM_MDL_DW.UnitDelay42_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay43' */
  PubIfDecisionLSM_MDL_B.UnitDelay43 =
    PubIfDecisionLSM_MDL_DW.UnitDelay43_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay48' */
  PubIfDecisionLSM_MDL_B.UnitDelay48 =
    PubIfDecisionLSM_MDL_DW.UnitDelay48_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay47' */
  PubIfDecisionLSM_MDL_B.UnitDelay47 =
    PubIfDecisionLSM_MDL_DW.UnitDelay47_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay46' */
  PubIfDecisionLSM_MDL_B.UnitDelay46 =
    PubIfDecisionLSM_MDL_DW.UnitDelay46_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay45' */
  PubIfDecisionLSM_MDL_B.UnitDelay45 =
    PubIfDecisionLSM_MDL_DW.UnitDelay45_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay44' */
  PubIfDecisionLSM_MDL_B.UnitDelay44 =
    PubIfDecisionLSM_MDL_DW.UnitDelay44_DSTATE;

  /* MATLAB Function: '<S17>/VisLineFilter1' incorporates:
   *  Constant: '<S17>/Constant2'
   */
  t_Psi = 0.02F;
  K40 = PubIfDecisionLSM_MDL_B.UnitDelay45;
  if (rtu_TOS_P0_TARGET_LINE->OTL_Valid &&
      PubIfDecisionLSM_MDL_B.RelationalOperator_e) {
    PubIfDecisionLSM_MDL_B.LineValid_p = true;
    PubIfDecisionLSM_MDL_B.A3_d = rtu_TOS_P0_TARGET_LINE->OTL_C3;
    PubIfDecisionLSM_MDL_B.A2_j = rtu_TOS_P0_TARGET_LINE->OTL_C2;
    PubIfDecisionLSM_MDL_B.A1_d = rtu_TOS_P0_TARGET_LINE->OTL_C1;
    PubIfDecisionLSM_MDL_B.A0_c = rtu_TOS_P0_TARGET_LINE->OTL_C0;
    K40 = rtu_TOS_P0_TARGET_LINE->OTL_Range;
    m2 = 0.0F;
  } else {
    m2 = fminf(PubIfDecisionLSM_MDL_B.UnitDelay44 + 0.02F, 10.0F);
    if (PubIfDecisionLSM_MDL_B.UnitDelay42 && (m2 < 1.0F) && (*rtu_vxvRefMs >
         1.8)) {
      xi[1] = 0.25F * PubIfDecisionLSM_MDL_B.UnitDelay45;
      xi[2] = 0.5F * PubIfDecisionLSM_MDL_B.UnitDelay45;
      xi[3] = PubIfDecisionLSM_MDL_B.UnitDelay45;
      tFilter = 0.0F - LSM_dDeltaX;
      t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay43 * 0.0F +
                  PubIfDecisionLSM_MDL_B.UnitDelay48 * 0.0F) +
                 PubIfDecisionLSM_MDL_B.UnitDelay47 * 0.0F) +
                PubIfDecisionLSM_MDL_B.UnitDelay46) - LSM_dDeltaY;
      t_dx[0] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      t_dx_0[0] = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi_0 = xi[1];
      t_dy_0 = rt_powf_snf(xi_0, 3.0F);
      x_0 = xi_0 * xi_0;
      tFilter = xi_0 - LSM_dDeltaX;
      t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay43 * t_dy_0 +
                  PubIfDecisionLSM_MDL_B.UnitDelay48 * x_0) +
                 PubIfDecisionLSM_MDL_B.UnitDelay47 * xi_0) +
                PubIfDecisionLSM_MDL_B.UnitDelay46) - LSM_dDeltaY;
      t_dx[1] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      t_dx_0[1] = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi_0 = xi[2];
      t_dy_0 = rt_powf_snf(xi_0, 3.0F);
      x_0 = xi_0 * xi_0;
      tFilter = xi_0 - LSM_dDeltaX;
      t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay43 * t_dy_0 +
                  PubIfDecisionLSM_MDL_B.UnitDelay48 * x_0) +
                 PubIfDecisionLSM_MDL_B.UnitDelay47 * xi_0) +
                PubIfDecisionLSM_MDL_B.UnitDelay46) - LSM_dDeltaY;
      t_dx[2] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      t_dx_0[2] = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi_0 = xi[3];
      t_dy_0 = rt_powf_snf(xi_0, 3.0F);
      x_0 = xi_0 * xi_0;
      tFilter = xi_0 - LSM_dDeltaX;
      t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay43 * t_dy_0 +
                  PubIfDecisionLSM_MDL_B.UnitDelay48 * x_0) +
                 PubIfDecisionLSM_MDL_B.UnitDelay47 * xi_0) +
                PubIfDecisionLSM_MDL_B.UnitDelay46) - LSM_dDeltaY;
      t_dx[3] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      t_dx_0[3] = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      pl_3fC1hwr1(t_dx, t_dx_0, &RefA0_3, &t, &y3, &y2);
      PubIfDecisionLSM_MDL_B.A3_d = RefA0_3;
      PubIfDecisionLSM_MDL_B.A2_j = t;
      PubIfDecisionLSM_MDL_B.A1_d = y3;
      PubIfDecisionLSM_MDL_B.A0_c = y2;
      PubIfDecisionLSM_MDL_B.LineValid_p = true;
      K40 -= *rtu_vxvRefMs * t_Psi;
      PubIfDecisionLSM_MDL_B.LineValid_p = ((!(K40 < 1.0F)) &&
        PubIfDecisionLSM_MDL_B.LineValid_p);
    } else if (PubIfDecisionLSM_MDL_B.UnitDelay42 && (*rtu_vxvRefMs <= 1.8)) {
      xi[1] = 0.25F * PubIfDecisionLSM_MDL_B.UnitDelay45;
      xi[2] = 0.5F * PubIfDecisionLSM_MDL_B.UnitDelay45;
      xi[3] = PubIfDecisionLSM_MDL_B.UnitDelay45;
      tFilter = 0.0F - LSM_dDeltaX;
      t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay43 * 0.0F +
                  PubIfDecisionLSM_MDL_B.UnitDelay48 * 0.0F) +
                 PubIfDecisionLSM_MDL_B.UnitDelay47 * 0.0F) +
                PubIfDecisionLSM_MDL_B.UnitDelay46) - LSM_dDeltaY;
      t_dx[0] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      t_dx_0[0] = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi_0 = xi[1];
      t_dy_0 = rt_powf_snf(xi_0, 3.0F);
      x_0 = xi_0 * xi_0;
      tFilter = xi_0 - LSM_dDeltaX;
      t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay43 * t_dy_0 +
                  PubIfDecisionLSM_MDL_B.UnitDelay48 * x_0) +
                 PubIfDecisionLSM_MDL_B.UnitDelay47 * xi_0) +
                PubIfDecisionLSM_MDL_B.UnitDelay46) - LSM_dDeltaY;
      t_dx[1] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      t_dx_0[1] = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi_0 = xi[2];
      t_dy_0 = rt_powf_snf(xi_0, 3.0F);
      x_0 = xi_0 * xi_0;
      tFilter = xi_0 - LSM_dDeltaX;
      t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay43 * t_dy_0 +
                  PubIfDecisionLSM_MDL_B.UnitDelay48 * x_0) +
                 PubIfDecisionLSM_MDL_B.UnitDelay47 * xi_0) +
                PubIfDecisionLSM_MDL_B.UnitDelay46) - LSM_dDeltaY;
      t_dx[2] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      t_dx_0[2] = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      xi_0 = xi[3];
      t_dy_0 = rt_powf_snf(xi_0, 3.0F);
      x_0 = xi_0 * xi_0;
      tFilter = xi_0 - LSM_dDeltaX;
      t_dy_0 = (((PubIfDecisionLSM_MDL_B.UnitDelay43 * t_dy_0 +
                  PubIfDecisionLSM_MDL_B.UnitDelay48 * x_0) +
                 PubIfDecisionLSM_MDL_B.UnitDelay47 * xi_0) +
                PubIfDecisionLSM_MDL_B.UnitDelay46) - LSM_dDeltaY;
      t_dx[3] = tFilter * LSM_CosOfPsi + t_dy_0 * LSM_SinOfsi;
      t_dx_0[3] = -tFilter * LSM_SinOfsi + t_dy_0 * LSM_CosOfPsi;
      pl_3fC1hwr1(t_dx, t_dx_0, &t_Psi, &RefA0_3, &t, &y3);
      PubIfDecisionLSM_MDL_B.A3_d = t_Psi;
      PubIfDecisionLSM_MDL_B.A2_j = RefA0_3;
      PubIfDecisionLSM_MDL_B.A1_d = t;
      PubIfDecisionLSM_MDL_B.A0_c = y3;
      PubIfDecisionLSM_MDL_B.LineValid_p = true;
      K40 = fmaxf(5.0F, K40);
    } else {
      PubIfDecisionLSM_MDL_B.LineValid_p = false;
      PubIfDecisionLSM_MDL_B.A3_d = 0.0F;
      PubIfDecisionLSM_MDL_B.A2_j = 0.0F;
      PubIfDecisionLSM_MDL_B.A1_d = 0.0F;
      PubIfDecisionLSM_MDL_B.A0_c = 0.0F;
      K40 = 0.0F;
    }
  }

  PubIfDecisionLSM_MDL_B.Range_m = K40;
  PubIfDecisionLSM_MDL_B.tLost_f = m2;

  /* End of MATLAB Function: '<S17>/VisLineFilter1' */

  /* Gain: '<S47>/Gain3' */
  PubIfDecisionLSM_MDL_B.Gain3_i = 3.6F * *rtu_vxvRefMs;

  /* Gain: '<S47>/Gain4' */
  PubIfDecisionLSM_MDL_B.Gain4_e = 1.03F * PubIfDecisionLSM_MDL_B.Gain3_i;

  /* Sum: '<S47>/Sum' incorporates:
   *  Constant: '<S47>/Constant9'
   */
  PubIfDecisionLSM_MDL_B.Sum_e = PubIfDecisionLSM_MDL_B.Gain4_e + 1.3F;

  /* Lookup_n-D: '<S47>/preDisMinTable7' incorporates:
   *  Sum: '<S47>/Sum'
   */
  PubIfDecisionLSM_MDL_B.preDisMinTable7 = look1_iflf_binlcpw
    (PubIfDecisionLSM_MDL_B.Sum_e, P_LSM_DOP_C1AndC2_Lim_X,
     P_LSM_SingleLine_DOPOut_C1, 6U);

  /* Lookup_n-D: '<S47>/preDisMinTable5' incorporates:
   *  Sum: '<S47>/Sum'
   */
  PubIfDecisionLSM_MDL_B.preDisMinTable5 = look1_iflf_binlcpw
    (PubIfDecisionLSM_MDL_B.Sum_e, P_LSM_DOP_C1AndC2_Lim_X,
     P_LSM_DoubleLine_DOPOut_C1, 6U);

  /* UnitDelay: '<S47>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_cl =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_c;

  /* Lookup_n-D: '<S47>/preDisMinTable1' incorporates:
   *  Sum: '<S47>/Sum'
   */
  PubIfDecisionLSM_MDL_B.preDisMinTable1 = look1_iflf_binlcpw
    (PubIfDecisionLSM_MDL_B.Sum_e, P_LSM_DOP_C1AndC2_Lim_X,
     P_LSM_DOP_C1_EN_Limit, 6U);

  /* Lookup_n-D: '<S47>/preDisMinTable2' incorporates:
   *  Sum: '<S47>/Sum'
   */
  PubIfDecisionLSM_MDL_B.preDisMinTable2 = look1_iflf_binlcpw
    (PubIfDecisionLSM_MDL_B.Sum_e, P_LSM_DOP_C1AndC2_Lim_X,
     P_LSM_DOP_C2_EN_Limit, 6U);

  /* Lookup_n-D: '<S47>/preDisMinTable3' incorporates:
   *  Sum: '<S47>/Sum'
   */
  PubIfDecisionLSM_MDL_B.preDisMinTable3 = look1_iflf_binlcpw
    (PubIfDecisionLSM_MDL_B.Sum_e, P_LSM_DOP_C1AndC2_Lim_X,
     P_LSM_DOP_C1_out_Limit, 6U);

  /* Lookup_n-D: '<S47>/preDisMinTable4' incorporates:
   *  Sum: '<S47>/Sum'
   */
  PubIfDecisionLSM_MDL_B.preDisMinTable4 = look1_iflf_binlcpw
    (PubIfDecisionLSM_MDL_B.Sum_e, P_LSM_DOP_C1AndC2_Lim_X,
     P_LSM_DOP_C2_out_Limit, 6U);

  /* UnitDelay: '<S65>/Unit Delay2' */
  PubIfDecisionLSM_MDL_B.UnitDelay2_jz =
    PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_l;

  /* UnitDelay: '<S65>/Unit Delay1' */
  PubIfDecisionLSM_MDL_B.UnitDelay1_d =
    PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_g;

  /* If: '<S65>/If' */
  if (PubIfDecisionLSM_MDL_B.UnitDelay2_jz && PubIfDecisionLSM_MDL_B.LineValid_p)
  {
    /* Outputs for IfAction SubSystem: '<S65>/If Action Subsystem' incorporates:
     *  ActionPort: '<S66>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem(PubIfDecisionLSM_MDL_B.UnitDelay1_d,
      &PubIfDecisionLSM_MDL_B.Merge_j, &PubIfDecisionLSM_MDL_B.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S65>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S65>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S67>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem1(&PubIfDecisionLSM_MDL_B.Merge_j);

    /* End of Outputs for SubSystem: '<S65>/If Action Subsystem1' */
  }

  /* End of If: '<S65>/If' */

  /* Product: '<S65>/Product' incorporates:
   *  Constant: '<S65>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Product_d = (real32_T)PubIfDecisionLSM_MDL_B.Merge_j *
    0.02F;

  /* RelationalOperator: '<S47>/Relational Operator3' incorporates:
   *  Constant: '<S47>/Constant23'
   */
  PubIfDecisionLSM_MDL_B.RelationalOperator3_o =
    (PubIfDecisionLSM_MDL_B.Product_d > P_LSM_DOPValid_CheckTime);

  /* UnitDelay: '<S47>/Unit Delay2' */
  PubIfDecisionLSM_MDL_B.UnitDelay2_j =
    PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_p;

  /* UnitDelay: '<S47>/Unit Delay1' */
  PubIfDecisionLSM_MDL_B.UnitDelay1 = PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE;

  /* MATLAB Function: '<S47>/MATLAB Function' incorporates:
   *  Constant: '<S47>/Constant14'
   *  Constant: '<S47>/Constant3'
   *  Constant: '<S47>/Constant6'
   */
  LSM_DOP_EN = false;
  LSM_DOP_Out = false;
  if ((PubIfDecisionLSM_MDL_B.UnitDelay_cl != 2) &&
      PubIfDecisionLSM_MDL_B.RelationalOperator3_o) {
    if ((fabsf(PubIfDecisionLSM_MDL_B.A0_c) < P_LSM_DOP_C0_EN_Limit) && (fabsf
         (PubIfDecisionLSM_MDL_B.A1_d) < PubIfDecisionLSM_MDL_B.preDisMinTable1)
        && (fabsf(PubIfDecisionLSM_MDL_B.A2_j) <
            PubIfDecisionLSM_MDL_B.preDisMinTable2)) {
      LSM_DOP_EN = ((fabsf(PubIfDecisionLSM_MDL_B.UnitDelay2_j -
                           PubIfDecisionLSM_MDL_B.UnitDelay1) <
                     P_LSM_DOP_In_Pre2Dop_Dis) || LSM_DOP_EN);
    }
  } else {
    if ((PubIfDecisionLSM_MDL_B.UnitDelay_cl == 2) && ((fabsf
          (PubIfDecisionLSM_MDL_B.A0_c) > P_LSM_DOP_C0_out_Limit) || (fabsf
          (PubIfDecisionLSM_MDL_B.A1_d) > PubIfDecisionLSM_MDL_B.preDisMinTable3)
         || (fabsf(PubIfDecisionLSM_MDL_B.A2_j) >
             PubIfDecisionLSM_MDL_B.preDisMinTable4) || (fabsf
          (PubIfDecisionLSM_MDL_B.UnitDelay2_j -
           PubIfDecisionLSM_MDL_B.UnitDelay1) > P_LSM_DOP_Out_Pre2Dop_Dis) ||
         (!PubIfDecisionLSM_MDL_B.RelationalOperator3_o))) {
      LSM_DOP_Out = true;
    }
  }

  /* End of MATLAB Function: '<S47>/MATLAB Function' */

  /* MATLAB Function: '<S47>/LineSelect1' */
  PubIfDecisionLSM_MDL_B.DOP2Cent_flag = 0U;
  PubIfDecisionLSM_MDL_B.Off2Cent_flag = 0U;
  PubIfDecisionLSM_MDL_B.Off2DOP_flag = 0U;
  PubIfDecisionLSM_MDL_B.Cent2Off_flag = 0U;
  PubIfDecisionLSM_MDL_B.DOP2Off_flag = 0U;
  PubIfDecisionLSM_MDL_B.Cent2DOP_flag = 0U;
  t_Psi = 0.5F * *rtu_kapTraj * (PubIfDecisionLSM_MDL_B.preDisMinTable_h *
    PubIfDecisionLSM_MDL_B.preDisMinTable_h);
  RefA0_3 = ((PubIfDecisionLSM_MDL_B.PathA1[1] *
              PubIfDecisionLSM_MDL_B.preDisMinTable_h +
              PubIfDecisionLSM_MDL_B.PathA0[1]) +
             PubIfDecisionLSM_MDL_B.preDisMinTable_h *
             PubIfDecisionLSM_MDL_B.preDisMinTable_h *
             PubIfDecisionLSM_MDL_B.PathA2[1]) + PubIfDecisionLSM_MDL_B.PathA3[1]
    * rt_powf_snf(PubIfDecisionLSM_MDL_B.preDisMinTable_h, 3.0F);
  m2 = ((PubIfDecisionLSM_MDL_B.A1_d * PubIfDecisionLSM_MDL_B.preDisMinTable_h +
         PubIfDecisionLSM_MDL_B.A0_c) + PubIfDecisionLSM_MDL_B.preDisMinTable_h *
        PubIfDecisionLSM_MDL_B.preDisMinTable_h * PubIfDecisionLSM_MDL_B.A2_j) +
    PubIfDecisionLSM_MDL_B.A3_d * rt_powf_snf
    (PubIfDecisionLSM_MDL_B.preDisMinTable_h, 3.0F);
  K40 = RefA0_3 - m2;
  RefA0_3 = t_Psi - RefA0_3;
  if (LSM_DOP_Out && (LSM_Line_State != 0)) {
    PubIfDecisionLSM_MDL_B.DOP2Cent_flag = 1U;
  } else {
    if (!LSM_DOP_Out) {
      if ((LSM_Line_State != 1) && (LSM_Line_State != 2) && (LSM_Line_State != 0))
      {
        if (((fabsf(RefA0_3) < P_LSM_DoubleLine_Pre2Cent_Dislimit) || (fabsf
              (PubIfDecisionLSM_MDL_B.PathA0[1]) <
              P_LSM_DoubleLine_Curr2Cent_Dislimit) || (fabsf(K40) <
              P_LSM_DoubleLine_Dop2Cent_Dislimit)) && (fabsf
             (PubIfDecisionLSM_MDL_B.PathA1[1]) <
             PubIfDecisionLSM_MDL_B.preDisMinTable5)) {
          PubIfDecisionLSM_MDL_B.DOP2Cent_flag = 1U;
        }
      } else {
        if ((LSM_Line_State != 0) && ((fabsf(RefA0_3) <
              P_LSM_SingleLine_Pre2Cent_Dislimit) || (fabsf
              (PubIfDecisionLSM_MDL_B.PathA0[1]) <
              P_LSM_SingleLine_Curr2Cent_Dislimit) || (fabsf(K40) <
              P_LSM_SingleLine_Dop2Cent_Dislimit)) && (fabsf
             (PubIfDecisionLSM_MDL_B.PathA1[1]) <
             PubIfDecisionLSM_MDL_B.preDisMinTable7)) {
          PubIfDecisionLSM_MDL_B.DOP2Cent_flag = 1U;
        }
      }
    }
  }

  if (PubIfDecisionLSM_MDL_B.PathValid[1]) {
    PubIfDecisionLSM_MDL_B.Off2Cent_flag = 1U;
  }

  if (LSM_DOP_EN && (PubIfDecisionLSM_MDL_B.Sum_e < 55.0F)) {
    PubIfDecisionLSM_MDL_B.Off2DOP_flag = 1U;
  }

  if (LSM_Line_State == 0) {
    PubIfDecisionLSM_MDL_B.Cent2Off_flag = 1U;
  }

  if (LSM_DOP_Out || (PubIfDecisionLSM_MDL_B.Sum_e >= 60.0F)) {
    PubIfDecisionLSM_MDL_B.DOP2Off_flag = 1U;
  }

  if ((LSM_Line_State == 0) && LSM_DOP_EN && (PubIfDecisionLSM_MDL_B.Sum_e <
       55.0F)) {
    PubIfDecisionLSM_MDL_B.Cent2DOP_flag = 1U;
  }

  PubIfDecisionLSM_MDL_B.dy_pre = t_Psi;
  PubIfDecisionLSM_MDL_B.Y_DOP = m2;

  /* End of MATLAB Function: '<S47>/LineSelect1' */

  /* Chart: '<S47>/TJA_Line_Select' */
  if (PubIfDecisionLSM_MDL_DW.is_active_c30_PubIfDecisionLSM_MDL == 0U) {
    PubIfDecisionLSM_MDL_DW.is_active_c30_PubIfDecisionLSM_MDL = 1U;
    PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL =
      PubIfDecisionLSM_MDL_IN_OFF;
    LSM_TJA_Line_State = 0U;
    LSM_Line_source = 0U;
  } else {
    switch (PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL) {
     case PubIfDecisionLSM_MDL_IN_DOP_Line:
      LSM_TJA_Line_State = 2U;
      LSM_Line_source = 1U;
      if (PubIfDecisionLSM_MDL_B.DOP2Cent_flag != 0) {
        PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL =
          PubIfDecisionLSM_MDL_IN_EQ4_Line;
        LSM_TJA_Line_State = 1U;
        LSM_Line_source = 0U;
      } else {
        if (PubIfDecisionLSM_MDL_B.DOP2Off_flag != 0) {
          PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL =
            PubIfDecisionLSM_MDL_IN_OFF;
          LSM_TJA_Line_State = 0U;
          LSM_Line_source = 0U;
        }
      }
      break;

     case PubIfDecisionLSM_MDL_IN_EQ4_Line:
      LSM_TJA_Line_State = 1U;
      LSM_Line_source = 0U;
      if (PubIfDecisionLSM_MDL_B.Cent2DOP_flag != 0) {
        PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL =
          PubIfDecisionLSM_MDL_IN_DOP_Line;
        LSM_TJA_Line_State = 2U;
        LSM_Line_source = 1U;
      } else {
        if (PubIfDecisionLSM_MDL_B.Cent2Off_flag != 0) {
          PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL =
            PubIfDecisionLSM_MDL_IN_OFF;
          LSM_TJA_Line_State = 0U;
          LSM_Line_source = 0U;
        }
      }
      break;

     default:
      /* case IN_OFF: */
      LSM_TJA_Line_State = 0U;
      LSM_Line_source = 0U;
      if (PubIfDecisionLSM_MDL_B.Off2Cent_flag != 0) {
        PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL =
          PubIfDecisionLSM_MDL_IN_EQ4_Line;
        LSM_TJA_Line_State = 1U;
        LSM_Line_source = 0U;
      } else {
        if (PubIfDecisionLSM_MDL_B.Off2DOP_flag != 0) {
          PubIfDecisionLSM_MDL_DW.is_c30_PubIfDecisionLSM_MDL =
            PubIfDecisionLSM_MDL_IN_DOP_Line;
          LSM_TJA_Line_State = 2U;
          LSM_Line_source = 1U;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S47>/TJA_Line_Select' */

  /* SignalConversion: '<S17>/Signal Copy1' */
  LSM_TJA_Line_State1 = LSM_TJA_Line_State;

  /* SignalConversion: '<S17>/Signal Copy' */
  LSM_HWASts = rtu_VSM_HMI->HWASts;

  /* UnitDelay: '<S17>/Unit Delay16' */
  PubIfDecisionLSM_MDL_B.UnitDelay16 =
    PubIfDecisionLSM_MDL_DW.UnitDelay16_DSTATE;

  /* SignalConversion: '<S17>/Signal Copy3' */
  PubIfDecisionLSM_MDL_B.SignalCopy3[0] = LSM_PathLaneAvail[0];
  PubIfDecisionLSM_MDL_B.SignalCopy3[1] = LSM_PathLaneAvail[1];
  PubIfDecisionLSM_MDL_B.SignalCopy3[2] = LSM_PathLaneAvail[2];

  /* MATLAB Function: '<S17>/LineSelect' */
  PubIfDecisionLSM_MDL_B.TJALineValid = false;
  PubIfDecisionLSM_MDL_B.TJALineA3 = 0.0F;
  PubIfDecisionLSM_MDL_B.TJALineA2 = 0.0F;
  PubIfDecisionLSM_MDL_B.TJALineA1 = 0.0F;
  PubIfDecisionLSM_MDL_B.TJALineA0 = 0.0F;
  PubIfDecisionLSM_MDL_B.TJALineRange = 0.0F;
  if (PubIfDecisionLSM_MDL_B.PathValid[1] && (PubIfDecisionLSM_MDL_B.PathRange[1]
       > 12.0F)) {
    PubIfDecisionLSM_MDL_B.LCKLineValid = true;
    PubIfDecisionLSM_MDL_B.LCKLineA3 = PubIfDecisionLSM_MDL_B.PathA3[1];
    PubIfDecisionLSM_MDL_B.LCKLineA2 = PubIfDecisionLSM_MDL_B.PathA2[1];
    PubIfDecisionLSM_MDL_B.LCKLineA1 = PubIfDecisionLSM_MDL_B.PathA1[1];
    PubIfDecisionLSM_MDL_B.LCKLineA0 = PubIfDecisionLSM_MDL_B.PathA0[1];
    PubIfDecisionLSM_MDL_B.LCKLineRange = PubIfDecisionLSM_MDL_B.PathRange[1];
  } else {
    PubIfDecisionLSM_MDL_B.LCKLineValid = false;
    PubIfDecisionLSM_MDL_B.LCKLineA3 = 0.0F;
    PubIfDecisionLSM_MDL_B.LCKLineA2 = 0.0F;
    PubIfDecisionLSM_MDL_B.LCKLineA1 = 0.0F;
    PubIfDecisionLSM_MDL_B.LCKLineA0 = 0.0F;
    PubIfDecisionLSM_MDL_B.LCKLineRange = 0.0F;
  }

  if ((LSM_TJA_Line_State == 1) || (LSM_TJA_Line_State == 0)) {
    PubIfDecisionLSM_MDL_B.TJALineValid = PubIfDecisionLSM_MDL_B.PathValid[1];
    PubIfDecisionLSM_MDL_B.TJALineA3 = PubIfDecisionLSM_MDL_B.PathA3[1];
    PubIfDecisionLSM_MDL_B.TJALineA2 = PubIfDecisionLSM_MDL_B.PathA2[1];
    PubIfDecisionLSM_MDL_B.TJALineA1 = PubIfDecisionLSM_MDL_B.PathA1[1];
    PubIfDecisionLSM_MDL_B.TJALineA0 = PubIfDecisionLSM_MDL_B.PathA0[1];
    PubIfDecisionLSM_MDL_B.TJALineRange = PubIfDecisionLSM_MDL_B.PathRange[1];
  } else {
    if (LSM_TJA_Line_State == 2) {
      PubIfDecisionLSM_MDL_B.TJALineValid = PubIfDecisionLSM_MDL_B.LineValid_p;
      PubIfDecisionLSM_MDL_B.TJALineA3 = PubIfDecisionLSM_MDL_B.A3_d;
      PubIfDecisionLSM_MDL_B.TJALineA2 = PubIfDecisionLSM_MDL_B.A2_j;
      PubIfDecisionLSM_MDL_B.TJALineA1 = PubIfDecisionLSM_MDL_B.A1_d;
      PubIfDecisionLSM_MDL_B.TJALineA0 = PubIfDecisionLSM_MDL_B.A0_c;
      PubIfDecisionLSM_MDL_B.TJALineRange = PubIfDecisionLSM_MDL_B.Range_m;
    }
  }

  /* End of MATLAB Function: '<S17>/LineSelect' */

  /* MATLAB Function: '<S17>/TJA2NOA' */
  PubIfDecisionLSM_MDL_B.HWALineValid_h3 = PubIfDecisionLSM_MDL_B.TJALineValid;
  PubIfDecisionLSM_MDL_B.HWALineC3_k = PubIfDecisionLSM_MDL_B.TJALineA3;
  PubIfDecisionLSM_MDL_B.HWALineC2_d = PubIfDecisionLSM_MDL_B.TJALineA2;
  PubIfDecisionLSM_MDL_B.HWALineC1_d = PubIfDecisionLSM_MDL_B.TJALineA1;
  PubIfDecisionLSM_MDL_B.HWALineC0_j = PubIfDecisionLSM_MDL_B.TJALineA0;
  PubIfDecisionLSM_MDL_B.HWARange_i = PubIfDecisionLSM_MDL_B.TJALineRange;

  /* MATLAB Function: '<S17>/CalcEgoVehMove2' incorporates:
   *  Constant: '<S17>/Constant7'
   */
  if (*rtu_kapTraj == 0.0F) {
    PubIfDecisionLSM_MDL_B.dDeltaX = *rtu_vxvRefMs * P_LSM_Pre_t;
    PubIfDecisionLSM_MDL_B.dDeltaY = 0.0F;
    PubIfDecisionLSM_MDL_B.CosOfPsi = 1.0F;
    K40 = 0.0F;
  } else {
    t_Psi = *rtu_kapTraj * *rtu_vxvRefMs * P_LSM_Pre_t;
    K40 = sinf(t_Psi);
    PubIfDecisionLSM_MDL_B.CosOfPsi = t_Psi;
    PubIfDecisionLSM_MDL_B.CosOfPsi = cosf(PubIfDecisionLSM_MDL_B.CosOfPsi);
    PubIfDecisionLSM_MDL_B.dDeltaX = K40 / *rtu_kapTraj;
    PubIfDecisionLSM_MDL_B.dDeltaY = sinf(t_Psi / 2.0F) * sinf(t_Psi / 2.0F) *
      2.0F / *rtu_kapTraj;
  }

  PubIfDecisionLSM_MDL_B.SinOfPsi = K40;

  /* End of MATLAB Function: '<S17>/CalcEgoVehMove2' */

  /* UnitDelay: '<S17>/Unit Delay30' */
  PubIfDecisionLSM_MDL_B.UnitDelay30 =
    PubIfDecisionLSM_MDL_DW.UnitDelay30_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay65' */
  PubIfDecisionLSM_MDL_B.UnitDelay65 =
    PubIfDecisionLSM_MDL_DW.UnitDelay65_DSTATE;

  /* UnitDelay: '<S17>/Unit Delay64' */
  PubIfDecisionLSM_MDL_B.UnitDelay64 =
    PubIfDecisionLSM_MDL_DW.UnitDelay64_DSTATE;

  /* MATLAB Function: '<S17>/HWALineCalc' */
  PubIfDecisionLSM_MDL_B.HWALineValid_i = false;
  t_Psi = 0.0F;
  m2 = 0.0F;
  K40 = 0.0F;
  RefA0_3 = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARange_o = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeLineValid_k = false;
  PubIfDecisionLSM_MDL_B.HWALeLineC3_p = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeLineC2_b = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeLineC1_e = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeLineC0_h = 0.0F;
  PubIfDecisionLSM_MDL_B.HWALeRange_i = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiLineValid_n = false;
  PubIfDecisionLSM_MDL_B.HWARiLineC3_f = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiLineC2_f = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiLineC1_i = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiLineC0_b = 0.0F;
  PubIfDecisionLSM_MDL_B.HWARiRange_h = 0.0F;
  Update = false;
  MoveID = PubIfDecisionLSM_MDL_B.UnitDelay30;
  LockID = PubIfDecisionLSM_MDL_B.UnitDelay65;
  if (fabsf(LSM_HWALineC0K1) > 4.5F) {
    MoveID = 0;
    LockID = 0;
  }

  i = PubIfDecisionLSM_MDL_B.UnitDelay64;
  qY = i - 1U;
  if (qY > (uint32_T)i) {
    qY = 0U;
  }

  i = (int32_T)qY;
  LConf = (uint8_T)i;
  if (LConf == 0) {
    LockID = 0;
  }

  if ((LSM_HWASts == 1) || (LSM_HWASts == 7) || (LSM_HWASts == 0)) {
    MoveID = 0;
  }

  if ((LSM_HWASts == 1) || (LSM_HWASts == 2)) {
    PubIfDecisionLSM_MDL_B.HWALineValid_i =
      PubIfDecisionLSM_MDL_B.HWALineValid_h3;
    t_Psi = PubIfDecisionLSM_MDL_B.HWALineC3_k;
    m2 = PubIfDecisionLSM_MDL_B.HWALineC2_d;
    K40 = PubIfDecisionLSM_MDL_B.HWALineC1_d;
    RefA0_3 = PubIfDecisionLSM_MDL_B.HWALineC0_j;
    PubIfDecisionLSM_MDL_B.HWARange_o = PubIfDecisionLSM_MDL_B.HWARange_i;
  }

  if (LSM_HWASts == 3) {
    MoveID = 0;
    if ((PubIfDecisionLSM_MDL_B.UnitDelay16 == 5) ||
        (PubIfDecisionLSM_MDL_B.UnitDelay16 == 6)) {
      LConf = 250U;
      LockID = 0;
    }

    if (LConf > 0) {
      if (PubIfDecisionLSM_MDL_B.RelationalOperator) {
        i = LockID + 1;
        if (i > 127) {
          i = 127;
        }

        LockID = (int8_T)i;
      }

      if (PubIfDecisionLSM_MDL_B.RelationalOperator_i) {
        i = LockID - 1;
        if (i < -128) {
          i = -128;
        }

        LockID = (int8_T)i;
      }
    }

    if (LockID == 1) {
      PubIfDecisionLSM_MDL_B.HWALineValid_i = PubIfDecisionLSM_MDL_B.PathValid[2];
      t_Psi = PubIfDecisionLSM_MDL_B.PathA3[2];
      m2 = PubIfDecisionLSM_MDL_B.PathA2[2];
      K40 = PubIfDecisionLSM_MDL_B.PathA1[2];
      RefA0_3 = PubIfDecisionLSM_MDL_B.PathA0[2];
      PubIfDecisionLSM_MDL_B.HWARange_o = PubIfDecisionLSM_MDL_B.PathRange[2];
      PubIfDecisionLSM_MDL_B.HWALeLineValid_k =
        PubIfDecisionLSM_MDL_B.PathValid[1];
      PubIfDecisionLSM_MDL_B.HWALeLineC3_p = PubIfDecisionLSM_MDL_B.PathA3[1];
      PubIfDecisionLSM_MDL_B.HWALeLineC2_b = PubIfDecisionLSM_MDL_B.PathA2[1];
      PubIfDecisionLSM_MDL_B.HWALeLineC1_e = PubIfDecisionLSM_MDL_B.PathA1[1];
      PubIfDecisionLSM_MDL_B.HWALeLineC0_h = PubIfDecisionLSM_MDL_B.PathA0[1];
      PubIfDecisionLSM_MDL_B.HWALeRange_i = PubIfDecisionLSM_MDL_B.PathRange[1];
      PubIfDecisionLSM_MDL_B.HWARiLineValid_n =
        PubIfDecisionLSM_MDL_B.PathValid[2];
      PubIfDecisionLSM_MDL_B.HWARiLineC3_f = PubIfDecisionLSM_MDL_B.PathA3[2];
      PubIfDecisionLSM_MDL_B.HWARiLineC2_f = PubIfDecisionLSM_MDL_B.PathA2[2];
      PubIfDecisionLSM_MDL_B.HWARiLineC1_i = PubIfDecisionLSM_MDL_B.PathA1[2];
      PubIfDecisionLSM_MDL_B.HWARiLineC0_b = PubIfDecisionLSM_MDL_B.PathA0[2];
      PubIfDecisionLSM_MDL_B.HWARiRange_h = PubIfDecisionLSM_MDL_B.PathRange[2];
    } else if (LockID == -1) {
      PubIfDecisionLSM_MDL_B.HWALineValid_i = PubIfDecisionLSM_MDL_B.PathValid[0];
      t_Psi = PubIfDecisionLSM_MDL_B.PathA3[0];
      m2 = PubIfDecisionLSM_MDL_B.PathA2[0];
      K40 = PubIfDecisionLSM_MDL_B.PathA1[0];
      RefA0_3 = PubIfDecisionLSM_MDL_B.PathA0[0];
      PubIfDecisionLSM_MDL_B.HWARange_o = PubIfDecisionLSM_MDL_B.PathRange[0];
      PubIfDecisionLSM_MDL_B.HWALeLineValid_k =
        PubIfDecisionLSM_MDL_B.PathValid[0];
      PubIfDecisionLSM_MDL_B.HWALeLineC3_p = PubIfDecisionLSM_MDL_B.PathA3[0];
      PubIfDecisionLSM_MDL_B.HWALeLineC2_b = PubIfDecisionLSM_MDL_B.PathA2[0];
      PubIfDecisionLSM_MDL_B.HWALeLineC1_e = PubIfDecisionLSM_MDL_B.PathA1[0];
      PubIfDecisionLSM_MDL_B.HWALeLineC0_h = PubIfDecisionLSM_MDL_B.PathA0[0];
      PubIfDecisionLSM_MDL_B.HWALeRange_i = PubIfDecisionLSM_MDL_B.PathRange[0];
      PubIfDecisionLSM_MDL_B.HWARiLineValid_n =
        PubIfDecisionLSM_MDL_B.PathValid[1];
      PubIfDecisionLSM_MDL_B.HWARiLineC3_f = PubIfDecisionLSM_MDL_B.PathA3[1];
      PubIfDecisionLSM_MDL_B.HWARiLineC2_f = PubIfDecisionLSM_MDL_B.PathA2[1];
      PubIfDecisionLSM_MDL_B.HWARiLineC1_i = PubIfDecisionLSM_MDL_B.PathA1[1];
      PubIfDecisionLSM_MDL_B.HWARiLineC0_b = PubIfDecisionLSM_MDL_B.PathA0[1];
      PubIfDecisionLSM_MDL_B.HWARiRange_h = PubIfDecisionLSM_MDL_B.PathRange[1];
    } else {
      if (LockID == 0) {
        PubIfDecisionLSM_MDL_B.HWALineValid_i =
          PubIfDecisionLSM_MDL_B.HWALineValid_h3;
        t_Psi = PubIfDecisionLSM_MDL_B.HWALineC3_k;
        m2 = PubIfDecisionLSM_MDL_B.HWALineC2_d;
        K40 = PubIfDecisionLSM_MDL_B.HWALineC1_d;
        RefA0_3 = PubIfDecisionLSM_MDL_B.HWALineC0_j;
        PubIfDecisionLSM_MDL_B.HWARange_o = PubIfDecisionLSM_MDL_B.HWARange_i;
        if (PubIfDecisionLSM_MDL_B.SignalCopy3[0] && (LSM_TJA_Line_State1 == 1) &&
            (PubIfDecisionLSM_MDL_B.PathA0[0] < 4.5F)) {
          PubIfDecisionLSM_MDL_B.HWALeLineValid_k =
            PubIfDecisionLSM_MDL_B.PathValid[0];
          PubIfDecisionLSM_MDL_B.HWALeLineC3_p = PubIfDecisionLSM_MDL_B.PathA3[0];
          PubIfDecisionLSM_MDL_B.HWALeLineC2_b = PubIfDecisionLSM_MDL_B.PathA2[0];
          PubIfDecisionLSM_MDL_B.HWALeLineC1_e = PubIfDecisionLSM_MDL_B.PathA1[0];
          PubIfDecisionLSM_MDL_B.HWALeLineC0_h = PubIfDecisionLSM_MDL_B.PathA0[0];
          PubIfDecisionLSM_MDL_B.HWALeRange_i =
            PubIfDecisionLSM_MDL_B.PathRange[0];
        }

        if (PubIfDecisionLSM_MDL_B.SignalCopy3[2] && (LSM_TJA_Line_State1 == 1) &&
            (PubIfDecisionLSM_MDL_B.PathA0[2] > -4.5F)) {
          PubIfDecisionLSM_MDL_B.HWARiLineValid_n =
            PubIfDecisionLSM_MDL_B.PathValid[2];
          PubIfDecisionLSM_MDL_B.HWARiLineC3_f = PubIfDecisionLSM_MDL_B.PathA3[2];
          PubIfDecisionLSM_MDL_B.HWARiLineC2_f = PubIfDecisionLSM_MDL_B.PathA2[2];
          PubIfDecisionLSM_MDL_B.HWARiLineC1_i = PubIfDecisionLSM_MDL_B.PathA1[2];
          PubIfDecisionLSM_MDL_B.HWARiLineC0_b = PubIfDecisionLSM_MDL_B.PathA0[2];
          PubIfDecisionLSM_MDL_B.HWARiRange_h =
            PubIfDecisionLSM_MDL_B.PathRange[2];
        }
      }
    }
  }

  if (LSM_HWASts == 5) {
    if (PubIfDecisionLSM_MDL_B.UnitDelay16 != 5) {
      i = MoveID - 1;
      if (i < -128) {
        i = -128;
      }

      MoveID = (int8_T)i;
    }

    if (PubIfDecisionLSM_MDL_B.RelationalOperator) {
      i = MoveID + 1;
      if (i > 127) {
        i = 127;
      }

      MoveID = (int8_T)i;
    }

    if (PubIfDecisionLSM_MDL_B.RelationalOperator_i) {
      i = MoveID - 1;
      if (i < -128) {
        i = -128;
      }

      MoveID = (int8_T)i;
    }

    Update = ((MoveID >= 1) || (MoveID <= -2));
    if (!Update) {
      if (MoveID == -1) {
        PubIfDecisionLSM_MDL_B.HWALineValid_i =
          PubIfDecisionLSM_MDL_B.PathValid[0];
        t_Psi = PubIfDecisionLSM_MDL_B.PathA3[0];
        m2 = PubIfDecisionLSM_MDL_B.PathA2[0];
        K40 = PubIfDecisionLSM_MDL_B.PathA1[0];
        RefA0_3 = PubIfDecisionLSM_MDL_B.PathA0[0];
        PubIfDecisionLSM_MDL_B.HWARange_o = PubIfDecisionLSM_MDL_B.PathRange[0];
        PubIfDecisionLSM_MDL_B.HWALeLineValid_k =
          PubIfDecisionLSM_MDL_B.PathValid[0];
        PubIfDecisionLSM_MDL_B.HWALeLineC3_p = PubIfDecisionLSM_MDL_B.PathA3[0];
        PubIfDecisionLSM_MDL_B.HWALeLineC2_b = PubIfDecisionLSM_MDL_B.PathA2[0];
        PubIfDecisionLSM_MDL_B.HWALeLineC1_e = PubIfDecisionLSM_MDL_B.PathA1[0];
        PubIfDecisionLSM_MDL_B.HWALeLineC0_h = PubIfDecisionLSM_MDL_B.PathA0[0];
        PubIfDecisionLSM_MDL_B.HWALeRange_i = PubIfDecisionLSM_MDL_B.PathRange[0];
        PubIfDecisionLSM_MDL_B.HWARiLineValid_n =
          PubIfDecisionLSM_MDL_B.PathValid[1];
        PubIfDecisionLSM_MDL_B.HWARiLineC3_f = PubIfDecisionLSM_MDL_B.PathA3[1];
        PubIfDecisionLSM_MDL_B.HWARiLineC2_f = PubIfDecisionLSM_MDL_B.PathA2[1];
        PubIfDecisionLSM_MDL_B.HWARiLineC1_i = PubIfDecisionLSM_MDL_B.PathA1[1];
        PubIfDecisionLSM_MDL_B.HWARiLineC0_b = PubIfDecisionLSM_MDL_B.PathA0[1];
        PubIfDecisionLSM_MDL_B.HWARiRange_h = PubIfDecisionLSM_MDL_B.PathRange[1];
      } else {
        if (MoveID == 0) {
          PubIfDecisionLSM_MDL_B.HWALineValid_i =
            PubIfDecisionLSM_MDL_B.PathValid[1];
          t_Psi = PubIfDecisionLSM_MDL_B.PathA3[1];
          m2 = PubIfDecisionLSM_MDL_B.PathA2[1];
          K40 = PubIfDecisionLSM_MDL_B.PathA1[1];
          RefA0_3 = PubIfDecisionLSM_MDL_B.PathA0[1];
          PubIfDecisionLSM_MDL_B.HWARange_o = PubIfDecisionLSM_MDL_B.PathRange[1];
          if (PubIfDecisionLSM_MDL_B.SignalCopy3[0] && (LSM_TJA_Line_State1 == 1)
              && (PubIfDecisionLSM_MDL_B.PathA0[0] < 4.5F)) {
            PubIfDecisionLSM_MDL_B.HWALeLineValid_k =
              PubIfDecisionLSM_MDL_B.PathValid[0];
            PubIfDecisionLSM_MDL_B.HWALeLineC3_p =
              PubIfDecisionLSM_MDL_B.PathA3[0];
            PubIfDecisionLSM_MDL_B.HWALeLineC2_b =
              PubIfDecisionLSM_MDL_B.PathA2[0];
            PubIfDecisionLSM_MDL_B.HWALeLineC1_e =
              PubIfDecisionLSM_MDL_B.PathA1[0];
            PubIfDecisionLSM_MDL_B.HWALeLineC0_h =
              PubIfDecisionLSM_MDL_B.PathA0[0];
            PubIfDecisionLSM_MDL_B.HWALeRange_i =
              PubIfDecisionLSM_MDL_B.PathRange[0];
          }

          if (PubIfDecisionLSM_MDL_B.SignalCopy3[2] && (LSM_TJA_Line_State1 == 1)
              && (PubIfDecisionLSM_MDL_B.PathA0[2] > -4.5F)) {
            PubIfDecisionLSM_MDL_B.HWARiLineValid_n =
              PubIfDecisionLSM_MDL_B.PathValid[2];
            PubIfDecisionLSM_MDL_B.HWARiLineC3_f =
              PubIfDecisionLSM_MDL_B.PathA3[2];
            PubIfDecisionLSM_MDL_B.HWARiLineC2_f =
              PubIfDecisionLSM_MDL_B.PathA2[2];
            PubIfDecisionLSM_MDL_B.HWARiLineC1_i =
              PubIfDecisionLSM_MDL_B.PathA1[2];
            PubIfDecisionLSM_MDL_B.HWARiLineC0_b =
              PubIfDecisionLSM_MDL_B.PathA0[2];
            PubIfDecisionLSM_MDL_B.HWARiRange_h =
              PubIfDecisionLSM_MDL_B.PathRange[2];
          }
        }
      }
    }
  }

  if (LSM_HWASts == 6) {
    if (PubIfDecisionLSM_MDL_B.UnitDelay16 != 6) {
      i = MoveID + 1;
      if (i > 127) {
        i = 127;
      }

      MoveID = (int8_T)i;
    }

    if (PubIfDecisionLSM_MDL_B.RelationalOperator) {
      i = MoveID + 1;
      if (i > 127) {
        i = 127;
      }

      MoveID = (int8_T)i;
    }

    if (PubIfDecisionLSM_MDL_B.RelationalOperator_i) {
      i = MoveID - 1;
      if (i < -128) {
        i = -128;
      }

      MoveID = (int8_T)i;
    }

    Update = ((MoveID >= 2) || (MoveID <= -1) || Update);
    if (!Update) {
      if (MoveID == 1) {
        PubIfDecisionLSM_MDL_B.HWALineValid_i =
          PubIfDecisionLSM_MDL_B.PathValid[2];
        t_Psi = PubIfDecisionLSM_MDL_B.PathA3[2];
        m2 = PubIfDecisionLSM_MDL_B.PathA2[2];
        K40 = PubIfDecisionLSM_MDL_B.PathA1[2];
        RefA0_3 = PubIfDecisionLSM_MDL_B.PathA0[2];
        PubIfDecisionLSM_MDL_B.HWARange_o = PubIfDecisionLSM_MDL_B.PathRange[2];
        PubIfDecisionLSM_MDL_B.HWALeLineValid_k =
          PubIfDecisionLSM_MDL_B.PathValid[1];
        PubIfDecisionLSM_MDL_B.HWALeLineC3_p = PubIfDecisionLSM_MDL_B.PathA3[1];
        PubIfDecisionLSM_MDL_B.HWALeLineC2_b = PubIfDecisionLSM_MDL_B.PathA2[1];
        PubIfDecisionLSM_MDL_B.HWALeLineC1_e = PubIfDecisionLSM_MDL_B.PathA1[1];
        PubIfDecisionLSM_MDL_B.HWALeLineC0_h = PubIfDecisionLSM_MDL_B.PathA0[1];
        PubIfDecisionLSM_MDL_B.HWALeRange_i = PubIfDecisionLSM_MDL_B.PathRange[1];
        PubIfDecisionLSM_MDL_B.HWARiLineValid_n =
          PubIfDecisionLSM_MDL_B.PathValid[2];
        PubIfDecisionLSM_MDL_B.HWARiLineC3_f = PubIfDecisionLSM_MDL_B.PathA3[2];
        PubIfDecisionLSM_MDL_B.HWARiLineC2_f = PubIfDecisionLSM_MDL_B.PathA2[2];
        PubIfDecisionLSM_MDL_B.HWARiLineC1_i = PubIfDecisionLSM_MDL_B.PathA1[2];
        PubIfDecisionLSM_MDL_B.HWARiLineC0_b = PubIfDecisionLSM_MDL_B.PathA0[2];
        PubIfDecisionLSM_MDL_B.HWARiRange_h = PubIfDecisionLSM_MDL_B.PathRange[2];
      } else {
        if (MoveID == 0) {
          PubIfDecisionLSM_MDL_B.HWALineValid_i =
            PubIfDecisionLSM_MDL_B.PathValid[1];
          t_Psi = PubIfDecisionLSM_MDL_B.PathA3[1];
          m2 = PubIfDecisionLSM_MDL_B.PathA2[1];
          K40 = PubIfDecisionLSM_MDL_B.PathA1[1];
          RefA0_3 = PubIfDecisionLSM_MDL_B.PathA0[1];
          PubIfDecisionLSM_MDL_B.HWARange_o = PubIfDecisionLSM_MDL_B.PathRange[1];
          if (PubIfDecisionLSM_MDL_B.SignalCopy3[0] && (LSM_TJA_Line_State1 == 1)
              && (PubIfDecisionLSM_MDL_B.PathA0[0] < 4.5F)) {
            PubIfDecisionLSM_MDL_B.HWALeLineValid_k =
              PubIfDecisionLSM_MDL_B.PathValid[0];
            PubIfDecisionLSM_MDL_B.HWALeLineC3_p =
              PubIfDecisionLSM_MDL_B.PathA3[0];
            PubIfDecisionLSM_MDL_B.HWALeLineC2_b =
              PubIfDecisionLSM_MDL_B.PathA2[0];
            PubIfDecisionLSM_MDL_B.HWALeLineC1_e =
              PubIfDecisionLSM_MDL_B.PathA1[0];
            PubIfDecisionLSM_MDL_B.HWALeLineC0_h =
              PubIfDecisionLSM_MDL_B.PathA0[0];
            PubIfDecisionLSM_MDL_B.HWALeRange_i =
              PubIfDecisionLSM_MDL_B.PathRange[0];
          }

          if (PubIfDecisionLSM_MDL_B.SignalCopy3[2] && (LSM_TJA_Line_State1 == 1)
              && (PubIfDecisionLSM_MDL_B.PathA0[2] > -4.5F)) {
            PubIfDecisionLSM_MDL_B.HWARiLineValid_n =
              PubIfDecisionLSM_MDL_B.PathValid[2];
            PubIfDecisionLSM_MDL_B.HWARiLineC3_f =
              PubIfDecisionLSM_MDL_B.PathA3[2];
            PubIfDecisionLSM_MDL_B.HWARiLineC2_f =
              PubIfDecisionLSM_MDL_B.PathA2[2];
            PubIfDecisionLSM_MDL_B.HWARiLineC1_i =
              PubIfDecisionLSM_MDL_B.PathA1[2];
            PubIfDecisionLSM_MDL_B.HWARiLineC0_b =
              PubIfDecisionLSM_MDL_B.PathA0[2];
            PubIfDecisionLSM_MDL_B.HWARiRange_h =
              PubIfDecisionLSM_MDL_B.PathRange[2];
          }
        }
      }
    }
  }

  t_Dist = fmaxf(15.0F, *rtu_vxvRefMs * 1.8F);
  x[0] = 0.05F * t_Dist;
  x[1] = 0.3F * t_Dist;
  x[2] = 0.6F * t_Dist;
  x[3] = t_Dist;
  power_D4iaDoLm(x, t_dx_1);
  power_J3qcWgcR(x, t_dy);
  x_0 = x[0];
  tFilter = x_0 - PubIfDecisionLSM_MDL_B.dDeltaX;
  t_dy_0 = (((t_Psi * t_dx_1[0] + m2 * t_dy[0]) + K40 * x_0) + RefA0_3) -
    PubIfDecisionLSM_MDL_B.dDeltaY;
  t_dx[0] = tFilter * PubIfDecisionLSM_MDL_B.CosOfPsi + t_dy_0 *
    PubIfDecisionLSM_MDL_B.SinOfPsi;
  t_dx_0[0] = -tFilter * PubIfDecisionLSM_MDL_B.SinOfPsi + t_dy_0 *
    PubIfDecisionLSM_MDL_B.CosOfPsi;
  x_0 = x[1];
  tFilter = x_0 - PubIfDecisionLSM_MDL_B.dDeltaX;
  t_dy_0 = (((t_Psi * t_dx_1[1] + m2 * t_dy[1]) + K40 * x_0) + RefA0_3) -
    PubIfDecisionLSM_MDL_B.dDeltaY;
  t_dx[1] = tFilter * PubIfDecisionLSM_MDL_B.CosOfPsi + t_dy_0 *
    PubIfDecisionLSM_MDL_B.SinOfPsi;
  t_dx_0[1] = -tFilter * PubIfDecisionLSM_MDL_B.SinOfPsi + t_dy_0 *
    PubIfDecisionLSM_MDL_B.CosOfPsi;
  x_0 = x[2];
  tFilter = x_0 - PubIfDecisionLSM_MDL_B.dDeltaX;
  t_dy_0 = (((t_Psi * t_dx_1[2] + m2 * t_dy[2]) + K40 * x_0) + RefA0_3) -
    PubIfDecisionLSM_MDL_B.dDeltaY;
  t_dx[2] = tFilter * PubIfDecisionLSM_MDL_B.CosOfPsi + t_dy_0 *
    PubIfDecisionLSM_MDL_B.SinOfPsi;
  t_dx_0[2] = -tFilter * PubIfDecisionLSM_MDL_B.SinOfPsi + t_dy_0 *
    PubIfDecisionLSM_MDL_B.CosOfPsi;
  x_0 = x[3];
  tFilter = x_0 - PubIfDecisionLSM_MDL_B.dDeltaX;
  t_dy_0 = (((t_Psi * t_dx_1[3] + m2 * t_dy[3]) + K40 * x_0) + RefA0_3) -
    PubIfDecisionLSM_MDL_B.dDeltaY;
  t_dx[3] = tFilter * PubIfDecisionLSM_MDL_B.CosOfPsi + t_dy_0 *
    PubIfDecisionLSM_MDL_B.SinOfPsi;
  t_dx_0[3] = -tFilter * PubIfDecisionLSM_MDL_B.SinOfPsi + t_dy_0 *
    PubIfDecisionLSM_MDL_B.CosOfPsi;
  pl_3fC1hwr1(t_dx, t_dx_0, &t, &y3, &y2, &Line_std_idx_1);
  PubIfDecisionLSM_MDL_B.preDyDiff = Line_std_idx_1;
  PubIfDecisionLSM_MDL_B.HeadAngDiff = atanf(y2) * 57.3F;
  PubIfDecisionLSM_MDL_B.HWALineC3_f = t_Psi;
  PubIfDecisionLSM_MDL_B.HWALineC2_dl = m2;
  PubIfDecisionLSM_MDL_B.HWALineC1_k = K40;
  PubIfDecisionLSM_MDL_B.HWALineC0_g2 = RefA0_3;
  PubIfDecisionLSM_MDL_B.Error = Update;
  LSM_MoveID = MoveID;
  LSM_LockID = LockID;
  LSM_LockCounter = LConf;

  /* End of MATLAB Function: '<S17>/HWALineCalc' */

  /* Switch generated from: '<S17>/Switch' incorporates:
   *  Switch generated from: '<S17>/Switch2'
   *  Switch generated from: '<S17>/Switch3'
   */
  if (PubIfDecisionLSM_MDL_B.Compare_gx) {
    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineValid = PubIfDecisionLSM_MDL_B.HWALineValid_g;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineC3 = PubIfDecisionLSM_MDL_B.HWALineC3_n;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineC2 = PubIfDecisionLSM_MDL_B.HWALineC2_m;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineC1 = PubIfDecisionLSM_MDL_B.HWALineC1_g;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineC0 = PubIfDecisionLSM_MDL_B.HWALineC0_gz;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWARange = PubIfDecisionLSM_MDL_B.HWARange_j;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineValid =
      PubIfDecisionLSM_MDL_B.HWALeLineValid_m;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineC3 = PubIfDecisionLSM_MDL_B.HWALeLineC3_g;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineC2 = PubIfDecisionLSM_MDL_B.HWALeLineC2_d;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineC1 = PubIfDecisionLSM_MDL_B.HWALeLineC1_c;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineC0 = PubIfDecisionLSM_MDL_B.HWALeLineC0_e;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeRange = PubIfDecisionLSM_MDL_B.HWALeRange_k;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineValid =
      PubIfDecisionLSM_MDL_B.HWARiLineValid_f;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineC3 = PubIfDecisionLSM_MDL_B.HWARiLineC3_n;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineC2 = PubIfDecisionLSM_MDL_B.HWARiLineC2_n;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineC1 = PubIfDecisionLSM_MDL_B.HWARiLineC1_g;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineC0 = PubIfDecisionLSM_MDL_B.HWARiLineC0_k;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiRange = PubIfDecisionLSM_MDL_B.HWARiRange_d;
  } else {
    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineValid = PubIfDecisionLSM_MDL_B.HWALineValid_i;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineC3 = PubIfDecisionLSM_MDL_B.HWALineC3_f;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineC2 = PubIfDecisionLSM_MDL_B.HWALineC2_dl;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineC1 = PubIfDecisionLSM_MDL_B.HWALineC1_k;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWALineC0 = PubIfDecisionLSM_MDL_B.HWALineC0_g2;

    /* Switch generated from: '<S17>/Switch' */
    PubIfDecisionLSM_MDL_B.HWARange = PubIfDecisionLSM_MDL_B.HWARange_o;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineValid =
      PubIfDecisionLSM_MDL_B.HWALeLineValid_k;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineC3 = PubIfDecisionLSM_MDL_B.HWALeLineC3_p;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineC2 = PubIfDecisionLSM_MDL_B.HWALeLineC2_b;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineC1 = PubIfDecisionLSM_MDL_B.HWALeLineC1_e;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeLineC0 = PubIfDecisionLSM_MDL_B.HWALeLineC0_h;

    /* Switch generated from: '<S17>/Switch2' */
    PubIfDecisionLSM_MDL_B.HWALeRange = PubIfDecisionLSM_MDL_B.HWALeRange_i;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineValid =
      PubIfDecisionLSM_MDL_B.HWARiLineValid_n;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineC3 = PubIfDecisionLSM_MDL_B.HWARiLineC3_f;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineC2 = PubIfDecisionLSM_MDL_B.HWARiLineC2_f;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineC1 = PubIfDecisionLSM_MDL_B.HWARiLineC1_i;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiLineC0 = PubIfDecisionLSM_MDL_B.HWARiLineC0_b;

    /* Switch generated from: '<S17>/Switch3' */
    PubIfDecisionLSM_MDL_B.HWARiRange = PubIfDecisionLSM_MDL_B.HWARiRange_h;
  }

  /* End of Switch generated from: '<S17>/Switch' */

  /* MATLAB Function: '<S17>/MATLAB Function1' */
  if (PubIfDecisionLSM_MDL_B.HWALeLineValid || (rtu_VSM_HMI->HWASts != 3)) {
    PubIfDecisionLSM_MDL_B.HWALeLineValid_mw =
      PubIfDecisionLSM_MDL_B.HWALeLineValid;
    PubIfDecisionLSM_MDL_B.HWALeLineC3_j = PubIfDecisionLSM_MDL_B.HWALeLineC3;
    PubIfDecisionLSM_MDL_B.HWALeLineC2_i = PubIfDecisionLSM_MDL_B.HWALeLineC2;
    PubIfDecisionLSM_MDL_B.HWALeLineC1_p = PubIfDecisionLSM_MDL_B.HWALeLineC1;
    PubIfDecisionLSM_MDL_B.HWALeLineC0_l = PubIfDecisionLSM_MDL_B.HWALeLineC0;
    PubIfDecisionLSM_MDL_B.HWALeLineRange = PubIfDecisionLSM_MDL_B.HWALeRange;
    PubIfDecisionLSM_MDL_B.LeLineVirtual_b = false;
  } else {
    PubIfDecisionLSM_MDL_B.HWALeLineValid_mw = false;
    PubIfDecisionLSM_MDL_B.HWALeLineC3_j = PubIfDecisionLSM_MDL_B.HWALineC3;
    PubIfDecisionLSM_MDL_B.HWALeLineC2_i = PubIfDecisionLSM_MDL_B.HWALineC2;
    PubIfDecisionLSM_MDL_B.HWALeLineC1_p = PubIfDecisionLSM_MDL_B.HWALineC1;
    PubIfDecisionLSM_MDL_B.HWALeLineC0_l = PubIfDecisionLSM_MDL_B.HWALineC0 +
      LSM_RoadWidth1;
    PubIfDecisionLSM_MDL_B.HWALeLineRange = PubIfDecisionLSM_MDL_B.HWARange;
    PubIfDecisionLSM_MDL_B.LeLineVirtual_b = true;
  }

  if (PubIfDecisionLSM_MDL_B.HWARiLineValid || (rtu_VSM_HMI->HWASts != 3)) {
    PubIfDecisionLSM_MDL_B.HWARiLineValid_j =
      PubIfDecisionLSM_MDL_B.HWARiLineValid;
    PubIfDecisionLSM_MDL_B.HWARiLineC3_n5 = PubIfDecisionLSM_MDL_B.HWARiLineC3;
    PubIfDecisionLSM_MDL_B.HWARiLineC2_g = PubIfDecisionLSM_MDL_B.HWARiLineC2;
    PubIfDecisionLSM_MDL_B.HWARiLineC1_gb = PubIfDecisionLSM_MDL_B.HWARiLineC1;
    PubIfDecisionLSM_MDL_B.HWARiLineC0_m = PubIfDecisionLSM_MDL_B.HWARiLineC0;
    PubIfDecisionLSM_MDL_B.HWARiLineRange = PubIfDecisionLSM_MDL_B.HWARiRange;
    PubIfDecisionLSM_MDL_B.RiLineVirtual_b = false;
  } else {
    PubIfDecisionLSM_MDL_B.HWARiLineValid_j = false;
    PubIfDecisionLSM_MDL_B.HWARiLineC3_n5 = PubIfDecisionLSM_MDL_B.HWALineC3;
    PubIfDecisionLSM_MDL_B.HWARiLineC2_g = PubIfDecisionLSM_MDL_B.HWALineC2;
    PubIfDecisionLSM_MDL_B.HWARiLineC1_gb = PubIfDecisionLSM_MDL_B.HWALineC1;
    PubIfDecisionLSM_MDL_B.HWARiLineC0_m = PubIfDecisionLSM_MDL_B.HWALineC0 -
      LSM_RoadWidth1;
    PubIfDecisionLSM_MDL_B.HWARiLineRange = PubIfDecisionLSM_MDL_B.HWARange;
    PubIfDecisionLSM_MDL_B.RiLineVirtual_b = true;
  }

  /* End of MATLAB Function: '<S17>/MATLAB Function1' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  rty_LSM_HWA->MRiLane = PubIfDecisionLSM_MDL_B.DataTypeConversion3;

  /* MATLAB Function: '<S17>/MATLAB Function' */
  PubIfDecisionLSM_MDL_B.MrcStopLane = 0U;
  if (((rtu_RFM_CURRENT_LANE->b_is_avalible > 0) &&
       (rtu_RFM_CURRENT_LANE->en_lane_type == 5)) ||
      ((rtu_RFM_CURRENT_LANE->b_is_avalible > 0) &&
       (rtu_RFM_CURRENT_LANE->en_lane_type != 5) &&
       (rtu_RFM_RIGHT_LANE->b_is_avalible == 0))) {
    PubIfDecisionLSM_MDL_B.MrcStopLane = 1U;
  }

  /* End of MATLAB Function: '<S17>/MATLAB Function' */

  /* RelationalOperator: '<S22>/Compare' incorporates:
   *  Constant: '<S22>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_nu = (*rty_LSM_PilotSts != ((uint8_T)0U));

  /* Switch generated from: '<S17>/Switch9' */
  if (PubIfDecisionLSM_MDL_B.Compare_nu) {
    rty_LSM_HWA->LeLineLcAvailable = PubIfDecisionLSM_MDL_B.LeftEn_e;
    rty_LSM_HWA->RiLineLcAvailable = PubIfDecisionLSM_MDL_B.RightEn_n;
  } else {
    rty_LSM_HWA->LeLineLcAvailable = LSM_LeftLineTypeEN;
    rty_LSM_HWA->RiLineLcAvailable = LSM_RightLineTypeEN;
  }

  /* End of Switch generated from: '<S17>/Switch9' */

  /* BusCreator generated from: '<Root>/LSM_HWA' */
  rty_LSM_HWA->HWALineValid = PubIfDecisionLSM_MDL_B.HWALineValid;
  rty_LSM_HWA->HWALineC3 = PubIfDecisionLSM_MDL_B.HWALineC3;
  rty_LSM_HWA->HWALineC2 = PubIfDecisionLSM_MDL_B.HWALineC2;
  rty_LSM_HWA->HWALineC1 = PubIfDecisionLSM_MDL_B.HWALineC1;
  rty_LSM_HWA->HWALineC0 = PubIfDecisionLSM_MDL_B.HWALineC0;
  rty_LSM_HWA->HWARange = PubIfDecisionLSM_MDL_B.HWARange;
  rty_LSM_HWA->HWALeLineValid = PubIfDecisionLSM_MDL_B.HWALeLineValid_mw;
  rty_LSM_HWA->HWALeLineC3 = PubIfDecisionLSM_MDL_B.HWALeLineC3_j;
  rty_LSM_HWA->HWALeLineC2 = PubIfDecisionLSM_MDL_B.HWALeLineC2_i;
  rty_LSM_HWA->HWALeLineC1 = PubIfDecisionLSM_MDL_B.HWALeLineC1_p;
  rty_LSM_HWA->HWALeLineC0 = PubIfDecisionLSM_MDL_B.HWALeLineC0_l;
  rty_LSM_HWA->HWALeRange = PubIfDecisionLSM_MDL_B.HWALeLineRange;
  rty_LSM_HWA->HWARiLineValid = PubIfDecisionLSM_MDL_B.HWARiLineValid_j;
  rty_LSM_HWA->HWARiLineC3 = PubIfDecisionLSM_MDL_B.HWARiLineC3_n5;
  rty_LSM_HWA->HWARiLineC2 = PubIfDecisionLSM_MDL_B.HWARiLineC2_g;
  rty_LSM_HWA->HWARiLineC1 = PubIfDecisionLSM_MDL_B.HWARiLineC1_gb;
  rty_LSM_HWA->HWARiLineC0 = PubIfDecisionLSM_MDL_B.HWARiLineC0_m;
  rty_LSM_HWA->HWARiRange = PubIfDecisionLSM_MDL_B.HWARiLineRange;
  rty_LSM_HWA->SingleLineLost_b = false;
  rty_LSM_HWA->DoubleLineLost_b = PubIfDecisionLSM_MDL_B.DoubleLineLost_b;
  rty_LSM_HWA->preDyDiff = PubIfDecisionLSM_MDL_B.preDyDiff;
  rty_LSM_HWA->HeadAngDiff = PubIfDecisionLSM_MDL_B.HeadAngDiff;
  rty_LSM_HWA->MLeLane = LSM_LeftMostLane;
  rty_LSM_HWA->RoadWidth = LSM_RoadWidth1;
  rty_LSM_HWA->LeLineCrossing = PubIfDecisionLSM_MDL_B.RelationalOperator;
  rty_LSM_HWA->RiLineCrossing = PubIfDecisionLSM_MDL_B.RelationalOperator_i;
  rty_LSM_HWA->MrcStopLane = PubIfDecisionLSM_MDL_B.MrcStopLane;
  rty_LSM_HWA->LeLineVirtual_b = PubIfDecisionLSM_MDL_B.LeLineVirtual_b;
  rty_LSM_HWA->RiLineVirtual_b = PubIfDecisionLSM_MDL_B.RiLineVirtual_b;

  /* BusCreator generated from: '<Root>/LSM_LCK' */
  rty_LSM_LCK->LCKLineValid = PubIfDecisionLSM_MDL_B.LCKLineValid;
  rty_LSM_LCK->LCKLineC3 = PubIfDecisionLSM_MDL_B.LCKLineA3;
  rty_LSM_LCK->LCKLineC2 = PubIfDecisionLSM_MDL_B.LCKLineA2;
  rty_LSM_LCK->LCKLineC1 = PubIfDecisionLSM_MDL_B.LCKLineA1;
  rty_LSM_LCK->LCKLineC0 = PubIfDecisionLSM_MDL_B.LCKLineA0;
  rty_LSM_LCK->LCKRange = PubIfDecisionLSM_MDL_B.LCKLineRange;

  /* RelationalOperator: '<S24>/Compare' incorporates:
   *  Constant: '<S24>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_cd = (*rty_LSM_PilotSts != ((uint8_T)0U));

  /* Switch generated from: '<S17>/Switch1' */
  if (PubIfDecisionLSM_MDL_B.Compare_cd) {
    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineValid_h =
      PubIfDecisionLSM_MDL_B.HWALineValid_g;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineC3_o = PubIfDecisionLSM_MDL_B.HWALineC3_n;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineC2_e = PubIfDecisionLSM_MDL_B.HWALineC2_m;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineC1_i = PubIfDecisionLSM_MDL_B.HWALineC1_g;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineC0_g = PubIfDecisionLSM_MDL_B.HWALineC0_gz;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWARange_b = PubIfDecisionLSM_MDL_B.HWARange_j;
  } else {
    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineValid_h =
      PubIfDecisionLSM_MDL_B.HWALineValid_h3;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineC3_o = PubIfDecisionLSM_MDL_B.HWALineC3_k;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineC2_e = PubIfDecisionLSM_MDL_B.HWALineC2_d;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineC1_i = PubIfDecisionLSM_MDL_B.HWALineC1_d;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWALineC0_g = PubIfDecisionLSM_MDL_B.HWALineC0_j;

    /* Switch generated from: '<S17>/Switch1' */
    PubIfDecisionLSM_MDL_B.HWARange_b = PubIfDecisionLSM_MDL_B.HWARange_i;
  }

  /* End of Switch generated from: '<S17>/Switch1' */

  /* BusCreator generated from: '<Root>/LSM_TJA_ICA' */
  rty_LSM_TJA_ICA->TJALineValid = PubIfDecisionLSM_MDL_B.HWALineValid_h;
  rty_LSM_TJA_ICA->TJALineC3 = PubIfDecisionLSM_MDL_B.HWALineC3_o;
  rty_LSM_TJA_ICA->TJALineC2 = PubIfDecisionLSM_MDL_B.HWALineC2_e;
  rty_LSM_TJA_ICA->TJALineC1 = PubIfDecisionLSM_MDL_B.HWALineC1_i;
  rty_LSM_TJA_ICA->TJALineC0 = PubIfDecisionLSM_MDL_B.HWALineC0_g;
  rty_LSM_TJA_ICA->TJARange = PubIfDecisionLSM_MDL_B.HWARange_b;

  /* SignalConversion: '<S3>/Signal Conversion' */
  LSM_TJALineValid = PubIfDecisionLSM_MDL_B.HWALineValid_h;

  /* SignalConversion: '<S3>/Signal Conversion1' */
  LSM_TJALineC3 = PubIfDecisionLSM_MDL_B.HWALineC3_o;

  /* SignalConversion: '<S3>/Signal Conversion10' */
  LSM_LCKLineC0 = PubIfDecisionLSM_MDL_B.LCKLineA0;

  /* SignalConversion: '<S3>/Signal Conversion11' */
  LSM_LCKRange = PubIfDecisionLSM_MDL_B.LCKLineRange;

  /* SignalConversion: '<S3>/Signal Conversion12' */
  LSM_HWALineValid = PubIfDecisionLSM_MDL_B.HWALineValid;

  /* SignalConversion: '<S3>/Signal Conversion13' */
  LSM_HWALineC3 = PubIfDecisionLSM_MDL_B.HWALineC3;

  /* SignalConversion: '<S3>/Signal Conversion14' */
  LSM_HWALineC2 = PubIfDecisionLSM_MDL_B.HWALineC2;

  /* SignalConversion: '<S3>/Signal Conversion15' */
  LSM_HWALineC1 = PubIfDecisionLSM_MDL_B.HWALineC1;

  /* SignalConversion: '<S3>/Signal Conversion16' */
  LSM_HWALeLineC3 = PubIfDecisionLSM_MDL_B.HWALeLineC3_j;

  /* SignalConversion: '<S3>/Signal Conversion17' */
  LSM_HWALeLineC2 = PubIfDecisionLSM_MDL_B.HWALeLineC2_i;

  /* SignalConversion: '<S3>/Signal Conversion18' */
  LSM_HWALeLineC1 = PubIfDecisionLSM_MDL_B.HWALeLineC1_p;

  /* SignalConversion: '<S3>/Signal Conversion19' */
  LSM_HWALeLineC0 = PubIfDecisionLSM_MDL_B.HWALeLineC0_l;

  /* SignalConversion: '<S3>/Signal Conversion2' */
  LSM_TJALineC2 = PubIfDecisionLSM_MDL_B.HWALineC2_e;

  /* SignalConversion: '<S3>/Signal Conversion20' */
  LSM_HWALeRange = PubIfDecisionLSM_MDL_B.HWALeLineRange;

  /* SignalConversion: '<S3>/Signal Conversion21' */
  LSM_HWARiLineValid = PubIfDecisionLSM_MDL_B.HWARiLineValid_j;

  /* SignalConversion: '<S3>/Signal Conversion22' */
  LSM_HWALineC0 = PubIfDecisionLSM_MDL_B.HWALineC0;

  /* SignalConversion: '<S3>/Signal Conversion23' */
  LSM_HWARange = PubIfDecisionLSM_MDL_B.HWARange;

  /* SignalConversion: '<S3>/Signal Conversion24' */
  LSM_HWALeLineValid = PubIfDecisionLSM_MDL_B.HWALeLineValid_mw;

  /* SignalConversion: '<S3>/Signal Conversion25' */
  LSM_HWARiLineC1 = PubIfDecisionLSM_MDL_B.HWARiLineC1_gb;

  /* SignalConversion: '<S3>/Signal Conversion26' */
  LSM_HWARiLineC0 = PubIfDecisionLSM_MDL_B.HWARiLineC0_m;

  /* SignalConversion: '<S3>/Signal Conversion27' */
  LSM_HWARiRange = PubIfDecisionLSM_MDL_B.HWARiLineRange;

  /* SignalConversion: '<S3>/Signal Conversion29' */
  LSM_DoubleLineLost_b = PubIfDecisionLSM_MDL_B.DoubleLineLost_b;

  /* SignalConversion: '<S3>/Signal Conversion3' */
  LSM_TJALineC1 = PubIfDecisionLSM_MDL_B.HWALineC1_i;

  /* SignalConversion: '<S3>/Signal Conversion30' */
  LSM_HeadAngDiff = PubIfDecisionLSM_MDL_B.HeadAngDiff;

  /* SignalConversion: '<S3>/Signal Conversion31' */
  LSM_HWARiLineC3 = PubIfDecisionLSM_MDL_B.HWARiLineC3_n5;

  /* SignalConversion: '<S3>/Signal Conversion32' */
  LSM_HWARiLineC2 = PubIfDecisionLSM_MDL_B.HWARiLineC2_g;

  /* SignalConversion: '<S3>/Signal Conversion33' */
  LSM_ESSLineC2 = PubIfDecisionLSM_MDL_B.ESSLineA2;

  /* SignalConversion: '<S3>/Signal Conversion34' */
  LSM_ESSLineC1 = PubIfDecisionLSM_MDL_B.ESSLineA1;

  /* SignalConversion: '<S3>/Signal Conversion35' */
  LSM_ESSLineC0 = PubIfDecisionLSM_MDL_B.ESSLineA0;

  /* SignalConversion: '<S3>/Signal Conversion36' */
  LSM_ESSRange = PubIfDecisionLSM_MDL_B.ESSRange;

  /* SignalConversion: '<S3>/Signal Conversion37' */
  LSM_ESSLeLineValid = PubIfDecisionLSM_MDL_B.ESSLeLineValid;

  /* SignalConversion: '<S3>/Signal Conversion38' */
  LSM_ESSLeLineC3 = PubIfDecisionLSM_MDL_B.ESSLeLineA3;

  /* SignalConversion: '<S3>/Signal Conversion39' */
  LSM_ESSLineValid = PubIfDecisionLSM_MDL_B.ESSLineValid;

  /* SignalConversion: '<S3>/Signal Conversion4' */
  LSM_TJALineC0 = PubIfDecisionLSM_MDL_B.HWALineC0_g;

  /* SignalConversion: '<S3>/Signal Conversion40' */
  LSM_ESSLineC3 = PubIfDecisionLSM_MDL_B.ESSLineA3;

  /* SignalConversion: '<S3>/Signal Conversion41' */
  LSM_ESSLeLineC0 = PubIfDecisionLSM_MDL_B.ESSLeLineA0;

  /* SignalConversion: '<S3>/Signal Conversion42' */
  LSM_ESSLeRange = PubIfDecisionLSM_MDL_B.ESSLeRange;

  /* SignalConversion: '<S3>/Signal Conversion43' */
  LSM_ESSRiLineValid = PubIfDecisionLSM_MDL_B.ESSRiLineValid;

  /* SignalConversion: '<S3>/Signal Conversion44' */
  LSM_ESSRiLineC3 = PubIfDecisionLSM_MDL_B.ESSRiLineA3;

  /* SignalConversion: '<S3>/Signal Conversion45' */
  LSM_ESSRiLineC2 = PubIfDecisionLSM_MDL_B.ESSRiLineA2;

  /* SignalConversion: '<S3>/Signal Conversion46' */
  LSM_ESSRiLineC1 = PubIfDecisionLSM_MDL_B.ESSRiLineA1;

  /* SignalConversion: '<S3>/Signal Conversion47' */
  LSM_ESSLeLineC2 = PubIfDecisionLSM_MDL_B.ESSLeLineA2;

  /* SignalConversion: '<S3>/Signal Conversion48' */
  LSM_ESSLeLineC1 = PubIfDecisionLSM_MDL_B.ESSLeLineA1;

  /* SignalConversion: '<S3>/Signal Conversion49' */
  LSM_ESSRiLineC0 = PubIfDecisionLSM_MDL_B.ESSRiLineA0;

  /* SignalConversion: '<S3>/Signal Conversion5' */
  LSM_TJARange = PubIfDecisionLSM_MDL_B.HWARange_b;

  /* SignalConversion: '<S3>/Signal Conversion50' */
  LSM_ESSRiRange = PubIfDecisionLSM_MDL_B.ESSRiRange;

  /* UnitDelay: '<S2>/Output' */
  *rty_LSM_UpdateCnt = PubIfDecisionLSM_MDL_DW.Output_DSTATE;

  /* SignalConversion: '<S3>/Signal Conversion51' */
  LSM_UpdateCnt = *rty_LSM_UpdateCnt;

  /* SignalConversion: '<S3>/Signal Conversion59' */
  LSM_dyDiff = PubIfDecisionLSM_MDL_B.preDyDiff;

  /* SignalConversion: '<S3>/Signal Conversion6' */
  LSM_LCKLineValid = PubIfDecisionLSM_MDL_B.LCKLineValid;

  /* SignalConversion: '<S3>/Signal Conversion60' */
  LSM_MLeLane = LSM_LeftMostLane;

  /* SignalConversion: '<S3>/Signal Conversion61' */
  LSM_RoadWidth = LSM_RoadWidth1;

  /* SignalConversion: '<S3>/Signal Conversion62' */
  LSM_LeftLaneChange = PubIfDecisionLSM_MDL_B.RelationalOperator;

  /* SignalConversion: '<S3>/Signal Conversion63' */
  LSM_RightLaneChange = PubIfDecisionLSM_MDL_B.RelationalOperator_i;

  /* SignalConversion: '<S3>/Signal Conversion7' */
  LSM_LCKLineC3 = PubIfDecisionLSM_MDL_B.LCKLineA3;

  /* SignalConversion: '<S3>/Signal Conversion8' */
  LSM_LCKLineC2 = PubIfDecisionLSM_MDL_B.LCKLineA2;

  /* SignalConversion: '<S3>/Signal Conversion9' */
  LSM_LCKLineC1 = PubIfDecisionLSM_MDL_B.LCKLineA1;

  /* SignalConversion: '<S3>/Signal Conversion52' */
  LSM_OTLineValid = rtu_TOS_P0_TARGET_LINE->OTL_Valid;

  /* SignalConversion: '<S3>/Signal Conversion53' */
  LSM_OTL_A3 = rtu_TOS_P0_TARGET_LINE->OTL_C3;

  /* SignalConversion: '<S3>/Signal Conversion54' */
  LSM_OTL_A2 = rtu_TOS_P0_TARGET_LINE->OTL_C2;

  /* SignalConversion: '<S3>/Signal Conversion55' */
  LSM_OTL_A1 = rtu_TOS_P0_TARGET_LINE->OTL_C1;

  /* SignalConversion: '<S3>/Signal Conversion56' */
  LSM_OTL_A0 = rtu_TOS_P0_TARGET_LINE->OTL_C0;

  /* SignalConversion: '<S3>/Signal Conversion57' */
  LSM_OTL_Range = rtu_TOS_P0_TARGET_LINE->OTL_Range;

  /* SignalConversion: '<S3>/Signal Conversion58' */
  LSM_OTL_Count = rtu_TOS_P0_TARGET_LINE->OTL_Cnt;

  /* Sum: '<S5>/FixPt Sum1' incorporates:
   *  Constant: '<S5>/FixPt Constant'
   */
  PubIfDecisionLSM_MDL_B.FixPtSum1 = *rty_LSM_UpdateCnt + 1U;

  /* Switch: '<S6>/FixPt Switch' */
  if (PubIfDecisionLSM_MDL_B.FixPtSum1 > 4294967295U) {
    /* Switch: '<S6>/FixPt Switch' incorporates:
     *  Constant: '<S6>/Constant'
     */
    PubIfDecisionLSM_MDL_B.FixPtSwitch = 0U;
  } else {
    /* Switch: '<S6>/FixPt Switch' */
    PubIfDecisionLSM_MDL_B.FixPtSwitch = PubIfDecisionLSM_MDL_B.FixPtSum1;
  }

  /* End of Switch: '<S6>/FixPt Switch' */

  /* SignalConversion: '<S1>/Signal Copy' */
  LSM_RFM_LineCenter_Valid = rtu_RFM_LINE_CL->bIsLineExist;

  /* SignalConversion: '<S1>/Signal Copy1' */
  LSM_RFM_LineCenter_C0 = rtu_RFM_LINE_CL->dC0V;

  /* SignalConversion: '<S1>/Signal Copy10' */
  LSM_RFM_LineL1_C2 = rtu_RFM_LINE_L1->dC2V;

  /* SignalConversion: '<S1>/Signal Copy11' */
  LSM_RFM_LineL1_C3 = rtu_RFM_LINE_L1->dC3V;

  /* SignalConversion: '<S1>/Signal Copy12' */
  LSM_RFM_LineL1_Start = rtu_RFM_LINE_L1->dDisStart;

  /* SignalConversion: '<S1>/Signal Copy13' */
  LSM_RFM_LineL1_Front = rtu_RFM_LINE_L1->dDisFront;

  /* SignalConversion: '<S1>/Signal Copy14' */
  LSM_RFM_LineR1_C2 = rtu_RFM_LINE_R1->dC2V;

  /* SignalConversion: '<S1>/Signal Copy15' */
  LSM_RFM_LineR1_C3 = rtu_RFM_LINE_R1->dC3V;

  /* SignalConversion: '<S1>/Signal Copy16' */
  LSM_RFM_LineR1_Start = rtu_RFM_LINE_R1->dDisStart;

  /* SignalConversion: '<S1>/Signal Copy17' */
  LSM_RFM_LineR1_Front = rtu_RFM_LINE_R1->dDisFront;

  /* SignalConversion: '<S1>/Signal Copy18' */
  LSM_RFM_LineR1_Valid = rtu_RFM_LINE_R1->bIsLineExist;

  /* SignalConversion: '<S1>/Signal Copy19' */
  LSM_RFM_LineR1_C0 = rtu_RFM_LINE_R1->dC0V;

  /* SignalConversion: '<S1>/Signal Copy2' */
  LSM_RFM_LineCenter_C1 = rtu_RFM_LINE_CL->dC1V;

  /* SignalConversion: '<S1>/Signal Copy20' */
  LSM_RFM_LineR1_C1 = rtu_RFM_LINE_R1->dC1V;

  /* SignalConversion: '<S1>/Signal Copy3' */
  LSM_RFM_LineCenter_C2 = rtu_RFM_LINE_CL->dC2V;

  /* SignalConversion: '<S1>/Signal Copy4' */
  LSM_RFM_LineCenter_C3 = rtu_RFM_LINE_CL->dC3V;

  /* SignalConversion: '<S1>/Signal Copy5' */
  LSM_RFM_LineCenter_Start = rtu_RFM_LINE_CL->dDisStart;

  /* SignalConversion: '<S1>/Signal Copy6' */
  LSM_RFM_LineCenter_Front = rtu_RFM_LINE_CL->dDisFront;

  /* SignalConversion: '<S1>/Signal Copy7' */
  LSM_RFM_LineL1_Valid = rtu_RFM_LINE_L1->bIsLineExist;

  /* SignalConversion: '<S1>/Signal Copy8' */
  LSM_RFM_LineL1_C0 = rtu_RFM_LINE_L1->dC0V;

  /* SignalConversion: '<S1>/Signal Copy9' */
  LSM_RFM_LineL1_C1 = rtu_RFM_LINE_L1->dC1V;

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  PubIfDecisionLSM_MDL_B.DataTypeConversion_b = rtu_RFM_LINE_PRED->bIsLineExist;

  /* SignalConversion: '<S4>/Signal Copy' */
  LSM_L1_Conf = PubIfDecisionLSM_MDL_B.L1Conf;

  /* SignalConversion: '<S4>/Signal Copy1' */
  LSM_L1_Range = PubIfDecisionLSM_MDL_B.L1DxMax;

  /* SignalConversion: '<S4>/Signal Copy10' */
  LSM_LA_ELEM_0_C1 = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_C1;

  /* SignalConversion: '<S4>/Signal Copy100' */
  LSM_LRE_ELEM_1_Line_Side = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Side;

  /* SignalConversion: '<S4>/Signal Copy101' */
  LSM_LRE_ELEM_1_C0 = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Line_C0;

  /* SignalConversion: '<S4>/Signal Copy103' */
  LSM_LRE_ELEM_1_Range_Start = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_View_Range_Start;

  /* SignalConversion: '<S4>/Signal Copy11' */
  LSM_LA_ELEM_0_C2 = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_C2;

  /* SignalConversion: '<S4>/Signal Copy12' */
  LSM_LA_ELEM_0_C3 = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_C3;

  /* SignalConversion: '<S4>/Signal Copy13' */
  LSM_LA_ELEM_0_Range_Start = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_View_Range_Start;

  /* SignalConversion: '<S4>/Signal Copy14' */
  LSM_LA_ELEM_0_Range_End = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_View_Range_End;

  /* SignalConversion: '<S4>/Signal Copy15' */
  LSM_LA_ELEM_0_Availability_State = rtu_EQ4_LA->EQ4_LA_ELEM[0].
    LA_Availability_State;

  /* SignalConversion: '<S4>/Signal Copy16' */
  LSM_LA_ELEM_0_Lanemark_Type = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Lanemark_Type;

  /* SignalConversion: '<S4>/Signal Copy17' */
  LSM_LA_ELEM_0_DLM_Type = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_DLM_Type;

  /* SignalConversion: '<S4>/Signal Copy18' */
  LSM_LA_ELEM_0_Line_Side = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_Side;

  /* SignalConversion: '<S4>/Signal Copy19' */
  LSM_LA_ELEM_0_Marker_Width = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Marker_Width;

  /* SignalConversion: '<S4>/Signal Copy2' */
  LSM_L2_Conf = PubIfDecisionLSM_MDL_B.LH1Conf;

  /* SignalConversion: '<S4>/Signal Copy20' */
  LSM_LA_ELEM_0_Confidence = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Confidence;

  /* SignalConversion: '<S4>/Signal Copy21' */
  LSM_LA_ELEM_1_C0 = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_C0;

  /* SignalConversion: '<S4>/Signal Copy22' */
  LSM_LA_ELEM_1_C1 = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_C1;

  /* SignalConversion: '<S4>/Signal Copy23' */
  LSM_LA_ELEM_1_C2 = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_C2;

  /* SignalConversion: '<S4>/Signal Copy24' */
  LSM_LA_ELEM_1_C3 = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_C3;

  /* SignalConversion: '<S4>/Signal Copy25' */
  LSM_LA_ELEM_1_Range_Start = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_View_Range_Start;

  /* SignalConversion: '<S4>/Signal Copy26' */
  LSM_LA_ELEM_1_Range_End = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_View_Range_End;

  /* SignalConversion: '<S4>/Signal Copy27' */
  LSM_LA_ELEM_1_Availability_State = rtu_EQ4_LA->EQ4_LA_ELEM[1].
    LA_Availability_State;

  /* SignalConversion: '<S4>/Signal Copy28' */
  LSM_LA_ELEM_1_Lanemark_Type = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Lanemark_Type;

  /* SignalConversion: '<S4>/Signal Copy29' */
  LSM_LA_ELEM_1_DLM_Type = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_DLM_Type;

  /* SignalConversion: '<S4>/Signal Copy3' */
  LSM_L2_Range = PubIfDecisionLSM_MDL_B.LH1DxMax;

  /* SignalConversion: '<S4>/Signal Copy30' */
  LSM_LA_ELEM_1_Confidence = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Confidence;

  /* SignalConversion: '<S4>/Signal Copy31' */
  LSM_LA_ELEM_1_Line_Side = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Line_Side;

  /* SignalConversion: '<S4>/Signal Copy32' */
  LSM_LA_ELEM_1_Marker_Width = rtu_EQ4_LA->EQ4_LA_ELEM[1].LA_Marker_Width;

  /* SignalConversion: '<S4>/Signal Copy33' */
  LSM_LA_ELEM_2_C0 = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_C0;

  /* SignalConversion: '<S4>/Signal Copy34' */
  LSM_LA_ELEM_2_C1 = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_C1;

  /* SignalConversion: '<S4>/Signal Copy35' */
  LSM_LA_ELEM_2_C2 = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_C2;

  /* SignalConversion: '<S4>/Signal Copy36' */
  LSM_LA_ELEM_2_C3 = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_C3;

  /* SignalConversion: '<S4>/Signal Copy37' */
  LSM_LA_ELEM_2_Range_Start = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_View_Range_Start;

  /* SignalConversion: '<S4>/Signal Copy38' */
  LSM_LA_ELEM_2_Range_End = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_View_Range_End;

  /* SignalConversion: '<S4>/Signal Copy39' */
  LSM_LA_ELEM_2_Availability_State = rtu_EQ4_LA->EQ4_LA_ELEM[2].
    LA_Availability_State;

  /* SignalConversion: '<S4>/Signal Copy4' */
  LSM_L3_Conf = PubIfDecisionLSM_MDL_B.LH2Conf;

  /* SignalConversion: '<S4>/Signal Copy40' */
  LSM_LA_ELEM_2_Lanemark_Type = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Lanemark_Type;

  /* SignalConversion: '<S4>/Signal Copy41' */
  LSM_LA_ELEM_2_Confidence = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Confidence;

  /* SignalConversion: '<S4>/Signal Copy42' */
  LSM_LA_ELEM_2_DLM_Type = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_DLM_Type;

  /* SignalConversion: '<S4>/Signal Copy43' */
  LSM_LA_ELEM_2_Line_Side = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Line_Side;

  /* SignalConversion: '<S4>/Signal Copy44' */
  LSM_LA_ELEM_2_Marker_Width = rtu_EQ4_LA->EQ4_LA_ELEM[2].LA_Marker_Width;

  /* SignalConversion: '<S4>/Signal Copy45' */
  LSM_LA_ELEM_3_C0 = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_C0;

  /* SignalConversion: '<S4>/Signal Copy46' */
  LSM_LA_ELEM_3_C1 = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_C1;

  /* SignalConversion: '<S4>/Signal Copy47' */
  LSM_LA_ELEM_3_C2 = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_C2;

  /* SignalConversion: '<S4>/Signal Copy48' */
  LSM_LA_ELEM_3_C3 = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_C3;

  /* SignalConversion: '<S4>/Signal Copy49' */
  LSM_LA_ELEM_3_Range_Start = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_View_Range_Start;

  /* SignalConversion: '<S4>/Signal Copy5' */
  LSM_L3_Range = PubIfDecisionLSM_MDL_B.LH2C3;

  /* SignalConversion: '<S4>/Signal Copy50' */
  LSM_LA_ELEM_3_Range_End = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_View_Range_End;

  /* SignalConversion: '<S4>/Signal Copy51' */
  LSM_LA_ELEM_3_Availability_State = rtu_EQ4_LA->EQ4_LA_ELEM[3].
    LA_Availability_State;

  /* SignalConversion: '<S4>/Signal Copy52' */
  LSM_LA_ELEM_3_Lanemark_Type = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Lanemark_Type;

  /* SignalConversion: '<S4>/Signal Copy53' */
  LSM_LA_ELEM_3_DLM_Type = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_DLM_Type;

  /* SignalConversion: '<S4>/Signal Copy54' */
  LSM_LA_ELEM_3_Confidence = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Confidence;

  /* SignalConversion: '<S4>/Signal Copy55' */
  LSM_LA_ELEM_3_Line_Side = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Line_Side;

  /* SignalConversion: '<S4>/Signal Copy56' */
  LSM_LA_ELEM_3_Marker_Width = rtu_EQ4_LA->EQ4_LA_ELEM[3].LA_Marker_Width;

  /* SignalConversion: '<S4>/Signal Copy57' */
  LSM_LH_Count = rtu_EQ4_LH->EQ4_LH_HDR.LH_Lanes_Count;

  /* SignalConversion: '<S4>/Signal Copy58' */
  LSM_LH_ELEM_0_C0 = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_First_C0;

  /* SignalConversion: '<S4>/Signal Copy59' */
  LSM_LH_ELEM_0_C1 = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_First_C1;

  /* SignalConversion: '<S4>/Signal Copy6' */
  LSM_L4_Conf = PubIfDecisionLSM_MDL_B.L4Conf;

  /* SignalConversion: '<S4>/Signal Copy60' */
  LSM_LH_ELEM_0_C2 = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_First_C2;

  /* SignalConversion: '<S4>/Signal Copy61' */
  LSM_LH_ELEM_0_Confidence = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Confidence;

  /* SignalConversion: '<S4>/Signal Copy62' */
  LSM_LH_ELEM_0_C3 = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Line_First_C3;

  /* SignalConversion: '<S4>/Signal Copy63' */
  LSM_LH_ELEM_0_VR_End = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_First_VR_End;

  /* SignalConversion: '<S4>/Signal Copy64' */
  LSM_LH_ELEM_0_Availability_State = rtu_EQ4_LH->EQ4_LH_ELEM[0].
    LH_Availability_State;

  /* SignalConversion: '<S4>/Signal Copy65' */
  LSM_LH_ELEM_0_Lanemark_Type = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Lanemark_Type;

  /* SignalConversion: '<S4>/Signal Copy66' */
  LSM_LH_ELEM_0_DLM_Type = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_DLM_Type;

  /* SignalConversion: '<S4>/Signal Copy67' */
  LSM_LH_ELEM_0_Marker_Width = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Marker_Width;

  /* SignalConversion: '<S4>/Signal Copy68' */
  LSM_LH_ELEM_0_Line_Side = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Side;

  /* SignalConversion: '<S4>/Signal Copy69' */
  LSM_LH_ELEM_0_Crossing = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_Crossing;

  /* SignalConversion: '<S4>/Signal Copy7' */
  LSM_L4_Range = PubIfDecisionLSM_MDL_B.L4DxMax;

  /* SignalConversion: '<S4>/Signal Copy70' */
  LSM_LH_ELEM_0_VR_Start = rtu_EQ4_LH->EQ4_LH_ELEM[0].LH_First_VR_Start;

  /* SignalConversion: '<S4>/Signal Copy71' */
  LSM_LH_ELEM_1_C0 = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_First_C0;

  /* SignalConversion: '<S4>/Signal Copy72' */
  LSM_LH_ELEM_1_C1 = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_First_C1;

  /* SignalConversion: '<S4>/Signal Copy73' */
  LSM_LH_ELEM_1_C2 = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_First_C2;

  /* SignalConversion: '<S4>/Signal Copy74' */
  LSM_LH_ELEM_1_Confidence = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Confidence;

  /* SignalConversion: '<S4>/Signal Copy75' */
  LSM_LH_ELEM_1_C3 = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Line_First_C3;

  /* SignalConversion: '<S4>/Signal Copy76' */
  LSM_LH_ELEM_1_VR_Start = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_First_VR_Start;

  /* SignalConversion: '<S4>/Signal Copy77' */
  LSM_LH_ELEM_1_Availability_State = rtu_EQ4_LH->EQ4_LH_ELEM[1].
    LH_Availability_State;

  /* SignalConversion: '<S4>/Signal Copy78' */
  LSM_LH_ELEM_1_Lanemark_Type = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Lanemark_Type;

  /* SignalConversion: '<S4>/Signal Copy79' */
  LSM_LH_ELEM_1_DLM_Type = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_DLM_Type;

  /* SignalConversion: '<S4>/Signal Copy8' */
  LSM_LA_Adjacent_Count = rtu_EQ4_LA->EQ4_LA_HDR.LA_Adjacent_Count;

  /* SignalConversion: '<S4>/Signal Copy80' */
  LSM_LH_ELEM_1_Marker_Width = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Marker_Width;

  /* SignalConversion: '<S4>/Signal Copy81' */
  LSM_LH_ELEM_1_Line_Side = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Side;

  /* SignalConversion: '<S4>/Signal Copy82' */
  LSM_LH_ELEM_1_Crossing = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_Crossing;

  /* SignalConversion: '<S4>/Signal Copy83' */
  LSM_LH_ELEM_1_VR_End = rtu_EQ4_LH->EQ4_LH_ELEM[1].LH_First_VR_End;

  /* SignalConversion: '<S4>/Signal Copy84' */
  LSM_LRE_Count = rtu_EQ4_LRE->EQ4_LRE_HDR.LRE_Count;

  /* SignalConversion: '<S4>/Signal Copy85' */
  LSM_LRE_ELEM_0_Line_Side = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Side;

  /* SignalConversion: '<S4>/Signal Copy86' */
  LSM_LRE_ELEM_0_C1 = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Line_C1;

  /* SignalConversion: '<S4>/Signal Copy87' */
  LSM_LRE_ELEM_0_C2 = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Line_C2;

  /* SignalConversion: '<S4>/Signal Copy88' */
  LSM_LRE_ELEM_0_C3 = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Line_C3;

  /* SignalConversion: '<S4>/Signal Copy89' */
  LSM_LRE_ELEM_0_Range_End = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_View_Range_End;

  /* SignalConversion: '<S4>/Signal Copy9' */
  LSM_LA_ELEM_0_C0 = rtu_EQ4_LA->EQ4_LA_ELEM[0].LA_Line_C0;

  /* SignalConversion: '<S4>/Signal Copy90' */
  LSM_LRE_ELEM_0_Range_Start = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_View_Range_Start;

  /* SignalConversion: '<S4>/Signal Copy91' */
  LSM_LRE_ELEM_0_Availability_State = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].
    LRE_Availability_State;

  /* SignalConversion: '<S4>/Signal Copy92' */
  LSM_LRE_ELEM_0_C0 = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Line_C0;

  /* SignalConversion: '<S4>/Signal Copy93' */
  LSM_LRE_ELEM_0_Confidence = rtu_EQ4_LRE->EQ4_LRE_ELEM[0].LRE_Confidence;

  /* SignalConversion: '<S4>/Signal Copy94' */
  LSM_LRE_ELEM_1_Confidence = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Confidence;

  /* SignalConversion: '<S4>/Signal Copy95' */
  LSM_LRE_ELEM_1_C1 = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Line_C1;

  /* SignalConversion: '<S4>/Signal Copy96' */
  LSM_LRE_ELEM_1_C2 = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Line_C2;

  /* SignalConversion: '<S4>/Signal Copy97' */
  LSM_LRE_ELEM_1_C3 = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_Line_C3;

  /* SignalConversion: '<S4>/Signal Copy98' */
  LSM_LRE_ELEM_1_Availability_State = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].
    LRE_Availability_State;

  /* SignalConversion: '<S4>/Signal Copy99' */
  LSM_LRE_ELEM_1_Range_End = rtu_EQ4_LRE->EQ4_LRE_ELEM[1].LRE_View_Range_End;

  /* RelationalOperator: '<S21>/Compare' incorporates:
   *  Constant: '<S21>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_hx5 = (rtu_RFM_TSR->RoadType == ((uint8_T)2U));

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_o5 = (rtu_RFM_ROAD->i_mapvalid > ((uint8_T)0U));

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_mc = (rtu_RFM_TSR->RoadType == ((uint8_T)1U));

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ls = (*rtu_vxvRefMs > 0.0F);

  /* RelationalOperator: '<S28>/Compare' incorporates:
   *  Constant: '<S28>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ke = (PubIfDecisionLSM_MDL_B.LineConf[0] ==
    ((uint8_T)0U));

  /* RelationalOperator: '<S29>/Compare' incorporates:
   *  Constant: '<S29>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_oj = (PubIfDecisionLSM_MDL_B.LH1Type !=
    ((uint8_T)2U));

  /* UnitDelay: '<S52>/Unit Delay2' */
  PubIfDecisionLSM_MDL_B.UnitDelay2_b =
    PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_g;

  /* Logic: '<S17>/Logical Operator' */
  PubIfDecisionLSM_MDL_B.LogicalOperator = (PubIfDecisionLSM_MDL_B.Compare_ke &&
    PubIfDecisionLSM_MDL_B.Compare_oj && PubIfDecisionLSM_MDL_B.Compare_ls);

  /* UnitDelay: '<S52>/Unit Delay1' */
  PubIfDecisionLSM_MDL_B.UnitDelay1_f =
    PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_k;

  /* If: '<S52>/If' */
  if (PubIfDecisionLSM_MDL_B.UnitDelay2_b &&
      PubIfDecisionLSM_MDL_B.LogicalOperator) {
    /* Outputs for IfAction SubSystem: '<S52>/If Action Subsystem' incorporates:
     *  ActionPort: '<S208>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem(PubIfDecisionLSM_MDL_B.UnitDelay1_f,
      &PubIfDecisionLSM_MDL_B.Merge_h,
      &PubIfDecisionLSM_MDL_B.IfActionSubsystem_a);

    /* End of Outputs for SubSystem: '<S52>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S52>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S209>/Action Port'
     */
    PubIfDecisionLSM_MDL_IfActionSubsystem1(&PubIfDecisionLSM_MDL_B.Merge_h);

    /* End of Outputs for SubSystem: '<S52>/If Action Subsystem1' */
  }

  /* End of If: '<S52>/If' */

  /* Product: '<S52>/Product' incorporates:
   *  Constant: '<S52>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Product_p = (real32_T)PubIfDecisionLSM_MDL_B.Merge_h *
    0.02F;

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_mf = (PubIfDecisionLSM_MDL_B.Product_p >=
    150.0F);

  /* UnitDelay: '<S17>/Unit Delay36' */
  PubIfDecisionLSM_MDL_B.UnitDelay36 =
    PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE;

  /* MATLAB Function: '<S17>/LREWidthCalc' */
  PubIfDecisionLSM_MDL_B.LREWidth = PubIfDecisionLSM_MDL_B.UnitDelay36;
  if (PubIfDecisionLSM_MDL_B.RelationalOperator1_d &&
      (PubIfDecisionLSM_MDL_B.EdgeConf[0] > 0) &&
      (PubIfDecisionLSM_MDL_B.EdgeConf[1] > 0) && (fabsf((atanf
         (PubIfDecisionLSM_MDL_B.EdgeA1[0]) - atanf
         (PubIfDecisionLSM_MDL_B.EdgeA1[1])) * 57.3F) < 3.0F)) {
    t_Psi = (PubIfDecisionLSM_MDL_B.EdgeA0[0] - PubIfDecisionLSM_MDL_B.EdgeA0[1])
      / sqrtf(PubIfDecisionLSM_MDL_B.EdgeA1[1] * PubIfDecisionLSM_MDL_B.EdgeA1[1]
              + 1.0F);
    PubIfDecisionLSM_MDL_B.LREWidth = (t_Psi -
      PubIfDecisionLSM_MDL_B.UnitDelay36) * 0.1F +
      PubIfDecisionLSM_MDL_B.UnitDelay36;
  }

  /* End of MATLAB Function: '<S17>/LREWidthCalc' */

  /* Logic: '<S17>/Logical Operator8' */
  PubIfDecisionLSM_MDL_B.LogicalOperator8 = (PubIfDecisionLSM_MDL_B.Compare_mc ||
    PubIfDecisionLSM_MDL_B.Compare_hx5);

  /* Logic: '<S17>/Logical Operator7' */
  PubIfDecisionLSM_MDL_B.LogicalOperator7_p = (PubIfDecisionLSM_MDL_B.Compare_o5
    && PubIfDecisionLSM_MDL_B.LogicalOperator8);

  /* SignalConversion: '<S17>/Signal Copy10' */
  LSM_EN_Valid = rtu_RFM_LINE_ENTRY_CL->bIsLineExist;

  /* SignalConversion: '<S17>/Signal Copy11' */
  LSM_EN_C0 = rtu_RFM_LINE_ENTRY_CL->dC0V;

  /* SignalConversion: '<S17>/Signal Copy12' */
  LSM_EN_C1 = rtu_RFM_LINE_ENTRY_CL->dC1V;

  /* SignalConversion: '<S17>/Signal Copy13' */
  LSM_EN_C2 = rtu_RFM_LINE_ENTRY_CL->dC2V;

  /* SignalConversion: '<S17>/Signal Copy14' */
  LSM_EN_C3 = rtu_RFM_LINE_ENTRY_CL->dC3V;

  /* SignalConversion: '<S17>/Signal Copy15' */
  LSM_EN_Start = rtu_RFM_LINE_ENTRY_CL->dDisStart;

  /* SignalConversion: '<S17>/Signal Copy16' */
  LSM_EN_Front = rtu_RFM_LINE_ENTRY_CL->dDisFront;

  /* SignalConversion: '<S17>/Signal Copy17' */
  LSM_Exit_Valid = rtu_RFM_LINE_EXIT_CL->bIsLineExist;

  /* SignalConversion: '<S17>/Signal Copy18' */
  LSM_Exit_C0 = rtu_RFM_LINE_EXIT_CL->dC0V;

  /* SignalConversion: '<S17>/Signal Copy19' */
  LSM_Exit_C1 = rtu_RFM_LINE_EXIT_CL->dC1V;

  /* SignalConversion: '<S17>/Signal Copy2' */
  PubIfDecisionLSM_MDL_B.SignalCopy2 = PubIfDecisionLSM_MDL_B.HWALineC0_g2;

  /* SignalConversion: '<S17>/Signal Copy20' */
  LSM_Exit_C2 = rtu_RFM_LINE_EXIT_CL->dC2V;

  /* SignalConversion: '<S17>/Signal Copy21' */
  LSM_Exit_C3 = rtu_RFM_LINE_EXIT_CL->dC3V;

  /* SignalConversion: '<S17>/Signal Copy22' */
  LSM_Exit_Start = rtu_RFM_LINE_EXIT_CL->dDisStart;

  /* SignalConversion: '<S17>/Signal Copy23' */
  LSM_Exit_Front = rtu_RFM_LINE_EXIT_CL->dDisFront;

  /* SignalConversion: '<S17>/Signal Copy24' */
  LSM_L3_AvaliTime = PubIfDecisionLSM_MDL_B.Avail_time_m[2];

  /* SignalConversion: '<S17>/Signal Copy25' */
  LSM_L2_AvaliTime = PubIfDecisionLSM_MDL_B.Avail_time_m[1];

  /* SignalConversion: '<S17>/Signal Copy26' */
  LSM_L1_AvaliDis = PubIfDecisionLSM_MDL_B.Avail_dis_n[0];

  /* SignalConversion: '<S17>/Signal Copy27' */
  LSM_L2_AvaliDis = PubIfDecisionLSM_MDL_B.Avail_dis_n[1];

  /* SignalConversion: '<S17>/Signal Copy28' */
  LSM_L1_AvaliTime = PubIfDecisionLSM_MDL_B.Avail_time_m[0];

  /* SignalConversion: '<S17>/Signal Copy29' */
  LSM_L4_AvaliTime = PubIfDecisionLSM_MDL_B.Avail_time_m[3];

  /* SignalConversion: '<S17>/Signal Copy30' */
  LSM_L3_AvaliDis = PubIfDecisionLSM_MDL_B.Avail_dis_n[2];

  /* SignalConversion: '<S17>/Signal Copy31' */
  LSM_L4_AvaliDis = PubIfDecisionLSM_MDL_B.Avail_dis_n[3];

  /* SignalConversion: '<S17>/Signal Copy32' */
  LSM_L1_A0 = PubIfDecisionLSM_MDL_B.A0_o3[0];

  /* SignalConversion: '<S17>/Signal Copy33' */
  LSM_L2_A0 = PubIfDecisionLSM_MDL_B.A0_o3[1];

  /* SignalConversion: '<S17>/Signal Copy34' */
  LSM_L3_A0 = PubIfDecisionLSM_MDL_B.A0_o3[2];

  /* SignalConversion: '<S17>/Signal Copy35' */
  LSM_L4_A0 = PubIfDecisionLSM_MDL_B.A0_o3[3];

  /* Chart: '<S68>/Chart' */
  if (PubIfDecisionLSM_MDL_DW.is_active_c18_PubIfDecisionLSM_MDL == 0U) {
    PubIfDecisionLSM_MDL_DW.is_active_c18_PubIfDecisionLSM_MDL = 1U;
    PubIfDecisionLSM_MDL_DW.is_c18_PubIfDecisionLSM_MDL =
      PubIfDecisionLSM_MDL_IN_init;
    PubIfDecisionLSM_MDL_B.PilotRoadSts_h = PubIfDecisionLSM_MDL_B.PilotRoadSts;
  } else if (PubIfDecisionLSM_MDL_DW.is_c18_PubIfDecisionLSM_MDL == 1) {
    if (PubIfDecisionLSM_MDL_B.PilotRoadSts == 19) {
      PubIfDecisionLSM_MDL_DW.is_c18_PubIfDecisionLSM_MDL =
        PubIfDecisionLSM_MDL_IN_init1;
      PubIfDecisionLSM_MDL_B.PilotRoadSts_h = 19U;
    } else {
      PubIfDecisionLSM_MDL_B.PilotRoadSts_h =
        PubIfDecisionLSM_MDL_B.PilotRoadSts;
    }
  } else {
    /* case IN_init1: */
    Update = ((rtu_RFM_LINE_EXIT_CL->bIsLineExist < 2) ||
              PubIfDecisionLSM_MDL_B.rExitStub3 ||
              PubIfDecisionLSM_MDL_B.lExitStub3);
    if (Update) {
      PubIfDecisionLSM_MDL_DW.is_c18_PubIfDecisionLSM_MDL =
        PubIfDecisionLSM_MDL_IN_init;
      PubIfDecisionLSM_MDL_B.PilotRoadSts_h =
        PubIfDecisionLSM_MDL_B.PilotRoadSts;
    } else {
      PubIfDecisionLSM_MDL_B.PilotRoadSts_h = 19U;
    }
  }

  /* End of Chart: '<S68>/Chart' */

  /* UnitDelay: '<S70>/Unit Delay3' */
  PubIfDecisionLSM_MDL_B.UnitDelay3_g =
    PubIfDecisionLSM_MDL_DW.UnitDelay3_DSTATE_j;

  /* RelationalOperator: '<S184>/Compare' incorporates:
   *  Constant: '<S184>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_ep = (PubIfDecisionLSM_MDL_B.UnitDelay3_g ==
    ((uint8_T)1U));

  /* UnitDelay: '<S70>/Unit Delay2' */
  PubIfDecisionLSM_MDL_B.UnitDelay2_d =
    PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_m;

  /* RelationalOperator: '<S185>/Compare' incorporates:
   *  Constant: '<S185>/Constant'
   */
  PubIfDecisionLSM_MDL_B.Compare_hs = (PubIfDecisionLSM_MDL_B.UnitDelay2_d ==
    ((uint8_T)2U));

  /* UnitDelay: '<S70>/Unit Delay' */
  PubIfDecisionLSM_MDL_B.UnitDelay_oc =
    PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ku;

  /* RelationalOperator: '<S70>/Relational Operator1' */
  PubIfDecisionLSM_MDL_B.RelationalOperator1_i = (rtu_RFM_ROAD->nLaneID <
    PubIfDecisionLSM_MDL_B.UnitDelay_oc);

  /* Logic: '<S70>/Logical Operator1' */
  PubIfDecisionLSM_MDL_B.LogicalOperator1_o = (PubIfDecisionLSM_MDL_B.Compare_ep
    && PubIfDecisionLSM_MDL_B.RelationalOperator1_i);

  /* UnitDelay: '<S70>/Unit Delay1' */
  PubIfDecisionLSM_MDL_B.UnitDelay1_m =
    PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_kn;

  /* RelationalOperator: '<S70>/Relational Operator2' */
  PubIfDecisionLSM_MDL_B.RelationalOperator2_f = (rtu_RFM_ROAD->nLaneID >
    PubIfDecisionLSM_MDL_B.UnitDelay1_m);

  /* Logic: '<S70>/Logical Operator2' */
  PubIfDecisionLSM_MDL_B.LogicalOperator2_g = (PubIfDecisionLSM_MDL_B.Compare_hs
    && PubIfDecisionLSM_MDL_B.RelationalOperator2_f);

  /* Switch: '<S70>/Switch1' */
  if (PubIfDecisionLSM_MDL_B.LogicalOperator2_g) {
    /* Switch: '<S70>/Switch1' incorporates:
     *  Constant: '<S70>/Constant1'
     */
    PubIfDecisionLSM_MDL_B.Switch1 = ((uint8_T)2U);
  } else {
    /* Switch: '<S70>/Switch1' incorporates:
     *  Constant: '<S70>/Constant2'
     */
    PubIfDecisionLSM_MDL_B.Switch1 = ((uint8_T)0U);
  }

  /* End of Switch: '<S70>/Switch1' */

  /* Switch: '<S70>/Switch' */
  if (PubIfDecisionLSM_MDL_B.LogicalOperator1_o) {
    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S70>/Constant'
     */
    PubIfDecisionLSM_MDL_B.LaneChange = ((uint8_T)1U);
  } else {
    /* Switch: '<S70>/Switch' */
    PubIfDecisionLSM_MDL_B.LaneChange = PubIfDecisionLSM_MDL_B.Switch1;
  }

  /* End of Switch: '<S70>/Switch' */

  /* SignalConversion: '<S49>/Signal Copy' */
  LSM_LeftLineConf = PubIfDecisionLSM_MDL_B.LineConf[1];

  /* SignalConversion: '<S49>/Signal Copy1' */
  LSM_RightLineConf = PubIfDecisionLSM_MDL_B.LineConf[2];

  /* Switch: '<S17>/Switch5' */
  if (PubIfDecisionLSM_MDL_B.LogicalOperator7_p) {
    /* Switch: '<S17>/Switch5' incorporates:
     *  Constant: '<S17>/Constant15'
     */
    PubIfDecisionLSM_MDL_B.Switch5 = ((uint8_T)0U);
  } else {
    /* Switch: '<S17>/Switch5' incorporates:
     *  Constant: '<S17>/Constant16'
     */
    PubIfDecisionLSM_MDL_B.Switch5 = ((uint8_T)3U);
  }

  /* End of Switch: '<S17>/Switch5' */

  /* Switch: '<S17>/Switch6' incorporates:
   *  Constant: '<S17>/Constant17'
   *  Constant: '<S17>/Constant18'
   */
  if (P_LSM_ALC_Enable > ((uint8_T)0U)) {
    *rty_LSM_PilotTurnSwSts = ((uint8_T)0U);
  } else {
    *rty_LSM_PilotTurnSwSts = PubIfDecisionLSM_MDL_B.Switch5;
  }

  /* End of Switch: '<S17>/Switch6' */

  /* SignalConversion generated from: '<S55>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VehStation'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1_d[0] =
    PubIfDecisionLSM_MDL_B.L1Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1_d[1] =
    PubIfDecisionLSM_MDL_B.LH1Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1_d[2] =
    PubIfDecisionLSM_MDL_B.LH2Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1_d[3] =
    PubIfDecisionLSM_MDL_B.L4Conf;

  /* SignalConversion generated from: '<S55>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VehStation'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2[0] =
    PubIfDecisionLSM_MDL_B.L1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2[1] =
    PubIfDecisionLSM_MDL_B.LH1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2[2] =
    PubIfDecisionLSM_MDL_B.LH2C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2[3] =
    PubIfDecisionLSM_MDL_B.L4C0;

  /* SignalConversion generated from: '<S55>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VehStation'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_p[0] =
    PubIfDecisionLSM_MDL_B.LH1Type;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_p[1] =
    PubIfDecisionLSM_MDL_B.LH2Type;

  /* SignalConversion generated from: '<S55>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VehStation'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_n[0] =
    PubIfDecisionLSM_MDL_B.LRE1Conf;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_n[1] =
    PubIfDecisionLSM_MDL_B.LRE2Conf;

  /* SignalConversion generated from: '<S55>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VehStation'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_m[0] =
    PubIfDecisionLSM_MDL_B.LRE1C0;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_m[1] =
    PubIfDecisionLSM_MDL_B.LRE2C0;

  /* SignalConversion generated from: '<S55>/ SFunction ' incorporates:
   *  MATLAB Function: '<S17>/VehStation'
   */
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_pl[0] =
    PubIfDecisionLSM_MDL_B.LH1Color;
  PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_pl[1] =
    PubIfDecisionLSM_MDL_B.LH2Color;

  /* MATLAB Function: '<S17>/VehStation' */
  PubIfDecisionLSM_MDL_B.LeftMostLane = false;
  PubIfDecisionLSM_MDL_B.RightMostLane = false;
  if (((PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1_d[1] > 0) &&
       (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_n[0] > 0) &&
       (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_p[0] == 1) &&
       (fabsf(PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2[1] -
              PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_m[0])
        < 5.0F)) ||
      (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_pl[0] == 2))
  {
    PubIfDecisionLSM_MDL_B.LeftMostLane = true;
  } else {
    if (((PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport1_d[2] > 0)
         && (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport4_n[1] >
             0) &&
         (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport3_p[1] == 1)
         && (fabsf(PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport2
                   [2] -
                   PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport5_m
                   [1]) < 5.0F)) ||
        (PubIfDecisionLSM_MDL_B.TmpSignalConversionAtSFunctionInport6_pl[1] == 2))
    {
      PubIfDecisionLSM_MDL_B.RightMostLane = true;
    }
  }
}

/* Update for referenced model: 'PubIfDecisionLSM_MDL' */
void PubIfDecisionLSM_MDL_Update(const EQ4_LH_BUS *rtu_EQ4_LH, const EQ4_LA_BUS *
  rtu_EQ4_LA, const EQ4_LRE_BUS *rtu_EQ4_LRE, const TOS_P0_TARGET_LINE_BUS
  *rtu_TOS_P0_TARGET_LINE, const VSM_HMI_BUS *rtu_VSM_HMI, const RFM_ROAD_BUS
  *rtu_RFM_ROAD)
{
  /* Update for UnitDelay: '<S8>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_k =
    rtu_EQ4_LA->EQ4_LA_HDR.LA_Sync_ID;

  /* Update for UnitDelay: '<S9>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_l =
    rtu_EQ4_LH->EQ4_LH_HDR.LH_Sync_ID;

  /* Update for UnitDelay: '<S53>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j = PubIfDecisionLSM_MDL_B.LeftType;

  /* Update for UnitDelay: '<S53>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_m =
    PubIfDecisionLSM_MDL_B.LeftDLMType;

  /* Update for UnitDelay: '<S53>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE_k =
    PubIfDecisionLSM_MDL_B.LeftDECELType;

  /* Update for UnitDelay: '<S53>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_k = PubIfDecisionLSM_MDL_B.RightType;

  /* Update for UnitDelay: '<S53>/Unit Delay3' */
  PubIfDecisionLSM_MDL_DW.UnitDelay3_DSTATE =
    PubIfDecisionLSM_MDL_B.RightDLMType;

  /* Update for UnitDelay: '<S53>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE_i =
    PubIfDecisionLSM_MDL_B.RightDECELType;

  /* Update for UnitDelay: '<S53>/Unit Delay6' */
  PubIfDecisionLSM_MDL_DW.UnitDelay6_DSTATE = PubIfDecisionLSM_MDL_B.LeftColor;

  /* Update for UnitDelay: '<S53>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE_f = PubIfDecisionLSM_MDL_B.LLeftType;

  /* Update for UnitDelay: '<S53>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE_f = PubIfDecisionLSM_MDL_B.Cnt1_o;

  /* Update for UnitDelay: '<S53>/Unit Delay36' */
  PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE_n = PubIfDecisionLSM_MDL_B.Cnt2_j;

  /* Update for UnitDelay: '<S17>/Unit Delay24' */
  PubIfDecisionLSM_MDL_DW.UnitDelay24_DSTATE = rtu_VSM_HMI->ESSSts;

  /* Update for UnitDelay: '<S17>/Unit Delay13' */
  PubIfDecisionLSM_MDL_DW.UnitDelay13_DSTATE =
    PubIfDecisionLSM_MDL_B.RelationalOperator_i;

  /* Update for UnitDelay: '<S17>/Unit Delay33' */
  PubIfDecisionLSM_MDL_DW.UnitDelay33_DSTATE = LSM_RoadWidth1;

  /* Update for UnitDelay: '<S17>/Unit Delay32' */
  PubIfDecisionLSM_MDL_DW.UnitDelay32_DSTATE = PubIfDecisionLSM_MDL_B.Dist;

  /* Update for UnitDelay: '<S17>/Unit Delay34' */
  PubIfDecisionLSM_MDL_DW.UnitDelay34_DSTATE = PubIfDecisionLSM_MDL_B.DistRi;

  /* Update for UnitDelay: '<S17>/Unit Delay58' */
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.LineConf[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.LineConf[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[2] =
    PubIfDecisionLSM_MDL_B.LineConf[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay58_DSTATE[3] =
    PubIfDecisionLSM_MDL_B.LineConf[3];

  /* Update for UnitDelay: '<S17>/Unit Delay59' */
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[0] = PubIfDecisionLSM_MDL_B.A1_n[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[1] = PubIfDecisionLSM_MDL_B.A1_n[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[2] = PubIfDecisionLSM_MDL_B.A1_n[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay59_DSTATE[3] = PubIfDecisionLSM_MDL_B.A1_n[3];

  /* Update for UnitDelay: '<S17>/Unit Delay35' */
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[0] = PubIfDecisionLSM_MDL_B.A0_o3[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[1] = PubIfDecisionLSM_MDL_B.A0_o3[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[2] = PubIfDecisionLSM_MDL_B.A0_o3[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay35_DSTATE[3] = PubIfDecisionLSM_MDL_B.A0_o3[3];

  /* Update for UnitDelay: '<S17>/Unit Delay14' */
  PubIfDecisionLSM_MDL_DW.UnitDelay14_DSTATE = LSM_RoadWidth1;

  /* Update for UnitDelay: '<S17>/Unit Delay15' */
  PubIfDecisionLSM_MDL_DW.UnitDelay15_DSTATE = PubIfDecisionLSM_MDL_B.tLost_fa;

  /* Update for UnitDelay: '<S17>/Unit Delay52' */
  PubIfDecisionLSM_MDL_DW.UnitDelay52_DSTATE = PubIfDecisionLSM_MDL_B.LineValid;

  /* Update for UnitDelay: '<S17>/Unit Delay31' */
  PubIfDecisionLSM_MDL_DW.UnitDelay31_DSTATE = PubIfDecisionLSM_MDL_B.A3_n;

  /* Update for UnitDelay: '<S17>/Unit Delay49' */
  PubIfDecisionLSM_MDL_DW.UnitDelay49_DSTATE = PubIfDecisionLSM_MDL_B.A2_f;

  /* Update for UnitDelay: '<S17>/Unit Delay50' */
  PubIfDecisionLSM_MDL_DW.UnitDelay50_DSTATE = PubIfDecisionLSM_MDL_B.A1_b;

  /* Update for UnitDelay: '<S17>/Unit Delay51' */
  PubIfDecisionLSM_MDL_DW.UnitDelay51_DSTATE = PubIfDecisionLSM_MDL_B.A0_k;

  /* Update for UnitDelay: '<S50>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_a = rtu_VSM_HMI->HWASts;

  /* Update for UnitDelay: '<S50>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_k =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction2_b.Lock_counter;

  /* Update for UnitDelay: '<S17>/Unit Delay54' */
  PubIfDecisionLSM_MDL_DW.UnitDelay54_DSTATE = PubIfDecisionLSM_MDL_B.Quality;

  /* Update for UnitDelay: '<S17>/Unit Delay55' */
  PubIfDecisionLSM_MDL_DW.UnitDelay55_DSTATE = PubIfDecisionLSM_MDL_B.LineValid;

  /* Update for UnitDelay: '<S17>/Unit Delay56' */
  PubIfDecisionLSM_MDL_DW.UnitDelay56_DSTATE = PubIfDecisionLSM_MDL_B.A3_n;

  /* Update for UnitDelay: '<S17>/Unit Delay70' */
  PubIfDecisionLSM_MDL_DW.UnitDelay70_DSTATE = PubIfDecisionLSM_MDL_B.A2_f;

  /* Update for UnitDelay: '<S17>/Unit Delay69' */
  PubIfDecisionLSM_MDL_DW.UnitDelay69_DSTATE = PubIfDecisionLSM_MDL_B.A1_b;

  /* Update for UnitDelay: '<S17>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE = PubIfDecisionLSM_MDL_B.A0_k;

  /* Update for UnitDelay: '<S17>/Unit Delay67' */
  PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE = PubIfDecisionLSM_MDL_B.Range;

  /* Update for UnitDelay: '<S17>/Unit Delay66' */
  PubIfDecisionLSM_MDL_DW.UnitDelay66_DSTATE = PubIfDecisionLSM_MDL_B.tLost;

  /* Update for UnitDelay: '<S32>/Unit Delay67' */
  PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE_l = LSM_LeftOffset_b;

  /* Update for UnitDelay: '<S33>/Unit Delay67' */
  PubIfDecisionLSM_MDL_DW.UnitDelay67_DSTATE_lc = LSM_RightOffset_b;

  /* Update for UnitDelay: '<S17>/Unit Delay57' */
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.LineConf[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.LineConf[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[2] =
    PubIfDecisionLSM_MDL_B.LineConf[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay57_DSTATE[3] =
    PubIfDecisionLSM_MDL_B.LineConf[3];

  /* Update for UnitDelay: '<S17>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.LineReliable[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.LineReliable[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[2] =
    PubIfDecisionLSM_MDL_B.LineReliable[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE[3] =
    PubIfDecisionLSM_MDL_B.LineReliable[3];

  /* Update for UnitDelay: '<S17>/Unit Delay9' */
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[0] = PubIfDecisionLSM_MDL_B.A3_h[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[1] = PubIfDecisionLSM_MDL_B.A3_h[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[2] = PubIfDecisionLSM_MDL_B.A3_h[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay9_DSTATE[3] = PubIfDecisionLSM_MDL_B.A3_h[3];

  /* Update for UnitDelay: '<S17>/Unit Delay8' */
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[0] = PubIfDecisionLSM_MDL_B.A2_k[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[1] = PubIfDecisionLSM_MDL_B.A2_k[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[2] = PubIfDecisionLSM_MDL_B.A2_k[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay8_DSTATE[3] = PubIfDecisionLSM_MDL_B.A2_k[3];

  /* Update for UnitDelay: '<S17>/Unit Delay7' */
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[0] = PubIfDecisionLSM_MDL_B.A1_n[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[1] = PubIfDecisionLSM_MDL_B.A1_n[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[2] = PubIfDecisionLSM_MDL_B.A1_n[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay7_DSTATE[3] = PubIfDecisionLSM_MDL_B.A1_n[3];

  /* Update for UnitDelay: '<S17>/Unit Delay5' */
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[0] = PubIfDecisionLSM_MDL_B.A0_o3[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[1] = PubIfDecisionLSM_MDL_B.A0_o3[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[2] = PubIfDecisionLSM_MDL_B.A0_o3[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay5_DSTATE[3] = PubIfDecisionLSM_MDL_B.A0_o3[3];

  /* Update for UnitDelay: '<S17>/Unit Delay4' */
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[0] = PubIfDecisionLSM_MDL_B.Range_a
    [0];
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[1] = PubIfDecisionLSM_MDL_B.Range_a
    [1];
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[2] = PubIfDecisionLSM_MDL_B.Range_a
    [2];
  PubIfDecisionLSM_MDL_DW.UnitDelay4_DSTATE[3] = PubIfDecisionLSM_MDL_B.Range_a
    [3];

  /* Update for UnitDelay: '<S17>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[0] = PubIfDecisionLSM_MDL_B.tLost_c
    [0];
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[1] = PubIfDecisionLSM_MDL_B.tLost_c
    [1];
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[2] = PubIfDecisionLSM_MDL_B.tLost_c
    [2];
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE[3] = PubIfDecisionLSM_MDL_B.tLost_c
    [3];

  /* Update for UnitDelay: '<S17>/Unit Delay61' */
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.Avail_time_m[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.Avail_time_m[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[2] =
    PubIfDecisionLSM_MDL_B.Avail_time_m[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay61_DSTATE[3] =
    PubIfDecisionLSM_MDL_B.Avail_time_m[3];

  /* Update for UnitDelay: '<S17>/Unit Delay60' */
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.Avail_dis_n[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.Avail_dis_n[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[2] =
    PubIfDecisionLSM_MDL_B.Avail_dis_n[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay60_DSTATE[3] =
    PubIfDecisionLSM_MDL_B.Avail_dis_n[3];

  /* Update for UnitDelay: '<S17>/Unit Delay28' */
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.fix_time[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.fix_time[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[2] =
    PubIfDecisionLSM_MDL_B.fix_time[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay28_DSTATE[3] =
    PubIfDecisionLSM_MDL_B.fix_time[3];

  /* Update for UnitDelay: '<S17>/Unit Delay29' */
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[0] = PubIfDecisionLSM_MDL_B.Fault[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[1] = PubIfDecisionLSM_MDL_B.Fault[1];
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[2] = PubIfDecisionLSM_MDL_B.Fault[2];
  PubIfDecisionLSM_MDL_DW.UnitDelay29_DSTATE[3] = PubIfDecisionLSM_MDL_B.Fault[3];

  /* Update for UnitDelay: '<S7>/Unit Delay68' */
  PubIfDecisionLSM_MDL_DW.UnitDelay68_DSTATE_j =
    rtu_EQ4_LRE->EQ4_LRE_HDR.LRE_Sync_ID;

  /* Update for UnitDelay: '<S17>/Unit Delay23' */
  PubIfDecisionLSM_MDL_DW.UnitDelay23_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.EdgeConf[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay23_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.EdgeConf[1];

  /* Update for UnitDelay: '<S17>/Unit Delay38' */
  PubIfDecisionLSM_MDL_DW.UnitDelay38_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.EdgeReliable[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay38_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.EdgeReliable[1];

  /* Update for UnitDelay: '<S17>/Unit Delay22' */
  PubIfDecisionLSM_MDL_DW.UnitDelay22_DSTATE[0] = PubIfDecisionLSM_MDL_B.EdgeA3
    [0];
  PubIfDecisionLSM_MDL_DW.UnitDelay22_DSTATE[1] = PubIfDecisionLSM_MDL_B.EdgeA3
    [1];

  /* Update for UnitDelay: '<S17>/Unit Delay21' */
  PubIfDecisionLSM_MDL_DW.UnitDelay21_DSTATE[0] = PubIfDecisionLSM_MDL_B.EdgeA2
    [0];
  PubIfDecisionLSM_MDL_DW.UnitDelay21_DSTATE[1] = PubIfDecisionLSM_MDL_B.EdgeA2
    [1];

  /* Update for UnitDelay: '<S17>/Unit Delay20' */
  PubIfDecisionLSM_MDL_DW.UnitDelay20_DSTATE[0] = PubIfDecisionLSM_MDL_B.EdgeA1
    [0];
  PubIfDecisionLSM_MDL_DW.UnitDelay20_DSTATE[1] = PubIfDecisionLSM_MDL_B.EdgeA1
    [1];

  /* Update for UnitDelay: '<S17>/Unit Delay19' */
  PubIfDecisionLSM_MDL_DW.UnitDelay19_DSTATE[0] = PubIfDecisionLSM_MDL_B.EdgeA0
    [0];
  PubIfDecisionLSM_MDL_DW.UnitDelay19_DSTATE[1] = PubIfDecisionLSM_MDL_B.EdgeA0
    [1];

  /* Update for UnitDelay: '<S17>/Unit Delay18' */
  PubIfDecisionLSM_MDL_DW.UnitDelay18_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.EdgeRange[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay18_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.EdgeRange[1];

  /* Update for UnitDelay: '<S17>/Unit Delay17' */
  PubIfDecisionLSM_MDL_DW.UnitDelay17_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.EdgetLost[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay17_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.EdgetLost[1];

  /* Update for UnitDelay: '<S17>/Unit Delay63' */
  PubIfDecisionLSM_MDL_DW.UnitDelay63_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.Avail_time[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay63_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.Avail_time[1];

  /* Update for UnitDelay: '<S17>/Unit Delay62' */
  PubIfDecisionLSM_MDL_DW.UnitDelay62_DSTATE[0] =
    PubIfDecisionLSM_MDL_B.Avail_dis[0];
  PubIfDecisionLSM_MDL_DW.UnitDelay62_DSTATE[1] =
    PubIfDecisionLSM_MDL_B.Avail_dis[1];

  /* Update for UnitDelay: '<S17>/Unit Delay26' */
  PubIfDecisionLSM_MDL_DW.UnitDelay26_DSTATE = PubIfDecisionLSM_MDL_B.MoveID_k;

  /* Update for UnitDelay: '<S17>/Unit Delay25' */
  PubIfDecisionLSM_MDL_DW.UnitDelay25_DSTATE = PubIfDecisionLSM_MDL_B.Lock_b;

  /* Update for UnitDelay: '<S54>/Unit Delay37' */
  PubIfDecisionLSM_MDL_DW.UnitDelay37_DSTATE_b = PubIfDecisionLSM_MDL_B.Cnt1;

  /* Update for UnitDelay: '<S54>/Unit Delay36' */
  PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE_nv = PubIfDecisionLSM_MDL_B.Cnt2;

  /* Update for UnitDelay: '<S17>/Unit Delay39' */
  PubIfDecisionLSM_MDL_DW.UnitDelay39_DSTATE = rtu_VSM_HMI->HWASts;

  /* Update for UnitDelay: '<S155>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_e =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_i.i;

  /* Update for UnitDelay: '<S156>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j3 =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_d.i;

  /* Update for UnitDelay: '<S158>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_b =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_f.i;

  /* Update for UnitDelay: '<S157>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_a =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_h.i;

  /* Update for UnitDelay: '<S150>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_h =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14.i;

  /* Update for UnitDelay: '<S151>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_hu =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_m.i;

  /* Update for UnitDelay: '<S161>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_j4 =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_p.i;

  /* Update for UnitDelay: '<S162>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ea =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_c.i;

  /* Update for UnitDelay: '<S163>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_g =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_my.i;

  /* Update for UnitDelay: '<S164>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_hk =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_ol.i;

  /* Update for UnitDelay: '<S165>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_l =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_fr.i;

  /* Update for UnitDelay: '<S166>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ll =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_d2.i;

  /* Update for UnitDelay: '<S152>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_i =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_o.i;

  /* Update for UnitDelay: '<S159>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_p =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_j.i;

  /* Update for UnitDelay: '<S160>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_f =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_k.i;

  /* Update for UnitDelay: '<S153>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_gq =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_l.i;

  /* Update for UnitDelay: '<S154>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_lw =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction14_ma.i;

  /* Update for UnitDelay: '<S17>/Unit Delay40' */
  PubIfDecisionLSM_MDL_DW.UnitDelay40_DSTATE = PubIfDecisionLSM_MDL_B.MoveID;

  /* Update for UnitDelay: '<S17>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE = PubIfDecisionLSM_MDL_B.LockID_c;

  /* Update for UnitDelay: '<S17>/Unit Delay41' */
  PubIfDecisionLSM_MDL_DW.UnitDelay41_DSTATE =
    PubIfDecisionLSM_MDL_B.Lock_counter;

  /* Update for UnitDelay: '<S17>/Unit Delay27' */
  PubIfDecisionLSM_MDL_DW.UnitDelay27_DSTATE =
    PubIfDecisionLSM_MDL_B.SignalCopy2;

  /* Update for UnitDelay: '<S49>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_as = rtu_VSM_HMI->HWASts;

  /* Update for UnitDelay: '<S49>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_m =
    PubIfDecisionLSM_MDL_B.sf_MATLABFunction2_l.Lock_counter;

  /* Update for UnitDelay: '<S17>/Unit Delay11' */
  PubIfDecisionLSM_MDL_DW.UnitDelay11_DSTATE = rtu_VSM_HMI->HWASts;

  /* Update for UnitDelay: '<S17>/Unit Delay6' */
  PubIfDecisionLSM_MDL_DW.UnitDelay6_DSTATE_p = PubIfDecisionLSM_MDL_B.Cnt1_i;

  /* Update for UnitDelay: '<S17>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_l = PubIfDecisionLSM_MDL_B.Cnt2_b;

  /* Update for UnitDelay: '<S17>/Unit Delay10' */
  PubIfDecisionLSM_MDL_DW.UnitDelay10_DSTATE = PubIfDecisionLSM_MDL_B.LckLock_b;

  /* Update for UnitDelay: '<S17>/Unit Delay12' */
  PubIfDecisionLSM_MDL_DW.UnitDelay12_DSTATE = PubIfDecisionLSM_MDL_B.LockID;

  /* Update for UnitDelay: '<S31>/Unit Delay49' */
  PubIfDecisionLSM_MDL_DW.UnitDelay49_DSTATE_e = rtu_TOS_P0_TARGET_LINE->OTL_Cnt;

  /* Update for UnitDelay: '<S17>/Unit Delay42' */
  PubIfDecisionLSM_MDL_DW.UnitDelay42_DSTATE =
    PubIfDecisionLSM_MDL_B.LineValid_p;

  /* Update for UnitDelay: '<S17>/Unit Delay43' */
  PubIfDecisionLSM_MDL_DW.UnitDelay43_DSTATE = PubIfDecisionLSM_MDL_B.A3_d;

  /* Update for UnitDelay: '<S17>/Unit Delay48' */
  PubIfDecisionLSM_MDL_DW.UnitDelay48_DSTATE = PubIfDecisionLSM_MDL_B.A2_j;

  /* Update for UnitDelay: '<S17>/Unit Delay47' */
  PubIfDecisionLSM_MDL_DW.UnitDelay47_DSTATE = PubIfDecisionLSM_MDL_B.A1_d;

  /* Update for UnitDelay: '<S17>/Unit Delay46' */
  PubIfDecisionLSM_MDL_DW.UnitDelay46_DSTATE = PubIfDecisionLSM_MDL_B.A0_c;

  /* Update for UnitDelay: '<S17>/Unit Delay45' */
  PubIfDecisionLSM_MDL_DW.UnitDelay45_DSTATE = PubIfDecisionLSM_MDL_B.Range_m;

  /* Update for UnitDelay: '<S17>/Unit Delay44' */
  PubIfDecisionLSM_MDL_DW.UnitDelay44_DSTATE = PubIfDecisionLSM_MDL_B.tLost_f;

  /* Update for UnitDelay: '<S47>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_c = LSM_TJA_Line_State;

  /* Update for UnitDelay: '<S65>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_l =
    PubIfDecisionLSM_MDL_B.LineValid_p;

  /* Update for UnitDelay: '<S65>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_g = PubIfDecisionLSM_MDL_B.Merge_j;

  /* Update for UnitDelay: '<S47>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_p = PubIfDecisionLSM_MDL_B.dy_pre;

  /* Update for UnitDelay: '<S47>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE = PubIfDecisionLSM_MDL_B.Y_DOP;

  /* Update for UnitDelay: '<S17>/Unit Delay16' */
  PubIfDecisionLSM_MDL_DW.UnitDelay16_DSTATE = LSM_HWASts;

  /* Update for UnitDelay: '<S17>/Unit Delay30' */
  PubIfDecisionLSM_MDL_DW.UnitDelay30_DSTATE = LSM_MoveID;

  /* Update for UnitDelay: '<S17>/Unit Delay65' */
  PubIfDecisionLSM_MDL_DW.UnitDelay65_DSTATE = LSM_LockID;

  /* Update for UnitDelay: '<S17>/Unit Delay64' */
  PubIfDecisionLSM_MDL_DW.UnitDelay64_DSTATE = LSM_LockCounter;

  /* Update for UnitDelay: '<S2>/Output' */
  PubIfDecisionLSM_MDL_DW.Output_DSTATE = PubIfDecisionLSM_MDL_B.FixPtSwitch;

  /* Update for UnitDelay: '<S52>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_g =
    PubIfDecisionLSM_MDL_B.LogicalOperator;

  /* Update for UnitDelay: '<S52>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_k = PubIfDecisionLSM_MDL_B.Merge_h;

  /* Update for UnitDelay: '<S17>/Unit Delay36' */
  PubIfDecisionLSM_MDL_DW.UnitDelay36_DSTATE = PubIfDecisionLSM_MDL_B.LREWidth;

  /* Update for UnitDelay: '<S70>/Unit Delay3' */
  PubIfDecisionLSM_MDL_DW.UnitDelay3_DSTATE_j =
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts;

  /* Update for UnitDelay: '<S70>/Unit Delay2' */
  PubIfDecisionLSM_MDL_DW.UnitDelay2_DSTATE_m =
    PubIfDecisionLSM_MDL_B.PilotTurnSwSts;

  /* Update for UnitDelay: '<S70>/Unit Delay' */
  PubIfDecisionLSM_MDL_DW.UnitDelay_DSTATE_ku = rtu_RFM_ROAD->nLaneID;

  /* Update for UnitDelay: '<S70>/Unit Delay1' */
  PubIfDecisionLSM_MDL_DW.UnitDelay1_DSTATE_kn = rtu_RFM_ROAD->nLaneID;
}

/* Model initialize function */
void PubIfDecisionLSM_MDL_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_PubIfDecisionLSM_MDL_T *const PubIfDecisionLSM_MDL_M =
    &(PubIfDecisionLSM_MDL_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)PubIfDecisionLSM_MDL_M, 0,
                sizeof(RT_MODEL_PubIfDecisionLSM_MDL_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(PubIfDecisionLSM_MDL_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &PubIfDecisionLSM_MDL_B), 0,
                sizeof(B_PubIfDecisionLSM_MDL_c_T));

  {
    PubIfDecisionLSM_MDL_B.LSM_SubModel_VERSION = 11240544U;
    PubIfDecisionLSM_MDL_B.LSM_SubModel_Number = 301U;
  }

  /* exported global signals */
  LSM_UpdateCnt = 0U;
  LSM_QualityK1 = 0.0F;
  LSM_A3K1 = 0.0F;
  LSM_A2K1 = 0.0F;
  LSM_A1K1 = 0.0F;
  LSM_A0K1 = 0.0F;
  LSM_RangeK1 = 0.0F;
  LSM_tLostK1 = 0.0F;
  LSM_HWALineC0K1 = 0.0F;
  LSM_LH21 = 0.0F;
  LSM_LH22 = 0.0F;
  LSM_LH23 = 0.0F;
  LSM_LH1Wij = 0.0F;
  LSM_LH31 = 0.0F;
  LSM_LH32 = 0.0F;
  LSM_LH33 = 0.0F;
  LSM_LH2Wij = 0.0F;
  LSM_TJALineC3 = 0.0F;
  LSM_LCKLineC0 = 0.0F;
  LSM_LCKRange = 0.0F;
  LSM_HWALineC3 = 0.0F;
  LSM_HWALineC2 = 0.0F;
  LSM_HWALineC1 = 0.0F;
  LSM_HWALeLineC3 = 0.0F;
  LSM_HWALeLineC2 = 0.0F;
  LSM_HWALeLineC1 = 0.0F;
  LSM_HWALeLineC0 = 0.0F;
  LSM_TJALineC2 = 0.0F;
  LSM_HWALeRange = 0.0F;
  LSM_HWALineC0 = 0.0F;
  LSM_HWARange = 0.0F;
  LSM_HWARiLineC1 = 0.0F;
  LSM_HWARiLineC0 = 0.0F;
  LSM_HWARiRange = 0.0F;
  LSM_TJALineC1 = 0.0F;
  LSM_HeadAngDiff = 0.0F;
  LSM_HWARiLineC3 = 0.0F;
  LSM_HWARiLineC2 = 0.0F;
  LSM_ESSLineC2 = 0.0F;
  LSM_ESSLineC1 = 0.0F;
  LSM_ESSLineC0 = 0.0F;
  LSM_ESSRange = 0.0F;
  LSM_ESSLeLineC3 = 0.0F;
  LSM_TJALineC0 = 0.0F;
  LSM_ESSLineC3 = 0.0F;
  LSM_ESSLeLineC0 = 0.0F;
  LSM_ESSLeRange = 0.0F;
  LSM_ESSRiLineC3 = 0.0F;
  LSM_ESSRiLineC2 = 0.0F;
  LSM_ESSRiLineC1 = 0.0F;
  LSM_ESSLeLineC2 = 0.0F;
  LSM_ESSLeLineC1 = 0.0F;
  LSM_ESSRiLineC0 = 0.0F;
  LSM_TJARange = 0.0F;
  LSM_ESSRiRange = 0.0F;
  LSM_dyDiff = 0.0F;
  LSM_RoadWidth = 0.0F;
  LSM_LCKLineC3 = 0.0F;
  LSM_LCKLineC2 = 0.0F;
  LSM_LCKLineC1 = 0.0F;
  LSM_OTL_A3 = 0.0F;
  LSM_OTL_A2 = 0.0F;
  LSM_OTL_A1 = 0.0F;
  LSM_OTL_A0 = 0.0F;
  LSM_OTL_Range = 0.0F;
  LSM_RFM_LineCenter_C0 = 0.0F;
  LSM_RFM_LineL1_C2 = 0.0F;
  LSM_RFM_LineL1_C3 = 0.0F;
  LSM_RFM_LineL1_Start = 0.0F;
  LSM_RFM_LineL1_Front = 0.0F;
  LSM_RFM_LineR1_C2 = 0.0F;
  LSM_RFM_LineR1_C3 = 0.0F;
  LSM_RFM_LineR1_Start = 0.0F;
  LSM_RFM_LineR1_Front = 0.0F;
  LSM_RFM_LineR1_C0 = 0.0F;
  LSM_RFM_LineCenter_C1 = 0.0F;
  LSM_RFM_LineR1_C1 = 0.0F;
  LSM_RFM_LineCenter_C2 = 0.0F;
  LSM_RFM_LineCenter_C3 = 0.0F;
  LSM_RFM_LineCenter_Start = 0.0F;
  LSM_RFM_LineCenter_Front = 0.0F;
  LSM_RFM_LineL1_C0 = 0.0F;
  LSM_RFM_LineL1_C1 = 0.0F;
  LSM_L1_Range = 0.0F;
  LSM_LA_ELEM_0_C1 = 0.0F;
  LSM_LRE_ELEM_1_C0 = 0.0F;
  LSM_LRE_ELEM_1_Range_Start = 0.0F;
  LSM_LA_ELEM_0_C2 = 0.0F;
  LSM_LA_ELEM_0_C3 = 0.0F;
  LSM_LA_ELEM_0_Range_Start = 0.0F;
  LSM_LA_ELEM_0_Range_End = 0.0F;
  LSM_LA_ELEM_0_Marker_Width = 0.0F;
  LSM_LA_ELEM_0_Confidence = 0.0F;
  LSM_LA_ELEM_1_C0 = 0.0F;
  LSM_LA_ELEM_1_C1 = 0.0F;
  LSM_LA_ELEM_1_C2 = 0.0F;
  LSM_LA_ELEM_1_C3 = 0.0F;
  LSM_LA_ELEM_1_Range_Start = 0.0F;
  LSM_LA_ELEM_1_Range_End = 0.0F;
  LSM_L2_Range = 0.0F;
  LSM_LA_ELEM_1_Confidence = 0.0F;
  LSM_LA_ELEM_1_Marker_Width = 0.0F;
  LSM_LA_ELEM_2_C0 = 0.0F;
  LSM_LA_ELEM_2_C1 = 0.0F;
  LSM_LA_ELEM_2_C2 = 0.0F;
  LSM_LA_ELEM_2_C3 = 0.0F;
  LSM_LA_ELEM_2_Range_Start = 0.0F;
  LSM_LA_ELEM_2_Range_End = 0.0F;
  LSM_LA_ELEM_2_Confidence = 0.0F;
  LSM_LA_ELEM_2_Marker_Width = 0.0F;
  LSM_LA_ELEM_3_C0 = 0.0F;
  LSM_LA_ELEM_3_C1 = 0.0F;
  LSM_LA_ELEM_3_C2 = 0.0F;
  LSM_LA_ELEM_3_C3 = 0.0F;
  LSM_LA_ELEM_3_Range_Start = 0.0F;
  LSM_L3_Range = 0.0F;
  LSM_LA_ELEM_3_Range_End = 0.0F;
  LSM_LA_ELEM_3_Confidence = 0.0F;
  LSM_LA_ELEM_3_Marker_Width = 0.0F;
  LSM_LH_ELEM_0_C0 = 0.0F;
  LSM_LH_ELEM_0_C1 = 0.0F;
  LSM_LH_ELEM_0_C2 = 0.0F;
  LSM_LH_ELEM_0_Confidence = 0.0F;
  LSM_LH_ELEM_0_C3 = 0.0F;
  LSM_LH_ELEM_0_VR_End = 0.0F;
  LSM_LH_ELEM_0_Marker_Width = 0.0F;
  LSM_L4_Range = 0.0F;
  LSM_LH_ELEM_0_VR_Start = 0.0F;
  LSM_LH_ELEM_1_C0 = 0.0F;
  LSM_LH_ELEM_1_C1 = 0.0F;
  LSM_LH_ELEM_1_C2 = 0.0F;
  LSM_LH_ELEM_1_Confidence = 0.0F;
  LSM_LH_ELEM_1_C3 = 0.0F;
  LSM_LH_ELEM_1_VR_Start = 0.0F;
  LSM_LH_ELEM_1_Marker_Width = 0.0F;
  LSM_LH_ELEM_1_VR_End = 0.0F;
  LSM_LRE_ELEM_0_C1 = 0.0F;
  LSM_LRE_ELEM_0_C2 = 0.0F;
  LSM_LRE_ELEM_0_C3 = 0.0F;
  LSM_LRE_ELEM_0_Range_End = 0.0F;
  LSM_LA_ELEM_0_C0 = 0.0F;
  LSM_LRE_ELEM_0_Range_Start = 0.0F;
  LSM_LRE_ELEM_0_C0 = 0.0F;
  LSM_LRE_ELEM_0_Confidence = 0.0F;
  LSM_LRE_ELEM_1_Confidence = 0.0F;
  LSM_LRE_ELEM_1_C1 = 0.0F;
  LSM_LRE_ELEM_1_C2 = 0.0F;
  LSM_LRE_ELEM_1_C3 = 0.0F;
  LSM_LRE_ELEM_1_Range_End = 0.0F;
  LSM_EN_C0 = 0.0F;
  LSM_EN_C1 = 0.0F;
  LSM_EN_C2 = 0.0F;
  LSM_EN_C3 = 0.0F;
  LSM_EN_Start = 0.0F;
  LSM_EN_Front = 0.0F;
  LSM_Exit_C0 = 0.0F;
  LSM_Exit_C1 = 0.0F;
  LSM_Exit_C2 = 0.0F;
  LSM_Exit_C3 = 0.0F;
  LSM_Exit_Start = 0.0F;
  LSM_Exit_Front = 0.0F;
  LSM_L3_AvaliTime = 0.0F;
  LSM_L2_AvaliTime = 0.0F;
  LSM_L1_AvaliDis = 0.0F;
  LSM_L2_AvaliDis = 0.0F;
  LSM_L1_AvaliTime = 0.0F;
  LSM_L4_AvaliTime = 0.0F;
  LSM_L3_AvaliDis = 0.0F;
  LSM_L4_AvaliDis = 0.0F;
  LSM_L1_A0 = 0.0F;
  LSM_L2_A0 = 0.0F;
  LSM_L3_A0 = 0.0F;
  LSM_L4_A0 = 0.0F;
  LSM_CurDis2 = 0.0F;
  LSM_DeltaDis2 = 0.0F;
  LSM_CurDis3 = 0.0F;
  LSM_DeltaDis3 = 0.0F;
  LSM_RoadWidth1 = 0.0F;
  LSM_CentLineA3 = 0.0F;
  LSM_CentLineA2 = 0.0F;
  LSM_CentLineA1 = 0.0F;
  LSM_CentLineA0 = 0.0F;
  LSM_CentLineRange = 0.0F;
  LSM_CentQ = 0.0F;
  LSM_dDeltaX = 0.0F;
  LSM_dDeltaY = 0.0F;
  LSM_CosOfPsi = 0.0F;
  LSM_SinOfsi = 0.0F;
  LSM_TJA_Line_State1 = 0U;
  LSM_HWASts = 0U;
  LSM_OTL_Count = 0U;
  LSM_RFM_LineCenter_Valid = 0U;
  LSM_RFM_LineR1_Valid = 0U;
  LSM_RFM_LineL1_Valid = 0U;
  LSM_L1_Conf = 0U;
  LSM_LRE_ELEM_1_Line_Side = 0U;
  LSM_LA_ELEM_0_Availability_State = 0U;
  LSM_LA_ELEM_0_Lanemark_Type = 0U;
  LSM_LA_ELEM_0_DLM_Type = 0U;
  LSM_LA_ELEM_0_Line_Side = 0U;
  LSM_L2_Conf = 0U;
  LSM_LA_ELEM_1_Availability_State = 0U;
  LSM_LA_ELEM_1_Lanemark_Type = 0U;
  LSM_LA_ELEM_1_DLM_Type = 0U;
  LSM_LA_ELEM_1_Line_Side = 0U;
  LSM_LA_ELEM_2_Availability_State = 0U;
  LSM_L3_Conf = 0U;
  LSM_LA_ELEM_2_Lanemark_Type = 0U;
  LSM_LA_ELEM_2_DLM_Type = 0U;
  LSM_LA_ELEM_2_Line_Side = 0U;
  LSM_LA_ELEM_3_Availability_State = 0U;
  LSM_LA_ELEM_3_Lanemark_Type = 0U;
  LSM_LA_ELEM_3_DLM_Type = 0U;
  LSM_LA_ELEM_3_Line_Side = 0U;
  LSM_LH_Count = 0U;
  LSM_L4_Conf = 0U;
  LSM_LH_ELEM_0_Availability_State = 0U;
  LSM_LH_ELEM_0_Lanemark_Type = 0U;
  LSM_LH_ELEM_0_DLM_Type = 0U;
  LSM_LH_ELEM_0_Line_Side = 0U;
  LSM_LH_ELEM_0_Crossing = 0U;
  LSM_LH_ELEM_1_Availability_State = 0U;
  LSM_LH_ELEM_1_Lanemark_Type = 0U;
  LSM_LH_ELEM_1_DLM_Type = 0U;
  LSM_LA_Adjacent_Count = 0U;
  LSM_LH_ELEM_1_Line_Side = 0U;
  LSM_LH_ELEM_1_Crossing = 0U;
  LSM_LRE_Count = 0U;
  LSM_LRE_ELEM_0_Line_Side = 0U;
  LSM_LRE_ELEM_0_Availability_State = 0U;
  LSM_LRE_ELEM_1_Availability_State = 0U;
  LSM_EN_Valid = 0U;
  LSM_Exit_Valid = 0U;
  LSM_LeftLineConf = 0U;
  LSM_RightLineConf = 0U;
  LSM_TJA_Line_State = 0U;
  LSM_Wij_State = 0U;
  LSM_Line_State = 0U;
  LSM_LockCounter = 0U;
  LSM_MoveID = 0;
  LSM_LockID = 0;
  LSM_LineValidK1 = false;
  LSM_LeftMostLane = false;
  LSM_TJALineValid = false;
  LSM_HWALineValid = false;
  LSM_HWARiLineValid = false;
  LSM_HWALeLineValid = false;
  LSM_DoubleLineLost_b = false;
  LSM_ESSLeLineValid = false;
  LSM_ESSLineValid = false;
  LSM_ESSRiLineValid = false;
  LSM_LCKLineValid = false;
  LSM_MLeLane = false;
  LSM_LeftLaneChange = false;
  LSM_RightLaneChange = false;
  LSM_OTLineValid = false;
  LSM_PathLaneAvail[0] = false;
  LSM_PathLaneAvail[1] = false;
  LSM_PathLaneAvail[2] = false;
  LSM_LeftOffset_b = false;
  LSM_RightOffset_b = false;
  LSM_LeftLineTypeEN = false;
  LSM_RightLineTypeEN = false;
  LSM_DOP_EN = false;
  LSM_DOP_Out = false;
  LSM_LH1Valid = false;
  LSM_LH2Valid = false;
  LSM_CentLineValid = false;
  LSM_VisLineUpdate = false;

  /* states (dwork) */
  (void) memset((void *)&PubIfDecisionLSM_MDL_DW, 0,
                sizeof(DW_PubIfDecisionLSM_MDL_f_T));
}
