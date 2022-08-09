/* { dg-require-effective-target arm_v8_1m_mve_fp_ok } */
/* { dg-add-options arm_v8_1m_mve_fp } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"
float32x4_t
foo1 (float32x4_t a, float32x4_t b, float32_t c, mve_pred16_t p)
{
  return vfmasq_m (a, b, 23.23, p);
}

/* { dg-final { scan-assembler-not "__ARM_undef" } } */