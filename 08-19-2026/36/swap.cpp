#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<" a is :";
    cin>>a;
    cout<<" b  is :";
    cin>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}