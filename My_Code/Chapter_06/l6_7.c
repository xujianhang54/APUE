#include <unistd.h>

int getgroups (int gidsetsize, gid_t grouplist []);

        // 返回值：若成功，返回附属组ID数量；若出错，返回-1

#include <grp.h>        // on Linux
#include <unistd.h>     // on FreeBSD, Mac OS X, and Solaris
int setgroups (int ngroups, const gid_t grouplist []);
#include <grp.h>        // on Linux and Solaris
#include <unistd.h>     // on FreeBSD and Mac OS X
int initgroups (const char *username, gid_t basegid);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1