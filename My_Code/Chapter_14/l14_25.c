#include <sys/mman.h>

int munmap (void *addr, size_t len);

        // 返回值：若成功，返回0；若出错，返回-1