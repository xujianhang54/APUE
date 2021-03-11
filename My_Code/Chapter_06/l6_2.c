#include <pwd.h>

struct passwd *getpwent (void);

        // 返回值：若成功，返回指针；若出错或到达文件尾端，返回NULL

void setpwent (void);

void endpwent (void);