#include <iostream>
#include <map>
using namespace std;

void print_map(map<int, char> m)
{
    map<int, char>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " : " << it->second;
        cout << endl;
        it++;
    }
}

int main()
{
    map<int, char> m1;
    m1[1] = 'a';
    m1[3] = 'c';
    m1.insert({2, 'b'});
    print_map(m1);
    cout<<m1[1]<<endl;
    return 0;
}