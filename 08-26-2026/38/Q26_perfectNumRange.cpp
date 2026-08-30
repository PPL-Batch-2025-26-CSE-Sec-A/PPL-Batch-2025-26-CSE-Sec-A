#include<iostream>

int perfectNum(int n){
    int i,sumUp=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sumUp+=i; //adds the factor eg:1,2,3..
        }
    }

    return sumUp;
}

int main(){
    using namespace std;
    //perfect number= factors of num
    int i,a,b;
    cout<<"Enter the starting number to check perfect number: ";
    cin>>a;
    cout<<"Enter the range (till which it will check): ";
    cin>>b;
    bool foundAny= false;
    cout<<"The perfect numbers are: ";
    if(a<=0||b<=0||a>b){
        cout<<"Please enter a valid natural number range!";
        return 0;
    }
    for(i=a;i<=b;i++){
        if(i==perfectNum(i)){
            cout<<i<<" ";
            foundAny=true;
        }
    }
    if(!foundAny){
        cout<<"None found in this range.";
    }
    return 0;
}
