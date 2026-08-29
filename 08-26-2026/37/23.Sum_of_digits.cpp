#include<iostream>
using namespace std;
int main()
{
    int a,sum=0,digit;
    cout<<"Enter a number ";
    cin>>a;
    while(a>0)
    {
        digit=a%10;
        sum=sum+digit;
        a=a/10;
    }
    cout<<"Sum of digits is " << sum;
    return 0;
}
