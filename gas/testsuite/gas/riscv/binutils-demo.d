#as: -march=rv32gb
#objdump: -dr

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <demo>:
[ 	]+0:[ 	]+00511093[ 	]+slli[ 	]+ra,sp,0x5
[ 	]+4:[ 	]+00515093[ 	]+srli[ 	]+ra,sp,0x5
[ 	]+8:[ 	]+40515093[ 	]+srai[ 	]+ra,sp,0x5
[ 	]+c:[ 	]+403170b3[ 	]+andn[ 	]+ra,sp,gp
[ 	]+10:[ 	]+403160b3[ 	]+orn[ 	]+ra,sp,gp
[ 	]+14:[ 	]+403140b3[ 	]+xnor[ 	]+ra,sp,gp
[ 	]+18:[ 	]+203110b3[ 	]+slo[ 	]+ra,sp,gp
[ 	]+1c:[ 	]+203150b3[ 	]+sro[ 	]+ra,sp,gp
[ 	]+20:[ 	]+603110b3[ 	]+rol[ 	]+ra,sp,gp
[ 	]+24:[ 	]+603150b3[ 	]+ror[ 	]+ra,sp,gp
[ 	]+28:[ 	]+283110b3[ 	]+sbset[ 	]+ra,sp,gp
[ 	]+2c:[ 	]+483110b3[ 	]+sbclr[ 	]+ra,sp,gp
[ 	]+30:[ 	]+683110b3[ 	]+sbinv[ 	]+ra,sp,gp
[ 	]+34:[ 	]+483150b3[ 	]+sbext[ 	]+ra,sp,gp
[ 	]+38:[ 	]+20511093[ 	]+sloi[ 	]+ra,sp,0x5
[ 	]+3c:[ 	]+20515093[ 	]+sroi[ 	]+ra,sp,0x5
[ 	]+40:[ 	]+60515093[ 	]+rori[ 	]+ra,sp,0x5
[ 	]+44:[ 	]+28511093[ 	]+sbseti[ 	]+ra,sp,0x5
[ 	]+48:[ 	]+48511093[ 	]+sbclri[ 	]+ra,sp,0x5
[ 	]+4c:[ 	]+68511093[ 	]+sbinvi[ 	]+ra,sp,0x5
[ 	]+50:[ 	]+48515093[ 	]+sbexti[ 	]+ra,sp,0x5
[ 	]+54:[ 	]+262190b3[ 	]+cmix[ 	]+ra,sp,gp,tp
[ 	]+58:[ 	]+2621d0b3[ 	]+cmov[ 	]+ra,sp,gp,tp
[ 	]+5c:[ 	]+06001033[ 	]+cmix[ 	]+zero,zero,zero,zero
[ 	]+60:[ 	]+06001fb3[ 	]+cmix[ 	]+t6,zero,zero,zero
[ 	]+64:[ 	]+07f01033[ 	]+cmix[ 	]+zero,t6,zero,zero
[ 	]+68:[ 	]+060f9033[ 	]+cmix[ 	]+zero,zero,t6,zero
[ 	]+6c:[ 	]+fe001033[ 	]+cmix[ 	]+zero,zero,zero,t6
[ 	]+70:[ 	]+1c4110b3[ 	]+fsl[ 	]+ra,sp,gp,tp
[ 	]+74:[ 	]+1c4150b3[ 	]+fsr[ 	]+ra,sp,gp,tp
[ 	]+78:[ 	]+1c515093[ 	]+fsri[ 	]+ra,sp,gp,0x5
[ 	]+7c:[ 	]+60011093[ 	]+clz[ 	]+ra,sp
[ 	]+80:[ 	]+60111093[ 	]+ctz[ 	]+ra,sp
[ 	]+84:[ 	]+60211093[ 	]+pcnt[ 	]+ra,sp
[ 	]+88:[ 	]+61011093[ 	]+crc32.b[ 	]+ra,sp
[ 	]+8c:[ 	]+61111093[ 	]+crc32.h[ 	]+ra,sp
[ 	]+90:[ 	]+61211093[ 	]+crc32.w[ 	]+ra,sp
[ 	]+94:[ 	]+61811093[ 	]+crc32c.b[ 	]+ra,sp
[ 	]+98:[ 	]+61911093[ 	]+crc32c.h[ 	]+ra,sp
[ 	]+9c:[ 	]+61a11093[ 	]+crc32c.w[ 	]+ra,sp
[ 	]+a0:[ 	]+0a3110b3[ 	]+clmul[ 	]+ra,sp,gp
[ 	]+a4:[ 	]+0a3130b3[ 	]+clmulh[ 	]+ra,sp,gp
[ 	]+a8:[ 	]+0a3120b3[ 	]+clmulr[ 	]+ra,sp,gp
[ 	]+ac:[ 	]+0a3140b3[ 	]+min[ 	]+ra,sp,gp
[ 	]+b0:[ 	]+0a3150b3[ 	]+max[ 	]+ra,sp,gp
[ 	]+b4:[ 	]+0a3160b3[ 	]+minu[ 	]+ra,sp,gp
[ 	]+b8:[ 	]+0a3170b3[ 	]+maxu[ 	]+ra,sp,gp
[ 	]+bc:[ 	]+083110b3[ 	]+shfl[ 	]+ra,sp,gp
[ 	]+c0:[ 	]+083150b3[ 	]+unshfl[ 	]+ra,sp,gp
[ 	]+c4:[ 	]+08511093[ 	]+shfli[ 	]+ra,sp,0x5
[ 	]+c8:[ 	]+08515093[ 	]+unshfli[ 	]+ra,sp,0x5
[ 	]+cc:[ 	]+083120b3[ 	]+bdep[ 	]+ra,sp,gp
[ 	]+d0:[ 	]+083160b3[ 	]+bext[ 	]+ra,sp,gp
[ 	]+d4:[ 	]+083140b3[ 	]+pack[ 	]+ra,sp,gp
[ 	]+d8:[ 	]+00008067[ 	]+ret
