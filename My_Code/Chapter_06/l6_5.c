#include <grp.h>

struct group *getgrgid (gid_t gid);

struct group *getgrnam (const char *name);

        // 两个函数返回值：若成功，返回指针；若出错，返回NULL