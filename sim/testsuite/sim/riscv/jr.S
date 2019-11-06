# mach: riscv

.include "testutils.inc"

  start

  # jr rs1
  la a0, .Ljr1
  jr a0
  fail
.Ljr1:

  pass
.Lfailure:
  fail
