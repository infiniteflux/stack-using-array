# include <stdio.h>
# include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    return ptr->top=-1;
}

int isFull(struct stack *ptr)
{
    return ptr->top == ptr->size-1;
}

int main()
{
    // if you use as interger
    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=(int *)malloc(s.size *sizeof(int));

    // if you use as pointer
    struct stack *s= (struct stack *)malloc(sizeof(struct stack));;
    s->size=2;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));

    // Pushing elements within the stack size
    if (!isFull(s)) {
        s->arr[++(s->top)] = 7;
    } else {
        printf("Stack is full, cannot push 7\n");
    }

    if (!isFull(s)) {
        s->arr[++(s->top)] = 8;
    } else {
        printf("Stack is full, cannot push 8\n");
    }

    if (!isFull(s)) {
        s->arr[++(s->top)] = 9;
    } else {
        printf("Stack is full, cannot push 9\n");
    }

    // Check if stack is empty
    if (isEmpty(s)) {
        printf("The stack is empty\n");
    } else {
        printf("The stack is not empty\n");
    }

    //Check if stack is full
    if (isFull(s)) {
        printf("The stack is full\n");
    } else {
        printf("The stack is not full\n");
    }

    // Free allocated memory
    free(s->arr);
    free(s);

    return 0;
}