#include <signal.h>

int sigqueue (pid_t pid, int signo, const union sigval value);

        // 返回值：若成功，返回0；若出错返回-1