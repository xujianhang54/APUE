#include <unistd.h>

off_t lseek (int fd, off_t pffset, int whence);

// 返回值：若成功，返回新的文件偏移量；若出错，返回-1