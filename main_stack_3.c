#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "stack_3_type.h"

int main(){

    Stack st = {};
    init_stack(&st);
    printf("%d top \n",st.top);
    printf("%d is  Empty \n",isEmpty(st));
    push(&st, 30);
    printf("%d top \n", st.top);
    printf("%d is Empty \n",isEmpty(st));
    push(&st, 40);
    printf("%d top \n",st.top);
    printf("%d is Empty \n",isEmpty(st));
    printf("%d ",pop(&st));
    printf("%d top \n ", st.top);
    printf("%d is Empty \n",isEmpty(st));
    printf("%d ",pop(&st));
    printf("%d top \n",st.top);
    printf("%d is Empty \n",isEmpty(st));
    return 0;

}
