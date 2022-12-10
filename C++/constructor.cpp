#include <iostream>
using namespace std;

class x
{
    int a, b;

public:
    x(int, int);
    x(); // Overloaded Constructor
    void printData();

    friend int sum(x, x);
};

x::x(int p, int q) // Parameterized Constructor
{
    a = p;
    b = q;
}

x::x() // Default Constructor
{
    a = 10;
    b = 11;
}

void x::printData()
{
    cout << a << " , " << b << endl;
}

int sum(x object1, x object2)
{
    return object1.a + object2.a;
}

int main()
{
    // Using Parameterized Constructor
    x x1(1, 2);     // Implicit constructor call
    x x2 = x(3, 4); // Explicit constructor call
    // x x2 = x(5, 4); Redifinition of object not allowed.
    // Using Default Constructor
    x x3;
    cout << "Value of x1 :-\n";
    x1.printData();
    cout << "Value of x2 :-\n";
    x2.printData();
    cout << "Value of x3 :-\n";
    x3.printData();

    cout << "Sum = " << sum(x1, x3) << endl;

    return 0;
}