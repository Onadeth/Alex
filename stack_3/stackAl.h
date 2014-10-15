#ifndef STACK_3_TYPE_H_INCLUDED
#define STACK_3_TYPE_H_INCLUDED

#define SIZE_OF_STACK 5

typedef struct{
        int* data;
        int szStack;
        int top;
    } Stack;

Stack* stack_ctor(void);

int push(Stack* st, int value);

int pop(Stack* st);

int stack_ok(const Stack* st);

void stack_distr(Stack* st);

int is_full(Stack st);

int is_empty(Stack st);

#endif // STACK_3_TYPE_H_INCLUDED
