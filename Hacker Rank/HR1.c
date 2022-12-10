#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char c, s1[100], s2[100];
    scanf("%c", &c);
    scanf("%s", s1);
    scanf("\n");
    scanf("%[^\n]%*c", s2);
    printf("%c\n", c);
    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}