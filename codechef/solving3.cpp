#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s, sp="a";
        cin >> s;
        while (s.length() != 1 && s != sp)
        {
            sp = s;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    s[i] = '0';
                    s.erase(i + 1, i + 1);
                    count++;
                }
            }
        }
        // cout<<s<<endl;
        if (count == n - 1 && s.length() == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}