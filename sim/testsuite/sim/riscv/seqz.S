# mach: riscv

.include "testutils.inc"

  start

  # seqz rd, rs1
  li a1, 0
  seqz a0, a1
  li a1, 1
  bne a0, a1, .Lfailure
  seqz a0, a1
  li a1, 0
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
