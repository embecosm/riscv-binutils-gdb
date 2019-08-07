# RUN: not llvm-mc -triple riscv64 -mattr=+b,bm < %s 2>&1 | FileCheck %s

# Too few operands
bmator	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
bmatxor	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too many operands
bmatflip s0, s1, s2 # CHECK: :[[@LINE]]:18: error: invalid operand for instruction
