ucontext_t *uc_link;        /* pointer to context resumed when */
                            /* this context returns */
sigset_t uc_sigmask;        /* signals blocked when this context */
                            /* is active */
stack_t us_stack;           /* stack used by this context */
mcontext_t uc_mcontext;     /* machine-specific representation of */
                            /* saved context */