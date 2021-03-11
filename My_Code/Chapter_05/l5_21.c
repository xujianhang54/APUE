#include <stdio.h>

char *tmpnam (char *ptr);

        // 返回值：指向唯一路径名的指针

FILE *tmpfile (void);

        // 返回值：若成功，返回文件指针；若出错，返回NULL