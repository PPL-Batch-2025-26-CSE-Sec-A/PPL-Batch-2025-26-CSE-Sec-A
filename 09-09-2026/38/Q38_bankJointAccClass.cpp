#include<iostream>
using namespace std;
class Bank{
    string name;
    float balance;
public:
    Bank(string accHolder_name,float acc_balance){
        name=accHolder_name;
        balance=acc_balance;
    }
    void deposit(float amount){
        balance=balance+amount;
    }
    void display(){
        cout<<"Account Holder Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    cout<<"Initial amount in bank Acc:"<<endl;
    Bank b1("jasmin",100000);
    b1.display();
    Bank b2(b1); //copied object
    //changing copy object
    b2.deposit(50000);
    cout<<endl<<"Balance after adding joint account: "<<endl;
    b2.display();
    return 0;
}
