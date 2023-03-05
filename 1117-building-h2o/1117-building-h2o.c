#include <pthread.h>
#include <semaphore.h>

typedef struct {
    // User defined data may be declared here.
    sem_t sem1, sem2;
    
    int count;
} H2O;

H2O* h2oCreate() {
    H2O* obj = (H2O*) malloc(sizeof(H2O));
    
    // Initialize user defined data here.
    sem_init(&obj->sem1, 0, 1); 
    sem_init(&obj->sem2, 0, 0);
    obj->count = 0;
    return obj;
}

void hydrogen(H2O* obj) {

    sem_wait(&obj->sem1);
    releaseHydrogen();
    obj->count++;
    if(obj->count % 2 == 0)
    {
        obj->count = 0; 
        sem_post(&obj->sem2);
    }
    else
    {
        sem_post(&obj->sem1);
    }
}

void oxygen(H2O* obj) {
    
    sem_wait(&obj->sem2);
    releaseOxygen();
    sem_post(&obj->sem1); 

}

void h2oFree(H2O* obj) {
    // User defined data may be cleaned up here.
    sem_destroy(&obj->sem1);
    sem_destroy(&obj->sem2);
    free(obj);
}
//HHO