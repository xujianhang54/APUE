#include <pwd.h>

struct passwd *getpwuid (uid_t uid);

struct passwd *getpwnam (const char *name);

        // 两个函数返回值：若成功，返回指针；若出错，返回NULL