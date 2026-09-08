#include <iostream>
using namespace std;

class Employee
{
private:
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
    float totalSalary = e.basicSalary + e.bonus;

    cout << "Basic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << totalSalary << endl;
}

int main()
{
    Employee e(30000, 5000);

    calculateSalary(e);

    return 0;
}