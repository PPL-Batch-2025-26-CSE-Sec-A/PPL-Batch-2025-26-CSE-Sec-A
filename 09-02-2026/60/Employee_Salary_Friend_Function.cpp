#include<iostream>
using namespace std;
class Employee
{
    string name;
    float basicSalary;
    float bonus;
public:
    Employee(string n,float s,float b)
    {
        name=n;
        basicSalary=s;
        bonus=b;
    }
    friend void totalSalary(Employee);
};
void totalSalary(Employee e)
{
    float total=e.basicSalary+e.bonus;
    cout<<"Employee Name: "<<e.name<< endl;
    cout<<"Basic Salary: "<<e.basicSalary<<endl;
    cout<<"Bonus: "<< e.bonus<<endl;
    cout<<"Total Salary: "<<total<<endl;
}
int main()
{
    Employee e1("Siya",50000,5000);
    totalSalary(e1);
    return 0;
}
