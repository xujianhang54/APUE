#include <unistd.h>

int setreuid (uid_t ruid, uid_t euid);

int setregid (gid_t rgid, gid_t egid);

        // 两个函数返回值：若成功，返回0；若出错，返回-1