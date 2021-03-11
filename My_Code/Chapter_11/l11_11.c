#include <pthread.h>
#include <time.h>

int pthread_mutex_timedlock (pthread_mutex_t *restrict mutex, 
            const struct timespec *restrict tsptr);

        
        // 返回值：若成功，返回0；否则，返回错误编号