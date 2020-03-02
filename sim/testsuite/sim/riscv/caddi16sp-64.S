# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.addi16sp sp, imm
  li x2, 1
  c.addi16sp sp, 32
  li a1, 33
  bne x2, a1, .Lfailure

  pass
.Lfailure:
  fail
