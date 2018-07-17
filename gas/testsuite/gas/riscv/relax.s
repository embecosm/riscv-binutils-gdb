  .text
  .global branch
branch:
  beq zero,zero,.L0
  .zero 716
.L0:
  bne t5,sp,.L0
  .zero 1236
  blt x9,x15,.L0
  bge ra,gp,.L1
.L1:
  bltu s10,a2,.L3
.L2:
  .zero 4092
.L3:
  bgeu sp,zero,.L2
  bgt x5,x15,.L5
.L4:
  .zero 4096
.L5:
  ble x1,x1,.L4

  .text
  .global branch_if_zero
branch_if_zero:
  beqz x5,.Llemon
  .zero 272
.Llemon:
  bnez x7,.Llemon
  .zero 4096
  blez x23,.Laubergine
  .zero 82364
.Lhammer:
  bgez x15,.Lpotato
  .zero 1996
.Lpotato:
  bltz x4,.Llemon
  bgtz x0,.Lbranch_if_zero
  .zero 8
.Laubergine:

  .text
  .global branch_range
branch_range:
  beq x5,x8,.Lapple
.Lapple:
  bne x1,x6,.Lapple
  blt x15,x1,.Lbanana
  .zero 4096
.Lbanana:
  bge x26,x4,.Lcabbage
  .zero 4092
.Lcabbage:
  bltu x9,x19,.Ldairy
  .zero 4088
.Ldairy:
  .zero 4100
  bgeu x11,x31,.Ldairy
.Lelephant:
  .zero 4096
  bgt x14,x2,.Lelephant
.Lfrantic:
  .zero 4092
  beqz x15,.Lfrantic
.Lgnome:
  .zero 4088
  bgtz x0,.Lgnome

  .text
  .global branch_across_section
branch_across_section:
  bne x9,x29,branch_target
  .section .potato
  .global branch_target
branch_target:
  beq x1,x5,branch_across_section

  .text
  .global branch_to_weak
branch_to_weak:
  bne x5,x7,weak_target
  .zero 16

  .global weak_target
  .weak weak_target
weak_target:
  nop

  .text
  .global branch_interesting_exprs
branch_interesting_exprs:
  bgtu x6,x24,.
  bleu x31,x12,branch_interesting_exprs+12
  beq x5,x16,.+0x10
