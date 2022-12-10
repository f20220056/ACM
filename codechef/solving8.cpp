#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

#define ll long long
#define endl "\n"
#define vi vector<long long int>
#define mii map<long long int, long long int>

// getline(cin, string_name);

int main()
{

    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n, count1 = 0, count2 = 0, count = 0;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                count1 += 1;
            }
            else
            {
                count2 += 1;
            }
        }

        if (count1 == n || count2 == n)
        {
            cout << "YES" << endl;

            vi v;
            for (int i = 0; i < n; i++)
            {
                if (s1[i] == '0')
                {
                    s1[i] = '1';
                    count += 1;
                    v.push_back(i + 1);
                    for (int j = 0; j < n; j++)
                    {
                        if (j != i)
                        {
                            if (s2[j] == '0')
                            {
                                s2[j] = '1';
                            }
                            else
                            {
                                s2[j] = '0';
                            }
                        }
                    }
                }
            }
            if (stoi(s2) == 0)
            {
                count += 1;
                cout << count << endl;
                for (int i = 0; i < v.size(); i++)
                {
                    cout << v[i] << " " << v[i] << endl;
                }
                cout << 1 << " " << n << endl;
            }
            else
            {
                cout << count + 2 << endl;
                for (int i = 0; i < v.size(); i++)
                {
                    cout << v[i] << " " << v[i] << endl;
                }
                cout << 1 << " " << 1 << endl;
                cout << 2 << " " << n << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}