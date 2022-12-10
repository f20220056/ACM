#include <stdio.h>
int fib();
int main()
{
        // Iteration Method
        int length;
        int a = 0, b = 1, c;
        printf("\nEnter the desired length of Fibonacci series:-\n");
        scanf("%d", &length);
        if (length == 1)
        {
            printf("\n0\n\n");
        }
        else if (length == 2)
        {
            printf("\n0, 1\n\n");
        }
        else
        {
            printf("\n0, 1, ");
            for (int i = 0; i < length - 2; i++)
            {
                c = a + b;
                printf("%d", c);
                //line 26-30 to omit comma(,) at the end
                if (i == length - 3)
                {
                    printf("\n");
                    break;
                }
                printf(", ");
                a = b, b = c;
            }
            printf("\n");
        }
    
    return 0;
}

/*
~~~Recursion method
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c)
{
    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else if (n == 3)
    {
        return c;
    }
    else
    {
        return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
    }
}

int main()
{
    int n, a, b, c; // (n)th term; series starts with a,b,c

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
*/