#include <sys/types.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>

pid_t wait3 (int *statloc, int options, struct rusage *rusage);

pid_t wait4 (pid_t pid, int *statloc, int options, struct rusage *rusage);

        // 两个函数返回值：若成功，返回进程ID；若出错，返回-1