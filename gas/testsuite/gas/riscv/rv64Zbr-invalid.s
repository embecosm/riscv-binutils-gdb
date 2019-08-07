# RUN: not llvm-mc -triple riscv64 -mattr=+b,br < %s 2>&1 | FileCheck %s

# Too many operands
crc32.d s0, s1, s2 # CHECK: :[[@LINE]]:17: error: invalid operand for instruction
# Too many operands
crc32c.d s0, s1, s2 # CHECK: :[[@LINE]]:18: error: invalid operand for instruction
