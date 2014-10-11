#inclide <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "stack_3_type.h"

#define SIZE_OF_STACK 5

void init_stack(Stack *st){

    assert(stack_ok(&st));
    st->szStack = SIZE_OF_STACK;
    st->top = 0;
    st->data = (int* )calloc(SIZE_OF_STACK, sizeof(int));
    assert(stack_ok(&st));

}

int push(Stack *st, int value){

    assert(&st);
    st->data[st->top++] = value;
    return 0;

}

int pop(Stack* st){

    assert(stack_ok(&st));
    return st->data[--st->top];

}

int stack_ok(const Stack* st){
    return  (st && st->data && (st->top >= 0) && (st->top < st->szStack));
}

void stack_distr(Stack *st){
    st = NULL;
}
