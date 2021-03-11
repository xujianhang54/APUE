#include <sys/time.h>

int utimes (const char *pathname, const struct timeval times [2]);

        // 函数返回值：若成功，返回0；若出错，返回-1