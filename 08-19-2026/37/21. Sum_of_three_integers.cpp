#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"Enter a number ";
    cin>>b;
    cout<<"Enter a number ";
    cin>>c;
    if(a+b==c || a+c==b || b+c==a)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}
