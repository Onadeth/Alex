#include <stdlib.h>
#include <stdio.h>

#include "stack_t.h"


Node* newStack(){
    return NULL;
}

void push(int a, Stack* st){

    if( *st == NULL ){

         *st = (Node* )calloc(1,sizeof(Node));
        (*st)->next = NULL;
        (*st)->value = a;
    }
    else {
        Node* nw = (Node* )calloc(1,sizeof(Node));
        if(nw == NULL){
            printf("incorrect allocation of memory");
            abort();
        }
        nw->value = a;
        nw->next = *st;
        *st = nw;
    }
}

int pop(Stack* st){
    int popData = 0;

    popData = (*st)->value;

    Node* temp;
    temp = *st;
    *st = temp->next;
    free(temp);
    return popData;

}

int isEmpty(Stack st){

    return (st->next == NULL);

}
