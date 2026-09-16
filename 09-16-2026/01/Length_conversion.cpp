#include <iostream>
using namespace std;

int main() {
    float cm, m, km;

    cout << "Enter length in centimeters: ";
    cin >> cm;

    m = cm / 100;
    km = cm / 100000;

    cout << "Length in meters = " << m << endl;
    cout << "Length in kilometers = " << km << endl;

    return 0;
}
