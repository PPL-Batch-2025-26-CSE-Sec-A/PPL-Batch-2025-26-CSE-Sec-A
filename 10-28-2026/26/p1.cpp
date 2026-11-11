#include <iostream>
using namespace std;

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

    virtual ~Employee() {}
};

class PermanentEmployee : public Employee {
    double basicSalary;

public:
    PermanentEmployee(int id, string n, double basic)
        : Employee(id, n) {
        basicSalary = basic;
    }

    double calculateSalary() override {
        return basicSalary + (basicSalary * 0.20)
                           + (basicSalary * 0.10);
    }
};

class ContractEmployee : public Employee {
    double hoursWorked, hourlyRate;

public:
    ContractEmployee(int id, string n, double hours, double rate)
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

    Employee *ptr;

    ptr = &p;
    cout << "Permanent Employee Salary: Rs. "
         << ptr->calculateSalary() << endl;

    ptr = &c;
    cout << "Contract Employee Salary: Rs. "
         << ptr->calculateSalary() << endl;

    return 0;
}

