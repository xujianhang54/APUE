#include <fcntl.h>

int fcntl (int fd, int cmd, ... /* struct flock *flockptr */ );

        // 返回值：若成功，依赖于cmd（见下），否则，返回-1