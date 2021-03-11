#include <pthread.h>

int pthread_mutexattr_getpshared (const pthread_mutexattr_t *restrict attr, 
                int *restrict pshared);

int pthread_mutexattr_setpshared (pthread_mutexattr_t *attr, 
                int pshared);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号 