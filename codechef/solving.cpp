#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, pos, neg, temp1 = 0, temp2=0;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s2[i] - s1[i] >= 0)
            {
                pos = s2[i] - s1[i];
            }
            else
            {
                pos = 26 + (s2[i] - s1[i]);
            }
            if (s1[i] - s2[i] >= 0)
            {
                neg = s1[i] - s2[i];
            }
            else
            {
                neg = 26 + (s1[i] - s2[i]);
            }
            if(pos>13)
            {
                temp1-=neg;
                temp2-=neg;

            }
            else if(pos==13)
            {
                temp1+=pos;
                temp2-=neg;
            }
            else{
                temp1+=pos;
                temp2+=pos;
            }
        }
        cout << min(abs(temp1), abs(temp2)) << endl;
    }

    return 0;
}