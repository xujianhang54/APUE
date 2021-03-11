#include <aio.h>

int lio_listio (int mode, struct aiocb *restrict const list [], 
                    int nent, struct sigevent *restrict sigev);

        // 返回值：若成功，返回0；若出错，返回-1