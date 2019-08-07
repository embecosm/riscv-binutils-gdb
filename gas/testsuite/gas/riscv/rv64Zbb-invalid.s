# RUN: not llvm-mc -triple riscv64 -mattr=+b,bb < %s 2>&1 | FileCheck %s

# Too many operands
clzw s0, s1, s2 # CHECK: :[[@LINE]]:14: error: invalid operand for instruction
# Too many operands
ctzw s0, s1, s2 # CHECK: :[[@LINE]]:14: error: invalid operand for instruction
# Too many operands
pcntw s0, s1, s2 # CHECK: :[[@LINE]]:15: error: invalid operand for instruction
# Too few operands
slow t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
srow t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sloiw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sroiw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
addiwu t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
slliu.w t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
addwu t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
subwu t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
addu.w t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
subu.w t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
