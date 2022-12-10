#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter an integer\n";
    cin>>num;
    int rev=0, temp;
    while(num!=0)
    {
        temp=num%10;
        num=num/10;
        rev=rev*10+temp;
    }
    cout<<rev<<endl;

    return 0;
}