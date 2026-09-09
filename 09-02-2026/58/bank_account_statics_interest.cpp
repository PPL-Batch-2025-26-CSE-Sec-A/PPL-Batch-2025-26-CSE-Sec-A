#include <iostream>
using namespace std;

class BankAccount {
    string holder;
    float balance;
    static float interestRate;

public:
    BankAccount(string h, float b) {
        holder = h;
        balance = b;
    }

    static void changeInterestRate(float rate) {
        interestRate = rate;
    }

    void display() {
        cout << "Account Holder: " << holder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

float BankAccount::interestRate = 5.0;

int main() {
    BankAccount a1("Mohan", 50000);
    BankAccount a2("Rahul", 70000);

    a1.display();
    cout << endl;

    a2.display();

    cout << "\nChanging Interest Rate...\n";
    BankAccount::changeInterestRate(7.0);

    a1.display();
    cout << endl;
    a2.display();

    return 0;
}
