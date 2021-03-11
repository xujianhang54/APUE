#include <pthread.h>

void pthread_cleanup_push (void (*rtn) (void *), void *arg);

void pthread_cleanup_pop (int execute);

