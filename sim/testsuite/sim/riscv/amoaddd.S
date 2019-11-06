# mach: riscv64
# as: -march=rv64ia

.include "testutils.inc"

  start

  # amoadd.d rd, rs2, (rs1)
  li a1, 3
  la a2, test_dword1
  amoadd.d a0, a1, (a2)
  li a1, -4
  bne a0, a1, .Lfailure
  ld a0, (a2)
  li a1, -1
  bne a0, a1, .Lfailure
  li a1, -3
  la a2, test_dword2
  amoadd.d a0, a1, (a2)
  li a1, 5
  bne a0, a1, .Lfailure
  ld a0, (a2)
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_dword1:
  .dword -4
test_dword2:
  .dword 5
