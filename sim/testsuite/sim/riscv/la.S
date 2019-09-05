# mach: riscv

.include "testutils.inc"

  start

  # la rd, symbol
  la a0, .Lla1
.Lla1:
  la a1, .
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
