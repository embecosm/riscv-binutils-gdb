# mach: riscv64

.include "testutils.inc"

  start

  # ld rd, offset(rs1)
  la a1, test_dwords
  ld a0, 40(a1)
  li a1, -6
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_dwords:
  .dword 1, -2, 3, -4, 5, -6, 7, -8
