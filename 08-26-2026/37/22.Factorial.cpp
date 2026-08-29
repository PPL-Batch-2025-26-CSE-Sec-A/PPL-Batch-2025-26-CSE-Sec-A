#include<iostream>
using namespace std;
int main()
{
    int a,fact=1,i;
    cout<<"Enter a number ";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial is " << fact << endl;
    return 0;
}
