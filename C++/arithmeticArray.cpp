#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the no. of elements : ";
    cin >> size;
    int arr[size]; // Variable length array (stack or heap?)
    cout << "Enter the elements:-\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max_len = 1;
    int diff = arr[1] - arr[0];
    int j = 1;
    int len = 1;
    while (j < size)
    {
        if (arr[j] - arr[j - 1] == diff)
        {
            len++;
            j++;
        }
        else
        {
            diff = arr[j] - arr[j - 1];
            if (len > max_len)
            {
                max_len = len;
            }
            len = 1;
        }
    }
    if (len > max_len)
    {
        max_len = len;
    }
    cout << max_len << endl;

    return 0;
}