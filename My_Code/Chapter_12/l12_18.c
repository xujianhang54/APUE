#include <stdio.h>

int getchar_unlocked (void);

int getc_unlocked (FILE *fp);

        // 两个函数的返回值：若成功，返回下一个字符；若遇到文件尾或者出错，返回EOF

int putchar_unlocked (int c);

int putc_unlocked (int c, FILE *fp);

        // 两个函数的返回值：若成功，返回c；若出错，返回EOF