#include <iostream>
using namespace std;

class Employee {
    float salary, allowance;

public:
    void input() {
        cout << "Enter salary: ";
        cin >> salary;

        cout << "Enter allowance: ";
        cin >> allowance;
    }

    void display() {
        cout << "Salary: " << salary << endl;
        cout << "Allowance: " << allowance << endl;
    }
};

int main() {
    Employee emp[3];
    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].input();
    }

    cout << "\n--- Employee Details ---\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].display();
    }

    return 0;
}
