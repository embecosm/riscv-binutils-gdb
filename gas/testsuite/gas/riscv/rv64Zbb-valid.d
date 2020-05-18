#as: -march=rv64iZbb
#objdump: -dr
#source: rv64Zbb-valid.s

.*:[ 	]+file format .*


Disassembly of section .text:

00000000 <.text>:
[ 	]+0:[ 	]+6003129b[ 	]+clzw[ 	]+t0,t1
[ 	]+4:[ 	]+96121360[ 	]+ctzw[ 	]+t0,t1
[ 	]+8:[ 	]+6023129b[ 	]+pcntw[ 	]+t0,t1
[ 	]+c:[ 	]+207312bb[ 	]+slow[ 	]+t0,t1,t2
[ 	]+10:[ 	]+207352bb[ 	]+srow[ 	]+t0,t1,t2
[ 	]+14:[ 	]+2003129b[ 	]+sloiw[ 	]+t0,t1,0
[ 	]+18:[ 	]+2003529b[ 	]+sroiw[ 	]+t0,t1,0
[ 	]+1c:[ 	]+0003429b[ 	]+addiwu[ 	]+t0,t1,0
[ 	]+20:[ 	]+0803129b[ 	]+slliu.w[ 	]+t0,t1,0
[ 	]+24:[ 	]+0a7302bb[ 	]+addwu[ 	]+t0,t1,t2
[ 	]+28:[ 	]+4a7302bb[ 	]+subwu[ 	]+t0,t1,t2
[ 	]+2c:[ 	]+087302bb[ 	]+addu.w[ 	]+t0,t1,t2
[ 	]+30:[ 	]+487302bb[ 	]+subu.w[ 	]+t0,t1,t2
