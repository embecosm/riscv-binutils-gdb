# RUN: not llvm-mc -triple riscv32 -mattr=+b,bp < %s 2>&1 | FileCheck %s

# Too few operands
grev s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
grevi s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
shfl	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
unshfl	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
shfli t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
unshfli	t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
