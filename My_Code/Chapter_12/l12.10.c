#include <pthread.h>

int pthread_mutexattr_gettype (const pthread_mutexattr_t *restrict attr, int *restrict type);

int pthread_mutexattr_settype (pthread_mutexattr_t *attr, int type);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号