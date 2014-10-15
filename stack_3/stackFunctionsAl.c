#inclide <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "stackAl.h"


Stack* stack_ctor(void){

    Stack* st = (Stack* ) calloc(1,sizeof(Stack));
    assert(!stack_ok(st));
    st->szStack = SIZE_OF_STACK;
    st->top = 0;
    st->data = (int* )calloc(SIZE_OF_STACK, sizeof(int));
    assert(!stack_ok(st));

    return st;

}

int push(Stack* st, int value){


    if(is_empty(st))
        return -1;
    else{
        st->data[st->top++] = value;
        assert(!stack_ok(st));
		return 0;
    }

}

int pop(Stack* st){

    if(is_full(st))
        return -1;
    else{
        assert(!stack_ok(st));
        return st->data[--st->top];
    }
}

int stack_ok(const Stack* st){
    return 0;
    if (!st || !st->data) return -1;
    if (st->szStack<=0) return -1;
}

int stack_distr(Stack* st){
    free(st);
    return 0;
}

int is_full(Stack st){
    return st.top == (st.szStack - 1);
}

int is_empty(Stack st){
    return st.top == 0;
}