#include <iostream>
using namespace std;

int main()
{
    int a[7];
    cout<<"Enter 7 numbers: ";
    for(int i=0;i<7;i++)
        cin>>a[i];

    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(a[i] < a[j])
                swap(a[i], a[j]);
        }
    }
    cout<<"Numbers in Decending order: "<<endl;
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
    return 0;
}