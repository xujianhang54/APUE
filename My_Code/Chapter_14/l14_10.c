struct aiocb {

    int aio_fildes;                 /* file descriptor */
    off_t aio_offset;               /* file offset for I/O */
    volatile void *aio_buf;         /* buffer for I/O */
    size_t aio_nbytes;              /* number of bytes to transfer */
    int aio_reqprio;                /* priority */
    struct sigevent aio_sigevent;   /* signal information */
    int aio_lio_opcode;             /* operation for list I/O */

};