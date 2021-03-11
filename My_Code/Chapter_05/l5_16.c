#include <stdio.h>

int ptintf (const char *restrict format, ...);

int fprintf (FILE *restrict fp, const char *restrict format, ...);

int dprintf (int fd, const char *restrict format, ...);

        // 3个函数返回值：若成功，返回输出字符数；若输出出错，返回负值

int sprintf (char *restrict buf, const char *restrict format, ...);

        // 返回值：若成功，返回存入数组的字符数；若编码出错，返回负值

int snprintf (char *restrict buf, size_t n, const char *restrict format, ...);

        // 返回值：若缓冲区足够大，返回将要存入数组的字符数；若编码出错，返回负值