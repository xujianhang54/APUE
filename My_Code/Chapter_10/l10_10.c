struct siginfo {

    int si_signo;           /* signal number */
    int si_errno;           /* if nozero, errno value from <errno.h> */
    int si_code;            /* additional info (depends on signal) */
    pid_t si_pid;           /* sending process ID */
    uid_t si_uid;           /* sending process real user ID */
    void *si_addr;          /* address that caused the fault */
    int si_status;          /* exit value or signal number */
    union sigval si_value;  /* application-specific value */

    /* possibly other fields also */

};