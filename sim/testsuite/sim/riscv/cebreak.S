# mach: riscv

.include "testutils.inc"

  start

  # c.ebreak

  pass
.Lfailure:
  fail
