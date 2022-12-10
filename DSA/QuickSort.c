#include <stdio.h>

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    else
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] <= pivot)
            {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }

        i++;
        swap(&arr[i], &arr[high]);

        quicksort(arr, 0, i - 1);
        quicksort(arr, i + 1, high);
    }
}

int main()
{
    int arr[] = {3, 7, 2, 9, 8, 1, 4, 6, 5, 10};
    int size = sizeof(arr) / sizeof(int);
    print_arr(arr, size);

    quicksort(arr, 0, size - 1);
    print_arr(arr, size);

    return 0;
}