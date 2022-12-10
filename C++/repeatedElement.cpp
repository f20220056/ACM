#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size); // ***** DOUBT *****
    int i = 0;
    bool flag = 1;
    while (arr[i] != arr[i + 1])
    {
        if (i == size - 1)
        {
            cout << "No repeated element\n";
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 1)
    {
        cout << arr[i] << endl;
    }

    return 0;
}