#include <iostream>
using namespace std;

int main() {
    double balance, amount;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    try {
        if(amount <= 0) {
            throw 1;
        }

        if(amount > balance) {
            throw 2;
        }

        balance = balance - amount;

        cout << "Withdrawal Successful!" << endl;
        cout << "Updated Balance: Rs. " << balance;
    }

    catch(int x) {
        if(x == 1) {
            cout << "Invalid Withdrawal Amount!";
        }
        else if(x == 2) {
            cout << "Insufficient Balance!";
        }
    }

    return 0;
}