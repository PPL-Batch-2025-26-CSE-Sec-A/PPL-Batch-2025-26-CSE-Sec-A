#include<iostream>
using namespace std;
class BankAccount
{
    string name;
    float balance;
public:
    BankAccount(string n,float b)
    {
        name=n;
        balance=b;
    }
    BankAccount(BankAccount &a)
    {
        name=a.name;
        balance=a.balance;
    }
    void deposit(float amount)
    {
        balance=balance+amount;
    }
    void display()
    {
        cout<<"Account Holder: "<<name<<endl;
        cout << "Balance: "<<balance<<endl;
    }
};
int main()
{
    BankAccount a1("Siya", 5000);
    cout<<"Original Account:"<<endl;
    a1.display();
    BankAccount a2(a1);
    a2.deposit(2000);
    cout << "\nJoint Account after Deposit:" << endl;
    a2.display();
    return 0;
}
