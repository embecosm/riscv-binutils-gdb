# With B extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip single bit extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+bs -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+bs < %s \
# RUN:     | llvm-objdump -mattr=+bs -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: sbsetw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x12,0x73,0x28]
sbsetw t0, t1, t2
# CHECK-ASM-AND-OBJ: sbclrw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x12,0x73,0x48]
sbclrw t0, t1, t2
# CHECK-ASM-AND-OBJ: sbinvw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x12,0x73,0x68]
sbinvw t0, t1, t2
# CHECK-ASM-AND-OBJ: sbextw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x52,0x73,0x48]
sbextw t0, t1, t2
# CHECK-ASM-AND-OBJ: sbsetiw  t0, t1, 31
# CHECK-ASM: encoding: [0x9b,0x12,0xf3,0x29]
sbsetiw	t0, t1, 31
# CHECK-ASM-AND-OBJ: sbsetiw  t0, t1, 0
# CHECK-ASM: encoding: [0x9b,0x12,0x03,0x28]
sbsetiw	t0, t1, 0
# CHECK-ASM-AND-OBJ: sbclriw  t0, t1, 31
# CHECK-ASM: encoding: [0x9b,0x12,0xf3,0x49]
sbclriw	t0, t1, 31
# CHECK-ASM-AND-OBJ: sbclriw  t0, t1, 0
# CHECK-ASM: encoding: [0x9b,0x12,0x03,0x48]
sbclriw	t0, t1, 0
# CHECK-ASM-AND-OBJ: sbinviw  t0, t1, 31
# CHECK-ASM: encoding: [0x9b,0x12,0xf3,0x69]
sbinviw	t0, t1, 31
# CHECK-ASM-AND-OBJ: sbinviw  t0, t1, 0
# CHECK-ASM: encoding: [0x9b,0x12,0x03,0x68]
sbinviw	t0, t1, 0
