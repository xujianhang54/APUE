#include <fcntl.h>

int creat (const char *path, mode_t mode);

// 返回值：若成功，返回为只写打开的文件描述符；若出错，返回-1