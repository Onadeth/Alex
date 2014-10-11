#ifndef STACK_3_TYPE_H_INCLUDED
#define STACK_3_TYPE_H_INCLUDED

typedef struct{
        int* dataSt;
        int szStack;
        int top;
    } Stack;

void init_stack(Stack *st);

int push(Stack *st, int value);

int pop(Stack* st);

int isFull(Stack st);

int isEmpty(Stack st);

#endif // STACK_3_TYPE_H_INCLUDED
