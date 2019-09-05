# mach: riscv

.include "testutils.inc"

  start

  # sb rs2, offset(rs1)
  li a0, 5
  la a1, test_byte_buffer
  sb a0, 6(a1)
  lb a2, 6(a1)
  bne a0, a2, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_byte_buffer:
  .skip 8, 0
