//Write in C++ to find whether a number is perfect or not.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        cout << "The number is a Perfect Number";
    else
        cout << "The number is not a Perfect Number";

    return 0;
}