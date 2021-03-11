#include <signal.h>

int sigsuspend (const sigset_t *sigmask);

        // 返回值：-1，并将errno设置为EINTR