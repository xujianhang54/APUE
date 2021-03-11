#include <stdio.h>

FILE *open_memstream (char **bufp, size_t *sizep);

#include <wchar.h>

FILE *open_wmemstream (wchar_t **bufp, size_t *sizep);

        // 两个函数的返回值：若成功，返回流指针；若出错，返回NULL