#include <stdlib.h>
#include <stdio.h>

#define SIZE_OF_STACK 3

#include "stack_2_type.h"

Stack newStack(int size){
    Stack p;
    p.top = 0;
    p.sizeSt = size;
    p.data = (int *)calloc(size,sizeof(int));
    return p;
}

int push(int data, Stack* st){



        (st->data)[(++st->top)] = data;

	return 0;
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
