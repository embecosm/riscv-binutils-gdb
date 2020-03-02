# mach: riscv64

.include "testutils.inc"

  start

  # addiw rd, rs1, imm
  li a0, 1
  addiw a0, a0, 1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
