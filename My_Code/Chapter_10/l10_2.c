#include <signal.h>

int kill (pid_t pid, int signo);

int raise (int signo);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1