#include <sys/resource.h>

int getrlimit (int resource, struct rlimit *rlptr);

int setrlimit (int resource, const struct rlimit *rlptr);

        // 两个函数的返回值：若成功，返回0；若出错，返回非0