#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number a= ";
    cin>>a;
    cout<<"Enter second number b= ";
    cin>>b;
    cout<<"Enter second number c= ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is the largest number";
    }else if(b>a && b>c){
        cout<<b<<" is the largest number";
    }else{
        cout<<c<<" is the largest number";
    }
    return 0;
}