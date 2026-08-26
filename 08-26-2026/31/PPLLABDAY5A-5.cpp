#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting value: ";
    cin >> start;

    cout << "Enter ending value: ";
    cin >> end;

    cout << "Perfect numbers are: ";

    for (int n = start; n <= end; n++) {
        int sum = 0;

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == n) {
            cout << n << " ";
        }
    }

    return 0;
}