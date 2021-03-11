#include <pthread.h>

int pthread_barrier_wait (pthread_barrier_t *barrier);

        // 返回值：若成功，返回0或者PTHREAD_BARRIER_SERIAL_THREAD；否则，返回错误编号