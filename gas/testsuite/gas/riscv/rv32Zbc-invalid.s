# RUN: not llvm-mc -triple riscv32 -mattr=+b,bc < %s 2>&1 | FileCheck %s

# Too few operands
clmul	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
clmulr	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
clmulh	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
