 .data
foodata: .word 42
 .text
footext:
	.text
	.global lui
lui:
	lui zero,0
	lui a5,1048575
	lui a1,524288
	lui a5,524287
	lui ra,1
	lui a1,945045
	lui s0,1023912
	lui a1,649584
	.text
	.global auipc
auipc:
	auipc zero,0
	auipc a5,1048575
	auipc a1,524288
	auipc a5,524287
	auipc ra,1
	auipc a5,994946
	auipc a3,189309
	auipc t1,862735
	.text
	.global jal
jal:
	jal zero,0
	jal a5,-1
	jal a1,-524288
	jal a5,524287
	jal ra,1
	jal a3,-382361
	jal gp,99145
	jal a2,134386
	.text
	.global jalr
jalr:
	jalr zero,0(zero)
	jalr a5,-1(a5)
	jalr a1,-2048(a1)
	jalr a5,2047(a5)
	jalr ra,1(ra)
	jalr a4,-1208(t0)
	jalr a1,121(a3)
	jalr a4,1500(a4)
	.text
	.global beq
beq:
	beq zero,zero,0
	beq a5,a5,-1
	beq a1,a1,-2048
	beq a5,a5,2047
	beq ra,ra,1
	beq a4,a2,-1174
	beq a4,a5,464
	beq t1,t0,-1808
	.text
	.global bne
bne:
	bne zero,zero,0
	bne a5,a5,-1
	bne a1,a1,-2048
	bne a5,a5,2047
	bne ra,ra,1
	bne tp,a3,1948
	bne t0,a4,1344
	bne tp,t0,-5
	.text
	.global blt
blt:
	blt zero,zero,0
	blt a5,a5,-1
	blt a1,a1,-2048
	blt a5,a5,2047
	blt ra,ra,1
	blt a4,a1,2039
	blt a1,a4,-732
	blt a0,a2,-728
	.text
	.global bge
bge:
	bge zero,zero,0
	bge a5,a5,-1
	bge a1,a1,-2048
	bge a5,a5,2047
	bge ra,ra,1
	bge a3,s1,-374
	bge a1,t0,-628
	bge a3,a1,-1078
	.text
	.global bltu
bltu:
	bltu zero,zero,0
	bltu a5,a5,-1
	bltu a1,a1,-2048
	bltu a5,a5,2047
	bltu ra,ra,1
	bltu t0,t1,280
	bltu a2,sp,-131
	bltu a4,a2,-218
	.text
	.global bgeu
bgeu:
	bgeu zero,zero,0
	bgeu a5,a5,-1
	bgeu a1,a1,-2048
	bgeu a5,a5,2047
	bgeu ra,ra,1
	bgeu s1,t2,-1332
	bgeu a1,t2,-41
	bgeu t1,t2,1976
	.text
	.global lb
lb:
	lb zero,0(zero)
	lb a5,-1(s0)
	lb t1,-2048(zero)
	lb a4,2047(a1)
	lb zero,1(a2)
	lb gp,-91(s0)
	lb a1,-1877(t2)
	lb a5,-277(t2)
	.text
	.global lh
lh:
	lh zero,0(zero)
	lh a5,-1(a5)
	lh a1,-2048(a1)
	lh a5,2047(a5)
	lh ra,1(ra)
	lh a4,-50(t2)
	lh zero,-1100(t0)
	lh ra,-776(ra)
	.text
	.global lw
lw:
	lw zero,0(zero)
	lw a5,-1(a5)
	lw a1,-2048(a1)
	lw a5,2047(a5)
	lw ra,1(ra)
	lw a4,1680(a5)
	lw s0,1722(zero)
	lw s1,-1320(t0)
	.text
	.global lbu
lbu:
	lbu zero,0(zero)
	lbu a5,-1(a5)
	lbu a1,-2048(a1)
	lbu a5,2047(a5)
	lbu ra,1(ra)
	lbu a5,-214(s1)
	lbu gp,1109(ra)
	lbu a2,-1439(a2)
	.text
	.global lhu
lhu:
	lhu zero,0(zero)
	lhu a5,-1(a5)
	lhu a1,-2048(a1)
	lhu a5,2047(a5)
	lhu ra,1(ra)
	lhu s0,-1942(a1)
	lhu t1,1090(s1)
	lhu s0,1063(t0)
	.text
	.global sb
sb:
	sb zero,0(zero)
	sb a5,-1(a5)
	sb a1,-2048(a1)
	sb a5,2047(a5)
	sb ra,1(ra)
	sb a0,365(tp)
	sb a0,1979(t2)
	sb a4,622(t1)
	.text
	.global sh
sh:
	sh zero,0(zero)
	sh a5,-1(a5)
	sh a1,-2048(a1)
	sh a5,2047(a5)
	sh ra,1(ra)
	sh t1,-332(a4)
	sh a5,261(t2)
	sh a5,1429(a3)
	.text
	.global sw
sw:
	sw zero,0(zero)
	sw a5,-1(a5)
	sw a1,-2048(a1)
	sw a5,2047(a5)
	sw ra,1(ra)
	sw zero,-240(a0)
	sw a5,2046(tp)
	sw a4,1356(a0)
	.text
	.global addi
addi:
	addi zero,zero,0
	addi a5,a5,-1
	addi a1,a1,-2048
	addi a5,a5,2047
	addi ra,ra,1
	addi tp,a1,-558
	addi t0,a4,-98
	addi a0,zero,667
	.text
	.global slti
slti:
	slti zero,zero,0
	slti a5,a5,-1
	slti a1,a1,-2048
	slti a5,a5,2047
	slti ra,ra,1
	slti a1,a3,673
	slti t0,s1,-352
	slti t2,a1,-84
	.text
	.global sltiu
sltiu:
	sltiu zero,zero,0
	sltiu a5,a5,-1
	sltiu a1,a1,-2048
	sltiu a5,a5,2047
	sltiu ra,ra,1
	sltiu a5,a4,-1201
	sltiu a5,a4,693
	sltiu a1,s0,1441
	.text
	.global xori
xori:
	xori zero,zero,0
	xori a5,a5,-1
	xori a1,a1,-2048
	xori a5,a5,2047
	xori ra,ra,1
	xori t2,a3,1523
	xori a4,a1,735
	xori a4,a0,2012
	.text
	.global ori
ori:
	ori zero,zero,0
	ori a5,a5,-1
	ori a1,a1,-2048
	ori a5,a5,2047
	ori ra,ra,1
	ori t0,zero,-1842
	ori a3,zero,-1111
	ori a1,a3,1961
	.text
	.global andi
andi:
	andi zero,zero,0
	andi a5,a5,-1
	andi a1,a1,-2048
	andi a5,a5,2047
	andi ra,ra,1
	andi a3,gp,-1
	andi sp,t0,1941
	andi a4,t1,473
	.text
	.global add
add:
	add zero,zero,zero
	add a5,a5,a5
	add a1,a1,a1
	add a5,a5,a5
	add ra,ra,ra
	add a1,a5,t2
	add a3,t2,t1
	add zero,a1,a4
	.text
	.global sub
sub:
	sub zero,zero,zero
	sub a5,a5,a5
	sub a1,a1,a1
	sub a5,a5,a5
	sub ra,ra,ra
	sub a4,a0,t0
	sub t0,s0,s1
	sub t2,tp,s1
	.text
	.global sll
sll:
	sll zero,zero,zero
	sll a5,a5,a5
	sll a1,a1,a1
	sll a5,a5,a5
	sll ra,ra,ra
	sll a0,a0,a5
	sll a1,tp,t0
	sll a2,a4,zero
	.text
	.global slt
slt:
	slt zero,zero,zero
	slt a5,a5,a5
	slt a1,a1,a1
	slt a5,a5,a5
	slt ra,ra,ra
	slt a4,t2,t0
	slt t0,sp,a2
	slt a5,a1,a4
	.text
	.global sltu
sltu:
	sltu zero,zero,zero
	sltu a5,a5,a5
	sltu a1,a1,a1
	sltu a5,a5,a5
	sltu ra,ra,ra
	sltu t2,t0,a4
	sltu gp,a4,a4
	sltu a0,sp,a5
	.text
	.global xor
xor:
	xor zero,zero,zero
	xor a5,a5,a5
	xor a1,a1,a1
	xor a5,a5,a5
	xor ra,ra,ra
	xor s0,tp,t0
	xor a4,t1,a2
	xor t0,a4,s0
	.text
	.global srl
srl:
	srl zero,zero,zero
	srl a5,a5,a5
	srl a1,a1,a1
	srl a5,a5,a5
	srl ra,ra,ra
	srl t0,t1,tp
	srl a4,zero,t0
	srl a2,a0,s0
	.text
	.global sra
sra:
	sra zero,zero,zero
	sra a5,a5,a5
	sra a1,a1,a1
	sra a5,a5,a5
	sra ra,ra,ra
	sra s0,t2,a4
	sra a3,gp,a4
	sra a1,a3,a2
	.text
	.global or
or:
	or zero,zero,zero
	or a5,a5,a5
	or a1,a1,a1
	or a5,a5,a5
	or ra,ra,ra
	or ra,t0,a1
	or a4,t0,a4
	or a4,a1,zero
	.text
	.global and
and:
	and zero,zero,zero
	and a5,a5,a5
	and a1,a1,a1
	and a5,a5,a5
	and ra,ra,ra
	and a2,t2,a5
	and sp,t0,t1
	and sp,a3,t0
	.text
	.global fence
fence:
	fence ,
	fence iorw,iorw
	fence i,i
	fence orw,orw
	fence w,w
	fence o,ow
	fence ow,iw
	fence r,io
	.text
	.global fence_i
fence_i:
	fence.i
	.text
	.global ecall
ecall:
	ecall
	.text
	.global ebreak
ebreak:
	ebreak
	.text
	.global csrrw
csrrw:
	csrrw zero,fflags,zero
	csrrw a5,fflags,a5
	csrrw a1,fflags,a1
	csrrw a5,fflags,a5
	csrrw ra,fflags,ra
	csrrw a4,fflags,a4
	csrrw sp,fflags,a1
	csrrw a4,fflags,gp
	.text
	.global csrrs
csrrs:
	csrrs zero,fflags,zero
	csrrs a5,fflags,a5
	csrrs a1,fflags,a1
	csrrs a5,fflags,a5
	csrrs ra,fflags,ra
	csrrs t1,fflags,s1
	csrrs t0,fflags,a4
	csrrs a3,fflags,t0
	.text
	.global csrrc
csrrc:
	csrrc zero,fflags,zero
	csrrc a5,fflags,a5
	csrrc a1,fflags,a1
	csrrc a5,fflags,a5
	csrrc ra,fflags,ra
	csrrc t0,fflags,a5
	csrrc a1,fflags,t1
	csrrc s0,fflags,a3
	.text
	.global csrrwi
csrrwi:
	csrrwi zero,fflags,0
	csrrwi a5,fflags,31
	csrrwi a1,fflags,16
	csrrwi a5,fflags,15
	csrrwi ra,fflags,1
	csrrwi zero,fflags,13
	csrrwi a1,fflags,29
	csrrwi t0,fflags,29
	.text
	.global csrrsi
csrrsi:
	csrrsi zero,fflags,0
	csrrsi a5,fflags,31
	csrrsi a1,fflags,16
	csrrsi a5,fflags,15
	csrrsi ra,fflags,1
	csrrsi a0,fflags,20
	csrrsi a1,fflags,21
	csrrsi a3,fflags,29
	.text
	.global csrrci
csrrci:
	csrrci zero,fflags,0
	csrrci a5,fflags,31
	csrrci a1,fflags,16
	csrrci a5,fflags,15
	csrrci ra,fflags,1
	csrrci a5,fflags,9
	csrrci a1,fflags,28
	csrrci t1,fflags,16
  .text
  .global uret
uret:
  uret
  .text
  .global sret
sret:
  sret
  .text
  .global hret
hret:
  hret
  .text
  .global mret
mret:
  mret
  .text
  .global dret
dret:
  dret
  .text
  .global wfi
wfi:
  wfi
  .text
  .global sfence_vm
sfence_vm:
  sfence.vm zero
  sfence.vm gp
  sfence.vm x5
  sfence.vm a3
  sfence.vm t2
  sfence.vm x15
  .text
  .global sfence_vma
sfence_vma:
  sfence.vma zero,zero
  sfence.vma zero,a4
  sfence.vma s1,a5
  sfence.vma x7,ra
  sfence.vma a1,a2
  sfence.vma x15,t1
  .text
  .global csr_abs
csr_abs:
  csrrw a4,0x7c1,gp
  csrrs a3,0x7c1,t0
  csrrc s0,0x7c1,a3
  csrrwi t0,0x7c1,29
  csrrsi a3,0x7c1,29
  csrrci t1,0x7c1,16
