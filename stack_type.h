#ifndef STACK_TYPE_H_INCLUDED
#define STACK_TYPE_H_INCLUDED



#endif //     STACK_TYPE_H_INCLUDED

typedef struct snode *Stack ;

typedef struct snode {
    int value;
    struct Nodes *next;
} Node;

void push(int a, Stack* st);

int pop(Stack* st);

int isempty (Stack* st);





