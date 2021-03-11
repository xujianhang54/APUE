#include <stdio.h>

int fputs (const char *restrict str, FILE *restrict fp);

int puts (const char *str);

        // 两个函数返回值：若成功，返回非复制；若出错，返回EOF