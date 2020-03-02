# mach: riscv64

.include "testutils.inc"

  start

  # addw rd, rs1, rs2
  li a0, 1
  li a1, 1
  addw a0, a0, a1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
