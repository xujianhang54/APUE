#include <time.h>

char *strptime (const char *restrict buf, const char *restrict format, 
        struct tm *restrict tmptr);

        // 返回值：指向上次解析的字符的下一个字符的指针；否则，返回NULL