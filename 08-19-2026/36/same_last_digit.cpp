#include<iostream>
using namespace std;
int  main(){
    int a,b;
    cout<<" Enter 1st Number :";
    cin>>a; 
    cout<<" Enter 2nd Number :";
    cin>>b;
    int last_digit_a = a % 10;
    int last_digit_b = b % 10;
    if(last_digit_a == last_digit_b){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}