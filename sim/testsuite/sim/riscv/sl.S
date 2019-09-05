# mach: riscv

.include "testutils.inc"

  start

  # sll rd, rs1, rs2
  li a0, 1
  li a1, 5
  sll a0, a0, a1
  li a1, 32
  bne a0, a1, .Lfailure

  # slli rd, rs1, shamt
  li a0, 1
  slli a0, a0, 5
  li a1, 32
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
