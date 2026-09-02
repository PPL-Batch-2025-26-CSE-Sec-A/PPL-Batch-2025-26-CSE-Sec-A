#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    float balance;
    static float interestRate;

public:
    BankAccount(string name, float bal)
    {
        accountHolder = name;
        balance = bal;
    }

    static void changeInterestRate(float rate)
    {
        interestRate = rate;
    }

    void display()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << endl;
    }
};

float BankAccount::interestRate = 5.0;

int main()
{
    BankAccount a1("Arpan", 50000);
    BankAccount a2("Rahul", 75000);

    cout << "Before changing interest rate:" << endl;
    a1.display();
    a2.display();

    BankAccount::changeInterestRate(7.5);

    cout << "After changing interest rate:" << endl;
    a1.display();
    a2.display();

    return 0;
}