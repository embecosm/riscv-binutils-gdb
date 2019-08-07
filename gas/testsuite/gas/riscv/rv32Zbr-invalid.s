# RUN: not llvm-mc -triple riscv32 -mattr=+b,br < %s 2>&1 | FileCheck %s

# Too many operands
crc32.b	s0, s1, s2 # CHECK: :[[@LINE]]:17: error: invalid operand for instruction
# Too many operands
crc32.h	s0, s1, s2 # CHECK: :[[@LINE]]:17: error: invalid operand for instruction
# Too many operands
crc32.w	s0, s1, s2 # CHECK: :[[@LINE]]:17: error: invalid operand for instruction
# Too many operands
crc32c.b s0, s1, s2 # CHECK: :[[@LINE]]:18: error: invalid operand for instruction
# Too many operands
crc32c.h s0, s1, s2 # CHECK: :[[@LINE]]:18: error: invalid operand for instruction
# Too many operands
crc32c.w s0, s1, s2 # CHECK: :[[@LINE]]:18: error: invalid operand for instruction
