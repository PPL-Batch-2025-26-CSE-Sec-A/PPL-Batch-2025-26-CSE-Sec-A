
#include <iostream>
using namespace std;

// Custom exception classes
class InsufficientBalance {
};

class InvalidWithdrawal {
};

int main() {

    double balance, withdrawal;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;

    try {

        // Check invalid withdrawal amount
        if (withdrawal <= 0) {
            throw InvalidWithdrawal();
        }

        // Check insufficient balance
        if (withdrawal > balance) {
            throw InsufficientBalance();
        }

        // Process successful withdrawal
        balance = balance - withdrawal;

        cout << "Withdrawal successful!" << endl;
        cout << "Updated account balance: "
             << balance << endl;
    }

    catch (InvalidWithdrawal e) {
        cout << "Error: Withdrawal amount must be "
             << "greater than zero." << endl;
    }

    catch (InsufficientBalance e) {
        cout << "Error: Insufficient account balance."
             << endl;
    }

    return 0;
}
