#include <pthread.h>

int pthread_rwlock_rdlock (pthread_rwlock_t *rwlock);

int pthread_rwlock_wrlock (pthread_rwlock_t *rwlock);

int pthread_rwlock_unlock (pthread_rwlock_t *rwlock);

        // 所有函数的返回值：若成功，返回0；否则，返回错误编号