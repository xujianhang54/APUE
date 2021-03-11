#define is_read_lockable (fd, offset, whence, len) \
            (lock_test ((fd), F_RDLCK, (offset), (whence), (len)) == 0)

#define is_write_lockable (fd, offset, whence, len) \
            (lock_test ((fd), F_WRLCK, (offset), (whence), (len)) == 0)