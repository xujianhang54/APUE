#include <time.h>

size_t strftime (char *restrict buf, size_t maxsize, 
                const char *restrict format, 
                const struct tm *restrict tmptr);

size_t strftime_l (char *restrict buf, size_t maxsize, 
                const char *restrict format, 
                const struct tm *restrict tmptr, locale_t locale);

        // 两个函数的返回值：若有空间，返回存入数组的字符数；否则，返回0