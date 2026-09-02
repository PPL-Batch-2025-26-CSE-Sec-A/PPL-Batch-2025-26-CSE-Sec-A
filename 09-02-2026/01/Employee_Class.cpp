#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    int id;

    static int nextId;

public:
    // Parameterized Constructor
    Employee(string n, double s) {
        name = n;
        salary = s;
        id = nextId;   // Assign current ID
        nextId++;      // Increase ID for next employee
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Static variable definition
int Employee::nextId = 1001;

int main() {
    Employee e1("Rahul", 30000);
    Employee e2("Sneha", 45000);
    Employee e3("Amit", 50000);

    e1.display();
    cout << endl;

    e2.display();
    cout << endl;

    e3.display();

    return 0;
}
