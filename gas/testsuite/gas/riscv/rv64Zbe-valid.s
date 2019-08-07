# With B extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip extract/deposit extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+be -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+be < %s \
# RUN:     | llvm-objdump -mattr=+be -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: bdepw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x22,0x73,0x08]
bdepw	t0, t1, t2
# CHECK-ASM-AND-OBJ: bextw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x62,0x73,0x08]
bextw	t0, t1, t2
