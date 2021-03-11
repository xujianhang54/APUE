#include <sys/stat.h>

int chmod (const char *pathname, mode_t mode);

int fchmod (int fd, mode_t mode);

int fchmodat (int fd, const char *pathname, mode_t mode, int flag);

        // 3个函数返回值：若成功，返回0；若出错，返回-1