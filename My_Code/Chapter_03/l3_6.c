#include <unistd.h>

ssize_t write (int fd, const void * buf, size_t nbytes);

// 返回值：若成功，返回已写的字节数；若出错，返回-1