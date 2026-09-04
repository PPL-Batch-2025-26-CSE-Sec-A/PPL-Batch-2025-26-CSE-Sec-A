#include<iostream>
using namespace std;
class BankAccount
{
    string Accountholder;
    float balance;
    static float interestRate;
public:
    BankAccount(string a, float b)
    {
        Accountholder=a;
        balance=b;
    }
    static void changeInterestRate(float rate)
    {
        interestRate=rate;
    }
    void display()
    {
        cout<< "Account Holder " << Accountholder << endl;
        cout<< "Balance " << balance << endl;
        cout<< "Interest Rate " << interestRate << "%" << endl;
    }
};
float BankAccount::interestRate=9.0;
int main()
{
    BankAccount a1("A", 10000);
    BankAccount a2("B", 30000);
    cout<<"Before changing interest rate " << endl;
    a1.display();
    cout<< endl;
    BankAccount::changeInterestRate(10.0);
    cout<<"After changing interest rate " << endl;
    a2.display();
    cout<< endl;
    return 0;
}
