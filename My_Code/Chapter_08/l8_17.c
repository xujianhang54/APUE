struct tms {

    clock_t tms_utime;      /* user CPU time */
    clock_t tms_stime;      /* system CPU time */
    clock_t tms_cutime;     /* user CPU time, terminated children */
    clock_t tms_cstime;     /* system CPU time, terminated children */

};