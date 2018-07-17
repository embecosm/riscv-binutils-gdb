#as: -march=rv64im
#objdump: -dr
#name: m-common

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <mul>:
   0:	02000033          	mul	zero,zero,zero
   4:	02120233          	mul	tp,tp,ra
   8:	03f30333          	mul	t1,t1,t6
   c:	025888b3          	mul	a7,a7,t0
  10:	02fb8bb3          	mul	s7,s7,a5

0000000000000014 <mulh>:
  14:	02001033          	mulh	zero,zero,zero
  18:	02121233          	mulh	tp,tp,ra
  1c:	03f31333          	mulh	t1,t1,t6
  20:	025898b3          	mulh	a7,a7,t0
  24:	02fb9bb3          	mulh	s7,s7,a5

0000000000000028 <mulhsu>:
  28:	02002033          	mulhsu	zero,zero,zero
  2c:	02122233          	mulhsu	tp,tp,ra
  30:	03f32333          	mulhsu	t1,t1,t6
  34:	0258a8b3          	mulhsu	a7,a7,t0
  38:	02fbabb3          	mulhsu	s7,s7,a5

000000000000003c <mulhu>:
  3c:	02003033          	mulhu	zero,zero,zero
  40:	02123233          	mulhu	tp,tp,ra
  44:	03f33333          	mulhu	t1,t1,t6
  48:	0258b8b3          	mulhu	a7,a7,t0
  4c:	02fbbbb3          	mulhu	s7,s7,a5

0000000000000050 <div>:
  50:	02004033          	div	zero,zero,zero
  54:	02124233          	div	tp,tp,ra
  58:	03f34333          	div	t1,t1,t6
  5c:	0258c8b3          	div	a7,a7,t0
  60:	02fbcbb3          	div	s7,s7,a5

0000000000000064 <divu>:
  64:	02005033          	divu	zero,zero,zero
  68:	02125233          	divu	tp,tp,ra
  6c:	03f35333          	divu	t1,t1,t6
  70:	0258d8b3          	divu	a7,a7,t0
  74:	02fbdbb3          	divu	s7,s7,a5

0000000000000078 <rem>:
  78:	02006033          	rem	zero,zero,zero
  7c:	02126233          	rem	tp,tp,ra
  80:	03f36333          	rem	t1,t1,t6
  84:	0258e8b3          	rem	a7,a7,t0
  88:	02fbebb3          	rem	s7,s7,a5

000000000000008c <remu>:
  8c:	02007033          	remu	zero,zero,zero
  90:	02127233          	remu	tp,tp,ra
  94:	03f37333          	remu	t1,t1,t6
  98:	0258f8b3          	remu	a7,a7,t0
  9c:	02fbfbb3          	remu	s7,s7,a5

00000000000000a0 <mulw>:
  a0:	0200003b          	mulw	zero,zero,zero
  a4:	0212023b          	mulw	tp,tp,ra
  a8:	03f3033b          	mulw	t1,t1,t6
  ac:	025888bb          	mulw	a7,a7,t0
  b0:	02fb8bbb          	mulw	s7,s7,a5

00000000000000b4 <divw>:
  b4:	0200403b          	divw	zero,zero,zero
  b8:	0212423b          	divw	tp,tp,ra
  bc:	03f3433b          	divw	t1,t1,t6
  c0:	0258c8bb          	divw	a7,a7,t0
  c4:	02fbcbbb          	divw	s7,s7,a5

00000000000000c8 <divuw>:
  c8:	0200503b          	divuw	zero,zero,zero
  cc:	0212523b          	divuw	tp,tp,ra
  d0:	03f3533b          	divuw	t1,t1,t6
  d4:	0258d8bb          	divuw	a7,a7,t0
  d8:	02fbdbbb          	divuw	s7,s7,a5

00000000000000dc <remw>:
  dc:	0200603b          	remw	zero,zero,zero
  e0:	0212623b          	remw	tp,tp,ra
  e4:	03f3633b          	remw	t1,t1,t6
  e8:	0258e8bb          	remw	a7,a7,t0
  ec:	02fbebbb          	remw	s7,s7,a5

00000000000000f0 <remuw>:
  f0:	0200703b          	remuw	zero,zero,zero
  f4:	0212723b          	remuw	tp,tp,ra
  f8:	03f3733b          	remuw	t1,t1,t6
  fc:	0258f8bb          	remuw	a7,a7,t0
 100:	02fbfbbb          	remuw	s7,s7,a5
