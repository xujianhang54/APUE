#include <stdio.h>

off_t ftello (FILE *fp);

        // 返回值：若成功，返回当前文件位置；若出错，返回 (off_t) - 1'
int fseeko (FILE *fp, off_t offset, int whence);
        // 返回值：若成功，返回0；若出错，返回-1