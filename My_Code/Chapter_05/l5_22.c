#include <stdlib.h>

char *mkdtemp (char *template);

        // 返回值：若成功，返回指向目录名的指针；若出错，返回NULL

int mkstemp (char *template);

        // 返回值：若成功，返回文件描述符；若出错，返回-1