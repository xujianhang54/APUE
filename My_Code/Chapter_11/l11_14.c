#include <pthread.h>

int pthread_rwlock_tryrdlock (pthread_rwlock_t *rwlock);

int pthread_rwlock_trywrlock (pthread_rwlock_t *rwlock);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号