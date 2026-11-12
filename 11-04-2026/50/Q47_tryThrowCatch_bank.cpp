#include<iostream>
using namespace std;
int main(){
    double balance,withdrawl;
    cout<<"Enter account balance: ";
    cin>>balance;
    cout<<"Enter amount to withdrawl: ";
    cin>>withdrawl;
    try{
        if(withdrawl<=0){
            throw 1;
        }else if(withdrawl>balance){
            throw 2;
        }else{
            balance=balance-withdrawl;
            cout<<"Withdrawl Successful"<<"\nUpdated Balance is: "<<balance;
        }
    }
    catch(int n){
        if(n==1){
            cout<<"Invalid withdrawl amount";
        }else if(n==2){
            cout<< "Insufficient balance";
        }
    }
    return 0;
}
