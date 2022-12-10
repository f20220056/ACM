#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]%*c", s);
    s = realloc(s, strlen(s) + 1);
    int i = 0, j=0;
    while (s[j] != '\0')
    {
        while (s[i] != ' ')
        {
            printf("%c", s[i]);
            i += 1;
        }
        printf("\n");
        i += 1;
        j += 1;
    }
    return 0;
}