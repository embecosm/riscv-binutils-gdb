# RUN: not llvm-mc -triple riscv32 -mattr=+b,bt < %s 2>&1 | FileCheck %s

# Too few operands
cmix s0, s1, s2 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
cmov s0, s1, s2 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
fsl s0, s1, s2 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
fsr s0, s1, s2 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
