#include<iostream>
#include<list>
using namespace std;

template<typename t>
void print_list(list<t> l)
{
    typename list<t>::iterator itr=l.begin();
    while(itr!=l.end())
    {
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;
}

int main()
{
    list<int> l1(3, 0);
    l1.push_back(1);
    l1.push_front(2);
    print_list(l1);
    
    list<int> l2 = {1, 2, 3, 4, 5};
    l2.pop_back();
    l2.pop_front();
    print_list(l2);
    
    list<int>::iterator itr=l2.begin();
    itr++;
    l2.insert(itr, 3, 9);
    print_list(l2);
    
    itr=l2.end();
    itr--;
    l2.erase(itr);
    print_list(l2);
    
    l2.clear();
    if(l2.empty())
    {
        cout<<"List is Empty"<<endl;
    }
    
    return 0;
}