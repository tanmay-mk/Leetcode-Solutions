#include <semaphore.h>

typedef struct {
    int n;
    sem_t fooSem, barSem; 
} FooBar;

FooBar* fooBarCreate(int n) {
    FooBar* obj = (FooBar*) malloc(sizeof(FooBar));
    sem_init(&obj->fooSem, 0, 1);
    sem_init(&obj->barSem, 0, 0);
    obj->n = n;
    return obj;
}

void foo(FooBar* obj) {
    
    for (int i = 0; i < obj->n; i++) {
        sem_wait(&obj->fooSem);
        // printFoo() outputs "foo". Do not change or remove this line.
        printFoo();
        sem_post(&obj->barSem);
    }
}

void bar(FooBar* obj) {
    
    for (int i = 0; i < obj->n; i++) {
        sem_wait(&obj->barSem);
        // printBar() outputs "bar". Do not change or remove this line.
        printBar();
        sem_post(&obj->fooSem);
    }
}

void fooBarFree(FooBar* obj) {
    sem_destroy(&obj->fooSem);
    sem_destroy(&obj->barSem);
    free(obj);
}