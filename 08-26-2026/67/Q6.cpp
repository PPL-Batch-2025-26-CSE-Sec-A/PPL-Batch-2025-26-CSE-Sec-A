//Write in C++ to check if a number is a Strong number

#include <iostream>
using namespace std;

int main()
{
    int n, original, digit;
    int sum = 0;
    int fact;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0)
    {
        digit = n % 10;

        fact = 1;

        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original)
        cout << "The number is a Strong Number";
    else
        cout << "The number is not a Strong Number";

    return 0;
}