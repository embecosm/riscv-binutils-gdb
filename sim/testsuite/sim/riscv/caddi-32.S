# mach: riscv32
# as: -march=rv32ic

.include "testutils.inc"

  start

  # c.addi rd, imm
  li a0, 1
  c.addi a0, 1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
