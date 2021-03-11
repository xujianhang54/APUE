#include <unistd.h>

pid_t getpgid (pid_t pid);

        // 返回值：若成功，返回进程组ID；若出错，返回-1