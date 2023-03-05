#include <semaphore.h>

typedef struct {
    int n;
    sem_t zero_sem, odd_sem, even_sem; 
} ZeroEvenOdd;

ZeroEvenOdd* zeroEvenOddCreate(int n) {
    ZeroEvenOdd* obj = (ZeroEvenOdd*) malloc(sizeof(ZeroEvenOdd));
    
    sem_init(&obj->zero_sem, 0, 1);
    sem_init(&obj->odd_sem, 0, 0);
    sem_init(&obj->even_sem, 0, 0);
    
    obj->n = n;
    return obj;
}

// You may call global function `void printNumber(int x)`
// to output "x", where x is an integer.

void zero(ZeroEvenOdd* obj) {
    
    for(int i=1; i<=obj->n; i++)
    {
        sem_wait(&obj->zero_sem);
        printNumber(0);
        if ((i & 1) == 0)
        {
            sem_post(&obj->even_sem);
        }
        else
        {
            sem_post(&obj->odd_sem);
        }
    }
}

void even(ZeroEvenOdd* obj) {
    
    for(int i=2; i<=obj->n; i+=2)
    {
        sem_wait(&obj->even_sem);
        printNumber(i);
        sem_post(&obj->zero_sem);
    }
}

void odd(ZeroEvenOdd* obj) {
    
    for(int i=1; i<=obj->n; i+=2)
    {
        sem_wait(&obj->odd_sem);
        printNumber(i);
        sem_post(&obj->zero_sem);
    }
}

void zeroEvenOddFree(ZeroEvenOdd* obj) {
    sem_destroy(&obj->zero_sem);
    sem_destroy(&obj->odd_sem);
    sem_destroy(&obj->even_sem);
    free(obj);
}