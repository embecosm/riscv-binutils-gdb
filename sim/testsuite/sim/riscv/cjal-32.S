# mach: riscv32
# as: -march=rv32ic

.include "testutils.inc"

  start

  # c.jal offset
  c.jal .Ljal2
.Ljal1:
  fail
.Ljal2:
  la a1, .Ljal1
  bne x1, a1, .Lfailure

  pass
.Lfailure:
  fail
