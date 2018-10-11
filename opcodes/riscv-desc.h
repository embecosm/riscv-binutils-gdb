/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* CPU data header for riscv.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2017 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef RISCV_CPU_H
#define RISCV_CPU_H

#ifdef __cplusplus
extern "C" {
#endif

#define CGEN_ARCH riscv

/* Given symbol S, return riscv_cgen_<S>.  */
#define CGEN_SYM(s) riscv##_cgen_##s


/* Selected cpu families.  */
#define HAVE_CPU_RISCV32BF
#define HAVE_CPU_RISCV64BF

#define CGEN_INSN_LSB0_P 1

/* Minimum size of any insn (in bytes).  */
#define CGEN_MIN_INSN_SIZE 4

/* Maximum size of any insn (in bytes).  */
#define CGEN_MAX_INSN_SIZE 4

#define CGEN_INT_INSN_P 1

/* Maximum number of syntax elements in an instruction.  */
#define CGEN_ACTUAL_MAX_SYNTAX_ELEMENTS 25

/* CGEN_MNEMONIC_OPERANDS is defined if mnemonics have operands.
   e.g. In "b,a foo" the ",a" is an operand.  If mnemonics have operands
   we can't hash on everything up to the space.  */
#define CGEN_MNEMONIC_OPERANDS

/* Maximum number of fields in an instruction.  */
#define CGEN_ACTUAL_MAX_IFMT_OPERANDS 8

/* Attributes.  */

/* Enum declaration for machine type selection.  */
typedef enum mach_attr {
  MACH_BASE, MACH_RISCV_RV32, MACH_RISCV_RV64, MACH_MAX
} MACH_ATTR;

/* Enum declaration for instruction set selection.  */
typedef enum isa_attr {
  ISA_RV32, ISA_RV64, ISA_MAX
} ISA_ATTR;

/* Enum declaration for RISC-V Extensions.  */
typedef enum rvext_attr {
  RVEXT_RVNONE, RVEXT_RV32I, RVEXT_RV64I, RVEXT_RV32E
 , RVEXT_RV32M, RVEXT_RV64M, RVEXT_RV32C, RVEXT_RV64C
 , RVEXT_RV32A, RVEXT_RV64A, RVEXT_RV32F, RVEXT_RV64F
 , RVEXT_RV32D, RVEXT_RV64D, RVEXT_RV32Q, RVEXT_RV64Q
} RVEXT_ATTR;

/* Number of architecture variants.  */
#define MAX_ISAS  ((int) ISA_MAX)
#define MAX_MACHS ((int) MACH_MAX)

/* Ifield support.  */

/* Ifield attribute indices.  */

/* Enum declaration for cgen_ifld attrs.  */
typedef enum cgen_ifld_attr {
  CGEN_IFLD_VIRTUAL, CGEN_IFLD_PCREL_ADDR, CGEN_IFLD_ABS_ADDR, CGEN_IFLD_RESERVED
 , CGEN_IFLD_SIGN_OPT, CGEN_IFLD_SIGNED, CGEN_IFLD_END_BOOLS, CGEN_IFLD_START_NBOOLS = 31
 , CGEN_IFLD_MACH, CGEN_IFLD_ISA, CGEN_IFLD_END_NBOOLS
} CGEN_IFLD_ATTR;

/* Number of non-boolean elements in cgen_ifld_attr.  */
#define CGEN_IFLD_NBOOL_ATTRS (CGEN_IFLD_END_NBOOLS - CGEN_IFLD_START_NBOOLS - 1)

/* cgen_ifld attribute accessor macros.  */
#define CGEN_ATTR_CGEN_IFLD_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_IFLD_MACH-CGEN_IFLD_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_IFLD_ISA_VALUE(attrs) ((attrs)->nonbool[CGEN_IFLD_ISA-CGEN_IFLD_START_NBOOLS-1].bitset)
#define CGEN_ATTR_CGEN_IFLD_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_IFLD_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_RESERVED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_RESERVED)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGNED)) != 0)

/* Enum declaration for riscv ifield types.  */
typedef enum ifield_type {
  RISCV_F_NIL, RISCV_F_ANYOF, RISCV_F_DUMMY, RISCV_F_OPCODE
 , RISCV_F_C_OPCODE, RISCV_F_RD, RISCV_F_RS1, RISCV_F_RS2
 , RISCV_F_RS3, RISCV_F_CSR, RISCV_F_SUCC, RISCV_F_PRED
 , RISCV_F_FUNCT5, RISCV_F_FUNCT6, RISCV_F_FUNCT7, RISCV_F_FUNCT3
 , RISCV_F_C_FUNCT3, RISCV_F_C_FUNCT4, RISCV_F_C_FUNCT6, RISCV_F_AQ
 , RISCV_F_RL, RISCV_F_FP2, RISCV_F_UIMM1_21, RISCV_F_UIMM2_32
 , RISCV_F_UIMM2_42, RISCV_F_UIMM3_43, RISCV_F_UIMM1_51, RISCV_F_UIMM3_53
 , RISCV_F_UIMM1_61, RISCV_F_UIMM2_62, RISCV_F_UIMM3_63, RISCV_F_UIMM5_65
 , RISCV_F_UIMM1_71, RISCV_F_UIMM1_81, RISCV_F_UIMM2_82, RISCV_F_UIMM3_93
 , RISCV_F_UIMM2_102, RISCV_F_UIMM4_104, RISCV_F_UIMM1_111, RISCV_F_UIMM2_112
 , RISCV_F_UIMM4_114, RISCV_F_UIMM5_115, RISCV_F_UIMM1_121, RISCV_F_UIMM2_122
 , RISCV_F_UIMM3_123, RISCV_F_UIMM4_124, RISCV_F_UIMM15_1415, RISCV_F_UIMM16_1516
 , RISCV_F_UIMM5_195, RISCV_F_UIMM8_198, RISCV_F_UIMM20_1920, RISCV_F_UIMM1_201
 , RISCV_F_UIMM5_245, RISCV_F_UIMM6_256, RISCV_F_UIMM6_306, RISCV_F_UIMM10_3010
 , RISCV_F_UIMM4_314, RISCV_F_UIMM7_317, RISCV_F_UIMM12_3112, RISCV_F_UIMM32_3132
 , RISCV_F_UIMM32_3120_000000000000, RISCV_F_IMM1_121, RISCV_F_IMM1_311, RISCV_F_IMM7_317
 , RISCV_F_IMM12_3112, RISCV_F_IMM12_317_115, RISCV_F_IMM13_311_71_306_114_0, RISCV_F_IMM21_311_198_201_3010_0
 , RISCV_F_IMM6_121_65, RISCV_F_UIMM6_121_65, RISCV_F_UIMM18_121_65_000000000000, RISCV_F_IMM9_121_62_21_112_42_0
 , RISCV_F_UIMM7_51_123_61_00, RISCV_F_UIMM8_62_123_000, RISCV_F_UIMM10_104_122_51_61_00, RISCV_F_IMM10_121_42_51_21_61_0000
 , RISCV_F_UIMM9_93_123_000, RISCV_F_UIMM8_82_124_00, RISCV_F_IMM12_121_81_102_61_71_21_111_53_0, RISCV_F_UIMM8_32_121_63_00
 , RISCV_F_UIMM9_43_121_62_000, RISCV_F_MAX
} IFIELD_TYPE;

#define MAX_IFLD ((int) RISCV_F_MAX)

/* Hardware attribute indices.  */

/* Enum declaration for cgen_hw attrs.  */
typedef enum cgen_hw_attr {
  CGEN_HW_VIRTUAL, CGEN_HW_CACHE_ADDR, CGEN_HW_PC, CGEN_HW_PROFILE
 , CGEN_HW_END_BOOLS, CGEN_HW_START_NBOOLS = 31, CGEN_HW_MACH, CGEN_HW_ISA
 , CGEN_HW_END_NBOOLS
} CGEN_HW_ATTR;

/* Number of non-boolean elements in cgen_hw_attr.  */
#define CGEN_HW_NBOOL_ATTRS (CGEN_HW_END_NBOOLS - CGEN_HW_START_NBOOLS - 1)

/* cgen_hw attribute accessor macros.  */
#define CGEN_ATTR_CGEN_HW_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_HW_MACH-CGEN_HW_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_HW_ISA_VALUE(attrs) ((attrs)->nonbool[CGEN_HW_ISA-CGEN_HW_START_NBOOLS-1].bitset)
#define CGEN_ATTR_CGEN_HW_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_HW_CACHE_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_CACHE_ADDR)) != 0)
#define CGEN_ATTR_CGEN_HW_PC_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PC)) != 0)
#define CGEN_ATTR_CGEN_HW_PROFILE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PROFILE)) != 0)

/* Enum declaration for riscv hardware types.  */
typedef enum cgen_hw_type {
  HW_H_MEMORY, HW_H_SINT, HW_H_UINT, HW_H_ADDR
 , HW_H_IADDR, HW_H_PC, HW_H_GPR, HW_H_GPR_NOT_ZERO
 , HW_H_GPR_NOT_ZERO_OR_SP, HW_H_ZERO, HW_H_SP, HW_H_C_GPR
 , HW_H_CSR, HW_H_FPR, HW_H_C_FPR, HW_H_OPCODE7
 , HW_H_COPCODE2, HW_MAX
} CGEN_HW_TYPE;

#define MAX_HW ((int) HW_MAX)

/* Operand attribute indices.  */

/* Enum declaration for cgen_operand attrs.  */
typedef enum cgen_operand_attr {
  CGEN_OPERAND_VIRTUAL, CGEN_OPERAND_PCREL_ADDR, CGEN_OPERAND_ABS_ADDR, CGEN_OPERAND_SIGN_OPT
 , CGEN_OPERAND_SIGNED, CGEN_OPERAND_NEGATIVE, CGEN_OPERAND_RELAX, CGEN_OPERAND_SEM_ONLY
 , CGEN_OPERAND_END_BOOLS, CGEN_OPERAND_START_NBOOLS = 31, CGEN_OPERAND_MACH, CGEN_OPERAND_ISA
 , CGEN_OPERAND_END_NBOOLS
} CGEN_OPERAND_ATTR;

/* Number of non-boolean elements in cgen_operand_attr.  */
#define CGEN_OPERAND_NBOOL_ATTRS (CGEN_OPERAND_END_NBOOLS - CGEN_OPERAND_START_NBOOLS - 1)

/* cgen_operand attribute accessor macros.  */
#define CGEN_ATTR_CGEN_OPERAND_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_OPERAND_MACH-CGEN_OPERAND_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_OPERAND_ISA_VALUE(attrs) ((attrs)->nonbool[CGEN_OPERAND_ISA-CGEN_OPERAND_START_NBOOLS-1].bitset)
#define CGEN_ATTR_CGEN_OPERAND_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGNED)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_NEGATIVE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_NEGATIVE)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_RELAX_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_RELAX)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SEM_ONLY_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SEM_ONLY)) != 0)

/* Enum declaration for riscv operand types.  */
typedef enum cgen_operand_type {
  RISCV_OPERAND_PC, RISCV_OPERAND_RD, RISCV_OPERAND_SP_REG, RISCV_OPERAND_RS1
 , RISCV_OPERAND_RS2, RISCV_OPERAND_C_REG117, RISCV_OPERAND_C_REG117_NE0, RISCV_OPERAND_C_REG117_NE0_NE2
 , RISCV_OPERAND_C_REG62, RISCV_OPERAND_C_REG62_NE0, RISCV_OPERAND_C_REG97, RISCV_OPERAND_C_REG42
 , RISCV_OPERAND_C_TIED_REGS97, RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE, RISCV_OPERAND_C_TIED_REGS117, RISCV_OPERAND_C_TIED_REGS117_NE0
 , RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE, RISCV_OPERAND_C_TIED_REGS117_NE0_NE2, RISCV_OPERAND_FL_RD, RISCV_OPERAND_FL_RS1
 , RISCV_OPERAND_FL_RS2, RISCV_OPERAND_FL_RS3, RISCV_OPERAND_FC_RS2, RISCV_OPERAND_FC_RS3
 , RISCV_OPERAND_FL_TIED_REGS1915, RISCV_OPERAND_FL_DUMMY, RISCV_OPERAND_CSR, RISCV_OPERAND_PRED
 , RISCV_OPERAND_SUCC, RISCV_OPERAND_FL_RM, RISCV_OPERAND_TPREL_ADD, RISCV_OPERAND_IMM_ZERO
 , RISCV_OPERAND_UIMM5, RISCV_OPERAND_UIMM5_ABS, RISCV_OPERAND_IMM_LO12, RISCV_OPERAND_IMM_LO12_ABS
 , RISCV_OPERAND_UIMM32_3120_000000000000, RISCV_OPERAND_STORE12, RISCV_OPERAND_BRANCH13, RISCV_OPERAND_JMP21
 , RISCV_OPERAND_IMM6_121_65_ABS, RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS, RISCV_OPERAND_NZIMM6_121_65_ABS, RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS
 , RISCV_OPERAND_CBRANCH9, RISCV_OPERAND_CJMP12, RISCV_OPERAND_UIMM5_245, RISCV_OPERAND_UIMM6_256
 , RISCV_OPERAND_UIMM9_93_123_000_ABS, RISCV_OPERAND_UIMM8_82_124_00_ABS, RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS, RISCV_OPERAND_NZUIMM6_121_65_ABS
 , RISCV_OPERAND_UIMM9_43_121_62_000_ABS, RISCV_OPERAND_UIMM8_32_121_63_00_ABS, RISCV_OPERAND_UIMM7_51_123_61_00_ABS, RISCV_OPERAND_UIMM8_62_123_000_ABS
 , RISCV_OPERAND_OPCODE7, RISCV_OPERAND_COPCODE2, RISCV_OPERAND_FUNCT7, RISCV_OPERAND_FUNCT3
 , RISCV_OPERAND_CFUNCT3, RISCV_OPERAND_CFUNCT4, RISCV_OPERAND_MAX
} CGEN_OPERAND_TYPE;

/* Number of operands types.  */
#define MAX_OPERANDS 62

/* Maximum number of operands referenced by any insn.  */
#define MAX_OPERAND_INSTANCES 8

/* Insn attribute indices.  */

/* Enum declaration for cgen_insn attrs.  */
typedef enum cgen_insn_attr {
  CGEN_INSN_ALIAS, CGEN_INSN_VIRTUAL, CGEN_INSN_UNCOND_CTI, CGEN_INSN_COND_CTI
 , CGEN_INSN_SKIP_CTI, CGEN_INSN_DELAY_SLOT, CGEN_INSN_RELAXABLE, CGEN_INSN_RELAXED
 , CGEN_INSN_NO_DIS, CGEN_INSN_PBB, CGEN_INSN_END_BOOLS, CGEN_INSN_START_NBOOLS = 31
 , CGEN_INSN_MACH, CGEN_INSN_ISA, CGEN_INSN_RVEXT, CGEN_INSN_END_NBOOLS
} CGEN_INSN_ATTR;

/* Number of non-boolean elements in cgen_insn_attr.  */
#define CGEN_INSN_NBOOL_ATTRS (CGEN_INSN_END_NBOOLS - CGEN_INSN_START_NBOOLS - 1)

/* cgen_insn attribute accessor macros.  */
#define CGEN_ATTR_CGEN_INSN_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_INSN_MACH-CGEN_INSN_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_INSN_ISA_VALUE(attrs) ((attrs)->nonbool[CGEN_INSN_ISA-CGEN_INSN_START_NBOOLS-1].bitset)
#define CGEN_ATTR_CGEN_INSN_RVEXT_VALUE(attrs) ((attrs)->nonbool[CGEN_INSN_RVEXT-CGEN_INSN_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_INSN_ALIAS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_ALIAS)) != 0)
#define CGEN_ATTR_CGEN_INSN_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_INSN_UNCOND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_UNCOND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_COND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_COND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_SKIP_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_SKIP_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_DELAY_SLOT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_DELAY_SLOT)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXABLE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXABLE)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXED)) != 0)
#define CGEN_ATTR_CGEN_INSN_NO_DIS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_NO_DIS)) != 0)
#define CGEN_ATTR_CGEN_INSN_PBB_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_PBB)) != 0)

/* cgen.h uses things we just defined.  */
#include "opcode/cgen.h"

extern const struct cgen_ifld riscv_cgen_ifld_table[];

/* Attributes.  */
extern const CGEN_ATTR_TABLE riscv_cgen_hardware_attr_table[];
extern const CGEN_ATTR_TABLE riscv_cgen_ifield_attr_table[];
extern const CGEN_ATTR_TABLE riscv_cgen_operand_attr_table[];
extern const CGEN_ATTR_TABLE riscv_cgen_insn_attr_table[];

/* Hardware decls.  */

extern CGEN_KEYWORD riscv_cgen_opval_h_gpr;
extern CGEN_KEYWORD riscv_cgen_opval_h_gpr_not_zero;
extern CGEN_KEYWORD riscv_cgen_opval_h_gpr_not_zero_or_sp;
extern CGEN_KEYWORD riscv_cgen_opval_h_zero;
extern CGEN_KEYWORD riscv_cgen_opval_h_sp;
extern CGEN_KEYWORD riscv_cgen_opval_h_c_gpr;
extern CGEN_KEYWORD riscv_cgen_opval_h_csr;
extern CGEN_KEYWORD riscv_cgen_opval_h_fpr;
extern CGEN_KEYWORD riscv_cgen_opval_h_c_fpr;
extern CGEN_KEYWORD riscv_cgen_opval_h_opcode7;
extern CGEN_KEYWORD riscv_cgen_opval_h_copcode2;

extern const CGEN_HW_ENTRY riscv_cgen_hw_table[];



   #ifdef __cplusplus
   }
   #endif

#endif /* RISCV_CPU_H */
