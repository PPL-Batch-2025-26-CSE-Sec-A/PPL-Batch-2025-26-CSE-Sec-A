#include <iostream>
using namespace std;

class Employee {
private:
    float basicSalary;
    float bonus;

public:
    // Parameterized constructor
    Employee(float b, float bo) {
        basicSalary = b;
        bonus = bo;
    }

    // Friend function declaration
    friend void calculateTotalSalary(Employee e);
};

// Friend function definition
void calculateTotalSalary(Employee e) {
    float totalSalary = e.basicSalary + e.bonus;

    cout << "Basic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << totalSalary << endl;
}

int main() {
    float basic, bonus;

    cout << "Enter basic salary: ";
    cin >> basic;

    cout << "Enter bonus: ";
    cin >> bonus;

    Employee e1(basic, bonus);

    // Calling friend function
    calculateTotalSalary(e1);

    return 0;
}
