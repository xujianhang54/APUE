#include <pthread.h>

int pthread_key_create (pthread_key_t *keyp, void (*destructor) (void *));

        // 返回值：若成功，返回0；否则，返回错误编号