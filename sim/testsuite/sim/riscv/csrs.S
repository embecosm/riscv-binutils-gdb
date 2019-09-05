# mach: riscv

.include "testutils.inc"

  start

  # csrs csr, rs1
  li a0, 1
  csrs misa, a0

  pass
.Lfailure:
  fail
