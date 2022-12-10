#include <stdio.h>

/*
 1 2 3...n
 .
 .
 .
 123
 12
 1
 12
 123
 .
 .
 .
 1 2 3...n
*/

void pattern(int n)
{
    if(n==1)
    {
        printf("1\n");
        return; 
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    pattern(n-1);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    pattern(4);
    return 0;
}