/*
 * mpower_1Vv6hBEw.c
 *
 * Code generation for model "PubIfControlLATC_MDL".
 *
 * Model version              : 3.732
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:23 2022
 * Created for block: PubIfControlLATC_MDL
 */

#include "rtwtypes.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "inv_ryMcGK7i.h"
#include "mpower_1Vv6hBEw.h"

/* Function for MATLAB Function: '<S42>/TarSteerAngleCalc' */
void mpower_1Vv6hBEw(const real32_T a[9], real32_T b, real32_T c[9])
{
  int32_T b_n;
  int32_T exitg1;
  int32_T i;
  int32_T n;
  int32_T nb;
  int32_T nbitson;
  real32_T aBuffer[9];
  real32_T b_a[9];
  real32_T cBuffer[9];
  real32_T cBuffer_0[9];
  real32_T c_0[9];
  real32_T cBuffer_1;
  real32_T e;
  real32_T ed2;
  boolean_T aBufferInUse;
  boolean_T firstmult;
  boolean_T lsb;
  if (b == b) {
    firstmult = (fabsf(b) < 2.14748365E+9F);
    if (firstmult) {
      for (nbitson = 0; nbitson < 9; nbitson++) {
        b_a[nbitson] = a[nbitson];
      }

      e = fabsf(b);
      n = (int32_T)fabsf(b);
      b_n = (int32_T)e;
      nbitson = 0;
      nb = -2;
      while (b_n > 0) {
        nb++;
        if ((b_n & 1U) != 0U) {
          nbitson++;
        }

        b_n >>= 1;
      }

      if ((int32_T)e <= 2) {
        if (b == 2.0F) {
          for (nbitson = 0; nbitson < 3; nbitson++) {
            for (i = 0; i < 3; i++) {
              c[i + 3 * nbitson] = 0.0F;
              e = c[3 * nbitson + i];
              e += a[3 * nbitson] * a[i];
              c[i + 3 * nbitson] = e;
              e = c[3 * nbitson + i];
              e += a[3 * nbitson + 1] * a[i + 3];
              c[i + 3 * nbitson] = e;
              e = c[3 * nbitson + i];
              e += a[3 * nbitson + 2] * a[i + 6];
              c[i + 3 * nbitson] = e;
            }
          }
        } else if (b == 1.0F) {
          for (nbitson = 0; nbitson < 9; nbitson++) {
            c[nbitson] = a[nbitson];
          }
        } else if (b == -1.0F) {
          inv_ryMcGK7i(a, c);
        } else if (b == -2.0F) {
          for (nbitson = 0; nbitson < 3; nbitson++) {
            for (i = 0; i < 3; i++) {
              b_a[i + 3 * nbitson] = 0.0F;
              e = b_a[3 * nbitson + i];
              e += a[3 * nbitson] * a[i];
              b_a[i + 3 * nbitson] = e;
              e = b_a[3 * nbitson + i];
              e += a[3 * nbitson + 1] * a[i + 3];
              b_a[i + 3 * nbitson] = e;
              e = b_a[3 * nbitson + i];
              e += a[3 * nbitson + 2] * a[i + 6];
              b_a[i + 3 * nbitson] = e;
            }
          }

          inv_ryMcGK7i(b_a, c);
        } else {
          for (nbitson = 0; nbitson < 9; nbitson++) {
            c[nbitson] = 0.0F;
          }

          c[0] = 1.0F;
          c[4] = 1.0F;
          c[8] = 1.0F;
        }
      } else {
        aBufferInUse = false;
        lsb = ((nbitson & 1U) != 0U);
        lsb = ((lsb && (b < 0.0F)) || ((!lsb) && (b >= 0.0F)));
        for (b_n = 0; b_n <= nb; b_n++) {
          if ((n & 1U) != 0U) {
            if (firstmult) {
              firstmult = false;
              if (lsb) {
                for (nbitson = 0; nbitson < 9; nbitson++) {
                  if (aBufferInUse) {
                    cBuffer[nbitson] = aBuffer[nbitson];
                  } else {
                    cBuffer[nbitson] = b_a[nbitson];
                  }
                }
              } else {
                for (nbitson = 0; nbitson < 9; nbitson++) {
                  if (aBufferInUse) {
                    c[nbitson] = aBuffer[nbitson];
                  } else {
                    c[nbitson] = b_a[nbitson];
                  }
                }
              }
            } else {
              if (aBufferInUse) {
                if (lsb) {
                  for (nbitson = 0; nbitson < 3; nbitson++) {
                    for (i = 0; i < 3; i++) {
                      c[nbitson + 3 * i] = 0.0F;
                      e = c[3 * i + nbitson];
                      e += aBuffer[3 * i] * cBuffer[nbitson];
                      c[nbitson + 3 * i] = e;
                      e = c[3 * i + nbitson];
                      e += aBuffer[3 * i + 1] * cBuffer[nbitson + 3];
                      c[nbitson + 3 * i] = e;
                      e = c[3 * i + nbitson];
                      e += aBuffer[3 * i + 2] * cBuffer[nbitson + 6];
                      c[nbitson + 3 * i] = e;
                    }
                  }
                } else {
                  for (nbitson = 0; nbitson < 3; nbitson++) {
                    for (i = 0; i < 3; i++) {
                      cBuffer[nbitson + 3 * i] = 0.0F;
                      e = cBuffer[3 * i + nbitson];
                      e += aBuffer[3 * i] * c[nbitson];
                      cBuffer[nbitson + 3 * i] = e;
                      e = cBuffer[3 * i + nbitson];
                      e += aBuffer[3 * i + 1] * c[nbitson + 3];
                      cBuffer[nbitson + 3 * i] = e;
                      e = cBuffer[3 * i + nbitson];
                      e += aBuffer[3 * i + 2] * c[nbitson + 6];
                      cBuffer[nbitson + 3 * i] = e;
                    }
                  }
                }
              } else if (lsb) {
                for (nbitson = 0; nbitson < 3; nbitson++) {
                  for (i = 0; i < 3; i++) {
                    c[nbitson + 3 * i] = 0.0F;
                    e = c[3 * i + nbitson];
                    e += b_a[3 * i] * cBuffer[nbitson];
                    c[nbitson + 3 * i] = e;
                    e = c[3 * i + nbitson];
                    e += b_a[3 * i + 1] * cBuffer[nbitson + 3];
                    c[nbitson + 3 * i] = e;
                    e = c[3 * i + nbitson];
                    e += b_a[3 * i + 2] * cBuffer[nbitson + 6];
                    c[nbitson + 3 * i] = e;
                  }
                }
              } else {
                for (nbitson = 0; nbitson < 3; nbitson++) {
                  for (i = 0; i < 3; i++) {
                    cBuffer[nbitson + 3 * i] = 0.0F;
                    e = cBuffer[3 * i + nbitson];
                    e += b_a[3 * i] * c[nbitson];
                    cBuffer[nbitson + 3 * i] = e;
                    e = cBuffer[3 * i + nbitson];
                    e += b_a[3 * i + 1] * c[nbitson + 3];
                    cBuffer[nbitson + 3 * i] = e;
                    e = cBuffer[3 * i + nbitson];
                    e += b_a[3 * i + 2] * c[nbitson + 6];
                    cBuffer[nbitson + 3 * i] = e;
                  }
                }
              }

              lsb = !lsb;
            }
          }

          n >>= 1;
          if (aBufferInUse) {
            for (nbitson = 0; nbitson < 3; nbitson++) {
              for (i = 0; i < 3; i++) {
                b_a[nbitson + 3 * i] = 0.0F;
                ed2 = b_a[3 * i + nbitson];
                ed2 += aBuffer[3 * i] * aBuffer[nbitson];
                b_a[nbitson + 3 * i] = ed2;
                ed2 = b_a[3 * i + nbitson];
                ed2 += aBuffer[3 * i + 1] * aBuffer[nbitson + 3];
                b_a[nbitson + 3 * i] = ed2;
                ed2 = b_a[3 * i + nbitson];
                ed2 += aBuffer[3 * i + 2] * aBuffer[nbitson + 6];
                b_a[nbitson + 3 * i] = ed2;
              }
            }
          } else {
            for (nbitson = 0; nbitson < 3; nbitson++) {
              for (i = 0; i < 3; i++) {
                aBuffer[nbitson + 3 * i] = 0.0F;
                e = aBuffer[3 * i + nbitson];
                e += b_a[3 * i] * b_a[nbitson];
                aBuffer[nbitson + 3 * i] = e;
                e = aBuffer[3 * i + nbitson];
                e += b_a[3 * i + 1] * b_a[nbitson + 3];
                aBuffer[nbitson + 3 * i] = e;
                e = aBuffer[3 * i + nbitson];
                e += b_a[3 * i + 2] * b_a[nbitson + 6];
                aBuffer[nbitson + 3 * i] = e;
              }
            }
          }

          aBufferInUse = !aBufferInUse;
        }

        if (firstmult) {
          inv_ryMcGK7i(aBuffer, cBuffer);
          inv_ryMcGK7i(b_a, c_0);
          firstmult = (b < 0.0F);
          for (nbitson = 0; nbitson < 9; nbitson++) {
            if (firstmult) {
              if (aBufferInUse) {
                c[nbitson] = cBuffer[nbitson];
              } else {
                c[nbitson] = c_0[nbitson];
              }
            } else if (aBufferInUse) {
              c[nbitson] = aBuffer[nbitson];
            } else {
              c[nbitson] = b_a[nbitson];
            }
          }
        } else if (b < 0.0F) {
          for (nbitson = 0; nbitson < 3; nbitson++) {
            for (i = 0; i < 3; i++) {
              c_0[i + 3 * nbitson] = 0.0F;
              cBuffer_0[i + 3 * nbitson] = 0.0F;
              e = cBuffer_0[3 * nbitson + i];
              ed2 = c[i];
              cBuffer_1 = c_0[3 * nbitson + i];
              cBuffer_1 += aBuffer[3 * nbitson] * ed2;
              e += b_a[3 * nbitson] * ed2;
              c_0[i + 3 * nbitson] = cBuffer_1;
              cBuffer_0[i + 3 * nbitson] = e;
              e = cBuffer_0[3 * nbitson + i];
              ed2 = c[i + 3];
              cBuffer_1 = c_0[3 * nbitson + i];
              cBuffer_1 += aBuffer[3 * nbitson + 1] * ed2;
              e += b_a[3 * nbitson + 1] * ed2;
              c_0[i + 3 * nbitson] = cBuffer_1;
              cBuffer_0[i + 3 * nbitson] = e;
              e = cBuffer_0[3 * nbitson + i];
              ed2 = c[i + 6];
              cBuffer_1 = c_0[3 * nbitson + i];
              cBuffer_1 += aBuffer[3 * nbitson + 2] * ed2;
              e += b_a[3 * nbitson + 2] * ed2;
              c_0[i + 3 * nbitson] = cBuffer_1;
              cBuffer_0[i + 3 * nbitson] = e;
            }
          }

          for (nbitson = 0; nbitson < 9; nbitson++) {
            if (aBufferInUse) {
              cBuffer[nbitson] = c_0[nbitson];
            } else {
              cBuffer[nbitson] = cBuffer_0[nbitson];
            }
          }

          inv_ryMcGK7i(cBuffer, c);
        } else {
          for (nbitson = 0; nbitson < 3; nbitson++) {
            for (i = 0; i < 3; i++) {
              c_0[i + 3 * nbitson] = 0.0F;
              cBuffer_0[i + 3 * nbitson] = 0.0F;
              e = cBuffer_0[3 * nbitson + i];
              ed2 = cBuffer[i];
              cBuffer_1 = c_0[3 * nbitson + i];
              cBuffer_1 += aBuffer[3 * nbitson] * ed2;
              e += b_a[3 * nbitson] * ed2;
              c_0[i + 3 * nbitson] = cBuffer_1;
              cBuffer_0[i + 3 * nbitson] = e;
              e = cBuffer_0[3 * nbitson + i];
              ed2 = cBuffer[i + 3];
              cBuffer_1 = c_0[3 * nbitson + i];
              cBuffer_1 += aBuffer[3 * nbitson + 1] * ed2;
              e += b_a[3 * nbitson + 1] * ed2;
              c_0[i + 3 * nbitson] = cBuffer_1;
              cBuffer_0[i + 3 * nbitson] = e;
              e = cBuffer_0[3 * nbitson + i];
              ed2 = cBuffer[i + 6];
              cBuffer_1 = c_0[3 * nbitson + i];
              cBuffer_1 += aBuffer[3 * nbitson + 2] * ed2;
              e += b_a[3 * nbitson + 2] * ed2;
              c_0[i + 3 * nbitson] = cBuffer_1;
              cBuffer_0[i + 3 * nbitson] = e;
            }
          }

          for (nbitson = 0; nbitson < 9; nbitson++) {
            if (aBufferInUse) {
              c[nbitson] = c_0[nbitson];
            } else {
              c[nbitson] = cBuffer_0[nbitson];
            }
          }
        }
      }
    } else {
      for (nbitson = 0; nbitson < 9; nbitson++) {
        b_a[nbitson] = a[nbitson];
      }

      if (!rtIsNaNF(b)) {
        e = fabsf(b);
        firstmult = true;
        do {
          exitg1 = 0;
          ed2 = floorf(e / 2.0F);
          if (2.0F * ed2 != e) {
            if (firstmult) {
              for (nbitson = 0; nbitson < 9; nbitson++) {
                c[nbitson] = b_a[nbitson];
              }

              firstmult = false;
            } else {
              for (nbitson = 0; nbitson < 3; nbitson++) {
                for (i = 0; i < 3; i++) {
                  c_0[nbitson + 3 * i] = 0.0F;
                  e = c_0[3 * i + nbitson];
                  e += b_a[3 * i] * c[nbitson];
                  c_0[nbitson + 3 * i] = e;
                  e = c_0[3 * i + nbitson];
                  e += b_a[3 * i + 1] * c[nbitson + 3];
                  c_0[nbitson + 3 * i] = e;
                  e = c_0[3 * i + nbitson];
                  e += b_a[3 * i + 2] * c[nbitson + 6];
                  c_0[nbitson + 3 * i] = e;
                }
              }

              for (nbitson = 0; nbitson < 9; nbitson++) {
                c[nbitson] = c_0[nbitson];
              }
            }
          }

          if (ed2 == 0.0F) {
            exitg1 = 1;
          } else {
            e = ed2;
            for (nbitson = 0; nbitson < 3; nbitson++) {
              for (i = 0; i < 3; i++) {
                aBuffer[nbitson + 3 * i] = 0.0F;
                ed2 = aBuffer[3 * i + nbitson];
                ed2 += b_a[3 * i] * b_a[nbitson];
                aBuffer[nbitson + 3 * i] = ed2;
                ed2 = aBuffer[3 * i + nbitson];
                ed2 += b_a[3 * i + 1] * b_a[nbitson + 3];
                aBuffer[nbitson + 3 * i] = ed2;
                ed2 = aBuffer[3 * i + nbitson];
                ed2 += b_a[3 * i + 2] * b_a[nbitson + 6];
                aBuffer[nbitson + 3 * i] = ed2;
              }
            }

            for (nbitson = 0; nbitson < 9; nbitson++) {
              b_a[nbitson] = aBuffer[nbitson];
            }
          }
        } while (exitg1 == 0);

        if (b < 0.0F) {
          for (i = 0; i < 9; i++) {
            c_0[i] = c[i];
          }

          inv_ryMcGK7i(c_0, c);
        }
      } else {
        for (nbitson = 0; nbitson < 9; nbitson++) {
          c[nbitson] = (rtNaNF);
        }
      }
    }
  } else {
    for (nbitson = 0; nbitson < 9; nbitson++) {
      c[nbitson] = (rtNaNF);
    }
  }
}
