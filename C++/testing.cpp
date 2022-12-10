#include <iostream>
using namespace std;

class base
{
    int a;

public:
    void print_a()
    {
        cout << a << endl;
    }
    void set_a(int x)
    {
        a = x;
    }
};

class derived : public base
{
};

int main()
{
    base base_obj;
    derived der_obj;
    base_obj.set_a(10);
    der_obj.set_a(20);
    base_obj.print_a();
    der_obj.print_a();
    return 0;
}