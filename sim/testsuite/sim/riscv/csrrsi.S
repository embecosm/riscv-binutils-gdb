# mach: riscv

.include "testutils.inc"

  start

  # csrrsi rd, csr, zimm[4:0]
  csrrsi a0, misa, 1

  pass
.Lfailure:
  fail
