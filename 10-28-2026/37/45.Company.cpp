#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
public:
    void getData()
    {
        cout<< "Enter Employee ID ";
        cin>>id;
        cout<< "Enter Employee name ";
        cin>>name;
    }
    virtual void calculateSalary()=0;
};
class PermanentEmployee:public Employee
{
    float basicSalary,totalSalary;
public:
    void calculateSalary()
    {
        cout<< "ENter baisc salary ";
        cin>>basicSalary;
        totalSalary=basicSalary+(basicSalary*20/100)+(basicSalary*10/100);
        cout<< "Permanent Employee " << endl;
        cout<< "Employee ID " << id << endl;
        cout<< "Employee Name " << name << endl;
        cout<< "Total Salary " << totalSalary << endl;
    }
};
class ContractEmployee:public Employee
{
    int hours,rate,totalSalary;
public:
    void calculateSalary()
    {
        cout<< "Enter hours worked ";
        cin>>hours;
        cout<< "Enter hourly rate ";
        cin>>rate;
        totalSalary=hours*rate;
        cout<< "Permanent Employee " << endl;
        cout<< "Employee ID " << id << endl;
        cout<< "Employee Name " << name << endl;
        cout<< "Total Salary " << totalSalary << endl;
    }
};
int main()
{
    PermanentEmployee e;
    ContractEmployee a;
    Employee *ptr;
    cout<< "Permanent Employee " << endl;
    e.getData();
    ptr=&e;
    ptr->calculateSalary();
    cout<< "Contract Employee " << endl;
    a.getData();
    ptr=&a;
    ptr->calculateSalary();
    return 0;
}
