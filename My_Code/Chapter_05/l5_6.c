#include <stdio.h>

int getc (FILE *fp);

int fgetc (FILE *fp);

int getchar (void);

        // 3个函数的返回值：若成功，返回下一个字符；若已到达
        // 文件尾端或出错，返回EOF