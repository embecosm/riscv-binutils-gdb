# mach: riscv

.include "testutils.inc"

  start

  # c.addi4spn rd', imm
  li x2, 1
  c.addi4spn a0, 1
  li a1, 5
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
