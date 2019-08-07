#as: -march=rv64iZbb
#objdump: -dr

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <target>:
[ 	]+0:[ 	]+0af7c7b3[ 	]+min[ 	]+a5,a5,a5
[ 	]+4:[ 	]+0af7d7b3[ 	]+max[ 	]+a5,a5,a5
[ 	]+8:[ 	]+60079793[ 	]+clz[ 	]+a5,a5
[ 	]+c:[ 	]+60179793[ 	]+ctz[ 	]+a5,a5
[ 	]+10:[ 	]+60279793[ 	]+pcnt[ 	]+a5,a5
[ 	]+14:[ 	]+20f797b3[ 	]+slo[ 	]+a5,a5,a5
[ 	]+18:[ 	]+20f7d7b3[ 	]+sro[ 	]+a5,a5,a5
[ 	]+1c:[ 	]+20579793[ 	]+sloi[ 	]+a5,a5,0x5
[ 	]+20:[ 	]+2057d793[ 	]+sroi[ 	]+a5,a5,0x5
[ 	]+24:[ 	]+0af7e7b3[ 	]+minu[ 	]+a5,a5,a5
[ 	]+28:[ 	]+0af7f7b3[ 	]+maxu[ 	]+a5,a5,a5
[ 	]+2c:[ 	]+4d21409b[ 	]+addiwu[ 	]+ra,sp,1234
[ 	]+30:[ 	]+08c1109b[ 	]+slliu.w[ 	]+ra,sp,0xc
[ 	]+34:[ 	]+0a3100bb[ 	]+addwu[ 	]+ra,sp,gp
[ 	]+38:[ 	]+4a3100bb[ 	]+subwu[ 	]+ra,sp,gp
[ 	]+3c:[ 	]+083100bb[ 	]+addu.w[ 	]+ra,sp,gp
[ 	]+40:[ 	]+483100bb[ 	]+subu.w[ 	]+ra,sp,gp
[ 	]+44:[ 	]+40f7f7b3[ 	]+andn[ 	]+a5,a5,a5
[ 	]+48:[ 	]+40f7e7b3[ 	]+orn[ 	]+a5,a5,a5
[ 	]+4c:[ 	]+40f7c7b3[ 	]+xnor[ 	]+a5,a5,a5
[ 	]+50:[ 	]+08f7c7b3[ 	]+pack[ 	]+a5,a5,a5
[ 	]+54:[ 	]+60f797b3[ 	]+rol[ 	]+a5,a5,a5
[ 	]+58:[ 	]+60f7d7b3[ 	]+ror[ 	]+a5,a5,a5
[ 	]+5c:[ 	]+6057d793[ 	]+rori[ 	]+a5,a5,0x5