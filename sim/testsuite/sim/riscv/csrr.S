# mach: riscv

.include "testutils.inc"

  start

  # csrr rd, csr
  # Test for XLEN = 32
  csrr a0, misa
  li a1, 1
  slli a1, a1, 30
  and a0, a0, a1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
