#define read_lock (fd, offset, whence, len) \
            lock_reg ((fd), F_SETLK, F_RDLCK, (offset), (whence), (len))

#define readw_lock (fd, offset, whence, len) \
            lock_reg ((fd), F_SETLKW, F_RDLCK, (Offset), (whence), (len))

#define write_lock (fd, offset, whence, len) \
            lock_reg ((fd), F_SETLK, F_WRLCK, (offset), (whence), (len))

#define writew_lock (fd, offset, whence, len) \
            lock_reg ((fd), F_SETLKW, F_WRLCK, (offset), (whence), (len))

#define un_lock (fd, offset, whence, len) \
            lock_reg ((fd), F_SETLK, F_UNLCK, (Offset), (Whence), (len))