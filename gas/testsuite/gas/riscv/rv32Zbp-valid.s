# With Bitmanip permutation extension:
# RUN: llvm-mc %s -triple=riscv32 -mattr=+bp -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv32 -mattr=+bp < %s \
# RUN:     | llvm-objdump -mattr=+bp -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: grev t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x12,0x73,0x40]
grev t0, t1, t2
# CHECK-ASM-AND-OBJ: grevi t0, t1, 0
# CHECK-ASM: encoding: [0x93,0x12,0x03,0x40]
grevi t0, t1, 0
# CHECK-ASM-AND-OBJ: shfl t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x12,0x73,0x08]
shfl t0, t1, t2
# CHECK-ASM-AND-OBJ: unshfl t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x22,0x73,0x08]
unshfl t0, t1, t2
# CHECK-ASM-AND-OBJ: shfli t0, t1, 0
# CHECK-ASM: encoding: [0x93,0x12,0x03,0x08]
shfli	t0, t1, 0
# CHECK-ASM-AND-OBJ: unshfli t0, t1, 0
# CHECK-ASM: encoding: [0x93,0x52,0x03,0x08]
unshfli t0, t1, 0
