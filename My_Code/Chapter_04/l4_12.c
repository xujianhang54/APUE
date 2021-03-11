#include <unistd.h>

int symlink (const char *actualpath, const char *sympath);

int symlink (const char *actualpath, int fd, const char *symlink);

            // 两个函数的返回值：若成功，返回0；若出错，返回-1