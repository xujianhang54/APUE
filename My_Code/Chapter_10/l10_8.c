#include <signal.h>

int sigaction (int signo, const struct sigaction *restrict act,
                    struct sigaction *restrict oact);

        // 返回值：若成功，返回0；若出错，返回-1