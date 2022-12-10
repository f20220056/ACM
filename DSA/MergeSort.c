#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int low, int high)
{
    int mid = (low + high) / 2;
    int i = low;
    int j = mid + 1;
    int *arr_temp = (int *)malloc((high - low + 1) * sizeof(int));
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            arr_temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            arr_temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        arr_temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        arr_temp[k] = arr[j];
        j++;
        k++;
    }

    // Coppying merged sorted array(arr_temp) back to 'arr'
    for (int t = low; t <= high; t++)
    {
        arr[t] = arr_temp[t - low];
        // WRONG: arr[t] = arr_temp[t]; because 'arr_temp' is a custom array and its index would start from 0 while index of 'arr' starts from 'low'
    }
    free(arr_temp);
}

void merge_sort(int arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    // This sorts the 2 halves of original array individually which would now be merged.

    merge(arr, low, high);
}

int main()
{
    int arr[] = {3, 7, 2, 9, 8, 1, 4, 6, 5, 10};
    int size = sizeof(arr) / sizeof(int);
    print_arr(arr, size);

    merge_sort(arr, 0, size - 1);
    print_arr(arr, size);

    return 0;
}