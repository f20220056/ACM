#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    void set_data1(int x)
    {
        data1 = x;
    }
    void display_data1()
    {
        cout << data1;
    }
};

class derived : private base
{
    int data2;

public:
    void set(int val1, int val2)
    {
        set_data1(val1);
        data2 = val2;
    }
    void display()
    {
        cout << "Data 1 : "; 
        display_data1();
        cout << endl
             << "Data 2 : " << data2 << endl;
    }
};

int main()
{
    derived object;
    object.set(10, 20);
    object.display();

    return 0;
}