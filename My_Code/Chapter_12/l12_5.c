#include <pthread.h>

int pthread_attr_getguardsize (const pthread_attr_t *restrict attr,
            size_t *restrict guardsize);

int pthread_attr_setguardsize (pthread_attr_t *attr, size_t guardsize);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号