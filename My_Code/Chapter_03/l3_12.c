#include <unistd.h>         // System V

#include <sys/ioctl.h>      // BSD and Linux

int ioctl (int fd, int request, ...);

            // 返回值：若出错，返回-1；若成功，返回其他值