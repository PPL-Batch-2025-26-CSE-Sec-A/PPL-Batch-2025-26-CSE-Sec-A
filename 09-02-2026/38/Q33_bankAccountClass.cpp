#include<iostream>
using namespace std;
class BankAccount{
    string accHolder;
    float balance;
    static float interestRate;
public:
    BankAccount(string acc_Holder,float acc_balance){
        accHolder= acc_Holder;
        balance= acc_balance;
    }
    static void changeInterestRate(float rate){
        interestRate=rate;
    }
    void display(){
        cout<<"Account Holder: "<<accHolder<<", Balance: "<<balance << ", Rate: " << interestRate << "%" << endl;
    }
};

float BankAccount::interestRate=6.0;

int main(){
    cout<<"----Bank Account Default interest----"<<endl;
    BankAccount b1("Jam",50000);
    BankAccount b2("joe",10000);
    b1.display();
    b2.display();
    BankAccount::changeInterestRate(4.0);
    cout<<endl<<"----Bank Account after updating the interest----"<<endl;
    b1.display();
    b2.display();
    return 0;
}

