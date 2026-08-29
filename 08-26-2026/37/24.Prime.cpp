#include<iostream>
using namespace std;
int main()
{
    int a,i,count=0;
    cout<<"Enter a number ";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
            count++;
    }
    if(count==2)
        cout<<"Prime Number ";
    else
        cout<<"Not a prime number ";
    return 0;
}
