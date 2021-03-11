#include <pthread.h>

int pthread_barrierattr_getpshared (const pthread_barrierattr_t *restrict attr, 
                    int *restrict pshared);

int pthread_barrierattr_setpshared (pthread_barrierattr_t *attr, int pshared);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号