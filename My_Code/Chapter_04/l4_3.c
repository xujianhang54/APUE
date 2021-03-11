#include <unistd.h>

int access (const char *pathname, int mode);

int faccessat (int fd, const char * pathname, int mode, int flag);

            // 两个函数的返回值：若成功，返回0；若出错，返回-1