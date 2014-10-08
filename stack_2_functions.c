#include <stdlib.h>
#include <stdio.h>

#define SIZE_OF_STACK 3

#include "stack_type.h"
Stack newStack(int size){
    Stack p;
    p.top = 0;
    p.sizeSt = size;
    p.data = (int *)calloc(size,sizeof(int));
    return p;
}

void push(int data, Stack* st){

    if ( isFull(st) ){
        printf("stack is overflow");
    }
    else{
        (st->data)[(++st->top)] = data;
    }
}

int pop(Stack* st){

    if( isEmpty(st) ){
        printf("stack is empty");
    }
    else{
        return( (st->data)[(--st->top)] );
    }
}

int isEmpty(Stack st){

    return ((st.top) == 0);
}

int isFull(Stack st){
    return((st.top++) == (--st.sizeSt));
}
