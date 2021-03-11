#include <pthread.h>

int pthread_condattr_getclock (const pthread_condattr_t *restrict attr, 
                clockid_t *restrict clock_id);

int pthread_condattr_setclock (pthread_condattr_t *attr, clockid_t clock_id);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号