# mach: riscv

.include "testutils.inc"

  start

  # csrwi csr, zimm[4:0]
  csrwi misa, 1

  pass
.Lfailure:
  fail
