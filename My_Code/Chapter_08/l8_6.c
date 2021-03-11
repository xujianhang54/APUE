#include <unistd.h>

int execl (const char* pathname, const char *arg0, ... /* (char *)0 */ );

int execv (const char *pathname, char *const argv []);

int execle (const char *pathname, const char *arg0, ...
            /* (char *) 0 */, char *const envp []);

int execve (const char *pathname, char *const argv [], char *const envp []);

int execlp (const char *filename, const char *arg0, ... /* (char *) 0 */ );

int execvp (const char *filename, char *const argv []);

int fexecve (int fd, char *const argv [], char *const envp []);

        // 7个函数的返回值：若出错，返回-1；若成功，不返回