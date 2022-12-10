#include <stdio.h>
int main()
{
    int arr[] = {5,4,3,2,1};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int j = 4; j >= 0; j--)
    {
        printf("Pass %d\n", 5 - j);
        int sorted = 1;
        for (int i = 0; i < j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sorted = 0;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        if (sorted)
        {
            break;
        }
    }

    return 0;
}