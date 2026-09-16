#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter angle b/w side a and b: ";
    cin>>a;
    cout<<"Enter angle b/w side b and c: ";
    cin>>b;
    cout<<"The angle of the third side (c and a) is: "<<180-a-b;
    return 0;
}
