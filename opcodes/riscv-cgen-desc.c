/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* CPU data for riscv.

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

#include "sysdep.h"
#include <stdio.h>
#include <stdarg.h>
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "riscv-cgen-desc.h"
#include "riscv-cgen-opc.h"
#include "opintl.h"
#include "libiberty.h"
#include "xregex.h"

/* Attributes.  */

static const CGEN_ATTR_ENTRY bool_attr[] =
{
  { "#f", 0 },
  { "#t", 1 },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY MACH_attr[] ATTRIBUTE_UNUSED =
{
  { "base", MACH_BASE },
  { "rv32i", MACH_RV32I },
  { "rv32ic", MACH_RV32IC },
  { "rv32im", MACH_RV32IM },
  { "rv32imc", MACH_RV32IMC },
  { "rv32g", MACH_RV32G },
  { "rv32gc", MACH_RV32GC },
  { "rv32gqc", MACH_RV32GQC },
  { "rv64i", MACH_RV64I },
  { "rv64ic", MACH_RV64IC },
  { "rv64im", MACH_RV64IM },
  { "rv64imc", MACH_RV64IMC },
  { "rv64g", MACH_RV64G },
  { "rv64gc", MACH_RV64GC },
  { "rv64gqc", MACH_RV64GQC },
  { "max", MACH_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY ISA_attr[] ATTRIBUTE_UNUSED =
{
  { "rv32", ISA_RV32 },
  { "rv64", ISA_RV64 },
  { "max", ISA_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY RVEXT_attr[] ATTRIBUTE_UNUSED =
{
  { "RVNONE", RVEXT_RVNONE },
  { "RV32IFENCEI", RVEXT_RV32IFENCEI },
  { "RV64IFENCEI", RVEXT_RV64IFENCEI },
  { "RV32ICSR", RVEXT_RV32ICSR },
  { "RV64ICSR", RVEXT_RV64ICSR },
  { "RV32I", RVEXT_RV32I },
  { "RV64I", RVEXT_RV64I },
  { "RV32E", RVEXT_RV32E },
  { "RV32M", RVEXT_RV32M },
  { "RV64M", RVEXT_RV64M },
  { "RV32C", RVEXT_RV32C },
  { "RV64C", RVEXT_RV64C },
  { "RV32A", RVEXT_RV32A },
  { "RV64A", RVEXT_RV64A },
  { "RV32B", RVEXT_RV32B },
  { "RV64B", RVEXT_RV64B },
  { "RV32V", RVEXT_RV32V },
  { "RV64V", RVEXT_RV64V },
  { "RV32F", RVEXT_RV32F },
  { "RV64F", RVEXT_RV64F },
  { "RV32D", RVEXT_RV32D },
  { "RV64D", RVEXT_RV64D },
  { "RV32FC", RVEXT_RV32FC },
  { "RV64FC", RVEXT_RV64FC },
  { "RV32DC", RVEXT_RV32DC },
  { "RV64DC", RVEXT_RV64DC },
  { "RV32Q", RVEXT_RV32Q },
  { "RV64Q", RVEXT_RV64Q },
  { "RV32ZBB", RVEXT_RV32ZBB },
  { "RV64ZBB", RVEXT_RV64ZBB },
  { "RV32ZBS", RVEXT_RV32ZBS },
  { "RV64ZBS", RVEXT_RV64ZBS },
  { "RV32ZBP", RVEXT_RV32ZBP },
  { "RV64ZBP", RVEXT_RV64ZBP },
  { "RV32ZBM", RVEXT_RV32ZBM },
  { "RV64ZBM", RVEXT_RV64ZBM },
  { "RV32ZBT", RVEXT_RV32ZBT },
  { "RV64ZBT", RVEXT_RV64ZBT },
  { "RV32ZBF", RVEXT_RV32ZBF },
  { "RV64ZBF", RVEXT_RV64ZBF },
  { "RV32ZBR", RVEXT_RV32ZBR },
  { "RV64ZBR", RVEXT_RV64ZBR },
  { "RV32ZBC", RVEXT_RV32ZBC },
  { "RV64ZBC", RVEXT_RV64ZBC },
  { "RV32ZBE", RVEXT_RV32ZBE },
  { "RV64ZBE", RVEXT_RV64ZBE },
  { "RVMAX", RVEXT_RVMAX },
  { 0, 0 }
};

const CGEN_ATTR_TABLE riscv_cgen_ifield_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "RESERVED", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE riscv_cgen_hardware_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "CACHE-ADDR", &bool_attr[0], &bool_attr[0] },
  { "PC", &bool_attr[0], &bool_attr[0] },
  { "PROFILE", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE riscv_cgen_operand_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { "NEGATIVE", &bool_attr[0], &bool_attr[0] },
  { "RELAX", &bool_attr[0], &bool_attr[0] },
  { "SEM-ONLY", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE riscv_cgen_insn_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
  { "RVEXT", & RVEXT_attr[0], & RVEXT_attr[0] },
  { "ALIAS", &bool_attr[0], &bool_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "UNCOND-CTI", &bool_attr[0], &bool_attr[0] },
  { "COND-CTI", &bool_attr[0], &bool_attr[0] },
  { "SKIP-CTI", &bool_attr[0], &bool_attr[0] },
  { "DELAY-SLOT", &bool_attr[0], &bool_attr[0] },
  { "RELAXABLE", &bool_attr[0], &bool_attr[0] },
  { "RELAXED", &bool_attr[0], &bool_attr[0] },
  { "NO-DIS", &bool_attr[0], &bool_attr[0] },
  { "PBB", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

/* Instruction set variants.  */

static const CGEN_ISA riscv_cgen_isa_table[] = {
  { "rv32", 32, 32, 16, 32 },
  { "rv64", 32, 32, 16, 32 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH riscv_cgen_mach_table[] = {
  { "rv32gc", "riscv:rv32", MACH_RV32GC, 0 },
  { "rv32i", "riscv:rv32", MACH_RV32I, 0 },
  { "rv32ic", "riscv:rv32", MACH_RV32IC, 0 },
  { "rv32im", "riscv:rv32", MACH_RV32IM, 0 },
  { "rv32imc", "riscv:rv32", MACH_RV32IMC, 0 },
  { "rv32g", "riscv:rv32", MACH_RV32G, 0 },
  { "rv32gqc", "riscv:rv32", MACH_RV32GQC, 0 },
  { "rv64gc", "riscv:rv64", MACH_RV64GC, 0 },
  { "rv64i", "riscv:rv64", MACH_RV64I, 0 },
  { "rv64ic", "riscv:rv64", MACH_RV64IC, 0 },
  { "rv64im", "riscv:rv64", MACH_RV64IM, 0 },
  { "rv64imc", "riscv:rv64", MACH_RV64IMC, 0 },
  { "rv64g", "riscv:rv64", MACH_RV64G, 0 },
  { "rv64gqc", "riscv:rv64", MACH_RV64GQC, 0 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_gpr_entries[] =
{
  { "zero", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "ra", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "sp", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "gp", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "tp", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "t0", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "t1", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "t2", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "s0", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "s1", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "a0", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "a1", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "a2", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "a3", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "a4", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "a5", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "a6", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "a7", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "s2", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "s3", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "s4", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "s5", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "s6", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "s7", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "s8", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "s9", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "s10", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "s11", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "t3", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "t4", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "t5", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "t6", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "x0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "x1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "x2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "x3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "x4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "x5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "x6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "x7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "x8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "x9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "x10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "x11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "x12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "x13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "x14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "x15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "x16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "x17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "x18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "x19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "x20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "x21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "x22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "x23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "x24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "x25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "x26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "x27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "x28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "x29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "x30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "x31", 31, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_gpr =
{
  & riscv_cgen_opval_h_gpr_entries[0],
  64,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_gpr_not_zero_entries[] =
{
  { "ra", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "sp", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "gp", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "tp", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "t0", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "t1", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "t2", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "s0", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "s1", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "a0", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "a1", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "a2", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "a3", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "a4", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "a5", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "a6", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "a7", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "s2", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "s3", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "s4", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "s5", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "s6", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "s7", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "s8", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "s9", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "s10", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "s11", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "t3", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "t4", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "t5", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "t6", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "x1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "x2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "x3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "x4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "x5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "x6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "x7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "x8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "x9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "x10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "x11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "x12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "x13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "x14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "x15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "x16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "x17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "x18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "x19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "x20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "x21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "x22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "x23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "x24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "x25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "x26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "x27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "x28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "x29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "x30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "x31", 31, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_gpr_not_zero =
{
  & riscv_cgen_opval_h_gpr_not_zero_entries[0],
  62,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_gpr_not_sp_entries[] =
{
  { "zero", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "ra", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "gp", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "tp", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "t0", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "t1", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "t2", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "s0", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "s1", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "a0", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "a1", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "a2", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "a3", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "a4", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "a5", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "a6", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "a7", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "s2", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "s3", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "s4", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "s5", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "s6", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "s7", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "s8", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "s9", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "s10", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "s11", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "t3", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "t4", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "t5", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "t6", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "x0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "x1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "x3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "x4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "x5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "x6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "x7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "x8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "x9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "x10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "x11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "x12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "x13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "x14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "x15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "x16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "x17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "x18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "x19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "x20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "x21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "x22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "x23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "x24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "x25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "x26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "x27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "x28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "x29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "x30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "x31", 31, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_gpr_not_sp =
{
  & riscv_cgen_opval_h_gpr_not_sp_entries[0],
  62,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_gpr_not_zero_or_sp_entries[] =
{
  { "ra", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "gp", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "tp", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "t0", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "t1", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "t2", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "s0", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "s1", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "a0", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "a1", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "a2", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "a3", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "a4", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "a5", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "a6", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "a7", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "s2", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "s3", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "s4", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "s5", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "s6", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "s7", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "s8", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "s9", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "s10", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "s11", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "t3", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "t4", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "t5", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "t6", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "x1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "x3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "x4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "x5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "x6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "x7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "x8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "x9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "x10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "x11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "x12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "x13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "x14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "x15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "x16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "x17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "x18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "x19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "x20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "x21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "x22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "x23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "x24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "x25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "x26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "x27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "x28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "x29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "x30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "x31", 31, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_gpr_not_zero_or_sp =
{
  & riscv_cgen_opval_h_gpr_not_zero_or_sp_entries[0],
  60,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_zero_entries[] =
{
  { "zero", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "x0", 0, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_zero =
{
  & riscv_cgen_opval_h_zero_entries[0],
  2,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_sp_entries[] =
{
  { "sp", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "x2", 2, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_sp =
{
  & riscv_cgen_opval_h_sp_entries[0],
  2,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_c_gpr_entries[] =
{
  { "s0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "s1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "a0", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "a1", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "a2", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "a3", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "a4", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "a5", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "x8", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "x9", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "x10", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "x11", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "x12", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "x13", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "x14", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "x15", 7, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_c_gpr =
{
  & riscv_cgen_opval_h_c_gpr_entries[0],
  16,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_csr_entries[] =
{
  { "ustatus", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "uie", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "utvec", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "uscratch", 64, {0, {{{0, 0}}}}, 0, 0 },
  { "uepc", 65, {0, {{{0, 0}}}}, 0, 0 },
  { "ucause", 66, {0, {{{0, 0}}}}, 0, 0 },
  { "utval", 67, {0, {{{0, 0}}}}, 0, 0 },
  { "uip", 68, {0, {{{0, 0}}}}, 0, 0 },
  { "fflags", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "frm", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "fcsr", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "cycle", 3072, {0, {{{0, 0}}}}, 0, 0 },
  { "time", 3073, {0, {{{0, 0}}}}, 0, 0 },
  { "instret", 3074, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter3", 3075, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter4", 3076, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter5", 3077, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter6", 3078, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter7", 3079, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter8", 3080, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter9", 3081, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter10", 3082, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter11", 3083, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter12", 3084, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter13", 3085, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter14", 3086, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter15", 3087, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter16", 3088, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter17", 3089, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter18", 3090, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter19", 3091, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter20", 3092, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter21", 3093, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter22", 3094, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter23", 3095, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter24", 3096, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter25", 3097, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter26", 3098, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter27", 3099, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter28", 3100, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter29", 3101, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter30", 3102, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter31", 3103, {0, {{{0, 0}}}}, 0, 0 },
  { "sstatus", 256, {0, {{{0, 0}}}}, 0, 0 },
  { "sedeleg", 258, {0, {{{0, 0}}}}, 0, 0 },
  { "sideleg", 259, {0, {{{0, 0}}}}, 0, 0 },
  { "sie", 260, {0, {{{0, 0}}}}, 0, 0 },
  { "stvec", 261, {0, {{{0, 0}}}}, 0, 0 },
  { "scounteren", 262, {0, {{{0, 0}}}}, 0, 0 },
  { "sscratch", 320, {0, {{{0, 0}}}}, 0, 0 },
  { "sepc", 321, {0, {{{0, 0}}}}, 0, 0 },
  { "scause", 322, {0, {{{0, 0}}}}, 0, 0 },
  { "stval", 323, {0, {{{0, 0}}}}, 0, 0 },
  { "sip", 324, {0, {{{0, 0}}}}, 0, 0 },
  { "satp", 384, {0, {{{0, 0}}}}, 0, 0 },
  { "mstatus", 768, {0, {{{0, 0}}}}, 0, 0 },
  { "misa", 769, {0, {{{0, 0}}}}, 0, 0 },
  { "medeleg", 770, {0, {{{0, 0}}}}, 0, 0 },
  { "mideleg", 771, {0, {{{0, 0}}}}, 0, 0 },
  { "mie", 772, {0, {{{0, 0}}}}, 0, 0 },
  { "mtvec", 773, {0, {{{0, 0}}}}, 0, 0 },
  { "mcounteren", 774, {0, {{{0, 0}}}}, 0, 0 },
  { "mscratch", 832, {0, {{{0, 0}}}}, 0, 0 },
  { "mepc", 833, {0, {{{0, 0}}}}, 0, 0 },
  { "mcause", 834, {0, {{{0, 0}}}}, 0, 0 },
  { "mtval", 835, {0, {{{0, 0}}}}, 0, 0 },
  { "mip", 836, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpcfg0", 928, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpcfg1", 929, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpcfg2", 930, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpcfg3", 931, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr0", 944, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr1", 945, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr2", 946, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr3", 947, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr4", 948, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr5", 949, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr6", 950, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr7", 951, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr8", 952, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr9", 953, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr10", 954, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr11", 955, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr12", 956, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr13", 957, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr14", 958, {0, {{{0, 0}}}}, 0, 0 },
  { "pmpaddr15", 959, {0, {{{0, 0}}}}, 0, 0 },
  { "tselect", 1952, {0, {{{0, 0}}}}, 0, 0 },
  { "tdata1", 1953, {0, {{{0, 0}}}}, 0, 0 },
  { "tdata2", 1954, {0, {{{0, 0}}}}, 0, 0 },
  { "tdata3", 1955, {0, {{{0, 0}}}}, 0, 0 },
  { "dcsr", 1968, {0, {{{0, 0}}}}, 0, 0 },
  { "dpc", 1969, {0, {{{0, 0}}}}, 0, 0 },
  { "dscratch", 1970, {0, {{{0, 0}}}}, 0, 0 },
  { "mcycle", 2816, {0, {{{0, 0}}}}, 0, 0 },
  { "minstret", 2818, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter3", 2819, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter4", 2820, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter5", 2821, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter6", 2822, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter7", 2823, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter8", 2824, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter9", 2825, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter10", 2826, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter11", 2827, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter12", 2828, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter13", 2829, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter14", 2830, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter15", 2831, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter16", 2832, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter17", 2833, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter18", 2834, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter19", 2835, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter20", 2836, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter21", 2837, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter22", 2838, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter23", 2839, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter24", 2840, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter25", 2841, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter26", 2842, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter27", 2843, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter28", 2844, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter29", 2845, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter30", 2846, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter31", 2847, {0, {{{0, 0}}}}, 0, 0 },
  { "mucounteren", 800, {0, {{{0, 0}}}}, 0, 0 },
  { "mscounteren", 801, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent3", 803, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent4", 804, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent5", 805, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent6", 806, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent7", 807, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent8", 808, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent9", 809, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent10", 810, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent11", 811, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent12", 812, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent13", 813, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent14", 814, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent15", 815, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent16", 816, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent17", 817, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent18", 818, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent19", 819, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent20", 820, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent21", 821, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent22", 822, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent23", 823, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent24", 824, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent25", 825, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent26", 826, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent27", 827, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent28", 828, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent29", 829, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent30", 830, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmevent31", 831, {0, {{{0, 0}}}}, 0, 0 },
  { "mvendorid", 3857, {0, {{{0, 0}}}}, 0, 0 },
  { "marchid", 3858, {0, {{{0, 0}}}}, 0, 0 },
  { "mimpid", 3859, {0, {{{0, 0}}}}, 0, 0 },
  { "mhartid", 3860, {0, {{{0, 0}}}}, 0, 0 },
  { "cycleh", 3200, {0, {{{0, 0}}}}, 0, 0 },
  { "timeh", 3201, {0, {{{0, 0}}}}, 0, 0 },
  { "instreth", 3202, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter3h", 3203, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter4h", 3204, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter5h", 3205, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter6h", 3206, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter7h", 3207, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter8h", 3208, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter9h", 3209, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter10h", 3210, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter11h", 3211, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter12h", 3212, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter13h", 3213, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter14h", 3214, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter15h", 3215, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter16h", 3216, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter17h", 3217, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter18h", 3218, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter19h", 3219, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter20h", 3220, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter21h", 3221, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter22h", 3222, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter23h", 3223, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter24h", 3224, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter25h", 3225, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter26h", 3226, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter27h", 3227, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter28h", 3228, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter29h", 3229, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter30h", 3230, {0, {{{0, 0}}}}, 0, 0 },
  { "hpmcounter31h", 3231, {0, {{{0, 0}}}}, 0, 0 },
  { "mcycleh", 2944, {0, {{{0, 0}}}}, 0, 0 },
  { "minstreth", 2946, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter3h", 2947, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter4h", 2948, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter5h", 2949, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter6h", 2950, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter7h", 2951, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter8h", 2952, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter9h", 2953, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter10h", 2954, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter11h", 2955, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter12h", 2956, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter13h", 2957, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter14h", 2958, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter15h", 2959, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter16h", 2960, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter17h", 2961, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter18h", 2962, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter19h", 2963, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter20h", 2964, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter21h", 2965, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter22h", 2966, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter23h", 2967, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter24h", 2968, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter25h", 2969, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter26h", 2970, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter27h", 2971, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter28h", 2972, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter29h", 2973, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter30h", 2974, {0, {{{0, 0}}}}, 0, 0 },
  { "mhpmcounter31h", 2975, {0, {{{0, 0}}}}, 0, 0 },
  { "mtimecmp", 1984, {0, {{{0, 0}}}}, 0, 0 },
  { "ubadaddr", 67, {0, {{{0, 0}}}}, 0, 0 },
  { "sbadaddr", 323, {0, {{{0, 0}}}}, 0, 0 },
  { "sptbr", 384, {0, {{{0, 0}}}}, 0, 0 },
  { "mbadaddr", 835, {0, {{{0, 0}}}}, 0, 0 },
  { "hstatus", 512, {0, {{{0, 0}}}}, 0, 0 },
  { "hedeleg", 514, {0, {{{0, 0}}}}, 0, 0 },
  { "hideleg", 515, {0, {{{0, 0}}}}, 0, 0 },
  { "hie", 516, {0, {{{0, 0}}}}, 0, 0 },
  { "htvec", 517, {0, {{{0, 0}}}}, 0, 0 },
  { "hscratch", 576, {0, {{{0, 0}}}}, 0, 0 },
  { "hepc", 577, {0, {{{0, 0}}}}, 0, 0 },
  { "hcause", 578, {0, {{{0, 0}}}}, 0, 0 },
  { "hbadaddr", 579, {0, {{{0, 0}}}}, 0, 0 },
  { "hip", 580, {0, {{{0, 0}}}}, 0, 0 },
  { "mbase", 896, {0, {{{0, 0}}}}, 0, 0 },
  { "mbound", 897, {0, {{{0, 0}}}}, 0, 0 },
  { "mibase", 898, {0, {{{0, 0}}}}, 0, 0 },
  { "mibound", 899, {0, {{{0, 0}}}}, 0, 0 },
  { "mdbase", 900, {0, {{{0, 0}}}}, 0, 0 },
  { "mdbound", 901, {0, {{{0, 0}}}}, 0, 0 },
  { "mhcounteren", 802, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_csr =
{
  & riscv_cgen_opval_h_csr_entries[0],
  245,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_fpr_entries[] =
{
  { "ft0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "ft1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "ft2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "ft3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "ft4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "ft5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "ft6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "ft7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "fs0", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "fs1", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "fa0", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "fa1", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "fa2", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "fa3", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "fa4", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "fa5", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "fa6", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "fa7", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "fs2", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "fs3", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "fs4", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "fs5", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "fs6", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "fs7", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "fs8", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "fs9", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "fs10", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "fs11", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "ft8", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "ft9", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "ft10", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "ft11", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "f0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "f1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "f2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "f3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "f4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "f5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "f6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "f7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "f8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "f9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "f10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "f11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "f12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "f13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "f14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "f15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "f16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "f17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "f18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "f19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "f20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "f21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "f22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "f23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "f24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "f25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "f26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "f27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "f28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "f29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "f30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "f31", 31, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_fpr =
{
  & riscv_cgen_opval_h_fpr_entries[0],
  64,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_c_fpr_entries[] =
{
  { "fs0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "fs1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "fa0", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "fa1", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "fa2", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "fa3", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "fa4", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "fa5", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "f8", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "f9", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "f10", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "f11", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "f12", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "f13", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "f14", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "f15", 7, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_c_fpr =
{
  & riscv_cgen_opval_h_c_fpr_entries[0],
  16,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_opcode7_entries[] =
{
  { "LOAD", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "LOAD_FP", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "CUSTOM_0", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "MISC_MEM", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "OP_IMM", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "AUIPC", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "OP_IMM_32", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "STORE", 35, {0, {{{0, 0}}}}, 0, 0 },
  { "STORE_FP", 39, {0, {{{0, 0}}}}, 0, 0 },
  { "CUSTOM_1", 43, {0, {{{0, 0}}}}, 0, 0 },
  { "AMO", 47, {0, {{{0, 0}}}}, 0, 0 },
  { "OP", 51, {0, {{{0, 0}}}}, 0, 0 },
  { "LUI", 55, {0, {{{0, 0}}}}, 0, 0 },
  { "OP_32", 59, {0, {{{0, 0}}}}, 0, 0 },
  { "MADD", 67, {0, {{{0, 0}}}}, 0, 0 },
  { "MSUB", 71, {0, {{{0, 0}}}}, 0, 0 },
  { "NMADD", 75, {0, {{{0, 0}}}}, 0, 0 },
  { "NMSUB", 79, {0, {{{0, 0}}}}, 0, 0 },
  { "OP_FP", 83, {0, {{{0, 0}}}}, 0, 0 },
  { "CUSTOM_2", 91, {0, {{{0, 0}}}}, 0, 0 },
  { "BRANCH", 99, {0, {{{0, 0}}}}, 0, 0 },
  { "JALR", 103, {0, {{{0, 0}}}}, 0, 0 },
  { "JAL", 111, {0, {{{0, 0}}}}, 0, 0 },
  { "SYSTEM", 115, {0, {{{0, 0}}}}, 0, 0 },
  { "CUSTOM_3", 123, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_opcode7 =
{
  & riscv_cgen_opval_h_opcode7_entries[0],
  25,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY riscv_cgen_opval_h_copcode2_entries[] =
{
  { "C0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "C1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "C2", 2, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD riscv_cgen_opval_h_copcode2 =
{
  & riscv_cgen_opval_h_copcode2_entries[0],
  3,
  0, 0, 0, 0, ""
};


/* The hardware table.  */

#define A(a) (1 << CGEN_HW_##a)

const CGEN_HW_ENTRY riscv_cgen_hw_table[] =
{
  { "h-memory", HW_H_MEMORY, CGEN_ASM_NONE, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-sint", HW_H_SINT, CGEN_ASM_NONE, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-uint", HW_H_UINT, CGEN_ASM_NONE, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-addr", HW_H_ADDR, CGEN_ASM_NONE, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-iaddr", HW_H_IADDR, CGEN_ASM_NONE, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-pc", HW_H_PC, CGEN_ASM_NONE, 0, { 0|A(PC), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-xlen", HW_H_XLEN, CGEN_ASM_NONE, 0, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-gpr", HW_H_GPR, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_gpr, { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-gpr-not-zero", HW_H_GPR_NOT_ZERO, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_gpr_not_zero, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-gpr-not-sp", HW_H_GPR_NOT_SP, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_gpr_not_sp, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-gpr-not-zero-or-sp", HW_H_GPR_NOT_ZERO_OR_SP, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_gpr_not_zero_or_sp, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-zero", HW_H_ZERO, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_zero, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-sp", HW_H_SP, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_sp, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-c-gpr", HW_H_C_GPR, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_c_gpr, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-csr", HW_H_CSR, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_csr, { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-fpr", HW_H_FPR, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_fpr, { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-c-fpr", HW_H_C_FPR, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_c_fpr, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-opcode7", HW_H_OPCODE7, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_opcode7, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { "h-copcode2", HW_H_COPCODE2, CGEN_ASM_KEYWORD, (PTR) & riscv_cgen_opval_h_copcode2, { 0|A(VIRTUAL), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } } } } },
  { 0, 0, CGEN_ASM_NONE, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } }
};

#undef A


/* The instruction field table.  */

#define A(a) (1 << CGEN_IFLD_##a)

const CGEN_IFLD riscv_cgen_ifld_table[] =
{
  { RISCV_F_NIL, "f-nil", 0, 0, 0, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_ANYOF, "f-anyof", 0, 0, 0, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_DUMMY, "f-dummy", 0, 32, 0, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_OPCODE, "f-opcode", 0, 32, 6, 7, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_C_OPCODE, "f-c-opcode", 0, 32, 1, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_RD, "f-rd", 0, 32, 11, 5, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_RS1, "f-rs1", 0, 32, 19, 5, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_RS2, "f-rs2", 0, 32, 24, 5, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_RS3, "f-rs3", 0, 32, 31, 5, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_CSR, "f-csr", 0, 32, 31, 12, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_SUCC, "f-succ", 0, 32, 27, 4, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_PRED, "f-pred", 0, 32, 23, 4, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_FUNCT1, "f-funct1", 0, 32, 26, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_FUNCT2, "f-funct2", 0, 32, 26, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_FUNCT5, "f-funct5", 0, 32, 31, 5, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_FUNCT6, "f-funct6", 0, 32, 31, 6, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_FUNCT7, "f-funct7", 0, 32, 31, 7, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_FUNCT3, "f-funct3", 0, 32, 14, 3, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_C_FUNCT2, "f-c-funct2", 0, 32, 6, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_C_FUNCT3, "f-c-funct3", 0, 32, 15, 3, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_C_FUNCT4, "f-c-funct4", 0, 32, 15, 4, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_C_FUNCT6, "f-c-funct6", 0, 32, 15, 6, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_AQ, "f-aq", 0, 32, 26, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_RL, "f-rl", 0, 32, 25, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_FP2, "f-fp2", 0, 32, 26, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM1_21, "f-uimm1-21", 0, 32, 2, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM2_32, "f-uimm2-32", 0, 32, 3, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM2_42, "f-uimm2-42", 0, 32, 4, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM3_43, "f-uimm3-43", 0, 32, 4, 3, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM1_51, "f-uimm1-51", 0, 32, 5, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM3_53, "f-uimm3-53", 0, 32, 5, 3, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM1_61, "f-uimm1-61", 0, 32, 6, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM2_62, "f-uimm2-62", 0, 32, 6, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM3_63, "f-uimm3-63", 0, 32, 6, 3, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM5_65, "f-uimm5-65", 0, 32, 6, 5, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM1_71, "f-uimm1-71", 0, 32, 7, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM1_81, "f-uimm1-81", 0, 32, 8, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM2_82, "f-uimm2-82", 0, 32, 8, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM3_93, "f-uimm3-93", 0, 32, 9, 3, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM2_102, "f-uimm2-102", 0, 32, 10, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM4_104, "f-uimm4-104", 0, 32, 10, 4, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM1_111, "f-uimm1-111", 0, 32, 11, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM2_112, "f-uimm2-112", 0, 32, 11, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM4_114, "f-uimm4-114", 0, 32, 11, 4, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM5_115, "f-uimm5-115", 0, 32, 11, 5, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM1_121, "f-uimm1-121", 0, 32, 12, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM2_122, "f-uimm2-122", 0, 32, 12, 2, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM3_123, "f-uimm3-123", 0, 32, 12, 3, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM4_124, "f-uimm4-124", 0, 32, 12, 4, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM8_128, "f-uimm8-128", 0, 32, 12, 8, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM15_1415, "f-uimm15-1415", 0, 32, 14, 15, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM16_1516, "f-uimm16-1516", 0, 32, 15, 16, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM5_195, "f-uimm5-195", 0, 32, 19, 5, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM8_198, "f-uimm8-198", 0, 32, 19, 8, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM20_1920, "f-uimm20-1920", 0, 32, 19, 20, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM1_201, "f-uimm1-201", 0, 32, 20, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM5_245, "f-uimm5-245", 0, 32, 24, 5, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM6_256, "f-uimm6-256", 0, 32, 25, 6, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM7_267, "f-uimm7-267", 0, 32, 26, 7, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM6_306, "f-uimm6-306", 0, 32, 30, 6, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM10_3010, "f-uimm10-3010", 0, 32, 30, 10, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM4_314, "f-uimm4-314", 0, 32, 31, 4, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM7_317, "f-uimm7-317", 0, 32, 31, 7, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM12_3112, "f-uimm12-3112", 0, 32, 31, 12, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM32_3132, "f-uimm32-3132", 0, 32, 31, 32, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM32_3120_000000000000, "f-uimm32-3120-000000000000", 0, 32, 31, 20, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM1_121, "f-imm1-121", 0, 32, 12, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM1_311, "f-imm1-311", 0, 32, 31, 1, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM7_317, "f-imm7-317", 0, 32, 31, 7, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM12_3112, "f-imm12-3112", 0, 32, 31, 12, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM12_317_115, "f-imm12-317-115", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM13_311_71_306_114_0, "f-imm13-311-71-306-114-0", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM21_311_198_201_3010_0, "f-imm21-311-198-201-3010-0", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM6_121_65, "f-imm6-121-65", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM6_121_65, "f-uimm6-121-65", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM18_121_65_000000000000, "f-uimm18-121-65-000000000000", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM9_121_62_21_112_42_0, "f-imm9-121-62-21-112-42-0", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM7_51_123_61_00, "f-uimm7-51-123-61-00", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM8_62_123_000, "f-uimm8-62-123-000", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM10_104_122_51_61_00, "f-uimm10-104-122-51-61-00", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM10_121_42_51_21_61_0000, "f-imm10-121-42-51-21-61-0000", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM9_93_123_000, "f-uimm9-93-123-000", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM8_82_124_00, "f-uimm8-82-124-00", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_IMM12_121_81_102_61_71_21_111_53_0, "f-imm12-121-81-102-61-71-21-111-53-0", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM8_32_121_63_00, "f-uimm8-32-121-63-00", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { RISCV_F_UIMM9_43_121_62_000, "f-uimm9-43-121-62-000", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } }
};

#undef A



/* multi ifield declarations */

const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM12_317_115_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM13_311_71_306_114_0_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM21_311_198_201_3010_0_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM6_121_65_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM6_121_65_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM18_121_65_000000000000_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM9_121_62_21_112_42_0_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM7_51_123_61_00_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM8_62_123_000_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM10_104_122_51_61_00_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM10_121_42_51_21_61_0000_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM9_93_123_000_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM8_82_124_00_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM12_121_81_102_61_71_21_111_53_0_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM8_32_121_63_00_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM9_43_121_62_000_MULTI_IFIELD [];


/* multi ifield definitions */

const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM12_317_115_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM7_317] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM13_311_71_306_114_0_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM1_311] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_71] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM6_306] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM4_114] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM21_311_198_201_3010_0_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM1_311] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM8_198] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_201] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM10_3010] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM6_121_65_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM1_121] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_65] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM6_121_65_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_121] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_65] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM18_121_65_000000000000_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_121] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_65] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM9_121_62_21_112_42_0_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM1_121] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_62] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_21] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_112] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_42] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM7_51_123_61_00_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_51] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_123] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_61] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM8_62_123_000_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_62] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_123] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM10_104_122_51_61_00_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM4_104] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_122] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_51] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_61] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM10_121_42_51_21_61_0000_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM1_121] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_42] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_51] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_21] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_61] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM9_93_123_000_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_93] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_123] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM8_82_124_00_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_82] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM4_124] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_IMM12_121_81_102_61_71_21_111_53_0_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM1_121] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_81] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_102] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_61] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_71] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_21] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_111] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_53] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM8_32_121_63_00_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_32] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_121] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_63] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD RISCV_F_UIMM9_43_121_62_000_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_43] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM1_121] } },
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM2_62] } },
    { 0, { (const PTR) 0 } }
};

/* The operand table.  */

#define A(a) (1 << CGEN_OPERAND_##a)
#define OPERAND(op) RISCV_OPERAND_##op

const CGEN_OPERAND riscv_cgen_operand_table[] =
{
/* pc: program counter */
  { "pc", RISCV_OPERAND_PC, HW_H_PC, 0, 0,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_NIL] } },
    { 0|A(SEM_ONLY), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* rd: rd */
  { "rd", RISCV_OPERAND_RD, HW_H_GPR, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_RD] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sp-reg: register tied to the stack pointer */
  { "sp-reg", RISCV_OPERAND_SP_REG, HW_H_SP, 0, 0,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_DUMMY] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* rs1: rs1 */
  { "rs1", RISCV_OPERAND_RS1, HW_H_GPR, 19, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_RS1] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* rs2: rs2 */
  { "rs2", RISCV_OPERAND_RS2, HW_H_GPR, 24, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_RS2] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* rs3: rs3 */
  { "rs3", RISCV_OPERAND_RS3, HW_H_GPR, 31, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_RS3] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-reg117: register field for compressed (11:7) */
  { "c-reg117", RISCV_OPERAND_C_REG117, HW_H_GPR, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-reg117-0: register field for compressed (11:7) */
  { "c-reg117-0", RISCV_OPERAND_C_REG117_0, HW_H_ZERO, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-reg117-ne0: register field for compressed (11:7) */
  { "c-reg117-ne0", RISCV_OPERAND_C_REG117_NE0, HW_H_GPR_NOT_ZERO, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-reg117-ne2: register field for compressed (11:7) */
  { "c-reg117-ne2", RISCV_OPERAND_C_REG117_NE2, HW_H_GPR_NOT_SP, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-reg117-ne0-ne2: register field for compressed (11:7) */
  { "c-reg117-ne0-ne2", RISCV_OPERAND_C_REG117_NE0_NE2, HW_H_GPR_NOT_ZERO_OR_SP, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-reg62: register field for compressed (6:2) */
  { "c-reg62", RISCV_OPERAND_C_REG62, HW_H_GPR, 6, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_65] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-reg62-ne0: register field for compressed (6:2) */
  { "c-reg62-ne0", RISCV_OPERAND_C_REG62_NE0, HW_H_GPR_NOT_ZERO, 6, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_65] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-reg97: register field for compressed (9:7) */
  { "c-reg97", RISCV_OPERAND_C_REG97, HW_H_C_GPR, 9, 3,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_93] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-reg42: register field for compressed (4:2) */
  { "c-reg42", RISCV_OPERAND_C_REG42, HW_H_C_GPR, 4, 3,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_43] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-tied-regs97: tied register pair, encoded in [9:7] */
  { "c-tied-regs97", RISCV_OPERAND_C_TIED_REGS97, HW_H_C_GPR, 9, 3,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_93] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-tied-regs97-commutative: tied register pair, encoded in [9:7] */
  { "c-tied-regs97-commutative", RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE, HW_H_C_GPR, 9, 3,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_93] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-tied-regs117: tied register pair, encoded in [11:7] */
  { "c-tied-regs117", RISCV_OPERAND_C_TIED_REGS117, HW_H_GPR, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-tied-regs117-ne0: tied register pair, encoded in [11:7] */
  { "c-tied-regs117-ne0", RISCV_OPERAND_C_TIED_REGS117_NE0, HW_H_GPR_NOT_ZERO, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-tied-regs117-0-commutative: tied register pair, encoded in [11:7] */
  { "c-tied-regs117-0-commutative", RISCV_OPERAND_C_TIED_REGS117_0_COMMUTATIVE, HW_H_ZERO, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-tied-regs117-ne0-commutative: tied register pair, encoded in [11:7] */
  { "c-tied-regs117-ne0-commutative", RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE, HW_H_GPR_NOT_ZERO, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* c-tied-regs117-ne0-ne2: tied register pair, encoded in [11:7] */
  { "c-tied-regs117-ne0-ne2", RISCV_OPERAND_C_TIED_REGS117_NE0_NE2, HW_H_GPR_NOT_ZERO_OR_SP, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_115] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* fl-rd: fl-rd */
  { "fl-rd", RISCV_OPERAND_FL_RD, HW_H_FPR, 11, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_RD] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* fl-rs1: fl-rs1 */
  { "fl-rs1", RISCV_OPERAND_FL_RS1, HW_H_FPR, 19, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_RS1] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* fl-rs2: fl-rs2 */
  { "fl-rs2", RISCV_OPERAND_FL_RS2, HW_H_FPR, 24, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_RS2] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* fl-rs3: fl-rs3 */
  { "fl-rs3", RISCV_OPERAND_FL_RS3, HW_H_FPR, 31, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_RS3] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* fc-rs2: fp register field for compressed (4:2) */
  { "fc-rs2", RISCV_OPERAND_FC_RS2, HW_H_C_FPR, 4, 3,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM3_43] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* fc-rs3: fp register field for compressed (6:2) */
  { "fc-rs3", RISCV_OPERAND_FC_RS3, HW_H_FPR, 6, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_65] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* fl-tied-regs1915: tied register pair, encoded in [19:15] */
  { "fl-tied-regs1915", RISCV_OPERAND_FL_TIED_REGS1915, HW_H_FPR, 19, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_195] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* fl-dummy: fl-dummy */
  { "fl-dummy", RISCV_OPERAND_FL_DUMMY, HW_H_FPR, 0, 0,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_DUMMY] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* csr: csr */
  { "csr", RISCV_OPERAND_CSR, HW_H_CSR, 31, 12,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_CSR] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* pred: pred */
  { "pred", RISCV_OPERAND_PRED, HW_H_UINT, 23, 4,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_PRED] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* succ: succ */
  { "succ", RISCV_OPERAND_SUCC, HW_H_UINT, 27, 4,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_SUCC] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* fl-rm: fl-rm */
  { "fl-rm", RISCV_OPERAND_FL_RM, HW_H_UINT, 14, 3,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_FUNCT3] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* tprel_add: Special field to attach a %tprel_add reloc to an add instruction */
  { "tprel_add", RISCV_OPERAND_TPREL_ADD, HW_H_SINT, 0, 0,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_DUMMY] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* imm-zero: imm operand which is always zero */
  { "imm-zero", RISCV_OPERAND_IMM_ZERO, HW_H_SINT, 0, 0,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_DUMMY] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm5: uimm5 [19..15] */
  { "uimm5", RISCV_OPERAND_UIMM5, HW_H_UINT, 19, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_195] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm5-dec: uimm5 [19..15] */
  { "uimm5-dec", RISCV_OPERAND_UIMM5_DEC, HW_H_UINT, 19, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_195] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm5-abs: uimm5 [19..15] (absolute) */
  { "uimm5-abs", RISCV_OPERAND_UIMM5_ABS, HW_H_UINT, 19, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_195] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm8-128: uimm8 [12..5] */
  { "uimm8-128", RISCV_OPERAND_UIMM8_128, HW_H_UINT, 12, 8,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM8_128] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* imm-lo12: Low 12-bits of a 32-bit uimmediate */
  { "imm-lo12", RISCV_OPERAND_IMM_LO12, HW_H_SINT, 31, 12,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM12_3112] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* imm-lo12-hex: Low 12-bits of a 32-bit uimmediate */
  { "imm-lo12-hex", RISCV_OPERAND_IMM_LO12_HEX, HW_H_SINT, 31, 12,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM12_3112] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* imm-lo12-abs: Low 12-bits of a 32-bit uimmediate (absolute) */
  { "imm-lo12-abs", RISCV_OPERAND_IMM_LO12_ABS, HW_H_SINT, 31, 12,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_IMM12_3112] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm32-3120-000000000000: uimm12 [31..12]000000000000 */
  { "uimm32-3120-000000000000", RISCV_OPERAND_UIMM32_3120_000000000000, HW_H_UINT, 31, 20,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM32_3120_000000000000] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* store12: 12-bit store offset */
  { "store12", RISCV_OPERAND_STORE12, HW_H_SINT, 11, 12,
    { 2, { (const PTR) &RISCV_F_IMM12_317_115_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* branch13: 13-bit PC-relative branch */
  { "branch13", RISCV_OPERAND_BRANCH13, HW_H_SINT, 7, 12,
    { 4, { (const PTR) &RISCV_F_IMM13_311_71_306_114_0_MULTI_IFIELD[0] } },
    { 0|A(RELAX)|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* jmp21: 21-bit PC-relative jump */
  { "jmp21", RISCV_OPERAND_JMP21, HW_H_SINT, 19, 20,
    { 4, { (const PTR) &RISCV_F_IMM21_311_198_201_3010_0_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* imm6-121-65-abs: imm6 [12][6..2] (absolute) */
  { "imm6-121-65-abs", RISCV_OPERAND_IMM6_121_65_ABS, HW_H_SINT, 6, 6,
    { 2, { (const PTR) &RISCV_F_IMM6_121_65_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* nzuimm18-121-65-000000000000-abs: nzuimm18 [12][6..2]000000000000 (absolute) */
  { "nzuimm18-121-65-000000000000-abs", RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS, HW_H_UINT, 6, 6,
    { 2, { (const PTR) &RISCV_F_UIMM18_121_65_000000000000_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* nzimm6-121-65-abs: nzimm6 [12][6..2] (absolute) */
  { "nzimm6-121-65-abs", RISCV_OPERAND_NZIMM6_121_65_ABS, HW_H_SINT, 6, 6,
    { 2, { (const PTR) &RISCV_F_IMM6_121_65_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* nzimm10-121-42-51-21-61-0000-abs: nzimm10 [12][4..3][5][2][6]0000 (absolute) */
  { "nzimm10-121-42-51-21-61-0000-abs", RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS, HW_H_SINT, 2, 6,
    { 5, { (const PTR) &RISCV_F_IMM10_121_42_51_21_61_0000_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* cbranch9: 13-bit PC-relative branch (C extension) */
  { "cbranch9", RISCV_OPERAND_CBRANCH9, HW_H_SINT, 2, 8,
    { 5, { (const PTR) &RISCV_F_IMM9_121_62_21_112_42_0_MULTI_IFIELD[0] } },
    { 0|A(RELAX)|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* cjmp12: imm12 [12][8][10..9][6][7][2][11][5..3]0 */
  { "cjmp12", RISCV_OPERAND_CJMP12, HW_H_SINT, 2, 11,
    { 8, { (const PTR) &RISCV_F_IMM12_121_81_102_61_71_21_111_53_0_MULTI_IFIELD[0] } },
    { 0|A(RELAX)|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm5-245: uimm5 [24..20] (absolute) */
  { "uimm5-245", RISCV_OPERAND_UIMM5_245, HW_H_UINT, 24, 5,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM5_245] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm6-256: uimm6 [25..20] (absolute) */
  { "uimm6-256", RISCV_OPERAND_UIMM6_256, HW_H_UINT, 25, 6,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM6_256] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm7-267: uimm7 [26..20] (absolute) */
  { "uimm7-267", RISCV_OPERAND_UIMM7_267, HW_H_UINT, 26, 7,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_UIMM7_267] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm9-93-123-000-abs: uimm9 [9..7][12..10]000 (absolute) */
  { "uimm9-93-123-000-abs", RISCV_OPERAND_UIMM9_93_123_000_ABS, HW_H_UINT, 9, 6,
    { 2, { (const PTR) &RISCV_F_UIMM9_93_123_000_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm8-82-124-00-abs: uimm8 [8..7][12..9]00 (absolute) */
  { "uimm8-82-124-00-abs", RISCV_OPERAND_UIMM8_82_124_00_ABS, HW_H_UINT, 8, 6,
    { 2, { (const PTR) &RISCV_F_UIMM8_82_124_00_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* nzuimm10-104-122-51-61-00-abs: nzuimm10 [10..7][12..11][5][6]00 */
  { "nzuimm10-104-122-51-61-00-abs", RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS, HW_H_UINT, 5, 8,
    { 4, { (const PTR) &RISCV_F_UIMM10_104_122_51_61_00_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* nzuimm6-121-65-abs: nzuimm6 [12][6..2] (absolute) */
  { "nzuimm6-121-65-abs", RISCV_OPERAND_NZUIMM6_121_65_ABS, HW_H_UINT, 6, 6,
    { 2, { (const PTR) &RISCV_F_UIMM6_121_65_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm6-121-65-abs: uimm6 [12][6..2] (absolute) */
  { "uimm6-121-65-abs", RISCV_OPERAND_UIMM6_121_65_ABS, HW_H_UINT, 6, 6,
    { 2, { (const PTR) &RISCV_F_UIMM6_121_65_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm9-43-121-62-000-abs: uimm9 [4..2][12][6..5]000 (absolute) */
  { "uimm9-43-121-62-000-abs", RISCV_OPERAND_UIMM9_43_121_62_000_ABS, HW_H_UINT, 4, 6,
    { 3, { (const PTR) &RISCV_F_UIMM9_43_121_62_000_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm8-32-121-63-00-abs: uimm8 [3..2][12][6..4]00 (absolute) */
  { "uimm8-32-121-63-00-abs", RISCV_OPERAND_UIMM8_32_121_63_00_ABS, HW_H_UINT, 3, 6,
    { 3, { (const PTR) &RISCV_F_UIMM8_32_121_63_00_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm7-51-123-61-00-abs: uimm7 [5][12..10][6]00 (absolute) */
  { "uimm7-51-123-61-00-abs", RISCV_OPERAND_UIMM7_51_123_61_00_ABS, HW_H_UINT, 5, 5,
    { 3, { (const PTR) &RISCV_F_UIMM7_51_123_61_00_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* uimm8-62-123-000-abs: uimm8 [6..5][12..10]000 (absolute) */
  { "uimm8-62-123-000-abs", RISCV_OPERAND_UIMM8_62_123_000_ABS, HW_H_UINT, 6, 5,
    { 2, { (const PTR) &RISCV_F_UIMM8_62_123_000_MULTI_IFIELD[0] } },
    { 0|A(VIRTUAL), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* opcode7: opcode7 */
  { "opcode7", RISCV_OPERAND_OPCODE7, HW_H_OPCODE7, 6, 7,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_OPCODE] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* copcode2: copcode2 */
  { "copcode2", RISCV_OPERAND_COPCODE2, HW_H_COPCODE2, 1, 2,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_C_OPCODE] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* funct7: funct7 */
  { "funct7", RISCV_OPERAND_FUNCT7, HW_H_UINT, 31, 7,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_FUNCT7] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* funct3: funct3 */
  { "funct3", RISCV_OPERAND_FUNCT3, HW_H_UINT, 14, 3,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_FUNCT3] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* funct2: funct2 */
  { "funct2", RISCV_OPERAND_FUNCT2, HW_H_UINT, 26, 2,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_FUNCT2] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* cfunct2: cfunct2 */
  { "cfunct2", RISCV_OPERAND_CFUNCT2, HW_H_UINT, 6, 2,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_C_FUNCT2] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* cfunct3: cfunct3 */
  { "cfunct3", RISCV_OPERAND_CFUNCT3, HW_H_UINT, 15, 3,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_C_FUNCT3] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* cfunct4: cfunct4 */
  { "cfunct4", RISCV_OPERAND_CFUNCT4, HW_H_UINT, 15, 4,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_C_FUNCT4] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* cfunct6: cfunct6 */
  { "cfunct6", RISCV_OPERAND_CFUNCT6, HW_H_UINT, 15, 6,
    { 0, { (const PTR) &riscv_cgen_ifld_table[RISCV_F_C_FUNCT6] } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sentinel */
  { 0, 0, 0, 0, 0,
    { 0, { (const PTR) 0 } },
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } }
};

#undef A


/* The instruction table.  */

#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))
#define A(a) (1 << CGEN_INSN_##a)

static const CGEN_IBASE riscv_cgen_insn_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { 0, 0, 0, 0, { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\x80" } }, { { (1LL<<RVEXT_RVNONE), 0 } } } } },
/* c.addi16sp ${sp-reg},${nzimm10-121-42-51-21-61-0000-abs} */
  {
    RISCV_INSN_C_ADDI16SP, "c.addi16sp", "c.addi16sp", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.addi4spn ${c-reg42},${sp-reg},${nzuimm10-104-122-51-61-00-abs} */
  {
    RISCV_INSN_C_ADDI4SPN, "c.addi4spn", "c.addi4spn", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.nop */
  {
    RISCV_INSN_C_NOP, "c.nop", "c.nop", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.ebreak */
  {
    RISCV_INSN_C_EBREAK, "c.ebreak", "c.ebreak", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.unimp */
  {
    RISCV_INSN_C_UNIMP, "c.unimp", "c.unimp", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.jr ${c-reg117-ne0} */
  {
    RISCV_INSN_C_JR, "c.jr", "c.jr", 16,
    { 0|A(UNCOND_CTI), { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.jalr ${c-reg117-ne0} */
  {
    RISCV_INSN_C_JALR, "c.jalr", "c.jalr", 16,
    { 0|A(UNCOND_CTI), { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.mv ${c-reg117-ne0},${c-reg62-ne0} */
  {
    RISCV_INSN_C_MV, "c.mv", "c.mv", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.add ${c-reg117-ne0},${c-reg62-ne0} */
  {
    RISCV_INSN_C_ADD, "c.add", "c.add", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.and ${c-reg97},${c-reg42} */
  {
    RISCV_INSN_C_AND, "c.and", "c.and", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.or ${c-reg97},${c-reg42} */
  {
    RISCV_INSN_C_OR, "c.or", "c.or", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.xor ${c-reg97},${c-reg42} */
  {
    RISCV_INSN_C_XOR, "c.xor", "c.xor", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.sub ${c-reg97},${c-reg42} */
  {
    RISCV_INSN_C_SUB, "c.sub", "c.sub", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.li ${c-reg117},${imm6-121-65-abs} */
  {
    RISCV_INSN_C_LI, "c.li", "c.li", 16,
    { 0|A(NO_DIS), { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.lui ${c-reg117-ne0-ne2},${nzuimm18-121-65-000000000000-abs} */
  {
    RISCV_INSN_C_LUI, "c.lui", "c.lui", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.addi ${c-reg117},${imm6-121-65-abs} */
  {
    RISCV_INSN_C_ADDI, "c.addi", "c.addi", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.slli ${c-reg117-ne0},${nzuimm6-121-65-abs} */
  {
    RISCV_INSN_C_SLLI, "c.slli", "c.slli", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.lwsp ${c-reg117-ne0},${uimm8-32-121-63-00-abs}(${sp-reg}) */
  {
    RISCV_INSN_C_LWSP, "c.lwsp", "c.lwsp", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.swsp ${c-reg62},${uimm8-82-124-00-abs}(${sp-reg}) */
  {
    RISCV_INSN_C_SWSP, "c.swsp", "c.swsp", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.lw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    RISCV_INSN_C_LW, "c.lw", "c.lw", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.sw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    RISCV_INSN_C_SW, "c.sw", "c.sw", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.srli ${c-reg97},${nzuimm6-121-65-abs} */
  {
    RISCV_INSN_C_SRLI, "c.srli", "c.srli", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.srai ${c-reg97},${nzuimm6-121-65-abs} */
  {
    RISCV_INSN_C_SRAI, "c.srai", "c.srai", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.andi ${c-reg97},${imm6-121-65-abs} */
  {
    RISCV_INSN_C_ANDI, "c.andi", "c.andi", 16,
    { 0, { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.beqz ${c-reg97},${cbranch9} */
  {
    RISCV_INSN_C_BEQZ, "c.beqz", "c.beqz", 16,
    { 0|A(RELAXABLE)|A(COND_CTI), { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.bnez ${c-reg97},${cbranch9} */
  {
    RISCV_INSN_C_BNEZ, "c.bnez", "c.bnez", 16,
    { 0|A(RELAXABLE)|A(COND_CTI), { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.j ${cjmp12} */
  {
    RISCV_INSN_C_J, "c.j", "c.j", 16,
    { 0|A(RELAXABLE)|A(UNCOND_CTI), { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.slli64 ${c-reg117} */
  {
    RISCV_INSN_C_SLLI64, "c.slli64", "c.slli64", 16,
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.srli64 ${c-reg97} */
  {
    RISCV_INSN_C_SRLI64, "c.srli64", "c.srli64", 16,
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.srai64 ${c-reg97} */
  {
    RISCV_INSN_C_SRAI64, "c.srai64", "c.srai64", 16,
    { 0, { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32C)|(1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.jal ${cjmp12} */
  {
    RISCV_INSN_C_JAL, "c.jal", "c.jal", 16,
    { 0|A(RELAXABLE)|A(UNCOND_CTI), { { { (1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC), 0 } }, { { 1, "\x80" } }, { { (1LL<<RVEXT_RV32C), 0 } } } }
  },
/* c.addw ${c-reg97},${c-reg42} */
  {
    RISCV_INSN_C_ADDW, "c.addw", "c.addw", 16,
    { 0, { { { (1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.subw ${c-reg97},${c-reg42} */
  {
    RISCV_INSN_C_SUBW, "c.subw", "c.subw", 16,
    { 0, { { { (1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.addiw ${c-reg117-ne0},${imm6-121-65-abs} */
  {
    RISCV_INSN_C_ADDIW, "c.addiw", "c.addiw", 16,
    { 0, { { { (1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.ldsp ${c-reg117-ne0},${uimm9-43-121-62-000-abs}(${sp-reg}) */
  {
    RISCV_INSN_C_LDSP, "c.ldsp", "c.ldsp", 16,
    { 0, { { { (1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.sdsp ${c-reg62},${uimm9-93-123-000-abs}(${sp-reg}) */
  {
    RISCV_INSN_C_SDSP, "c.sdsp", "c.sdsp", 16,
    { 0, { { { (1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.ld ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    RISCV_INSN_C_LD, "c.ld", "c.ld", 16,
    { 0, { { { (1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.sd ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    RISCV_INSN_C_SD, "c.sd", "c.sd", 16,
    { 0, { { { (1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64C), 0 } } } }
  },
/* c.flwsp ${fl-rd},${uimm8-32-121-63-00-abs}(${sp-reg}) */
  {
    RISCV_INSN_C_FLWSP, "c.flwsp", "c.flwsp", 16,
    { 0, { { { (1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC), 0 } }, { { 1, "\x80" } }, { { (1LL<<RVEXT_RV32FC), 0 } } } }
  },
/* c.fswsp ${fc-rs3},${uimm8-82-124-00-abs}(${sp-reg}) */
  {
    RISCV_INSN_C_FSWSP, "c.fswsp", "c.fswsp", 16,
    { 0, { { { (1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC), 0 } }, { { 1, "\x80" } }, { { (1LL<<RVEXT_RV32FC), 0 } } } }
  },
/* c.fsw ${fc-rs2},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    RISCV_INSN_C_FSW, "c.fsw", "c.fsw", 16,
    { 0, { { { (1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC), 0 } }, { { 1, "\x80" } }, { { (1LL<<RVEXT_RV32FC), 0 } } } }
  },
/* c.flw ${fc-rs2},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    RISCV_INSN_C_FLW, "c.flw", "c.flw", 16,
    { 0, { { { (1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC), 0 } }, { { 1, "\x80" } }, { { (1LL<<RVEXT_RV32FC), 0 } } } }
  },
/* c.fldsp ${fl-rd},${uimm9-43-121-62-000-abs}(${sp-reg}) */
  {
    RISCV_INSN_C_FLDSP, "c.fldsp", "c.fldsp", 16,
    { 0, { { { (1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32DC)|(1LL<<RVEXT_RV64DC), 0 } } } }
  },
/* c.fsdsp ${fc-rs3},${uimm9-93-123-000-abs}(${sp-reg}) */
  {
    RISCV_INSN_C_FSDSP, "c.fsdsp", "c.fsdsp", 16,
    { 0, { { { (1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32DC)|(1LL<<RVEXT_RV64DC), 0 } } } }
  },
/* c.fsd ${fc-rs2},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    RISCV_INSN_C_FSD, "c.fsd", "c.fsd", 16,
    { 0, { { { (1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32DC)|(1LL<<RVEXT_RV64DC), 0 } } } }
  },
/* c.fld ${fc-rs2},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    RISCV_INSN_C_FLD, "c.fld", "c.fld", 16,
    { 0, { { { (1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32DC)|(1LL<<RVEXT_RV64DC), 0 } } } }
  },
/* lui ${rd},${uimm32-3120-000000000000} */
  {
    RISCV_INSN_LUI, "lui", "lui", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* auipc ${rd},${uimm32-3120-000000000000} */
  {
    RISCV_INSN_AUIPC, "auipc", "auipc", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* jal ${rd},${jmp21} */
  {
    RISCV_INSN_JAL, "jal", "jal", 32,
    { 0|A(UNCOND_CTI), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* jalr ${rd},${rs1},${imm-lo12} */
  {
    RISCV_INSN_JALR, "jalr", "jalr", 32,
    { 0|A(UNCOND_CTI), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* beq ${rs1},${rs2},${branch13} */
  {
    RISCV_INSN_BEQ, "beq", "beq", 32,
    { 0|A(RELAXABLE)|A(COND_CTI), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* bne ${rs1},${rs2},${branch13} */
  {
    RISCV_INSN_BNE, "bne", "bne", 32,
    { 0|A(RELAXABLE)|A(COND_CTI), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* blt ${rs1},${rs2},${branch13} */
  {
    RISCV_INSN_BLT, "blt", "blt", 32,
    { 0|A(RELAXABLE)|A(COND_CTI), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* bge ${rs1},${rs2},${branch13} */
  {
    RISCV_INSN_BGE, "bge", "bge", 32,
    { 0|A(RELAXABLE)|A(COND_CTI), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* bltu ${rs1},${rs2},${branch13} */
  {
    RISCV_INSN_BLTU, "bltu", "bltu", 32,
    { 0|A(RELAXABLE)|A(COND_CTI), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* bgeu ${rs1},${rs2},${branch13} */
  {
    RISCV_INSN_BGEU, "bgeu", "bgeu", 32,
    { 0|A(RELAXABLE)|A(COND_CTI), { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* lb ${rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_LB, "lb", "lb", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* lh ${rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_LH, "lh", "lh", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* lw ${rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_LW, "lw", "lw", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* lbu ${rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_LBU, "lbu", "lbu", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* lhu ${rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_LHU, "lhu", "lhu", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sb ${rs2},${store12}(${rs1}) */
  {
    RISCV_INSN_SB, "sb", "sb", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sh ${rs2},${store12}(${rs1}) */
  {
    RISCV_INSN_SH, "sh", "sh", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sw ${rs2},${store12}(${rs1}) */
  {
    RISCV_INSN_SW, "sw", "sw", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* addi ${rd},${rs1},${imm-lo12} */
  {
    RISCV_INSN_ADDI, "addi", "addi", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* slti ${rd},${rs1},${imm-lo12} */
  {
    RISCV_INSN_SLTI, "slti", "slti", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sltiu ${rd},${rs1},${imm-lo12} */
  {
    RISCV_INSN_SLTIU, "sltiu", "sltiu", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* xori ${rd},${rs1},${imm-lo12} */
  {
    RISCV_INSN_XORI, "xori", "xori", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* ori ${rd},${rs1},${imm-lo12} */
  {
    RISCV_INSN_ORI, "ori", "ori", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* andi ${rd},${rs1},${imm-lo12} */
  {
    RISCV_INSN_ANDI, "andi", "andi", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* slli ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SLLI_SHIFT5, "slli-shift5", "slli", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* srli ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SRLI_SHIFT5, "srli-shift5", "srli", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* srai ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SRAI_SHIFT5, "srai-shift5", "srai", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* add ${rd},${rs1},${rs2},${tprel_add} */
  {
    RISCV_INSN_ADD, "add", "add", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sub ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SUB, "sub", "sub", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sll ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SLL, "sll", "sll", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* slt ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SLT, "slt", "slt", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sltu ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SLTU, "sltu", "sltu", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* xor ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_XOR, "xor", "xor", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* srl ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SRL, "srl", "srl", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sra ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SRA, "sra", "sra", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* or ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_OR, "or", "or", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* and ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_AND, "and", "and", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* fence ${succ},${pred} */
  {
    RISCV_INSN_FENCE, "fence", "fence", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* s.fence.vm ${rs1} */
  {
    RISCV_INSN_SFENCE_VM, "sfence.vm", "s.fence.vm", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sfence.vma ${rs1},${rs2} */
  {
    RISCV_INSN_SFENCE_VMA, "sfence.vma", "sfence.vma", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* fence.tso ${succ},${pred} */
  {
    RISCV_INSN_FENCE_TSO, "fence.tso", "fence.tso", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* fence.i */
  {
    RISCV_INSN_FENCE_I, "fence.i", "fence.i", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32IFENCEI)|(1LL<<RVEXT_RV64IFENCEI), 0 } } } }
  },
/* ecall */
  {
    RISCV_INSN_ECALL, "ecall", "ecall", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* ebreak */
  {
    RISCV_INSN_EBREAK, "ebreak", "ebreak", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* csrrw ${rd},${csr},${rs1} */
  {
    RISCV_INSN_CSRRW, "csrrw", "csrrw", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ICSR)|(1LL<<RVEXT_RV64ICSR), 0 } } } }
  },
/* csrrs ${rd},${csr},${rs1} */
  {
    RISCV_INSN_CSRRS, "csrrs", "csrrs", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ICSR)|(1LL<<RVEXT_RV64ICSR), 0 } } } }
  },
/* csrrc ${rd},${csr},${rs1} */
  {
    RISCV_INSN_CSRRC, "csrrc", "csrrc", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ICSR)|(1LL<<RVEXT_RV64ICSR), 0 } } } }
  },
/* csrrwi ${rd},${csr},${uimm5} */
  {
    RISCV_INSN_CSRRWI, "csrrwi", "csrrwi", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ICSR)|(1LL<<RVEXT_RV64ICSR), 0 } } } }
  },
/* csrrsi ${rd},${csr},${uimm5} */
  {
    RISCV_INSN_CSRRSI, "csrrsi", "csrrsi", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ICSR)|(1LL<<RVEXT_RV64ICSR), 0 } } } }
  },
/* csrrci ${rd},${csr},${uimm5} */
  {
    RISCV_INSN_CSRRCI, "csrrci", "csrrci", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ICSR)|(1LL<<RVEXT_RV64ICSR), 0 } } } }
  },
/* uret */
  {
    RISCV_INSN_URET, "uret", "uret", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sret */
  {
    RISCV_INSN_SRET, "sret", "sret", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* hret */
  {
    RISCV_INSN_HRET, "hret", "hret", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* mret */
  {
    RISCV_INSN_MRET, "mret", "mret", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* dret */
  {
    RISCV_INSN_DRET, "dret", "dret", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* wfi */
  {
    RISCV_INSN_WFI, "wfi", "wfi", 32,
    { 0, { { { (1LL<<MACH_RV32I)|(1LL<<MACH_RV32IC)|(1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* lwu ${rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_LWU, "lwu", "lwu", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* ld ${rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_LD, "ld", "ld", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sd ${rs2},${store12}(${rs1}) */
  {
    RISCV_INSN_SD, "sd", "sd", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* slli ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SLLI_SHIFT6, "slli-shift6", "slli", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* srli ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SRLI_SHIFT6, "srli-shift6", "srli", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* srai ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SRAI_SHIFT6, "srai-shift6", "srai", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* addiw ${rd},${rs1},${imm-lo12} */
  {
    RISCV_INSN_ADDIW, "addiw", "addiw", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* slliw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SLLIW_SHIFT5, "slliw-shift5", "slliw", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* srliw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SRLIW_SHIFT5, "srliw-shift5", "srliw", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sraiw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SRAIW_SHIFT5, "sraiw-shift5", "sraiw", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* addw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_ADDW, "addw", "addw", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* subw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SUBW, "subw", "subw", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sllw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SLLW, "sllw", "sllw", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* srlw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SRLW, "srlw", "srlw", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* sraw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SRAW, "sraw", "sraw", 32,
    { 0, { { { (1LL<<MACH_RV64I)|(1LL<<MACH_RV64IC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64I), 0 } } } }
  },
/* mul ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_MUL, "mul", "mul", 32,
    { 0, { { { (1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32M)|(1LL<<RVEXT_RV64M), 0 } } } }
  },
/* mulh ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_MULH, "mulh", "mulh", 32,
    { 0, { { { (1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32M)|(1LL<<RVEXT_RV64M), 0 } } } }
  },
/* mulhsu ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_MULHSU, "mulhsu", "mulhsu", 32,
    { 0, { { { (1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32M)|(1LL<<RVEXT_RV64M), 0 } } } }
  },
/* mulhu ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_MULHU, "mulhu", "mulhu", 32,
    { 0, { { { (1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32M)|(1LL<<RVEXT_RV64M), 0 } } } }
  },
/* div ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_DIV, "div", "div", 32,
    { 0, { { { (1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32M)|(1LL<<RVEXT_RV64M), 0 } } } }
  },
/* divu ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_DIVU, "divu", "divu", 32,
    { 0, { { { (1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32M)|(1LL<<RVEXT_RV64M), 0 } } } }
  },
/* rem ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_REM, "rem", "rem", 32,
    { 0, { { { (1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32M)|(1LL<<RVEXT_RV64M), 0 } } } }
  },
/* remu ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_REMU, "remu", "remu", 32,
    { 0, { { { (1LL<<MACH_RV32IM)|(1LL<<MACH_RV32IMC)|(1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32M)|(1LL<<RVEXT_RV64M), 0 } } } }
  },
/* mulw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_MULW, "mulw", "mulw", 32,
    { 0, { { { (1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64M), 0 } } } }
  },
/* divw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_DIVW, "divw", "divw", 32,
    { 0, { { { (1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64M), 0 } } } }
  },
/* divuw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_DIVUW, "divuw", "divuw", 32,
    { 0, { { { (1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64M), 0 } } } }
  },
/* remw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_REMW, "remw", "remw", 32,
    { 0, { { { (1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64M), 0 } } } }
  },
/* remuw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_REMUW, "remuw", "remuw", 32,
    { 0, { { { (1LL<<MACH_RV64IM)|(1LL<<MACH_RV64IMC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64M), 0 } } } }
  },
/* lr.w ${rd},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_LR_W, "lr.w", "lr.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* lr.w.aq ${rd},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_LR_W_AQ, "lr.w.aq", "lr.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* lr.w.rl ${rd},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_LR_W_RL, "lr.w.rl", "lr.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* lr.w.aqrl ${rd},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_LR_W_AQRL, "lr.w.aqrl", "lr.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* sc.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_SC_W, "sc.w", "sc.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* sc.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_SC_W_AQ, "sc.w.aq", "sc.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* sc.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_SC_W_RL, "sc.w.rl", "sc.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* sc.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_SC_W_AQRL, "sc.w.aqrl", "sc.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoswap.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOSWAP_W, "amoswap.w", "amoswap.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoswap.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOSWAP_W_AQ, "amoswap.w.aq", "amoswap.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoswap.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOSWAP_W_RL, "amoswap.w.rl", "amoswap.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoswap.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOSWAP_W_AQRL, "amoswap.w.aqrl", "amoswap.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoadd.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOADD_W, "amoadd.w", "amoadd.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoadd.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOADD_W_AQ, "amoadd.w.aq", "amoadd.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoadd.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOADD_W_RL, "amoadd.w.rl", "amoadd.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoadd.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOADD_W_AQRL, "amoadd.w.aqrl", "amoadd.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoxor.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOXOR_W, "amoxor.w", "amoxor.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoxor.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOXOR_W_AQ, "amoxor.w.aq", "amoxor.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoxor.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOXOR_W_RL, "amoxor.w.rl", "amoxor.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoxor.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOXOR_W_AQRL, "amoxor.w.aqrl", "amoxor.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoand.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOAND_W, "amoand.w", "amoand.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoand.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOAND_W_AQ, "amoand.w.aq", "amoand.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoand.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOAND_W_RL, "amoand.w.rl", "amoand.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoand.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOAND_W_AQRL, "amoand.w.aqrl", "amoand.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoor.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOOR_W, "amoor.w", "amoor.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoor.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOOR_W_AQ, "amoor.w.aq", "amoor.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoor.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOOR_W_RL, "amoor.w.rl", "amoor.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoor.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOOR_W_AQRL, "amoor.w.aqrl", "amoor.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomin.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMIN_W, "amomin.w", "amomin.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomin.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMIN_W_AQ, "amomin.w.aq", "amomin.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomin.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMIN_W_RL, "amomin.w.rl", "amomin.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomin.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMIN_W_AQRL, "amomin.w.aqrl", "amomin.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomax.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAX_W, "amomax.w", "amomax.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomax.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAX_W_AQ, "amomax.w.aq", "amomax.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomax.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAX_W_RL, "amomax.w.rl", "amomax.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomax.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAX_W_AQRL, "amomax.w.aqrl", "amomax.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amominu.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMINU_W, "amominu.w", "amominu.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amominu.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMINU_W_AQ, "amominu.w.aq", "amominu.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amominu.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMINU_W_RL, "amominu.w.rl", "amominu.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amominu.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMINU_W_AQRL, "amominu.w.aqrl", "amominu.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomaxu.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAXU_W, "amomaxu.w", "amomaxu.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomaxu.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAXU_W_AQ, "amomaxu.w.aq", "amomaxu.w.aq", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomaxu.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAXU_W_RL, "amomaxu.w.rl", "amomaxu.w.rl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomaxu.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAXU_W_AQRL, "amomaxu.w.aqrl", "amomaxu.w.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32A)|(1LL<<RVEXT_RV64A), 0 } } } }
  },
/* lr.d ${rd},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_LR_D, "lr.d", "lr.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* lr.d.aq ${rd},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_LR_D_AQ, "lr.d.aq", "lr.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* lr.d.rl ${rd},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_LR_D_RL, "lr.d.rl", "lr.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* lr.d.aqrl ${rd},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_LR_D_AQRL, "lr.d.aqrl", "lr.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* sc.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_SC_D, "sc.d", "sc.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* sc.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_SC_D_AQ, "sc.d.aq", "sc.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* sc.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_SC_D_RL, "sc.d.rl", "sc.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* sc.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_SC_D_AQRL, "sc.d.aqrl", "sc.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoswap.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOSWAP_D, "amoswap.d", "amoswap.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoswap.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOSWAP_D_AQ, "amoswap.d.aq", "amoswap.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoswap.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOSWAP_D_RL, "amoswap.d.rl", "amoswap.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoswap.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOSWAP_D_AQRL, "amoswap.d.aqrl", "amoswap.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoadd.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOADD_D, "amoadd.d", "amoadd.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoadd.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOADD_D_AQ, "amoadd.d.aq", "amoadd.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoadd.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOADD_D_RL, "amoadd.d.rl", "amoadd.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoadd.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOADD_D_AQRL, "amoadd.d.aqrl", "amoadd.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoxor.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOXOR_D, "amoxor.d", "amoxor.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoxor.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOXOR_D_AQ, "amoxor.d.aq", "amoxor.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoxor.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOXOR_D_RL, "amoxor.d.rl", "amoxor.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoxor.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOXOR_D_AQRL, "amoxor.d.aqrl", "amoxor.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoand.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOAND_D, "amoand.d", "amoand.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoand.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOAND_D_AQ, "amoand.d.aq", "amoand.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoand.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOAND_D_RL, "amoand.d.rl", "amoand.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoand.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOAND_D_AQRL, "amoand.d.aqrl", "amoand.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoor.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOOR_D, "amoor.d", "amoor.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoor.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOOR_D_AQ, "amoor.d.aq", "amoor.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoor.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOOR_D_RL, "amoor.d.rl", "amoor.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amoor.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOOR_D_AQRL, "amoor.d.aqrl", "amoor.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomin.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMIN_D, "amomin.d", "amomin.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomin.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMIN_D_AQ, "amomin.d.aq", "amomin.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomin.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMIN_D_RL, "amomin.d.rl", "amomin.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomin.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMIN_D_AQRL, "amomin.d.aqrl", "amomin.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomax.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAX_D, "amomax.d", "amomax.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomax.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAX_D_AQ, "amomax.d.aq", "amomax.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomax.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAX_D_RL, "amomax.d.rl", "amomax.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomax.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAX_D_AQRL, "amomax.d.aqrl", "amomax.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amominu.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMINU_D, "amominu.d", "amominu.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amominu.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMINU_D_AQ, "amominu.d.aq", "amominu.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amominu.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMINU_D_RL, "amominu.d.rl", "amominu.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amominu.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMINU_D_AQRL, "amominu.d.aqrl", "amominu.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomaxu.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAXU_D, "amomaxu.d", "amomaxu.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomaxu.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAXU_D_AQ, "amomaxu.d.aq", "amomaxu.d.aq", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomaxu.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAXU_D_RL, "amomaxu.d.rl", "amomaxu.d.rl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* amomaxu.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    RISCV_INSN_AMOMAXU_D_AQRL, "amomaxu.d.aqrl", "amomaxu.d.aqrl", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64A), 0 } } } }
  },
/* clz ${rd},${rs1} */
  {
    RISCV_INSN_CLZ, "clz", "clz", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* ctz ${rd},${rs1} */
  {
    RISCV_INSN_CTZ, "ctz", "ctz", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* clzw ${rd},${rs1} */
  {
    RISCV_INSN_CLZW, "clzw", "clzw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* ctzw ${rd},${rs1} */
  {
    RISCV_INSN_CTZW, "ctzw", "ctzw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* pcnt ${rd},${rs1} */
  {
    RISCV_INSN_PCNT, "pcnt", "pcnt", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* pcntw ${rd},${rs1} */
  {
    RISCV_INSN_PCNTW, "pcntw", "pcntw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* andn ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_ANDN, "andn", "andn", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* orn ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_ORN, "orn", "orn", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* xnor ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_XNOR, "xnor", "xnor", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* pack ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_PACK, "pack", "pack", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* packw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_PACKW, "packw", "packw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* min ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_MIN, "min", "min", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* max ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_MAX, "max", "max", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* minu ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_MINU, "minu", "minu", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* maxu ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_MAXU, "maxu", "maxu", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* sbset ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SBSET, "sbset", "sbset", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBS)|(1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbclr ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SBCLR, "sbclr", "sbclr", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBS)|(1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbinv ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SBINV, "sbinv", "sbinv", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBS)|(1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbext ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SBEXT, "sbext", "sbext", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBS)|(1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbseti ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SBSETI_SHIFT6, "sbseti-shift6", "sbseti", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBS)|(1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbclri ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SBCLRI_SHIFT6, "sbclri-shift6", "sbclri", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBS)|(1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbinvi ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SBINVI_SHIFT6, "sbinvi-shift6", "sbinvi", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBS)|(1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbexti ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SBEXTI_SHIFT6, "sbexti-shift6", "sbexti", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBS)|(1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbsetw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SBSETW, "sbsetw", "sbsetw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbclrw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SBCLRW, "sbclrw", "sbclrw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbinvw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SBINVW, "sbinvw", "sbinvw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbextw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SBEXTW, "sbextw", "sbextw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbsetiw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SBSETIW_SHIFT5, "sbsetiw-shift5", "sbsetiw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbclriw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SBCLRIW_SHIFT5, "sbclriw-shift5", "sbclriw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* sbinviw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SBINVIW_SHIFT5, "sbinviw-shift5", "sbinviw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBS), 0 } } } }
  },
/* slo ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SLO, "slo", "slo", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* sro ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SRO, "sro", "sro", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* sloi ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SLOI_SHIFT6, "sloi-shift6", "sloi", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* sroi ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SROI_SHIFT6, "sroi-shift6", "sroi", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* slow ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SLOW, "slow", "slow", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* srow ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SROW, "srow", "srow", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* sloiw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SLOIW_SHIFT5, "sloiw-shift5", "sloiw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* sroiw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_SROIW_SHIFT5, "sroiw-shift5", "sroiw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* rol ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_ROL, "rol", "rol", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* ror ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_ROR, "ror", "ror", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* rori ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_RORI_SHIFT6, "rori-shift6", "rori", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBB)|(1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* rolw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_ROLW, "rolw", "rolw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* rorw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_RORW, "rorw", "rorw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* roriw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_RORIW_SHIFT5, "roriw-shift5", "roriw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* grev ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_GREV, "grev", "grev", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* grevi ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_GREVI_SHIFT6, "grevi-shift6", "grevi", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* grevw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_GREVW, "grevw", "grevw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* greviw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_GREVIW_SHIFT5, "greviw-shift5", "greviw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* shfl ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SHFL, "shfl", "shfl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* unshfl ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_UNSHFL, "unshfl", "unshfl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* shfli ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_SHFLI_SHIFT6, "shfli-shift6", "shfli", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* unshfli ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_UNSHFLI_SHIFT6, "unshfli-shift6", "unshfli", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* shflw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SHFLW, "shflw", "shflw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* unshflw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_UNSHFLW, "unshflw", "unshflw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* gorc ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_GORC, "gorc", "gorc", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* gorci ${rd},${rs1},${uimm6-256} */
  {
    RISCV_INSN_GORCI_SHIFT6, "gorci-shift6", "gorci", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* gorcw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_GORCW, "gorcw", "gorcw", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* gorciw ${rd},${rs1},${uimm5-245} */
  {
    RISCV_INSN_GORCIW_SHIFT5, "gorciw-shift5", "gorciw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* bfp ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_BFP, "bfp", "bfp", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* bfpw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_BFPW, "bfpw", "bfpw", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBP)|(1LL<<RVEXT_RV64ZBP), 0 } } } }
  },
/* bext ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_BEXT, "bext", "bext", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBE)|(1LL<<RVEXT_RV64ZBE), 0 } } } }
  },
/* bdep ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_BDEP, "bdep", "bdep", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBE)|(1LL<<RVEXT_RV64ZBE), 0 } } } }
  },
/* bextw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_BEXTW, "bextw", "bextw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBE), 0 } } } }
  },
/* bdepw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_BDEPW, "bdepw", "bdepw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBE), 0 } } } }
  },
/* clmul ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_CLMUL, "clmul", "clmul", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32B)|(1LL<<RVEXT_RV64B), 0 } } } }
  },
/* clmulh ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_CLMULH, "clmulh", "clmulh", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32B)|(1LL<<RVEXT_RV64B), 0 } } } }
  },
/* clmulr ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_CLMULR, "clmulr", "clmulr", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32B)|(1LL<<RVEXT_RV64B), 0 } } } }
  },
/* clmulw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_CLMULW, "clmulw", "clmulw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBC), 0 } } } }
  },
/* clmulhw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_CLMULHW, "clmulhw", "clmulhw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBC), 0 } } } }
  },
/* clmulrw ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_CLMULRW, "clmulrw", "clmulrw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBC), 0 } } } }
  },
/* crc32.b ${rd},${rs1} */
  {
    RISCV_INSN_CRC32_B, "crc32.b", "crc32.b", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32B)|(1LL<<RVEXT_RV64B), 0 } } } }
  },
/* crc32.h ${rd},${rs1} */
  {
    RISCV_INSN_CRC32_H, "crc32.h", "crc32.h", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32B)|(1LL<<RVEXT_RV64B), 0 } } } }
  },
/* crc32.w ${rd},${rs1} */
  {
    RISCV_INSN_CRC32_W, "crc32.w", "crc32.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32B)|(1LL<<RVEXT_RV64B), 0 } } } }
  },
/* crc32c.b ${rd},${rs1} */
  {
    RISCV_INSN_CRC32C_B, "crc32c.b", "crc32c.b", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32B)|(1LL<<RVEXT_RV64B), 0 } } } }
  },
/* crc32c.h ${rd},${rs1} */
  {
    RISCV_INSN_CRC32C_H, "crc32c.h", "crc32c.h", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32B)|(1LL<<RVEXT_RV64B), 0 } } } }
  },
/* crc32c.w ${rd},${rs1} */
  {
    RISCV_INSN_CRC32C_W, "crc32c.w", "crc32c.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32B)|(1LL<<RVEXT_RV64B), 0 } } } }
  },
/* crc32.d ${rd},${rs1} */
  {
    RISCV_INSN_CRC32_D, "crc32.d", "crc32.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBR), 0 } } } }
  },
/* crc32c.d ${rd},${rs1} */
  {
    RISCV_INSN_CRC32C_D, "crc32c.d", "crc32c.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBR), 0 } } } }
  },
/* bmator ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_BMATOR, "bmator", "bmator", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBM), 0 } } } }
  },
/* bmatxor ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_BMATXOR, "bmatxor", "bmatxor", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBM), 0 } } } }
  },
/* bmatflip ${rd},${rs1} */
  {
    RISCV_INSN_BMATFLIP, "bmatflip", "bmatflip", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBM), 0 } } } }
  },
/* cmix ${rd},${rs2},${rs1},${rs3} */
  {
    RISCV_INSN_CMIX, "cmix", "cmix", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBT)|(1LL<<RVEXT_RV64ZBT), 0 } } } }
  },
/* cmov ${rd},${rs2},${rs1},${rs3} */
  {
    RISCV_INSN_CMOV, "cmov", "cmov", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBT)|(1LL<<RVEXT_RV64ZBT), 0 } } } }
  },
/* fsl ${rd},${rs1},${rs3},${rs2} */
  {
    RISCV_INSN_FSL, "fsl", "fsl", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBT)|(1LL<<RVEXT_RV64ZBT), 0 } } } }
  },
/* fsr ${rd},${rs1},${rs3},${rs2} */
  {
    RISCV_INSN_FSR, "fsr", "fsr", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBT)|(1LL<<RVEXT_RV64ZBT), 0 } } } }
  },
/* fsri ${rd},${rs1},${rs3},${uimm6-256} */
  {
    RISCV_INSN_FSRI, "fsri", "fsri", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32ZBT)|(1LL<<RVEXT_RV64ZBT), 0 } } } }
  },
/* fslw ${rd},${rs1},${rs3},${rs2} */
  {
    RISCV_INSN_FSLW, "fslw", "fslw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBT), 0 } } } }
  },
/* fsrw ${rd},${rs1},${rs3},${rs2} */
  {
    RISCV_INSN_FSRW, "fsrw", "fsrw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBT), 0 } } } }
  },
/* fsriw ${rd},${rs1},${rs3},${uimm5-245} */
  {
    RISCV_INSN_FSRIW, "fsriw", "fsriw", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBT), 0 } } } }
  },
/* addwu ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_ADDWU, "addwu", "addwu", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* subwu ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SUBWU, "subwu", "subwu", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* addiwu ${rd},${rs1},${imm-lo12} */
  {
    RISCV_INSN_ADDIWU, "addiwu", "addiwu", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* addu.w ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_ADDU_W, "addu.w", "addu.w", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* subu.w ${rd},${rs1},${rs2} */
  {
    RISCV_INSN_SUBU_W, "subu.w", "subu.w", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* slliu.w ${rd},${rs1},${uimm7-267} */
  {
    RISCV_INSN_SLLIU_W_SHIFT7, "slliu.w-shift7", "slliu.w", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64ZBB), 0 } } } }
  },
/* flw ${fl-rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_FLW, "flw", "flw", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fsw ${fl-rs2},${store12}(${rs1}) */
  {
    RISCV_INSN_FSW, "fsw", "fsw", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fmadd.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FMADD_S, "fmadd.s", "fmadd.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fmsub.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FMSUB_S, "fmsub.s", "fmsub.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fnmsub.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FNMSUB_S, "fnmsub.s", "fnmsub.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fnmadd.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FNMADD_S, "fnmadd.s", "fnmadd.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fadd.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FADD_S, "fadd.s", "fadd.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fsub.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FSUB_S, "fsub.s", "fsub.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fmul.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FMUL_S, "fmul.s", "fmul.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fdiv.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FDIV_S, "fdiv.s", "fdiv.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fsgnj.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FSGNJ_S, "fsgnj.s", "fsgnj.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fsgnjn.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FSGNJN_S, "fsgnjn.s", "fsgnjn.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fsgnjx.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FSGNJX_S, "fsgnjx.s", "fsgnjx.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fmin.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FMIN_S, "fmin.s", "fmin.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fmax.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FMAX_S, "fmax.s", "fmax.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* feq.s ${rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FEQ_S, "feq.s", "feq.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* flt.s ${rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FLT_S, "flt.s", "flt.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fle.s ${rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FLE_S, "fle.s", "fle.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fsqrt.s ${fl-rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FSQRT_S, "fsqrt.s", "fsqrt.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fcvt.w.s ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_W_S, "fcvt.w.s", "fcvt.w.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fcvt.wu.s ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_WU_S, "fcvt.wu.s", "fcvt.wu.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fmv.x.w ${rd},${fl-rs1} */
  {
    RISCV_INSN_FMV_X_W, "fmv.x.w", "fmv.x.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fclass.s ${rd},${fl-rs1} */
  {
    RISCV_INSN_FCLASS_S, "fclass.s", "fclass.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fcvt.s.w ${fl-rd},${rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_S_W, "fcvt.s.w", "fcvt.s.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fcvt.s.wu ${fl-rd},${rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_S_WU, "fcvt.s.wu", "fcvt.s.wu", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fmv.w.x ${fl-rd},${rs1} */
  {
    RISCV_INSN_FMV_W_X, "fmv.w.x", "fmv.w.x", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fcvt.s.l ${fl-rd},${rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_S_L, "fcvt.s.l", "fcvt.s.l", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fcvt.s.lu ${fl-rd},${rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_S_LU, "fcvt.s.lu", "fcvt.s.lu", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fcvt.l.s ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_L_S, "fcvt.l.s", "fcvt.l.s", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fcvt.lu.s ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_LU_S, "fcvt.lu.s", "fcvt.lu.s", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64F), 0 } } } }
  },
/* fld ${fl-rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_FLD, "fld", "fld", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fsd ${fl-rs2},${store12}(${rs1}) */
  {
    RISCV_INSN_FSD, "fsd", "fsd", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fmadd.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FMADD_D, "fmadd.d", "fmadd.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fmsub.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FMSUB_D, "fmsub.d", "fmsub.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fnmsub.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FNMSUB_D, "fnmsub.d", "fnmsub.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fnmadd.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FNMADD_D, "fnmadd.d", "fnmadd.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fadd.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FADD_D, "fadd.d", "fadd.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fsub.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FSUB_D, "fsub.d", "fsub.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fmul.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FMUL_D, "fmul.d", "fmul.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fdiv.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FDIV_D, "fdiv.d", "fdiv.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fsgnj.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FSGNJ_D, "fsgnj.d", "fsgnj.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fsgnjn.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FSGNJN_D, "fsgnjn.d", "fsgnjn.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fsgnjx.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FSGNJX_D, "fsgnjx.d", "fsgnjx.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fmin.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FMIN_D, "fmin.d", "fmin.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fmax.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FMAX_D, "fmax.d", "fmax.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* feq.d ${rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FEQ_D, "feq.d", "feq.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* flt.d ${rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FLT_D, "flt.d", "flt.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fle.d ${rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FLE_D, "fle.d", "fle.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fsqrt.d ${fl-rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FSQRT_D, "fsqrt.d", "fsqrt.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.w.d ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_W_D, "fcvt.w.d", "fcvt.w.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.wu.d ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_WU_D, "fcvt.wu.d", "fcvt.wu.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fclass.d ${rd},${fl-rs1} */
  {
    RISCV_INSN_FCLASS_D, "fclass.d", "fclass.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.d.w ${fl-rd},${rs1} */
  {
    RISCV_INSN_FCVT_D_W, "fcvt.d.w", "fcvt.d.w", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.d.wu ${fl-rd},${rs1} */
  {
    RISCV_INSN_FCVT_D_WU, "fcvt.d.wu", "fcvt.d.wu", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.s.d ${fl-rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_S_D, "fcvt.s.d", "fcvt.s.d", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.d.s ${fl-rd},${fl-rs1} */
  {
    RISCV_INSN_FCVT_D_S, "fcvt.d.s", "fcvt.d.s", 32,
    { 0, { { { (1LL<<MACH_RV32G)|(1LL<<MACH_RV32GC)|(1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32D)|(1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.l.d ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_L_D, "fcvt.l.d", "fcvt.l.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.lu.d ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_LU_D, "fcvt.lu.d", "fcvt.lu.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fmv.x.d ${rd},${fl-rs1} */
  {
    RISCV_INSN_FMV_X_D, "fmv.x.d", "fmv.x.d", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.d.l ${fl-rd},${rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_D_L, "fcvt.d.l", "fcvt.d.l", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fcvt.d.lu ${fl-rd},${rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_D_LU, "fcvt.d.lu", "fcvt.d.lu", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64D), 0 } } } }
  },
/* fmv.d.x ${fl-rd},${rs1} */
  {
    RISCV_INSN_FMV_D_X, "fmv.d.x", "fmv.d.x", 32,
    { 0, { { { (1LL<<MACH_RV64G)|(1LL<<MACH_RV64GC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64D), 0 } } } }
  },
/* flq ${fl-rd},${imm-lo12}(${rs1}) */
  {
    RISCV_INSN_FLQ, "flq", "flq", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fsq ${fl-rs2},${store12}(${rs1}) */
  {
    RISCV_INSN_FSQ, "fsq", "fsq", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fmadd.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FMADD_Q, "fmadd.q", "fmadd.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fmsub.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FMSUB_Q, "fmsub.q", "fmsub.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fnmsub.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FNMSUB_Q, "fnmsub.q", "fnmsub.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fnmadd.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */
  {
    RISCV_INSN_FNMADD_Q, "fnmadd.q", "fnmadd.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fadd.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FADD_Q, "fadd.q", "fadd.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fsub.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FSUB_Q, "fsub.q", "fsub.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fmul.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FMUL_Q, "fmul.q", "fmul.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fdiv.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */
  {
    RISCV_INSN_FDIV_Q, "fdiv.q", "fdiv.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fsgnj.q ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FSGNJ_Q, "fsgnj.q", "fsgnj.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fsgnjn.q ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FSGNJN_Q, "fsgnjn.q", "fsgnjn.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fsgnjx.q ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FSGNJX_Q, "fsgnjx.q", "fsgnjx.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fmin.q ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FMIN_Q, "fmin.q", "fmin.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fmax.q ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FMAX_Q, "fmax.q", "fmax.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* feq.q ${rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FEQ_Q, "feq.q", "feq.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* flt.q ${rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FLT_Q, "flt.q", "flt.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fle.q ${rd},${fl-rs1},${fl-rs2} */
  {
    RISCV_INSN_FLE_Q, "fle.q", "fle.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fsqrt.q ${fl-rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FSQRT_Q, "fsqrt.q", "fsqrt.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.w.q ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_W_Q, "fcvt.w.q", "fcvt.w.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.wu.q ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_WU_Q, "fcvt.wu.q", "fcvt.wu.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fclass.q ${rd},${fl-rs1} */
  {
    RISCV_INSN_FCLASS_Q, "fclass.q", "fclass.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.q.w ${fl-rd},${rs1} */
  {
    RISCV_INSN_FCVT_Q_W, "fcvt.q.w", "fcvt.q.w", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.q.wu ${fl-rd},${rs1} */
  {
    RISCV_INSN_FCVT_Q_WU, "fcvt.q.wu", "fcvt.q.wu", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.s.q ${fl-rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_S_Q, "fcvt.s.q", "fcvt.s.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.d.q ${fl-rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_D_Q, "fcvt.d.q", "fcvt.d.q", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.q.s ${fl-rd},${fl-rs1} */
  {
    RISCV_INSN_FCVT_Q_S, "fcvt.q.s", "fcvt.q.s", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.q.d ${fl-rd},${fl-rs1} */
  {
    RISCV_INSN_FCVT_Q_D, "fcvt.q.d", "fcvt.q.d", 32,
    { 0, { { { (1LL<<MACH_RV32GQC)|(1LL<<MACH_RV64GQC), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32Q)|(1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.l.q ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_L_Q, "fcvt.l.q", "fcvt.l.q", 32,
    { 0, { { { (1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.lu.q ${rd},${fl-rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_LU_Q, "fcvt.lu.q", "fcvt.lu.q", 32,
    { 0, { { { (1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.q.l ${fl-rd},${rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_Q_L, "fcvt.q.l", "fcvt.q.l", 32,
    { 0, { { { (1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* fcvt.q.lu ${fl-rd},${rs1},${fl-rm} */
  {
    RISCV_INSN_FCVT_Q_LU, "fcvt.q.lu", "fcvt.q.lu", 32,
    { 0, { { { (1LL<<MACH_RV64GQC), 0 } }, { { 1, "\x40" } }, { { (1LL<<RVEXT_RV64Q), 0 } } } }
  },
/* _insn_r ${opcode7},${funct3},${funct7},${fl-rd},${fl-rs1},${fl-rs2} */
  {
    -1, "insn-r-fff", "_insn_r", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* _insn_r ${opcode7},${funct3},${funct7},${fl-rd},${rs1},${rs2} */
  {
    -1, "insn-r-fgg", "_insn_r", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* _insn_r ${opcode7},${funct3},${funct7},${rd},${fl-rs1},${rs2} */
  {
    -1, "insn-r-gfg", "_insn_r", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* _insn_r ${opcode7},${funct3},${funct7},${rd},${rs1},${fl-rs2} */
  {
    -1, "insn-r-ggf", "_insn_r", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* _insn_r ${opcode7},${funct3},${funct7},${fl-rd},${fl-rs1},${rs2} */
  {
    -1, "insn-r-ffg", "_insn_r", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* _insn_r ${opcode7},${funct3},${funct7},${fl-rd},${rs1},${fl-rs2} */
  {
    -1, "insn-r-fgf", "_insn_r", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* _insn_r ${opcode7},${funct3},${funct7},${rd},${fl-rs1},${fl-rs2} */
  {
    -1, "insn-r-gff", "_insn_r", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* _insn_r ${opcode7},${funct3},${funct2},${rd},${rs1},${rs2},${rs3} */
  {
    -1, "insn-r4", "_insn_r", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32F)|(1LL<<RVEXT_RV64F), 0 } } } }
  },
/* _insn_r ${opcode7},${funct3},${funct7},${rd},${rs1},${rs2} */
  {
    -1, "insn-r", "_insn_r", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_i ${opcode7},${funct3},${rd},${rs1},${imm-lo12} */
  {
    -1, "insn-i-1", "_insn_i", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_i ${opcode7},${funct3},${rd},${imm-lo12}(${rs1}) */
  {
    -1, "insn-i-2", "_insn_i", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_s ${opcode7},${funct3},${rd},${imm-lo12}(${rs1}) */
  {
    -1, "insn-s", "_insn_s", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_sb ${opcode7},${funct3},${rs2},${store12}(${rs1}) */
  {
    -1, "insn-sb-1", "_insn_sb", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_sb ${opcode7},${funct3},${rs1},${rs2},${branch13} */
  {
    -1, "insn-sb-2", "_insn_sb", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_u ${opcode7},${rd},${uimm32-3120-000000000000} */
  {
    -1, "insn-u", "_insn_u", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_uj ${opcode7},${rd},${jmp21} */
  {
    -1, "insn-uj", "_insn_uj", 32,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_ci ${copcode2},${cfunct3},${c-reg117},${imm6-121-65-abs} */
  {
    -1, "insn-ci", "_insn_ci", 16,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_cr ${copcode2},${cfunct4},${c-reg117-ne0},${c-reg62-ne0} */
  {
    -1, "insn-cr", "_insn_cr", 16,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_ciw ${copcode2},${cfunct3},${c-reg42},${uimm8-128} */
  {
    -1, "insn-ciw", "_insn_ciw", 16,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_ca ${copcode2},${cfunct6},${cfunct2},${c-reg97},${c-reg42} */
  {
    -1, "insn-ca", "_insn_ca", 16,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_cb ${copcode2},${cfunct3},${c-reg97},${cbranch9} */
  {
    -1, "insn-cb", "_insn_cb", 16,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
/* _insn_cj ${copcode2},${cfunct3},${cjmp12} */
  {
    -1, "insn-cj", "_insn_cj", 16,
    { 0|A(ALIAS)|A(NO_DIS), { { { (1LL<<MACH_BASE), 0 } }, { { 1, "\xc0" } }, { { (1LL<<RVEXT_RV32I)|(1LL<<RVEXT_RV64I), 0 } } } }
  },
};

#undef OP
#undef A

/* Initialize anything needed to be done once, before any cpu_open call.  */

static void
init_tables (void)
{
}

static const CGEN_MACH * lookup_mach_via_bfd_name (const CGEN_MACH *, const char *);
static void build_hw_table      (CGEN_CPU_TABLE *);
static void build_ifield_table  (CGEN_CPU_TABLE *);
static void build_operand_table (CGEN_CPU_TABLE *);
static void build_insn_table    (CGEN_CPU_TABLE *);
static void riscv_cgen_rebuild_tables (CGEN_CPU_TABLE *);

/* Subroutine of riscv_cgen_cpu_open to look up a mach via its bfd name.  */

static const CGEN_MACH *
lookup_mach_via_bfd_name (const CGEN_MACH *table, const char *name)
{
  while (table->name)
    {
      if (strcmp (name, table->bfd_name) == 0)
	return table;
      ++table;
    }
  return NULL;
}

/* Subroutine of riscv_cgen_cpu_open to build the hardware table.  */

static void
build_hw_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_HW_ENTRY *init = & riscv_cgen_hw_table[0];
  /* MAX_HW is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_HW_ENTRY **selected =
    (const CGEN_HW_ENTRY **) xmalloc (MAX_HW * sizeof (CGEN_HW_ENTRY *));

  cd->hw_table.init_entries = init;
  cd->hw_table.entry_size = sizeof (CGEN_HW_ENTRY);
  memset (selected, 0, MAX_HW * sizeof (CGEN_HW_ENTRY *));
  /* ??? For now we just use machs to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_HW_ATTR_VALUE (&init[i], CGEN_HW_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->hw_table.entries = selected;
  cd->hw_table.num_entries = MAX_HW;
}

/* Subroutine of riscv_cgen_cpu_open to build the hardware table.  */

static void
build_ifield_table (CGEN_CPU_TABLE *cd)
{
  cd->ifld_table = & riscv_cgen_ifld_table[0];
}

/* Subroutine of riscv_cgen_cpu_open to build the hardware table.  */

static void
build_operand_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_OPERAND *init = & riscv_cgen_operand_table[0];
  /* MAX_OPERANDS is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_OPERAND **selected = xmalloc (MAX_OPERANDS * sizeof (* selected));

  cd->operand_table.init_entries = init;
  cd->operand_table.entry_size = sizeof (CGEN_OPERAND);
  memset (selected, 0, MAX_OPERANDS * sizeof (CGEN_OPERAND *));
  /* ??? For now we just use mach to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_OPERAND_ATTR_VALUE (&init[i], CGEN_OPERAND_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->operand_table.entries = selected;
  cd->operand_table.num_entries = MAX_OPERANDS;
}

/* Subroutine of riscv_cgen_cpu_open to build the hardware table.
   ??? This could leave out insns not supported by the specified mach/isa,
   but that would cause errors like "foo only supported by bar" to become
   "unknown insn", so for now we include all insns and require the app to
   do the checking later.
   ??? On the other hand, parsing of such insns may require their hardware or
   operand elements to be in the table [which they mightn't be].  */

static void
build_insn_table (CGEN_CPU_TABLE *cd)
{
  int i;
  const CGEN_IBASE *ib = & riscv_cgen_insn_table[0];
  CGEN_INSN *insns = xmalloc (MAX_INSNS * sizeof (CGEN_INSN));

  memset (insns, 0, MAX_INSNS * sizeof (CGEN_INSN));
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].base = &ib[i];
  cd->insn_table.init_entries = insns;
  cd->insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->insn_table.num_init_entries = MAX_INSNS;
}

/* Subroutine of riscv_cgen_cpu_open to rebuild the tables.  */

static void
riscv_cgen_rebuild_tables (CGEN_CPU_TABLE *cd)
{
  int i;
  CGEN_BITSET *isas = cd->isas;
  unsigned int machs = cd->machs;

  cd->int_insn_p = CGEN_INT_INSN_P;

  /* Data derived from the isa spec.  */
#define UNSET (CGEN_SIZE_UNKNOWN + 1)
  cd->default_insn_bitsize = UNSET;
  cd->base_insn_bitsize = UNSET;
  cd->min_insn_bitsize = 65535; /* Some ridiculously big number.  */
  cd->max_insn_bitsize = 0;
  for (i = 0; i < MAX_ISAS; ++i)
    if (cgen_bitset_contains (isas, i))
      {
	const CGEN_ISA *isa = & riscv_cgen_isa_table[i];

	/* Default insn sizes of all selected isas must be
	   equal or we set the result to 0, meaning "unknown".  */
	if (cd->default_insn_bitsize == UNSET)
	  cd->default_insn_bitsize = isa->default_insn_bitsize;
	else if (isa->default_insn_bitsize == cd->default_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->default_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Base insn sizes of all selected isas must be equal
	   or we set the result to 0, meaning "unknown".  */
	if (cd->base_insn_bitsize == UNSET)
	  cd->base_insn_bitsize = isa->base_insn_bitsize;
	else if (isa->base_insn_bitsize == cd->base_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->base_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Set min,max insn sizes.  */
	if (isa->min_insn_bitsize < cd->min_insn_bitsize)
	  cd->min_insn_bitsize = isa->min_insn_bitsize;
	if (isa->max_insn_bitsize > cd->max_insn_bitsize)
	  cd->max_insn_bitsize = isa->max_insn_bitsize;
      }

  /* Data derived from the mach spec.  */
  for (i = 0; i < MAX_MACHS; ++i)
    if (((1 << i) & machs) != 0)
      {
	const CGEN_MACH *mach = & riscv_cgen_mach_table[i];

	if (mach->insn_chunk_bitsize != 0)
	{
	  if (cd->insn_chunk_bitsize != 0 && cd->insn_chunk_bitsize != mach->insn_chunk_bitsize)
	    {
	      fprintf (stderr, "riscv_cgen_rebuild_tables: conflicting insn-chunk-bitsize values: `%d' vs. `%d'\n",
		       cd->insn_chunk_bitsize, mach->insn_chunk_bitsize);
	      abort ();
	    }

 	  cd->insn_chunk_bitsize = mach->insn_chunk_bitsize;
	}
      }

  /* Determine which hw elements are used by MACH.  */
  build_hw_table (cd);

  /* Build the ifield table.  */
  build_ifield_table (cd);

  /* Determine which operands are used by MACH/ISA.  */
  build_operand_table (cd);

  /* Build the instruction table.  */
  build_insn_table (cd);
}

/* Initialize a cpu table and return a descriptor.
   It's much like opening a file, and must be the first function called.
   The arguments are a set of (type/value) pairs, terminated with
   CGEN_CPU_OPEN_END.

   Currently supported values:
   CGEN_CPU_OPEN_ISAS:    bitmap of values in enum isa_attr
   CGEN_CPU_OPEN_MACHS:   bitmap of values in enum mach_attr
   CGEN_CPU_OPEN_BFDMACH: specify 1 mach using bfd name
   CGEN_CPU_OPEN_ENDIAN:  specify endian choice
   CGEN_CPU_OPEN_END:     terminates arguments

   ??? Simultaneous multiple isas might not make sense, but it's not (yet)
   precluded.  */

CGEN_CPU_DESC
riscv_cgen_cpu_open (enum cgen_cpu_open_arg arg_type, ...)
{
  CGEN_CPU_TABLE *cd = (CGEN_CPU_TABLE *) xmalloc (sizeof (CGEN_CPU_TABLE));
  static int init_p;
  CGEN_BITSET *isas = 0;  /* 0 = "unspecified" */
  unsigned int machs = 0; /* 0 = "unspecified" */
  enum cgen_endian endian = CGEN_ENDIAN_UNKNOWN;
  va_list ap;

  if (! init_p)
    {
      init_tables ();
      init_p = 1;
    }

  memset (cd, 0, sizeof (*cd));

  va_start (ap, arg_type);
  while (arg_type != CGEN_CPU_OPEN_END)
    {
      switch (arg_type)
	{
	case CGEN_CPU_OPEN_ISAS :
	  isas = va_arg (ap, CGEN_BITSET *);
	  break;
	case CGEN_CPU_OPEN_MACHS :
	  machs = va_arg (ap, unsigned int);
	  break;
	case CGEN_CPU_OPEN_BFDMACH :
	  {
	    const char *name = va_arg (ap, const char *);
	    const CGEN_MACH *mach =
	      lookup_mach_via_bfd_name (riscv_cgen_mach_table, name);

	    if (mach != NULL)
	      machs |= 1 << mach->num;
	    break;
	  }
	case CGEN_CPU_OPEN_ENDIAN :
	  endian = va_arg (ap, enum cgen_endian);
	  break;
	default :
	  fprintf (stderr, "riscv_cgen_cpu_open: unsupported argument `%d'\n",
		   arg_type);
	  abort (); /* ??? return NULL? */
	}
      arg_type = va_arg (ap, enum cgen_cpu_open_arg);
    }
  va_end (ap);

  /* Mach unspecified means "all".  */
  if (machs == 0)
    machs = (1 << MAX_MACHS) - 1;
  /* Base mach is always selected.  */
  machs |= 1;
  if (endian == CGEN_ENDIAN_UNKNOWN)
    {
      /* ??? If target has only one, could have a default.  */
      fprintf (stderr, "riscv_cgen_cpu_open: no endianness specified\n");
      abort ();
    }

  cd->isas = cgen_bitset_copy (isas);
  cd->machs = machs;
  cd->endian = endian;
  /* FIXME: for the sparc case we can determine insn-endianness statically.
     The worry here is where both data and insn endian can be independently
     chosen, in which case this function will need another argument.
     Actually, will want to allow for more arguments in the future anyway.  */
  cd->insn_endian = endian;

  /* Table (re)builder.  */
  cd->rebuild_tables = riscv_cgen_rebuild_tables;
  riscv_cgen_rebuild_tables (cd);

  /* Default to not allowing signed overflow.  */
  cd->signed_overflow_ok_p = 0;

  return (CGEN_CPU_DESC) cd;
}

/* Cover fn to riscv_cgen_cpu_open to handle the simple case of 1 isa, 1 mach.
   MACH_NAME is the bfd name of the mach.  */

CGEN_CPU_DESC
riscv_cgen_cpu_open_1 (const char *mach_name, enum cgen_endian endian)
{
  return riscv_cgen_cpu_open (CGEN_CPU_OPEN_BFDMACH, mach_name,
			       CGEN_CPU_OPEN_ENDIAN, endian,
			       CGEN_CPU_OPEN_END);
}

/* Close a cpu table.
   ??? This can live in a machine independent file, but there's currently
   no place to put this file (there's no libcgen).  libopcodes is the wrong
   place as some simulator ports use this but they don't use libopcodes.  */

void
riscv_cgen_cpu_close (CGEN_CPU_DESC cd)
{
  unsigned int i;
  const CGEN_INSN *insns;

  if (cd->macro_insn_table.init_entries)
    {
      insns = cd->macro_insn_table.init_entries;
      for (i = 0; i < cd->macro_insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX ((insns)))
	  regfree (CGEN_INSN_RX (insns));
    }

  if (cd->insn_table.init_entries)
    {
      insns = cd->insn_table.init_entries;
      for (i = 0; i < cd->insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX (insns))
	  regfree (CGEN_INSN_RX (insns));
    }

  if (cd->macro_insn_table.init_entries)
    free ((CGEN_INSN *) cd->macro_insn_table.init_entries);

  if (cd->insn_table.init_entries)
    free ((CGEN_INSN *) cd->insn_table.init_entries);

  if (cd->hw_table.entries)
    free ((CGEN_HW_ENTRY *) cd->hw_table.entries);

  if (cd->operand_table.entries)
    free ((CGEN_HW_ENTRY *) cd->operand_table.entries);

  free (cd);
}

