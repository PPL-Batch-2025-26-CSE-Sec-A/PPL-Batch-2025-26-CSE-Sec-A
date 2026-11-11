#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two non-negative integers: "<<endl;
    cin >> num1 >> num2;

    if (num1 % 10 == num2 % 10)
        cout << "They have the same last digit."<<endl;
    else
        cout << "They do not have the same last digit."<<endl;

    return 0;
}