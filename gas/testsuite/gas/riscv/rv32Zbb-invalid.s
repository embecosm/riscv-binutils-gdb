# RUN: not llvm-mc -triple riscv32 -mattr=+b,bb < %s 2>&1 | FileCheck %s

# Too few operands
slo s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sro s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sloi s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sroi s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too many operands
clz s0, s1, s2 # CHECK: :[[@LINE]]:13: error: invalid operand for instruction
# Too many operands
ctz s0, s1, s2 # CHECK: :[[@LINE]]:13: error: invalid operand for instruction
# Too many operands
pcnt s0, s1, s2 # CHECK: :[[@LINE]]:14: error: invalid operand for instruction
# Too few operands
min	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
max	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
minu	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
maxu	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
