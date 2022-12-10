#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int c1=1, c2=3*n;
        cout<<((n&1)==0 ? n/2 : n/2+1)<<endl;
        while(c2>c1)
        {
            cout<<c1<<" "<<c2<<endl;
            c1+=3;
            c2-=3;
        }
    }

    return 0;
}