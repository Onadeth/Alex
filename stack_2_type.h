#ifndef STACK_TYPE_H_INCLUDED
#define STACK_TYPE_H_INCLUDED

typedef struct {
        int* data;
        int sizeSt;
        int top;
    } Stack ;

Stack newStack()

int push(int data, Stack* st);

int pop(Stack* st);

#endif // STACK_TYPE_H_INCLUDED
