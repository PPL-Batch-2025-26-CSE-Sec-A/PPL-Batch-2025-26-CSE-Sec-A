#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    
    if (a + b == c || a + c == b || b + c == a)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}

