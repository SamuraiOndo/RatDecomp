#ifndef _SYS_Z_H_
#define _SYS_Z_H_
#include "Types_Z.h"

class Sys_Z {
public:
    static void* MemCpyFrom(void* o_Dest, void* i_Src, const U32 i_Size);
    static void GetAbsoluteFromPath(const Char* i_Path, Char* o_AbsPath, Char* i_Unk);
};

#endif
