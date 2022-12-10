#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int count, size;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        cin>>size;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            cin>>arr[j];
        }
        int arr2[size];
        for (int j = 0; j < size; j++)
        {
            arr2[j]=0;
        }
        for (int j = 0; j < size; j++)
        {
            arr2[arr[j]-1]++;
        }
        int max=-1;
        int temp;
        for (int j = 0; j < size; j++)
        {
            if (arr2[j]>max)
            {
                max=arr2[j];
                temp=j;
            }
        }
        cout<<size-arr2[temp]<<endl;
    }
    
    
    return 0;
}