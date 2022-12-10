#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0, a, b;
    printf("Enter a number:-\n");
    scanf("%d", &num);
    b = 1;
    while (b != 0)
    {
        a = num % 10;
        b = num / 10;
        num = b;
        sum += a;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
/*
Exercise: 12 
Sum of Digits
Date: 10/09/2022
*/