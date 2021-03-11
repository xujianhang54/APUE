#include <dirent.h>

DIR *opendir (const char *pathname);

DIR *fdopendir (int fd);

        // 两个函数返回值：若成功，返回指针；若出错，返回NULL

struct dirent *readdir (DIR *dp);

        // 返回值：若成功，返回指针；若在目录尾或出错，返回NULL

void rewinddir (DIR *dp);

void closedir (DIR *dp);

        // 返回值：若成功，返回0；若出错，返回-1

long telldir (DIR *dp);

        // 返回值，与dp关联的目录中的当前位置

void seekdir (DIR *dp, long loc);