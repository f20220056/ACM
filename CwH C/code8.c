#include <stdio.h>

void pattern0(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern1(int size)
{
    for (int i = size; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int pattern, size;
    printf("Enter 0 for triangular star pattern or 1 for reversed triangular star pattern:-\n");
label1:
    scanf("%d", &pattern);
    if (pattern != 0 && pattern != 1)
    {
        printf("Please enter 0 or 1\n");
        goto label1;
    }
    else
    {
        printf("Please enter the size(no. of rows) of pattern:-\n");
        scanf("%d", &size);
        if (pattern == 0)
        {
            pattern0(size);
        }
        else
        {
            pattern1(size);
        }
    }
    return 0;
}
/*
Exercise: 8 (Nested Loop)
Star Pattern
Date: 08/09/2022
*/