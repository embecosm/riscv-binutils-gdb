	.text
	.global and
and:
	and zero,zero,0
	and tp,tp,-1
	and t1,t1,-2048
	and a7,a7,2047
	and s7,s7,1
	and a3,gp,-1
	and sp,s2,575
	and t5,t1,123
	.text
	.global add
add:
	add zero,zero,0
	add t6,t6,-1
	add a6,a6,-2048
	add a5,a5,2047
	add ra,ra,1
	add tp,a6,-558
	add s2,a4,-98
	add a0,zero,667
	.global sll_1
sll_1:
	sll zero,zero,0
	sll t6,t6,31
	sll a6,a6,16
	sll a5,a5,15
	sll ra,ra,1
	sll t4,s2,27
	sll s11,t4,3
	sll s10,zero,10
	.text
	.global srl_1
srl_1:
	srl zero,zero,0
	srl t6,t6,31
	srl a6,a6,16
	srl a5,a5,15
	srl ra,ra,1
	srl s7,a5,24
	srl a6,a5,19
	srl a1,a4,29
	.text
	.global srai_1
sra_1:
	sra zero,zero,0
	sra t6,t6,31
	sra a6,a6,16
	sra a5,a5,15
	sra ra,ra,1
	sra s2,t1,4
	sra sp,a6,17
	sra a2,t0,17
	.text
	.global sll_2
sll_2:
	sll zero,zero,0
	sll t6,t6,63
	sll a6,a6,32
	sll a5,a5,31
	sll ra,ra,1
	sll t6,t0,1
	sll t5,s2,44
	sll t0,a7,37
	.text
	.global srl_2
srl_2:
	srl zero,zero,0
	srl t6,t6,63
	srl a6,a6,32
	srl a5,a5,31
	srl ra,ra,1
	srl s1,s7,26
	srl s9,a5,17
	srl s9,s8,35
	.text
	.global sra_2
sra_2:
	sra zero,zero,0
	sra t6,t6,63
	sra a6,a6,32
	sra a5,a5,31
	sra ra,ra,1
	sra t5,s9,46
	sra zero,a2,34
	sra a3,t0,18
	.text
	.global slt
slt:
	slt zero,zero,0
	slt t6,t6,-1
	slt a6,a6,-2048
	slt a5,a5,2047
	slt ra,ra,1
	slt s9,t3,673
	slt s2,s1,-352
	slt s5,s9,-84
	.text
	.global sltu
sltu:
	sltu zero,zero,0
	sltu t6,t6,-1
	sltu a6,a6,-2048
	sltu a5,a5,2047
	sltu ra,ra,1
	sltu t6,a7,-1201
	sltu a5,a4,693
	sltu a6,s0,1441
	.text
	.global or
or:
	or zero,zero,0
	or t6,t6,-1
	or a6,a6,-2048
	or a5,a5,2047
	or ra,ra,1
	or s3,zero,-1842
	or a3,zero,-1111
	or s9,a3,1961
	.text
	.global xor
xor:
	xor zero,zero,0
	xor t6,t6,-1
	xor a6,a6,-2048
	xor a5,a5,2047
	xor ra,ra,1
	xor t2,s11,1523
	xor t5,a6,735
	xor a4,s8,2012
	.text
	.global addw
addw:
	addw zero,zero,0
	addw t6,t6,-1
	addw a6,a6,-2048
	addw a5,a5,2047
	addw ra,ra,1
	addw s2,a5,1025
	addw tp,t1,-230
	addw a7,t4,457
	.text
	.global sllw_1
sllw:
	sllw zero,zero,0
	sllw t6,t6,31
	sllw a6,a6,16
	sllw a5,a5,15
	sllw ra,ra,1
	sllw s8,s1,17
	sllw a0,zero,9
	sllw s9,s7,19
	.text
	.global srlw_1
srlw:
	srlw zero,zero,0
	srlw t6,t6,31
	srlw a6,a6,16
	srlw a5,a5,15
	srlw ra,ra,1
	srlw s6,a3,26
	srlw s5,t3,18
	srlw a3,s6,12
	.text
	.global sraw_1
sraw:
	sraw zero,zero,0
	sraw t6,t6,31
	sraw a6,a6,16
	sraw a5,a5,15
	sraw ra,ra,1
	sraw s1,a5,5
	sraw a3,a0,28
	sraw ra,t5,1
  .text
  .global nop
nop:
  nop
  .text
  .global mv
mv:
  mv zero,zero
  mv a1,a1
  mv a6,a4
  mv tp,ra
  .text
  .global move
move:
  move zero,zero
  move t5,t5
  move t6,a3
  move sp,s10
  .text
  .global not
not:
  not zero,zero
  not s5,s8
  not t1,s10
  not ra,sp
  not zero,a4
  .text
  .global neg
neg:
  neg zero,zero
  neg t6,t3
  neg zero,s1
  neg gp,gp
  neg tp,sp
  .text
  .global negw
negw:
  negw zero,zero
  negw t1,sp
  negw s5,a6
  negw a2,s3
  negw s11,t6
  .text
  .global sextw
sextw:
  sext.w zero,zero
  sext.w t1,s5
  sext.w gp,zero
  sext.w s9,t1
  sext.w s0,s0
  .text
  .global seqz
seqz:
  seqz zero,s0
  seqz sp,s1
  seqz t3,s11
  seqz s8,t3
  .text
  .global snez
snez:
  snez zero,ra
  snez s8,a0
  snez t1,s11
  snez a7,s3
  .text
  .global sltz
sltz:
  sltz zero,zero
  sltz a1,t1
  sltz a5,s0
  sltz t2,s10
  .text
  .global sgtz
sgtz:
  sgtz a5,t2
  sgtz a0,zero
  sgtz a1,s3
  sgtz tp,s0
	.text
	.global j
j:
	j 0
	j -1
	j -524288
	j 524287
	j 1
	j -382361
	j 99145
	j 134386
  .text
  .global jal
jal:
	jal 0
	jal -1
	jal -524288
	jal 524287
	jal 1
	jal -382361
	jal 99145
	jal 134386
  .text
  .global jr
jr:
  jr zero
  jr tp
  jr gp
  jr t0
  jr s11
  .text
  .global jalr
jalr:
  jalr zero
  jalr t0
  jalr s5
  jalr t5
  jalr a5
  .text
  .global ret
ret:
  ret
  .text
  .global fence
fence:
  fence
  .text
  .global rdinstret
rdinstret:
  rdinstret zero
  rdinstret t0
  rdinstret s0
  rdinstret gp
#  .text
#  .global rdinstreth
#rdinstreth:
#  rdinstreth a4
#  rdinstreth s2
#  rdinstreth s7
#  rdinstreth zero
  .text
  .global rdcycle
rdcycle:
  rdcycle t6
  rdcycle a6
  rdcycle t1
  rdcycle tp
#  .text
#  .global rdcycleh
#rdcycleh:
#  rdcycleh a5
#  rdcycleh a5
#  rdcycleh s11
#  rdcycleh s0
  .text
  .global rdtime
rdtime:
  rdtime t0
  rdtime a0
  rdtime zero
  rdtime t5
#  .text
#  .global rdtimeh
#rdtimeh:
#  rdtimeh a7
#  rdtimeh s2
#  rdtimeh s3
#  rdtimeh s10
	.text
	.global csrr
csrr:
	csrr zero,fflags
	csrr t6,instreth
	csrr a6,instreth
	csrr a5,time
	csrr ra,fflags
	csrr t1,frm
	csrr s2,cycle
	csrr s11,cycleh
	.text
	.global csrw
csrw:
	csrw timeh,zero
	csrw cycle,t6
	csrw fflags,a6
	csrw fflags,a5
	csrw instret,ra
	csrw cycleh,a4
	csrw timeh,a6
	csrw fflags,gp
	.text
	.global csrs
csrs:
	csrs fflags,zero
	csrs instreth,t6
	csrs fflags,a6
	csrs fcsr,a5
	csrs timeh,ra
	csrs instreth,s7
	csrs cycle,t5
	csrs frm,t0
	.text
	.global csrc
csrc:
	csrc frm,zero
	csrc fflags,t6
	csrc cycle,a6
	csrc timeh,a5
	csrc instreth,ra
	csrc frm,t6
	csrc cycleh,s4
	csrc cycleh,s11
	.text
	.global csrwi
csrwi:
	csrwi time,0
	csrwi timeh,31
	csrwi fcsr,16
	csrwi time,15
	csrwi instret,1
	csrwi timeh,13
	csrwi cycle,29
	csrwi cycleh,29
	.text
	.global csrsi
csrsi:
	csrsi fflags,0
	csrsi instret,31
	csrsi cycleh,16
	csrsi fcsr,15
	csrsi fcsr,1
	csrsi fflags,20
	csrsi fflags,21
	csrsi cycle,29
	.text
	.global csrci
csrci:
	csrci cycle,0
	csrci frm,31
	csrci fcsr,16
	csrci cycle,15
	csrci instret,1
	csrci cycleh,9
	csrci timeh,28
	csrci fflags,16
	.text
	.global frcsr
frcsr:
	frcsr zero
	frcsr t6
	frcsr s2
	frcsr s11
	.text
	.global fscsr_1
fscsr_1:
	fscsr zero,zero
	fscsr t6,t6
	fscsr a6,a6
	fscsr a5,a5
	fscsr ra,ra
	fscsr t4,a4
	fscsr sp,a6
	fscsr a4,gp
	.text
	.global fscsr_2
fscsr_2:
	fscsr zero
	fscsr t6
	fscsr a6
	fscsr a5
	fscsr s0
	fscsr a4
	fscsr a0
	fscsr gp
	.text
	.global frrm
frrm:
	frrm zero
	frrm t6
	frrm s2
	frrm s11
	.text
	.global fsrm_1
fsrm_1:
	fsrm zero,zero
	fsrm t6,t6
	fsrm a6,a6
	fsrm a5,a5
	fsrm ra,ra
	fsrm t4,a4
	fsrm sp,a6
	fsrm a4,gp
	.text
	.global fsrm_2
fsrm_2:
	fsrm zero
	fsrm t6
	fsrm a6
	fsrm a5
	fsrm s0
	fsrm a4
	fsrm a0
	fsrm gp
	.text
	.global frflags
frflags:
	frflags zero
	frflags t6
	frflags s2
	frflags s11
	.text
	.global fsflags_1
fsflags_1:
	fsflags zero,zero
	fsflags t6,t6
	fsflags a6,a6
	fsflags a5,a5
	fsflags ra,ra
	fsflags t4,a4
	fsflags sp,a6
	fsflags a4,gp
	.text
	.global fsflags_2
fsflags_2:
	fsflags zero
	fsflags t6
	fsflags a6
	fsflags a5
	fsflags s0
	fsflags a4
	fsflags a0
	fsflags gp
  .text
  .global beqz
beqz:
	beqz zero,0
	beqz t6,-1
	beqz a6,-2048
	beqz a5,2047
	beqz ra,1
	beqz t4,-1174
	beqz a4,464
	beqz s4,-1808
	.text
	.global bnez
bnez:
	bnez zero,0
	bnez t6,-1
	bnez a6,-2048
	bnez a5,2047
	bnez ra,1
	bnez s11,1948
	bnez t5,1344
	bnez t0,-5
	.text
	.global blez
blez:
	blez zero,0
	blez t6,-1
	blez a6,-2048
	blez a5,2047
	blez ra,1
	blez s9,2039
	blez a7,-732
	blez s10,-728
	.text
	.global bgez
bgez:
	bgez zero,0
	bgez t6,-1
	bgez a6,-2048
	bgez a5,2047
	bgez ra,1
	bgez s7,-374
	bgez s3,-628
	bgez a6,-1078
	.text
	.global bltz
bltz:
	bltz zero,0
	bltz t6,-1
	bltz a6,-2048
	bltz a5,2047
	bltz ra,1
	bltz s4,280
	bltz sp,-131
	bltz s10,-218
	.text
	.global bgtz
bgtz:
	bgtz zero,0
	bgtz t6,-1
	bgtz a6,-2048
	bgtz a5,2047
	bgtz ra,1
	bgtz t2,-1332
	bgtz t2,-41
	bgtz t2,1976
  .text
  .global bgt
bgt:
	bgt zero,zero,0
	bgt t6,t6,-1
	bgt a6,a6,-2048
	bgt a5,a5,2047
	bgt ra,ra,1
	bgt a4,s9,2039
	bgt a6,a7,-732
	bgt s8,s10,-728
	.text
	.global ble
ble:
	ble zero,zero,0
	ble t6,t6,-1
	ble a6,a6,-2048
	ble a5,a5,2047
	ble ra,ra,1
	ble t3,s7,-374
	ble a6,s3,-628
	ble t3,a6,-1078
	.text
	.global bgtu
bgtu:
	bgtu zero,zero,0
	bgtu t6,t6,-1
	bgtu a6,a6,-2048
	bgtu a5,a5,2047
	bgtu ra,ra,1
	bgtu s3,s4,280
	bgtu s10,sp,-131
	bgtu t4,s10,-218
	.text
	.global bleu
bleu:
	bleu zero,zero,0
	bleu t6,t6,-1
	bleu a6,a6,-2048
	bleu a5,a5,2047
	bleu ra,ra,1
	bleu s1,t2,-1332
	bleu s9,t2,-41
	bleu t1,t2,1976
	.text
	.global sgt
sgt:
	sgt zero,zero,zero
	sgt sp,sp,sp
	sgt gp,gp,gp
	sgt t1,s0,t1
	sgt s10,s5,s11
	sgt s3,t5,tp
	sgt a7,ra,s0
	sgt a3,s9,t5
	.text
	.global sgtu
sgtu:
	sgtu zero,zero,zero
	sgtu tp,tp,tp
	sgtu t4,s1,t4
	sgtu zero,zero,a6
	sgtu a3,sp,s0
	sgtu t1,gp,s11
	sgtu s8,a3,s5
	sgtu t4,a0,ra
  .text
  .global call
call:
  call 0
  call -29272
  call 823678
  call 2147483647
  call -2147483648
  call sgtu
  call and
0:
  call 0b
  call 1f
1:
  call call
  .text
  .global tail
tail:
  tail 0
  tail -666
  tail 927277
  tail 2147483647
  tail -2147483648
  tail tail
0:
  tail 0b
1:
  tail 1b
  tail blez
  .text
  .global sfence_vm
sfence_vm:
  sfence.vm
  .text
  .global sfence_vma_1
sfence_vma_1:
  sfence.vma
  .text
  .global sfence_vma_2
sfence_vma_2:
  sfence.vma zero
  sfence.vma t6
  sfence.vma x29
  sfence.vma s11
  sfence.vma x31
  .text
  .global unimp
unimp:
  unimp
  .text
  .global scall
scall:
  scall
  .text
  .global sbreak
sbreak:
  sbreak
  .text
  .global jalr_2
jalr_2:
  jalr zero,t1
  jalr s5,a5
  jalr gp,gp
  jalr s11,a0
  .text
  .global csr_abs
csr_abs:
  csrr s11,0x7c1
  csrw 0x7c1,gp
  csrs 0x7c1,t0
  csrc 0x7c1,s11
  csrwi 0x7c1,29
  csrsi 0x7c1,29
  csrci 0x7c1,16
  .text
  .global call_2
call_2:
  call zero,0
  call t4,-29272
  call t5,1823678
  call s10,2147483647
  call x5,-2147483648
  call x31,sgtu
  call a2,and
0:
  call t3,0b
  call zero,1f
1:
  call a5,call
