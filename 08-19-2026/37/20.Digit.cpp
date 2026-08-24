#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"Enter a number ";
    cin>>b;
    if(a%10==b%10)
    {
        cout<<"Same last digit ";
    }
    else
    {
        cout<<"Does not have same last digit";
    }
    return 0;
}
