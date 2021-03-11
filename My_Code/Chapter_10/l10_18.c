#include <time.h>

int clock_nanosleep (clockid_t clock_id, int flags, 
                const struct timespec *reqtp, struct timespec *remtp);

        // 返回值：若休眠要求的时间，返回0； 若出错，返回错误码