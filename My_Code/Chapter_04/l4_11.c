#include <stdio.h>

int rename (const char *pathname, const char *newname);

int renameat (int oldfd, const char *oldname, int newfd, const char *newname);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1