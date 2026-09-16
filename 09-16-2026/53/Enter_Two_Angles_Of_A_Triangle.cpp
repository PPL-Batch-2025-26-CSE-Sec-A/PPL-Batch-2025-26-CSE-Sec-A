#include <iostream>
using namespace std;

int main()
{
    int angle1, angle2, angle3;

    cout << "Enter two angles: ";
    cin >> angle1 >> angle2;

    angle3 = 180 - (angle1 + angle2);

    cout << "Third Angle = " << angle3;

    return 0;
}
