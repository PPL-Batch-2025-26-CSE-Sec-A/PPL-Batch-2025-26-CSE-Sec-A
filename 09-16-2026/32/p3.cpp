#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, digits, first, last, swapped;
    cout << "Enter any number: ";
    cin >> n;
    
    temp = abs(n);
    digits = log10(temp);
    first = temp / pow(10, digits);
    last = temp % 10;
    
    swapped = last * pow(10, digits);
    swapped += temp % (int)pow(10, digits);
    swapped -= last;
    swapped += first;
    
    if (n < 0) {
        swapped = -swapped;
    }
    
    cout << "Number after swapping first and last digits: " << swapped << endl;
    return 0;
}
