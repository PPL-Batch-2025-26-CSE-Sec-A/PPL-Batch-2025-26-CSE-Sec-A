#include<iostream>
using namespace std;
int main()
{
    int a,temp,fact,digit,sum=0;
    cout<<"Enter a number ";
    cin>>a;
    temp=a;
    while(a>0)
    {
        digit=a%10;
        fact=1;
        for(int i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        a=a/10;
    }
    if(sum==temp)
        cout<<"Strong number ";
    else
        cout<<"Not a string number ";
    return 0;
}

