#include <stdio.h>

long ftell (FILE *fp);

        // 返回值：若成功，返回当前文件位置指示；若出错，返回-1L

int fseek (FILE *fp, long offset, int whence);

        // 返回值：若成功，返回0；若出错，返回-1

void rewind (FILE *fp);