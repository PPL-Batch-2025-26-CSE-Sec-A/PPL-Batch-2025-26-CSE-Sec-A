#include<iostream>
int main(){
    using namespace std;
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    int sumOfFirstTwo=a+b;
    int sumOfLastTwo=b+c;
    int sumOfFirstLast=a+c;
    if(sumOfFirstTwo==c||sumOfLastTwo==a||sumOfFirstLast==b){
        cout<<"YES, it is possible to add two integers to get the third integer.";
    }else{
        cout<<"NO, it is possible to add two integers to get the third integer.";
    }
    return 0;
}

