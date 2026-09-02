// Create Employee class with name and salary via parameterized constructor. Use static variable nextId to auto-assign employee ID starting from 1001. Every time parameterized constructor is called, ID should auto-increment.

#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

    static int nextId;

public:

    Employee(string n, float s)
    {
        id = nextId++;
        name = n;
        salary = s;
    }

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int Employee::nextId = 1001;

int main()
{
    Employee e1("Rahul", 50000);
    Employee e2("Amit", 60000);
    Employee e3("Priya", 55000);

    e1.display();
    cout << endl;

    e2.display();
    cout << endl;

    e3.display();

    return 0;
}