# mach: riscv

.include "testutils.inc"

  start

  # div rd, rs1, rs2
  li a0, 11
  li a1, 3
  div a0, a0, a1
  li a1, 3
  bne a0, a1, .Lfailure
  li a0, 11
  li a1, -3
  div a0, a0, a1
  li a1, -3
  bne a0, a1, .Lfailure
  li a0, -11
  li a1, 3
  div a0, a0, a1
  li a1, -3
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
