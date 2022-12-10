#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define cases \
    int t;    \
    cin >> t; \
    while (t--)
#define arr_init                \
    int n;                      \
    cin >> n;                   \
    int arr[n];                 \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }

int main()
{
    cases
    {
        bool b = 1;
        arr_init 
        int t[2] = {};
        for (int i = 0; i < n; i++)
        {
            int l = (arr[i] - 5);
            if (l == 0 || (l == 5 && t[0] >= 1) || (l == 10 && (t[0] >= 2 || t[1] >= 1)))
            {
            }
            else
            {
                b = 0;
                break;
            }
            if (arr[i] == 5)
            {
                t[0]++;
            }
            if (arr[i] == 10)
            {
                t[1]++;
                t[0]--;
            }
            if (arr[i] == 15)
            {
                if(t[1]>=1)
                {
                    t[1]--;
                }
                else{
                    t[0]-=2;
                }
            }
        }
        if (b == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}