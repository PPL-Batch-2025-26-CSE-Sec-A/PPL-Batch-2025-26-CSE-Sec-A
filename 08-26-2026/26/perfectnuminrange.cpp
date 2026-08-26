#include <iostream>
using namespace std;

int main()
{
    int start, end, sum;

    cout << "Enter range: ";
    cin >> start >> end;

    for(int n = start; n <= end; n++)
    {
        sum = 0;

        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
                sum = sum + i;
        }

        if(sum == n)
            cout << n << " ";
    }

    return 0;
}

