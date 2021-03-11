#include <unistd.h>

ssize_t pread (int fd, void * buf, size_t nbytes, off_t offset);
            // 返回值：读到的字节数，若已到文件尾，返回0；若出错，返回-1

ssize_t pwrite (int fd, const void * buf, size_t nbytes, off_t offset);
            // 返回值：若成功，返回已写的字节数；若出错，返回-1