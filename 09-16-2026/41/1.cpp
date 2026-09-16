#include <iostream>
using namespace std;

int main() {
    int a[7], temp;

    cout << "Enter 7 numbers: ";
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
    }

    // Sort in descending order
    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Numbers in descending order: ";
    for (int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }

    return 0;
}