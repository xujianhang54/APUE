#include <signal.h>

void (*signal (int signo, void (*func) (int))) (int);

        // 返回值：若成功，返回以前的信号处置配置；若出错，返回SIG_ERR