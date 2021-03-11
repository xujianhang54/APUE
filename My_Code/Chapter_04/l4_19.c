#include <unistd.h>

int chdir (const char *pathname);

int chdir (int fd);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1