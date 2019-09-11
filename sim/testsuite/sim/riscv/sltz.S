# mach: riscv

.include "testutils.inc"

  start

  # sltz rd, rs1
  li a0, 0
  sltz a0, a0
  li a1, 0
  bne a0, a1, .Lfailure
  li a0, 1
  sltz a0, a0
  bne a0, a1, .Lfailure
  li a0, -1
  sltz a0, a0
  li a1, 1
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
