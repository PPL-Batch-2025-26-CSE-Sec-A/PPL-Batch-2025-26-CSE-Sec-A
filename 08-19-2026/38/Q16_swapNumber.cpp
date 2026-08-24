#include<iostream>
int main(){
    using namespace std;
    int a,b;
    cout<<"Enter first number for variable a= ";
    cin>>a;
    cout<<"Enter second number for variable b= ";
    cin>>b;
    a=b-a;
    b=b-a;
    a=a+b;
    cout<<"Swaping them"<<endl;
    cout<<"a= " <<a<<endl;
    cout<<"b= " <<b;
    return 0;

}
