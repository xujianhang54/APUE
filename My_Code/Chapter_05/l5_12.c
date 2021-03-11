#include <stdio.h>

size_t fread (void *restrict ptr, size_t size, size_t nobj, FILE *restrict fp);

size_t fwrite (const void restrict ptr, size_t size, size_t nobj, FILE *restrict fp);

        // 两个函数的返回值：读或写的对象数