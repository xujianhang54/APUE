#include <stdlib.h>

void *malloc (size_t size);

void *calloc (size_t nobj, size_t size);

void *realloc (void *ptr, size_t newsize);

        // 3个函数返回值：若成功，返回非空指针；若出错，返回NULL

void free (void *ptr);