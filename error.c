/*
 * Copyright (C) 1992 Clarendon Hill Software.
 *
 * Permission is granted to any individual or institution to use, copy,
 * or redistribute this software, provided this copyright notice is retained. 
 *
 * This software is provided "as is" without any expressed or implied
 * warranty.  If this software brings on any sort of damage -- physical,
 * monetary, emotional, or brain -- too bad.  You've got no one to blame
 * but yourself. 
 *
 * The software may be modified for your own purposes, but modified versions
 * must retain this notice.
 */

#include "z80.h"

void error(char *string)
{
    fprintf(stderr, "xtrs error: %s\n", string);
}

void fatal(char *string)
{
    fprintf(stderr, "xtrs fatal error: %s\n", string);
    exit(1);
}
