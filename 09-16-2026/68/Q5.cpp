//Write a C++ program to enter length in centimeters and convert it into meters and kilometers.

#include <iostream>
using namespace std;

int main() {
    float cm, meter, km;

    cout << "Enter length in centimeters: ";
    cin >> cm;

    meter = cm / 100;
    km = cm / 100000;

    cout << "Meters = " << meter << endl;
    cout << "Kilometers = " << km;

    return 0;
}