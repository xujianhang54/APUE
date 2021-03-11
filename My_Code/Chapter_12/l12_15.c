#include <pthread.h>

int pthread_barrierattr_init (pthread_barrierattr_t *attr);

int pthread_barrierattr_destroy (pthread_barrierattr_t *attr);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号