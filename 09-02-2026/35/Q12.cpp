#include <iostream>
using namespace std;

class Employee {
private:
    float basicSalary;
    float bonus;

public:
    void input() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Bonus: ";
        cin >> bonus;
    }
    friend void calculateTotal(Employee e);
};
void calculateTotal(Employee e) {
    float totalSalary = e.basicSalary + e.bonus;

    cout << "\nBasic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << totalSalary << endl;
}

int main() {
    Employee e;

    e.input();

    calculateTotal(e);

    return 0;
}
