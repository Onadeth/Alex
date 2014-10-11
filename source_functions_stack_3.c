#inclide <stdio.h>

#include "stack_3_type.h"

#define SIZE_OF_STACK 5

void init_stack(Stack *st){

    st->szStack = SIZE_OF_STACK;
    st->top = 0;
    st->data = (int* )calloc(SIZE_OF_STACK, sizeof(int));

}


int push(Stack *st, int value){

    st->data[st->top++] = value;
    return 0;

}

int pop(Stack* st){

    return st->data[--st->top];

}

int isFull(Stack st){
    return st.top == (st.szStack - 1);
}

int isEmpty(Stack st){
    return st.top == 0;
}
