#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int and, and_max = 0;
    int or, or_max = 0;
    int xor, xor_max = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            and = i & j;
            if (and >= and_max && and < k)
            {
                and_max = and;
            }
        }
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            or = i | j;
            if (or >= or_max && or < k)
            {
                or_max = or ;
            }
        }
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            xor = i ^ j;
            if (xor >= xor_max && xor < k)
            {
                xor_max = xor;
            }
        }
    }
    printf("%d\n%d\n%d\n", and_max, or_max, xor_max);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}