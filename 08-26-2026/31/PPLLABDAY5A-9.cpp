#include <iostream>
using namespace std;

class Employee {
    float salary, allowance;

public:
    void input() {
        cout << "Enter Salary: ";
        cin >> salary;

        cout << "Enter Allowance: ";
        cin >> allowance;
    }

    void display() {
        cout << "Salary = " << salary << endl;
        cout << "Allowance = " << allowance << endl;
    }
};

int main() {
    Employee e[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        e[i].input();
    }

    cout << "\n--- Employee Details ---\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].display();
    }

    return 0;
}