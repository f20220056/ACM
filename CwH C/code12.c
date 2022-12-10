#include <stdio.h>
#include <stdlib.h>
int i = 10; // global variable 'i'
int main()
{
    int a = 1, b = 2;
    int *ptr1 = malloc(1 * sizeof(int)); // "1 *" is optional
    int *ptr2 = calloc(1, sizeof(int));
    ptr1 = &a;
    ptr2 = &b;
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
    // ERROR? :-
    // free(ptr1);
    // free(ptr2);
    int i = 20; // local variable 'i'
    printf("%d\n", i);
    { // scope starts
        extern int i;
        printf("%d\n", i);
    } // scope ends (Variables inside scope not valid after this)
    return 0;
}
/*
Exercise: 11 (Dynamic Memory Allocation + Extern Variable)
Calloc, Malloc, Free
Date: 09/09/2022
*/