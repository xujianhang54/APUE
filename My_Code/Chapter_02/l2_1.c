#include <unistd.h>

long sysconf (int name);

long pathconf (const char *pathname, int name);

long fpathconf (int fd, int name);

// 所有函数返回值：若成功，返回相应值；若出错，返回-1