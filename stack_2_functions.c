typedef struct {
        int* data;
        int size;
        int top;
    } Stack ;

int push(int data, Stack* st);

int pop(Stack* st);

int isEmpty(Stack *st);

int isFull(Stack *st);
