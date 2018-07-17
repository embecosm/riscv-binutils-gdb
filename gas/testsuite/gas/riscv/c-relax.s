  # Compressed jump
  .text
  .global c_j
c_j:
  c.j .L0
.L0:
  c.j .L0
  c.j .L2
.L1:
  .zero 716
.L2:
  c.j .L1

  # Boundary conditions
  c.j .L4
.L3:
  .zero 2044
.L4:
  c.j .L3
  c.j .L6
.L5:
  .zero 2046
.L6:
  c.j .L5
  c.j .L8
.L7:
  .zero 2048
.L8:
  c.j .L7
  c.j .L10
.L9:
  .zero 2050
.L10:
  c.j .L9

  # Jump across a section
  .text
  .global c_j_across_section
c_j_across_section:
  c.j branch_target
  .zero 32
  .section .potato
  .global c_j_target
c_j_target:
  c.j c_j_across_section

  # Jump to a weak symbol
  .text
  .global c_j_to_weak_symbol
c_j_to_weak_symbol:
  c.j c_j_weak_target
  .zero 32
  .global c_j_weak_target
  .weak c_j_weak_target
c_j_weak_target:
  nop

  # Interesting expressions
  .text
  .global c_j_interesting_exprs
c_j_interesting_exprs:
  c.j .
  c.j c_j_interesting_exprs+4
  c.j .+0x10

  # Compressed beqz
  .text
  .global c_beqz
c_beqz:
  c.beqz x8,.L11
.L11:
  c.beqz x9,.L11
  c.beqz x10,.L13
.L12:
  .zero 64 
.L13:
  c.beqz x11,.L12

  # Relaxation to a long branch
  c.beqz x12,.L15
.L14:
  .zero 250
.L15:
  c.beqz x13,.L14
  c.beqz x14,.L17
.L16:
  .zero 252
.L17:
  c.beqz x15,.L16
  c.beqz x8,.L19
.L18:
  .zero 256
.L19:
  c.beqz x9,.L18
  c.beqz x10,.L21
.L20:
  .zero 258
.L21:
  c.beqz x11,.L20

  # Relaxation to an inverted compressed branch + long jump
  c.beqz x12,.L23
.L22:
  .zero 4088
.L23:
  c.beqz x13,.L22
  c.beqz x14,.L25
.L24:
  .zero 4090
.L25:
  c.beqz x15,.L24
  c.beqz x8,.L27
.L26:
  .zero 4092
.L27:
  c.beqz x9,.L26
  c.beqz x10,.L29
.L28:
  .zero 4094
.L29:
  c.beqz x11,.L28
  c.beqz x12,.L31
.L30:
  .zero 4096
.L31:
  c.beqz x13,.L30
  c.beqz x14,.L33
.L32:
  .zero 4098
.L33:
  c.beqz x15,.L32

  # c.bnez, check that the condition is correctly inverted during relax
  c.bnez x8,.L35
.L34:
  .zero 5000
.L35:
  c.bnez x9,.L34

  # Jump across a section
  .text
  .global c_beqz_across_section
c_beqz_across_section:
  c.beqz x10,branch_target
  .zero 32
  .section .potato
  .global c_beqz_target
c_beqz_target:
  c.beqz x11,c_beqz_across_section

  # Jump to a weak symbol
  .text
  .global c_beqz_to_weak_symbol
c_beqz_to_weak_symbol:
  c.beqz x12,c_beqz_weak_target
  .zero 32
  .global c_beqz_weak_target
  .weak c_beqz_weak_target
c_beqz_weak_target:
  nop

  # Interesting expressions
  .text
  .global c_beqz_interesting_exprs
c_beqz_interesting_exprs:
  c.beqz x13,.
  c.beqz x14,c_beqz_interesting_exprs+4
  c.beqz x15,.+0x10

  # Compressed jump and link
  .text
  .global c_jal
c_jal:
  c.jal .L36
.L36:
  c.jal .L36
  c.jal .L38
.L37:
  .zero 716
.L38:
  c.jal .L37

  # Boundary conditions
  c.jal .L40
.L39:
  .zero 2044
.L40:
  c.jal .L39
  c.jal .L42
.L41:
  .zero 2046
.L42:
  c.jal .L41
  c.jal .L44
.L43:
  .zero 2048
.L44:
  c.jal .L43
  c.jal .L46
.L45:
  .zero 2050
.L46:
  c.jal .L45

  # Jump across a section
  .text
  .global c_jal_across_section
c_jal_across_section:
  c.jal branch_target
  .zero 32
  .section .potato
  .global c_jal_target
c_jal_target:
  c.jal c_jal_across_section

  # Jump to a weak symbol
  .text
  .global c_jal_to_weak_symbol
c_jal_to_weak_symbol:
  c.jal c_jal_weak_target
  .zero 32
  .global c_jal_weak_target
  .weak c_jal_weak_target
c_jal_weak_target:
  nop

  # Interesting expressions
  .text
  .global c_jal_interesting_exprs
c_jal_interesting_exprs:
  c.jal .
  c.jal c_jal_interesting_exprs+4
  c.jal .+0x10
