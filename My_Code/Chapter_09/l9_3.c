#include <unistd.h>

int setpgid (pid_t pid, pid_t pgid);

        // 返回值：若成功，返回0；若出错，返回-1