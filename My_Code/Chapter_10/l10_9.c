struct sigaction {

    void (*sa_handler) (int);       /* addr of signal handler */
                                    /* or SIG_IGN, or SIG_DFL */
    sigset_t sa_mask;               /* additional signals to block */
    int sa_flags;                   /* signal options, Figure 10.16 */

    /* alternative handler */
    void (*sa_sigaction) (int, siginfo_t *, void *);

};