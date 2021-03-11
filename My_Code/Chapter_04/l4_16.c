#include <sys/stat.h>

int mkdir (const char *pathname, mode_t mode);

int mkdirat (int fd, const char *pathname, mode_t mode);

        // 两个函数返回值：若成功，返回0；若出错，返回-1