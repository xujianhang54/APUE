#include <stdio.h>

int ferror (FILE *fp);

int feof (FILE *fp);

        // 这两个函数的返回值：若条件为真，返回非0（真）；
        // 否则，返回0（假）

void clearerr (FILE *fp);