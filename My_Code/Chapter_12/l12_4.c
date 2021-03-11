#include <pthread.h>

int pthread_attr_getstacksize (const pthread_attr_t *restrict attr, 
            size_t *restrict stacksize);

int pthread_attr_setstacksize (pthread_attr_t *attr, size_t stacksize);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号