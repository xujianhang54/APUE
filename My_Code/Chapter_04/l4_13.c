#include <unistd.h>

ssize_t readlink (const char *restrict pathname, char *restrict buf, ssize_t bufsize);

ssize_t readlink (int fd, const char *restrict pathname, char *restrict buf, size_t bufsize);

        // 两个函数的返回值：若成功，返回读取的字节数；若出错，返回-1