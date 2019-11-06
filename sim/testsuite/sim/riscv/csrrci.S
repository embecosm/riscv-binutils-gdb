# mach: riscv

.include "testutils.inc"

  start

  # csrrci rd, csr, zimm[4:0]
  csrrci a0, misa, 1

  pass
.Lfailure:
  fail
