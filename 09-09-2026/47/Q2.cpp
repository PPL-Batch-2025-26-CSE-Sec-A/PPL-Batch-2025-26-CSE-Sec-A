// A bank wants to create a new account with initial balance. When a joint account is needed, it should copy details from existing account.
// a) Use parameterized constructor to initialize the account holder name and balance amount
// b) Implement copy constructor for joint account holder
// c) Implement a “deposit()” function to change the copied object
 
#include <iostream>
using namespace std;

class BankAccount
{
    string accountHolder;
    float balance;

public:

    BankAccount(string name, float amount)
    {
        accountHolder = name;
        balance = amount;
    }

    BankAccount(BankAccount &account)
    {
        accountHolder = account.accountHolder;
        balance = account.balance;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void display()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{

    BankAccount account1("Rahul", 50000);

    BankAccount account2(account1);

    cout << "Original Account:" << endl;
    account1.display();

    account2.deposit(10000);

    cout << "\nJoint Account After Deposit:" << endl;
    account2.display();

    return 0;
}
