#include <stdio.h>

void setbuf (FILE *restrict fp, char * restrict buf);

int setvbuf (FILE *restrict fp, char *restrict buf, int mode, size_t size);

        // 返回值：若成功，返回0；若出错，返回非0