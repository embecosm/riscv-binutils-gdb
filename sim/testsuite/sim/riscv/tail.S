# mach: riscv

.include "testutils.inc"

  start

  # tail symbol
  tail .Ltail1
  fail
.Ltail1:

  pass
.Lfailure:
  fail
