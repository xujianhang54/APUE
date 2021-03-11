#include <signal.h>

int sigpending (sigset_t *set);

        // 返回值：若成功，返回0；若出错，返回-1