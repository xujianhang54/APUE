#include <fcntl.h>

int open (const char *path, int oflag, ... /* mode_t mode */);

int openat (int fd, const char *path, int oflag, ... /* mode_t mode */);

// 两个函数的返回值：若成功，返回文件描述符；若出错，返回-1