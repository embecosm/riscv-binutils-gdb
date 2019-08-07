# RUN: not llvm-mc -triple riscv32 -mattr=+b,bb,bp < %s 2>&1 | FileCheck %s

# Too few operands
andn s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
orn s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
xnor s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
rol s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
ror s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
rori s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
pack	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
