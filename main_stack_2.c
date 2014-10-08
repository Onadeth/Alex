#include <stdio.h>
#include "stack_2_type.h"

#defint SIZE_OF_STACK 4

int main(){
	Stack p;
	p = newStack(SIZE_OF_STACK);
	push(3, p)
	printf("%d ", pop(p));
	
	return 0;
}