# mach: riscv64

.include "testutils.inc"

  start

  # slliw rd, rs1, shamt
  li a0, 1
  slliw a0, a0, 5
  li a1, 32
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
