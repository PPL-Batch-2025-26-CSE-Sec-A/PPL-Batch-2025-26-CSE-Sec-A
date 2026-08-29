#include<iostream>
using namespace std;
int main()
{
    int a,sum=0,i;
    cout<<"Enter a number ";
    cin>>a;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
        cout << "Perfect number ";
    else
        cout << "Not a perfect number ";
    return 0;
}
