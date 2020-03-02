# mach: riscv

.include "testutils.inc"

  start

  # jal rd, offset
  jal a0, .Ljal2
.Ljal1:
  fail
.Ljal2:
  la a1, .Ljal1
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
