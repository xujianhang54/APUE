#include <stdio.h>

int fgetpos (FILE *restrict fp, fpos_t *restrict pos);

int fsetpos (FILE *fp, const fpos_t *pos);

        // 两个函数的返回值：若成功，返回0；若出错，返回非0