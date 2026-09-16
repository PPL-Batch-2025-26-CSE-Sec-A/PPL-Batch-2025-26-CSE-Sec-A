#include <iostream>
using namespace std;

int main()
{
    int n, first, last, digits, power, middle, result;

    cout << "Enter a number: ";
    cin >> n;

    last = n % 10;

    power = 1;
    digits = n;

    while(digits >= 10)
    {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    middle = n % power;
    middle = middle / 10;

    result = last * power + middle * 10 + first;

    cout << "Number after swapping first and last digits: " << result;

    return 0;
}
