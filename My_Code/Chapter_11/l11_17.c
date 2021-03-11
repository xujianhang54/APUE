#include <pthread.h>

int pthread_cond_wait (pthread_cond_t *restrict cond, 
            pthread_mutex_t *restrict mutex);

int pthread_cond_timedwait (pthread_cond_t *restrict cond,
            pthread_mutex_t *restrict mutex, 
            const struct timespec *restrict tsptr);

        // 函数的返回值：若成功，返回0；否则，返回错误编号