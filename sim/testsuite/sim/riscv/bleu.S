# mach: riscv

.include "testutils.inc"

  start

  # bleu rs1, rs2, offset
  li a0, 2
  li a1, 2
  bleu a0, a1, .Lbleu1
  fail
.Lbleu1:
  li a0, 3
  bleu a0, a1, .Lfailure
  li a0, 1
  bleu a0, a1, .Lbleu2
  fail
.Lbleu2:

  pass
.Lfailure:
  fail
