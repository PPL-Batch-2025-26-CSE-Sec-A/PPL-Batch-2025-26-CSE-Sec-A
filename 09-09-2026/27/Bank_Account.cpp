#include <iostream>
using namespace std;

class BankAccount {
private:
    string holderName;
    double balance;

public:

    BankAccount(string name, double amount) {
        holderName = name;
        balance = amount;
    }

    
    BankAccount(const BankAccount &b) {
        holderName = b.holderName;
        balance = b.balance;
    }

    
    void deposit(double amount) {
        balance = balance + amount;
    }

    void display() {
        cout << "Account Holder: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1("Utsab Maiti", 50000);

    cout << "Original Account:" << endl;
    account1.display();

    
    BankAccount jointAccount = account1;


    jointAccount.deposit(20000);

    cout << "\nJoint Account after deposit:" << endl;
    jointAccount.display();

    return 0;
}