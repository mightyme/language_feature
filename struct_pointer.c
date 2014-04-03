#include <stdio.h>

struct worker {
    char * name;
};

struct stuff {
    struct worker *worker;
    int partment;
    int number;
};

int main(int argc, char ** argv)
{
    struct stuff *stuff_1 = malloc(sizeof(struct stuff));
    struct worker worker;
    stuff_1->partment = 10;
    stuff_1->number = 200;
    printf("struct worker size: %d\n", sizeof(struct worker));
    printf("stuff_1 %p, stuff_1::worker: %p \n",
           stuff_1, stuff_1->worker );
    printf("After conversion\n");
    stuff_1->worker = (struct worker *)stuff_1;
    stuff_1->worker->name = NULL;
    //printf("stuff_1 %p, stuff_1::worker: %p, stuff_1::worker::name %p\n",
     //       stuff_1, stuff_1->worker, stuff_1->worker->name);
    printf("stuff_1 %p, stuff_1::worker: %p \n",
           stuff_1, stuff_1->worker );
    stuff_1->worker = (struct worker *)stuff_1;
    printf("stuff_1 %p, stuff_1::worker: %p, stuff_1::worker::name %p\n",
            stuff_1, stuff_1->worker, stuff_1->worker->name);
    printf("partment: %d, number: %d\n", ((struct stuff *)stuff_1->worker)->partment,
            ((struct stuff *)stuff_1->worker)->number);

    printf("######################Test section 2 ######################\n");
    printf("worker: %p, worker.name: %p,(&worker)->name: %p,"
            "&(worker.name): %p\n",
            &worker, worker.name, (&worker)->name,
            &(worker.name));
    stuff_1->worker = &worker;
    printf("stuff_1 %p, stuff_1::worker: %p, stuff_1::worker::name %p\n",
            stuff_1, stuff_1->worker, stuff_1->worker->name);
    return 0;
}
