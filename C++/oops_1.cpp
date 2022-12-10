#include <iostream>
using namespace std;

class inventory
{
    int num;
    int itemId[100];
    int itemPrice[100];

public:
    void create();
    void display();
};

void inventory::create()
{
    cout << "Enter no. of items : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter Id of Item " << i + 1 << ":-" << endl;
        cin >> itemId[i];
        cout << "Enter Price of Item " << i + 1 << ":-" << endl;
        cin >> itemPrice[i];
    }
    cout << "Inventory created successfully\n";
}

void inventory::display()
{
    for (int i = 0; i < num; i++)
    {
        cout <<"Item "<<i+1<<" ---> Id : "<<itemId[i]<<" ---> Price : "<<itemPrice[i]<<endl;
    }
}

int main()
{
    inventory inv_1;
    inv_1.create();
    inv_1.display();
    return 0;
}