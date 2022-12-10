#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print_stack(struct node *top)
{
    printf("Stack:-\n");
    struct node *p = top;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int empty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full()
{
    // we are trying to check if space is available in heap by requesting a 'struct node' sized memory
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL) // malloc/calloc returns NULL pointer if dynamic memory allocation fails
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *top, int data)
{
    if (full())
    {
        printf("Stack Overflow! Cannnot push '%d' into the stack.\n", data);
        return top;
    }
    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->next = top;
        ptr->data = data;
        printf("Pushed '%d' into the stack.\n", data);
        // top=ptr;  WRONG
        return ptr;
    }
}

struct node *pop(struct node *top)
{
    if (empty(top))
    {
        printf("The stack is empty! (Stack Underflow)\n");
        return top;
    }
    else
    {
        struct node *ptr = top->next;
        printf("Popped '%d' from the stack.\n", top->data);
        free(top);
        return ptr;
    }
}

void peek(struct node *top, int index)
{
    // top is not always index 0
    struct node *p = top;
    int j = 0; // 'j' used to count no. of elements
    while (p->next != NULL)
    {
        p = p->next;
        j++;
    }
    if (index > j)
    {
        printf("Index %d does not exist. Last index: %d\n", index, j);
    }
    else
    {
        p = top;
        for (int i = 0; i < j - index; i++) // j-index : since 'index' from last node is equal to total elements 'j(total elements-1)-index' from first node
        {
            p = p->next;
        }
        printf("The element at index %d is '%d'\n", index, p->data);
    }
}

int main()
{
    struct node *top = NULL;
    top = push(top, 1);
    print_stack(top);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 5);
    print_stack(top);
    top = pop(top);
    print_stack(top);
    peek(top, 3);
    return 0;
}