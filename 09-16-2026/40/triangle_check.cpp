#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter the three side : ";
    cin >> a >> b >> c;
    if(a<=0 || b<=0 || c<=0)
    {
        cout << "Wrong input";
        return 0;
    }
    else if(((a*a)+(b*b))==(c*c))
        cout << "Right triangle can be formed.";
    else if(((a*a)+(c*c))==(b*b))
        cout << "Right triangle can be formed.";
    else if(((c*c)+(b*b))==(a*a))
        cout << "Right triangle can be formed.";
    else 
        cout << "Right triangle cannot be formed.";
    return 0;
}