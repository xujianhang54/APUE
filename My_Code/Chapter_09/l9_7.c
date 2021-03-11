#include <termios.h>

pid_t tcgetsid (int fd);

        // 返回值：若成功，返回会话首进程的进程组ID，若出错，返回-1