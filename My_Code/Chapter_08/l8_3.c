#include <sys/wait.h>

pid_t wait (int *statloc);

pid_t waitpid (pid_t pid, int *statloc, int options);

        // 两个函数的返回值：若成功，返回进程ID；
        // 若出错，返回0（见后面的说明）或-1