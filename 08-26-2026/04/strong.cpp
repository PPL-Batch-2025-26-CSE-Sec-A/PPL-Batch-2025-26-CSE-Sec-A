#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;
    cout << "Enter a positive integer: ";
    cin >> n;
    int temp = n;
    while (temp != 0) {
        digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; ++i) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == n) {
        cout << n << " is a Strong number.";
    } else {
        cout << n << " is not a Strong number.";
    }
    return 0;
}