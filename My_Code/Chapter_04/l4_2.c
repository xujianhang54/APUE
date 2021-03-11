struct stat {

    // file type & mode (permissions)
    mode_t st_mode;

    // i-node number (serial number)
    ino_t st_ino;

    // device number (file system)
    dev_t st_dev;

    // device number for special files
    dev_t st_rdev;

    // number of links
    nlink_t st_nlink;

    // user ID of owner
    uid_t st_uid;

    // group ID of owner
    gid_t st_gid;

    // size in bytes, for regular files
    off_t st_size;

    // time of last access
    struct timespec st_atime;

    // time of last modification
    struct timespec st_mtime;

    // time of last file status change
    struct timespec st_ctime;

    // best I/O block size
    blksize_t st_blksize;

    // number of disk blocks allocated
    blkcnt_t st_blocks;

};