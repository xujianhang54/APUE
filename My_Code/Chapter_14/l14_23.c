#include <sys/mman.h>

int mprotect (void *addr, size_t len, int prot);

        // 返回值：若成功，返回0；若出错，返回-1