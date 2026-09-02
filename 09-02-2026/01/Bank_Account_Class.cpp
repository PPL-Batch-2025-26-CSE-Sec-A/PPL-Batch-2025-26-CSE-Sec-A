#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Static variable shared by all accounts
    static double interestRate;

    // Parameterized constructor
    BankAccount(string name, double bal) {
        accountHolder = name;
        balance = bal;
    }

    // Static function to change interest rate
    static void changeInterestRate(double rate) {
        interestRate = rate;
    }

    // Function to display account details
    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << endl;
    }
};

// Definition of static variable
double BankAccount::interestRate = 5.0;

int main() {
    BankAccount account1("Rahul", 50000);
    BankAccount account2("Sneha", 75000);

    cout << "Before changing interest rate:" << endl;
    account1.display();
    account2.display();

    // Changing interest rate for all accounts
    BankAccount::changeInterestRate(7.5);

    cout << "After changing interest rate:" << endl;
    account1.display();
    account2.display();

    return 0;
}
