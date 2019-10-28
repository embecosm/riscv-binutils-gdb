# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.addi4spn rd', sp, imm
  li x2, 1
  c.addi4spn a0, sp, 4
  li a1, 5
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
