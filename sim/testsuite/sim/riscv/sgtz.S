# mach: riscv

.include "testutils.inc"

  start

  # sgtz rd,rs2
  li a1, 0
  sgtz a0, a1
  bne a0, a1, .Lfailure
  li a1, 1
  sgtz a0, a1
  bne a0, a1, .Lfailure
  li a1, -1
  sgtz a0, a1
  li a1, 0
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
