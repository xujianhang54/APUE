#include <unistd.h>

int chown (const char *pathname, uid_t owner, gid_t group);

int fchown (int fd, uid_t owner, gid_t group);

int fchownat (int fd, const char *pathname, uid_t owner, gid_t group, int flag);

int lchown (const char *pathname, uid_t owner, gid_t group);

        // 4个函数的返回值：若成功，返回0；若出错，返回-1