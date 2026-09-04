#include<iostream>
using namespace std;
class Employee
{
    string name;
    int id;
    float salary;
    static int nextID;
public:
    Employee(string a, float s)
    {
        name=a;
        salary=s;
        id=nextID;
        nextID++;
    }
    void display()
    {
        cout << "ID is " << id << endl;
        cout << "Name is " << name << endl;
        cout << "Salary is " << salary << endl;
    }
};
int Employee::nextID=1001;
int main()
{
    Employee e1("A", 30000);
    Employee e2("B", 90000);
    Employee e3("C", 10000);
    e1.display();
    cout<<endl;
    e2.display();
    cout<<endl;
    e3.display();
    return 0;
}
