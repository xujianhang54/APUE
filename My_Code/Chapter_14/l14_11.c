struct sigevent {

    int sigev_notify;                               /* notify type */
    int sigev_signo;                                /* signal number */
    union sigval sigev_value;                       /* notify argument */
    void (*sigev_notify_function) (union sigval);   /* notify function */
    pthread_attr_t *sigev_notify_attributes;        /* notify attrs */

};