#include <iostream>
using namespace std;

// Abstract base class
class Employee {
protected:
    int empID;
    string name;

public:
    Employee(int id, string n) {
        empID = id;
        name = n;
    }

    virtual double calculateSalary() = 0;

    virtual void display() {
        cout << "\nEmployee ID: " << empID;
        cout << "\nName: " << name;
        cout << "\nSalary: Rs. " << calculateSalary() << endl;
    }
};

// Derived class for permanent employee
class PermanentEmployee : public Employee {
private:
    double basicSalary;

public:
    PermanentEmployee(int id, string n, double basic)
        : Employee(id, n) {
        basicSalary = basic;
    }

    double calculateSalary() override {
        double hra = basicSalary * 0.20;
        double da = basicSalary * 0.10;

        return basicSalary + hra + da;
    }
};

// Derived class for contract employee
class ContractEmployee : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    ContractEmployee(int id, string n, int hours, double rate)
        : Employee(id, n) {
        hoursWorked = hours;
        hourlyRate = rate;
    }

    double calculateSalary() override {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    PermanentEmployee p(101, "Rahul", 30000);
    ContractEmployee c(102, "Amit", 100, 200);

    // Base class pointers
    Employee *ptr;

    ptr = &p;
    ptr->display();

    ptr = &c;
    ptr->display();

    return 0;
}
