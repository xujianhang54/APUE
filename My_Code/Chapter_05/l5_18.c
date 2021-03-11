#include <stdio.h>

int scanf (const char *restrict format, ...);

int fscanf (FILE *restrict fp, const char *restrict format, ...);

int sscanf (const char *restrict buf, const char *restrict format, ...);

        // 3个函数返回值：赋值的输入项数；若输入出错或在任一转换前已到达文件尾端，
        // 返回EOF