#include <pthread.h>

int pthread_setcancelstate (int state, int *oldstate);

        // 返回值：若成功，返回0；否则，返回错误编号