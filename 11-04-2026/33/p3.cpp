#include <iostream>
using namespace std;

int main() {
    double balance, withdraw;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    try {
        if (withdraw <= 0) {
            throw 1;
        }
        else if (withdraw > balance) {
            throw 2;
        }
        else {
            balance = balance - withdraw;

            cout << "\nWithdrawal Successful!" << endl;
            cout << "Updated Account Balance: Rs. "
                 << balance << endl;
        }
    }

    catch (int error) {
        if (error == 1) {
            cout << "Error: Invalid withdrawal amount!"
                 << endl;
        }
        else if (error == 2) {
            cout << "Error: Insufficient Balance!"
                 << endl;
        }
    }

    return 0;
}