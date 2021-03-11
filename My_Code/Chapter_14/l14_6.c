#include <sys/select.h>

int FD_ISSET (int fd, fd_set *fdset);

        // 返回值：若fd在描述符集中，返回非0值；否则，返回0

void FD_CLR (int fd, fd_set *fdset);

void FD_SET (int fd, fd_set *fdset);

void FD_ZERO (fd_set *fdset);