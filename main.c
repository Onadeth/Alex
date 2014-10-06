/* ѕростой калькул€тор с четырм€ действи€ми. */

#include <stdio.h>
#include <stdlib.h>

#include "stack_type.h"


void push(int a, Stack* st){


    Node *nw = (Node* )malloc(sizeof(Node));
    nw->value = a;
    nw->next = *st;
    *st = nw;

}

int pop(Stack* st){
    int ret = 0;
    Node* temp;
    temp = **st;
    ret = temp->value;


    return ret;

// Not finished

}

int isempty(Stack* st){



}


int main(){

    Stack top;
    top = NULL;




    return 0;
}
