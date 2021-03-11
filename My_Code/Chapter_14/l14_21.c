#include "apue.h"

ssize_t readn (int fd, void *buf, size_t nbytes);

ssize_t written (int fd, void *buf, size_t nbytes);

        // 两个函数的返回值：读、写的字节数；若出错，返回-1