#include <unistd.h>

pid_t getsid (pid_t pid);

        // 返回值：若成功，返回会话首进程的进程组ID；若出错，返回-1