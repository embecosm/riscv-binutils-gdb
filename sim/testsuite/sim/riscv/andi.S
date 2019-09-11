# mach: riscv

.include "testutils.inc"

  start

  # andi rd, rs1, imm
  li a0, 3
  andi a0, a0, 6
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
