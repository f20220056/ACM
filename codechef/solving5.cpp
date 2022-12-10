#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

#define ll long long
#define endl "\n"
#define vi vector<int>
#define mii map<int, int>

// getline(cin, string);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vi  v= {1,2,3,4,5};
    for(int x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    string s1, s2="01234567";
    s1=s2.substr(5,3);
    cout<<s1<<endl;

    return 0;
}