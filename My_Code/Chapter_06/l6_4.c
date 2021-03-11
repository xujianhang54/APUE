#include <shadow.h>

struct spwd *getspnam (const char *name);

struct spwd *getspent (void);

        // 两个函数返回值：若成功，返回指针；若出错，返回NULL

void setspent (void);

void endspent (void);