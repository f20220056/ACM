#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> m1;
        int n, temp, maxi=1, maxk;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            m1[temp]++;
        }

        map<int, int>::iterator it = m1.begin();
        while (it != m1.end())
        {
            if(it->second>maxi)
            {
                maxi-it->second;
                maxk=it->first;
            }
            it++;
        }
        cout<<maxk<<endl;
    }

    return 0;
}