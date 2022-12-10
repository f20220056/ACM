#include <stdio.h>
#include <string.h>
int check = 1;

void parser(char a)
{
    if (a == '<')
    {
        check = 0;
    }
    else if (a == '>')
    {
        check = 1;
    }
    else if (check != 0)
    {
        printf("%c", a);
    }
}

int main()
{
    char string[1000];
    printf("Enter the text:-\n");
    gets(string);
    for (int i = 0; i < strlen(string); i++)
    {
        parser(string[i]);
    }
    printf("\n");
    return 0;
}
/*
Exercise: 10 (String)
HTML Parser (Simple)
Date: 08/09/2022
*/