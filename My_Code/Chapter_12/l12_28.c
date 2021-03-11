#include <signal.h>

int sigwait (const sigset_t *restrict set, int *restrict signop);

        // 返回值：若成功，返回0；否则，返回错误编号