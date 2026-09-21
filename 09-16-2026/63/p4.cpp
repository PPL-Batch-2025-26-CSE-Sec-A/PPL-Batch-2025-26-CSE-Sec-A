#include <iostream>
using namespace std;

int main() {
    float angle1, angle2, angle3;
    cout << "Enter two angles of the triangle: ";
    cin >> angle1 >> angle2;
    
    angle3 = 180.0 - (angle1 + angle2);
    
    cout << "The third angle is: " << angle3 << endl;
    return 0;
}