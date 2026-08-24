#include<iostream>
using namespace std;

int main()
{
    int n,difference=0,triple;
    cout<<"Enter a number ";
    cin>>n;
    if(n>51)
    {
        difference=n-51;
        triple=3*difference;
        cout<<"Absolute difference is " << triple <<endl;
    }
    else if(n<51)
    {
        difference=51-n;
        cout<<"Absolute difference is " << difference <<endl;
    }
    else
    {
        cout<<"Absolute difference is  0 " << endl;
    }
    return 0;
}
