#include <iostream>
using namespace std;

class Employee
{
    protected:
        int emp_ID;
        string name;

    public:
        Employee(int id, string n)
        {
            emp_ID = id;
            name = n;
        }
        virtual double calculateSalary() = 0;

        virtual void display()
        {
            cout<<"Employee ID: "<<emp_ID<<endl;
            cout<<"Name: "<<name<<endl;
        }
};

class PermanentEmployee : public Employee
{
    double basic_Salary;

    public:
        PermanentEmployee(int id, string n, double salary) : Employee(id, n)
        {
            basic_Salary = salary;
        }

        double calculateSalary() override
        {
            return basic_Salary + (basic_Salary * 0.20) + (basic_Salary * 0.10);
        }
};

class ContractEmployee : public Employee
{
    int hoursWorked;
    double hourlyRate;

    public:
        ContractEmployee(int id, string n, int hours, double rate) : Employee(id, n)
        {
            hoursWorked = hours;
            hourlyRate = rate;
        }

        double calculateSalary() override
        {
            return hoursWorked * hourlyRate;
        }
};

int main()
{
    PermanentEmployee p(101, "Tanzeel", 36000);
    ContractEmployee c(102, "Siddiqui", 32, 500);

    Employee *e;
    
    e = &p;
    e->display();
    cout<<"Salary: Rs. "<<e->calculateSalary()<<endl;

    cout<<endl;

    e = &c;
    e->display();
    cout<<"Salary: Rs. "<<e->calculateSalary()<<endl;

    return 0;
}