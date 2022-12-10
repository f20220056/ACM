#include <iostream>
using namespace std;

class calc1
{
public:
    float add(float a, float b)
    {
        return a + b;
    }
    float sub(float a, float b)
    {
        return a - b;
    }
};

class calc2
{
public:
    float mult(float a, float b)
    {
        return a * b;
    }
    float div(float a, float b)
    {
        return a / b;
    }
};

class hybrid_calc : public calc1, public calc2
{
};

int main()
{
    hybrid_calc obj;
    cout << obj.add(1, 2) << endl;
    cout << obj.sub(1, 2) << endl;
    cout << obj.mult(1, 2) << endl;
    cout << obj.div(1, 2) << endl;
    return 0;
}