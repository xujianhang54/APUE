void destructor (void *);

pthread_key_t key;
int init_done = 0;

int
threadfunc (void *arg) {

    if (!init_done) {

        init_done = 1;
        err = pthread_key_create (&key, destructor);

    }

    ...

}