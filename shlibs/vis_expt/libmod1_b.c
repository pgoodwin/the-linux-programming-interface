/*************************************************************************\
*                  Copyright (C) Michael Kerrisk, 2018.                   *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#include <stdio.h>
#include <unistd.h>

extern void x(void);

void
mod1_b(void)
{
    printf("%s::%s(): about to call x()\n", __FILE__, __func__);
    x();
}
