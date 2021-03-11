#include <sys/mman.h>

void *mmap (void *addr, size_t len, int prot, int flag, int fd, off_t off);

        // 返回值：若成功，返回映射区的起始地址；若出错，返回MAP_FAILED