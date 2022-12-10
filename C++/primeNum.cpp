#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b;
    cout<<"Enter 2 integers\n";
    cin>>a>>b;
    cout << "Prime numbers between " << a << " and " << b << " are:-\n";
    for (int i = a + 1; i < b; i++)
    {
        if (isPrime(i))
        {
            cout << i;
            cout << endl;
        }
    }

    return 0;
}