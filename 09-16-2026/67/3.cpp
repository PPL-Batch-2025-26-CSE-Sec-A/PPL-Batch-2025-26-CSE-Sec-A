#include <iostream>
using namespace std;

int main() {
    int n, first, last, digits, middle, result;

    cout << "Enter a number: ";
    cin >> n;

    last = n % 10;

    digits = 1;
    int temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    middle = (n % digits) / 10;

    result = last * digits + middle * 10 + first;

    cout << "Number after swapping first and last digits: " << result;

    return 0;
}