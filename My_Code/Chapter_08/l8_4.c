#include <sys/wait.h>

int waittid (idtype_t idtype, id_t id, siginfo_t *infop, int options);

        // 返回值：若成功，返回0；若出错，返回-1