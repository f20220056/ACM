#include <stdio.h>
int func_sum(int_1, int_2)
{
    return int_1 + int_2;
}
void func_print(int num)
{
    printf("Enter the number of \"*\" you want to print:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("*");
    }
    printf("\n");
} 
int main()
{
    int int_1, int_2, sum, num;
    printf("Enter the first iteger:\n");
    scanf("%d", &int_1);
    printf("Enter  the secod iteger:\n");
    scanf("%d", &int_2);
    sum = func_sum(int_1, int_2);
    printf("The sum of %d and %d is %d\n", int_1, int_2, sum);
    func_print(num);
    return 0;
}
/*
Exercise: 3 (Function)
Sum of 2 Integers entered by the User
Date: 01/09/2022
*/