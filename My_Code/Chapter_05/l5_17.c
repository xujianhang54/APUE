#include <stdarg.h>
#include <stdio.h>

int vprintf (const char *restrict format, va_list arg);

int vfprintf (FILE *restrict fp, const char *restrict format, va_list arg);

int vdprintf (int fd, const char * restrict format, va_list arg);

        // 所有3个函数返回值：若成功，返回输出字符数；若输出出错，返回负值

int vsprintf (char *restrict buf, const char *restrict format, va_list arg);

        // 函数返回值：若成功，返回存入数组的字符数；若编码出错，返回负值

int vsnprintf (char *restrict buf, size_t n, const char *restrict format, va_list arg);

        // 函数返回值：若缓冲区足够大，返回存入数组的字符数；若编码出错，返回负值