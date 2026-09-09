
#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int balance;

public:
    // Parameterized constructor
    BankAccount(string n, int b) {
        name = n;
        balance = b;
    }

    // Copy constructor
    BankAccount(BankAccount &a) {
        name = a.name;
        balance = a.balance;
    }

    // Deposit function
    void deposit(int amount) {
        balance = balance + amount;
    }

    // Display function
    void show() {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string name;
    int balance, amount;

    cout << "Enter account holder name: ";
    cin >> name;

    cout << "Enter initial balance: ";
    cin >> balance;

    // Original account
    BankAccount a1(name, balance);

    // Joint account copied from existing account
    BankAccount a2(a1);

    cout << "\nOriginal Account:" << endl;
    a1.show();

    cout << "\nEnter deposit amount for joint account: ";
    cin >> amount;

    // Change copied object
    a2.deposit(amount);

    cout << "\nJoint Account:" << endl;
    a2.show();

    return 0;
}


