# mach: riscv

.include "testutils.inc"

  start

  # csrw csr, rs1
  li a0, 1
  csrw misa, a0

  pass
.Lfailure:
  fail
