#include <iostream>
#include <vector>
using namespace std;

template <typename t>
void print_vec(vector<t> v)
{
    typename vector<t>::iterator itr = v.begin(); //depedent scope --> 'typename' keyword necessray
    while(itr!=v.end())
    {
        cout<<*itr<<" ";
        itr++;
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    cout << endl;
}

int main()
{
    vector<int> v1(3, 0);
    print_vec(v1);
    
    vector<string> v2;
    v2.push_back("hi");
    v2.push_back("bye");
    print_vec(v2);
    v2.pop_back();
    print_vec(v2);
    // No push_front() and pop_front() functions in vector.
    
    vector<int> v3 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_vec(v3);
    v3.insert(v3.end(), 10);
    print_vec(v3);
    v3.insert(v3.begin() + 2, 3, 11);
    print_vec(v3);
    
    v3.erase(v3.end() - 1);
    print_vec(v3);
    v3.erase(v3.begin() + 2, v3.begin() + 5);
    print_vec(v3);
    
    v3.clear();
    if (v3.empty())
    {
        cout << "Vector is Empty" << endl;
    }
    vector<int> v4 = {1, 2, 3, 4, 5};
    
    
    return 0;
}