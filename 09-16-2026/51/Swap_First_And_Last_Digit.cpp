#include <iostream>
using namespace std;

int main()
{
    int n, first, last, digits, middle, power = 1;

    cout << "Enter a number: ";
    cin >> n;

    last = n % 10;

    int temp = n;
    digits = 0;

    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    for(int i=1; i<digits; i++)
    {
        power = power * 10;
    }

    first = n / power;
    middle = (n % power) / 10;

    int result = last * power + middle * 10 + first;

    cout << "Number after swapping = " << result;

    return 0;
}
