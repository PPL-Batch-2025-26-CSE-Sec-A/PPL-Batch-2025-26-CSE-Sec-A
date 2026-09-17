//Write a C++ program to swap the first and last digits of any number.

#include <iostream>
using namespace std;

int main() {
    int n, first, last, digits = 1;

    cout << "Enter a number: ";
    cin >> n;

    last = n % 10;

    int temp = n;
    while (temp >= 10) {
        temp /= 10;
        digits *= 10;
    }

    first = temp;

    n = n - first * digits - last;
    n = n + last * digits + first;

    cout << "After swapping: " << n;

    return 0;
}