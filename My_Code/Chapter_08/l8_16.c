#include <sys/times.h>

clock_t times (struct tms *buf);

        // 返回值：若成功，返回流逝的墙上时钟时间（以时钟滴答为单位）
        // 若出错，返回-1