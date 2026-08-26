#include<iostream>
using namespace std;
int main()
{
    int n,temp,sum = 0;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        int digit=n%10;
        int fact=1;

        for(int i=1;i<=digit;i++)
            fact=fact*i;
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
        cout<<"Strong number";
    else
        cout<<"Not a Strong number";
    return 0;
}
