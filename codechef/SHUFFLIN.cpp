#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll o=0, e=0, op, ep, c=0;
        ll n;
        cin>>n;
        if((n&1)==0)
        {
            op=n/2;
            ep=n/2;
        }
        else{
            ep=n/2;
            op=n/2+1;
        }
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if((arr[i]&1)==0)
            {
                e++;
            }
            else{
                o++;
            }
        }
        o>ep ? c+=ep : c+=o;
        e>op ? c+=op : c+=e;
        cout<<c<<endl;
    }

    return 0;
}