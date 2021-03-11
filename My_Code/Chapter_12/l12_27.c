#include <signal.h>

int pthread_sigmask (int how, const sigset_t *restrict set, 
                        sigset_t *restrict oset);

        // 返回值：若成功，返回0；否则，返回错误编号