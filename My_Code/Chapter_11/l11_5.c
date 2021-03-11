#include <pthread.h>

int pthread_join (pthread_t thread, void **rval_ptr);

        // 返回值：若成功，返回0；否则，返回错误编号