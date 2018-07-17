 .data
foodata: .word 42
 .text
footext:
	.text
	.global add
add:
	add zero,gp,zero
	add a6,s1,a6
	add a0,a0,t2
	add a2,a5,a2
	add a5,a5,s0
	.text
	.global sub
sub:
	sub zero,gp,zero
	sub a6,s1,a6
	sub a0,a0,t2
	sub a2,a5,a2
	sub a5,a5,s0
	.text
	.global xor
xor:
	xor zero,gp,zero
	xor a6,s1,a6
	xor a0,a0,t2
	xor a2,a5,a2
	xor a5,a5,s0
	.text
	.global or
or:
	or zero,gp,zero
	or a6,s1,a6
	or a0,a0,t2
	or a2,a5,a2
	or a5,a5,s0
	.text
	.global and
and:
	and zero,gp,zero
	and a6,s1,a6
	and a0,a0,t2
	and a2,a5,a2
	and a5,a5,s0
	.text
	.global addw
addw:
	addw zero,gp,zero
	addw a6,s1,a6
	addw a0,a0,t2
	addw a2,a5,a2
	addw a5,a5,s0
	.text
	.global subw
subw:
	subw zero,gp,zero
	subw a6,s1,a6
	subw a0,a0,t2
	subw a2,a5,a2
	subw a5,a5,s0
