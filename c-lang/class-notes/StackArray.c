#include <stdio.h>
#include <iostream>
#define MAX 100

typedef struct
{
    int top;
    int data[MAX];
} Stack;

void initStack(Stack *s)
{
    s->top = -1;
}

int isFull(Stack *s)
{
    return s->top == MAX - 1;
}

int isEmpty(Stack *s)
{
    return s->top == -1;
}

void push(Stack *s, int item)
{
    if (!isFull(s))
    {
        s->top++;
        s->data[s->top] = item;
    }
}

int pop(Stack *s)
{
    if (!isEmpty(s))
    {
        return s->data[s->top--];
    }
    return -1;
}

int peek(Stack *s)
{
    if (!isEmpty(s))
    {
        return s->data[s->top];
    }
    return -1;
}

// void display(Stack *s){
//     printf("Stack: \n");
//     for(int i = 0; i < s -> size; i++){

//     }
// }

int main()
{
    Stack s;
    initStack(&s);
    push(&s, 3);
    push(&s, 7);
    push(&s, 9);
    pop(&s);
    printf("%d\n", peek(&s));
}
