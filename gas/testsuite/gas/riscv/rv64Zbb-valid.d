#as: -march=rv64iZbb
#objdump: -dr
#source: rv64Zbb-valid.s

.*:[ 	]+file format .*


Disassembly of section .text:

00000000 <.text>:
[ 	]+0:[ 	]+087322b3[ 	]+clzw[ 	]+t0,t1
[ 	]+4:[ 	]+087362b3[ 	]+ctzw[ 	]+t0,t1
[ 	]+8:[ 	]+087322b3[ 	]+pcntw[ 	]+t0,t1
[ 	]+c:[ 	]+087322b3[ 	]+slow[ 	]+t0,t1,t2
[ 	]+10:[ 	]+087362b3[ 	]+srow[ 	]+t0,t1,t2
[ 	]+14:[ 	]+087322b3[ 	]+sloiw[ 	]+t0,t1,0
[ 	]+18:[ 	]+087362b3[ 	]+sroiw[ 	]+t0,t1,0
[ 	]+1c:[ 	]+087322b3[ 	]+addiwu[ 	]+t0,t1,0
[ 	]+20:[ 	]+087362b3[ 	]+slliu.w[ 	]+t0,t1,0
[ 	]+24:[ 	]+087322b3[ 	]+addwu[ 	]+t0,t1,t2
[ 	]+28:[ 	]+087362b3[ 	]+subwu[ 	]+t0,t1,t2
[ 	]+2c:[ 	]+087322b3[ 	]+addu.w[ 	]+t0,t1,t2
[ 	]+30:[ 	]+087362b3[ 	]+subu.w[ 	]+t0,t1,t2
