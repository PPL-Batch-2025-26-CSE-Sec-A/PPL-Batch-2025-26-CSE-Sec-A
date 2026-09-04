#include<iostream>
using namespace std;
class Employee
{
    string name;
    float salary;
    int id;
    static int nextId;
public:
    Employee(string n,float s)
    {
        name=n;
        salary=s;
        id=nextId;
        nextId++;
    }
    void display()
    {
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int Employee::nextId=1001;
int main()
{
    Employee e1("Siya",50000);
    Employee e2("Rahul",45000);
    Employee e3("Riya",40000);
    e1.display();
    cout<<endl;
    e2.display();
    cout<<endl;
    e3.display();
    return 0;
}
