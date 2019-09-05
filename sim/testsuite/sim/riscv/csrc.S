# mach: riscv

.include "testutils.inc"

  start

  # csrc csr, rs1
  li a0, 1
  csrc misa, a0

  pass
.Lfailure:
  fail
