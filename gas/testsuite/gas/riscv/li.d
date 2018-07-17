#as: -march=rv64i
#objdump: -dr
#name: li

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <li>:
   0:	00000013          	nop
   4:	fff00013          	li	zero,-1
   8:	0010001b          	addiw	zero,zero,1
   c:	02001013          	slli	zero,zero,0x20
  10:	fff00013          	li	zero,-1
  14:	fff0001b          	addiw	zero,zero,-1
  18:	03f01013          	slli	zero,zero,0x3f
  1c:	00000893          	li	a7,0
  20:	00100093          	li	ra,1
  24:	fff00113          	li	sp,-1
  28:	00014bb7          	lui	s7,0x14
  2c:	2b8b8b9b          	addiw	s7,s7,696
  30:	fffe9c37          	lui	s8,0xfffe9
  34:	5a6c0c1b          	addiw	s8,s8,1446
  38:	00001eb7          	lui	t4,0x1
  3c:	fe1e8e9b          	addiw	t4,t4,-31
  40:	00087f37          	lui	t5,0x87
  44:	261f0f1b          	addiw	t5,t5,609
  48:	fffbbfb7          	lui	t6,0xfffbb
  4c:	ffef8f9b          	addiw	t6,t6,-2
  50:	800001b7          	lui	gp,0x80000
  54:	fff1819b          	addiw	gp,gp,-1
  58:	80000237          	lui	tp,0x80000
  5c:	0010029b          	addiw	t0,zero,1
  60:	01f29293          	slli	t0,t0,0x1f
  64:	fff0031b          	addiw	t1,zero,-1
  68:	01f31313          	slli	t1,t1,0x1f
  6c:	fff30313          	addi	t1,t1,-1
  70:	ffff9cb7          	lui	s9,0xffff9
  74:	afdc8c9b          	addiw	s9,s9,-1283
  78:	011c9c93          	slli	s9,s9,0x11
  7c:	fcdc8c93          	addi	s9,s9,-51 # ffffffffffff8fcd <li\+0xffffffffffff8fcd>
  80:	000a2d37          	lui	s10,0xa2
  84:	6c3d0d1b          	addiw	s10,s10,1731
  88:	00cd1d13          	slli	s10,s10,0xc
  8c:	612d0d13          	addi	s10,s10,1554 # a2612 <li\+0xa2612>
  90:	00004eb7          	lui	t4,0x4
  94:	407e8e9b          	addiw	t4,t4,1031
  98:	011e9e93          	slli	t4,t4,0x11
  9c:	055e8e93          	addi	t4,t4,85 # 4055 <li\+0x4055>
  a0:	00080f37          	lui	t5,0x80
  a4:	101f0f1b          	addiw	t5,t5,257
  a8:	00cf1f13          	slli	t5,t5,0xc
  ac:	00023f37          	lui	t5,0x23
  b0:	aaff0f1b          	addiw	t5,t5,-1361
  b4:	00ef1f13          	slli	t5,t5,0xe
  b8:	880f0f13          	addi	t5,t5,-1920 # 22880 <li\+0x22880>
  bc:	0010039b          	addiw	t2,zero,1
  c0:	02039393          	slli	t2,t2,0x20
  c4:	fff38393          	addi	t2,t2,-1
  c8:	fff0041b          	addiw	s0,zero,-1
  cc:	02041413          	slli	s0,s0,0x20
  d0:	0010049b          	addiw	s1,zero,1
  d4:	02049493          	slli	s1,s1,0x20
  d8:	fff0051b          	addiw	a0,zero,-1
  dc:	02051513          	slli	a0,a0,0x20
  e0:	fff50513          	addi	a0,a0,-1
  e4:	00043db7          	lui	s11,0x43
  e8:	35dd8d9b          	addiw	s11,s11,861
  ec:	00dd9d93          	slli	s11,s11,0xd
  f0:	8b9d8d93          	addi	s11,s11,-1863 # 428b9 <li\+0x428b9>
  f4:	00cd9d93          	slli	s11,s11,0xc
  f8:	22ed8d93          	addi	s11,s11,558
  fc:	b5239e37          	lui	t3,0xb5239
 100:	8a7e0e1b          	addiw	t3,t3,-1881
 104:	00de1e13          	slli	t3,t3,0xd
 108:	9a9e0e13          	addi	t3,t3,-1623 # ffffffffb52389a9 <li\+0xffffffffb52389a9>
 10c:	0010091b          	addiw	s2,zero,1
 110:	03091913          	slli	s2,s2,0x30
 114:	00190913          	addi	s2,s2,1
 118:	00c91913          	slli	s2,s2,0xc
 11c:	fff90913          	addi	s2,s2,-1
 120:	fff0099b          	addiw	s3,zero,-1
 124:	03299993          	slli	s3,s3,0x32
 128:	00198993          	addi	s3,s3,1
 12c:	00d99993          	slli	s3,s3,0xd
 130:	fff98993          	addi	s3,s3,-1
 134:	fff819b7          	lui	s3,0xfff81
 138:	9ef9899b          	addiw	s3,s3,-1553
 13c:	01d99993          	slli	s3,s3,0x1d
 140:	00198993          	addi	s3,s3,1 # fffffffffff81001 <li\+0xfffffffffff81001>
 144:	00d99993          	slli	s3,s3,0xd
 148:	fff98993          	addi	s3,s3,-1
 14c:	fef57a37          	lui	s4,0xfef57
 150:	df7a0a1b          	addiw	s4,s4,-521
 154:	00ca1a13          	slli	s4,s4,0xc
 158:	7e5a0a13          	addi	s4,s4,2021 # fffffffffef577e5 <li\+0xfffffffffef577e5>
 15c:	00ca1a13          	slli	s4,s4,0xc
 160:	5dda0a13          	addi	s4,s4,1501
 164:	00da1a13          	slli	s4,s4,0xd
 168:	00001ab7          	lui	s5,0x1
 16c:	001a8a9b          	addiw	s5,s5,1
 170:	014a9a93          	slli	s5,s5,0x14
 174:	fffa8a93          	addi	s5,s5,-1 # fff <li\+0xfff>
 178:	00ca9a93          	slli	s5,s5,0xc
 17c:	fffffab7          	lui	s5,0xfffff
 180:	001a8a9b          	addiw	s5,s5,1
 184:	014a9a93          	slli	s5,s5,0x14
 188:	fffa8a93          	addi	s5,s5,-1 # ffffffffffffefff <li\+0xffffffffffffefff>
 18c:	00ca9a93          	slli	s5,s5,0xc
 190:	00247b37          	lui	s6,0x247
 194:	8adb0b1b          	addiw	s6,s6,-1875
 198:	00eb1b13          	slli	s6,s6,0xe
 19c:	c4db0b13          	addi	s6,s6,-947 # 246c4d <li\+0x246c4d>
 1a0:	00cb1b13          	slli	s6,s6,0xc
 1a4:	5e7b0b13          	addi	s6,s6,1511
 1a8:	00db1b13          	slli	s6,s6,0xd
 1ac:	ef0b0b13          	addi	s6,s6,-272
 1b0:	fff0059b          	addiw	a1,zero,-1
 1b4:	03f59593          	slli	a1,a1,0x3f
 1b8:	fff58593          	addi	a1,a1,-1
 1bc:	fff0061b          	addiw	a2,zero,-1
 1c0:	03f61613          	slli	a2,a2,0x3f
 1c4:	fff0069b          	addiw	a3,zero,-1
 1c8:	03f69693          	slli	a3,a3,0x3f
 1cc:	fff0069b          	addiw	a3,zero,-1
 1d0:	03f69693          	slli	a3,a3,0x3f
 1d4:	fff68693          	addi	a3,a3,-1
 1d8:	fff156b7          	lui	a3,0xfff15
 1dc:	12d6869b          	addiw	a3,a3,301
 1e0:	00c69693          	slli	a3,a3,0xc
 1e4:	33f68693          	addi	a3,a3,831 # fffffffffff1533f <li\+0xfffffffffff1533f>
 1e8:	00e69693          	slli	a3,a3,0xe
 1ec:	dc368693          	addi	a3,a3,-573
 1f0:	01169693          	slli	a3,a3,0x11
 1f4:	c3168693          	addi	a3,a3,-975
 1f8:	f95826b7          	lui	a3,0xf9582
 1fc:	cef6869b          	addiw	a3,a3,-785
 200:	00c69693          	slli	a3,a3,0xc
 204:	8bf68693          	addi	a3,a3,-1857 # fffffffff95818bf <li\+0xfffffffff95818bf>
 208:	00c69693          	slli	a3,a3,0xc
 20c:	d4b68693          	addi	a3,a3,-693
 210:	00c69693          	slli	a3,a3,0xc
 214:	5c668693          	addi	a3,a3,1478
 218:	ffd7e6b7          	lui	a3,0xffd7e
 21c:	46f6869b          	addiw	a3,a3,1135
 220:	00e69693          	slli	a3,a3,0xe
 224:	6f568693          	addi	a3,a3,1781 # ffffffffffd7e6f5 <li\+0xffffffffffd7e6f5>
 228:	00d69693          	slli	a3,a3,0xd
 22c:	5b968693          	addi	a3,a3,1465
 230:	00e69693          	slli	a3,a3,0xe
 234:	cf068693          	addi	a3,a3,-784
 238:	000261b7          	lui	gp,0x26
 23c:	29b1819b          	addiw	gp,gp,667
 240:	01219193          	slli	gp,gp,0x12
 244:	1fb18193          	addi	gp,gp,507 # 261fb <li\+0x261fb>
 248:	00d19193          	slli	gp,gp,0xd
 24c:	8a318193          	addi	gp,gp,-1885
 250:	00e19193          	slli	gp,gp,0xe
 254:	1f218193          	addi	gp,gp,498
 258:	0a09f537          	lui	a0,0xa09f
 25c:	f095051b          	addiw	a0,a0,-247
 260:	00f51513          	slli	a0,a0,0xf
 264:	89750513          	addi	a0,a0,-1897 # a09e897 <li\+0xa09e897>
 268:	01251513          	slli	a0,a0,0x12
 26c:	00026437          	lui	s0,0x26
 270:	29b4041b          	addiw	s0,s0,667
 274:	01241413          	slli	s0,s0,0x12
 278:	1fb40413          	addi	s0,s0,507 # 261fb <li\+0x261fb>
 27c:	00d41413          	slli	s0,s0,0xd
 280:	8a340413          	addi	s0,s0,-1885
 284:	00e41413          	slli	s0,s0,0xe
 288:	1f240413          	addi	s0,s0,498
 28c:	fff00793          	li	a5,-1
 290:	00100193          	li	gp,1
