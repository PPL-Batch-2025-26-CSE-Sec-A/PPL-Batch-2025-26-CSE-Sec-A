#include<iostream>
int main(){
    using namespace std;
    //perfect number= factors of num
    int i,n,sumUp=0;
    cout<<"Enter a number to check perfect number: ";
    cin>>n;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sumUp+=i; //adds the factor eg:1,2,3..
        }
    }
    if(n==sumUp&&n>0){
        cout<<"The given number is a PERFECT number";
    }else{
        cout<<"The given number is NOT a PERFECT number";
    }
    return 0;
}
