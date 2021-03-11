#include <time.h>

struct tm *gmtime (const time_t *calptr);

struct tm *localtime (const time_t *calptr);

        // 两个函数的返回值：指向分解的tm结构的指针；若出错，返回NULL