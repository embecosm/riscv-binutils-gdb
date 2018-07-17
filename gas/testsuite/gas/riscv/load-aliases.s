  .text
  .global la
la:
  la zero,apple
  la sp,banana+123
  la s11,.text
  la ra,.text+500
  .text
  .global lb
lb:
  lb zero,apple
  lb t4,banana-999
  lb s3,.text
  lb gp,.text+66
  .text
  .global lh
lh:
  lh zero,apple
  lh t1,banana+14
  lh s9,.text
  lh sp,.text-66
  .text
  .global lw
lw:
  lw zero,apple
  lw zero,banana+1
  lw t6,.text
  lw ra,.text-0
  .text
  .global ld
ld:
  ld zero,apple
  ld s9,banana-15
  ld a2,.text
  ld a3,.text+26
lla:
  lla zero,cabbage
  lla s10,potato-5050
  lla t1,.text
  lla gp,.text+65536
lbu:
  lbu zero,lemon
  lbu t3,violence
  lbu x25,.text
  lbu gp,.text-33
lhu:
  lhu zero,fear
  lhu t0,exuberance-63
  lhu s2,.text
  lhu x31,.text+282
lwu:
  lwu zero,wine
  lwu zero,grapejuice+0x900d
  lwu s1,.text
  lwu a3,.text+111
  .text
  .global lb_2
lb_2:
  lb zero,(s0)
  .text
  .global lh_2
lh_2:
  lh ra,(a5)
  .text
  .global lw_2
lw_2:
  lw x6,(x9)
  .text
  .global lbu_2
lbu_2:
  lbu x31,(x14)
  .text
  .global lhu_2
lhu_2:
  lhu gp,(sp)
  .text
  .global lwu_2
lwu_2:
  lwu sp,(x25)
  .text
  .global ld_2
ld_2:
  ld sp,(s5)
