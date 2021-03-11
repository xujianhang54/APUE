#include <sys/time.h>

int clock_getres (clockid_t clock_id, struct timespec *tsp);

        // 返回值：若成功，返回0；若出错，返回-1