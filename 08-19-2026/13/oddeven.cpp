#include <iostream>

int main() {
    using namespace std;
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    if (n % 2 == 0) {
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }
    
    return 0;
}