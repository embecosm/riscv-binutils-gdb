# RUN: not llvm-mc -triple riscv32 -mattr=+b,be < %s 2>&1 | FileCheck %s

# Too few operands
bdep	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
bext	s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
