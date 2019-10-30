# mach: riscv64
# as: -march=rv64ia

.include "testutils.inc"

  start

  # lr.d rd, (rs1)
  la a1, test_dword1
  lr.d a0, (a1)
  li a1, 6
  bne a0, a1, .Lfailure
  la a1, test_dword2
  lr.d a0, (a1)
  li a1, -4
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
