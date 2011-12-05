/*
Copyright 2008-2011
CEAL Project -- Umut A. Acar and Matthew A. Hammer

File: libceal.h
Author: Matthew Hammer <hammer@mpi-sws.org>

This file is part of the CEAL language implementation (CEAL for short).

CEAL is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your
option) any later version.

CEAL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with CEAL.  If not, see <http://www.gnu.org/licenses/>.
*/


/* CEAL Runtime Interface.
 * 
 * This file gives the interface between the code generated by our
 * compiler and the algorithms & data-structures used by our runtime
 * system.
 *
 * Our compiler reads this header file when compiling a CEAL program
 * into conventional C code.  From the perspective of the compiler,
 * this file abstracts away the layout of various runtime structures
 * and signatures of various runtime functions.  The compiler mentions
 * these identifiers by name (but doesn't otherwise dictate or check
 * how they are defined).  The hope is that this will effectively
 * separate runtime concerns from compilation conerns (as cleanly as
 * possible, given that we are using C here).
 *
 */

/* The runtime structures used by the compiler. */
#include "runtime/trace.h"
#include "runtime/tv_signal.h"

/* Modref implementations
   -- Note that these header files also #include trace.h */
#include "runtime/modref_awar.h"
#include "runtime/modref_zwzr.h"
#include "runtime/modref_owcr.h"
#include "runtime/modref_ring.h"

/* Do performance testing. */
int cealtestperf_main(int argc, char** argv);

