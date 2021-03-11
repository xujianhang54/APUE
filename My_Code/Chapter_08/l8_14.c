#include <sys/resource.h>

int getpriority (int which, id_t who);

        // 返回值：若成功，返回 -NZERO ~ NZERO - 1 之间的nice值；若出错，返回-1