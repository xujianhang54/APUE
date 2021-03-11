#include <pthread.h>

int pthread_spin_lock (pthread_spinlock_t *lock);

int pthread_spin_trylock (pthread_spinlock_t *lock);

int pthread_spin_unlock (pthread_spinlock_t *lock);

        // 所有函数的返回值：若成功，返回0；否则，返回错误编号