#include <pthread.h>

int pthread_rwlockattr_init (pthread_rwlockattr_t *attr);

int pthread_rwlockattr_destroy (pthread_rwlockattr_t *attr);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号