#include <sys/resource.h>

int setpriority (int which, id_t who, int value);

        // 返回值：若成功，返回0；若出错，返回-1