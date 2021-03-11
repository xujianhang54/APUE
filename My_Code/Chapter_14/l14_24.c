#include <sys/mman.h>

int msync (void *addr, size_t len, int flags);

        // 返回值：若成功，返回0；若出错，返回-1