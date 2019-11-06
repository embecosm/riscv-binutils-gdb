# mach: riscv

.include "testutils.inc"

  start

  # csrrs rd, csr, rs1
  li a1, 1
  csrrs a0, misa, a1

  pass
.Lfailure:
  fail
