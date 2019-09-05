# mach: riscv

.include "testutils.inc"

  start

  # sc.w rd, rs2, (rs1)
  li a1, 5
  la a2, test_word
  sc.w a0, a1, (a2)
  li a1, 0
  beq a0, a1, .Lfailure
  lw a0, (a2)
  li a1, 0
  bne a0, a1, .Lfailure
 
  lr.w a0, (a2)
  li a1, 0
  bne a0, a1, .Lfailure

  li a1, 5
  sc.w a0, a1, (a2)
  li a1, 0
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, 5
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_word:
  .word 0
