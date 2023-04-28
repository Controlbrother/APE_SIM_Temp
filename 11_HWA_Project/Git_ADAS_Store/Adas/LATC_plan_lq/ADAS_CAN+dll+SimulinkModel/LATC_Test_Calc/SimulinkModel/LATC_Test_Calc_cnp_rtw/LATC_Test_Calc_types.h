/*
 * LATC_Test_Calc_types.h
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

#ifndef RTW_HEADER_LATC_Test_Calc_types_h_
#define RTW_HEADER_LATC_Test_Calc_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* Model Code Variants */

/* Custom Type definition for MATLAB Function: '<S42>/FrenetTrajectory' */
#ifndef struct_tag_FZmaYPn0z2xe388N5rrlLE
#define struct_tag_FZmaYPn0z2xe388N5rrlLE

struct tag_FZmaYPn0z2xe388N5rrlLE
{
  real32_T PathPoints[600];
  real32_T DiscretizationDistance;
};

#endif                                 /* struct_tag_FZmaYPn0z2xe388N5rrlLE */

#ifndef typedef_FrenentReferencePath_LATC_Tes_T
#define typedef_FrenentReferencePath_LATC_Tes_T

typedef struct tag_FZmaYPn0z2xe388N5rrlLE FrenentReferencePath_LATC_Tes_T;

#endif                             /* typedef_FrenentReferencePath_LATC_Tes_T */

#ifndef struct_tag_4vwWnUf3SXkkHNNIpEQ17D
#define struct_tag_4vwWnUf3SXkkHNNIpEQ17D

struct tag_4vwWnUf3SXkkHNNIpEQ17D
{
  FrenentReferencePath_LATC_Tes_T *ReferencePath;
};

#endif                                 /* struct_tag_4vwWnUf3SXkkHNNIpEQ17D */

#ifndef typedef_TrajectoryGeneratorFrenet_LAT_T
#define typedef_TrajectoryGeneratorFrenet_LAT_T

typedef struct tag_4vwWnUf3SXkkHNNIpEQ17D TrajectoryGeneratorFrenet_LAT_T;

#endif                             /* typedef_TrajectoryGeneratorFrenet_LAT_T */

#ifndef struct_tag_DiSjLmPEjlep6TEeWrXL7C
#define struct_tag_DiSjLmPEjlep6TEeWrXL7C

struct tag_DiSjLmPEjlep6TEeWrXL7C
{
  real32_T a[27];
  real32_T b[26];
  real32_T c[27];
  real32_T d[26];
  real32_T x[27];
  real32_T nx;
};

#endif                                 /* struct_tag_DiSjLmPEjlep6TEeWrXL7C */

#ifndef typedef_Spline_LATC_Test_Calc_T
#define typedef_Spline_LATC_Test_Calc_T

typedef struct tag_DiSjLmPEjlep6TEeWrXL7C Spline_LATC_Test_Calc_T;

#endif                                 /* typedef_Spline_LATC_Test_Calc_T */

#ifndef struct_emxArray_real32_T_40
#define struct_emxArray_real32_T_40

struct emxArray_real32_T_40
{
  real32_T data[40];
  int32_T size;
};

#endif                                 /* struct_emxArray_real32_T_40 */

#ifndef typedef_emxArray_real32_T_40_LATC_Tes_T
#define typedef_emxArray_real32_T_40_LATC_Tes_T

typedef struct emxArray_real32_T_40 emxArray_real32_T_40_LATC_Tes_T;

#endif                             /* typedef_emxArray_real32_T_40_LATC_Tes_T */

#ifndef struct_tag_4PQoAMjFUjUTkusUlAzmnG
#define struct_tag_4PQoAMjFUjUTkusUlAzmnG

struct tag_4PQoAMjFUjUTkusUlAzmnG
{
  emxArray_real32_T_40_LATC_Tes_T f1;
};

#endif                                 /* struct_tag_4PQoAMjFUjUTkusUlAzmnG */

#ifndef typedef_cell_wrap_9_LATC_Test_Calc_T
#define typedef_cell_wrap_9_LATC_Test_Calc_T

typedef struct tag_4PQoAMjFUjUTkusUlAzmnG cell_wrap_9_LATC_Test_Calc_T;

#endif                                /* typedef_cell_wrap_9_LATC_Test_Calc_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_LATC_Test_Calc_T RT_MODEL_LATC_Test_Calc_T;

#endif                                 /* RTW_HEADER_LATC_Test_Calc_types_h_ */
