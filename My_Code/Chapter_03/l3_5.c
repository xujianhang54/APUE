#include <unistd.h>

ssize_t read (int fd, void * buf, size_t nbytes);

// 返回值：读到的字节数，若已到文件尾，返回0；若出错，返回-1