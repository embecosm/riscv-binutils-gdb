# mach: riscv

.include "testutils.inc"

  start

  # ori rd, rs1, imm
  li a0, 3
  ori a0, a0, 6
  li a1, 7
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
