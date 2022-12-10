#include <stdio.h>

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i += 1)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void inserion(int arr[], int *size, int index, int element)
{
    for (int i = (*size) - 1; i >= index; i -= 1)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    *size += 1;
}

void deletion(int arr[], int *size, int index)
{
    for (int i = index; i < (*size) - 1; i += 1)
    {
        arr[i] = arr[i + 1];
    }
    *size -= 1;
}

int binary_search(int arr[], int size, int element) // only for sorted array(increasig)
{
    int low = 0, mid, high = (size - 1);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (element < arr[mid])
        {
            high = (mid - 1);
        }
        else
        {
            low = (mid + 1);
        }
    }
    if (arr[low] == element)
    {
        return low;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = (sizeof(arr) / sizeof(int));
    print_array(arr, size);
    inserion(arr, &size, 2, 0);
    print_array(arr, size);
    deletion(arr, &size, 2);
    print_array(arr, size);
    printf("%d\n", binary_search(arr, size, 11));

    return 0;
}