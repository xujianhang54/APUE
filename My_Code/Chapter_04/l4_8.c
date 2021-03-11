#include <unistd.h>

int link (const char *existingpath, const char *newpath);

int linkat (int efd, const char *existingpath, int nfd, const char *newpath, int flag);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1