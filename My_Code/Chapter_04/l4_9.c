#include <unistd.h>

int unlink (const char *pathname);

int unlinkat (int fd, const char *pathname, int flag);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1