#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

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
        int n, k, count = 0, ans = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                count++;
            }
            else
            {
                ans = max(ans, count);
                count = 0;
            }
        
        }
        ans = max(ans, count);
        if (ans >= k)
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