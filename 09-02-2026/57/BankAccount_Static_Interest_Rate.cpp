#include<iostream>
using namespace std;
class BankAccount
{
    string holder;
    float balance;
    static float interestRate;
public:
    BankAccount(string h,float b)
    {
        holder=h;
        balance=b;
    }
    void display()
    {
        cout<<"Account Holder: "<<holder<< endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
    }
    static void changeInterestRate(float rate)
    {
        interestRate=rate;
    }
};
float BankAccount::interestRate=5.0;
int main()
{
    BankAccount a1("Siya",50000);
    BankAccount a2("Rahul",30000);
    cout<<"Before changing interest rate:"<<endl;
    a1.display();
    a2.display();
    BankAccount::changeInterestRate(6.5);
    cout << "\nAfter changing interest rate:" << endl;
    a1.display();
    a2.display();
    return 0;
}
