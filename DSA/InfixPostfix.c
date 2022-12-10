#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int precedence;

struct stack
{
    int top;
    char *arr;
};

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

void push(struct stack *s, char c)
{
    if (c == '+' || c == '-')
    {
        precedence = 1;
    }
    else if (c == '*' || c == '/')
    {
        precedence = 2;
    }
    s->top++;
    s->arr[s->top] = c;
}

char pop(struct stack *s)
{
    char popped = s->arr[s->top];
    s->top--;
    if (s->arr[s->top] == '+' || s->arr[s->top] == '-')
    {
        precedence = 1;
    }
    else if (s->arr[s->top] == '*' || s->arr[s->top] == '/')
    {
        precedence = 2;
    }
    else
    {
        precedence = 0;
    }
    return popped;
}

void infix_postfix(char string[])
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack)); // DON'T FORGET THIS!!!
    s->arr = (char *)malloc(100 * sizeof(char));
    s->top = -1;

    char arr_final[100];
    int j = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
    label:
        if (string[i] == '+' || string[i] == '-')
        {
            if (precedence >= 1)
            {
                arr_final[j] = pop(s);
                j++;
                goto label;
            }
            else
            {
                push(s, string[i]);
            }
        }
        else if (string[i] == '*' || string[i] == '/')
        {
            if (precedence >= 2)
            {
                arr_final[j] = pop(s);
                j++;
                goto label;
            }
            else
            {
                push(s, string[i]);
            }
        }
        else
        {
            arr_final[j] = string[i];
            j++;
        }
    }
    while(s->top!=-1)
    {
        arr_final[j]=pop(s);
        j++;
    }
    arr_final[j] = '\0';
    puts(arr_final);
}

int main()
{
    char string[100];
    gets(string);
    infix_postfix(string);

    return 0;
}