typedef u_short comp_t;     /* 3-bit base 8 exponent; 13-bit fraction */

struct acct {

    char ac_flag;       /* flag (see Figure 8.26) */
    char ac_state;      /* termination status (signal & core flag only) */
                        /* Solaris only */
    uid_t ac_uid;       /* real user ID */
    gid_t ac_gid;       /* real group ID */
    dev_t ac_tty;       /* controlling terminal */
    time_t ac_btime;    /* starting calendar time */
    comp_t ac_utime;    /* user CPU time */
    comp_t ac_stime;    /* system CPU time */
    comp_t ac_etime;    /* elapsed time */
    comp_t mem;         /* average memory usage */
    comp_t ac_io;       /* bytes transferred (by read wand write) */
                        /* "blocks on BSD systems" */
    comp_t ac_rw;       /* blocks read and write */
                        /* (not present on BSD systems) */
    char ac_comm [8];   /* command name: [8] for Solaris,  */
                        /* [10] for Mac OS X, [16] for FreeBSD, and */
                        /* [17] for Linux */

};