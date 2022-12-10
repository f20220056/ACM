#include <stdio.h>
int main()
{
    // Multiplication Table
    int input_int;
    printf("\nPlease enter an integer between 1 and 100\n");
    scanf("%d", &input_int);
    if (input_int > 100)
    {
        printf("\nThe integer you entered is %d, which is greater than 100!\n\n", input_int);
    }
    else if (input_int < 1)
    {
        printf("\nThe integer you entered is %d, which is less than 1!\n\n", input_int);
    }
    else
    {
        printf("\nHere is the multiplication table of %d :-\n\n", input_int);
        printf("%d x 1  = %d\n", input_int, input_int * 1);
        printf("%d x 2  = %d\n", input_int, input_int * 2);
        printf("%d x 3  = %d\n", input_int, input_int * 3);
        printf("%d x 4  = %d\n", input_int, input_int * 4);
        printf("%d x 5  = %d\n", input_int, input_int * 5);
        printf("%d x 6  = %d\n", input_int, input_int * 6);
        printf("%d x 7  = %d\n", input_int, input_int * 7);
        printf("%d x 8  = %d\n", input_int, input_int * 8);
        printf("%d x 9  = %d\n", input_int, input_int * 9);
        printf("%d x 10 = %d\n\n", input_int, input_int * 10);
    }
    return 0;
}
/*
Exercise: 1 (Basics)
Multiplication Table of an Integer entered by the User
Date: 31/08/2022
*/