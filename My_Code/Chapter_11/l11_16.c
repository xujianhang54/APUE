#include <pthread.h>

int pthread_cond_init (pthread_cond_t *restrict cond, 
            const pthread_condattr_t *restrict attr);

int pthread_cond_destroy (pthread_cond_t *cond);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号