#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;
    static int nextId;

public:
    Employee(string n, double s) : name(n), salary(s) {
        id = nextId++;
    }
    void display() {
        cout << "ID: " << id << " | Name: " << name << " | Salary: $" << salary << endl;
    }
};

int Employee::nextId = 1001;

int main() {
    Employee e1("Adarsh", 50000);
    Employee e2("Arghya", 60000);
    e1.display();
    e2.display();
    return 0;
}