#include <pthread.h>

int pthread_create (pthread_t *restrict tidp, 
                const pthread_attr_t *restrict attr, 
                void *(*start_rtn) (void *), void * restrict arg);

        // 返回值：若成功，返回0；否则，返回错误编号