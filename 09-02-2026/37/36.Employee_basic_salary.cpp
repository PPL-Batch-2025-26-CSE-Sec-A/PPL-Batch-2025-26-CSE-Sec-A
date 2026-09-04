#include<iostream>
using namespace std;
class Employee
{
    float basicSalary;
    float bonus;
public:
    Employee(float s, float b)
    {
        basicSalary=s;
        bonus=b;
    }
    friend void calculateSalary(Employee e);
};
void calculateSalary(Employee e)
{
    float totalSalary;
    totalSalary=e.basicSalary+e.bonus;
    cout<< "Basic Salary is "<< e.basicSalary << endl;
    cout<< "Bonus is "<< e.bonus << endl;
    cout<< "Total Salary is "<< totalSalary << endl;
}
int main()
{
    Employee e1(30000, 5000);
    calculateSalary(e1);
    return 0;
}
