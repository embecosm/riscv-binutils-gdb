# mach: riscv

.include "testutils.inc"

  start

  # csrsi csr, zimm[4:0]
  csrsi misa, 1

  pass
.Lfailure:
  fail
