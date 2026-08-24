#include<iostream>
using namespace std;

int main()
{
    int a,b,sum=0;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"Enter a number ";
    cin>>b;
    if(a==30 || b==30 || a+b==30)
    {
        cout<<"True " << endl;
    }
    else
    {
        cout<<"False " << endl;
    }
    return 0;
}
