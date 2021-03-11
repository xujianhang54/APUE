#include <signal.h>

int sigprocmask (int how, const sigset_t *restrict set, sigset_t *restrict oset);

        // 返回值：若成功，返回0；若出错，返回-1