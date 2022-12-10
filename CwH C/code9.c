#include <stdio.h>

void revArr(int arr[], int arr1[]) // or revArr(int *arr, int *arr1)
{
    for (int i = 0; i < 7; i++)
    {
        arr[i] = arr1[6 - i]; // or *(arr + i) = *(arr1 + (6 - i));
        /*
        or without using arr1:-
        (Method to swap data in two variables)
        int temp; 
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
        IMPORTANT: run this only till i < 7/2
        */
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    revArr(arr, arr1);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
Exercise: 9 (Passing Array into Function)
Array Reversal
Date: 08/09/2022
*/