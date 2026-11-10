#include <iostream>
using namespace std;

int main() {
    double balance, amount;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    try {
        if (amount <= 0) {
            throw 'i';
        }

        if (amount > balance) {
            throw 1;
        }

        balance = balance - amount;

        cout << "Withdrawal successful!" << endl;
        cout << "New balance = Rs. "
             << balance << endl;
    }
    catch (char x) {
        cout << "Invalid withdrawal amount!";
    }
    catch (int x) {
        cout << "Insufficient balance!";
    }

    return 0;
}
