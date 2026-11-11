#include <iostream>
using namespace std;

int main() {
    float cm, meter, km;
    cout << "Enter length in centimeters: ";
    cin >> cm;
    
    meter = cm / 100.0;
    km = cm / 100000.0;
    
    cout << "Length in meters: " << meter << " m" << endl;
    cout << "Length in kilometers: " << km << " km" << endl;
    return 0;
}