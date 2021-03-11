#include <signal.h>

int sigemptyset (sigset_t *set);

int sigfillset (sigset_t *set);

int sigaddset (sigset_t *set, int signo);

int sigdelset (sigset_t *set, int signo);

        // 4个函数返回值：若成功，返回0；若出错，返回-1‘

int sigismember (const sigset_t *set, int signo);

        // 返回值：若真，返回1；若假，返回0