#include <poll.h>

int poll (struct pollfd fdarray [], nfds_t nfds, int timeout);

        // 返回值：准备就绪的描述符数目；若超时，返回0；若出错，返回-1