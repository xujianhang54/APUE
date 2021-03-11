#include <setjmp.h>

int sigsetjmp (sigjmp_buf env, int savemask);

        // 返回值：若直接调用，返回0；若从siglongjmp调用返回，则返回非0

void siglongjmp (sigjmp_buf env, int val);