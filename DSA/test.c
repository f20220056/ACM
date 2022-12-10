#include <stdio.h>
int main()
{
    int a = 1, b = 2;
    int *a_ptr = &a, *b_ptr = &b;
    printf("%d %d\n",a,b);
    *a_ptr=*b_ptr;
    printf("%d %d\n",a,b);
}