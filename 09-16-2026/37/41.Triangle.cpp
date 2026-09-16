#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<< "Enter a number ";
    cin>>a;
    cout<< "Enter a number ";
    cin>>b;
    cout<< "Enter a number ";
    cin>>c;
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
        cout<< "Right Triangle ";
    else
        cout<< "Not a right triangle ";
    return 0;
}
