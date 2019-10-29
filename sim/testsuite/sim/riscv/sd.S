# mach: riscv64

.include "testutils.inc"

  start

  # sd rs2, offset(rs1)
  li a0, 5
  la a1, test_dword_buffer
  sd a0, 6(a1)
  ld a2, 6(a1)
  bne a0, a2, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_dword_buffer:
  .skip 64, 0
