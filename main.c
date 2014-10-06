#include <stdio.h>
#include <stdlib.h>

#include "stack_t.h"

int main(){

    int a, b, c = 0;

    scanf("%d ",&a);
    scanf("%d", &b);
    scanf("%d", &c);

    Node* top = newStack();

    push(a, &top);
    push(b, &top);
    push(c, &top);

    printf("%d ", (pop(&top)-pop(&top)));
    printf("%d ", pop(&top));
    return 0;
}
