#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("\nPlease enter an integer\n");
    scanf("%d", &num);

    printf("\n");

    // do while (use while instead)
    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i = i + 1;
    } while (i <= 10);

    i = 1;
    printf("\n");

    // while
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i = i + 1; // or i += 1
    }

    printf("\n");

    // for
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
/*
Exercise: 2 (Loop)
Multiplication Table of an Integer entered by the User
Date: 31/08/2022
*/