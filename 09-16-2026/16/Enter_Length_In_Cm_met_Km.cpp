#include <iostream>
using namespace std;

int main()
{
    float cm, meter, km;

    cout << "Enter length in cm: ";
    cin >> cm;

    meter = cm / 100;
    km = cm / 100000;

    cout << "Meter = " << meter << endl;
    cout << "Kilometer = " << km;

    return 0;
}
