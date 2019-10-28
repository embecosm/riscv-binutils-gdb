# mach: riscv64
# as: -march=rv64ia

.include "testutils.inc"

  start

  # amomaxu.w rd, rs2, (rs1)
  li a1, 3
  la a2, test_word1
  amomaxu.w a0, a1, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  li a1, 9
  amomaxu.w a0, a1, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, 9
  bne a0, a1, .Lfailure

  li a1, 6
  la a2, test_word2
  amomaxu.w a0, a1, (a2)
  li a1, -4
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, -4
  bne a0, a1, .Lfailure
  li a1, -2
  amomaxu.w a0, a1, (a2)
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
