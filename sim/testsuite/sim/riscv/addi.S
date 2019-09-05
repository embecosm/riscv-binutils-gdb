# mach: riscv

.include "testutils.inc"

  start

  # addi rd, rs1, imm
  li a0, 1
  addi a0, a0, 1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
