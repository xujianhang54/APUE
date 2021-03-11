#include <time.h>

int nanosleep (const struct timespec *reqtp, struct timespec *remtp);

        // 返回值：若休眠到要求的时间，返回0；若出错，返回-1