#include <fcntl.h>

int fcntl (int fd, int cmd, ... /* int argc */)

            // 返回值：若成功，则依赖于cmd；若出错，返回-1