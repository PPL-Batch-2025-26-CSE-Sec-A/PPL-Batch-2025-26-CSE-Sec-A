#include <iostream>
using namespace std;
int main()
{
    int n, difference;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 51)
        difference = 3 * (n - 51);
    else
        difference = 51 - n;

    cout << "Result = " << difference;

    return 0;
}