#include <iostream>
using namespace std;

int main()
{
    int n, first, last, dig = 1;
    cout<<"Enter a number: ";
    cin>>n;

    int temp = n;
    last = n%10;

    while(temp >= 10)
    {
        temp = temp / 10;
        dig = dig *10;
    }
    first = temp;

    n = n-first * dig;
    n = n-last;
    n = n+last*dig;
    n = n+first;

    cout<<"Number after swapping: "<<n;
    return 0;
}