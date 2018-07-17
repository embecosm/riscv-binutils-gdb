#as: -march=rv64imc
#objdump: -dr
#name: tied_reg

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <add>:
   0:	00018033          	add zero,gp,zero
   4:	9826                	add a6,a6,s1
   6:	951e                	add a0,a0,t2
   8:	963e                	add a2,a2,a5
   a:	97a2                	add a5,a5,s0

000000000000000c <sub>:
   c:	40018033          	sub zero,gp,zero
  10:	41048833          	sub a6,s1,a6
  14:	40750533          	sub a0,a0,t2
  18:	40c78633          	sub a2,a5,a2
  1c:	8f81                	sub a5,a5,s0

000000000000001e <xor>:
  1e:	0001c033          	xor zero,gp,zero
  22:	0104c833          	xor a6,s1,a6
  26:	00754533          	xor a0,a0,t2
  2a:	8e3d                	xor a2,a2,a5
  2c:	8fa1                	xor a5,a5,s0

000000000000002e <or>:
  2e:	0001e033          	or zero,gp,zero
  32:	0104e833          	or a6,s1,a6
  36:	00756533          	or a0,a0,t2
  3a:	8e5d                	or a2,a2,a5
  3c:	8fc1                	or a5,a5,s0

000000000000003e <and>:
  3e:	0001f033          	and zero,gp,zero
  42:	0104f833          	and a6,s1,a6
  46:	00757533          	and a0,a0,t2
  4a:	8e7d                	and a2,a2,a5
  4c:	8fe1                	and a5,a5,s0

000000000000004e <addw>:
  4e:	0001803b          	addw zero,gp,zero
  52:	0104883b          	addw a6,s1,a6
  56:	0075053b          	addw a0,a0,t2
  5a:	9e3d                	addw a2,a2,a5
  5c:	9fa1                	addw a5,a5,s0

000000000000005e <subw>:
  5e:	4001803b          	subw zero,gp,zero
  62:	4104883b          	subw a6,s1,a6
  66:	4075053b          	subw a0,a0,t2
  6a:	40c7863b          	subw a2,a5,a2
  6e:	9f81                	subw a5,a5,s0
