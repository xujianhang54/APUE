#include <pthread.h>

void *pthread_getspecific (pthread_key_t key);

        // 返回值：线程特定数据值；若没有值与该键关联，返回NULL

int pthread_setspecific (pthread_key_t key, const void *value);

        // 返回值：若成功，返回0；否则，返回错误编号