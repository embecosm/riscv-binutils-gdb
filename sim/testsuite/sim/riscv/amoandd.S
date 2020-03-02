# mach: riscv64
# as: -march=rv64ia

.include "testutils.inc"

  start

  # amoand.d rd, rs2, (rs1)
  li a1, 3
  la a2, test_dword
  amoand.d a0, a1, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  ld a0, (a2)
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_dword:
  .dword 6
