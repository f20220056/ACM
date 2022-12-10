#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print_list(struct node *p)
{
    // 'p' pointer used to traverse
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// void insert_start(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->next = head;
//     ptr->data = data;
//     headptr;
// }
// The above function does not work but the one below does.
/*
void insert_start( struct node** head_ptr, int data)
// head_ptr is pointer to head.
// pointer to pointer : { (struct node*)* }
{
     struct node *ptr = (struct node *)malloc(sizeof(struct node));
     ptr->next = *head_ptr;
     ptr->data = data;
     *head_ptr = ptr;
}
// For above function &head needs to be passed as parameter.
*/
// Parameters are passed by creating a copy of original variable. If the value of a variable is to be changed, then the address of that variable must be passed as opposed to the variable itself. That means when you pass a 'head' pointer, the function actually gets a copy of that pointer. Assigning head=ptr only affects that copy. As a result the new value is never seen outside of that function. You can change '*head'(still won't change where the pointer points; will change value at that address) but not 'head'. You have to pass a pointer to 'head' instead of 'head' to change head(which changes where head points).

struct node *insert_start(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

void insert_index(struct node *head, int index, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
}

void insert_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
}

struct node *delete_start(struct node *head)
{
    // Pointer p is created to store address of second node(head->next) as it can not be accessed after memory allocated to head is freed. We cannot write 'free(head)' after returning head->next as the function is terminated after return statement.
    struct node *p = head->next;
    free(head);
    return p;
}

void delete_index(struct node *head, int index)
{
    struct node *p = head;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    free(p->next);
    p->next = (p->next)->next;
}

void delete_end(struct node *head)
{
    struct node *p = head;
    while ((p->next)->next != NULL)
    {
        p = p->next;
    }
    free(p->next);
    p->next = NULL;
}

void delete_data(struct node *head, int data)
{
    // This does not work if the data we want to delete is stored in head node.
    struct node *p = head;
    while ((p->next)->data != data)
    {
        p = p->next;
    }
    free(p->next);
    p->next = (p->next)->next;
}

int main()
{
    // struct node first, second, third, fourth, fifth; : This would allocate meomory in stack, but we are interested in dynamic memory allocation(heap)
    struct node *head, *second, *third, *fourth, *fifth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;
    fifth->data = 5;

    print_list(head);

    head = insert_start(head, 0);
    print_list(head);

    insert_end(head, 6);
    print_list(head);

    insert_index(head, 4, 9);
    print_list(head);

    delete_index(head, 4);
    print_list(head);

    delete_end(head);
    print_list(head);

    head = delete_start(head);
    print_list(head);

    delete_data(head, 5);
    print_list(head);

    return 0;
}