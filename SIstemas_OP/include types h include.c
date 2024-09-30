#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "param.h"
#include "stat.h"
#include "spinlock.h"
#include "proc.h"
#include "fs.h"
#include "sleeplock.h"
#include "file.h"
#include "fcntl.h"

#define MAX_SEMAPHORES 64


struct semaphore {
    int value;
    struct spinlock lock;
    struct spinlock *waiting[MAX_SEMAPHORES];
}

struct semaphore semaphores[MAX_SEMAPHORES];
int valores_iniciales_semaphore[MAX_SEMAPHORES];



int 
sem_close (int sem){

}



int 
sem_open (int sem, int value){


if( sem >= MAX_SEMAPHORES || sem < 0){
    pritf("error");
    return 0;
}

if(value <= 0){
    return 0;
}
int ret = 0;

acquire(&(semaphores[sem].lock));

if(semaphores[sem].value == -1){
semaphores[sem].value = value;
valores_iniciales_semaphore[sem] = value;
ret = 1;
}

release(&(semaphores[sem].lock));

returnr ret;
}

int 
sem_up (int sem){

    int value = semaphores[sem].value;
    acquire(&(semaphores[sem].lock));
    if(value>valores_iniciales_semaphore[sem]){
            printf("ERROR, intenta habilitar más procesos que los inicializados por el semaforo\n");
    }
    else if(value>0){
        semaphores[sem].value++;
    }
    else if (value==-1){
        printf("Error semaforo no inicializado\n");
    }
    else if(value==0){
        semaphores[sem].value++;
    wakeup(&semaphores[sem]);
    }
    else{
        printf("ERROR Value no esperado\n")    }
release(&(semaphores[sem].lock));
return 1;

}

int 
sem_down (int sem){
    int value = semaphores[sem].value;
    acquire(&(semaphores[sem].lock));
    if(value>0){
        semaphores[sem].value--;
        
    }
    else if(value < 0){
        printf("error");
    }
    else if(value ==0){
        int *sem
        sleep(&semaphores[sem], &(semaphores[sem].lock));
    }
    release(&(semaphores[sem].lock));

    return 1;
}
