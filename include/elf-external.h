/* ELF support for BFD.
   Copyright (C) 1991 Free Software Foundation, Inc.

   Written by Fred Fish @ Cygnus Support, from information published
   in "UNIX System V Release 4, Programmers Guide: ANSI C and
   Programming Support Tools".

This file is part of BFD, the Binary File Descriptor library.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */


/* This file is part of ELF support for BFD, and contains the portions
   that describe how ELF is represented externally by the BFD library.
   I.E. it describes the in-file representation of ELF.  It requires
   the elf-common.h file which contains the portions that are common to
   both the internal and external representations. */
   
/* ELF Header (32-bit implementations) */

typedef struct {
  unsigned char	e_ident[16];		/* ELF "magic number" */
  unsigned char	e_type[2];		/* Identifies object file type */
  unsigned char	e_machine[2];		/* Specifies required architecture */
  unsigned char	e_version[4];		/* Identifies object file version */
  unsigned char	e_entry[4];		/* Entry point virtual address */
  unsigned char	e_phoff[4];		/* Program header table file offset */
  unsigned char	e_shoff[4];		/* Section header table file offset */
  unsigned char	e_flags[4];		/* Processor-specific flags */
  unsigned char	e_ehsize[2];		/* ELF header size in bytes */
  unsigned char	e_phentsize[2];		/* Program header table entry size */
  unsigned char	e_phnum[2];		/* Program header table entry count */
  unsigned char	e_shentsize[2];		/* Section header table entry size */
  unsigned char	e_shnum[2];		/* Section header table entry count */
  unsigned char	e_shstrndx[2];		/* Section header string table index */
} Elf_External_Ehdr;

/* Program header */

typedef struct {
  unsigned char	p_type[4];		/* Identifies program segment type */
  unsigned char	p_offset[4];		/* Segment file offset */
  unsigned char	p_vaddr[4];		/* Segment virtual address */
  unsigned char	p_paddr[4];		/* Segment physical address */
  unsigned char	p_filesz[4];		/* Segment size in file */
  unsigned char	p_memsz[4];		/* Segment size in memory */
  unsigned char	p_flags[4];		/* Segment flags */
  unsigned char	p_align[4];		/* Segment alignment, file & memory */
} Elf_External_Phdr;

/* Section header */

typedef struct {
  unsigned char	sh_name[4];		/* Section name, index in string tbl */
  unsigned char	sh_type[4];		/* Type of section */
  unsigned char	sh_flags[4];		/* Miscellaneous section attributes */
  unsigned char	sh_addr[4];		/* Section virtual addr at execution */
  unsigned char	sh_offset[4];		/* Section file offset */
  unsigned char	sh_size[4];		/* Size of section in bytes */
  unsigned char	sh_link[4];		/* Index of another section */
  unsigned char	sh_info[4];		/* Additional section information */
  unsigned char	sh_addralign[4];	/* Section alignment */
  unsigned char	sh_entsize[4];		/* Entry size if section holds table */
} Elf_External_Shdr;

/* Symbol table entry */

typedef struct {
  unsigned char	st_name[4];		/* Symbol name, index in string tbl */
  unsigned char	st_value[4];		/* Value of the symbol */
  unsigned char	st_size[4];		/* Associated symbol size */
  unsigned char	st_info[1];		/* Type and binding attributes */
  unsigned char	st_other[1];		/* No defined meaning, 0 */
  unsigned char	st_shndx[2];		/* Associated section index */
} Elf_External_Sym;
