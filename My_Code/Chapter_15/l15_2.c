#include <stdio.h>

FILE *popen (const char *cmdstring, const char *type);

        // 返回值：若成功，返回文件指针；若出错，返回NULL

int pclose (FILE *fp);

        // 返回值：若成功，返回cmdstring的终止状态；若出错，返回-1