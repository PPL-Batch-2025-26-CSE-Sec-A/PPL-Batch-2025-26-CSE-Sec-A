#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;
    
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
        cout << "The sides form a right triangle." << endl;
    } else {
        cout << "The sides do not form a right triangle." << endl;
    }
    
    return 0;
}
