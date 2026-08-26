#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the range (start and end): ";
    cin >> start >> end;
    cout << "Perfect numbers in the range " << start << " to " << end << " are: ";
    for (int n = start; n <= end; ++n) {
        int sum = 0;
        for (int i = 1; i < n; ++i) {
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