# mach: riscv

.include "testutils.inc"

  start

  # c.swsp rs2, uimm(x2)
  li a0, 5
  la x2, test_word_buffer
  c.swsp a0, 8(x2)
  lw a2, 8(x2)
  bne a0, a2, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_word_buffer:
  .skip 32, 0
