#ifndef STACK_TYPE_H_INCLUDED
#define STACK_TYPE_H_INCLUDED

typedef struct {
        int* data;
        int sizeSt;
        int top;
    } Stack ;

Stack newStack(int size);

int push(int data, Stack* st);

int pop(Stack* st);

int isEmpty(Stack *st);

int isFull(Stack *st);

#endif // STACK_TYPE_H_INCLUDED
