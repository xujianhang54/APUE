#include <unistd.h>

int seteuid (uid_t uid);

int setegid (gid_t gid);

        // 两个函数返回值：若成功，返回0；若出错，返回-1