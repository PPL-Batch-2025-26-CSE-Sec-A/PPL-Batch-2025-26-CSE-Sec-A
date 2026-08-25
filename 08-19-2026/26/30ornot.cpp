#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    if (a == 30 || b == 30 || a + b == 30)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}

