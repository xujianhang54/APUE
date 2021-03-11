#include <syslog.h>

void openlog (const char *ident, int option, int facility);

void syslog (int priority, const char *format, ...);

void closelog (void);

int setlogmask (int maskpri);

        // 返回值：前日志记录优先级屏蔽字值