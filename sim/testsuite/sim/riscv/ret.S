# mach: riscv

.include "testutils.inc"

  start

  # ret
  la x1, .Lret1
  ret
  fail
.Lret1:
  pass
