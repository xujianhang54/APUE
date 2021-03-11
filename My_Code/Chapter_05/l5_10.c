#include <stdio.h>

char *fgets (char *restrict buf, int n, FILE *restrict fp);

char *gets (char *buf);

        // 两个函数的返回值：若成功，返回buf；
        // 若已到达文件尾端或出错，返回NULL