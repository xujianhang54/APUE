#include <stdio.h>

int ftrylockfile (FILE *fp);

        // 返回值：若成功，返回0；若不能获取锁，返回非0数值

void flockfile (FILE *fp);

void funlockfile (FILE *fp);