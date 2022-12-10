#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        string s1, s2;
        cin>>s1;
        s2=s1;
        int len=s1.size();
        s1.erase(len/2, len-(len/2));
        s2.erase(0, len-(len/2));
        sort(s1.begin(), s1.end()); //DOUBT: &s1[0] instead of s1.begin() not working
        sort(s2.begin(), s2.end());
        cout<<s1<<endl;
        cout<<s2<<endl;
        if(s1==s2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}