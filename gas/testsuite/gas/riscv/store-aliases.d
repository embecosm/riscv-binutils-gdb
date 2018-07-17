#as: -march=rv64i
#objdump: -dr
#name: store-aliases

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <sb>:
   0:	00000017          	auipc	zero,0x0
			0: R_RISCV_PCREL_HI20	apple
			0: R_RISCV_RELAX	\*ABS\*
   4:	00000023          	sb	zero,0\(zero\) # 0 <sb>
			4: R_RISCV_PCREL_LO12_S	\.L0 
			4: R_RISCV_RELAX	\*ABS\*

0000000000000008 <\.L0 >:
   8:	00000317          	auipc	t1,0x0
			8: R_RISCV_PCREL_HI20	banana
			8: R_RISCV_RELAX	\*ABS\*
   c:	00030023          	sb	zero,0\(t1\) # 8 <\.L0 >
			c: R_RISCV_PCREL_LO12_S	\.L0 
			c: R_RISCV_RELAX	\*ABS\*

0000000000000010 <\.L0 >:
  10:	00000017          	auipc	zero,0x0
			10: R_RISCV_PCREL_HI20	cabbage\+0x5
			10: R_RISCV_RELAX	\*ABS\*\+0x5
  14:	01c00023          	sb	t3,0\(zero\) # 0 <sb>
			14: R_RISCV_PCREL_LO12_S	\.L0 
			14: R_RISCV_RELAX	\*ABS\*

0000000000000018 <\.L0 >:
  18:	00000397          	auipc	t2,0x0
			18: R_RISCV_PCREL_HI20	\.text\+0x4bb
			18: R_RISCV_RELAX	\*ABS\*\+0x4bb
  1c:	01a38023          	sb	s10,0\(t2\) # 18 <\.L0 >
			1c: R_RISCV_PCREL_LO12_S	\.L0 
			1c: R_RISCV_RELAX	\*ABS\*

0000000000000020 <sh>:
  20:	00000017          	auipc	zero,0x0
			20: R_RISCV_PCREL_HI20	apple
			20: R_RISCV_RELAX	\*ABS\*
  24:	00001023          	sh	zero,0\(zero\) # 0 <sb>
			24: R_RISCV_PCREL_LO12_S	\.L0 
			24: R_RISCV_RELAX	\*ABS\*

0000000000000028 <\.L0 >:
  28:	00000117          	auipc	sp,0x0
			28: R_RISCV_PCREL_HI20	banana
			28: R_RISCV_RELAX	\*ABS\*
  2c:	00111023          	sh	ra,0\(sp\) # 28 <\.L0 >
			2c: R_RISCV_PCREL_LO12_S	\.L0 
			2c: R_RISCV_RELAX	\*ABS\*

0000000000000030 <\.L0 >:
  30:	00000197          	auipc	gp,0x0
			30: R_RISCV_PCREL_HI20	cabbage-0x32
			30: R_RISCV_RELAX	\*ABS\*-0x32
  34:	00019023          	sh	zero,0\(gp\) # 30 <\.L0 >
			34: R_RISCV_PCREL_LO12_S	\.L0 
			34: R_RISCV_RELAX	\*ABS\*

0000000000000038 <\.L0 >:
  38:	00000397          	auipc	t2,0x0
			38: R_RISCV_PCREL_HI20	\.text-0xffff
			38: R_RISCV_RELAX	\*ABS\*-0xffff
  3c:	01b39023          	sh	s11,0\(t2\) # 38 <\.L0 >
			3c: R_RISCV_PCREL_LO12_S	\.L0 
			3c: R_RISCV_RELAX	\*ABS\*

0000000000000040 <sw>:
  40:	00000017          	auipc	zero,0x0
			40: R_RISCV_PCREL_HI20	apple
			40: R_RISCV_RELAX	\*ABS\*
  44:	00002023          	sw	zero,0\(zero\) # 0 <sb>
			44: R_RISCV_PCREL_LO12_S	\.L0 
			44: R_RISCV_RELAX	\*ABS\*

0000000000000048 <\.L0 >:
  48:	00000317          	auipc	t1,0x0
			48: R_RISCV_PCREL_HI20	banana
			48: R_RISCV_RELAX	\*ABS\*
  4c:	00632023          	sw	t1,0\(t1\) # 48 <\.L0 >
			4c: R_RISCV_PCREL_LO12_S	\.L0 
			4c: R_RISCV_RELAX	\*ABS\*

0000000000000050 <\.L0 >:
  50:	00000197          	auipc	gp,0x0
			50: R_RISCV_PCREL_HI20	cabbage-0x10000
			50: R_RISCV_RELAX	\*ABS\*-0x10000
  54:	0191a023          	sw	s9,0\(gp\) # 50 <\.L0 >
			54: R_RISCV_PCREL_LO12_S	\.L0 
			54: R_RISCV_RELAX	\*ABS\*

0000000000000058 <\.L0 >:
  58:	00000317          	auipc	t1,0x0
			58: R_RISCV_PCREL_HI20	\.text\+0x1
			58: R_RISCV_RELAX	\*ABS\*\+0x1
  5c:	00132023          	sw	ra,0\(t1\) # 58 <\.L0 >
			5c: R_RISCV_PCREL_LO12_S	\.L0 
			5c: R_RISCV_RELAX	\*ABS\*

0000000000000060 <sd>:
  60:	00000017          	auipc	zero,0x0
			60: R_RISCV_PCREL_HI20	apple
			60: R_RISCV_RELAX	\*ABS\*
  64:	00003023          	sd	zero,0\(zero\) # 0 <sb>
			64: R_RISCV_PCREL_LO12_S	\.L0 
			64: R_RISCV_RELAX	\*ABS\*

0000000000000068 <\.L0 >:
  68:	00000317          	auipc	t1,0x0
			68: R_RISCV_PCREL_HI20	banana
			68: R_RISCV_RELAX	\*ABS\*
  6c:	00333023          	sd	gp,0\(t1\) # 68 <\.L0 >
			6c: R_RISCV_PCREL_LO12_S	\.L0 
			6c: R_RISCV_RELAX	\*ABS\*

0000000000000070 <\.L0 >:
  70:	00000117          	auipc	sp,0x0
			70: R_RISCV_PCREL_HI20	cabbage
			70: R_RISCV_RELAX	\*ABS\*
  74:	01c13023          	sd	t3,0\(sp\) # 70 <\.L0 >
			74: R_RISCV_PCREL_LO12_S	\.L0 
			74: R_RISCV_RELAX	\*ABS\*

0000000000000078 <\.L0 >:
  78:	00000097          	auipc	ra,0x0
			78: R_RISCV_PCREL_HI20	\.text
			78: R_RISCV_RELAX	\*ABS\*
  7c:	01a0b023          	sd	s10,0\(ra\) # 78 <\.L0 >
			7c: R_RISCV_PCREL_LO12_S	\.L0 
			7c: R_RISCV_RELAX	\*ABS\*

0000000000000080 <sb_2>:
  80:	000e0023          	sb	zero,0\(t3\)

0000000000000084 <sh_2>:
  84:	019d9023          	sh	s9,0\(s11\)

0000000000000088 <sw_2>:
  88:	0091a023          	sw	s1,0\(gp\)

000000000000008c <sd_2>:
  8c:	00233023          	sd	sp,0\(t1\)
