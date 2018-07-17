	.text
	.global jr
jr:
	c.jr x6
	c.jr x31
	c.jr x15
	c.jr x1

	.text
	.global jalr
jalr:
	c.jalr x6
	c.jalr x31
	c.jalr x15
	c.jalr x1

	.text
	.global mv
mv:
	c.mv x1,x1
	c.mv x31,x1
	c.mv x1,x31
	c.mv x16,x15

	.text
	.global add
add:
	c.add x1,x1
	c.add x31,x1
	c.add x1,x31
	c.add x16,x15

	.text
	.global ebreak
ebreak:
	c.ebreak

	.text
	.global li
li:
	c.li x1,0
	c.li x31,0
	c.li x1,31
	c.li x31,31
	c.li x1,-31
	c.li x31,-31

	.text
	.global addi
addi:
	c.addi x1,1
	c.addi x31,1
	c.addi x1,31
	c.addi x31,-31

	.text
	.global addiw
addiw:
	c.addiw x1,0
	c.addiw x31,0
	c.addiw x1,1
	c.addiw x31,31
	c.addiw x1,-31
	c.addiw x31,-1

	.text
	.global slli
slli:
	c.slli x1,1
	c.slli x31,1
	c.slli x1,63
	c.slli x31,63

	.text
	.global nop
nop:
	c.nop

	.text
	.global ld
ld:
	c.ld x8,0(x8)
	c.ld x15,0(x8)
	c.ld x8,8(x15)
	c.ld x15,16(x15)
	c.ld x8,32(x8)
	c.ld x15,64(x8)
	c.ld x8,128(x15)
	c.ld x15,24(x15)

	.text
	.global lw
lw:
	c.lw x8,0(x8)
	c.lw x15,0(x8)
	c.lw x8,4(x15)
	c.lw x15,8(x15)
	c.lw x8,16(x8)
	c.lw x15,32(x8)
	c.lw x8,64(x15)
	c.lw x15,28(x15)

	.text
	.global sd
sd:
	c.sd x8,0(x8)
	c.sd x15,0(x8)
	c.sd x8,8(x15)
	c.sd x15,16(x15)
	c.sd x8,32(x8)
	c.sd x15,64(x8)
	c.sd x8,128(x15)
	c.sd x15,24(x15)

	.text
	.global sw
sw:
	c.sw x8,0(x8)
	c.sw x15,0(x8)
	c.sw x8,4(x15)
	c.sw x15,8(x15)
	c.sw x8,16(x8)
	c.sw x15,32(x8)
	c.sw x8,64(x15)
	c.sw x15,28(x15)

	.text
	.global addw
addw:
	c.addw x8,x8
	c.addw x15,x8
	c.addw x8,x15
	c.addw x15,x15

	.text
	.global subw
subw:
	c.subw x8,x8
	c.subw x15,x8
	c.subw x8,x15
	c.subw x15,x15

	.text
	.global and
and:
	c.and x8,x8
	c.and x15,x8
	c.and x8,x15
	c.and x15,x15

	.text
	.global or
or:
	c.or x8,x8
	c.or x15,x8
	c.or x8,x15
	c.or x15,x15

	.text
	.global xor
xor:
	c.xor x8,x8
	c.xor x15,x8
	c.xor x8,x15
	c.xor x15,x15

	.text
	.global sub
sub:
	c.sub x8,x8
	c.sub x15,x8
	c.sub x8,x15
	c.sub x15,x15

	.text
	.global srai
srai:
	c.srai x8,1
	c.srai x15,1
	c.srai x8,63
	c.srai x15,63

	.text
	.global srli
srli:
	c.srli x8,1
	c.srli x15,1
	c.srli x8,63
	c.srli x15,63

	.text
	.global addi16sp
addi16sp:
	c.addi16sp x2,16
	c.addi16sp x2,160
	c.addi16sp x2,-160
	c.addi16sp x2,496
	c.addi16sp x2,-512

	.text
	.global addi4spn
addi4spn:
	c.addi4spn x8,x2,4
	c.addi4spn x15,x2,40
	c.addi4spn x8,x2,1020

	.text
	.global sdsp
sdsp:
	c.sdsp x8,8(x2)
	c.sdsp x15,32(x2)
	c.sdsp x8,64(x2)
	c.sdsp x15,128(x2)

	.text
	.global swsp
swsp:
	c.swsp x8,8(x2)
	c.swsp x15,32(x2)
	c.swsp x8,64(x2)
	c.swsp x15,128(x2)

	.text
	.global ldsp
ldsp:
	c.ldsp x8,8(x2)
	c.ldsp x15,32(x2)
	c.ldsp x8,64(x2)
	c.ldsp x15,128(x2)

	.text
	.global lwsp
lwsp:
	c.lwsp x8,8(x2)
	c.lwsp x15,32(x2)
	c.lwsp x8,64(x2)
	c.lwsp x15,128(x2)

	.text
	.global beqz
beqz:
	c.beqz x8,0
	c.beqz x15,0
	c.beqz x8,32
	c.beqz x15,-128

	.text
	.global bnez
bnez:
	c.bnez x8,0
	c.bnez x15,0
	c.bnez x8,32
	c.bnez x15,-128

	.text
	.global j
j:
	c.j 0
	c.j 32
	c.j -128
	c.j -270
	c.j -276

	.text
	.global lui
lui:
	c.lui ra,1
	c.lui a5,4
	c.lui s0,8
	c.lui a6,31

	.text
	.global andi
andi:
	c.andi x8,1
	c.andi x15,1
	c.andi x8,31
	c.andi x15,-31

