#include <stdio.h>
#include <string.h>
int check = 1;

char parser1(char a)
{
    if (a == '<')
    {
        check = 0;
        return ' ';
    }
    else if (a == '>')
    {
        check = 1;
        return ' ';
    }
    else if (check != 0)
    {
        return a;
    }
}

void parser2(char string1[])
{
    // to remove whitespace at beginning
    while (string1[0] == ' ')
    {
        for (int i = 0; i < strlen(string1); i++)
        {
            string1[i] = string1[i + 1];
        }
    }
    // to remove whitespace at end
    while (string1[strlen(string1) - 1] == ' ') // if the last character of string is a whitespace, it is set to '\0' 
    {
        string1[strlen(string1) - 1] = '\0';
    }
}

int main()
{
    char string[1000], string1[1000];
    printf("Enter the text:-\n");
    gets(string);
    for (int i = 0; i < strlen(string); i++)
    {
        string1[i] = parser1(string[i]);
    }
    parser2(string1);
    printf("___%s___", string1);
    printf("\n");
    return 0;
}
/*
Exercise: 10.1 (String)
HTML Parser (Advanced)
Date: 08/09/2022
*/