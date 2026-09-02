#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Perfect numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int sum = 0;

        // Find divisors of the number
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum = sum + i;
            }
        }

        // Check if sum of divisors equals the number
        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}
