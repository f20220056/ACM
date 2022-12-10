#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
    // pointer to array created instead of array since we want to allocate memory dynamically
};

void print_stack(struct stack *s)
{
    printf("Stack:-\n");
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d\n", *(s->arr + i));
    }
}

int empty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *s, int data)
{
    if (full(s))
    {
        printf("Stack Overflow! Cannnot push '%d' into the stack.\n", data);
    }
    else
    {
        s->arr[s->top + 1] = data; // or *( s->arr + (s->top + 1) ) = data;
        s->top++;
        printf("Pushed '%d' into the stack.\n", data);
    }
}

void pop(struct stack *s)
{
    if (empty(s))
    {
        printf("The stack is empty! (Stack Underflow)\n");
    }
    else
    {
        printf("Popped '%d' from the stack.\n", s->arr[s->top]);
        s->top--;
    }
}

void peek(struct stack *s, int index)
{
    if (index > s->top)
    {
        printf("Index %d does not exist. Last index: %d\n", index, s->top);
    }
    else
    {
        printf("The element at index %d is '%d'\n", index, s->arr[index]);
    }
}

int main()
{
    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    s1->size = 4;
    s1->top = -1;
    s1->arr = (int *)malloc(s1->size * sizeof(int));
    // malloc and calloc always return pointer to contiguous memory blocks
    pop(s1);
    push(s1, 1);
    push(s1, 2);
    push(s1, 3);
    push(s1, 4);
    push(s1, 5);
    print_stack(s1);
    pop(s1);
    print_stack(s1);
    peek(s1, 2);
    peek(s1, 3);
    return 0;
}