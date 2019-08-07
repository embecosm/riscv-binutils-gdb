# With B extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip CRC extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+br -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+br < %s \
# RUN:     | llvm-objdump -mattr=+br -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: crc32.d t0, t1
# CHECK-ASM: encoding: [0x93,0x12,0x33,0x61]
crc32.d t0, t1
# CHECK-ASM-AND-OBJ: crc32c.d t0, t1
# CHECK-ASM: encoding: [0x93,0x12,0xb3,0x61]
crc32c.d t0, t1
