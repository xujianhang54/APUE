#include <pthread.h>

int pthread_spin_init (pthread_spinlock_t *lock, int pshared);

int pthread_spin_destroy (pthread_spinlock_t *lock);

        // 两个函数的返回值：若成功，返回0；否则，返回错误编号