#include <signal.h>

int sig2str (int signo, char *str);

int str2sig (const char *str, int *signop);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1