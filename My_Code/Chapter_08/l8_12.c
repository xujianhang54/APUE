#include <unistd.h>

char *getlogin (void);

        // 返回值：若成功，返回指向登录名字符串的指针；若出错，返回NULL