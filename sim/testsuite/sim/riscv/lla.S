# mach: riscv

.include "testutils.inc"

  start

  # lla rd,symbol
  lla a0, .Llla1
.Llla1:
  la a1, .
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
