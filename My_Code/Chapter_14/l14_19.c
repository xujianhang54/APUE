#include <sys/uio.h>

ssize_t readv (int fd, const struct iovec *iov, int iovcnt);

ssize_t writev (int fd, const struct iovec *iov, int iovcnt);

        // 两个函数的返回值：已读或已写的字节数；若出错，返回-1