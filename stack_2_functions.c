#include <stdlib.h>
#include <stdio.h>

typedef struct {
        int* data;
        int size;
        int top;
    } Stack ;

Stack newStack(int size){
    Stack p;
    p->top = 0;
    p->size = size;
    p->data = (int *)calloc(size,sizeof(int));
    return p;
}

int push(int data, Stack* st){

    if ( isFull(st) )
    {
        prinf("stack is overflow");
    }
    else
    {



    }

    }



}

int pop(Stack* st);

int isEmpty(Stack st){

    return ((st->top) == 0);
};

int isFull(Stack st){
    return((st->top)++) == (st->size))
};

