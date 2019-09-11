# mach: riscv

.include "testutils.inc"

  start

  # slt rd, rs1, rs2
  li a0, 0
  li a1, 0
  slt a0, a0, a1
  bne a0, a1, .Lfailure
  li a1, 1
  slt a0, a0, a1
  bne a0, a1, .Lfailure
  li a0, 0
  li a1, -1
  slt a0, a0, a1
  li a1, 0
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
