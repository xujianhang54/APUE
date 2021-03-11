#include <sys/stat.h>

int stat (const char *restrict pathname, struct stat *restrict buf);

int fstat (int fd, struct stat *buf);

int lstat (const char *restrict pathname, struct stat *restrict buf);

int fstatat (int fd, const char *restrict pathname, struct stat *restrict buf, int flag);

        // 所有4个函数的返回值：若成功，返回0；若出错，返回-1