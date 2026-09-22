#include <iostream>
using namespace std;
int main()
{
    int n,num;
    cout << "Enter a number: ";
    cin >> n;
    num = n;
    int last = n % 10;
    int first;
    int place = 1;
    while (n >= 10)
    {
        n = n / 10;
        place = place * 10;
    }
    first = n;
    int middle = num % place;
    middle = middle / 10;
    int result = last * place + middle * 10 + first;
    cout << "Number after swapping first and last digits: "
         << result;
    return 0;
}