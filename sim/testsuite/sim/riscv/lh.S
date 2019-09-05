# mach: riscv

.include "testutils.inc"

  start

  # lh rd, offset(rs1)
  la a1, test_hwords
  lh a0, 10(a1)
  li a1, -6
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_hwords:
  .hword 1, -2, 3, -4, 5, -6, 7, -8
