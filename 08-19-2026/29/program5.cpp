#include <iostream>
using namespace std;

int calculateDifference(int n) {
    int diff = abs(n - 51);
    if (n > 51) {
        return 3 * diff;
    }
    return diff;
}

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    cout << "Result: " << calculateDifference(n) << endl;

    return 0;
}
