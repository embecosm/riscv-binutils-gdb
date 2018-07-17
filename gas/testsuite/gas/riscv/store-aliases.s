  .text
  .global sb
sb:
  sb zero,apple,zero
  sb zero,banana,t1
  sb t3,cabbage+5,zero
  sb s10,.text+1211,t2
  .text
  .global sh
sh:
  sh zero,apple,zero
  sh ra,banana,sp
  sh zero,cabbage-50,gp
  sh s11,.text-65535,t2
  .text
  .global sw
sw:
  sw zero,apple,zero
  sw t1,banana,t1
  sw s9,cabbage-65536,gp
  sw ra,.text+1,t1
  .text
  .global sd
sd:
  sd zero,apple,zero
  sd gp,banana,t1
  sd t3,cabbage+0,sp
  sd s10,.text+0,ra
  .text
  .global sb_2
sb_2:
  sb zero,(t3)
  .text
  .global sh_2
sh_2:
  sh s9,(s11)
  .text
  .global sw_2
sw_2:
  sw x9,(gp)
  .text
  .global sd_2
sd_2:
  sd sp,(t1)
