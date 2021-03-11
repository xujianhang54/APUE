#include <unistd.h>

int truncate (const char *pathname, off_t length);

int ftruncate (int fd, off_t length);

            // 两个函数的返回值：若成功，返回0；若出错，返回-1