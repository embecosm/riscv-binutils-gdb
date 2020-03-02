# mach: riscv

.include "testutils.inc"

  start

  # call rd, symbol
  call a0, .Lcall2
.Lcall1:
  fail

.Lcall2:
  la a1, .Lcall1
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
