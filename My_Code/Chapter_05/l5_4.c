#include <stdio.h>

FILE *fopen (const char *restrict pathname, const char *restrict type);

FILE *freopen (const char *restrict pathname, const char *restrict type, FILE *restrict fp);

FILE *fdopen (int fd, const char *type);

        // 3个函数的返回值：若成功，返回文件指针；若出错，返回NULL