//A company stores an employee’s basic salary and bonus as private members. The payroll department needs to calculate the total salary. Use friend function in C++ to calculate and display the total salary.

#include <iostream>
using namespace std;

class Employee
{
    float basicSalary;
    float bonus;

public:

    Employee(float basic, float b)
    {
        basicSalary = basic;
        bonus = b;
    }

    friend void calculateSalary(Employee e);
};

void calculateSalary(Employee e)
{
    float totalSalary;

    totalSalary = e.basicSalary + e.bonus;

    cout << "Basic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << totalSalary << endl;
}

int main()
{
    Employee e(50000, 10000);

    calculateSalary(e);

    return 0;
}