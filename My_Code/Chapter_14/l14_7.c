#include <sys/select.h>

int pselect (int maxfdp1, fd_set *restrict readfds, 
        fd_set *restrict writefds, fd_set *restrict exceptfds, 
        const struct timespec *restrict tsptr, 
        const sigset_t *restrict sigmask);

        // 返回值：准备就绪的描述符数目：若超时，返回0；若出错，返回-1