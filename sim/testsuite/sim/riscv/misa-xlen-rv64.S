# mach: riscv64

.include "testutils.inc"

  start

  # csrr rd, csr
  # Test for XLEN = 64
  csrr a0, misa
  li a1, 0x3
  li a2, 0x2
  slli a1, a1, 62
  slli a2, a2, 62
  and a0, a0, a1
  bne a0, a2, .Lfailure

  pass
.Lfailure:
  fail
