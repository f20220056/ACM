#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter no. of rows\n";
    cin >> row;
    cout << "Enter no. of columns\n";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row)
            {
                cout << "*";
            }
            else
            {
                if (j == 1 || j == col)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    int n;
    cout << "Enter an integer\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    printf("hi");
    return 0;
}
