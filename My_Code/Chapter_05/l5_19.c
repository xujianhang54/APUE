#include <stdarg.h>
#include <stdio.h>

int vscanf (const char *restrict format, va_list arg);

int vfscanf (FILE *restrict fp, const char *restrict format, va_list arg);

int vsscanf (const char *restrict buf, const char *restrict format, va_list arg);

        // 3个函数返回值：指定的输入项目数；若输入出错或在任一转换前文件结束，返回EOF