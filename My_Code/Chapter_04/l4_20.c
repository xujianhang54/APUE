#include <unistd.h>

char *getcwd (char *buf, size_t size);

        // 返回值：若成功，返回buf；若出错，返回NULL