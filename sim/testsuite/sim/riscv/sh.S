# mach: riscv

.include "testutils.inc"

  start

  # sh rs2, offset(rs1)
  li a0, 5
  la a1, test_hword_buffer
  sh a0, 6(a1)
  lh a2, 6(a1)
  bne a0, a2, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_hword_buffer:
  .skip 16, 0
