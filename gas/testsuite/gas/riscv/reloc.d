#as: -march=rv64i
#objdump: -dr
#name: reloc

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <jalr>:
   0:	000006e7          	jalr	a3,zero # 0 <jalr>
			0: R_RISCV_LO12_I	global_symbol
			0: R_RISCV_RELAX	\*ABS\*
   4:	000f8fe7          	jalr	t6,t6
			4: R_RISCV_LO12_I	global_symbol
			4: R_RISCV_RELAX	\*ABS\*
   8:	000080e7          	jalr	ra
			8: R_RISCV_LO12_I	global_symbol
			8: R_RISCV_RELAX	\*ABS\*
   c:	000807e7          	jalr	a5,a6
			c: R_RISCV_LO12_I	global_symbol
			c: R_RISCV_RELAX	\*ABS\*
  10:	000006e7          	jalr	a3,zero # 0 <jalr>
			10: R_RISCV_PCREL_LO12_I	global_symbol
			10: R_RISCV_RELAX	\*ABS\*
  14:	000f8fe7          	jalr	t6,t6
			14: R_RISCV_PCREL_LO12_I	global_symbol
			14: R_RISCV_RELAX	\*ABS\*
  18:	000080e7          	jalr	ra
			18: R_RISCV_PCREL_LO12_I	global_symbol
			18: R_RISCV_RELAX	\*ABS\*
  1c:	000807e7          	jalr	a5,a6
			1c: R_RISCV_PCREL_LO12_I	global_symbol
			1c: R_RISCV_RELAX	\*ABS\*

0000000000000020 <lb>:
  20:	00000683          	lb	a3,0\(zero\) # 0 <jalr>
			20: R_RISCV_LO12_I	global_symbol
			20: R_RISCV_RELAX	\*ABS\*
  24:	000f8f83          	lb	t6,0\(t6\)
			24: R_RISCV_LO12_I	global_symbol
			24: R_RISCV_RELAX	\*ABS\*
  28:	00008083          	lb	ra,0\(ra\)
			28: R_RISCV_LO12_I	global_symbol
			28: R_RISCV_RELAX	\*ABS\*
  2c:	00080783          	lb	a5,0\(a6\)
			2c: R_RISCV_LO12_I	global_symbol
			2c: R_RISCV_RELAX	\*ABS\*
  30:	00000683          	lb	a3,0\(zero\) # 0 <jalr>
			30: R_RISCV_PCREL_LO12_I	global_symbol
			30: R_RISCV_RELAX	\*ABS\*
  34:	000f8f83          	lb	t6,0\(t6\)
			34: R_RISCV_PCREL_LO12_I	global_symbol
			34: R_RISCV_RELAX	\*ABS\*
  38:	00008083          	lb	ra,0\(ra\)
			38: R_RISCV_PCREL_LO12_I	global_symbol
			38: R_RISCV_RELAX	\*ABS\*
  3c:	00080783          	lb	a5,0\(a6\)
			3c: R_RISCV_PCREL_LO12_I	global_symbol
			3c: R_RISCV_RELAX	\*ABS\*

0000000000000040 <lh>:
  40:	00001683          	lh	a3,0\(zero\) # 0 <jalr>
			40: R_RISCV_LO12_I	global_symbol
			40: R_RISCV_RELAX	\*ABS\*
  44:	000f9f83          	lh	t6,0\(t6\)
			44: R_RISCV_LO12_I	global_symbol
			44: R_RISCV_RELAX	\*ABS\*
  48:	00009083          	lh	ra,0\(ra\)
			48: R_RISCV_LO12_I	global_symbol
			48: R_RISCV_RELAX	\*ABS\*
  4c:	00081783          	lh	a5,0\(a6\)
			4c: R_RISCV_LO12_I	global_symbol
			4c: R_RISCV_RELAX	\*ABS\*
  50:	00001683          	lh	a3,0\(zero\) # 0 <jalr>
			50: R_RISCV_PCREL_LO12_I	global_symbol
			50: R_RISCV_RELAX	\*ABS\*
  54:	000f9f83          	lh	t6,0\(t6\)
			54: R_RISCV_PCREL_LO12_I	global_symbol
			54: R_RISCV_RELAX	\*ABS\*
  58:	00009083          	lh	ra,0\(ra\)
			58: R_RISCV_PCREL_LO12_I	global_symbol
			58: R_RISCV_RELAX	\*ABS\*
  5c:	00081783          	lh	a5,0\(a6\)
			5c: R_RISCV_PCREL_LO12_I	global_symbol
			5c: R_RISCV_RELAX	\*ABS\*

0000000000000060 <lw>:
  60:	00002683          	lw	a3,0\(zero\) # 0 <jalr>
			60: R_RISCV_LO12_I	global_symbol
			60: R_RISCV_RELAX	\*ABS\*
  64:	000faf83          	lw	t6,0\(t6\)
			64: R_RISCV_LO12_I	global_symbol
			64: R_RISCV_RELAX	\*ABS\*
  68:	0000a083          	lw	ra,0\(ra\)
			68: R_RISCV_LO12_I	global_symbol
			68: R_RISCV_RELAX	\*ABS\*
  6c:	00082783          	lw	a5,0\(a6\)
			6c: R_RISCV_LO12_I	global_symbol
			6c: R_RISCV_RELAX	\*ABS\*
  70:	00002683          	lw	a3,0\(zero\) # 0 <jalr>
			70: R_RISCV_PCREL_LO12_I	global_symbol
			70: R_RISCV_RELAX	\*ABS\*
  74:	000faf83          	lw	t6,0\(t6\)
			74: R_RISCV_PCREL_LO12_I	global_symbol
			74: R_RISCV_RELAX	\*ABS\*
  78:	0000a083          	lw	ra,0\(ra\)
			78: R_RISCV_PCREL_LO12_I	global_symbol
			78: R_RISCV_RELAX	\*ABS\*
  7c:	00082783          	lw	a5,0\(a6\)
			7c: R_RISCV_PCREL_LO12_I	global_symbol
			7c: R_RISCV_RELAX	\*ABS\*

0000000000000080 <lbu>:
  80:	00004683          	lbu	a3,0\(zero\) # 0 <jalr>
			80: R_RISCV_LO12_I	global_symbol
			80: R_RISCV_RELAX	\*ABS\*
  84:	000fcf83          	lbu	t6,0\(t6\)
			84: R_RISCV_LO12_I	global_symbol
			84: R_RISCV_RELAX	\*ABS\*
  88:	0000c083          	lbu	ra,0\(ra\)
			88: R_RISCV_LO12_I	global_symbol
			88: R_RISCV_RELAX	\*ABS\*
  8c:	00084783          	lbu	a5,0\(a6\)
			8c: R_RISCV_LO12_I	global_symbol
			8c: R_RISCV_RELAX	\*ABS\*
  90:	00004683          	lbu	a3,0\(zero\) # 0 <jalr>
			90: R_RISCV_PCREL_LO12_I	global_symbol
			90: R_RISCV_RELAX	\*ABS\*
  94:	000fcf83          	lbu	t6,0\(t6\)
			94: R_RISCV_PCREL_LO12_I	global_symbol
			94: R_RISCV_RELAX	\*ABS\*
  98:	0000c083          	lbu	ra,0\(ra\)
			98: R_RISCV_PCREL_LO12_I	global_symbol
			98: R_RISCV_RELAX	\*ABS\*
  9c:	00084783          	lbu	a5,0\(a6\)
			9c: R_RISCV_PCREL_LO12_I	global_symbol
			9c: R_RISCV_RELAX	\*ABS\*

00000000000000a0 <lhu>:
  a0:	00005683          	lhu	a3,0\(zero\) # 0 <jalr>
			a0: R_RISCV_LO12_I	global_symbol
			a0: R_RISCV_RELAX	\*ABS\*
  a4:	000fdf83          	lhu	t6,0\(t6\)
			a4: R_RISCV_LO12_I	global_symbol
			a4: R_RISCV_RELAX	\*ABS\*
  a8:	0000d083          	lhu	ra,0\(ra\)
			a8: R_RISCV_LO12_I	global_symbol
			a8: R_RISCV_RELAX	\*ABS\*
  ac:	00085783          	lhu	a5,0\(a6\)
			ac: R_RISCV_LO12_I	global_symbol
			ac: R_RISCV_RELAX	\*ABS\*
  b0:	00005683          	lhu	a3,0\(zero\) # 0 <jalr>
			b0: R_RISCV_PCREL_LO12_I	global_symbol
			b0: R_RISCV_RELAX	\*ABS\*
  b4:	000fdf83          	lhu	t6,0\(t6\)
			b4: R_RISCV_PCREL_LO12_I	global_symbol
			b4: R_RISCV_RELAX	\*ABS\*
  b8:	0000d083          	lhu	ra,0\(ra\)
			b8: R_RISCV_PCREL_LO12_I	global_symbol
			b8: R_RISCV_RELAX	\*ABS\*
  bc:	00085783          	lhu	a5,0\(a6\)
			bc: R_RISCV_PCREL_LO12_I	global_symbol
			bc: R_RISCV_RELAX	\*ABS\*

00000000000000c0 <lwu>:
  c0:	00006683          	lwu	a3,0\(zero\) # 0 <jalr>
			c0: R_RISCV_LO12_I	global_symbol
			c0: R_RISCV_RELAX	\*ABS\*
  c4:	000fef83          	lwu	t6,0\(t6\)
			c4: R_RISCV_LO12_I	global_symbol
			c4: R_RISCV_RELAX	\*ABS\*
  c8:	0000e083          	lwu	ra,0\(ra\)
			c8: R_RISCV_LO12_I	global_symbol
			c8: R_RISCV_RELAX	\*ABS\*
  cc:	00086783          	lwu	a5,0\(a6\)
			cc: R_RISCV_LO12_I	global_symbol
			cc: R_RISCV_RELAX	\*ABS\*
  d0:	00006683          	lwu	a3,0\(zero\) # 0 <jalr>
			d0: R_RISCV_PCREL_LO12_I	global_symbol
			d0: R_RISCV_RELAX	\*ABS\*
  d4:	000fef83          	lwu	t6,0\(t6\)
			d4: R_RISCV_PCREL_LO12_I	global_symbol
			d4: R_RISCV_RELAX	\*ABS\*
  d8:	0000e083          	lwu	ra,0\(ra\)
			d8: R_RISCV_PCREL_LO12_I	global_symbol
			d8: R_RISCV_RELAX	\*ABS\*
  dc:	00086783          	lwu	a5,0\(a6\)
			dc: R_RISCV_PCREL_LO12_I	global_symbol
			dc: R_RISCV_RELAX	\*ABS\*

00000000000000e0 <addi>:
  e0:	00000693          	li	a3,0
			e0: R_RISCV_LO12_I	global_symbol
			e0: R_RISCV_RELAX	\*ABS\*
  e4:	000f8f93          	mv	t6,t6
			e4: R_RISCV_LO12_I	global_symbol
			e4: R_RISCV_RELAX	\*ABS\*
  e8:	00008093          	mv	ra,ra
			e8: R_RISCV_LO12_I	global_symbol
			e8: R_RISCV_RELAX	\*ABS\*
  ec:	00080793          	mv	a5,a6
			ec: R_RISCV_LO12_I	global_symbol
			ec: R_RISCV_RELAX	\*ABS\*
  f0:	00000693          	li	a3,0
			f0: R_RISCV_PCREL_LO12_I	global_symbol
			f0: R_RISCV_RELAX	\*ABS\*
  f4:	000f8f93          	mv	t6,t6
			f4: R_RISCV_PCREL_LO12_I	global_symbol
			f4: R_RISCV_RELAX	\*ABS\*
  f8:	00008093          	mv	ra,ra
			f8: R_RISCV_PCREL_LO12_I	global_symbol
			f8: R_RISCV_RELAX	\*ABS\*
  fc:	00080793          	mv	a5,a6
			fc: R_RISCV_PCREL_LO12_I	global_symbol
			fc: R_RISCV_RELAX	\*ABS\*

0000000000000100 <slti>:
 100:	00002693          	slti	a3,zero,0
			100: R_RISCV_LO12_I	global_symbol
			100: R_RISCV_RELAX	\*ABS\*
 104:	000faf93          	slti	t6,t6,0
			104: R_RISCV_LO12_I	global_symbol
			104: R_RISCV_RELAX	\*ABS\*
 108:	0000a093          	slti	ra,ra,0
			108: R_RISCV_LO12_I	global_symbol
			108: R_RISCV_RELAX	\*ABS\*
 10c:	00082793          	slti	a5,a6,0
			10c: R_RISCV_LO12_I	global_symbol
			10c: R_RISCV_RELAX	\*ABS\*
 110:	00002693          	slti	a3,zero,0
			110: R_RISCV_PCREL_LO12_I	global_symbol
			110: R_RISCV_RELAX	\*ABS\*
 114:	000faf93          	slti	t6,t6,0
			114: R_RISCV_PCREL_LO12_I	global_symbol
			114: R_RISCV_RELAX	\*ABS\*
 118:	0000a093          	slti	ra,ra,0
			118: R_RISCV_PCREL_LO12_I	global_symbol
			118: R_RISCV_RELAX	\*ABS\*
 11c:	00082793          	slti	a5,a6,0
			11c: R_RISCV_PCREL_LO12_I	global_symbol
			11c: R_RISCV_RELAX	\*ABS\*

0000000000000120 <sltiu>:
 120:	00003693          	sltiu	a3,zero,0
			120: R_RISCV_LO12_I	global_symbol
			120: R_RISCV_RELAX	\*ABS\*
 124:	000fbf93          	sltiu	t6,t6,0
			124: R_RISCV_LO12_I	global_symbol
			124: R_RISCV_RELAX	\*ABS\*
 128:	0000b093          	sltiu	ra,ra,0
			128: R_RISCV_LO12_I	global_symbol
			128: R_RISCV_RELAX	\*ABS\*
 12c:	00083793          	sltiu	a5,a6,0
			12c: R_RISCV_LO12_I	global_symbol
			12c: R_RISCV_RELAX	\*ABS\*
 130:	00003693          	sltiu	a3,zero,0
			130: R_RISCV_PCREL_LO12_I	global_symbol
			130: R_RISCV_RELAX	\*ABS\*
 134:	000fbf93          	sltiu	t6,t6,0
			134: R_RISCV_PCREL_LO12_I	global_symbol
			134: R_RISCV_RELAX	\*ABS\*
 138:	0000b093          	sltiu	ra,ra,0
			138: R_RISCV_PCREL_LO12_I	global_symbol
			138: R_RISCV_RELAX	\*ABS\*
 13c:	00083793          	sltiu	a5,a6,0
			13c: R_RISCV_PCREL_LO12_I	global_symbol
			13c: R_RISCV_RELAX	\*ABS\*

0000000000000140 <xori>:
 140:	00004693          	xori	a3,zero,0
			140: R_RISCV_LO12_I	global_symbol
			140: R_RISCV_RELAX	\*ABS\*
 144:	000fcf93          	xori	t6,t6,0
			144: R_RISCV_LO12_I	global_symbol
			144: R_RISCV_RELAX	\*ABS\*
 148:	0000c093          	xori	ra,ra,0
			148: R_RISCV_LO12_I	global_symbol
			148: R_RISCV_RELAX	\*ABS\*
 14c:	00084793          	xori	a5,a6,0
			14c: R_RISCV_LO12_I	global_symbol
			14c: R_RISCV_RELAX	\*ABS\*
 150:	00004693          	xori	a3,zero,0
			150: R_RISCV_PCREL_LO12_I	global_symbol
			150: R_RISCV_RELAX	\*ABS\*
 154:	000fcf93          	xori	t6,t6,0
			154: R_RISCV_PCREL_LO12_I	global_symbol
			154: R_RISCV_RELAX	\*ABS\*
 158:	0000c093          	xori	ra,ra,0
			158: R_RISCV_PCREL_LO12_I	global_symbol
			158: R_RISCV_RELAX	\*ABS\*
 15c:	00084793          	xori	a5,a6,0
			15c: R_RISCV_PCREL_LO12_I	global_symbol
			15c: R_RISCV_RELAX	\*ABS\*

0000000000000160 <ori>:
 160:	00006693          	ori	a3,zero,0
			160: R_RISCV_LO12_I	global_symbol
			160: R_RISCV_RELAX	\*ABS\*
 164:	000fef93          	ori	t6,t6,0
			164: R_RISCV_LO12_I	global_symbol
			164: R_RISCV_RELAX	\*ABS\*
 168:	0000e093          	ori	ra,ra,0
			168: R_RISCV_LO12_I	global_symbol
			168: R_RISCV_RELAX	\*ABS\*
 16c:	00086793          	ori	a5,a6,0
			16c: R_RISCV_LO12_I	global_symbol
			16c: R_RISCV_RELAX	\*ABS\*
 170:	00006693          	ori	a3,zero,0
			170: R_RISCV_PCREL_LO12_I	global_symbol
			170: R_RISCV_RELAX	\*ABS\*
 174:	000fef93          	ori	t6,t6,0
			174: R_RISCV_PCREL_LO12_I	global_symbol
			174: R_RISCV_RELAX	\*ABS\*
 178:	0000e093          	ori	ra,ra,0
			178: R_RISCV_PCREL_LO12_I	global_symbol
			178: R_RISCV_RELAX	\*ABS\*
 17c:	00086793          	ori	a5,a6,0
			17c: R_RISCV_PCREL_LO12_I	global_symbol
			17c: R_RISCV_RELAX	\*ABS\*

0000000000000180 <andi>:
 180:	00007693          	andi	a3,zero,0
			180: R_RISCV_LO12_I	global_symbol
			180: R_RISCV_RELAX	\*ABS\*
 184:	000fff93          	andi	t6,t6,0
			184: R_RISCV_LO12_I	global_symbol
			184: R_RISCV_RELAX	\*ABS\*
 188:	0000f093          	andi	ra,ra,0
			188: R_RISCV_LO12_I	global_symbol
			188: R_RISCV_RELAX	\*ABS\*
 18c:	00087793          	andi	a5,a6,0
			18c: R_RISCV_LO12_I	global_symbol
			18c: R_RISCV_RELAX	\*ABS\*
 190:	00007693          	andi	a3,zero,0
			190: R_RISCV_PCREL_LO12_I	global_symbol
			190: R_RISCV_RELAX	\*ABS\*
 194:	000fff93          	andi	t6,t6,0
			194: R_RISCV_PCREL_LO12_I	global_symbol
			194: R_RISCV_RELAX	\*ABS\*
 198:	0000f093          	andi	ra,ra,0
			198: R_RISCV_PCREL_LO12_I	global_symbol
			198: R_RISCV_RELAX	\*ABS\*
 19c:	00087793          	andi	a5,a6,0
			19c: R_RISCV_PCREL_LO12_I	global_symbol
			19c: R_RISCV_RELAX	\*ABS\*

00000000000001a0 <ld>:
 1a0:	00003683          	ld	a3,0\(zero\) # 0 <jalr>
			1a0: R_RISCV_LO12_I	global_symbol
			1a0: R_RISCV_RELAX	\*ABS\*
 1a4:	000fbf83          	ld	t6,0\(t6\)
			1a4: R_RISCV_LO12_I	global_symbol
			1a4: R_RISCV_RELAX	\*ABS\*
 1a8:	0000b083          	ld	ra,0\(ra\)
			1a8: R_RISCV_LO12_I	global_symbol
			1a8: R_RISCV_RELAX	\*ABS\*
 1ac:	00083783          	ld	a5,0\(a6\)
			1ac: R_RISCV_LO12_I	global_symbol
			1ac: R_RISCV_RELAX	\*ABS\*
 1b0:	00003683          	ld	a3,0\(zero\) # 0 <jalr>
			1b0: R_RISCV_PCREL_LO12_I	global_symbol
			1b0: R_RISCV_RELAX	\*ABS\*
 1b4:	000fbf83          	ld	t6,0\(t6\)
			1b4: R_RISCV_PCREL_LO12_I	global_symbol
			1b4: R_RISCV_RELAX	\*ABS\*
 1b8:	0000b083          	ld	ra,0\(ra\)
			1b8: R_RISCV_PCREL_LO12_I	global_symbol
			1b8: R_RISCV_RELAX	\*ABS\*
 1bc:	00083783          	ld	a5,0\(a6\)
			1bc: R_RISCV_PCREL_LO12_I	global_symbol
			1bc: R_RISCV_RELAX	\*ABS\*

00000000000001c0 <addiw>:
 1c0:	0000069b          	sext\.w	a3,zero
			1c0: R_RISCV_LO12_I	global_symbol
			1c0: R_RISCV_RELAX	\*ABS\*
 1c4:	000f8f9b          	sext\.w	t6,t6
			1c4: R_RISCV_LO12_I	global_symbol
			1c4: R_RISCV_RELAX	\*ABS\*
 1c8:	0000809b          	sext\.w	ra,ra
			1c8: R_RISCV_LO12_I	global_symbol
			1c8: R_RISCV_RELAX	\*ABS\*
 1cc:	0008079b          	sext\.w	a5,a6
			1cc: R_RISCV_LO12_I	global_symbol
			1cc: R_RISCV_RELAX	\*ABS\*
 1d0:	0000069b          	sext\.w	a3,zero
			1d0: R_RISCV_PCREL_LO12_I	global_symbol
			1d0: R_RISCV_RELAX	\*ABS\*
 1d4:	000f8f9b          	sext\.w	t6,t6
			1d4: R_RISCV_PCREL_LO12_I	global_symbol
			1d4: R_RISCV_RELAX	\*ABS\*
 1d8:	0000809b          	sext\.w	ra,ra
			1d8: R_RISCV_PCREL_LO12_I	global_symbol
			1d8: R_RISCV_RELAX	\*ABS\*
 1dc:	0008079b          	sext\.w	a5,a6
			1dc: R_RISCV_PCREL_LO12_I	global_symbol
			1dc: R_RISCV_RELAX	\*ABS\*

00000000000001e0 <lui>:
 1e0:	00000037          	lui	zero,0x0
			1e0: R_RISCV_HI20	global_symbol
			1e0: R_RISCV_RELAX	\*ABS\*
 1e4:	00000fb7          	lui	t6,0x0
			1e4: R_RISCV_HI20	global_symbol
			1e4: R_RISCV_RELAX	\*ABS\*
 1e8:	000000b7          	lui	ra,0x0
			1e8: R_RISCV_HI20	global_symbol
			1e8: R_RISCV_RELAX	\*ABS\*
 1ec:	000007b7          	lui	a5,0x0
			1ec: R_RISCV_HI20	global_symbol
			1ec: R_RISCV_RELAX	\*ABS\*
 1f0:	00000037          	lui	zero,0x0
			1f0: R_RISCV_PCREL_HI20	global_symbol
			1f0: R_RISCV_RELAX	\*ABS\*
 1f4:	00000fb7          	lui	t6,0x0
			1f4: R_RISCV_PCREL_HI20	global_symbol
			1f4: R_RISCV_RELAX	\*ABS\*
 1f8:	000000b7          	lui	ra,0x0
			1f8: R_RISCV_PCREL_HI20	global_symbol
			1f8: R_RISCV_RELAX	\*ABS\*
 1fc:	000007b7          	lui	a5,0x0
			1fc: R_RISCV_PCREL_HI20	global_symbol
			1fc: R_RISCV_RELAX	\*ABS\*
 200:	00000037          	lui	zero,0x0
			200: R_RISCV_TLS_GOT_HI20	global_symbol
 204:	00000fb7          	lui	t6,0x0
			204: R_RISCV_TLS_GOT_HI20	global_symbol
 208:	000000b7          	lui	ra,0x0
			208: R_RISCV_TLS_GOT_HI20	global_symbol
 20c:	000007b7          	lui	a5,0x0
			20c: R_RISCV_TLS_GOT_HI20	global_symbol
 210:	00000037          	lui	zero,0x0
			210: R_RISCV_TLS_GD_HI20	global_symbol
 214:	00000fb7          	lui	t6,0x0
			214: R_RISCV_TLS_GD_HI20	global_symbol
 218:	000000b7          	lui	ra,0x0
			218: R_RISCV_TLS_GD_HI20	global_symbol
 21c:	000007b7          	lui	a5,0x0
			21c: R_RISCV_TLS_GD_HI20	global_symbol
 220:	00000037          	lui	zero,0x0
			220: R_RISCV_TPREL_HI20	global_symbol
			220: R_RISCV_RELAX	\*ABS\*
 224:	00000fb7          	lui	t6,0x0
			224: R_RISCV_TPREL_HI20	global_symbol
			224: R_RISCV_RELAX	\*ABS\*
 228:	000000b7          	lui	ra,0x0
			228: R_RISCV_TPREL_HI20	global_symbol
			228: R_RISCV_RELAX	\*ABS\*
 22c:	000007b7          	lui	a5,0x0
			22c: R_RISCV_TPREL_HI20	global_symbol
			22c: R_RISCV_RELAX	\*ABS\*

0000000000000230 <auipc>:
 230:	00000017          	auipc	zero,0x0
			230: R_RISCV_HI20	global_symbol
			230: R_RISCV_RELAX	\*ABS\*
 234:	00000f97          	auipc	t6,0x0
			234: R_RISCV_HI20	global_symbol
			234: R_RISCV_RELAX	\*ABS\*
 238:	00000097          	auipc	ra,0x0
			238: R_RISCV_HI20	global_symbol
			238: R_RISCV_RELAX	\*ABS\*
 23c:	00000797          	auipc	a5,0x0
			23c: R_RISCV_HI20	global_symbol
			23c: R_RISCV_RELAX	\*ABS\*
 240:	00000017          	auipc	zero,0x0
			240: R_RISCV_PCREL_HI20	global_symbol
			240: R_RISCV_RELAX	\*ABS\*
 244:	00000f97          	auipc	t6,0x0
			244: R_RISCV_PCREL_HI20	global_symbol
			244: R_RISCV_RELAX	\*ABS\*
 248:	00000097          	auipc	ra,0x0
			248: R_RISCV_PCREL_HI20	global_symbol
			248: R_RISCV_RELAX	\*ABS\*
 24c:	00000797          	auipc	a5,0x0
			24c: R_RISCV_PCREL_HI20	global_symbol
			24c: R_RISCV_RELAX	\*ABS\*
 250:	00000017          	auipc	zero,0x0
			250: R_RISCV_TLS_GOT_HI20	global_symbol
 254:	00000f97          	auipc	t6,0x0
			254: R_RISCV_TLS_GOT_HI20	global_symbol
 258:	00000097          	auipc	ra,0x0
			258: R_RISCV_TLS_GOT_HI20	global_symbol
 25c:	00000797          	auipc	a5,0x0
			25c: R_RISCV_TLS_GOT_HI20	global_symbol
 260:	00000017          	auipc	zero,0x0
			260: R_RISCV_TLS_GD_HI20	global_symbol
 264:	00000f97          	auipc	t6,0x0
			264: R_RISCV_TLS_GD_HI20	global_symbol
 268:	00000097          	auipc	ra,0x0
			268: R_RISCV_TLS_GD_HI20	global_symbol
 26c:	00000797          	auipc	a5,0x0
			26c: R_RISCV_TLS_GD_HI20	global_symbol
 270:	00000017          	auipc	zero,0x0
			270: R_RISCV_TPREL_HI20	global_symbol
			270: R_RISCV_RELAX	\*ABS\*
 274:	00000f97          	auipc	t6,0x0
			274: R_RISCV_TPREL_HI20	global_symbol
			274: R_RISCV_RELAX	\*ABS\*
 278:	00000097          	auipc	ra,0x0
			278: R_RISCV_TPREL_HI20	global_symbol
			278: R_RISCV_RELAX	\*ABS\*
 27c:	00000797          	auipc	a5,0x0
			27c: R_RISCV_TPREL_HI20	global_symbol
			27c: R_RISCV_RELAX	\*ABS\*
