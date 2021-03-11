#include <pthread.h>
#include <time.h>

int pthread_rwlock_timedrdlock (pthread_rwlock_t *restrict rwlock, 
                const struct timespec *restrict tsptr);

int pthread_rwlock_timedwrlock (pthread_rwlock_t *restrict rwlock, 
                const struct timespec *restrict tsptr);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号