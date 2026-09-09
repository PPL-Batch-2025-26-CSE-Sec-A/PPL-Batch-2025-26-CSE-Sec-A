#include <iostream>
#include <string>
using namespace std;
class Account {
    string holder;
    double balance;
public:
    Account(string h, double b) : holder(h), balance(b) {}
    Account(const Account &a) : holder(a.holder), balance(a.balance) {}
    void deposit(double amt) { balance += amt; }
    void display() {
        cout << "Holder: " << holder << ", Balance: " << balance << endl;
    }
};
int main() {
    Account a1("Mohan", 5000);
    Account a2(a1);   
    a2.deposit(2000);
    a1.display();
    a2.display();
    return 0;
}

