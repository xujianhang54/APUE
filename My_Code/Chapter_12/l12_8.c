#include <pthread.h>

int pthread_mutexattr_getrobust (const pthread_mutexattr_t *restrict attr, 
                    int *restrict robust);


int pthread_mutexattr_setrobust (pthread_mutexattr_t *attr, int robust);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号