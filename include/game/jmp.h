#ifndef _GAME_JMP_H
#define _GAME_JMP_H

#include "dolphin.h"

typedef struct JMPBUF {
    u32 lr;
    u32 cr;
    u32 sp;
    u32 r2;
    u32 pad;
    u32 regs[19];
    double flt_regs[19];
} JMPBUF;

s32 gcsetjmp(JMPBUF *jump);
s32 gclongjmp(JMPBUF *jump, s32 status);

#endif
