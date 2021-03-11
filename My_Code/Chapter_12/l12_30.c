#include <pthread.h>

int pthread_atfork (void (*prepare) (void), void (*parent) (void), 
                        void (*child) (void));

        // 返回值：若成功，返回0；否则，返回错误编号