#include <unistd.h>

pid_t tcgetpgrp (int fd);

        // 返回值：若成功，返回前台进程组ID；若出错，返回-1

int tcsetpgrp (int fd, pid_t pgrpid);

        // 返回值：若成功，返回0；若出错，返回-1