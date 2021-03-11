#include <pthread.h>

int pthread_condattr_init (pthread_condattr_t *attr);

int pthread_condattr_destroy (pthread_condattr_t *attr);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号