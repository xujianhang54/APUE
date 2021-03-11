#include <pthread.h>

pthread_once_t initflag = PTHREAD_ONCE_INIT;

int pthread_once (pthread_once_t *initflag, void (*initfn) (void));

        // 返回值：若成功，返回0；否则，返回错误编号