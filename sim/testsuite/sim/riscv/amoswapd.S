# mach: riscv64
# as: -march=rv64ia

.include "testutils.inc"

  start

  # amoswap.d rd, rs2, (rs1)
  li a1, 8
  la a2, test_dword1
  amoswap.d a0, a1, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, 8
  bne a0, a1, .Lfailure
  li a1, -2
  la a2, test_dword2
  amoswap.d a0, a1, (a2)
  li a1, -4
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, -2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_dword1:
  .dword 6
test_dword2:
  .dword -4
