#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int sum= a+b;
    if(sum==30||a==30||b==30){
        cout<<"Result: True";
    }else{
        cout<<"Result: False";
    }
    return 0;
}