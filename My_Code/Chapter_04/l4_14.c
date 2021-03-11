#include <sys/stat.h>

int futimens (int fd, const struct timespec times [2]);

int utimensat (int fd, const char *path, const struct timespec times [2], int flag);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1