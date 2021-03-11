#include <unistd>

int fsync (int fd);

int fdatasync (int fd);

        // 返回值：若成功，返回0；若出错，返回-1

void sync (void);