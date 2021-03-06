/* Operating system specific defines to be used when targeting GCC for
   Interix version 3.
   Copyright (C) 2001 Free Software Foundation, Inc.
   Contributed by Douglas B. Rupp (rupp@gnat.com)

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* Interix 3.x has a single rooted file system and properly named
   libraries, so LIB_SPEC can be simplified */

#undef LIB_SPEC
#define LIB_SPEC "\
 %{!shared:%{!dynamic:-lc -lpsxdll \
 }} \
 %{!G:%{!dynamic:-lc -lpsxdll \
 }} \
 %{dynamic:-lc -lpsxdll \
 } \
 %{v}"

