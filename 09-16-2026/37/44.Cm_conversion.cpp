#include<iostream>
using namespace std;
int main()
{
    float cm,m,km;
    cout<< "Enter length in centimetres ";
    cin>>cm;
    m=cm/100;
    km=m/1000;
    cout << "Length in metres is " << m << endl;
    cout << "Length in kilometres is " << km;
    return 0;
}
