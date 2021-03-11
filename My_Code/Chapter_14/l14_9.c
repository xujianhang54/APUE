struct pollfd {

    int fd;         /* file descriptor to check, or < 0 to ignore */
    short events;   /* events of interest on fd */
    short revents;  /* enents that occured on fd */

};