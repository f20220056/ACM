#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

void print_queue(struct queue *q)
{
    printf("Queue:-\n");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
    printf("\n\n");
}

int empty(struct queue *q)
{
    if ((q->front == -1 && q->front == -1) || (q->front > q->rear))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full(struct queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int data)
{
    if (full(q))
    {
        printf("Queue Overflow! '%d' could not be enqueued.\n", data);
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = data;
        printf("'%d' enqueued.\n", data);
        if (q->front == -1)
        {
            q->front++;
        }
    }
}

void dequeue(struct queue *q)
{
    if (empty(q))
    {
        printf("Queue Underflow!\n");
    }
    else
    {
        printf("'%d' dequeued.\n", q->arr[q->front]);
        q->front++;
    }
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->arr = (int *)malloc(100 * sizeof(int));
    q->size = 100;
    q->front = q->rear = -1;

    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    print_queue(q);
    dequeue(q);
    print_queue(q);
    enqueue(q, 4);
    print_queue(q);

    return 0;
}