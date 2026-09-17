//Write a C++ program to check whether a given length of three sides forms a right triangle.


#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    if (a * a + b * b == c * c)
        cout << "It is a right triangle";
    else
        cout << "It is not a right triangle";

    return 0;
}