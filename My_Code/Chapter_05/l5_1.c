#include <stdio.h>

#include <wchar.h>

int fwide (FILE *fp, int mode);

        // 返回值：若流是宽定向的，返回正值；若流是字节定向的，返回负值；
        // 若流是未定向的，返回0