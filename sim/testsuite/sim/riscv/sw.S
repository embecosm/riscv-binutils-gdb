# mach: riscv

.include "testutils.inc"

  start

  # sw rs2, offset(rs1)
  li a0, 5
  la a1, test_word_buffer
  sw a0, 6(a1)
  lw a2, 6(a1)
  bne a0, a2, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_word_buffer:
  .skip 32, 0
