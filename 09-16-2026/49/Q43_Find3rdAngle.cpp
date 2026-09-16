#include <iostream>
using namespace std;

int main()
{
    float angle1, angle2, angle3;

    cout << "Enter first angle: ";
    cin >> angle1;

    cout << "Enter second angle: ";
    cin >> angle2;

    angle3 = 180 - angle1 - angle2;

    cout << "Third angle = " << angle3 << " degree";

    return 0;
}
