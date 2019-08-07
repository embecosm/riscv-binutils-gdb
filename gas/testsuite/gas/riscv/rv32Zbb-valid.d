#as: -march=rv32iZbb
#objdump: -dr
#source: rv32Zbb-valid.s

.*:[ 	]+file format .*


Disassembly of section .text:

00000000 <.text>:
[ 	]+0:[ 	]+207312b3[ 	]+slo[ 	]+t0,t1,t2
[ 	]+4:[ 	]+207352b3[ 	]+sro[ 	]+t0,t1,t2
[ 	]+8:[ 	]+21f31293[ 	]+sloi[ 	]+t0,t1,31
[ 	]+c:[ 	]+21f35293[ 	]+sroi[ 	]+t0,t1,31
[ 	]+10:[ 	]+20031293[ 	]+sloi[ 	]+t0,t1,0
[ 	]+14:[ 	]+20035293[ 	]+sroi[ 	]+t0,t1,0
[ 	]+18:[ 	]+60031293[ 	]+clz[ 	]+t0,t1
[ 	]+1c:[ 	]+60131293[ 	]+ctz[ 	]+t0,t1
[ 	]+20:[ 	]+60231293[ 	]+pcnt[ 	]+t0,t1
[ 	]+24:[ 	]+0a7342b3[ 	]+min[ 	]+t0,t1,t2
[ 	]+28:[ 	]+0a7352b3[ 	]+max[ 	]+t0,t1,t2
[ 	]+2c:[ 	]+0a7362b3[ 	]+minu[ 	]+t0,t1,t2
[ 	]+30:[ 	]+0a7372b3[ 	]+maxu[ 	]+t0,t1,t2