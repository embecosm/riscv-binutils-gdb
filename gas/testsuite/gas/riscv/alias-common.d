#as: -march=rv64g
#objdump: -dr
#name: alias-common

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <and>:
   0:	00007013          	andi	zero,zero,0
   4:	fff27213          	andi	tp,tp,-1
   8:	80037313          	andi	t1,t1,-2048
   c:	7ff8f893          	andi	a7,a7,2047
  10:	001bfb93          	andi	s7,s7,1
  14:	fff1f693          	andi	a3,gp,-1
  18:	23f97113          	andi	sp,s2,575
  1c:	07b37f13          	andi	t5,t1,123

0000000000000020 <add>:
  20:	00000013          	nop
  24:	ffff8f93          	addi	t6,t6,-1
  28:	80080813          	addi	a6,a6,-2048
  2c:	7ff78793          	addi	a5,a5,2047
  30:	00108093          	addi	ra,ra,1
  34:	dd280213          	addi	tp,a6,-558
  38:	f9e70913          	addi	s2,a4,-98
  3c:	29b00513          	li	a0,667

0000000000000040 <sll_1>:
  40:	00001013          	slli	zero,zero,0x0
  44:	01ff9f93          	slli	t6,t6,0x1f
  48:	01081813          	slli	a6,a6,0x10
  4c:	00f79793          	slli	a5,a5,0xf
  50:	00109093          	slli	ra,ra,0x1
  54:	01b91e93          	slli	t4,s2,0x1b
  58:	003e9d93          	slli	s11,t4,0x3
  5c:	00a01d13          	slli	s10,zero,0xa

0000000000000060 <srl_1>:
  60:	00005013          	srli	zero,zero,0x0
  64:	01ffdf93          	srli	t6,t6,0x1f
  68:	01085813          	srli	a6,a6,0x10
  6c:	00f7d793          	srli	a5,a5,0xf
  70:	0010d093          	srli	ra,ra,0x1
  74:	0187db93          	srli	s7,a5,0x18
  78:	0137d813          	srli	a6,a5,0x13
  7c:	01d75593          	srli	a1,a4,0x1d

0000000000000080 <sra_1>:
  80:	40005013          	srai	zero,zero,0x0
  84:	41ffdf93          	srai	t6,t6,0x1f
  88:	41085813          	srai	a6,a6,0x10
  8c:	40f7d793          	srai	a5,a5,0xf
  90:	4010d093          	srai	ra,ra,0x1
  94:	40435913          	srai	s2,t1,0x4
  98:	41185113          	srai	sp,a6,0x11
  9c:	4112d613          	srai	a2,t0,0x11

00000000000000a0 <sll_2>:
  a0:	00001013          	slli	zero,zero,0x0
  a4:	03ff9f93          	slli	t6,t6,0x3f
  a8:	02081813          	slli	a6,a6,0x20
  ac:	01f79793          	slli	a5,a5,0x1f
  b0:	00109093          	slli	ra,ra,0x1
  b4:	00129f93          	slli	t6,t0,0x1
  b8:	02c91f13          	slli	t5,s2,0x2c
  bc:	02589293          	slli	t0,a7,0x25

00000000000000c0 <srl_2>:
  c0:	00005013          	srli	zero,zero,0x0
  c4:	03ffdf93          	srli	t6,t6,0x3f
  c8:	02085813          	srli	a6,a6,0x20
  cc:	01f7d793          	srli	a5,a5,0x1f
  d0:	0010d093          	srli	ra,ra,0x1
  d4:	01abd493          	srli	s1,s7,0x1a
  d8:	0117dc93          	srli	s9,a5,0x11
  dc:	023c5c93          	srli	s9,s8,0x23

00000000000000e0 <sra_2>:
  e0:	40005013          	srai	zero,zero,0x0
  e4:	43ffdf93          	srai	t6,t6,0x3f
  e8:	42085813          	srai	a6,a6,0x20
  ec:	41f7d793          	srai	a5,a5,0x1f
  f0:	4010d093          	srai	ra,ra,0x1
  f4:	42ecdf13          	srai	t5,s9,0x2e
  f8:	42265013          	srai	zero,a2,0x22
  fc:	4122d693          	srai	a3,t0,0x12

0000000000000100 <slt>:
 100:	00002013          	slti	zero,zero,0
 104:	ffffaf93          	slti	t6,t6,-1
 108:	80082813          	slti	a6,a6,-2048
 10c:	7ff7a793          	slti	a5,a5,2047
 110:	0010a093          	slti	ra,ra,1
 114:	2a1e2c93          	slti	s9,t3,673
 118:	ea04a913          	slti	s2,s1,-352
 11c:	faccaa93          	slti	s5,s9,-84

0000000000000120 <sltu>:
 120:	00003013          	sltiu	zero,zero,0
 124:	ffffbf93          	sltiu	t6,t6,-1
 128:	80083813          	sltiu	a6,a6,-2048
 12c:	7ff7b793          	sltiu	a5,a5,2047
 130:	0010b093          	seqz	ra,ra
 134:	b4f8bf93          	sltiu	t6,a7,-1201
 138:	2b573793          	sltiu	a5,a4,693
 13c:	5a143813          	sltiu	a6,s0,1441

0000000000000140 <or>:
 140:	00006013          	ori	zero,zero,0
 144:	ffffef93          	ori	t6,t6,-1
 148:	80086813          	ori	a6,a6,-2048
 14c:	7ff7e793          	ori	a5,a5,2047
 150:	0010e093          	ori	ra,ra,1
 154:	8ce06993          	ori	s3,zero,-1842
 158:	ba906693          	ori	a3,zero,-1111
 15c:	7a96ec93          	ori	s9,a3,1961

0000000000000160 <xor>:
 160:	00004013          	xori	zero,zero,0
 164:	ffffcf93          	not	t6,t6
 168:	80084813          	xori	a6,a6,-2048
 16c:	7ff7c793          	xori	a5,a5,2047
 170:	0010c093          	xori	ra,ra,1
 174:	5f3dc393          	xori	t2,s11,1523
 178:	2df84f13          	xori	t5,a6,735
 17c:	7dcc4713          	xori	a4,s8,2012

0000000000000180 <addw>:
 180:	0000001b          	sext\.w	zero,zero
 184:	ffff8f9b          	addiw	t6,t6,-1
 188:	8008081b          	addiw	a6,a6,-2048
 18c:	7ff7879b          	addiw	a5,a5,2047
 190:	0010809b          	addiw	ra,ra,1
 194:	4017891b          	addiw	s2,a5,1025
 198:	f1a3021b          	addiw	tp,t1,-230
 19c:	1c9e889b          	addiw	a7,t4,457

00000000000001a0 <sllw>:
 1a0:	0000101b          	slliw	zero,zero,0x0
 1a4:	01ff9f9b          	slliw	t6,t6,0x1f
 1a8:	0108181b          	slliw	a6,a6,0x10
 1ac:	00f7979b          	slliw	a5,a5,0xf
 1b0:	0010909b          	slliw	ra,ra,0x1
 1b4:	01149c1b          	slliw	s8,s1,0x11
 1b8:	0090151b          	slliw	a0,zero,0x9
 1bc:	013b9c9b          	slliw	s9,s7,0x13

00000000000001c0 <srlw>:
 1c0:	0000501b          	srliw	zero,zero,0x0
 1c4:	01ffdf9b          	srliw	t6,t6,0x1f
 1c8:	0108581b          	srliw	a6,a6,0x10
 1cc:	00f7d79b          	srliw	a5,a5,0xf
 1d0:	0010d09b          	srliw	ra,ra,0x1
 1d4:	01a6db1b          	srliw	s6,a3,0x1a
 1d8:	012e5a9b          	srliw	s5,t3,0x12
 1dc:	00cb569b          	srliw	a3,s6,0xc

00000000000001e0 <sraw>:
 1e0:	4000501b          	sraiw	zero,zero,0x0
 1e4:	41ffdf9b          	sraiw	t6,t6,0x1f
 1e8:	4108581b          	sraiw	a6,a6,0x10
 1ec:	40f7d79b          	sraiw	a5,a5,0xf
 1f0:	4010d09b          	sraiw	ra,ra,0x1
 1f4:	4057d49b          	sraiw	s1,a5,0x5
 1f8:	41c5569b          	sraiw	a3,a0,0x1c
 1fc:	401f509b          	sraiw	ra,t5,0x1

0000000000000200 <nop>:
 200:	00000013          	nop

0000000000000204 <mv>:
 204:	00000013          	nop
 208:	00058593          	mv	a1,a1
 20c:	00070813          	mv	a6,a4
 210:	00008213          	mv	tp,ra

0000000000000214 <move>:
 214:	00000013          	nop
 218:	000f0f13          	mv	t5,t5
 21c:	00068f93          	mv	t6,a3
 220:	000d0113          	mv	sp,s10

0000000000000224 <not>:
 224:	fff04013          	not	zero,zero
 228:	fffc4a93          	not	s5,s8
 22c:	fffd4313          	not	t1,s10
 230:	fff14093          	not	ra,sp
 234:	fff74013          	not	zero,a4

0000000000000238 <neg>:
 238:	40000033          	neg	zero,zero
 23c:	41c00fb3          	neg	t6,t3
 240:	40900033          	neg	zero,s1
 244:	403001b3          	neg	gp,gp
 248:	40200233          	neg	tp,sp

000000000000024c <negw>:
 24c:	4000003b          	negw	zero,zero
 250:	4020033b          	negw	t1,sp
 254:	41000abb          	negw	s5,a6
 258:	4130063b          	negw	a2,s3
 25c:	41f00dbb          	negw	s11,t6

0000000000000260 <sextw>:
 260:	0000001b          	sext\.w	zero,zero
 264:	000a831b          	sext\.w	t1,s5
 268:	0000019b          	sext\.w	gp,zero
 26c:	00030c9b          	sext\.w	s9,t1
 270:	0004041b          	sext\.w	s0,s0

0000000000000274 <seqz>:
 274:	00143013          	seqz	zero,s0
 278:	0014b113          	seqz	sp,s1
 27c:	001dbe13          	seqz	t3,s11
 280:	001e3c13          	seqz	s8,t3

0000000000000284 <snez>:
 284:	00103033          	snez	zero,ra
 288:	00a03c33          	snez	s8,a0
 28c:	01b03333          	snez	t1,s11
 290:	013038b3          	snez	a7,s3

0000000000000294 <sltz>:
 294:	00002033          	sltz	zero,zero
 298:	000325b3          	sltz	a1,t1
 29c:	000427b3          	sltz	a5,s0
 2a0:	000d23b3          	sltz	t2,s10

00000000000002a4 <sgtz>:
 2a4:	007027b3          	sgtz	a5,t2
 2a8:	00002533          	sltz	a0,zero
 2ac:	013025b3          	sgtz	a1,s3
 2b0:	00802233          	sgtz	tp,s0

00000000000002b4 <j>:
 2b4:	0000006f          	j	2b4 <j>
			2b4: R_RISCV_JAL	\*ABS\*
 2b8:	0000006f          	j	2b8 <j\+0x4>
			2b8: R_RISCV_JAL	\*ABS\*-0x1
 2bc:	0000006f          	j	2bc <j\+0x8>
			2bc: R_RISCV_JAL	\*ABS\*-0x80000
 2c0:	0000006f          	j	2c0 <j\+0xc>
			2c0: R_RISCV_JAL	\*ABS\*\+0x7ffff
 2c4:	0000006f          	j	2c4 <j\+0x10>
			2c4: R_RISCV_JAL	\*ABS\*\+0x1
 2c8:	0000006f          	j	2c8 <j\+0x14>
			2c8: R_RISCV_JAL	\*ABS\*-0x5d599
 2cc:	0000006f          	j	2cc <j\+0x18>
			2cc: R_RISCV_JAL	\*ABS\*\+0x18349
 2d0:	0000006f          	j	2d0 <j\+0x1c>
			2d0: R_RISCV_JAL	\*ABS\*\+0x20cf2

00000000000002d4 <jal>:
 2d4:	000000ef          	jal	ra,2d4 <jal>
			2d4: R_RISCV_JAL	\*ABS\*
 2d8:	000000ef          	jal	ra,2d8 <jal\+0x4>
			2d8: R_RISCV_JAL	\*ABS\*-0x1
 2dc:	000000ef          	jal	ra,2dc <jal\+0x8>
			2dc: R_RISCV_JAL	\*ABS\*-0x80000
 2e0:	000000ef          	jal	ra,2e0 <jal\+0xc>
			2e0: R_RISCV_JAL	\*ABS\*\+0x7ffff
 2e4:	000000ef          	jal	ra,2e4 <jal\+0x10>
			2e4: R_RISCV_JAL	\*ABS\*\+0x1
 2e8:	000000ef          	jal	ra,2e8 <jal\+0x14>
			2e8: R_RISCV_JAL	\*ABS\*-0x5d599
 2ec:	000000ef          	jal	ra,2ec <jal\+0x18>
			2ec: R_RISCV_JAL	\*ABS\*\+0x18349
 2f0:	000000ef          	jal	ra,2f0 <jal\+0x1c>
			2f0: R_RISCV_JAL	\*ABS\*\+0x20cf2

00000000000002f4 <jr>:
 2f4:	00000067          	jr	zero # 0 <and>
 2f8:	00020067          	jr	tp # 0 <and>
 2fc:	00018067          	jr	gp
 300:	00028067          	jr	t0
 304:	000d8067          	jr	s11

0000000000000308 <jalr>:
 308:	000000e7          	jalr	zero # 0 <and>
 30c:	000280e7          	jalr	t0
 310:	000a80e7          	jalr	s5
 314:	000f00e7          	jalr	t5
 318:	000780e7          	jalr	a5

000000000000031c <ret>:
 31c:	00008067          	ret

0000000000000320 <fence>:
 320:	0ff0000f          	fence

0000000000000324 <rdinstret>:
 324:	c0202073          	rdinstret	zero
 328:	c02022f3          	rdinstret	t0
 32c:	c0202473          	rdinstret	s0
 330:	c02021f3          	rdinstret	gp

0000000000000334 <rdcycle>:
 334:	c0002ff3          	rdcycle	t6
 338:	c0002873          	rdcycle	a6
 33c:	c0002373          	rdcycle	t1
 340:	c0002273          	rdcycle	tp

0000000000000344 <rdtime>:
 344:	c01022f3          	rdtime	t0
 348:	c0102573          	rdtime	a0
 34c:	c0102073          	rdtime	zero
 350:	c0102f73          	rdtime	t5

0000000000000354 <csrr>:
 354:	00102073          	frflags	zero
 358:	c8202ff3          	csrr	t6,instreth
 35c:	c8202873          	csrr	a6,instreth
 360:	c01027f3          	rdtime	a5
 364:	001020f3          	frflags	ra
 368:	00202373          	frrm	t1
 36c:	c0002973          	rdcycle	s2
 370:	c8002df3          	csrr	s11,cycleh

0000000000000374 <csrw>:
 374:	c8101073          	csrw	timeh,zero
 378:	c00f9073          	csrw	cycle,t6
 37c:	00181073          	fsflags	a6
 380:	00179073          	fsflags	a5
 384:	c0209073          	csrw	instret,ra
 388:	c8071073          	csrw	cycleh,a4
 38c:	c8181073          	csrw	timeh,a6
 390:	00119073          	fsflags	gp

0000000000000394 <csrs>:
 394:	00102073          	frflags	zero
 398:	c82fa073          	csrs	instreth,t6
 39c:	00182073          	csrs	fflags,a6
 3a0:	0037a073          	csrs	fcsr,a5
 3a4:	c810a073          	csrs	timeh,ra
 3a8:	c82ba073          	csrs	instreth,s7
 3ac:	c00f2073          	csrs	cycle,t5
 3b0:	0022a073          	csrs	frm,t0

00000000000003b4 <csrc>:
 3b4:	00203073          	csrc	frm,zero
 3b8:	001fb073          	csrc	fflags,t6
 3bc:	c0083073          	csrc	cycle,a6
 3c0:	c817b073          	csrc	timeh,a5
 3c4:	c820b073          	csrc	instreth,ra
 3c8:	002fb073          	csrc	frm,t6
 3cc:	c80a3073          	csrc	cycleh,s4
 3d0:	c80db073          	csrc	cycleh,s11

00000000000003d4 <csrwi>:
 3d4:	c0105073          	csrwi	time,0
 3d8:	c81fd073          	csrwi	timeh,31
 3dc:	00385073          	csrwi	fcsr,16
 3e0:	c017d073          	csrwi	time,15
 3e4:	c020d073          	csrwi	instret,1
 3e8:	c816d073          	csrwi	timeh,13
 3ec:	c00ed073          	csrwi	cycle,29
 3f0:	c80ed073          	csrwi	cycleh,29

00000000000003f4 <csrsi>:
 3f4:	00106073          	csrsi	fflags,0
 3f8:	c02fe073          	csrsi	instret,31
 3fc:	c8086073          	csrsi	cycleh,16
 400:	0037e073          	csrsi	fcsr,15
 404:	0030e073          	csrsi	fcsr,1
 408:	001a6073          	csrsi	fflags,20
 40c:	001ae073          	csrsi	fflags,21
 410:	c00ee073          	csrsi	cycle,29

0000000000000414 <csrci>:
 414:	c0007073          	csrci	cycle,0
 418:	002ff073          	csrci	frm,31
 41c:	00387073          	csrci	fcsr,16
 420:	c007f073          	csrci	cycle,15
 424:	c020f073          	csrci	instret,1
 428:	c804f073          	csrci	cycleh,9
 42c:	c81e7073          	csrci	timeh,28
 430:	00187073          	csrci	fflags,16

0000000000000434 <frcsr>:
 434:	00302073          	frsr	zero
 438:	00302ff3          	frsr	t6
 43c:	00302973          	frsr	s2
 440:	00302df3          	frsr	s11

0000000000000444 <fscsr_1>:
 444:	00301073          	fssr	zero
 448:	003f9ff3          	fssr	t6,t6
 44c:	00381873          	fssr	a6,a6
 450:	003797f3          	fssr	a5,a5
 454:	003090f3          	fssr	ra,ra
 458:	00371ef3          	fssr	t4,a4
 45c:	00381173          	fssr	sp,a6
 460:	00319773          	fssr	a4,gp

0000000000000464 <fscsr_2>:
 464:	00301073          	fssr	zero
 468:	003f9073          	fssr	t6
 46c:	00381073          	fssr	a6
 470:	00379073          	fssr	a5
 474:	00341073          	fssr	s0
 478:	00371073          	fssr	a4
 47c:	00351073          	fssr	a0
 480:	00319073          	fssr	gp

0000000000000484 <frrm>:
 484:	00202073          	frrm	zero
 488:	00202ff3          	frrm	t6
 48c:	00202973          	frrm	s2
 490:	00202df3          	frrm	s11

0000000000000494 <fsrm_1>:
 494:	00201073          	fsrm	zero
 498:	002f9ff3          	fsrm	t6,t6
 49c:	00281873          	fsrm	a6,a6
 4a0:	002797f3          	fsrm	a5,a5
 4a4:	002090f3          	fsrm	ra,ra
 4a8:	00271ef3          	fsrm	t4,a4
 4ac:	00281173          	fsrm	sp,a6
 4b0:	00219773          	fsrm	a4,gp

00000000000004b4 <fsrm_2>:
 4b4:	00201073          	fsrm	zero
 4b8:	002f9073          	fsrm	t6
 4bc:	00281073          	fsrm	a6
 4c0:	00279073          	fsrm	a5
 4c4:	00241073          	fsrm	s0
 4c8:	00271073          	fsrm	a4
 4cc:	00251073          	fsrm	a0
 4d0:	00219073          	fsrm	gp

00000000000004d4 <frflags>:
 4d4:	00102073          	frflags	zero
 4d8:	00102ff3          	frflags	t6
 4dc:	00102973          	frflags	s2
 4e0:	00102df3          	frflags	s11

00000000000004e4 <fsflags_1>:
 4e4:	00101073          	fsflags	zero
 4e8:	001f9ff3          	fsflags	t6,t6
 4ec:	00181873          	fsflags	a6,a6
 4f0:	001797f3          	fsflags	a5,a5
 4f4:	001090f3          	fsflags	ra,ra
 4f8:	00171ef3          	fsflags	t4,a4
 4fc:	00181173          	fsflags	sp,a6
 500:	00119773          	fsflags	a4,gp

0000000000000504 <fsflags_2>:
 504:	00101073          	fsflags	zero
 508:	001f9073          	fsflags	t6
 50c:	00181073          	fsflags	a6
 510:	00179073          	fsflags	a5
 514:	00141073          	fsflags	s0
 518:	00171073          	fsflags	a4
 51c:	00151073          	fsflags	a0
 520:	00119073          	fsflags	gp

0000000000000524 <beqz>:
 524:	00001463          	bnez	zero,52c <beqz\+0x8>
 528:	0000006f          	j	528 <beqz\+0x4>
			528: R_RISCV_JAL	\*ABS\*
 52c:	000f9463          	bnez	t6,534 <beqz\+0x10>
 530:	0000006f          	j	530 <beqz\+0xc>
			530: R_RISCV_JAL	\*ABS\*-0x1
 534:	00081463          	bnez	a6,53c <beqz\+0x18>
 538:	0000006f          	j	538 <beqz\+0x14>
			538: R_RISCV_JAL	\*ABS\*-0x800
 53c:	00079463          	bnez	a5,544 <beqz\+0x20>
 540:	0000006f          	j	540 <beqz\+0x1c>
			540: R_RISCV_JAL	\*ABS\*\+0x7ff
 544:	00009463          	bnez	ra,54c <beqz\+0x28>
 548:	0000006f          	j	548 <beqz\+0x24>
			548: R_RISCV_JAL	\*ABS\*\+0x1
 54c:	000e9463          	bnez	t4,554 <beqz\+0x30>
 550:	0000006f          	j	550 <beqz\+0x2c>
			550: R_RISCV_JAL	\*ABS\*-0x496
 554:	00071463          	bnez	a4,55c <beqz\+0x38>
 558:	0000006f          	j	558 <beqz\+0x34>
			558: R_RISCV_JAL	\*ABS\*\+0x1d0
 55c:	000a1463          	bnez	s4,564 <bnez>
 560:	0000006f          	j	560 <beqz\+0x3c>
			560: R_RISCV_JAL	\*ABS\*-0x710

0000000000000564 <bnez>:
 564:	00000463          	beqz	zero,56c <bnez\+0x8>
 568:	0000006f          	j	568 <bnez\+0x4>
			568: R_RISCV_JAL	\*ABS\*
 56c:	000f8463          	beqz	t6,574 <bnez\+0x10>
 570:	0000006f          	j	570 <bnez\+0xc>
			570: R_RISCV_JAL	\*ABS\*-0x1
 574:	00080463          	beqz	a6,57c <bnez\+0x18>
 578:	0000006f          	j	578 <bnez\+0x14>
			578: R_RISCV_JAL	\*ABS\*-0x800
 57c:	00078463          	beqz	a5,584 <bnez\+0x20>
 580:	0000006f          	j	580 <bnez\+0x1c>
			580: R_RISCV_JAL	\*ABS\*\+0x7ff
 584:	00008463          	beqz	ra,58c <bnez\+0x28>
 588:	0000006f          	j	588 <bnez\+0x24>
			588: R_RISCV_JAL	\*ABS\*\+0x1
 58c:	000d8463          	beqz	s11,594 <bnez\+0x30>
 590:	0000006f          	j	590 <bnez\+0x2c>
			590: R_RISCV_JAL	\*ABS\*\+0x79c
 594:	000f0463          	beqz	t5,59c <bnez\+0x38>
 598:	0000006f          	j	598 <bnez\+0x34>
			598: R_RISCV_JAL	\*ABS\*\+0x540
 59c:	00028463          	beqz	t0,5a4 <blez>
 5a0:	0000006f          	j	5a0 <bnez\+0x3c>
			5a0: R_RISCV_JAL	\*ABS\*-0x5

00000000000005a4 <blez>:
 5a4:	00004463          	bltz	zero,5ac <blez\+0x8>
 5a8:	0000006f          	j	5a8 <blez\+0x4>
			5a8: R_RISCV_JAL	\*ABS\*
 5ac:	01f04463          	bgtz	t6,5b4 <blez\+0x10>
 5b0:	0000006f          	j	5b0 <blez\+0xc>
			5b0: R_RISCV_JAL	\*ABS\*-0x1
 5b4:	01004463          	bgtz	a6,5bc <blez\+0x18>
 5b8:	0000006f          	j	5b8 <blez\+0x14>
			5b8: R_RISCV_JAL	\*ABS\*-0x800
 5bc:	00f04463          	bgtz	a5,5c4 <blez\+0x20>
 5c0:	0000006f          	j	5c0 <blez\+0x1c>
			5c0: R_RISCV_JAL	\*ABS\*\+0x7ff
 5c4:	00104463          	bgtz	ra,5cc <blez\+0x28>
 5c8:	0000006f          	j	5c8 <blez\+0x24>
			5c8: R_RISCV_JAL	\*ABS\*\+0x1
 5cc:	01904463          	bgtz	s9,5d4 <blez\+0x30>
 5d0:	0000006f          	j	5d0 <blez\+0x2c>
			5d0: R_RISCV_JAL	\*ABS\*\+0x7f7
 5d4:	01104463          	bgtz	a7,5dc <blez\+0x38>
 5d8:	0000006f          	j	5d8 <blez\+0x34>
			5d8: R_RISCV_JAL	\*ABS\*-0x2dc
 5dc:	01a04463          	bgtz	s10,5e4 <bgez>
 5e0:	0000006f          	j	5e0 <blez\+0x3c>
			5e0: R_RISCV_JAL	\*ABS\*-0x2d8

00000000000005e4 <bgez>:
 5e4:	00004463          	bltz	zero,5ec <bgez\+0x8>
 5e8:	0000006f          	j	5e8 <bgez\+0x4>
			5e8: R_RISCV_JAL	\*ABS\*
 5ec:	000fc463          	bltz	t6,5f4 <bgez\+0x10>
 5f0:	0000006f          	j	5f0 <bgez\+0xc>
			5f0: R_RISCV_JAL	\*ABS\*-0x1
 5f4:	00084463          	bltz	a6,5fc <bgez\+0x18>
 5f8:	0000006f          	j	5f8 <bgez\+0x14>
			5f8: R_RISCV_JAL	\*ABS\*-0x800
 5fc:	0007c463          	bltz	a5,604 <bgez\+0x20>
 600:	0000006f          	j	600 <bgez\+0x1c>
			600: R_RISCV_JAL	\*ABS\*\+0x7ff
 604:	0000c463          	bltz	ra,60c <bgez\+0x28>
 608:	0000006f          	j	608 <bgez\+0x24>
			608: R_RISCV_JAL	\*ABS\*\+0x1
 60c:	000bc463          	bltz	s7,614 <bgez\+0x30>
 610:	0000006f          	j	610 <bgez\+0x2c>
			610: R_RISCV_JAL	\*ABS\*-0x176
 614:	0009c463          	bltz	s3,61c <bgez\+0x38>
 618:	0000006f          	j	618 <bgez\+0x34>
			618: R_RISCV_JAL	\*ABS\*-0x274
 61c:	00084463          	bltz	a6,624 <bltz>
 620:	0000006f          	j	620 <bgez\+0x3c>
			620: R_RISCV_JAL	\*ABS\*-0x436

0000000000000624 <bltz>:
 624:	00005463          	blez	zero,62c <bltz\+0x8>
 628:	0000006f          	j	628 <bltz\+0x4>
			628: R_RISCV_JAL	\*ABS\*
 62c:	000fd463          	bgez	t6,634 <bltz\+0x10>
 630:	0000006f          	j	630 <bltz\+0xc>
			630: R_RISCV_JAL	\*ABS\*-0x1
 634:	00085463          	bgez	a6,63c <bltz\+0x18>
 638:	0000006f          	j	638 <bltz\+0x14>
			638: R_RISCV_JAL	\*ABS\*-0x800
 63c:	0007d463          	bgez	a5,644 <bltz\+0x20>
 640:	0000006f          	j	640 <bltz\+0x1c>
			640: R_RISCV_JAL	\*ABS\*\+0x7ff
 644:	0000d463          	bgez	ra,64c <bltz\+0x28>
 648:	0000006f          	j	648 <bltz\+0x24>
			648: R_RISCV_JAL	\*ABS\*\+0x1
 64c:	000a5463          	bgez	s4,654 <bltz\+0x30>
 650:	0000006f          	j	650 <bltz\+0x2c>
			650: R_RISCV_JAL	\*ABS\*\+0x118
 654:	00015463          	bgez	sp,65c <bltz\+0x38>
 658:	0000006f          	j	658 <bltz\+0x34>
			658: R_RISCV_JAL	\*ABS\*-0x83
 65c:	000d5463          	bgez	s10,664 <bgtz>
 660:	0000006f          	j	660 <bltz\+0x3c>
			660: R_RISCV_JAL	\*ABS\*-0xda

0000000000000664 <bgtz>:
 664:	00005463          	blez	zero,66c <bgtz\+0x8>
 668:	0000006f          	j	668 <bgtz\+0x4>
			668: R_RISCV_JAL	\*ABS\*
 66c:	01f05463          	blez	t6,674 <bgtz\+0x10>
 670:	0000006f          	j	670 <bgtz\+0xc>
			670: R_RISCV_JAL	\*ABS\*-0x1
 674:	01005463          	blez	a6,67c <bgtz\+0x18>
 678:	0000006f          	j	678 <bgtz\+0x14>
			678: R_RISCV_JAL	\*ABS\*-0x800
 67c:	00f05463          	blez	a5,684 <bgtz\+0x20>
 680:	0000006f          	j	680 <bgtz\+0x1c>
			680: R_RISCV_JAL	\*ABS\*\+0x7ff
 684:	00105463          	blez	ra,68c <bgtz\+0x28>
 688:	0000006f          	j	688 <bgtz\+0x24>
			688: R_RISCV_JAL	\*ABS\*\+0x1
 68c:	00705463          	blez	t2,694 <bgtz\+0x30>
 690:	0000006f          	j	690 <bgtz\+0x2c>
			690: R_RISCV_JAL	\*ABS\*-0x534
 694:	00705463          	blez	t2,69c <bgtz\+0x38>
 698:	0000006f          	j	698 <bgtz\+0x34>
			698: R_RISCV_JAL	\*ABS\*-0x29
 69c:	00705463          	blez	t2,6a4 <bgt>
 6a0:	0000006f          	j	6a0 <bgtz\+0x3c>
			6a0: R_RISCV_JAL	\*ABS\*\+0x7b8

00000000000006a4 <bgt>:
 6a4:	00005463          	blez	zero,6ac <bgt\+0x8>
 6a8:	0000006f          	j	6a8 <bgt\+0x4>
			6a8: R_RISCV_JAL	\*ABS\*
 6ac:	01ffd463          	ble	t6,t6,6b4 <bgt\+0x10>
 6b0:	0000006f          	j	6b0 <bgt\+0xc>
			6b0: R_RISCV_JAL	\*ABS\*-0x1
 6b4:	01085463          	ble	a6,a6,6bc <bgt\+0x18>
 6b8:	0000006f          	j	6b8 <bgt\+0x14>
			6b8: R_RISCV_JAL	\*ABS\*-0x800
 6bc:	00f7d463          	ble	a5,a5,6c4 <bgt\+0x20>
 6c0:	0000006f          	j	6c0 <bgt\+0x1c>
			6c0: R_RISCV_JAL	\*ABS\*\+0x7ff
 6c4:	0010d463          	ble	ra,ra,6cc <bgt\+0x28>
 6c8:	0000006f          	j	6c8 <bgt\+0x24>
			6c8: R_RISCV_JAL	\*ABS\*\+0x1
 6cc:	00ecd463          	ble	a4,s9,6d4 <bgt\+0x30>
 6d0:	0000006f          	j	6d0 <bgt\+0x2c>
			6d0: R_RISCV_JAL	\*ABS\*\+0x7f7
 6d4:	0108d463          	ble	a6,a7,6dc <bgt\+0x38>
 6d8:	0000006f          	j	6d8 <bgt\+0x34>
			6d8: R_RISCV_JAL	\*ABS\*-0x2dc
 6dc:	018d5463          	ble	s8,s10,6e4 <ble>
 6e0:	0000006f          	j	6e0 <bgt\+0x3c>
			6e0: R_RISCV_JAL	\*ABS\*-0x2d8

00000000000006e4 <ble>:
 6e4:	00004463          	bltz	zero,6ec <ble\+0x8>
 6e8:	0000006f          	j	6e8 <ble\+0x4>
			6e8: R_RISCV_JAL	\*ABS\*
 6ec:	01ffc463          	blt	t6,t6,6f4 <ble\+0x10>
 6f0:	0000006f          	j	6f0 <ble\+0xc>
			6f0: R_RISCV_JAL	\*ABS\*-0x1
 6f4:	01084463          	blt	a6,a6,6fc <ble\+0x18>
 6f8:	0000006f          	j	6f8 <ble\+0x14>
			6f8: R_RISCV_JAL	\*ABS\*-0x800
 6fc:	00f7c463          	blt	a5,a5,704 <ble\+0x20>
 700:	0000006f          	j	700 <ble\+0x1c>
			700: R_RISCV_JAL	\*ABS\*\+0x7ff
 704:	0010c463          	blt	ra,ra,70c <ble\+0x28>
 708:	0000006f          	j	708 <ble\+0x24>
			708: R_RISCV_JAL	\*ABS\*\+0x1
 70c:	01cbc463          	blt	s7,t3,714 <ble\+0x30>
 710:	0000006f          	j	710 <ble\+0x2c>
			710: R_RISCV_JAL	\*ABS\*-0x176
 714:	0109c463          	blt	s3,a6,71c <ble\+0x38>
 718:	0000006f          	j	718 <ble\+0x34>
			718: R_RISCV_JAL	\*ABS\*-0x274
 71c:	01c84463          	blt	a6,t3,724 <bgtu>
 720:	0000006f          	j	720 <ble\+0x3c>
			720: R_RISCV_JAL	\*ABS\*-0x436

0000000000000724 <bgtu>:
 724:	00007463          	bleu	zero,zero,72c <bgtu\+0x8>
 728:	0000006f          	j	728 <bgtu\+0x4>
			728: R_RISCV_JAL	\*ABS\*
 72c:	01fff463          	bleu	t6,t6,734 <bgtu\+0x10>
 730:	0000006f          	j	730 <bgtu\+0xc>
			730: R_RISCV_JAL	\*ABS\*-0x1
 734:	01087463          	bleu	a6,a6,73c <bgtu\+0x18>
 738:	0000006f          	j	738 <bgtu\+0x14>
			738: R_RISCV_JAL	\*ABS\*-0x800
 73c:	00f7f463          	bleu	a5,a5,744 <bgtu\+0x20>
 740:	0000006f          	j	740 <bgtu\+0x1c>
			740: R_RISCV_JAL	\*ABS\*\+0x7ff
 744:	0010f463          	bleu	ra,ra,74c <bgtu\+0x28>
 748:	0000006f          	j	748 <bgtu\+0x24>
			748: R_RISCV_JAL	\*ABS\*\+0x1
 74c:	013a7463          	bleu	s3,s4,754 <bgtu\+0x30>
 750:	0000006f          	j	750 <bgtu\+0x2c>
			750: R_RISCV_JAL	\*ABS\*\+0x118
 754:	01a17463          	bleu	s10,sp,75c <bgtu\+0x38>
 758:	0000006f          	j	758 <bgtu\+0x34>
			758: R_RISCV_JAL	\*ABS\*-0x83
 75c:	01dd7463          	bleu	t4,s10,764 <bleu>
 760:	0000006f          	j	760 <bgtu\+0x3c>
			760: R_RISCV_JAL	\*ABS\*-0xda

0000000000000764 <bleu>:
 764:	00006463          	bltu	zero,zero,76c <bleu\+0x8>
 768:	0000006f          	j	768 <bleu\+0x4>
			768: R_RISCV_JAL	\*ABS\*
 76c:	01ffe463          	bltu	t6,t6,774 <bleu\+0x10>
 770:	0000006f          	j	770 <bleu\+0xc>
			770: R_RISCV_JAL	\*ABS\*-0x1
 774:	01086463          	bltu	a6,a6,77c <bleu\+0x18>
 778:	0000006f          	j	778 <bleu\+0x14>
			778: R_RISCV_JAL	\*ABS\*-0x800
 77c:	00f7e463          	bltu	a5,a5,784 <bleu\+0x20>
 780:	0000006f          	j	780 <bleu\+0x1c>
			780: R_RISCV_JAL	\*ABS\*\+0x7ff
 784:	0010e463          	bltu	ra,ra,78c <bleu\+0x28>
 788:	0000006f          	j	788 <bleu\+0x24>
			788: R_RISCV_JAL	\*ABS\*\+0x1
 78c:	0093e463          	bltu	t2,s1,794 <bleu\+0x30>
 790:	0000006f          	j	790 <bleu\+0x2c>
			790: R_RISCV_JAL	\*ABS\*-0x534
 794:	0193e463          	bltu	t2,s9,79c <bleu\+0x38>
 798:	0000006f          	j	798 <bleu\+0x34>
			798: R_RISCV_JAL	\*ABS\*-0x29
 79c:	0063e463          	bltu	t2,t1,7a4 <sgt>
 7a0:	0000006f          	j	7a0 <bleu\+0x3c>
			7a0: R_RISCV_JAL	\*ABS\*\+0x7b8

00000000000007a4 <sgt>:
 7a4:	00002033          	sltz	zero,zero
 7a8:	00212133          	slt	sp,sp,sp
 7ac:	0031a1b3          	slt	gp,gp,gp
 7b0:	00832333          	slt	t1,t1,s0
 7b4:	015dad33          	slt	s10,s11,s5
 7b8:	01e229b3          	slt	s3,tp,t5
 7bc:	001428b3          	slt	a7,s0,ra
 7c0:	019f26b3          	slt	a3,t5,s9

00000000000007c4 <sgtu>:
 7c4:	00003033          	snez	zero,zero
 7c8:	00423233          	sltu	tp,tp,tp
 7cc:	009ebeb3          	sltu	t4,t4,s1
 7d0:	00083033          	sltu	zero,a6,zero
 7d4:	002436b3          	sltu	a3,s0,sp
 7d8:	003db333          	sltu	t1,s11,gp
 7dc:	00dabc33          	sltu	s8,s5,a3
 7e0:	00a0beb3          	sltu	t4,ra,a0

00000000000007e4 <call>:
 7e4:	00000097          	auipc	ra,0x0
			7e4: R_RISCV_CALL	\*ABS\*
 7e8:	000080e7          	jalr	ra # 7e4 <call>
 7ec:	00000097          	auipc	ra,0x0
			7ec: R_RISCV_CALL	\*ABS\*-0x7258
 7f0:	000080e7          	jalr	ra # 7ec <call\+0x8>
 7f4:	00000097          	auipc	ra,0x0
			7f4: R_RISCV_CALL	\*ABS\*\+0xc917e
 7f8:	000080e7          	jalr	ra # 7f4 <call\+0x10>
 7fc:	00000097          	auipc	ra,0x0
			7fc: R_RISCV_CALL	\*ABS\*\+0x7fffffff
 800:	000080e7          	jalr	ra # 7fc <call\+0x18>
 804:	00000097          	auipc	ra,0x0
			804: R_RISCV_CALL	\*ABS\*-0x80000000
 808:	000080e7          	jalr	ra # 804 <call\+0x20>
 80c:	00000097          	auipc	ra,0x0
			80c: R_RISCV_CALL	sgtu
			80c: R_RISCV_RELAX	\*ABS\*
 810:	000080e7          	jalr	ra # 80c <call\+0x28>
 814:	00000097          	auipc	ra,0x0
			814: R_RISCV_CALL	and
			814: R_RISCV_RELAX	\*ABS\*
 818:	000080e7          	jalr	ra # 814 <call\+0x30>

000000000000081c <\.L1>:
 81c:	00000097          	auipc	ra,0x0
			81c: R_RISCV_CALL	\.L1
			81c: R_RISCV_RELAX	\*ABS\*
 820:	000080e7          	jalr	ra # 81c <\.L1>
 824:	00000097          	auipc	ra,0x0
			824: R_RISCV_CALL	\.L11
			824: R_RISCV_RELAX	\*ABS\*
 828:	000080e7          	jalr	ra # 824 <\.L1\+0x8>

000000000000082c <\.L11>:
 82c:	00000097          	auipc	ra,0x0
			82c: R_RISCV_CALL	call
			82c: R_RISCV_RELAX	\*ABS\*
 830:	000080e7          	jalr	ra # 82c <\.L11>

0000000000000834 <tail>:
 834:	00000317          	auipc	t1,0x0
			834: R_RISCV_CALL	\*ABS\*
 838:	00030067          	jr	t1 # 834 <tail>
 83c:	00000317          	auipc	t1,0x0
			83c: R_RISCV_CALL	\*ABS\*-0x29a
 840:	00030067          	jr	t1 # 83c <tail\+0x8>
 844:	00000317          	auipc	t1,0x0
			844: R_RISCV_CALL	\*ABS\*\+0xe262d
 848:	00030067          	jr	t1 # 844 <tail\+0x10>
 84c:	00000317          	auipc	t1,0x0
			84c: R_RISCV_CALL	\*ABS\*\+0x7fffffff
 850:	00030067          	jr	t1 # 84c <tail\+0x18>
 854:	00000317          	auipc	t1,0x0
			854: R_RISCV_CALL	\*ABS\*-0x80000000
 858:	00030067          	jr	t1 # 854 <tail\+0x20>
 85c:	00000317          	auipc	t1,0x0
			85c: R_RISCV_CALL	tail
			85c: R_RISCV_RELAX	\*ABS\*
 860:	00030067          	jr	t1 # 85c <tail\+0x28>

0000000000000864 <\.L2>:
 864:	00000317          	auipc	t1,0x0
			864: R_RISCV_CALL	\.L2
			864: R_RISCV_RELAX	\*ABS\*
 868:	00030067          	jr	t1 # 864 <\.L2>

000000000000086c <\.L12>:
 86c:	00000317          	auipc	t1,0x0
			86c: R_RISCV_CALL	\.L12
			86c: R_RISCV_RELAX	\*ABS\*
 870:	00030067          	jr	t1 # 86c <\.L12>
 874:	00000317          	auipc	t1,0x0
			874: R_RISCV_CALL	blez
			874: R_RISCV_RELAX	\*ABS\*
 878:	00030067          	jr	t1 # 874 <\.L12\+0x8>

000000000000087c <sfence_vm>:
 87c:	10400073          	sfence\.vm

0000000000000880 <sfence_vma_1>:
 880:	12000073          	sfence\.vma

0000000000000884 <sfence_vma_2>:
 884:	12000073          	sfence\.vma
 888:	120f8073          	sfence\.vma	t6
 88c:	120e8073          	sfence\.vma	t4
 890:	120d8073          	sfence\.vma	s11
 894:	120f8073          	sfence\.vma	t6

0000000000000898 <unimp>:
 898:	c0001073          	unimp

000000000000089c <scall>:
 89c:	00000073          	ecall

00000000000008a0 <sbreak>:
 8a0:	00100073          	ebreak

00000000000008a4 <jalr_2>:
 8a4:	00030067          	jr	t1
 8a8:	00078ae7          	jalr	s5,a5
 8ac:	000181e7          	jalr	gp,gp
 8b0:	00050de7          	jalr	s11,a0

00000000000008b4 <csr_abs>:
 8b4:	7c102df3          	csrr	s11,0x7c1
 8b8:	7c119073          	csrw	0x7c1,gp
 8bc:	7c12a073          	csrs	0x7c1,t0
 8c0:	7c1db073          	csrc	0x7c1,s11
 8c4:	7c1ed073          	csrwi	0x7c1,29
 8c8:	7c1ee073          	csrsi	0x7c1,29
 8cc:	7c187073          	csrci	0x7c1,16

00000000000008d0 <call_2>:
 8d0:	00000317          	auipc	t1,0x0
			8d0: R_RISCV_CALL	\*ABS\*
 8d4:	00030067          	jr	t1 # 8d0 <call_2>
 8d8:	00000317          	auipc	t1,0x0
			8d8: R_RISCV_CALL	\*ABS\*-0x7258
 8dc:	00030ee7          	jalr	t4,t1 # 8d8 <call_2\+0x8>
 8e0:	00000317          	auipc	t1,0x0
			8e0: R_RISCV_CALL	\*ABS\*\+0x1bd3be
 8e4:	00030f67          	jalr	t5,t1 # 8e0 <call_2\+0x10>
 8e8:	00000317          	auipc	t1,0x0
			8e8: R_RISCV_CALL	\*ABS\*\+0x7fffffff
 8ec:	00030d67          	jalr	s10,t1 # 8e8 <call_2\+0x18>
 8f0:	00000317          	auipc	t1,0x0
			8f0: R_RISCV_CALL	\*ABS\*-0x80000000
 8f4:	000302e7          	jalr	t0,t1 # 8f0 <call_2\+0x20>
 8f8:	00000317          	auipc	t1,0x0
			8f8: R_RISCV_CALL	sgtu
			8f8: R_RISCV_RELAX	\*ABS\*
 8fc:	00030fe7          	jalr	t6,t1 # 8f8 <call_2\+0x28>
 900:	00000317          	auipc	t1,0x0
			900: R_RISCV_CALL	and
			900: R_RISCV_RELAX	\*ABS\*
 904:	00030667          	jalr	a2,t1 # 900 <call_2\+0x30>

0000000000000908 <\.L3>:
 908:	00000317          	auipc	t1,0x0
			908: R_RISCV_CALL	\.L3
			908: R_RISCV_RELAX	\*ABS\*
 90c:	00030e67          	jalr	t3,t1 # 908 <\.L3>
 910:	00000317          	auipc	t1,0x0
			910: R_RISCV_CALL	\.L13
			910: R_RISCV_RELAX	\*ABS\*
 914:	00030067          	jr	t1 # 910 <\.L3\+0x8>

0000000000000918 <\.L13>:
 918:	00000317          	auipc	t1,0x0
			918: R_RISCV_CALL	call
			918: R_RISCV_RELAX	\*ABS\*
 91c:	000307e7          	jalr	a5,t1 # 918 <\.L13>
