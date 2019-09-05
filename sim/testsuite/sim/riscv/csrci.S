# mach: riscv

.include "testutils.inc"

  start

  # csrci csr, zimm[4:0]
  csrci misa, 1

  pass
.Lfailure:
  fail
