#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    s->top++;
    s->arr[s->top] = c;
}

void pop(struct stack *s)
{
    s->top--;
}

int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack)); // DON'T FORGET THIS!!!
    s->arr = (char *)malloc(100 * sizeof(char));
    s->top = -1;

    char string[100];
    gets(string);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '(')
        {
            push(s, '(');
        }
        else if (string[i] == ')')
        {
            if (empty(s))
            {
                goto label1;
            }
            else if (s->arr[s->top] != '(')
            {
                goto label1;
            }
            else
            {
                pop(s);
            }
        }
        else if (string[i] == '[')
        {
            push(s, '[');
        }
        else if (string[i] == ']')
        {
            if (empty(s))
            {
                goto label1;
            }
            else if (s->arr[s->top] != '[')
            {
                goto label1;
            }
            else
            {
                pop(s);
            }
        }
        else if (string[i] == '{')
        {
            push(s, '{');
        }
        else if (string[i] == '}')
        {
            if (empty(s))
            {
                goto label1;
            }
            else if (s->arr[s->top] != '{')
            {
                goto label1;
            }
            else
            {
                pop(s);
            }
        }
        else
        {
            continue;
        }
    }

    if (empty(s))
    {
        printf("Paraenthesis Valid\n");
    }
    else
    {
    label1:
        printf("Invalid\n");
    }

    return 0;
}