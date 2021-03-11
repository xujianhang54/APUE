#include <pthread.h>

int pthread_attr_getstack (const pthread_attr_t *restrict attr, 
            void **restrict stackaddr, 
            size_t *restrict stacksize);

int pthread_attr_setstack (pthread_attr_t *attr, 
            void *stackaddr, size_t stacksize);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号