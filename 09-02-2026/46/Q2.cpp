//Design BankAccount class where account holder and balance are set via parameterized constructor. The interest rate is same for all accounts, so make it static. Create a static function to change interest rate.

#include <iostream>
using namespace std;

class BankAccount
{
    string accountHolder;
    float balance;

    static float interestRate;

public:

    BankAccount(string name, float bal)
    {
        accountHolder = name;
        balance = bal;
    }

    void display()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    // Static function to change interest rate
    static void changeInterestRate(float rate)
    {
        interestRate = rate;
    }
};

float BankAccount::interestRate = 5.0;

int main()
{
    BankAccount a1("Rahul", 50000);
    BankAccount a2("Amit", 75000);

    cout << "Before changing interest rate:" << endl;

    a1.display();
    cout << endl;

    a2.display();

    BankAccount::changeInterestRate(7.5);

    cout << "\nAfter changing interest rate:" << endl;

    a1.display();
    cout << endl;

    a2.display();

    return 0;
}