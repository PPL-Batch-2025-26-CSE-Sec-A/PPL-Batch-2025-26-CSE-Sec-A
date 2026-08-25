#include<iostream>
int main(){
    using namespace std;
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int lastDigit_a=a%10;
    int lastDigit_b=b%10;
    if(lastDigit_a==lastDigit_b){
        cout<<"The given numbers have the same last digit";
    }else{
        cout<<"The given numbers DOES NOT have the same last digit";
    }
    return 0;
}

