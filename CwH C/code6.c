#include <stdio.h>
#include <string.h> //header file to access string library functions.
int main()
{
    char name1[10], name2[10];
    printf("Enter the first name:\n");
    gets(name1);
    printf("Enter the second name:\n");
    gets(name2);
    printf("\n");
    puts(name1);
    puts(name2);
    printf("\n");
    return 0;
}