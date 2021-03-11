#include <pthread.h>

int pthread_barrier_init (pthread_barrier_t *restrict barrier, 
                const pthread_barrier_t *restrict attr, 
                unsigned int count);

int pthread_barrier_destroy (pthread_barrier_t *barrier);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号