#include <sys/select.h>

int select (int maxfd1, fd_set *restrict readfds, 
                fd_set *restrict writefds, fd_set *restrict exceptfds, 
                struct timeval *restrict tvptr);

        // 返回值：准备就绪的描述符数目；若超时，返回0；若出错，返回-1