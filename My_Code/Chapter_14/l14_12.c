#include <aio.h>

int aio_read (struct aiocb *aiocb);

int aio_write (struct aiocb *aiocb);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1