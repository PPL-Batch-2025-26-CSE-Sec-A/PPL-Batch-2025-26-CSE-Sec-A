#include <iostream>
using namespace std;

class Employee {
private:
    double salary, allowance;

public:
    Employee() {
        salary = 0.0;
        allowance = 0.0;
    }

    Employee(double s, double a) {
        salary = s;
        allowance = a;
    }

    void displayDetails() {
        cout << "Salary: $" << salary << ", Allowance: $" << allowance << endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        double salary, allowance;
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        cout << "Salary: ";
        cin >> salary;
        cout << "Allowance: ";
        cin >> allowance;
        employees[i] = Employee(salary, allowance);
    }

    cout << "\nEmployee Details:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Employee " << i + 1 << ": ";
        employees[i].displayDetails();
    }

    return 0;
}
