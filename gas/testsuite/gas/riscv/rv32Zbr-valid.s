# With B extension:
# RUN: llvm-mc %s -triple=riscv32 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv32 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip CRC extension:
# RUN: llvm-mc %s -triple=riscv32 -mattr=+br -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv32 -mattr=+br < %s \
# RUN:     | llvm-objdump -mattr=+br -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: crc32.b	t0, t1
# CHECK-ASM: encoding: [0x93,0x12,0x03,0x61]
crc32.b	t0, t1
# CHECK-ASM-AND-OBJ: crc32.h	t0, t1
# CHECK-ASM: encoding: [0x93,0x12,0x13,0x61]
crc32.h	t0, t1
# CHECK-ASM-AND-OBJ: crc32.w	t0, t1
# CHECK-ASM: encoding: [0x93,0x12,0x23,0x61]
crc32.w	t0, t1
# CHECK-ASM-AND-OBJ: crc32c.b	t0, t1
# CHECK-ASM: encoding: [0x93,0x12,0x83,0x61]
crc32c.b	t0, t1
# CHECK-ASM-AND-OBJ: crc32c.h	t0, t1
# CHECK-ASM: encoding: [0x93,0x12,0x93,0x61]
crc32c.h	t0, t1
# CHECK-ASM-AND-OBJ: crc32c.w	t0, t1
# CHECK-ASM: encoding: [0x93,0x12,0xa3,0x61]
crc32c.w	t0, t1
