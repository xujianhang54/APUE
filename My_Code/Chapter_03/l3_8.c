#include <unistd.h>

int dup (int fd);

int dup2 (int fd, int fd2);

            // 两函数的返回值：若成功，返回新的文件描述符；若出错，返回-1 