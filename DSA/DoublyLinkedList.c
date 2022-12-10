#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}; // Don't forget ';' after defining struct;

void print_list(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
    // After the above loop, pointer 'p' is lost as it points to NULL. Hence, we use loop 1) to bring 'p' to last node and then 2) to print in reverse order.
    printf("In Reverse:-\n");
    // 1)
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    // 2)
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->prev;
    }
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;
    head->prev = NULL;

    second->data = 2;
    second->next = third;
    second->prev = head;

    third->data = 3;
    third->next = fourth;
    third->prev = second;

    fourth->data = 4;
    fourth->next = NULL;
    fourth->prev = third;

    print_list(head);

    return 0;
}