#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cout << "Enter no. of day : ";
    cin >> size;
    int arr[size];
    cout << "Enter no. of visitors on each day:-\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int highest = -1;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] > arr[i + 1] || i == size - 1) && arr[i] > highest)
        {
            ans++;
        }
        highest = max(highest, arr[i]);
    }
    cout << ans << endl;

    return 0;
}