//Write a C++ program to enter two angles of a triangle and find the third angle.


#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter two angles: ";
    cin >> a >> b;

    c = 180 - a - b;

    cout << "Third angle = " << c << " degrees";

    return 0;
}