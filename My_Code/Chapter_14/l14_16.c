#include <aio.h>

int aio_suspend (const aiocb *const list [], int nent, 
                    const struct timespec *timeout);

        // 返回值：若成功，返回0；若出错，返回-1