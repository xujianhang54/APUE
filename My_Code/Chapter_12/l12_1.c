#include <pthread.h>

int pthread_attr_init (pthread_attr_t *attr);

int pthread_attr_destroy (pthread_attr_t *attr);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号