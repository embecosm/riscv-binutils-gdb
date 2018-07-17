#as: -march=rv64i
#objdump: -dr
#name: load-aliases

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <la>:
   0:	00000017          	auipc	zero,0x0
			0: R_RISCV_PCREL_HI20	apple
			0: R_RISCV_RELAX	\*ABS\*
   4:	00000013          	nop
			4: R_RISCV_PCREL_LO12_I	\.L0 
			4: R_RISCV_RELAX	\*ABS\*

0000000000000008 <\.L0 >:
   8:	00000117          	auipc	sp,0x0
			8: R_RISCV_PCREL_HI20	banana\+0x7b
			8: R_RISCV_RELAX	\*ABS\*\+0x7b
   c:	00010113          	mv	sp,sp
			c: R_RISCV_PCREL_LO12_I	\.L0 
			c: R_RISCV_RELAX	\*ABS\*

0000000000000010 <\.L0 >:
  10:	00000d97          	auipc	s11,0x0
			10: R_RISCV_PCREL_HI20	\.text
			10: R_RISCV_RELAX	\*ABS\*
  14:	000d8d93          	mv	s11,s11
			14: R_RISCV_PCREL_LO12_I	\.L0 
			14: R_RISCV_RELAX	\*ABS\*

0000000000000018 <\.L0 >:
  18:	00000097          	auipc	ra,0x0
			18: R_RISCV_PCREL_HI20	\.text\+0x1f4
			18: R_RISCV_RELAX	\*ABS\*\+0x1f4
  1c:	00008093          	mv	ra,ra
			1c: R_RISCV_PCREL_LO12_I	\.L0 
			1c: R_RISCV_RELAX	\*ABS\*

0000000000000020 <lb>:
  20:	00000017          	auipc	zero,0x0
			20: R_RISCV_PCREL_HI20	apple
			20: R_RISCV_RELAX	\*ABS\*
  24:	00000003          	lb	zero,0\(zero\) # 0 <la>
			24: R_RISCV_PCREL_LO12_I	\.L0 
			24: R_RISCV_RELAX	\*ABS\*

0000000000000028 <\.L0 >:
  28:	00000e97          	auipc	t4,0x0
			28: R_RISCV_PCREL_HI20	banana-0x3e7
			28: R_RISCV_RELAX	\*ABS\*-0x3e7
  2c:	000e8e83          	lb	t4,0\(t4\) # 28 <\.L0 >
			2c: R_RISCV_PCREL_LO12_I	\.L0 
			2c: R_RISCV_RELAX	\*ABS\*

0000000000000030 <\.L0 >:
  30:	00000997          	auipc	s3,0x0
			30: R_RISCV_PCREL_HI20	\.text
			30: R_RISCV_RELAX	\*ABS\*
  34:	00098983          	lb	s3,0\(s3\) # 30 <\.L0 >
			34: R_RISCV_PCREL_LO12_I	\.L0 
			34: R_RISCV_RELAX	\*ABS\*

0000000000000038 <\.L0 >:
  38:	00000197          	auipc	gp,0x0
			38: R_RISCV_PCREL_HI20	\.text\+0x42
			38: R_RISCV_RELAX	\*ABS\*\+0x42
  3c:	00018183          	lb	gp,0\(gp\) # 38 <\.L0 >
			3c: R_RISCV_PCREL_LO12_I	\.L0 
			3c: R_RISCV_RELAX	\*ABS\*

0000000000000040 <lh>:
  40:	00000017          	auipc	zero,0x0
			40: R_RISCV_PCREL_HI20	apple
			40: R_RISCV_RELAX	\*ABS\*
  44:	00001003          	lh	zero,0\(zero\) # 0 <la>
			44: R_RISCV_PCREL_LO12_I	\.L0 
			44: R_RISCV_RELAX	\*ABS\*

0000000000000048 <\.L0 >:
  48:	00000317          	auipc	t1,0x0
			48: R_RISCV_PCREL_HI20	banana\+0xe
			48: R_RISCV_RELAX	\*ABS\*\+0xe
  4c:	00031303          	lh	t1,0\(t1\) # 48 <\.L0 >
			4c: R_RISCV_PCREL_LO12_I	\.L0 
			4c: R_RISCV_RELAX	\*ABS\*

0000000000000050 <\.L0 >:
  50:	00000c97          	auipc	s9,0x0
			50: R_RISCV_PCREL_HI20	\.text
			50: R_RISCV_RELAX	\*ABS\*
  54:	000c9c83          	lh	s9,0\(s9\) # 50 <\.L0 >
			54: R_RISCV_PCREL_LO12_I	\.L0 
			54: R_RISCV_RELAX	\*ABS\*

0000000000000058 <\.L0 >:
  58:	00000117          	auipc	sp,0x0
			58: R_RISCV_PCREL_HI20	\.text-0x42
			58: R_RISCV_RELAX	\*ABS\*-0x42
  5c:	00011103          	lh	sp,0\(sp\) # 58 <\.L0 >
			5c: R_RISCV_PCREL_LO12_I	\.L0 
			5c: R_RISCV_RELAX	\*ABS\*

0000000000000060 <lw>:
  60:	00000017          	auipc	zero,0x0
			60: R_RISCV_PCREL_HI20	apple
			60: R_RISCV_RELAX	\*ABS\*
  64:	00002003          	lw	zero,0\(zero\) # 0 <la>
			64: R_RISCV_PCREL_LO12_I	\.L0 
			64: R_RISCV_RELAX	\*ABS\*

0000000000000068 <\.L0 >:
  68:	00000017          	auipc	zero,0x0
			68: R_RISCV_PCREL_HI20	banana\+0x1
			68: R_RISCV_RELAX	\*ABS\*\+0x1
  6c:	00002003          	lw	zero,0\(zero\) # 0 <la>
			6c: R_RISCV_PCREL_LO12_I	\.L0 
			6c: R_RISCV_RELAX	\*ABS\*

0000000000000070 <\.L0 >:
  70:	00000f97          	auipc	t6,0x0
			70: R_RISCV_PCREL_HI20	\.text
			70: R_RISCV_RELAX	\*ABS\*
  74:	000faf83          	lw	t6,0\(t6\) # 70 <\.L0 >
			74: R_RISCV_PCREL_LO12_I	\.L0 
			74: R_RISCV_RELAX	\*ABS\*

0000000000000078 <\.L0 >:
  78:	00000097          	auipc	ra,0x0
			78: R_RISCV_PCREL_HI20	\.text
			78: R_RISCV_RELAX	\*ABS\*
  7c:	0000a083          	lw	ra,0\(ra\) # 78 <\.L0 >
			7c: R_RISCV_PCREL_LO12_I	\.L0 
			7c: R_RISCV_RELAX	\*ABS\*

0000000000000080 <ld>:
  80:	00000017          	auipc	zero,0x0
			80: R_RISCV_PCREL_HI20	apple
			80: R_RISCV_RELAX	\*ABS\*
  84:	00003003          	ld	zero,0\(zero\) # 0 <la>
			84: R_RISCV_PCREL_LO12_I	\.L0 
			84: R_RISCV_RELAX	\*ABS\*

0000000000000088 <\.L0 >:
  88:	00000c97          	auipc	s9,0x0
			88: R_RISCV_PCREL_HI20	banana-0xf
			88: R_RISCV_RELAX	\*ABS\*-0xf
  8c:	000cbc83          	ld	s9,0\(s9\) # 88 <\.L0 >
			8c: R_RISCV_PCREL_LO12_I	\.L0 
			8c: R_RISCV_RELAX	\*ABS\*

0000000000000090 <\.L0 >:
  90:	00000617          	auipc	a2,0x0
			90: R_RISCV_PCREL_HI20	\.text
			90: R_RISCV_RELAX	\*ABS\*
  94:	00063603          	ld	a2,0\(a2\) # 90 <\.L0 >
			94: R_RISCV_PCREL_LO12_I	\.L0 
			94: R_RISCV_RELAX	\*ABS\*

0000000000000098 <\.L0 >:
  98:	00000697          	auipc	a3,0x0
			98: R_RISCV_PCREL_HI20	\.text\+0x1a
			98: R_RISCV_RELAX	\*ABS\*\+0x1a
  9c:	0006b683          	ld	a3,0\(a3\) # 98 <\.L0 >
			9c: R_RISCV_PCREL_LO12_I	\.L0 
			9c: R_RISCV_RELAX	\*ABS\*

00000000000000a0 <lla>:
  a0:	00000017          	auipc	zero,0x0
			a0: R_RISCV_PCREL_HI20	cabbage
			a0: R_RISCV_RELAX	\*ABS\*
  a4:	00000013          	nop
			a4: R_RISCV_PCREL_LO12_I	\.L0 
			a4: R_RISCV_RELAX	\*ABS\*

00000000000000a8 <\.L0 >:
  a8:	00000d17          	auipc	s10,0x0
			a8: R_RISCV_PCREL_HI20	potato-0x13ba
			a8: R_RISCV_RELAX	\*ABS\*-0x13ba
  ac:	000d0d13          	mv	s10,s10
			ac: R_RISCV_PCREL_LO12_I	\.L0 
			ac: R_RISCV_RELAX	\*ABS\*

00000000000000b0 <\.L0 >:
  b0:	00000317          	auipc	t1,0x0
			b0: R_RISCV_PCREL_HI20	\.text
			b0: R_RISCV_RELAX	\*ABS\*
  b4:	00030313          	mv	t1,t1
			b4: R_RISCV_PCREL_LO12_I	\.L0 
			b4: R_RISCV_RELAX	\*ABS\*

00000000000000b8 <\.L0 >:
  b8:	00000197          	auipc	gp,0x0
			b8: R_RISCV_PCREL_HI20	\.text\+0x10000
			b8: R_RISCV_RELAX	\*ABS\*\+0x10000
  bc:	00018193          	mv	gp,gp
			bc: R_RISCV_PCREL_LO12_I	\.L0 
			bc: R_RISCV_RELAX	\*ABS\*

00000000000000c0 <lbu>:
  c0:	00000017          	auipc	zero,0x0
			c0: R_RISCV_PCREL_HI20	lemon
			c0: R_RISCV_RELAX	\*ABS\*
  c4:	00004003          	lbu	zero,0\(zero\) # 0 <la>
			c4: R_RISCV_PCREL_LO12_I	\.L0 
			c4: R_RISCV_RELAX	\*ABS\*

00000000000000c8 <\.L0 >:
  c8:	00000e17          	auipc	t3,0x0
			c8: R_RISCV_PCREL_HI20	violence
			c8: R_RISCV_RELAX	\*ABS\*
  cc:	000e4e03          	lbu	t3,0\(t3\) # c8 <\.L0 >
			cc: R_RISCV_PCREL_LO12_I	\.L0 
			cc: R_RISCV_RELAX	\*ABS\*

00000000000000d0 <\.L0 >:
  d0:	00000c97          	auipc	s9,0x0
			d0: R_RISCV_PCREL_HI20	\.text
			d0: R_RISCV_RELAX	\*ABS\*
  d4:	000ccc83          	lbu	s9,0\(s9\) # d0 <\.L0 >
			d4: R_RISCV_PCREL_LO12_I	\.L0 
			d4: R_RISCV_RELAX	\*ABS\*

00000000000000d8 <\.L0 >:
  d8:	00000197          	auipc	gp,0x0
			d8: R_RISCV_PCREL_HI20	\.text-0x21
			d8: R_RISCV_RELAX	\*ABS\*-0x21
  dc:	0001c183          	lbu	gp,0\(gp\) # d8 <\.L0 >
			dc: R_RISCV_PCREL_LO12_I	\.L0 
			dc: R_RISCV_RELAX	\*ABS\*

00000000000000e0 <lhu>:
  e0:	00000017          	auipc	zero,0x0
			e0: R_RISCV_PCREL_HI20	fear
			e0: R_RISCV_RELAX	\*ABS\*
  e4:	00005003          	lhu	zero,0\(zero\) # 0 <la>
			e4: R_RISCV_PCREL_LO12_I	\.L0 
			e4: R_RISCV_RELAX	\*ABS\*

00000000000000e8 <\.L0 >:
  e8:	00000297          	auipc	t0,0x0
			e8: R_RISCV_PCREL_HI20	exuberance-0x3f
			e8: R_RISCV_RELAX	\*ABS\*-0x3f
  ec:	0002d283          	lhu	t0,0\(t0\) # e8 <\.L0 >
			ec: R_RISCV_PCREL_LO12_I	\.L0 
			ec: R_RISCV_RELAX	\*ABS\*

00000000000000f0 <\.L0 >:
  f0:	00000917          	auipc	s2,0x0
			f0: R_RISCV_PCREL_HI20	\.text
			f0: R_RISCV_RELAX	\*ABS\*
  f4:	00095903          	lhu	s2,0\(s2\) # f0 <\.L0 >
			f4: R_RISCV_PCREL_LO12_I	\.L0 
			f4: R_RISCV_RELAX	\*ABS\*

00000000000000f8 <\.L0 >:
  f8:	00000f97          	auipc	t6,0x0
			f8: R_RISCV_PCREL_HI20	\.text\+0x11a
			f8: R_RISCV_RELAX	\*ABS\*\+0x11a
  fc:	000fdf83          	lhu	t6,0\(t6\) # f8 <\.L0 >
			fc: R_RISCV_PCREL_LO12_I	\.L0 
			fc: R_RISCV_RELAX	\*ABS\*

0000000000000100 <lwu>:
 100:	00000017          	auipc	zero,0x0
			100: R_RISCV_PCREL_HI20	wine
			100: R_RISCV_RELAX	\*ABS\*
 104:	00006003          	lwu	zero,0\(zero\) # 0 <la>
			104: R_RISCV_PCREL_LO12_I	\.L0 
			104: R_RISCV_RELAX	\*ABS\*

0000000000000108 <\.L0 >:
 108:	00000017          	auipc	zero,0x0
			108: R_RISCV_PCREL_HI20	grapejuice\+0x900d
			108: R_RISCV_RELAX	\*ABS\*\+0x900d
 10c:	00006003          	lwu	zero,0\(zero\) # 0 <la>
			10c: R_RISCV_PCREL_LO12_I	\.L0 
			10c: R_RISCV_RELAX	\*ABS\*

0000000000000110 <\.L0 >:
 110:	00000497          	auipc	s1,0x0
			110: R_RISCV_PCREL_HI20	\.text
			110: R_RISCV_RELAX	\*ABS\*
 114:	0004e483          	lwu	s1,0\(s1\) # 110 <\.L0 >
			114: R_RISCV_PCREL_LO12_I	\.L0 
			114: R_RISCV_RELAX	\*ABS\*

0000000000000118 <\.L0 >:
 118:	00000697          	auipc	a3,0x0
			118: R_RISCV_PCREL_HI20	\.text\+0x6f
			118: R_RISCV_RELAX	\*ABS\*\+0x6f
 11c:	0006e683          	lwu	a3,0\(a3\) # 118 <\.L0 >
			11c: R_RISCV_PCREL_LO12_I	\.L0 
			11c: R_RISCV_RELAX	\*ABS\*

0000000000000120 <lb_2>:
 120:	00040003          	lb	zero,0\(s0\)

0000000000000124 <lh_2>:
 124:	00079083          	lh	ra,0\(a5\)

0000000000000128 <lw_2>:
 128:	0004a303          	lw	t1,0\(s1\)

000000000000012c <lbu_2>:
 12c:	00074f83          	lbu	t6,0\(a4\)

0000000000000130 <lhu_2>:
 130:	00015183          	lhu	gp,0\(sp\)

0000000000000134 <lwu_2>:
 134:	000ce103          	lwu	sp,0\(s9\)

0000000000000138 <ld_2>:
 138:	000ab103          	ld	sp,0\(s5\)
