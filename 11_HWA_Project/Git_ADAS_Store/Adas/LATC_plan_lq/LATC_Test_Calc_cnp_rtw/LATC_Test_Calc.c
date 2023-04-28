/*
 * LATC_Test_Calc.c
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

#include "LATC_Test_Calc.h"
#include "LATC_Test_Calc_private.h"

/* Block signals (default storage) */
B_LATC_Test_Calc_T LATC_Test_Calc_B;

/* Real-time model */
static RT_MODEL_LATC_Test_Calc_T LATC_Test_Calc_M_;
RT_MODEL_LATC_Test_Calc_T *const LATC_Test_Calc_M = &LATC_Test_Calc_M_;

/* Forward declaration for local functions */
static void LATC_Test_Calc_diff(const real32_T x[18], real32_T y[17]);
static void LATC_Test_Calc_xgetrf(real32_T A[324], int32_T ipiv[18], int32_T
  *info);
static int32_T LATC_Test_Calc_xgetrfs(real32_T A[324], real32_T B[18]);
static void LATC_Test_Calc_mldivide_fpz(const real32_T A[324], real32_T B[18]);
static Spline_LATC_Test_Calc_T *LATC_Test_Calc_Spline_Spline
  (Spline_LATC_Test_Calc_T *obj, const real_T x[18], const real32_T y[18]);
static real32_T LATC_Test_Calc_Spline_calc(const Spline_LATC_Test_Calc_T *obj,
  real32_T t);
static real32_T LATC_Test_Calc_Spline_calcd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t);
static real32_T LATC_Test_Calc_Spline_calcdd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t);
static real32_T LATC_Test_Calc_Spline_calcddd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t);
static FrenentReferencePath_LATC_Tes_T *FrenentReferencePath_FrenentRef
  (FrenentReferencePath_LATC_Tes_T *obj, const real32_T waypoints[36]);
static real32_T LATC_Test_Calc_mod(real32_T x);
static void L_FrenentReferencePath_wrapToPi(real32_T theta_data[], const int32_T
  *theta_size);
static void FrenentReferencePath_getClosest(const real32_T pathPoints[120],
  const real32_T startIdx_data[], const int32_T startIdx_size[2], const real32_T
  endIdx_data[], const int32_T endIdx_size[2], const real_T s_data[], const
  int32_T s_size[2], real32_T pathPoint_data[], int32_T pathPoint_size[2]);
static void LATC_Test_Calc_mldivide_fpze(const real32_T A[16], real32_T B[4]);
static void LATC_Test_Calc_linspace(real32_T d2, real32_T y[40]);
static void LATC_Test_Calc_power(const real32_T a[40], real32_T y[40]);
static void LATC_Test_Calc_abs(const real32_T x_data[], const int32_T *x_size,
  real32_T y_data[], int32_T *y_size);
static void LATC_FrenentReferencePath_slerp(real32_T a0_data[], const int32_T
  *a0_size, const real32_T t0_data[], const real32_T a1_data[], const int32_T
  *a1_size, const real32_T t1_data[], const int32_T *t1_size, const real32_T
  t_data[]);
static void FrenentReferencePath_getClose_a(const real32_T pathPoints[120],
  const real32_T startIdx_data[], const int32_T *startIdx_size, const real32_T
  endIdx_data[], const int32_T *endIdx_size, const real32_T s_data[], const
  int32_T *s_size, real32_T pathPoint_data[], int32_T pathPoint_size[2]);
static void FrenentReferencePath_interpolat(const
  FrenentReferencePath_LATC_Tes_T *obj, const real32_T arcLength[40], real32_T
  pathPoints[240]);
static void FrenentReferencePath_wrapToPi_k(real32_T theta[40]);
static void LATC_Test_Calc_diff_m(const real32_T x[40], real32_T y[39]);
static void LATC_Test_Calc_diff_mf(const real_T x[40], real_T y[39]);
static void LATC_Test_Calc_xswap(real32_T x[1600], int32_T ix0, int32_T iy0);
static void LATC_Test_Calc_xgetrf_h(real32_T A[1600], int32_T ipiv[40], int32_T *
  info);
static int32_T LATC_Test_Calc_xgetrfs_n(real32_T A[1600], real32_T B[40]);
static void LATC_Test_Calc_mldivide_fpze2(const real32_T A[1600], real32_T B[40]);
static Spline_1_LATC_Test_Calc_T *LATC_Test_Calc_Spline_Spline_m
  (Spline_1_LATC_Test_Calc_T *obj, const real_T x[40], const real32_T y[40]);
static Spline2D_1_LATC_Test_Calc_T *LATC_Test_Cal_Spline2D_Spline2D
  (Spline2D_1_LATC_Test_Calc_T *obj, const real32_T x[40], const real32_T y[40]);
static real32_T LATC_Test_Calc_Spline_calc_d(const Spline_1_LATC_Test_Calc_T
  *obj, real32_T t);
static real32_T LATC_Test_Calc_Spline_calcd_f(const Spline_1_LATC_Test_Calc_T
  *obj, real32_T t);
static real32_T LATC_Test_Calc_Spline_calcdd_p(const Spline_1_LATC_Test_Calc_T
  *obj, real32_T t);
static real32_T LATC_Test_Calc_Spline_calcddd_a(const Spline_1_LATC_Test_Calc_T *
  obj, real32_T t);
static void FrenentReferencePath_frenet2glo(const
  FrenentReferencePath_LATC_Tes_T *obj, const real32_T frenetStates[80],
  real32_T globalStates[200]);
real_T look2_binlcapw(real_T u0, real_T u1, const real_T bp0[], const real_T
                      bp1[], const real_T table[], const uint32_T maxIndex[],
                      uint32_T stride)
{
  real_T fractions[2];
  real_T frac;
  real_T y;
  real_T yL_0d0;
  uint32_T bpIndices[2];
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 2-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex[0U];
    frac = 0.0;
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U];
    frac = 0.0;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  if (bpIndices[0U] == maxIndex[0U]) {
    y = table[bpIdx];
  } else {
    yL_0d0 = table[bpIdx];
    y = (table[bpIdx + 1U] - yL_0d0) * fractions[0U] + yL_0d0;
  }

  if (iLeft == maxIndex[1U]) {
  } else {
    bpIdx += stride;
    if (bpIndices[0U] == maxIndex[0U]) {
      yL_0d0 = table[bpIdx];
    } else {
      yL_0d0 = table[bpIdx];
      yL_0d0 += (table[bpIdx + 1U] - yL_0d0) * fractions[0U];
    }

    y += (yL_0d0 - y) * frac;
  }

  return y;
}

real32_T rt_powf_snf(real32_T u0, real32_T u1)
{
  real32_T tmp;
  real32_T tmp_0;
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else {
    tmp = fabsf(u0);
    tmp_0 = fabsf(u1);
    if (rtIsInfF(u1)) {
      if (tmp == 1.0F) {
        y = 1.0F;
      } else if (tmp > 1.0F) {
        if (u1 > 0.0F) {
          y = (rtInfF);
        } else {
          y = 0.0F;
        }
      } else if (u1 > 0.0F) {
        y = 0.0F;
      } else {
        y = (rtInfF);
      }
    } else if (tmp_0 == 0.0F) {
      y = 1.0F;
    } else if (tmp_0 == 1.0F) {
      if (u1 > 0.0F) {
        y = u0;
      } else {
        y = 1.0F / u0;
      }
    } else if (u1 == 2.0F) {
      y = u0 * u0;
    } else if ((u1 == 0.5F) && (u0 >= 0.0F)) {
      y = sqrtf(u0);
    } else if ((u0 < 0.0F) && (u1 > floorf(u1))) {
      y = (rtNaNF);
    } else {
      y = powf(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_diff(const real32_T x[18], real32_T y[17])
{
  int32_T ixLead;
  int32_T iyLead;
  int32_T m;
  real32_T tmp2;
  real32_T work;
  ixLead = 1;
  iyLead = 0;
  work = x[0];
  for (m = 0; m < 17; m++) {
    tmp2 = work;
    work = x[ixLead];
    y[iyLead] = x[ixLead] - tmp2;
    ixLead++;
    iyLead++;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_xgetrf(real32_T A[324], int32_T ipiv[18], int32_T
  *info)
{
  int32_T c;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T ix;
  int32_T iy;
  int32_T j;
  int32_T jA;
  real32_T smax;
  real32_T y;
  for (j = 0; j < 18; j++) {
    ipiv[j] = j + 1;
  }

  *info = 0;
  for (j = 0; j < 17; j++) {
    c = j * 19;
    jA = 0;
    ix = c;
    smax = fabsf(A[c]);
    for (iy = 2; iy <= 18 - j; iy++) {
      ix++;
      y = fabsf(A[ix]);
      if (y > smax) {
        jA = iy - 1;
        smax = y;
      }
    }

    if (A[c + jA] != 0.0F) {
      if (jA != 0) {
        iy = j + jA;
        ipiv[j] = iy + 1;
        ix = j;
        for (jA = 0; jA < 18; jA++) {
          smax = A[ix];
          A[ix] = A[iy];
          A[iy] = smax;
          ix += 18;
          iy += 18;
        }
      }

      jA = (c - j) + 18;
      for (ix = c + 1; ix < jA; ix++) {
        A[ix] /= A[c];
      }
    } else {
      *info = j + 1;
    }

    jA = c;
    ix = c + 18;
    for (iy = 0; iy <= 16 - j; iy++) {
      smax = A[ix];
      if (A[ix] != 0.0F) {
        c_ix = c + 1;
        d = (jA - j) + 36;
        for (ijA = jA + 19; ijA < d; ijA++) {
          A[ijA] += A[c_ix] * -smax;
          c_ix++;
        }
      }

      ix += 18;
      jA += 18;
    }
  }

  if ((*info == 0) && (!(A[323] != 0.0F))) {
    *info = 18;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static int32_T LATC_Test_Calc_xgetrfs(real32_T A[324], real32_T B[18])
{
  int32_T ipiv[18];
  int32_T b_i;
  int32_T i;
  int32_T info;
  int32_T kAcol;
  real32_T temp;
  LATC_Test_Calc_xgetrf(A, ipiv, &info);
  for (i = 0; i < 17; i++) {
    kAcol = ipiv[i];
    if (i + 1 != kAcol) {
      temp = B[i];
      B[i] = B[kAcol - 1];
      B[kAcol - 1] = temp;
    }
  }

  for (i = 0; i < 18; i++) {
    kAcol = 18 * i;
    if (B[i] != 0.0F) {
      for (b_i = i + 1; b_i + 1 < 19; b_i++) {
        B[b_i] -= A[b_i + kAcol] * B[i];
      }
    }
  }

  for (i = 17; i >= 0; i--) {
    kAcol = 18 * i;
    if (B[i] != 0.0F) {
      B[i] /= A[i + kAcol];
      for (b_i = 0; b_i < i; b_i++) {
        B[b_i] -= A[b_i + kAcol] * B[i];
      }
    }
  }

  return info;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_mldivide_fpz(const real32_T A[324], real32_T B[18])
{
  real32_T b_A[324];
  memcpy(&b_A[0], &A[0], 324U * sizeof(real32_T));
  LATC_Test_Calc_xgetrfs(b_A, B);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static Spline_LATC_Test_Calc_T *LATC_Test_Calc_Spline_Spline
  (Spline_LATC_Test_Calc_T *obj, const real_T x[18], const real32_T y[18])
{
  Spline_LATC_Test_Calc_T *b_obj;
  real_T b_y1[17];
  real_T tmp2;
  real_T work;
  int32_T i;
  int32_T ixLead;
  int32_T iyLead;
  real32_T A[324];
  real32_T B[18];
  real32_T h[17];
  real32_T b;
  real32_T b_b;
  real32_T b_x;
  real32_T d_x;
  b_obj = obj;
  for (i = 0; i < 17; i++) {
    obj->b[i] = 0.0F;
  }

  for (i = 0; i < 18; i++) {
    obj->c[i] = 0.0F;
  }

  for (i = 0; i < 17; i++) {
    obj->d[i] = 0.0F;
  }

  for (i = 0; i < 18; i++) {
    obj->x[i] = (real32_T)x[i];
  }

  obj->nx = 18.0F;
  ixLead = 1;
  iyLead = 0;
  work = x[0];
  for (i = 0; i < 17; i++) {
    tmp2 = work;
    work = x[ixLead];
    b_y1[iyLead] = x[ixLead] - tmp2;
    ixLead++;
    iyLead++;
  }

  for (i = 0; i < 17; i++) {
    h[i] = (real32_T)b_y1[i];
  }

  for (i = 0; i < 18; i++) {
    obj->a[i] = y[i];
  }

  memset(&A[0], 0, 324U * sizeof(real32_T));
  A[0] = 1.0F;
  b = obj->nx - 1.0F;
  for (i = 0; i < (int32_T)b; i++) {
    if ((real32_T)i + 1.0F != obj->nx - 1.0F) {
      A[((int32_T)(((real32_T)i + 1.0F) + 1.0F) + 18 * ((int32_T)(((real32_T)i +
            1.0F) + 1.0F) - 1)) - 1] = (h[(int32_T)(((real32_T)i + 1.0F) + 1.0F)
        - 1] + h[(int32_T)((real32_T)i + 1.0F) - 1]) * 2.0F;
    }

    b_b = h[(int32_T)((real32_T)i + 1.0F) - 1];
    A[((int32_T)(((real32_T)i + 1.0F) + 1.0F) + 18 * ((int32_T)((real32_T)i +
         1.0F) - 1)) - 1] = b_b;
    A[((int32_T)((real32_T)i + 1.0F) + 18 * ((int32_T)(((real32_T)i + 1.0F) +
         1.0F) - 1)) - 1] = b_b;
  }

  A[18] = 0.0F;
  A[((int32_T)obj->nx + 18 * ((int32_T)(obj->nx - 1.0F) - 1)) - 1] = 0.0F;
  A[((int32_T)obj->nx + 18 * ((int32_T)obj->nx - 1)) - 1] = 1.0F;
  memset(&B[0], 0, 18U * sizeof(real32_T));
  b = obj->nx - 2.0F;
  for (i = 0; i < (int32_T)b; i++) {
    b_b = obj->a[(int32_T)(((real32_T)i + 1.0F) + 2.0F) - 1] - obj->a[(int32_T)
      (((real32_T)i + 1.0F) + 1.0F) - 1];
    b_x = obj->a[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] - obj->a[(int32_T)
      ((real32_T)i + 1.0F) - 1];
    B[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] = 3.0F * b_b / h[(int32_T)
      (((real32_T)i + 1.0F) + 1.0F) - 1] - 3.0F * b_x / h[(int32_T)((real32_T)i
      + 1.0F) - 1];
  }

  LATC_Test_Calc_mldivide_fpz(A, B);
  for (i = 0; i < 18; i++) {
    obj->c[i] = B[i];
  }

  b = obj->nx - 1.0F;
  for (i = 0; i < (int32_T)b; i++) {
    b_x = obj->c[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] - obj->c[(int32_T)
      ((real32_T)i + 1.0F) - 1];
    b_b = h[(int32_T)((real32_T)i + 1.0F) - 1];
    obj->d[(int32_T)((real32_T)i + 1.0F) - 1] = b_x / (b_b * 3.0F);
    b_x = obj->a[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] - obj->a[(int32_T)
      ((real32_T)i + 1.0F) - 1];
    d_x = (obj->c[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] + obj->c[(int32_T)
           ((real32_T)i + 1.0F) - 1] * 2.0F) * b_b;
    obj->b[(int32_T)((real32_T)i + 1.0F) - 1] = b_x / b_b - d_x / 3.0F;
  }

  return b_obj;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static real32_T LATC_Test_Calc_Spline_calc(const Spline_LATC_Test_Calc_T *obj,
  real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T dx;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[17]) {
    result = (rtNaNF);
  } else {
    hi = 17;
    lo = -1;
    while (lo + 2 < hi + 1) {
      mid = (int32_T)floor((real_T)((lo + hi) + 3) / 2.0) - 1;
      if (t < obj->x[mid]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    dx = t - obj->x[lo];
    result = ((obj->b[lo] * dx + obj->a[lo]) + dx * dx * obj->c[lo]) + obj->d[lo]
      * rt_powf_snf(dx, 3.0F);
  }

  return result;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static real32_T LATC_Test_Calc_Spline_calcd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T dx;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[17]) {
    result = (rtNaNF);
  } else {
    hi = 17;
    lo = -1;
    while (lo + 2 < hi + 1) {
      mid = (int32_T)floor((real_T)((lo + hi) + 3) / 2.0) - 1;
      if (t < obj->x[mid]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    dx = t - obj->x[lo];
    result = (2.0F * obj->c[lo] * dx + obj->b[lo]) + 3.0F * obj->d[lo] * (dx *
      dx);
  }

  return result;
}

real32_T rt_atan2f_snf(real32_T u0, real32_T u1)
{
  int32_T u0_0;
  int32_T u1_0;
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else if (rtIsInfF(u0) && rtIsInfF(u1)) {
    if (u0 > 0.0F) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0F) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2f((real32_T)u0_0, (real32_T)u1_0);
  } else if (u1 == 0.0F) {
    if (u0 > 0.0F) {
      y = RT_PIF / 2.0F;
    } else if (u0 < 0.0F) {
      y = -(RT_PIF / 2.0F);
    } else {
      y = 0.0F;
    }
  } else {
    y = atan2f(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static real32_T LATC_Test_Calc_Spline_calcdd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[17]) {
    result = (rtNaNF);
  } else {
    hi = 17;
    lo = -1;
    while (lo + 2 < hi + 1) {
      mid = (int32_T)floor((real_T)((lo + hi) + 3) / 2.0) - 1;
      if (t < obj->x[mid]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    result = 6.0F * obj->d[lo] * (t - obj->x[lo]) + 2.0F * obj->c[lo];
  }

  return result;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static real32_T LATC_Test_Calc_Spline_calcddd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[17]) {
    result = (rtNaNF);
  } else {
    hi = 18;
    lo = 1;
    while (lo < hi) {
      mid = (int32_T)floor((real_T)(lo + hi) / 2.0);
      if (t < obj->x[mid - 1]) {
        hi = mid;
      } else {
        lo = mid + 1;
      }
    }

    result = obj->d[lo - 2] * 6.0F;
  }

  return result;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static FrenentReferencePath_LATC_Tes_T *FrenentReferencePath_FrenentRef
  (FrenentReferencePath_LATC_Tes_T *obj, const real32_T waypoints[36])
{
  FrenentReferencePath_LATC_Tes_T *b_obj;
  Spline_LATC_Test_Calc_T objSpline_sx;
  Spline_LATC_Test_Calc_T objSpline_sy;
  real_T y[20];
  real_T objSpline_s[18];
  real_T x[17];
  real_T delta1;
  int32_T b_i;
  real32_T Path_points[120];
  real32_T s[20];
  real32_T d_dx[17];
  real32_T d_dy[17];
  real32_T b_dy;
  real32_T d;
  real32_T d_dy_0;
  real32_T dddy;
  real32_T ddy;
  real32_T dx;
  real32_T dy;
  real32_T norm_square;
  b_obj = obj;
  LATC_Test_Calc_diff(&waypoints[0], d_dx);
  LATC_Test_Calc_diff(&waypoints[18], d_dy);
  for (b_i = 0; b_i < 17; b_i++) {
    d_dy_0 = d_dy[b_i];
    dx = d_dx[b_i];
    x[b_i] = 0.0;
    x[b_i] = sqrtf(dx * dx + d_dy_0 * d_dy_0);
  }

  for (b_i = 0; b_i < 16; b_i++) {
    x[b_i + 1] += x[b_i];
  }

  objSpline_s[0] = 0.0;
  memcpy(&objSpline_s[1], &x[0], 17U * sizeof(real_T));
  LATC_Test_Calc_Spline_Spline(&objSpline_sx, objSpline_s, &waypoints[0]);
  LATC_Test_Calc_Spline_Spline(&objSpline_sy, objSpline_s, &waypoints[18]);
  y[19] = objSpline_s[17];
  y[0] = 0.0;
  if (0.0 == -objSpline_s[17]) {
    for (b_i = 0; b_i < 18; b_i++) {
      y[b_i + 1] = (((real_T)b_i + 2.0) * 2.0 - 21.0) / 19.0 * objSpline_s[17];
    }
  } else if ((objSpline_s[17] < 0.0) && (fabs(objSpline_s[17]) >
              8.9884656743115785E+307)) {
    delta1 = objSpline_s[17] / 19.0;
    for (b_i = 0; b_i < 18; b_i++) {
      y[b_i + 1] = ((real_T)b_i + 1.0) * delta1;
    }
  } else {
    delta1 = objSpline_s[17] / 19.0;
    for (b_i = 0; b_i < 18; b_i++) {
      y[b_i + 1] = ((real_T)b_i + 1.0) * delta1;
    }
  }

  for (b_i = 0; b_i < 20; b_i++) {
    s[b_i] = (real32_T)y[b_i];
  }

  obj->DiscretizationDistance = s[2] - s[1];
  for (b_i = 0; b_i < 20; b_i++) {
    d_dy_0 = s[b_i];
    Path_points[b_i] = LATC_Test_Calc_Spline_calc(&objSpline_sx, d_dy_0);
    Path_points[b_i + 20] = LATC_Test_Calc_Spline_calc(&objSpline_sy, d_dy_0);
    dx = LATC_Test_Calc_Spline_calcd(&objSpline_sx, d_dy_0);
    dy = LATC_Test_Calc_Spline_calcd(&objSpline_sy, d_dy_0);
    Path_points[b_i + 40] = rt_atan2f_snf(dy, dx);
    dx = LATC_Test_Calc_Spline_calcd(&objSpline_sx, d_dy_0);
    dy = LATC_Test_Calc_Spline_calcdd(&objSpline_sx, d_dy_0);
    b_dy = LATC_Test_Calc_Spline_calcd(&objSpline_sy, d_dy_0);
    ddy = LATC_Test_Calc_Spline_calcdd(&objSpline_sy, d_dy_0);
    norm_square = dx * dx + b_dy * b_dy;
    Path_points[b_i + 60] = (ddy * dx - dy * b_dy) / (sqrtf(norm_square) *
      norm_square);
    dx = LATC_Test_Calc_Spline_calcd(&objSpline_sx, d_dy_0);
    dy = LATC_Test_Calc_Spline_calcdd(&objSpline_sx, d_dy_0);
    b_dy = LATC_Test_Calc_Spline_calcddd(&objSpline_sx, d_dy_0);
    ddy = LATC_Test_Calc_Spline_calcd(&objSpline_sy, d_dy_0);
    norm_square = LATC_Test_Calc_Spline_calcdd(&objSpline_sy, d_dy_0);
    dddy = LATC_Test_Calc_Spline_calcddd(&objSpline_sy, d_dy_0);
    d = dx * dx + ddy * ddy;
    Path_points[b_i + 80] = ((dx * dddy - ddy * b_dy) * d - (dx * norm_square -
      ddy * dy) * 3.0F * (dx * dy + ddy * norm_square)) / (d * d * d);
    Path_points[b_i + 100] = d_dy_0;
  }

  for (b_i = 0; b_i < 120; b_i++) {
    obj->PathPoints[b_i] = Path_points[b_i];
  }

  return b_obj;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static real32_T LATC_Test_Calc_mod(real32_T x)
{
  real32_T q;
  real32_T r;
  boolean_T rEQ0;
  if (rtIsNaNF(x) || rtIsInfF(x)) {
    r = (rtNaNF);
  } else if (x == 0.0F) {
    r = 0.0F;
  } else {
    r = fmodf(x, 6.28318548F);
    rEQ0 = (r == 0.0F);
    if (!rEQ0) {
      q = fabsf(x / 6.28318548F);
      rEQ0 = !(fabsf(q - floorf(q + 0.5F)) > 1.1920929E-7F * q);
    }

    if (rEQ0) {
      r = 0.0F;
    } else {
      if (x < 0.0F) {
        r += 6.28318548F;
      }
    }
  }

  return r;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void L_FrenentReferencePath_wrapToPi(real32_T theta_data[], const int32_T
  *theta_size)
{
  int32_T k;
  int32_T y_size_idx_0;
  real32_T y_data[40];
  real32_T z1_data[40];
  real32_T z1_data_0;
  boolean_T b_data[40];
  boolean_T pos_data[40];
  boolean_T b_y;
  boolean_T exitg1;
  y_size_idx_0 = *theta_size;
  for (k = 0; k < *theta_size; k++) {
    y_data[k] = fabsf(theta_data[k]);
  }

  for (k = 0; k < y_size_idx_0; k++) {
    pos_data[k] = (y_data[k] > 3.1415926535897931);
  }

  b_y = false;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k <= *theta_size)) {
    if (!pos_data[k - 1]) {
      k++;
    } else {
      b_y = true;
      exitg1 = true;
    }
  }

  if (b_y) {
    y_size_idx_0 = *theta_size;
    for (k = 0; k < y_size_idx_0; k++) {
      y_data[k] = theta_data[k] + 3.14159274F;
    }

    for (k = 0; k < y_size_idx_0; k++) {
      pos_data[k] = (y_data[k] > 0.0F);
    }

    if (0 <= *theta_size - 1) {
      memcpy(&z1_data[0], &theta_data[0], *theta_size * sizeof(real32_T));
    }

    for (k = 0; k < *theta_size; k++) {
      z1_data[k] = LATC_Test_Calc_mod(y_data[k]);
    }

    for (k = 0; k < y_size_idx_0; k++) {
      z1_data_0 = z1_data[k];
      theta_data[k] = z1_data_0;
      b_data[k] = (z1_data_0 == 0.0F);
    }

    for (k = 0; k < *theta_size; k++) {
      if (b_data[k] && pos_data[k]) {
        theta_data[k] = 6.28318548F;
      }
    }

    y_size_idx_0 = *theta_size;
    for (k = 0; k < y_size_idx_0; k++) {
      theta_data[k] -= 3.14159274F;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void FrenentReferencePath_getClosest(const real32_T pathPoints[120],
  const real32_T startIdx_data[], const int32_T startIdx_size[2], const real32_T
  endIdx_data[], const int32_T endIdx_size[2], const real_T s_data[], const
  int32_T s_size[2], real32_T pathPoint_data[], int32_T pathPoint_size[2])
{
  int32_T a0n_size_idx_0;
  int32_T b_k;
  int32_T endPoint_size_idx_0;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T loop_ub_1;
  int32_T startPoint_size_idx_0;
  real32_T d_x_data[40];
  real32_T endPoint_data[6];
  real32_T startPoint_data[6];
  real32_T a0n_data;
  real32_T b_x;
  real32_T b_x_tmp;
  real32_T kappa_data;
  real32_T weight_data;
  real32_T x_data;
  real32_T y_data;
  boolean_T e_x_data[40];
  boolean_T c_y;
  boolean_T exitg1;
  startPoint_size_idx_0 = startIdx_size[1];
  endPoint_size_idx_0 = endIdx_size[1];
  loop_ub_0 = startIdx_size[1];
  loop_ub_1 = endIdx_size[1];
  for (b_k = 0; b_k < 6; b_k++) {
    for (a0n_size_idx_0 = 0; a0n_size_idx_0 < loop_ub_0; a0n_size_idx_0++) {
      startPoint_data[a0n_size_idx_0 + startPoint_size_idx_0 * b_k] =
        pathPoints[(20 * b_k + (int32_T)startIdx_data[a0n_size_idx_0]) - 1];
    }

    for (a0n_size_idx_0 = 0; a0n_size_idx_0 < loop_ub_1; a0n_size_idx_0++) {
      endPoint_data[a0n_size_idx_0 + endPoint_size_idx_0 * b_k] = pathPoints[(20
        * b_k + (int32_T)endIdx_data[a0n_size_idx_0]) - 1];
    }
  }

  b_x_tmp = 0.0F - startPoint_data[startIdx_size[1] * 5];
  b_x = fabsf(b_x_tmp);
  loop_ub_0 = endIdx_size[1];
  for (b_k = 0; b_k < loop_ub_0; b_k++) {
    weight_data = b_x / (endPoint_data[endPoint_size_idx_0 * 5 + b_k] -
                         startPoint_data[startPoint_size_idx_0 * 5 + b_k]);
    x_data = (1.0F - weight_data) * startPoint_data[b_k] + weight_data *
      endPoint_data[b_k];
    y_data = (1.0F - weight_data) * startPoint_data[b_k + startPoint_size_idx_0]
      + endPoint_data[b_k + endPoint_size_idx_0] * weight_data;
    kappa_data = startPoint_data[startPoint_size_idx_0 * 3 + b_k] * (1.0F -
      weight_data) + endPoint_data[endPoint_size_idx_0 * 3 + b_k] * weight_data;
    weight_data = startPoint_data[(startPoint_size_idx_0 << 2) + b_k] * (1.0F -
      weight_data) + endPoint_data[(endPoint_size_idx_0 << 2) + b_k] *
      weight_data;
  }

  loop_ub_0 = endIdx_size[1];
  for (b_k = 0; b_k < loop_ub_0; b_k++) {
    d_x_data[b_k] = endPoint_data[endPoint_size_idx_0 * 5 + b_k] -
      startPoint_data[startPoint_size_idx_0 * 5 + b_k];
  }

  loop_ub_1 = endIdx_size[1];
  if (0 <= endIdx_size[1] - 1) {
    d_x_data[0] = fabsf(d_x_data[0]);
  }

  for (b_k = 0; b_k < loop_ub_1; b_k++) {
    e_x_data[b_k] = (d_x_data[b_k] <= 2.22044605E-16F);
  }

  c_y = (endIdx_size[1] != 0);
  if (c_y) {
    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k <= loop_ub_0 - 1)) {
      if (!e_x_data[0]) {
        c_y = false;
        exitg1 = true;
      } else {
        b_k = 1;
      }
    }
  }

  if (c_y) {
    loop_ub_0 = startIdx_size[1];
    a0n_size_idx_0 = startIdx_size[1];
    for (b_k = 0; b_k < loop_ub_0; b_k++) {
      a0n_data = startPoint_data[(startPoint_size_idx_0 << 1) + b_k];
    }
  } else {
    loop_ub_0 = startIdx_size[1];
    loop_ub_1 = startIdx_size[1];
    for (b_k = 0; b_k < loop_ub_0; b_k++) {
      d_x_data[b_k] = startPoint_data[(startPoint_size_idx_0 << 1) + b_k];
    }

    L_FrenentReferencePath_wrapToPi(d_x_data, &loop_ub_1);
    a0n_size_idx_0 = loop_ub_1;
    if (0 <= loop_ub_1 - 1) {
      memcpy(&a0n_data, &d_x_data[0], loop_ub_1 * sizeof(real32_T));
    }

    loop_ub_0 = endIdx_size[1];
    loop_ub_1 = endIdx_size[1];
    for (b_k = 0; b_k < loop_ub_0; b_k++) {
      d_x_data[b_k] = endPoint_data[(endPoint_size_idx_0 << 1) + b_k];
    }

    L_FrenentReferencePath_wrapToPi(d_x_data, &loop_ub_1);
    for (b_k = 0; b_k < loop_ub_1; b_k++) {
      d_x_data[b_k] -= a0n_data;
    }

    L_FrenentReferencePath_wrapToPi(d_x_data, &loop_ub_1);
    loop_ub_1 = a0n_size_idx_0;
    for (b_k = 0; b_k < a0n_size_idx_0; b_k++) {
      d_x_data[b_k] = b_x_tmp / (endPoint_data[endPoint_size_idx_0 * 5 + b_k] -
        startPoint_data[startPoint_size_idx_0 * 5 + b_k]) * d_x_data[b_k] +
        a0n_data;
    }

    L_FrenentReferencePath_wrapToPi(d_x_data, &a0n_size_idx_0);
    if (0 <= loop_ub_1 - 1) {
      memcpy(&a0n_data, &d_x_data[0], loop_ub_1 * sizeof(real32_T));
    }
  }

  pathPoint_size[0] = 1;
  if (s_size[1] != 0) {
    b_k = s_size[1];
  } else {
    b_k = 0;
  }

  pathPoint_size[1] = (((((endIdx_size[1] != 0) + (endIdx_size[1] != 0)) +
    (a0n_size_idx_0 != 0)) + (endIdx_size[1] != 0)) + (endIdx_size[1] != 0)) +
    b_k;
  loop_ub_0 = (endIdx_size[1] != 0);
  loop_ub_1 = (endIdx_size[1] != 0);
  startPoint_size_idx_0 = (a0n_size_idx_0 != 0);
  endPoint_size_idx_0 = (endIdx_size[1] != 0);
  a0n_size_idx_0 = (endIdx_size[1] != 0);
  if (s_size[1] != 0) {
    b_k = s_size[1];
  } else {
    b_k = 0;
  }

  loop_ub = b_k - 1;
  if (0 <= loop_ub_0 - 1) {
    pathPoint_data[0] = x_data;
  }

  if (0 <= loop_ub_1 - 1) {
    pathPoint_data[loop_ub_0] = y_data;
  }

  if (0 <= startPoint_size_idx_0 - 1) {
    pathPoint_data[loop_ub_0 + loop_ub_1] = a0n_data;
  }

  if (0 <= endPoint_size_idx_0 - 1) {
    pathPoint_data[(loop_ub_0 + loop_ub_1) + startPoint_size_idx_0] = kappa_data;
  }

  if (0 <= a0n_size_idx_0 - 1) {
    pathPoint_data[((loop_ub_0 + loop_ub_1) + startPoint_size_idx_0) +
      endPoint_size_idx_0] = weight_data;
  }

  for (b_k = 0; b_k <= loop_ub; b_k++) {
    pathPoint_data[((((b_k + loop_ub_0) + loop_ub_1) + startPoint_size_idx_0) +
                    endPoint_size_idx_0) + a0n_size_idx_0] = (real32_T)
      s_data[b_k];
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_mldivide_fpze(const real32_T A[16], real32_T B[4])
{
  int32_T c;
  int32_T c_ix;
  int32_T c_k;
  int32_T d;
  int32_T ijA;
  int32_T ix;
  int32_T j;
  int32_T jA;
  real32_T b_A[16];
  real32_T smax;
  real32_T y;
  int8_T ipiv[4];
  memcpy(&b_A[0], &A[0], sizeof(real32_T) << 4U);
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  ipiv[3] = 4;
  for (j = 0; j < 3; j++) {
    c = j * 5;
    jA = 0;
    ix = c;
    smax = fabsf(b_A[c]);
    for (c_k = 2; c_k <= 4 - j; c_k++) {
      ix++;
      y = fabsf(b_A[ix]);
      if (y > smax) {
        jA = c_k - 1;
        smax = y;
      }
    }

    if (b_A[c + jA] != 0.0F) {
      if (jA != 0) {
        jA += j;
        ipiv[j] = (int8_T)(jA + 1);
        smax = b_A[j];
        b_A[j] = b_A[jA];
        b_A[jA] = smax;
        smax = b_A[j + 4];
        b_A[j + 4] = b_A[jA + 4];
        b_A[jA + 4] = smax;
        smax = b_A[j + 8];
        b_A[j + 8] = b_A[jA + 8];
        b_A[jA + 8] = smax;
        smax = b_A[j + 12];
        b_A[j + 12] = b_A[jA + 12];
        b_A[jA + 12] = smax;
      }

      jA = (c - j) + 4;
      for (ix = c + 1; ix < jA; ix++) {
        b_A[ix] /= b_A[c];
      }
    }

    jA = c;
    ix = c + 4;
    for (c_k = 0; c_k <= 2 - j; c_k++) {
      smax = b_A[ix];
      if (b_A[ix] != 0.0F) {
        c_ix = c + 1;
        d = (jA - j) + 8;
        for (ijA = jA + 5; ijA < d; ijA++) {
          b_A[ijA] += b_A[c_ix] * -smax;
          c_ix++;
        }
      }

      ix += 4;
      jA += 4;
    }

    if (j + 1 != ipiv[j]) {
      smax = B[j];
      c = ipiv[j] - 1;
      B[j] = B[c];
      B[c] = smax;
    }
  }

  if (B[0] != 0.0F) {
    for (j = 1; j + 1 < 5; j++) {
      B[j] -= B[0] * b_A[j];
    }
  }

  if (B[1] != 0.0F) {
    for (j = 2; j + 1 < 5; j++) {
      B[j] -= b_A[j + 4] * B[1];
    }
  }

  if (B[2] != 0.0F) {
    for (j = 3; j + 1 < 5; j++) {
      B[j] -= b_A[j + 8] * B[2];
    }
  }

  if (B[3] != 0.0F) {
    B[3] /= b_A[15];
    for (j = 0; j < 3; j++) {
      B[j] -= b_A[j + 12] * B[3];
    }
  }

  if (B[2] != 0.0F) {
    B[2] /= b_A[10];
    for (j = 0; j < 2; j++) {
      B[j] -= b_A[j + 8] * B[2];
    }
  }

  if (B[1] != 0.0F) {
    B[1] /= b_A[5];
    B[0] -= B[1] * b_A[4];
  }

  if (B[0] != 0.0F) {
    B[0] /= b_A[0];
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_linspace(real32_T d2, real32_T y[40])
{
  int32_T c_k;
  real32_T delta1;
  y[39] = d2;
  y[0] = 0.0F;
  if (0.0F == -d2) {
    for (c_k = 0; c_k < 38; c_k++) {
      y[c_k + 1] = (((real32_T)c_k + 2.0F) * 2.0F - 41.0F) / 39.0F * d2;
    }
  } else if ((d2 < 0.0F) && (fabsf(d2) > 1.70141173E+38F)) {
    delta1 = d2 / 39.0F;
    for (c_k = 0; c_k < 38; c_k++) {
      y[c_k + 1] = ((real32_T)c_k + 1.0F) * delta1;
    }
  } else {
    delta1 = d2 / 39.0F;
    for (c_k = 0; c_k < 38; c_k++) {
      y[c_k + 1] = ((real32_T)c_k + 1.0F) * delta1;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_power(const real32_T a[40], real32_T y[40])
{
  int32_T k;
  for (k = 0; k < 40; k++) {
    y[k] = rt_powf_snf(a[k], 3.0F);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_abs(const real32_T x_data[], const int32_T *x_size,
  real32_T y_data[], int32_T *y_size)
{
  int32_T k;
  *y_size = *x_size;
  for (k = 0; k < *x_size; k++) {
    y_data[k] = fabsf(x_data[k]);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_FrenentReferencePath_slerp(real32_T a0_data[], const int32_T
  *a0_size, const real32_T t0_data[], const real32_T a1_data[], const int32_T
  *a1_size, const real32_T t1_data[], const int32_T *t1_size, const real32_T
  t_data[])
{
  int32_T k;
  int32_T loop_ub;
  real32_T a1n_data[40];
  real32_T a1n_tmp_data[40];
  boolean_T x_data[40];
  boolean_T b_y;
  boolean_T exitg1;
  loop_ub = *t1_size;
  for (k = 0; k < loop_ub; k++) {
    a1n_tmp_data[k] = t1_data[k] - t0_data[k];
  }

  for (k = 0; k < *t1_size; k++) {
    a1n_data[k] = fabsf(a1n_tmp_data[k]);
  }

  loop_ub = *t1_size;
  for (k = 0; k < loop_ub; k++) {
    x_data[k] = (a1n_data[k] <= 2.22044605E-16F);
  }

  b_y = (*t1_size != 0);
  if (b_y) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= *t1_size - 1)) {
      if (!x_data[k]) {
        b_y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (!b_y) {
    L_FrenentReferencePath_wrapToPi(a0_data, a0_size);
    loop_ub = *a1_size;
    if (0 <= *a1_size - 1) {
      memcpy(&a1n_data[0], &a1_data[0], *a1_size * sizeof(real32_T));
    }

    L_FrenentReferencePath_wrapToPi(a1n_data, a1_size);
    for (k = 0; k < loop_ub; k++) {
      a1n_data[k] -= a0_data[k];
    }

    L_FrenentReferencePath_wrapToPi(a1n_data, a1_size);
    loop_ub = *a0_size;
    for (k = 0; k < loop_ub; k++) {
      a0_data[k] += (t_data[k] - t0_data[k]) / a1n_tmp_data[k] * a1n_data[k];
    }

    L_FrenentReferencePath_wrapToPi(a0_data, a0_size);
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void FrenentReferencePath_getClose_a(const real32_T pathPoints[120],
  const real32_T startIdx_data[], const int32_T *startIdx_size, const real32_T
  endIdx_data[], const int32_T *endIdx_size, const real32_T s_data[], const
  int32_T *s_size, real32_T pathPoint_data[], int32_T pathPoint_size[2])
{
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T weight_size;
  real32_T endPoint_data[240];
  real32_T startPoint_data[240];
  real32_T endPoint_data_0[40];
  real32_T endPoint_data_1[40];
  real32_T startPoint_data_0[40];
  real32_T theta_data[40];
  real32_T weight_data[40];
  real32_T weight_data_0;
  loop_ub = *startIdx_size;
  loop_ub_0 = *endIdx_size;
  for (i = 0; i < 6; i++) {
    for (weight_size = 0; weight_size < loop_ub; weight_size++) {
      startPoint_data[weight_size + *startIdx_size * i] = pathPoints[(20 * i +
        (int32_T)startIdx_data[weight_size]) - 1];
    }

    for (weight_size = 0; weight_size < loop_ub_0; weight_size++) {
      endPoint_data[weight_size + *endIdx_size * i] = pathPoints[(20 * i +
        (int32_T)endIdx_data[weight_size]) - 1];
    }
  }

  loop_ub = *s_size;
  for (i = 0; i < loop_ub; i++) {
    theta_data[i] = s_data[i] - startPoint_data[*startIdx_size * 5 + i];
  }

  LATC_Test_Calc_abs(theta_data, s_size, weight_data, &weight_size);
  for (i = 0; i < weight_size; i++) {
    weight_data[i] /= endPoint_data[*endIdx_size * 5 + i] - startPoint_data
      [*startIdx_size * 5 + i];
  }

  loop_ub = *startIdx_size;
  loop_ub_0 = *startIdx_size;
  for (i = 0; i < loop_ub; i++) {
    theta_data[i] = startPoint_data[(*startIdx_size << 1) + i];
  }

  loop_ub = *startIdx_size;
  for (i = 0; i < loop_ub; i++) {
    startPoint_data_0[i] = startPoint_data[*startIdx_size * 5 + i];
  }

  loop_ub = *endIdx_size;
  for (i = 0; i < loop_ub; i++) {
    endPoint_data_0[i] = endPoint_data[(*endIdx_size << 1) + i];
  }

  loop_ub = *endIdx_size;
  for (i = 0; i < loop_ub; i++) {
    endPoint_data_1[i] = endPoint_data[*endIdx_size * 5 + i];
  }

  LATC_FrenentReferencePath_slerp(theta_data, startIdx_size, startPoint_data_0,
    endPoint_data_0, endIdx_size, endPoint_data_1, endIdx_size, s_data);
  pathPoint_size[0] = weight_size;
  pathPoint_size[1] = 6;
  for (i = 0; i < weight_size; i++) {
    weight_data_0 = weight_data[i];
    pathPoint_data[i] = (1.0F - weight_data_0) * startPoint_data[i] +
      weight_data_0 * endPoint_data[i];
  }

  for (i = 0; i < weight_size; i++) {
    weight_data_0 = weight_data[i];
    pathPoint_data[i + pathPoint_size[0]] = (1.0F - weight_data_0) *
      startPoint_data[i + *startIdx_size] + endPoint_data[i + *endIdx_size] *
      weight_data_0;
  }

  for (i = 0; i < loop_ub_0; i++) {
    pathPoint_data[i + (pathPoint_size[0] << 1)] = theta_data[i];
  }

  for (i = 0; i < weight_size; i++) {
    weight_data_0 = weight_data[i];
    pathPoint_data[i + pathPoint_size[0] * 3] = startPoint_data[*startIdx_size *
      3 + i] * (1.0F - weight_data_0) + endPoint_data[*endIdx_size * 3 + i] *
      weight_data_0;
  }

  for (i = 0; i < weight_size; i++) {
    weight_data_0 = weight_data[i];
    pathPoint_data[i + (pathPoint_size[0] << 2)] = startPoint_data
      [(*startIdx_size << 2) + i] * (1.0F - weight_data_0) + endPoint_data
      [(*endIdx_size << 2) + i] * weight_data_0;
  }

  loop_ub = *s_size;
  for (i = 0; i < loop_ub; i++) {
    pathPoint_data[i + pathPoint_size[0] * 5] = s_data[i];
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void FrenentReferencePath_interpolat(const
  FrenentReferencePath_LATC_Tes_T *obj, const real32_T arcLength[40], real32_T
  pathPoints[240])
{
  int32_T interpolatedPts_size[2];
  int32_T ibmat;
  int32_T itilerow;
  int32_T k;
  real32_T interpolatedPts_data[240];
  real32_T arcLength_data[40];
  real32_T b_index[40];
  real32_T b_index_data[40];
  real32_T b_index_data_0[40];
  real32_T z;
  int8_T d_data[40];
  int8_T e_data[40];
  int8_T d_data_0;
  boolean_T b[40];
  boolean_T c[40];
  boolean_T b_0;
  boolean_T c_0;
  z = 1.0F / obj->DiscretizationDistance;
  for (k = 0; k < 40; k++) {
    b_index[k] = floorf(arcLength[k] * z) + 1.0F;
  }

  for (k = 0; k < 6; k++) {
    ibmat = k * 40;
    for (itilerow = 0; itilerow < 40; itilerow++) {
      pathPoints[ibmat + itilerow] = obj->PathPoints[20 * k + 19];
    }
  }

  z = obj->PathPoints[119];
  itilerow = 0;
  for (k = 0; k < 40; k++) {
    b_0 = !(b_index[k] <= 0.0F);
    c_0 = (arcLength[k] < z);
    if (b_0 && c_0) {
      itilerow++;
    }

    b[k] = b_0;
    c[k] = c_0;
  }

  if (itilerow != 0) {
    itilerow = 0;
    ibmat = 0;
    for (k = 0; k < 40; k++) {
      if (b[k] && c[k]) {
        itilerow++;
        d_data[ibmat] = (int8_T)(k + 1);
        ibmat++;
      }
    }

    for (k = 0; k < itilerow; k++) {
      d_data_0 = d_data[k];
      z = b_index[d_data_0 - 1];
      b_index_data[k] = z;
      b_index_data_0[k] = z + 1.0F;
      arcLength_data[k] = arcLength[d_data_0 - 1];
    }

    FrenentReferencePath_getClose_a(obj->PathPoints, b_index_data, &itilerow,
      b_index_data_0, &itilerow, arcLength_data, &itilerow, interpolatedPts_data,
      interpolatedPts_size);
    itilerow = 0;
    for (k = 0; k < 40; k++) {
      if (b[k] && c[k]) {
        e_data[itilerow] = (int8_T)(k + 1);
        itilerow++;
      }
    }

    ibmat = interpolatedPts_size[0];
    for (k = 0; k < 6; k++) {
      for (itilerow = 0; itilerow < ibmat; itilerow++) {
        pathPoints[(e_data[itilerow] + 40 * k) - 1] =
          interpolatedPts_data[interpolatedPts_size[0] * k + itilerow];
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void FrenentReferencePath_wrapToPi_k(real32_T theta[40])
{
  int32_T c_k;
  real32_T y;
  boolean_T pos[40];
  boolean_T b_y;
  boolean_T exitg1;
  for (c_k = 0; c_k < 40; c_k++) {
    pos[c_k] = (fabsf(theta[c_k]) > 3.1415926535897931);
  }

  b_y = false;
  c_k = 0;
  exitg1 = false;
  while ((!exitg1) && (c_k < 40)) {
    if (!pos[c_k]) {
      c_k++;
    } else {
      b_y = true;
      exitg1 = true;
    }
  }

  if (b_y) {
    for (c_k = 0; c_k < 40; c_k++) {
      y = theta[c_k] + 3.14159274F;
      theta[c_k] = LATC_Test_Calc_mod(y);
      if ((theta[c_k] == 0.0F) && (y > 0.0F)) {
        theta[c_k] = 6.28318548F;
      }

      theta[c_k] -= 3.14159274F;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_diff_m(const real32_T x[40], real32_T y[39])
{
  int32_T ixLead;
  int32_T iyLead;
  int32_T m;
  real32_T tmp2;
  real32_T work;
  ixLead = 1;
  iyLead = 0;
  work = x[0];
  for (m = 0; m < 39; m++) {
    tmp2 = work;
    work = x[ixLead];
    y[iyLead] = x[ixLead] - tmp2;
    ixLead++;
    iyLead++;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_diff_mf(const real_T x[40], real_T y[39])
{
  real_T tmp2;
  real_T work;
  int32_T ixLead;
  int32_T iyLead;
  int32_T m;
  ixLead = 1;
  iyLead = 0;
  work = x[0];
  for (m = 0; m < 39; m++) {
    tmp2 = work;
    work = x[ixLead];
    y[iyLead] = x[ixLead] - tmp2;
    ixLead++;
    iyLead++;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_xswap(real32_T x[1600], int32_T ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  real32_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 40; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix += 40;
    iy += 40;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_xgetrf_h(real32_T A[1600], int32_T ipiv[40], int32_T *
  info)
{
  int32_T b_ix;
  int32_T c;
  int32_T d;
  int32_T ijA;
  int32_T ix;
  int32_T j;
  int32_T jA;
  int32_T k;
  real32_T smax;
  real32_T y;
  for (j = 0; j < 40; j++) {
    ipiv[j] = j + 1;
  }

  *info = 0;
  for (j = 0; j < 39; j++) {
    c = j * 41;
    jA = 1;
    ix = c;
    smax = fabsf(A[c]);
    for (k = 2; k <= 40 - j; k++) {
      ix++;
      y = fabsf(A[ix]);
      if (y > smax) {
        jA = k;
        smax = y;
      }
    }

    if (A[(c + jA) - 1] != 0.0F) {
      if (jA - 1 != 0) {
        ipiv[j] = j + jA;
        LATC_Test_Calc_xswap(A, j + 1, j + jA);
      }

      jA = (c - j) + 40;
      for (ix = c + 1; ix < jA; ix++) {
        A[ix] /= A[c];
      }
    } else {
      *info = j + 1;
    }

    jA = c;
    ix = c + 40;
    for (k = 0; k <= 38 - j; k++) {
      smax = A[ix];
      if (A[ix] != 0.0F) {
        b_ix = c + 1;
        d = (jA - j) + 80;
        for (ijA = jA + 41; ijA < d; ijA++) {
          A[ijA] += A[b_ix] * -smax;
          b_ix++;
        }
      }

      ix += 40;
      jA += 40;
    }
  }

  if ((*info == 0) && (!(A[1599] != 0.0F))) {
    *info = 40;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static int32_T LATC_Test_Calc_xgetrfs_n(real32_T A[1600], real32_T B[40])
{
  int32_T ipiv[40];
  int32_T b_i;
  int32_T i;
  int32_T info;
  int32_T kAcol;
  real32_T temp;
  LATC_Test_Calc_xgetrf_h(A, ipiv, &info);
  for (i = 0; i < 39; i++) {
    kAcol = ipiv[i];
    if (i + 1 != kAcol) {
      temp = B[i];
      B[i] = B[kAcol - 1];
      B[kAcol - 1] = temp;
    }
  }

  for (i = 0; i < 40; i++) {
    kAcol = 40 * i;
    if (B[i] != 0.0F) {
      for (b_i = i + 1; b_i + 1 < 41; b_i++) {
        B[b_i] -= A[b_i + kAcol] * B[i];
      }
    }
  }

  for (i = 39; i >= 0; i--) {
    kAcol = 40 * i;
    if (B[i] != 0.0F) {
      B[i] /= A[i + kAcol];
      for (b_i = 0; b_i < i; b_i++) {
        B[b_i] -= A[b_i + kAcol] * B[i];
      }
    }
  }

  return info;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void LATC_Test_Calc_mldivide_fpze2(const real32_T A[1600], real32_T B[40])
{
  memcpy(&LATC_Test_Calc_B.b_A[0], &A[0], 1600U * sizeof(real32_T));
  LATC_Test_Calc_xgetrfs_n(LATC_Test_Calc_B.b_A, B);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static Spline_1_LATC_Test_Calc_T *LATC_Test_Calc_Spline_Spline_m
  (Spline_1_LATC_Test_Calc_T *obj, const real_T x[40], const real32_T y[40])
{
  Spline_1_LATC_Test_Calc_T *b_obj;
  real_T tmp[39];
  int32_T i;
  real32_T B[40];
  real32_T h[39];
  real32_T b;
  real32_T b_b;
  real32_T b_x;
  real32_T d_x;
  b_obj = obj;
  for (i = 0; i < 39; i++) {
    obj->b[i] = 0.0F;
  }

  for (i = 0; i < 40; i++) {
    obj->c[i] = 0.0F;
  }

  for (i = 0; i < 39; i++) {
    obj->d[i] = 0.0F;
  }

  for (i = 0; i < 40; i++) {
    obj->x[i] = (real32_T)x[i];
  }

  obj->nx = 40.0F;
  LATC_Test_Calc_diff_mf(x, tmp);
  for (i = 0; i < 39; i++) {
    h[i] = (real32_T)tmp[i];
  }

  for (i = 0; i < 40; i++) {
    obj->a[i] = y[i];
  }

  memset(&LATC_Test_Calc_B.A[0], 0, 1600U * sizeof(real32_T));
  LATC_Test_Calc_B.A[0] = 1.0F;
  b = obj->nx - 1.0F;
  for (i = 0; i < (int32_T)b; i++) {
    if ((real32_T)i + 1.0F != obj->nx - 1.0F) {
      LATC_Test_Calc_B.A[((int32_T)(((real32_T)i + 1.0F) + 1.0F) + 40 *
                          ((int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1)) - 1] =
        (h[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] + h[(int32_T)((real32_T)i
          + 1.0F) - 1]) * 2.0F;
    }

    b_b = h[(int32_T)((real32_T)i + 1.0F) - 1];
    LATC_Test_Calc_B.A[((int32_T)(((real32_T)i + 1.0F) + 1.0F) + 40 * ((int32_T)
      ((real32_T)i + 1.0F) - 1)) - 1] = b_b;
    LATC_Test_Calc_B.A[((int32_T)((real32_T)i + 1.0F) + 40 * ((int32_T)
      (((real32_T)i + 1.0F) + 1.0F) - 1)) - 1] = b_b;
  }

  LATC_Test_Calc_B.A[40] = 0.0F;
  LATC_Test_Calc_B.A[((int32_T)obj->nx + 40 * ((int32_T)(obj->nx - 1.0F) - 1)) -
    1] = 0.0F;
  LATC_Test_Calc_B.A[((int32_T)obj->nx + 40 * ((int32_T)obj->nx - 1)) - 1] =
    1.0F;
  memset(&B[0], 0, 40U * sizeof(real32_T));
  b = obj->nx - 2.0F;
  for (i = 0; i < (int32_T)b; i++) {
    b_b = obj->a[(int32_T)(((real32_T)i + 1.0F) + 2.0F) - 1] - obj->a[(int32_T)
      (((real32_T)i + 1.0F) + 1.0F) - 1];
    b_x = obj->a[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] - obj->a[(int32_T)
      ((real32_T)i + 1.0F) - 1];
    B[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] = 3.0F * b_b / h[(int32_T)
      (((real32_T)i + 1.0F) + 1.0F) - 1] - 3.0F * b_x / h[(int32_T)((real32_T)i
      + 1.0F) - 1];
  }

  LATC_Test_Calc_mldivide_fpze2(LATC_Test_Calc_B.A, B);
  for (i = 0; i < 40; i++) {
    obj->c[i] = B[i];
  }

  b = obj->nx - 1.0F;
  for (i = 0; i < (int32_T)b; i++) {
    b_x = obj->c[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] - obj->c[(int32_T)
      ((real32_T)i + 1.0F) - 1];
    b_b = h[(int32_T)((real32_T)i + 1.0F) - 1];
    obj->d[(int32_T)((real32_T)i + 1.0F) - 1] = b_x / (b_b * 3.0F);
    b_x = obj->a[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] - obj->a[(int32_T)
      ((real32_T)i + 1.0F) - 1];
    d_x = (obj->c[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] + obj->c[(int32_T)
           ((real32_T)i + 1.0F) - 1] * 2.0F) * b_b;
    obj->b[(int32_T)((real32_T)i + 1.0F) - 1] = b_x / b_b - d_x / 3.0F;
  }

  return b_obj;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static Spline2D_1_LATC_Test_Calc_T *LATC_Test_Cal_Spline2D_Spline2D
  (Spline2D_1_LATC_Test_Calc_T *obj, const real32_T x[40], const real32_T y[40])
{
  Spline2D_1_LATC_Test_Calc_T *b_obj;
  real_T obj_0[40];
  real_T b_x[39];
  int32_T i;
  real32_T dx[39];
  real32_T dy[39];
  real32_T dx_0;
  real32_T dy_0;
  b_obj = obj;
  LATC_Test_Calc_diff_m(x, dx);
  LATC_Test_Calc_diff_m(y, dy);
  for (i = 0; i < 39; i++) {
    obj->ds[i] = 0.0;
  }

  for (i = 0; i < 39; i++) {
    dy_0 = dy[i];
    dx_0 = dx[i];
    obj->ds[i] = sqrtf(dx_0 * dx_0 + dy_0 * dy_0);
  }

  for (i = 0; i < 39; i++) {
    b_x[i] = obj->ds[i];
  }

  for (i = 0; i < 38; i++) {
    b_x[i + 1] += b_x[i];
  }

  obj->s[0] = 0.0;
  for (i = 0; i < 39; i++) {
    obj->s[i + 1] = b_x[i];
  }

  memcpy(&obj_0[0], &obj->s[0], 40U * sizeof(real_T));
  LATC_Test_Calc_Spline_Spline_m(&obj->sx, obj_0, x);
  memcpy(&obj_0[0], &obj->s[0], 40U * sizeof(real_T));
  LATC_Test_Calc_Spline_Spline_m(&obj->sy, obj_0, y);
  return b_obj;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static real32_T LATC_Test_Calc_Spline_calc_d(const Spline_1_LATC_Test_Calc_T
  *obj, real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T dx;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[39]) {
    result = (rtNaNF);
  } else {
    hi = 39;
    lo = -1;
    while (lo + 2 < hi + 1) {
      mid = (int32_T)floor((real_T)((lo + hi) + 3) / 2.0) - 1;
      if (t < obj->x[mid]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    dx = t - obj->x[lo];
    result = ((obj->b[lo] * dx + obj->a[lo]) + dx * dx * obj->c[lo]) + obj->d[lo]
      * rt_powf_snf(dx, 3.0F);
  }

  return result;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static real32_T LATC_Test_Calc_Spline_calcd_f(const Spline_1_LATC_Test_Calc_T
  *obj, real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T dx;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[39]) {
    result = (rtNaNF);
  } else {
    hi = 39;
    lo = -1;
    while (lo + 2 < hi + 1) {
      mid = (int32_T)floor((real_T)((lo + hi) + 3) / 2.0) - 1;
      if (t < obj->x[mid]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    dx = t - obj->x[lo];
    result = (2.0F * obj->c[lo] * dx + obj->b[lo]) + 3.0F * obj->d[lo] * (dx *
      dx);
  }

  return result;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static real32_T LATC_Test_Calc_Spline_calcdd_p(const Spline_1_LATC_Test_Calc_T
  *obj, real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[39]) {
    result = (rtNaNF);
  } else {
    hi = 39;
    lo = -1;
    while (lo + 2 < hi + 1) {
      mid = (int32_T)floor((real_T)((lo + hi) + 3) / 2.0) - 1;
      if (t < obj->x[mid]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    result = 6.0F * obj->d[lo] * (t - obj->x[lo]) + 2.0F * obj->c[lo];
  }

  return result;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static real32_T LATC_Test_Calc_Spline_calcddd_a(const Spline_1_LATC_Test_Calc_T *
  obj, real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[39]) {
    result = (rtNaNF);
  } else {
    hi = 40;
    lo = 1;
    while (lo < hi) {
      mid = (int32_T)floor((real_T)(lo + hi) / 2.0);
      if (t < obj->x[mid - 1]) {
        hi = mid;
      } else {
        lo = mid + 1;
      }
    }

    result = obj->d[lo - 2] * 6.0F;
  }

  return result;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function4' */
static void FrenentReferencePath_frenet2glo(const
  FrenentReferencePath_LATC_Tes_T *obj, const real32_T frenetStates[80],
  real32_T globalStates[200])
{
  Spline2D_1_LATC_Test_Calc_T objSpline;
  int32_T k;
  real32_T refPathPoint[240];
  real32_T refPathPoint_0[40];
  real32_T refPathPoint_1[40];
  real32_T refPointtheta[40];
  real32_T b_dy;
  real32_T d;
  real32_T dddy;
  real32_T ddy;
  real32_T dx;
  real32_T dy;
  real32_T norm_square;
  real32_T refPointtheta_0;
  FrenentReferencePath_interpolat(obj, &frenetStates[0], refPathPoint);
  memcpy(&refPointtheta[0], &refPathPoint[80], 40U * sizeof(real32_T));
  FrenentReferencePath_wrapToPi_k(refPointtheta);
  for (k = 0; k < 40; k++) {
    refPointtheta_0 = refPointtheta[k];
    dx = frenetStates[k + 40];
    dy = sinf(refPointtheta_0);
    refPathPoint_0[k] = refPathPoint[k] - dy * dx;
    refPathPoint_1[k] = refPathPoint[k + 40] + cosf(refPointtheta_0) * dx;
    refPointtheta[k] = dy;
  }

  LATC_Test_Cal_Spline2D_Spline2D(&objSpline, refPathPoint_0, refPathPoint_1);
  LATC_Test_Calc_linspace(frenetStates[39], refPointtheta);
  for (k = 0; k < 40; k++) {
    refPointtheta_0 = refPointtheta[k];
    refPathPoint[k] = LATC_Test_Calc_Spline_calc_d(&objSpline.sx,
      refPointtheta_0);
    refPathPoint[k + 40] = LATC_Test_Calc_Spline_calc_d(&objSpline.sy,
      refPointtheta_0);
    dx = LATC_Test_Calc_Spline_calcd_f(&objSpline.sx, refPointtheta_0);
    dy = LATC_Test_Calc_Spline_calcd_f(&objSpline.sy, refPointtheta_0);
    refPathPoint[k + 80] = rt_atan2f_snf(dy, dx);
    dx = LATC_Test_Calc_Spline_calcd_f(&objSpline.sx, refPointtheta_0);
    dy = LATC_Test_Calc_Spline_calcdd_p(&objSpline.sx, refPointtheta_0);
    b_dy = LATC_Test_Calc_Spline_calcd_f(&objSpline.sy, refPointtheta_0);
    ddy = LATC_Test_Calc_Spline_calcdd_p(&objSpline.sy, refPointtheta_0);
    norm_square = dx * dx + b_dy * b_dy;
    refPathPoint[k + 120] = (ddy * dx - dy * b_dy) / (sqrtf(norm_square) *
      norm_square);
    dx = LATC_Test_Calc_Spline_calcd_f(&objSpline.sx, refPointtheta_0);
    dy = LATC_Test_Calc_Spline_calcdd_p(&objSpline.sx, refPointtheta_0);
    b_dy = LATC_Test_Calc_Spline_calcddd_a(&objSpline.sx, refPointtheta_0);
    ddy = LATC_Test_Calc_Spline_calcd_f(&objSpline.sy, refPointtheta_0);
    norm_square = LATC_Test_Calc_Spline_calcdd_p(&objSpline.sy, refPointtheta_0);
    dddy = LATC_Test_Calc_Spline_calcddd_a(&objSpline.sy, refPointtheta_0);
    d = dx * dx + ddy * ddy;
    refPathPoint[k + 160] = ((dx * dddy - ddy * b_dy) * d - (dx * norm_square -
      ddy * dy) * 3.0F * (dx * dy + ddy * norm_square)) / (d * d * d);
    refPathPoint[k + 200] = refPointtheta_0;
  }

  for (k = 0; k < 5; k++) {
    memcpy(&globalStates[k * 40], &refPathPoint[k * 40], 40U * sizeof(real32_T));
  }
}

/* Model output function */
static void LATC_Test_Calc_output(void)
{
  static const uint8_T d_0[18] = { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U,
    30U, 50U, 70U, 90U, 110U, 130U, 150U };

  FrenentReferencePath_LATC_Tes_T referencePath;
  real_T rtb_MultiportSwitch1;
  real_T tmp_data;
  int32_T b_y_size[2];
  int32_T b_y_size_0[2];
  int32_T interpolatedPts_size[2];
  int32_T tmp_size[2];
  int32_T b_idx;
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_0;
  real32_T globalTrajectory_Trajectory[200];
  real32_T referencePath_0[120];
  real32_T s_0[80];
  real32_T s[40];
  real32_T tmp[40];
  real32_T tmp_0[36];
  real32_T tmp_1[16];
  real32_T interpolatedPts_data[6];
  real32_T pathStart[6];
  real32_T coefficients[4];
  real32_T L_Forward_Dis;
  real32_T angular_v_des;
  real32_T b_y_data;
  real32_T coefficients_0;
  real32_T s_1;
  int8_T ii_data_idx_0;
  uint8_T d;
  boolean_T x[40];
  boolean_T b;
  boolean_T exitg1;

  /* S-Function (cnpenvin): '<S7>/S-Function' */

  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S1>/S-Function' */

  /* Level2 S-Function Block: '<S1>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S2>/S-Function' */

  /* Level2 S-Function Block: '<S2>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S3>/S-Function' */

  /* Level2 S-Function Block: '<S3>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S4>/S-Function' */

  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S5>/S-Function' */

  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S6>/S-Function' */

  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* LookupNDDirect: '<Root>/Direct Lookup Table (n-D)1' incorporates:
   *  S-Function (cnpenvin): '<S6>/S-Function'
   *
   * About '<Root>/Direct Lookup Table (n-D)1':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  if (LATC_Test_Calc_B.SFunction_o1_oa > 10.0) {
    rtb_MultiportSwitch1 = 10.0;
  } else if (LATC_Test_Calc_B.SFunction_o1_oa < 0.0) {
    rtb_MultiportSwitch1 = 0.0;
  } else {
    rtb_MultiportSwitch1 = LATC_Test_Calc_B.SFunction_o1_oa;
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch1' incorporates:
   *  Abs: '<Root>/Abs'
   *  Constant: '<Root>/Constant5'
   *  LookupNDDirect: '<Root>/Direct Lookup Table (n-D)1'
   *  Lookup_n-D: '<Root>/2-D Lookup Table3'
   *
   * About '<Root>/Direct Lookup Table (n-D)1':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  if (LATC_Test_Calc_ConstP.DirectLookupTablenD1_table[(int32_T)
      rtb_MultiportSwitch1] == 1) {
    rtb_MultiportSwitch1 = 60.0;
  } else {
    rtb_MultiportSwitch1 = look2_binlcapw(0.0, fabs
      (LATC_Test_Calc_B.SFunction_o1),
      LATC_Test_Calc_ConstP.uDLookupTable3_bp01Data,
      LATC_Test_Calc_ConstP.uDLookupTable3_bp02Data,
      LATC_Test_Calc_ConstP.uDLookupTable3_tableData,
      LATC_Test_Calc_ConstP.uDLookupTable3_maxIndex, 8U);
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch1' */

  /* MATLAB Function: '<Root>/MATLAB Function4' incorporates:
   *  Constant: '<Root>/Constant'
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  DataTypeConversion: '<Root>/Data Type Conversion9'
   */
  for (b_idx = 0; b_idx < 18; b_idx++) {
    d = d_0[b_idx];
    tmp_0[b_idx] = -((((real32_T)LATC_Test_Calc_B.SFunction_o1_o * (real32_T)
                       d_0[b_idx] + (real32_T)LATC_Test_Calc_B.SFunction_o1) +
                      (real32_T)(int16_T)(d * d) * (real32_T)
                      LATC_Test_Calc_B.SFunction_o1_m) + (real32_T)
                     LATC_Test_Calc_B.SFunction_o1_p * rt_powf_snf((real32_T)d,
      3.0F));
    tmp_0[b_idx + 18] = d;
  }

  FrenentReferencePath_FrenentRef(&referencePath, tmp_0);
  L_Forward_Dis = referencePath.DiscretizationDistance;
  L_Forward_Dis = 1.0F / L_Forward_Dis * 0.0F;
  for (b_idx = 0; b_idx < 6; b_idx++) {
    interpolatedPts_data[b_idx] = referencePath.PathPoints[20 * b_idx + 19];
  }

  for (b_idx = 0; b_idx < 6; b_idx++) {
    pathStart[b_idx] = interpolatedPts_data[b_idx];
  }

  b = (0.0F < referencePath.PathPoints[119]);
  if (b) {
    b_y_size[0] = 1;
    b_y_size[1] = 1;
    b_y_size_0[0] = 1;
    b_y_size_0[1] = 1;
    b_y_data = L_Forward_Dis + 1.0F;
    L_Forward_Dis = (L_Forward_Dis + 1.0F) + 1.0F;
    tmp_size[0] = 1;
    tmp_size[1] = 1;
    tmp_data = 0.0;
    memcpy(&referencePath_0[0], &referencePath.PathPoints[0], 120U * sizeof
           (real32_T));
    FrenentReferencePath_getClosest(referencePath_0, &b_y_data, b_y_size,
      &L_Forward_Dis, b_y_size_0, &tmp_data, tmp_size, interpolatedPts_data,
      interpolatedPts_size);
    loop_ub = interpolatedPts_size[1];
    for (b_idx = 0; b_idx < loop_ub; b_idx++) {
      loop_ub_0 = interpolatedPts_size[0];
      for (i = 0; i < loop_ub_0; i++) {
        pathStart[b_idx] = interpolatedPts_data[interpolatedPts_size[0] * b_idx
          + i];
      }
    }
  }

  coefficients[0] = -(real32_T)LATC_Test_Calc_B.SFunction_o1;
  coefficients[1] = 0.0F;
  coefficients[2] = tanf(1.57079637F - pathStart[2]);
  coefficients[3] = 0.0F;
  tmp_1[0] = 1.0F;
  tmp_1[4] = 0.0F;
  tmp_1[8] = 0.0F;
  tmp_1[12] = 0.0F;
  tmp_1[1] = 1.0F;
  tmp_1[5] = (real32_T)rtb_MultiportSwitch1;
  L_Forward_Dis = (real32_T)rtb_MultiportSwitch1 * (real32_T)
    rtb_MultiportSwitch1;
  tmp_1[9] = L_Forward_Dis;
  tmp_1[13] = rt_powf_snf((real32_T)rtb_MultiportSwitch1, 3.0F);
  tmp_1[2] = 0.0F;
  tmp_1[6] = 1.0F;
  tmp_1[10] = 0.0F;
  tmp_1[14] = 0.0F;
  tmp_1[3] = 0.0F;
  tmp_1[7] = 1.0F;
  tmp_1[11] = 2.0F * (real32_T)rtb_MultiportSwitch1;
  tmp_1[15] = L_Forward_Dis * 3.0F;
  LATC_Test_Calc_mldivide_fpze(tmp_1, coefficients);
  LATC_Test_Calc_linspace((real32_T)rtb_MultiportSwitch1, s);
  LATC_Test_Calc_power(s, tmp);
  L_Forward_Dis = coefficients[0];
  b_y_data = coefficients[1];
  angular_v_des = coefficients[2];
  coefficients_0 = coefficients[3];
  for (b_idx = 0; b_idx < 40; b_idx++) {
    s_1 = s[b_idx];
    s_0[b_idx] = s_1;
    s_0[b_idx + 40] = ((b_y_data * s_1 + L_Forward_Dis) + s_1 * s_1 *
                       angular_v_des) + coefficients_0 * tmp[b_idx];
  }

  FrenentReferencePath_frenet2glo(&referencePath, s_0,
    globalTrajectory_Trajectory);
  if (((real32_T)LATC_Test_Calc_B.SFunction_o1_l >= 0.0F) && ((real32_T)
       LATC_Test_Calc_B.SFunction_o1_l < 12.5F)) {
    L_Forward_Dis = 3.0F;
  } else if (((real32_T)LATC_Test_Calc_B.SFunction_o1_l >= 12.5F) && ((real32_T)
              LATC_Test_Calc_B.SFunction_o1_l < 25.0F)) {
    L_Forward_Dis = 0.3F * (real32_T)LATC_Test_Calc_B.SFunction_o1_l;
  } else {
    L_Forward_Dis = 7.5F;
  }

  for (b_idx = 0; b_idx < 40; b_idx++) {
    b_y_data = globalTrajectory_Trajectory[b_idx + 40];
    x[b_idx] = ((b_y_data >= L_Forward_Dis) && (b_y_data <= L_Forward_Dis + 2.0F));
  }

  b_idx = 0;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 40)) {
    if (x[loop_ub]) {
      b_idx = 1;
      ii_data_idx_0 = (int8_T)(loop_ub + 1);
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }

  if (b_idx == 0) {
    loop_ub = 1;
  } else {
    loop_ub = ii_data_idx_0 - 1;
  }

  b_y_data = globalTrajectory_Trajectory[loop_ub + 120];
  angular_v_des = 1.0F / (1.0F / b_y_data) * (real32_T)
    LATC_Test_Calc_B.SFunction_o1_l;
  if (angular_v_des < 0.01) {
    angular_v_des = 0.0F;
  }

  L_Forward_Dis = globalTrajectory_Trajectory[loop_ub + 80];
  if (1.57079637F - L_Forward_Dis > 3.1415926535897931) {
    coefficients_0 = (1.57079637F - L_Forward_Dis) - 6.28318548F;
  } else if (1.57079637F - L_Forward_Dis < -3.1415926535897931) {
    coefficients_0 = (1.57079637F - L_Forward_Dis) + 6.28318548F;
  } else {
    coefficients_0 = 1.57079637F - L_Forward_Dis;
  }

  LATC_Test_Calc_B.idx = (real_T)loop_ub + 1.0;
  for (b_idx = 0; b_idx < 40; b_idx++) {
    /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function4'
     */
    LATC_Test_Calc_B.DataTypeConversion[b_idx] =
      globalTrajectory_Trajectory[b_idx + 40];
  }

  /* S-Function (cnpenvout): '<S9>/S-Function' */

  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  for (b_idx = 0; b_idx < 40; b_idx++) {
    /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function4'
     */
    LATC_Test_Calc_B.DataTypeConversion_b[b_idx] =
      globalTrajectory_Trajectory[b_idx];
  }

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion6'
   *  MATLAB Function: '<Root>/MATLAB Function4'
   */
  LATC_Test_Calc_B.DataTypeConversion_i = (real32_T)
    LATC_Test_Calc_B.SFunction_o1_k - angular_v_des;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function4'
   */
  LATC_Test_Calc_B.DataTypeConversion_m = coefficients_0;

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  MATLAB Function: '<Root>/MATLAB Function4'
   */
  LATC_Test_Calc_B.DataTypeConversion_j = sinf(1.57079637F - L_Forward_Dis) *
    (real32_T)LATC_Test_Calc_B.SFunction_o1_l;

  /* S-Function (cnpenvout): '<S10>/S-Function' */

  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S11>/S-Function' */

  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S12>/S-Function' */

  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S13>/S-Function' */

  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnOutputs(rts,0);
  }

  for (b_idx = 0; b_idx < 40; b_idx++) {
    /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function4'
     */
    LATC_Test_Calc_B.DataTypeConversion_i1[b_idx] =
      globalTrajectory_Trajectory[b_idx + 80];
  }

  /* S-Function (cnpenvout): '<S14>/S-Function' */

  /* Level2 S-Function Block: '<S14>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S15>/S-Function' */

  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* MATLAB Function: '<Root>/MATLAB Function4' */
  angular_v_des = globalTrajectory_Trajectory[loop_ub + 40];

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function4'
   */
  LATC_Test_Calc_B.DataTypeConversion_j3 = angular_v_des;

  /* S-Function (cnpenvout): '<S16>/S-Function' */

  /* Level2 S-Function Block: '<S16>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function4'
   */
  LATC_Test_Calc_B.DataTypeConversion_p = globalTrajectory_Trajectory[loop_ub];

  /* S-Function (cnpenvout): '<S17>/S-Function' */

  /* Level2 S-Function Block: '<S17>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S18>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_c = L_Forward_Dis;

  /* S-Function (cnpenvout): '<S18>/S-Function' */

  /* Level2 S-Function Block: '<S18>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_e = b_y_data;

  /* S-Function (cnpenvout): '<S19>/S-Function' */

  /* Level2 S-Function Block: '<S19>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function4'
   */
  LATC_Test_Calc_B.DataTypeConversion_h = (0.0F - angular_v_des) * cosf
    (L_Forward_Dis) - (0.0F - globalTrajectory_Trajectory[loop_ub]) * sinf
    (L_Forward_Dis);

  /* S-Function (cnpenvout): '<S20>/S-Function' */

  /* Level2 S-Function Block: '<S20>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }
}

/* Model update function */
static void LATC_Test_Calc_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++LATC_Test_Calc_M->Timing.clockTick0)) {
    ++LATC_Test_Calc_M->Timing.clockTickH0;
  }

  LATC_Test_Calc_M->Timing.t[0] = LATC_Test_Calc_M->Timing.clockTick0 *
    LATC_Test_Calc_M->Timing.stepSize0 + LATC_Test_Calc_M->Timing.clockTickH0 *
    LATC_Test_Calc_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void LATC_Test_Calc_initialize(void)
{
  /* Start for S-Function (cnpenvin): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S1>/S-Function' */
  /* Level2 S-Function Block: '<S1>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S2>/S-Function' */
  /* Level2 S-Function Block: '<S2>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S4>/S-Function' */
  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S5>/S-Function' */
  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S12>/S-Function' */
  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S14>/S-Function' */
  /* Level2 S-Function Block: '<S14>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S16>/S-Function' */
  /* Level2 S-Function Block: '<S16>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S17>/S-Function' */
  /* Level2 S-Function Block: '<S17>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S18>/S-Function' */
  /* Level2 S-Function Block: '<S18>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S19>/S-Function' */
  /* Level2 S-Function Block: '<S19>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S20>/S-Function' */
  /* Level2 S-Function Block: '<S20>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void LATC_Test_Calc_terminate(void)
{
  /* Terminate for S-Function (cnpenvin): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S1>/S-Function' */
  /* Level2 S-Function Block: '<S1>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S2>/S-Function' */
  /* Level2 S-Function Block: '<S2>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S4>/S-Function' */
  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S5>/S-Function' */
  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S12>/S-Function' */
  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S14>/S-Function' */
  /* Level2 S-Function Block: '<S14>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S16>/S-Function' */
  /* Level2 S-Function Block: '<S16>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S17>/S-Function' */
  /* Level2 S-Function Block: '<S17>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S18>/S-Function' */
  /* Level2 S-Function Block: '<S18>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S19>/S-Function' */
  /* Level2 S-Function Block: '<S19>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S20>/S-Function' */
  /* Level2 S-Function Block: '<S20>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  LATC_Test_Calc_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  LATC_Test_Calc_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  LATC_Test_Calc_initialize();
}

void MdlTerminate(void)
{
  LATC_Test_Calc_terminate();
}

/* Registration function */
RT_MODEL_LATC_Test_Calc_T *LATC_Test_Calc(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)LATC_Test_Calc_M, 0,
                sizeof(RT_MODEL_LATC_Test_Calc_T));
  rtsiSetSolverName(&LATC_Test_Calc_M->solverInfo,"FixedStepDiscrete");
  LATC_Test_Calc_M->solverInfoPtr = (&LATC_Test_Calc_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = LATC_Test_Calc_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    LATC_Test_Calc_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    LATC_Test_Calc_M->Timing.sampleTimes =
      (&LATC_Test_Calc_M->Timing.sampleTimesArray[0]);
    LATC_Test_Calc_M->Timing.offsetTimes =
      (&LATC_Test_Calc_M->Timing.offsetTimesArray[0]);

    /* task periods */
    LATC_Test_Calc_M->Timing.sampleTimes[0] = (0.01);

    /* task offsets */
    LATC_Test_Calc_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(LATC_Test_Calc_M, &LATC_Test_Calc_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = LATC_Test_Calc_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    LATC_Test_Calc_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(LATC_Test_Calc_M, -1);
  LATC_Test_Calc_M->Timing.stepSize0 = 0.01;
  LATC_Test_Calc_M->solverInfoPtr = (&LATC_Test_Calc_M->solverInfo);
  LATC_Test_Calc_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&LATC_Test_Calc_M->solverInfo, 0.01);
  rtsiSetSolverMode(&LATC_Test_Calc_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  LATC_Test_Calc_M->blockIO = ((void *) &LATC_Test_Calc_B);
  (void) memset(((void *) &LATC_Test_Calc_B), 0,
                sizeof(B_LATC_Test_Calc_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &LATC_Test_Calc_M->NonInlinedSFcns.sfcnInfo;
    LATC_Test_Calc_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(LATC_Test_Calc_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &LATC_Test_Calc_M->Sizes.numSampTimes);
    LATC_Test_Calc_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (LATC_Test_Calc_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,LATC_Test_Calc_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(LATC_Test_Calc_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(LATC_Test_Calc_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (LATC_Test_Calc_M));
    rtssSetStepSizePtr(sfcnInfo, &LATC_Test_Calc_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(LATC_Test_Calc_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &LATC_Test_Calc_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &LATC_Test_Calc_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &LATC_Test_Calc_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &LATC_Test_Calc_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &LATC_Test_Calc_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &LATC_Test_Calc_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &LATC_Test_Calc_M->solverInfoPtr);
  }

  LATC_Test_Calc_M->Sizes.numSFcns = (19);

  /* register each child */
  {
    (void) memset((void *)&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  19*sizeof(SimStruct));
    LATC_Test_Calc_M->childSfunctions =
      (&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 19; i++) {
        LATC_Test_Calc_M->childSfunctions[i] =
          (&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S7>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input8/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled3);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.pooled5);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S1>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_o));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_e));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input1/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled3);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.pooled5);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S2>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_m));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_p));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input2/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled3);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.pooled5);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S3>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_p));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_n));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input4/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled3);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.pooled5);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S4>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_l));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_i));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input5/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_fu);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled3);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.pooled5);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S5>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_k));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_a));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input6/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled3);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.pooled5);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S6>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o1_oa));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_f));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_d0));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input7/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_da);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled3);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.pooled5);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S9>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.iDims0;

          {
            int_T i1;
            const real_T *u0 = LATC_Test_Calc_B.DataTypeConversion;
            for (i1=0; i1 < 40; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 40;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 40);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output1/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled9);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S10>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_j;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output10/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S11>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_m;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output11/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S12>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output12/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_np);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S13>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.iDims0;

          {
            int_T i1;
            const real_T *u0 = LATC_Test_Calc_B.DataTypeConversion_b;
            for (i1=0; i1 < 40; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 40;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 40);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output2/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_a);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled9);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S14>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.iDims0;

          {
            int_T i1;
            const real_T *u0 = LATC_Test_Calc_B.DataTypeConversion_i1;
            for (i1=0; i1 < 40; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 40;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 40);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output3/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled9);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S15>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.idx;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output4/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S16>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_j3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output5/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_of);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S17>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output6/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_eq);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S18>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_c;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output7/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_dp);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S19>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output8/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_dv);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S20>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output9/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_eu);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.pooled1);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.pooled7);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  LATC_Test_Calc_M->Sizes.numContStates = (0);/* Number of continuous states */
  LATC_Test_Calc_M->Sizes.numY = (0);  /* Number of model outputs */
  LATC_Test_Calc_M->Sizes.numU = (0);  /* Number of model inputs */
  LATC_Test_Calc_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  LATC_Test_Calc_M->Sizes.numSampTimes = (1);/* Number of sample times */
  LATC_Test_Calc_M->Sizes.numBlocks = (46);/* Number of blocks */
  LATC_Test_Calc_M->Sizes.numBlockIO = (33);/* Number of block outputs */
  return LATC_Test_Calc_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
