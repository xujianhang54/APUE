struct flock {

    short l_type;       /* F_RDLCK, F_WRLCK, or F_UNLCK */
    short l_whence;     /* SEEK_SET, SEEK_CUR, or SEEK_END */
    off_t l_start;      /* offset in bytes, relative to l_whence */
    off_t l_len;        /* length, in bytes; 0 means lock to EOF */
    pid_t l_pid;        /* returned with F_GETLK */

};