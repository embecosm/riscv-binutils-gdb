# RUN: not llvm-mc -triple riscv32 -mattr=+b,bs < %s 2>&1 | FileCheck %s

# Too few operands
sbset s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbclr s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbinv s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbext s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbseti s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbclri s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbinvi s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbexti s0, s1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
