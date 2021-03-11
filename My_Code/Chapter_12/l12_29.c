#include <signal.h>

int pthread_kill (pthread_t thread, int signo);

        // 返回值：若成功，返回0；否则，返回错误编号