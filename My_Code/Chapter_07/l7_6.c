#include <setjump.h>

int setjmp (jmp_buf env);

        // 返回值：若直接调用，返回0；
        // 若从longjmp返回，则为非0

void longjmp (jmp_buf env, int val);