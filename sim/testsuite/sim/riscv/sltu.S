# mach: riscv

.include "testutils.inc"

  start

  # sltu rd, rs1, rs2
  li a0, 2
  li a1, 2
  sltu a0, a0, a1
  li a1, 0
  bne a0, a1, .Lfailure
  li a0, 2
  li a1, 3
  sltu a0, a0, a1
  li a1, 1
  bne a0, a1, .Lfailure
  li a0, 2
  li a1, 1
  sltu a0, a0, a1
  li a1, 0
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
