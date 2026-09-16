#include<iostream>
using namespace std;
int main()
{
    int a,b,c,temp,d=1;
    cout<< "Enter a number ";
    cin>>a;
    c=a%10;
    temp=a;
    while(temp>=10)
    {
        temp=temp/10;
        d=d*10;
    }
    b=temp;
    a=a-b*d-c;
    a=a+c*d+b;
    cout<< "After swapping " << a;
    return 0;
}
