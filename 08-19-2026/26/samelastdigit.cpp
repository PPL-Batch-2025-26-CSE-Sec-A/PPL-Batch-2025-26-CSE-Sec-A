#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two non-negative integers: ";
    cin >> a >> b;
    
    if (a % 10 == b % 10)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}

