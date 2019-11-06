# mach: riscv

.include "testutils.inc"

  start

  # csrrc rd, csr, rs1
  li a1, 1
  csrrc a0, misa, a1

  pass
.Lfailure:
  fail
