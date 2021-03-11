#include <stdlib.h>

int putenv (char *str);

        // 函数返回值：若成功，返回0；若出错，返回非0

int setenv (const char *name, const char *value, int rewrite);

int unsetenv (const char *name);

        // 两个函数的返回值：若成功，返回0；若出错，返回-1