#include <pthread.h>

int pthread_rwlock_init (pthread_rwlock_t *restrict rwlock, 
            const pthread_rwlockattr_t *restrict attr);

int pthread_rwlock_destroy (pthread_rwlock_t *rwlock);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号