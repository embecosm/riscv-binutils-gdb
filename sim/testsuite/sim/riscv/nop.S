# mach: riscv

.include "testutils.inc"

  start

  # nop
  nop

  pass
.Lfailure:
  fail
