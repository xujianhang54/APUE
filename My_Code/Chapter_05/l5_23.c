#include <stdio.h>

FILE *fmemopen (void *restrict buf, size_t size, const char *restrict type);

        // 返回值：若成功，返回流指针；若错误，返回NULL