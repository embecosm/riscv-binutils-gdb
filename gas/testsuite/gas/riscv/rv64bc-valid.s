# RUN: llvm-mc %s -triple=riscv64 -mattr=+b,c -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+b,c < %s \
# RUN:     | llvm-objdump -mattr=+b,c -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: c.not t0
# CHECK-ASM: encoding: [0xc0,0x62]
c.not t0

# CHECK-ASM-AND-OBJ: c.zest.w t0
# CHECK-ASM: encoding: [0xc0,0x6a]
c.zest.w t0
