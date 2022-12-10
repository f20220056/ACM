#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the desired size of pattern(1-9) :-\n");
    scanf("%d", &n);
    printf("\nHere's the pattern:-\n\n");
    for (int i = 1; i <= 2*n-1; i++)
    {
        if(i<=n)
        {
        for (int j = 1; j <= (2 * n - 1); j++)
        {
            if (j <= i)
            {
                printf("%d ", n + 1 - j);
            }
            else if(j >= 2 * n - i)
            {
                printf("%d ", n+1-(2*n-j));
            }
            else
            {
                printf("%d ", n + 1 - i);
            }
        }
        }
        else{
            for (int j = 1; j <= (2 * n - 1); j++)
        {
            if (j <= (2*n-i))
            {
                printf("%d ", n + 1 - j);
            }
            else if(j >= 2 * n - (2*n-i))
            {
                printf("%d ", n+1-(2*n-j));
            }
            else
            {
                printf("%d ", n + 1 - (2*n-i));
            }
        }
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}