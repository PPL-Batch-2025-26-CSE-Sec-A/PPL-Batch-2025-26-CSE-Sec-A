#include<iostream>
using namespace std;
int main()
{
    int arr[7],i,j,temp;
    cout<< "Enter numbers ";
    for(i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<< "Decreasing orders ";
    for(i=0;i<7;i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}
