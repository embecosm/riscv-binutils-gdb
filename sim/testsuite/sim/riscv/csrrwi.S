# mach: riscv

.include "testutils.inc"

  start

  # csrrwi rd, csr, zimm[4:0]
  csrrwi a0, misa, 1

  pass
.Lfailure:
  fail
