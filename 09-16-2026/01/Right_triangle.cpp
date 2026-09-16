#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a*a + b*b == c*c ||
        a*a + c*c == b*b ||
        b*b + c*c == a*a)
        cout << "It forms a right triangle.";
    else
        cout << "It does not form a right triangle.";

    return 0;
}
