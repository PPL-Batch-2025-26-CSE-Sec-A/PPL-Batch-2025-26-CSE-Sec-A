#include <iostream>
#include <string>
using namespace std;

class Account {
    string holderName;
    double balanceAmount;
public:
    Account(string name, double balance) : holderName(name), balanceAmount(balance) {}
    
    Account(const Account &acc) {
        holderName = acc.holderName;
        balanceAmount = acc.balanceAmount;
    }
    
    void deposit(double amount) {
        balanceAmount += amount;
    }
    
    void display() {
        cout << "Account Holder: " << holderName << ", Balance: $" << balanceAmount << endl;
    }
};

int main() {
    Account primaryAccount("Arnab Ghorai", 5000.0);
    Account jointAccount = primaryAccount; 
    
    jointAccount.deposit(1500.0); 
    
    cout << "Primary Account Details: ";
    primaryAccount.display();
    cout << "Joint Account Details (After Deposit): ";
    jointAccount.display();
    
    return 0;
}