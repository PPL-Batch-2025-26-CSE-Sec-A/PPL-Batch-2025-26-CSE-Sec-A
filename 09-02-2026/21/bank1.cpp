#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;
    static double interestRate;

public:
    BankAccount(string name, double bal) : accountHolder(name), balance(bal) {}

    static void changeInterestRate(double newRate) {
        interestRate = newRate;
    }
    void display() {
        cout << "Holder: " << accountHolder << ", Balance: $" << balance 
             << ", Rate: " << interestRate << "%" << endl;
    }
};

double BankAccount::interestRate = 3.5; 

int main() {
    BankAccount b1("Allen", 1000);
    b1.display();
    BankAccount::changeInterestRate(4.5);
    b1.display();
    return 0;
}
