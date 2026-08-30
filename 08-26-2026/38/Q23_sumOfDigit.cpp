#include<iostream>
int main(){
    using namespace std;
    int n,sum=0,mod;
    cout<<"Enter number to find sum of digits: ";
    cin>>n;
    while(n>0){
       mod=n%10;
       sum+=mod;
       n/=10;
    }
    cout<<"The sum is: "<<sum;
    return 0;
}
