#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + factorial(digit);
        n = n / 10;
    }

    if (sum == original)
        cout << original << " is a Strong number";
    else
        cout << original << " is not a Strong number";

    return 0;
}
