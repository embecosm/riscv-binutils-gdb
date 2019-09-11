# mach: riscv32

.include "testutils.inc"

  start

  # csrr rd, csr
  # Test for XLEN = 32
  csrr a0, misa
  li a1, 0x3
  li a2, 0x1
  slli a1, a1, 30
  slli a2, a2, 30
  and a0, a0, a1
  bne a0, a2, .Lfailure

  pass
.Lfailure:
  fail
