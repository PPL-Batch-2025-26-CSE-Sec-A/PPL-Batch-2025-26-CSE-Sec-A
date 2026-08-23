#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;

    int difference = abs(n - 51);

    if (n > 51)
        difference = difference * 3;

    cout << difference;

    return 0;
}