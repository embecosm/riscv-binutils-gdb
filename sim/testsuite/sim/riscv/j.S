# mach: riscv

.include "testutils.inc"

  start

  # j offset
  j .Lj1
  fail
.Lj1:

  pass
.Lfailure:
  fail
