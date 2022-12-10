#include <stdio.h>
#include <string.h>

struct student
{
    //';' necessary after defining structure.
    // structure members:-(accessed using '.' : structure member operator)
    char name[20];
    int marks;
} s1, s2;   //How to use typedef here?
/*
Variables like 's1' and 's2' can also be initialised in main function in the following way:-
struct student s1, s2; (similar to: int num;)
In this case 's1' and 's2' would be local variables.
*/

int main()
{
    /*
    name is an array which cannot be resized as arrays need contiguous memory space, so the following is a wrong method to assign or modify a string:-
    s1.name = "Student 1"; WRONG
    s2.name = "Student 2"; WRONG
    */
    strcpy(s1.name, "Student 1");
    strcpy(s2.name, "Student 2");
    // Second method to assign or modify 'name' string is using pointers.
    s1.marks = 95;
    s2.marks = 97;
    printf("%s scored %d marks.\n", s1.name, s1.marks);
    printf("%s scored %d marks.\n", s2.name, s2.marks);
    return 0;
}
