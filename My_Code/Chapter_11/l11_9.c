#include <pthread.h>

int pthread_mutex_init (pthread_mutex_t *restrict mutex, 
            const pthread_mutexattr_t *restrict attr);

int pthread_mutex_destroy (pthread_mutex_t *mutex);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号