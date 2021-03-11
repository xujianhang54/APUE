#include <pthread.h>

int pthread_mutexattr_init (pthread_mutexattr_t *attr);

int pthread_mutexattr_destroy (pthread_mutexattr_t *attr);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号