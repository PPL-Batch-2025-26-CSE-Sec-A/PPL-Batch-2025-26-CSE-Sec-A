#include<iostream>
bool isPrime(int n){
    int i;
    if(n<=1){
        return false;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    using namespace std;
    int n;
    cout<<"Enter a positive number to check its prime or not: ";
    cin>>n;
    if(isPrime(n)){
        cout<<"The given number is a PRIME number";
    }else{
        cout<<"The given number is NOT a PRIME number";
    }
    return 0;
}
