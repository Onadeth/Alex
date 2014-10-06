#ifndef STACK_T_H_INCLUDED
#define STACK_T_H_INCLUDED



struct snode {
    int value;
    struct snode* next;
};

typedef struct snode Node;

typedef Node* Stack;

Stack newStack();

void push(int a, Stack* st);

int pop(Stack* st);

int isEmpty(Stack st);

int isFull(Stack st);

Stack newStack();

#endif // STACK_T_H_INCLUDED
