#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter 3 sides of the triangle: ";
    cin>>a>>b>>c;

    if(a>b&&a>c)
    {
        if(a*a == b*b + c*c)
            cout<<"It is a right triangle";
        else
            cout<<"Not a right triangle";
    }
    else if(b>a&&b>c)
    {
        if(b*b == c*c + a*a)
            cout<<"It is a right triangle";
        else
            cout<<"Not a right triangle";
    }
    else
    {
        if(c*c == a*a + b*b)
            cout<<"It is a right triangle";
        else
            cout<<"Not a right triangle";
    }
    return 0;
}