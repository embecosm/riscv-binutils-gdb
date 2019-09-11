# mach: riscv

.include "testutils.inc"

  start

  # amomax.w rd, rs2, (rs1)
  li a1, 3
  la a2, test_word1
  amomax.w a0, a1, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  li a1, 9
  amomax.w a0, a1, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, 9
  bne a0, a1, .Lfailure

  li a1, -6
  la a2, test_word2
  amomax.w a0, a1, (a2)
  li a1, -4
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, -4
  bne a0, a1, .Lfailure
  li a1, -2
  amomax.w a0, a1, (a2)
  li a1, -4
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, -2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_word1:
  .word 6
test_word2:
  .word -4
