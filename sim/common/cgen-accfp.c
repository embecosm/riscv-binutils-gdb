/* Accurate fp support for CGEN-based simulators.
   Copyright (C) 1999 Cygnus Solutions.

   This implemention assumes:
   typedef USI SF;
   typedef UDI DF;

   TODO:
   - lazy encoding/decoding
   - checking return code (say by callback)
   - proper rounding
*/

#include "sim-main.h"
#include "sim-fpu.h"

/* SF mode support */

static SF
addsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  sim_fpu_round_bias ans_round_bias;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_add (&ans, &ans_round_bias, (*fpu->ops->rounding_mode) (fpu),
                        &op1, &op2);
  status |= sim_fpu_round_32 (&ans, ans_round_bias,
                              (*fpu->ops->rounding_mode) (fpu),
                              sim_fpu_denorm_default);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
subsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  sim_fpu_round_bias ans_round_bias;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_sub (&ans, &ans_round_bias, (*fpu->ops->rounding_mode) (fpu),
                        &op1, &op2);
  status |= sim_fpu_round_32 (&ans, ans_round_bias,
                              (*fpu->ops->rounding_mode) (fpu),
                              sim_fpu_denorm_default);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
mulsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_mul (&ans, &op1, &op2);
  status |= sim_fpu_round_32 (&ans, sim_fpu_round_bias_none,
                              (*fpu->ops->rounding_mode) (fpu),
                              sim_fpu_denorm_default);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
divsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_div (&ans, &op1, &op2);
  status |= sim_fpu_round_32 (&ans, sim_fpu_round_bias_none,
                              (*fpu->ops->rounding_mode) (fpu),
                              sim_fpu_denorm_default);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
remsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_rem (&ans, &op1, &op2);
  status |= sim_fpu_round_32 (&ans, sim_fpu_round_bias_none,
                              (*fpu->ops->rounding_mode) (fpu),
                              sim_fpu_denorm_default);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
negsf (CGEN_FPU* fpu, SF x)
{
  sim_fpu op1;
  sim_fpu ans;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  status = sim_fpu_neg (&ans, &op1);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
abssf (CGEN_FPU* fpu, SF x)
{
  sim_fpu op1;
  sim_fpu ans;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  status = sim_fpu_abs (&ans, &op1);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
sqrtsf (CGEN_FPU* fpu, SF x)
{
  sim_fpu op1;
  sim_fpu ans;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  status = sim_fpu_sqrt (&ans, &op1);
  status |= sim_fpu_round_32 (&ans, sim_fpu_round_bias_none,
                              (*fpu->ops->rounding_mode) (fpu),
                              sim_fpu_denorm_default);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
muladdsf (CGEN_FPU* fpu, SF x, SF y, SF z)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu op3;
  sim_fpu tmp;
  sim_fpu ans;
  sim_fpu_round_bias ans_round_bias;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  sim_fpu_32to (&op3, z);

  status = sim_fpu_mul (&tmp, &op1, &op2);

  /* Clear the inexact, overflow and underflow flags.  */
  status &= ~(sim_fpu_status_overflow
              | sim_fpu_status_underflow
              | sim_fpu_status_inexact);

  status |= sim_fpu_add (&ans, &ans_round_bias,
                         (*fpu->ops->rounding_mode) (fpu), &tmp, &op3);
  status |= sim_fpu_round_32 (&ans, ans_round_bias,
                              (*fpu->ops->rounding_mode) (fpu),
                              sim_fpu_denorm_default);

  /* If the add result was inexact and we have a subnormal number as a
     result, then this is an underflow condition.  */
  unsigned64 denorm_inexact_flags = sim_fpu_status_denorm
                                    | sim_fpu_status_inexact;
  if ((status & denorm_inexact_flags) == denorm_inexact_flags)
    status |= sim_fpu_status_underflow;

  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
invsf (CGEN_FPU* fpu, SF x)
{
  sim_fpu op1;
  sim_fpu ans;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  status = sim_fpu_inv (&ans, &op1);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
minsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_min (&ans, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static SF
maxsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned32 res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_max (&ans, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to32 (&res, &ans);

  return res;
}

static CGEN_FP_CMP
cmpsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);

  if (sim_fpu_is_nan (&op1)
      || sim_fpu_is_nan (&op2))
    return FP_CMP_NAN;

  if (x < y)
    return FP_CMP_LT;
  if (x > y)
    return FP_CMP_GT;
  return FP_CMP_EQ;
}

/* FIXME: The below float comparison operations default to either signalling
   (for ltsf, lesf, gtsf gesf) or non-signalling (for eqsf and nesf) based
   on the behaviour of RISC-V instructions. In reality this should be
   configurable and there should be some way of specifying the desired
   behaviour for the RTL for the semantics in the CPU description.  */

static int
eqsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  /* Equality and inequality checks are non-signalling.  */
  sim_fpu_eq (&res, &op1, &op2);
  return res;
}

static int
nesf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  /* Equality and inequality checks are non-signalling.  */
  sim_fpu_ne (&res, &op1, &op2);
  return res;
}

static int
ltsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_lt (&res, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  return res;
}

static int
lesf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_le (&res, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  return res;
}

static int
gtsf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_gt (&res, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  return res;
}

static int
gesf (CGEN_FPU* fpu, SF x, SF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;
  sim_fpu_status status;

  sim_fpu_32to (&op1, x);
  sim_fpu_32to (&op2, y);
  status = sim_fpu_ge (&res, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  return res;
}

static DF
fextsfdf (CGEN_FPU* fpu, int how UNUSED, SF x)
{
  sim_fpu op1;
  unsigned64 res;

  sim_fpu_32to (&op1, x);
  sim_fpu_to64 (&res, &op1);

  return res;
}

static SF
ftruncdfsf (CGEN_FPU* fpu, int how UNUSED, DF x)
{
  sim_fpu op1;
  unsigned32 res;

  sim_fpu_64to (&op1, x);
  sim_fpu_to32 (&res, &op1);

  return res;
}

static SF
floatsisf (CGEN_FPU* fpu, int how UNUSED, SI x)
{
  sim_fpu ans;
  unsigned32 res;

  sim_fpu_i32to (&ans, x, sim_fpu_round_near);
  sim_fpu_to32 (&res, &ans);
  return res;
}

static DF
floatsidf (CGEN_FPU* fpu, int how UNUSED, SI x)
{
  sim_fpu ans;
  unsigned64 res;

  sim_fpu_i32to (&ans, x, sim_fpu_round_near);
  sim_fpu_to64 (&res, &ans);
  return res;
}

static SF
ufloatsisf (CGEN_FPU* fpu, int how UNUSED, USI x)
{
  sim_fpu ans;
  unsigned32 res;

  sim_fpu_u32to (&ans, x, sim_fpu_round_near);
  sim_fpu_to32 (&res, &ans);
  return res;
}

static DF
ufloatsidf (CGEN_FPU* fpu, int how UNUSED, USI x)
{
  sim_fpu ans;
  unsigned64 res;

  sim_fpu_u32to (&ans, x, sim_fpu_round_near);
  sim_fpu_to64 (&res, &ans);
  return res;
}

static DF
ufloatdidf (CGEN_FPU* fpu, int how UNUSED, UDI x)
{
  sim_fpu ans;
  unsigned64 res;

  sim_fpu_u64to (&ans, x, sim_fpu_round_near);
  sim_fpu_to64 (&res, &ans);
  return res;
}

static SI
fixsfsi (CGEN_FPU* fpu, int how UNUSED, SF x)
{
  sim_fpu op1;
  unsigned32 res;

  sim_fpu_32to (&op1, x);
  sim_fpu_to32i (&res, &op1, sim_fpu_round_near);
  return res;
}

static DI
fixsfdi (CGEN_FPU* fpu, int how UNUSED, SF x)
{
  sim_fpu op1;
  unsigned64 res;

  sim_fpu_32to (&op1, x);
  sim_fpu_to64i (&res, &op1, sim_fpu_round_near);
  return res;
}

static SI
fixdfsi (CGEN_FPU* fpu, int how UNUSED, DF x)
{
  sim_fpu op1;
  unsigned32 res;

  sim_fpu_64to (&op1, x);
  sim_fpu_to32i (&res, &op1, sim_fpu_round_near);
  return res;
}

static USI
ufixsfsi (CGEN_FPU* fpu, int how UNUSED, SF x)
{
  sim_fpu op1;
  unsigned32 res;

  sim_fpu_32to (&op1, x);
  sim_fpu_to32u (&res, &op1, sim_fpu_round_near);
  return res;
}

static UDI
ufixsfdi (CGEN_FPU* fpu, int how UNUSED, SF x)
{
  sim_fpu op1;
  unsigned64 res;

  sim_fpu_32to (&op1, x);
  sim_fpu_to64u (&res, &op1, sim_fpu_round_near);
  return res;
}

static USI
ufixdfsi (CGEN_FPU* fpu, int how UNUSED, DF x)
{
  sim_fpu op1;
  unsigned32 res;

  sim_fpu_64to (&op1, x);
  sim_fpu_to32u (&res, &op1, sim_fpu_round_near);
  return res;
}

/* DF mode support */

static DF
adddf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  sim_fpu_round_bias ans_round_bias;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_add (&ans, &ans_round_bias,
                        (*fpu->ops->rounding_mode) (fpu), &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static DF
subdf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  sim_fpu_round_bias ans_round_bias;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_sub (&ans, &ans_round_bias, (*fpu->ops->rounding_mode) (fpu),
                        &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static DF
muldf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_mul (&ans, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static DF
divdf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_div (&ans, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static DF
remdf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_rem (&ans, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64(&res, &ans);

  return res;
}

static DF
negdf (CGEN_FPU* fpu, DF x)
{
  sim_fpu op1;
  sim_fpu ans;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  status = sim_fpu_neg (&ans, &op1);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static DF
absdf (CGEN_FPU* fpu, DF x)
{
  sim_fpu op1;
  sim_fpu ans;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  status = sim_fpu_abs (&ans, &op1);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static DF
sqrtdf (CGEN_FPU* fpu, DF x)
{
  sim_fpu op1;
  sim_fpu ans;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  status = sim_fpu_sqrt (&ans, &op1);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static DF
invdf (CGEN_FPU* fpu, DF x)
{
  sim_fpu op1;
  sim_fpu ans;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  status = sim_fpu_inv (&ans, &op1);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static DF
mindf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_min (&ans, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static DF
maxdf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  sim_fpu ans;
  unsigned64 res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_max (&ans, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  sim_fpu_to64 (&res, &ans);

  return res;
}

static CGEN_FP_CMP
cmpdf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);

  if (sim_fpu_is_nan (&op1)
      || sim_fpu_is_nan (&op2))
    return FP_CMP_NAN;

  if (x < y)
    return FP_CMP_LT;
  if (x > y)
    return FP_CMP_GT;
  return FP_CMP_EQ;
}

/* FIXME: The below double comparison operations default to either signalling
   (for ltdf, ledf, gtdf gedf) or non-signalling (for eqdf and nedf) based
   on the behaviour of RISC-V instructions. In reality this should be
   configurable and there should be some way of specifying the desired
   behaviour for the RTL for the semantics in the CPU description.  */

static int
eqdf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  /* Equality and inequality checks are non-signalling.  */
  sim_fpu_eq (&res, &op1, &op2);
  return res;
}

static int
nedf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  /* Equality and inequality checks are non-signalling.  */
  sim_fpu_ne (&res, &op1, &op2);
  return res;
}

static int
ltdf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_lt (&res, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  return res;
}

static int
ledf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_le (&res, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  return res;
}

static int
gtdf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_gt (&res, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  return res;
}

static int
gedf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;
  int res;
  sim_fpu_status status;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  status = sim_fpu_ge (&res, &op1, &op2);
  if (status != 0)
    (*fpu->ops->error) (fpu, status);
  return res;
}

static int
unordereddf (CGEN_FPU* fpu, DF x, DF y)
{
  sim_fpu op1;
  sim_fpu op2;

  sim_fpu_64to (&op1, x);
  sim_fpu_64to (&op2, y);
  return sim_fpu_is_nan (&op1) || sim_fpu_is_nan (&op2);
}

/* Initialize FP_OPS to use accurate library.  */

void
cgen_init_accurate_fpu (SIM_CPU* cpu, CGEN_FPU* fpu, CGEN_FPU_ERROR_FN* error,
                        CGEN_FPU_ROUNDING_MODE_FN* rounding_mode)
{
  CGEN_FP_OPS* o;

  fpu->owner = cpu;
  /* ??? small memory leak, not freed by sim_close */
  fpu->ops = (CGEN_FP_OPS*) xmalloc (sizeof (CGEN_FP_OPS));

  o = fpu->ops;
  memset (o, 0, sizeof (*o));

  o->error = error;
  o->rounding_mode = rounding_mode;

  o->addsf = addsf;
  o->subsf = subsf;
  o->mulsf = mulsf;
  o->divsf = divsf;
  o->remsf = remsf;
  o->negsf = negsf;
  o->abssf = abssf;
  o->sqrtsf = sqrtsf;
  o->muladdsf = muladdsf;
  o->invsf = invsf;
  o->minsf = minsf;
  o->maxsf = maxsf;
  o->cmpsf = cmpsf;
  o->eqsf = eqsf;
  o->nesf = nesf;
  o->ltsf = ltsf;
  o->lesf = lesf;
  o->gtsf = gtsf;
  o->gesf = gesf;

  o->adddf = adddf;
  o->subdf = subdf;
  o->muldf = muldf;
  o->divdf = divdf;
  o->remdf = remdf;
  o->negdf = negdf;
  o->absdf = absdf;
  o->sqrtdf = sqrtdf;
  o->invdf = invdf;
  o->mindf = mindf;
  o->maxdf = maxdf;
  o->cmpdf = cmpdf;
  o->eqdf = eqdf;
  o->nedf = nedf;
  o->ltdf = ltdf;
  o->ledf = ledf;
  o->gtdf = gtdf;
  o->gedf = gedf;
  o->fextsfdf = fextsfdf;
  o->ftruncdfsf = ftruncdfsf;
  o->floatsisf = floatsisf;
  o->floatsidf = floatsidf;
  o->ufloatsisf = ufloatsisf;
  o->ufloatsidf = ufloatsidf;
  o->ufloatdidf = ufloatdidf;
  o->fixsfsi = fixsfsi;
  o->fixsfdi = fixsfdi;
  o->fixdfsi = fixdfsi;
  o->ufixsfsi = ufixsfsi;
  o->ufixsfdi = ufixsfdi;
  o->ufixdfsi = ufixdfsi;
}
