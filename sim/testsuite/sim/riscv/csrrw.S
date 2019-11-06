# mach: riscv

.include "testutils.inc"

  start

  # csrrw rd, csr, rs1
  li a1, 1
  csrrw a0, misa, a1

  pass
.Lfailure:
  fail
