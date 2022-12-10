#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int, int);

    friend float distance(point, point);
};

point::point(int x, int y)
{
    this->x = x;
    this->y = y;
}

float distance(point p1, point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main()
{
    int x1, y1, x2, y2;
    cout << "Enter the x-coordinate of point 1 : ";
    cin >> x1;
    cout << "Enter the y-coordinate of point 1 : ";
    cin >> y1;
    cout << "Enter the x-coordinate of point 2 : ";
    cin >> x2;
    cout << "Enter the y-coordinate of point 2 : ";
    cin >> y2;

    point p1(x1, y1);
    point p2(x2, y2);

    cout << "The distance between point 1 and point 2 is " << distance(p1, p2) << endl;

    return 0;
}