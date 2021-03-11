#include <pthread.h>

int pthread_mutex_lock (pthread_mutex_t *mutex);

int pthread_mutex_trylock (pthread_mutex_t *mutex);

int pthread_mutex_unlock (pthread_mutex_t *mutex);

        // 所有函数的返回值：若成功，返回0；否则，返回错误编号