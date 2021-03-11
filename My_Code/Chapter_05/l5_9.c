#include <stdio.h>

int putc (int c, FILE *fp);

int fputc (int c, FILE *fp);

int putchar (int c);

        // 3个函数的返回值：若成功，返回c；
        // 若出错，返回EOF。