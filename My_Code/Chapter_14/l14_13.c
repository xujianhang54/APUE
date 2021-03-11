#include <aio.h>

int aio_fsync (int op, struct aiocb *aiocb);

        // 返回值：若成功，返回0；错出错，返回-1