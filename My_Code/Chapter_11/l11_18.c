#include <pthread.h>

int pthread_cond_signal (pthread_cond_t *cond);

int pthread_cond_broadcast (pthread_cond_t *cond);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号