/*
 * LATC_Test_Calc_types.h
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

#ifndef RTW_HEADER_LATC_Test_Calc_types_h_
#define RTW_HEADER_LATC_Test_Calc_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* Model Code Variants */

/* Custom Type definition for MATLAB Function: '<Root>/MATLAB Function4' */
#ifndef struct_tag_WAB6GSJcaqx7whpK7Jhtu
#define struct_tag_WAB6GSJcaqx7whpK7Jhtu

struct tag_WAB6GSJcaqx7whpK7Jhtu
{
  real32_T PathPoints[120];
  real32_T DiscretizationDistance;
};

#endif                                 /*struct_tag_WAB6GSJcaqx7whpK7Jhtu*/

#ifndef typedef_FrenentReferencePath_LATC_Tes_T
#define typedef_FrenentReferencePath_LATC_Tes_T

typedef struct tag_WAB6GSJcaqx7whpK7Jhtu FrenentReferencePath_LATC_Tes_T;

#endif                               /*typedef_FrenentReferencePath_LATC_Tes_T*/

#ifndef struct_tag_Bt1iBF3bQgEYkAh3M9YegG
#define struct_tag_Bt1iBF3bQgEYkAh3M9YegG

struct tag_Bt1iBF3bQgEYkAh3M9YegG
{
  real32_T a[18];
  real32_T b[17];
  real32_T c[18];
  real32_T d[17];
  real32_T x[18];
  real32_T nx;
};

#endif                                 /*struct_tag_Bt1iBF3bQgEYkAh3M9YegG*/

#ifndef typedef_Spline_LATC_Test_Calc_T
#define typedef_Spline_LATC_Test_Calc_T

typedef struct tag_Bt1iBF3bQgEYkAh3M9YegG Spline_LATC_Test_Calc_T;

#endif                                 /*typedef_Spline_LATC_Test_Calc_T*/

#ifndef struct_tag_jZf8KiGHPfboittIQI8zhD
#define struct_tag_jZf8KiGHPfboittIQI8zhD

struct tag_jZf8KiGHPfboittIQI8zhD
{
  real32_T a[40];
  real32_T b[39];
  real32_T c[40];
  real32_T d[39];
  real32_T x[40];
  real32_T nx;
};

#endif                                 /*struct_tag_jZf8KiGHPfboittIQI8zhD*/

#ifndef typedef_Spline_1_LATC_Test_Calc_T
#define typedef_Spline_1_LATC_Test_Calc_T

typedef struct tag_jZf8KiGHPfboittIQI8zhD Spline_1_LATC_Test_Calc_T;

#endif                                 /*typedef_Spline_1_LATC_Test_Calc_T*/

#ifndef struct_tag_c3Pn7K8JUV9ulJghiuVbm
#define struct_tag_c3Pn7K8JUV9ulJghiuVbm

struct tag_c3Pn7K8JUV9ulJghiuVbm
{
  real_T s[40];
  Spline_1_LATC_Test_Calc_T sx;
  Spline_1_LATC_Test_Calc_T sy;
  real_T ds[39];
};

#endif                                 /*struct_tag_c3Pn7K8JUV9ulJghiuVbm*/

#ifndef typedef_Spline2D_1_LATC_Test_Calc_T
#define typedef_Spline2D_1_LATC_Test_Calc_T

typedef struct tag_c3Pn7K8JUV9ulJghiuVbm Spline2D_1_LATC_Test_Calc_T;

#endif                                 /*typedef_Spline2D_1_LATC_Test_Calc_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_LATC_Test_Calc_T RT_MODEL_LATC_Test_Calc_T;

#endif                                 /* RTW_HEADER_LATC_Test_Calc_types_h_ */
