#include <pthread.h>

int pthread_condattr_getpshared (const pthread_condattr_t *restrict attr, 
                int *restrict pshared);

int pthread_condattr_setpshared (pthread_condattr_t *restrict attr, 
                int pshared);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号